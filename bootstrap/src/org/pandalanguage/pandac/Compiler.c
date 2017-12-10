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
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn21)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn123)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn171)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn178)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn220)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn224)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn234)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn242)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn249)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn361)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn367)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn373)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn380)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn386)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn392)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn446)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn458)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn469)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn475)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn481)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn487)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn493)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn499)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn519)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn598)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn604)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn610)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn626)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn632)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn638)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn664)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn670)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn676)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn728)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn734)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn740)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn749)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn770)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn793)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn799)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn805)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn813)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn819)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn825)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn836)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn842)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn848)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn883)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn931)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn937)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn943)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn956)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn962)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn968)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn983)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn989)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn995)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1010)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1016)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1022)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1036)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1042)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1048)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1061)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1067)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1073)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1127)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1133)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1139)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1146)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1152)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1158)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1190)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1274)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1387)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1393)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1399)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1437)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1587)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1593)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1599)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1767)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1773)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1779)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1826)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1832)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1838)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1928)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1954)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1981)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1998)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2004)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2010)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2022)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2045)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2119)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2141)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2217)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2236)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2242)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2248)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2279)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2291)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2328)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2334)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2340)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2363)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2369)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2375)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2765)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2771)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2777)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2909)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2915)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2921)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3143)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3171)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3267)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3273)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3279)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3485)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3491)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3497)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3633)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3639)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3665)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3671)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3677)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3781)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3787)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3793)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3973)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4057)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4063)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4135)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4199)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4205)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4211)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4256)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4262)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4274)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4280)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4286)(panda$collections$Iterator*);
typedef void (*$fn4319)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4322)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4326)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4338)(panda$collections$Iterator*);
typedef void (*$fn4343)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4346)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4351)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4355)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4361)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4367)(panda$collections$Iterator*);
typedef void (*$fn4371)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4381)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4383)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4389)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4395)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4401)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4410)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4416)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4422)(panda$collections$Iterator*);
typedef void (*$fn4439)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 1 };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 1 };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, 1 };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, 1 };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, 1 };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 1 };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, 1 };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1 };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 23, 1 };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1 };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 33, 1 };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20\x6D\x65\x74\x68\x6F\x64\x20", 45, 1 };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 26, 1 };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, 1 };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1 };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, 1 };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 1 };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 1 };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, 1 };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 1 };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s4432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp111;
    org$pandalanguage$pandac$Position $tmp116;
    org$pandalanguage$pandac$Alias* $tmp109 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp109->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp109->refCount.value = 1;
    panda$core$String$Index$nullable $tmp113 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s112);
    panda$core$String$Index $tmp114 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp113.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp111, ((panda$core$String$Index$nullable) { $tmp114, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
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
    panda$core$String$Index$nullable index157;
    org$pandalanguage$pandac$ClassDecl* parent160;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp161;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp164;
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
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp135, ((panda$core$String$Index$nullable) { .nonnull = false }), idx130, ((panda$core$Bit) { true }));
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
    if (((panda$core$Bit) { result126 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp159 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s158);
        index157 = $tmp159;
        if (((panda$core$Bit) { index157.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp161, ((panda$core$String$Index$nullable) { .nonnull = false }), index157, ((panda$core$Bit) { false }));
            panda$core$String* $tmp162 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp161);
            org$pandalanguage$pandac$ClassDecl* $tmp163 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp162);
            parent160 = $tmp163;
            if (((panda$core$Bit) { parent160 != NULL }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp164, index157, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp165 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp164);
                panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) parent160)->name, $tmp165);
                org$pandalanguage$pandac$ClassDecl* $tmp167 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp166);
                result126 = $tmp167;
            }
            }
        }
        }
    }
    }
    return result126;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount168;
    panda$collections$ListView* foundTypes173;
    panda$core$Int64 foundCount175;
    panda$core$String* s181;
    panda$core$Range$LTpanda$core$Int64$GT $tmp200;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp169 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp169->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp169 = $tmp169->next;
    }
    $fn171 $tmp170 = $tmp169->methods[0];
    panda$core$Int64 $tmp172 = $tmp170(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount168 = $tmp172;
    panda$collections$ListView* $tmp174 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes173 = $tmp174;
    ITable* $tmp176 = ((panda$collections$CollectionView*) foundTypes173)->$class->itable;
    while ($tmp176->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp176 = $tmp176->next;
    }
    $fn178 $tmp177 = $tmp176->methods[0];
    panda$core$Int64 $tmp179 = $tmp177(((panda$collections$CollectionView*) foundTypes173));
    foundCount175 = $tmp179;
    panda$core$Bit $tmp180 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount168, foundCount175);
    if ($tmp180.value) {
    {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount168, ((panda$core$Int64) { 1 }));
        if ($tmp182.value) {
        {
            s181 = &$s183;
        }
        }
        else {
        {
            s181 = &$s184;
        }
        }
        panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s185, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s187);
        panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp188, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount168)));
        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s190);
        panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, s181);
        panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s193);
        panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s195, ((panda$core$Object*) wrap_panda$core$Int64(foundCount175)));
        panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, $tmp198);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp199);
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp200, ((panda$core$Int64) { 0 }), expectedCount168, ((panda$core$Bit) { false }));
    int64_t $tmp202 = $tmp200.min.value;
    panda$core$Int64 i201 = { $tmp202 };
    int64_t $tmp204 = $tmp200.max.value;
    bool $tmp205 = $tmp200.inclusive.value;
    bool $tmp212 = 1 > 0;
    if ($tmp212) goto $l210; else goto $l211;
    $l210:;
    if ($tmp205) goto $l213; else goto $l214;
    $l213:;
    if ($tmp202 <= $tmp204) goto $l206; else goto $l208;
    $l214:;
    if ($tmp202 < $tmp204) goto $l206; else goto $l208;
    $l211:;
    if ($tmp205) goto $l215; else goto $l216;
    $l215:;
    if ($tmp202 >= $tmp204) goto $l206; else goto $l208;
    $l216:;
    if ($tmp202 > $tmp204) goto $l206; else goto $l208;
    $l206:;
    {
        ITable* $tmp218 = foundTypes173->$class->itable;
        while ($tmp218->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp218 = $tmp218->next;
        }
        $fn220 $tmp219 = $tmp218->methods[0];
        panda$core$Object* $tmp221 = $tmp219(foundTypes173, i201);
        ITable* $tmp222 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp222->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp222 = $tmp222->next;
        }
        $fn224 $tmp223 = $tmp222->methods[0];
        panda$core$Object* $tmp225 = $tmp223(((panda$collections$ListView*) p_cl->parameters), i201);
        org$pandalanguage$pandac$Type* $tmp226 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp225)->bound);
        panda$core$Int64$nullable $tmp227 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp221), $tmp226);
        if (((panda$core$Bit) { !$tmp227.nonnull }).value) {
        {
            panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s228, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s230);
            ITable* $tmp232 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp232->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp232 = $tmp232->next;
            }
            $fn234 $tmp233 = $tmp232->methods[0];
            panda$core$Object* $tmp235 = $tmp233(((panda$collections$ListView*) p_cl->parameters), i201);
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp235))->name);
            panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, &$s237);
            ITable* $tmp240 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp240->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp240 = $tmp240->next;
            }
            $fn242 $tmp241 = $tmp240->methods[0];
            panda$core$Object* $tmp243 = $tmp241(((panda$collections$ListView*) p_cl->parameters), i201);
            panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s239, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp243)->bound));
            panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
            ITable* $tmp247 = foundTypes173->$class->itable;
            while ($tmp247->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp247 = $tmp247->next;
            }
            $fn249 $tmp248 = $tmp247->methods[0];
            panda$core$Object* $tmp250 = $tmp248(foundTypes173, i201);
            panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp246, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp250)));
            panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s252);
            panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, $tmp253);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp254);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l209:;
    if ($tmp212) goto $l256; else goto $l257;
    $l256:;
    int64_t $tmp258 = $tmp204 - i201.value;
    if ($tmp205) goto $l259; else goto $l260;
    $l259:;
    if ($tmp258 >= 1) goto $l255; else goto $l208;
    $l260:;
    if ($tmp258 > 1) goto $l255; else goto $l208;
    $l257:;
    int64_t $tmp262 = i201.value - $tmp204;
    if ($tmp205) goto $l263; else goto $l264;
    $l263:;
    if ($tmp262 >= -1) goto $l255; else goto $l208;
    $l264:;
    if ($tmp262 > -1) goto $l255; else goto $l208;
    $l255:;
    i201.value += 1;
    goto $l206;
    $l208:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved266;
    org$pandalanguage$pandac$Type* result268;
    org$pandalanguage$pandac$Symbol* s272;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp276;
    panda$collections$Array* subtypes287;
    org$pandalanguage$pandac$Type* sub290;
    panda$collections$Array* subtypes300;
    org$pandalanguage$pandac$Type* base303;
    panda$core$MutableString* name306;
    panda$core$String* separator311;
    panda$core$Range$LTpanda$core$Int64$GT $tmp313;
    org$pandalanguage$pandac$Type* resolved332;
    org$pandalanguage$pandac$Type* result348;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp267 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved266 = $tmp267;
            if (((panda$core$Bit) { resolved266 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp269 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved266);
                result268 = $tmp269;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp270 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved266, result268);
                    panda$core$Bit $tmp271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp270);
                    if ($tmp271.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result268;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp273 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s272 = $tmp273;
            if (((panda$core$Bit) { s272 != NULL }).value) {
            {
                switch (s272->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp274 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp274->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp274->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp274, ((org$pandalanguage$pandac$Alias*) s272)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp274;
                    }
                    break;
                    case 203:
                    {
                        gp276 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s272);
                        org$pandalanguage$pandac$ClassDecl* $tmp277 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp276->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp277);
                        org$pandalanguage$pandac$Type* $tmp278 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp278->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp278->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp278, gp276);
                        return $tmp278;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s272);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp280 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s272));
                        return $tmp280;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s281, ((panda$core$Object*) p_type));
            panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s283);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp284);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp285 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp285, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp286.value);
            panda$collections$Array* $tmp288 = (panda$collections$Array*) malloc(40);
            $tmp288->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp288->refCount.value = 1;
            panda$collections$Array$init($tmp288);
            subtypes287 = $tmp288;
            panda$core$Object* $tmp291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp292 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp291));
            sub290 = $tmp292;
            if (((panda$core$Bit) { sub290 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes287, ((panda$core$Object*) sub290));
            org$pandalanguage$pandac$Type* $tmp293 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp293->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp293->refCount.value = 1;
            panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes287, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp295))->name, &$s296);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp293, $tmp297, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes287), ((panda$core$Bit) { true }));
            return $tmp293;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp298 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp299 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp298, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp299.value);
            panda$collections$Array* $tmp301 = (panda$collections$Array*) malloc(40);
            $tmp301->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp301->refCount.value = 1;
            panda$collections$Array$init($tmp301);
            subtypes300 = $tmp301;
            panda$core$Object* $tmp304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp305 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp304), ((panda$core$Bit) { false }));
            base303 = $tmp305;
            if (((panda$core$Bit) { base303 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes300, ((panda$core$Object*) base303));
            panda$core$MutableString* $tmp307 = (panda$core$MutableString*) malloc(40);
            $tmp307->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp307->refCount.value = 1;
            panda$core$Object* $tmp309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes300, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp307, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp309))->name);
            name306 = $tmp307;
            panda$core$MutableString$append$panda$core$String(name306, &$s310);
            separator311 = &$s312;
            panda$core$Int64 $tmp314 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp313, ((panda$core$Int64) { 1 }), $tmp314, ((panda$core$Bit) { false }));
            int64_t $tmp316 = $tmp313.min.value;
            panda$core$Int64 i315 = { $tmp316 };
            int64_t $tmp318 = $tmp313.max.value;
            bool $tmp319 = $tmp313.inclusive.value;
            bool $tmp326 = 1 > 0;
            if ($tmp326) goto $l324; else goto $l325;
            $l324:;
            if ($tmp319) goto $l327; else goto $l328;
            $l327:;
            if ($tmp316 <= $tmp318) goto $l320; else goto $l322;
            $l328:;
            if ($tmp316 < $tmp318) goto $l320; else goto $l322;
            $l325:;
            if ($tmp319) goto $l329; else goto $l330;
            $l329:;
            if ($tmp316 >= $tmp318) goto $l320; else goto $l322;
            $l330:;
            if ($tmp316 > $tmp318) goto $l320; else goto $l322;
            $l320:;
            {
                panda$core$Object* $tmp333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i315);
                org$pandalanguage$pandac$Type* $tmp334 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp333));
                resolved332 = $tmp334;
                if (((panda$core$Bit) { resolved332 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes300, ((panda$core$Object*) resolved332));
                panda$core$MutableString$append$panda$core$String(name306, separator311);
                panda$core$MutableString$append$panda$core$String(name306, ((org$pandalanguage$pandac$Symbol*) resolved332)->name);
                separator311 = &$s335;
            }
            $l323:;
            if ($tmp326) goto $l337; else goto $l338;
            $l337:;
            int64_t $tmp339 = $tmp318 - i315.value;
            if ($tmp319) goto $l340; else goto $l341;
            $l340:;
            if ($tmp339 >= 1) goto $l336; else goto $l322;
            $l341:;
            if ($tmp339 > 1) goto $l336; else goto $l322;
            $l338:;
            int64_t $tmp343 = i315.value - $tmp318;
            if ($tmp319) goto $l344; else goto $l345;
            $l344:;
            if ($tmp343 >= -1) goto $l336; else goto $l322;
            $l345:;
            if ($tmp343 > -1) goto $l336; else goto $l322;
            $l336:;
            i315.value += 1;
            goto $l320;
            $l322:;
            panda$core$MutableString$append$panda$core$String(name306, &$s347);
            org$pandalanguage$pandac$Type* $tmp349 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp349->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp349->refCount.value = 1;
            panda$core$String* $tmp351 = panda$core$MutableString$convert$R$panda$core$String(name306);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp349, $tmp351, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes300), ((panda$core$Bit) { true }));
            result348 = $tmp349;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result348->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp353 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp352));
                panda$core$Bit $tmp354 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp353, result348);
                panda$core$Bit $tmp355 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp354);
                if ($tmp355.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result348;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp356 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp356;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old357;
    panda$collections$Iterator* p$Iter358;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p370;
    org$pandalanguage$pandac$Type* resolved375;
    panda$collections$Iterator* rawS$Iter377;
    org$pandalanguage$pandac$Type* rawS389;
    org$pandalanguage$pandac$Type* s394;
    org$pandalanguage$pandac$ClassDecl* sClass396;
    panda$collections$Iterator* m$Iter443;
    org$pandalanguage$pandac$MethodDecl* m455;
    panda$collections$Iterator* intf$Iter466;
    org$pandalanguage$pandac$Type* intf478;
    panda$collections$Iterator* p$Iter484;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p496;
    org$pandalanguage$pandac$ClassDecl* cl501;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old357 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp359 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp359->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp359 = $tmp359->next;
        }
        $fn361 $tmp360 = $tmp359->methods[0];
        panda$collections$Iterator* $tmp362 = $tmp360(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter358 = $tmp362;
        $l363:;
        ITable* $tmp365 = p$Iter358->$class->itable;
        while ($tmp365->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp365 = $tmp365->next;
        }
        $fn367 $tmp366 = $tmp365->methods[0];
        panda$core$Bit $tmp368 = $tmp366(p$Iter358);
        panda$core$Bit $tmp369 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp368);
        if (!$tmp369.value) goto $l364;
        {
            ITable* $tmp371 = p$Iter358->$class->itable;
            while ($tmp371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp371 = $tmp371->next;
            }
            $fn373 $tmp372 = $tmp371->methods[1];
            panda$core$Object* $tmp374 = $tmp372(p$Iter358);
            p370 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp374);
            org$pandalanguage$pandac$Type* $tmp376 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p370->bound, ((panda$core$Bit) { false }));
            resolved375 = $tmp376;
            if (((panda$core$Bit) { resolved375 != NULL }).value) {
            {
                p370->bound = resolved375;
            }
            }
        }
        goto $l363;
        $l364:;
    }
    {
        ITable* $tmp378 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp378->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp378 = $tmp378->next;
        }
        $fn380 $tmp379 = $tmp378->methods[0];
        panda$collections$Iterator* $tmp381 = $tmp379(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter377 = $tmp381;
        $l382:;
        ITable* $tmp384 = rawS$Iter377->$class->itable;
        while ($tmp384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp384 = $tmp384->next;
        }
        $fn386 $tmp385 = $tmp384->methods[0];
        panda$core$Bit $tmp387 = $tmp385(rawS$Iter377);
        panda$core$Bit $tmp388 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp387);
        if (!$tmp388.value) goto $l383;
        {
            ITable* $tmp390 = rawS$Iter377->$class->itable;
            while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp390 = $tmp390->next;
            }
            $fn392 $tmp391 = $tmp390->methods[1];
            panda$core$Object* $tmp393 = $tmp391(rawS$Iter377);
            rawS389 = ((org$pandalanguage$pandac$Type*) $tmp393);
            org$pandalanguage$pandac$Type* $tmp395 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS389, ((panda$core$Bit) { false }));
            s394 = $tmp395;
            if (((panda$core$Bit) { s394 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp397 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s394);
                sClass396 = $tmp397;
                if (((panda$core$Bit) { sClass396 != NULL }).value) {
                {
                    panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass396->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp398.value) {
                    {
                        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp399.value) {
                        {
                            panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s400, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s402);
                            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s404, ((org$pandalanguage$pandac$Symbol*) s394)->name);
                            panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
                            panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, $tmp407);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s394)->position, $tmp408);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s394;
                            panda$core$Int64 $tmp409 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp410 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp409, ((panda$core$Int64) { 0 }));
                            if ($tmp410.value) {
                            {
                                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s411, ((panda$core$Object*) s394));
                                panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
                                panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s416);
                                panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s418);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s394)->position, $tmp419);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s420, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp421, &$s422);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s394)->position, $tmp423);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass396->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp424.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s394));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l382;
        $l383:;
    }
    bool $tmp425 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp425) goto $l426;
    panda$core$Bit $tmp428 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s427);
    $tmp425 = $tmp428.value;
    $l426:;
    panda$core$Bit $tmp429 = { $tmp425 };
    if ($tmp429.value) {
    {
        org$pandalanguage$pandac$Type* $tmp430 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp430;
    }
    }
    bool $tmp432 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp432) goto $l433;
    panda$core$Bit $tmp434 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp435 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp434);
    $tmp432 = $tmp435.value;
    $l433:;
    panda$core$Bit $tmp436 = { $tmp432 };
    bool $tmp431 = $tmp436.value;
    if (!$tmp431) goto $l437;
    panda$core$Bit $tmp439 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s438);
    $tmp431 = $tmp439.value;
    $l437:;
    panda$core$Bit $tmp440 = { $tmp431 };
    if ($tmp440.value) {
    {
        panda$core$Int64 $tmp441 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp442 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp441);
        p_cl->annotations->flags = $tmp442;
        {
            ITable* $tmp444 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp444 = $tmp444->next;
            }
            $fn446 $tmp445 = $tmp444->methods[0];
            panda$collections$Iterator* $tmp447 = $tmp445(((panda$collections$Iterable*) p_cl->methods));
            m$Iter443 = $tmp447;
            $l448:;
            ITable* $tmp450 = m$Iter443->$class->itable;
            while ($tmp450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp450 = $tmp450->next;
            }
            $fn452 $tmp451 = $tmp450->methods[0];
            panda$core$Bit $tmp453 = $tmp451(m$Iter443);
            panda$core$Bit $tmp454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp453);
            if (!$tmp454.value) goto $l449;
            {
                ITable* $tmp456 = m$Iter443->$class->itable;
                while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp456 = $tmp456->next;
                }
                $fn458 $tmp457 = $tmp456->methods[1];
                panda$core$Object* $tmp459 = $tmp457(m$Iter443);
                m455 = ((org$pandalanguage$pandac$MethodDecl*) $tmp459);
                panda$core$Int64 $tmp460 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp461 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m455->annotations->flags, $tmp460);
                m455->annotations->flags = $tmp461;
                panda$core$Bit $tmp462 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m455->annotations, m455->body);
                if ($tmp462.value) {
                {
                    panda$core$Int64 $tmp463 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp464 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m455->annotations->flags, $tmp463);
                    m455->annotations->flags = $tmp464;
                }
                }
            }
            goto $l448;
            $l449:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp465 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp465, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp467 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp467 = $tmp467->next;
        }
        $fn469 $tmp468 = $tmp467->methods[0];
        panda$collections$Iterator* $tmp470 = $tmp468(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter466 = $tmp470;
        $l471:;
        ITable* $tmp473 = intf$Iter466->$class->itable;
        while ($tmp473->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp473 = $tmp473->next;
        }
        $fn475 $tmp474 = $tmp473->methods[0];
        panda$core$Bit $tmp476 = $tmp474(intf$Iter466);
        panda$core$Bit $tmp477 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp476);
        if (!$tmp477.value) goto $l472;
        {
            ITable* $tmp479 = intf$Iter466->$class->itable;
            while ($tmp479->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp479 = $tmp479->next;
            }
            $fn481 $tmp480 = $tmp479->methods[1];
            panda$core$Object* $tmp482 = $tmp480(intf$Iter466);
            intf478 = ((org$pandalanguage$pandac$Type*) $tmp482);
            org$pandalanguage$pandac$ClassDecl* $tmp483 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf478);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp483, intf478);
        }
        goto $l471;
        $l472:;
    }
    {
        ITable* $tmp485 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp485->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp485 = $tmp485->next;
        }
        $fn487 $tmp486 = $tmp485->methods[0];
        panda$collections$Iterator* $tmp488 = $tmp486(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter484 = $tmp488;
        $l489:;
        ITable* $tmp491 = p$Iter484->$class->itable;
        while ($tmp491->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp491 = $tmp491->next;
        }
        $fn493 $tmp492 = $tmp491->methods[0];
        panda$core$Bit $tmp494 = $tmp492(p$Iter484);
        panda$core$Bit $tmp495 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp494);
        if (!$tmp495.value) goto $l490;
        {
            ITable* $tmp497 = p$Iter484->$class->itable;
            while ($tmp497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp497 = $tmp497->next;
            }
            $fn499 $tmp498 = $tmp497->methods[1];
            panda$core$Object* $tmp500 = $tmp498(p$Iter484);
            p496 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp500);
            org$pandalanguage$pandac$ClassDecl* $tmp502 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p496->bound);
            cl501 = $tmp502;
            if (((panda$core$Bit) { cl501 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl501)->position, cl501, p496->bound);
            }
            }
        }
        goto $l489;
        $l490:;
    }
    self->symbolTable = old357;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old503;
    panda$collections$Iterator* p$Iter504;
    org$pandalanguage$pandac$MethodDecl$Parameter* p516;
    org$pandalanguage$pandac$MethodDecl* overridden523;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old503 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp505 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp505->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp505 = $tmp505->next;
        }
        $fn507 $tmp506 = $tmp505->methods[0];
        panda$collections$Iterator* $tmp508 = $tmp506(((panda$collections$Iterable*) p_m->parameters));
        p$Iter504 = $tmp508;
        $l509:;
        ITable* $tmp511 = p$Iter504->$class->itable;
        while ($tmp511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp511 = $tmp511->next;
        }
        $fn513 $tmp512 = $tmp511->methods[0];
        panda$core$Bit $tmp514 = $tmp512(p$Iter504);
        panda$core$Bit $tmp515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp514);
        if (!$tmp515.value) goto $l510;
        {
            ITable* $tmp517 = p$Iter504->$class->itable;
            while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp517 = $tmp517->next;
            }
            $fn519 $tmp518 = $tmp517->methods[1];
            panda$core$Object* $tmp520 = $tmp518(p$Iter504);
            p516 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp520);
            org$pandalanguage$pandac$Type* $tmp521 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p516->type);
            p516->type = $tmp521;
        }
        goto $l509;
        $l510:;
    }
    org$pandalanguage$pandac$Type* $tmp522 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp522;
    p_m->resolved = ((panda$core$Bit) { true });
    org$pandalanguage$pandac$MethodDecl* $tmp524 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    overridden523 = $tmp524;
    if (((panda$core$Bit) { overridden523 != NULL }).value) {
    {
        panda$core$Bit $tmp525 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp526 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp525);
        if ($tmp526.value) {
        {
            panda$core$String* $tmp528 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s527, $tmp528);
            panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, &$s530);
            panda$core$String* $tmp532 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden523);
            panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, $tmp532);
            panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp533, &$s534);
            panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp535, &$s536);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp537);
        }
        }
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
        bool $tmp538 = $tmp539.value;
        if (!$tmp538) goto $l540;
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden523->methodKind, ((panda$core$Int64) { 58 }));
        $tmp538 = $tmp541.value;
        $l540:;
        panda$core$Bit $tmp542 = { $tmp538 };
        if ($tmp542.value) {
        {
            panda$core$String* $tmp544 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s543, $tmp544);
            panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s546);
            panda$core$String* $tmp548 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden523);
            panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, $tmp548);
            panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s550);
            panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp553);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp554 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    if ($tmp554.value) {
    {
        panda$core$String* $tmp556 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
        panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s555, $tmp556);
        panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s558);
        panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s560);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp561);
    }
    }
    }
    self->symbolTable = old503;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old562;
    org$pandalanguage$pandac$Type* resolved565;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old562 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp564 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp563);
    if ($tmp564.value) {
    {
        org$pandalanguage$pandac$Type* $tmp566 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved565 = $tmp566;
        if (((panda$core$Bit) { resolved565 != NULL }).value) {
        {
            p_f->type = resolved565;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp567 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp568 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp567, p_f->type);
                p_f->value = $tmp568;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old562;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s569);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old562;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp570 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp570;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old562;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp571 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp571;
    org$pandalanguage$pandac$IRNode* $tmp572 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp572;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old562;
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s573);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s574);
            panda$core$Object* $tmp575 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp575)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s576);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp577 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp578 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp577);
            return $tmp578;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp579 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp579) goto $l580;
    org$pandalanguage$pandac$Type* $tmp581 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp582 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp581);
    $tmp579 = ((panda$core$Bit) { $tmp582.nonnull }).value;
    $l580:;
    panda$core$Bit $tmp583 = { $tmp579 };
    return $tmp583;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result584;
    org$pandalanguage$pandac$ClassDecl* s592;
    panda$collections$Iterator* f$Iter595;
    org$pandalanguage$pandac$FieldDecl* f607;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp585 = (panda$collections$Array*) malloc(40);
    $tmp585->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp585->refCount.value = 1;
    panda$collections$Array$init($tmp585);
    result584 = $tmp585;
    panda$core$Bit $tmp588 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp589 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp588);
    bool $tmp587 = $tmp589.value;
    if (!$tmp587) goto $l590;
    $tmp587 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l590:;
    panda$core$Bit $tmp591 = { $tmp587 };
    if ($tmp591.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp593 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s592 = $tmp593;
        if (((panda$core$Bit) { s592 != NULL }).value) {
        {
            panda$collections$ListView* $tmp594 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s592);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result584, ((panda$collections$CollectionView*) $tmp594));
        }
        }
    }
    }
    {
        ITable* $tmp596 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp596->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp596 = $tmp596->next;
        }
        $fn598 $tmp597 = $tmp596->methods[0];
        panda$collections$Iterator* $tmp599 = $tmp597(((panda$collections$Iterable*) p_cl->fields));
        f$Iter595 = $tmp599;
        $l600:;
        ITable* $tmp602 = f$Iter595->$class->itable;
        while ($tmp602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp602 = $tmp602->next;
        }
        $fn604 $tmp603 = $tmp602->methods[0];
        panda$core$Bit $tmp605 = $tmp603(f$Iter595);
        panda$core$Bit $tmp606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp605);
        if (!$tmp606.value) goto $l601;
        {
            ITable* $tmp608 = f$Iter595->$class->itable;
            while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp608 = $tmp608->next;
            }
            $fn610 $tmp609 = $tmp608->methods[1];
            panda$core$Object* $tmp611 = $tmp609(f$Iter595);
            f607 = ((org$pandalanguage$pandac$FieldDecl*) $tmp611);
            panda$core$Bit $tmp612 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f607->annotations);
            panda$core$Bit $tmp613 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp612);
            if ($tmp613.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result584, ((panda$core$Object*) f607));
            }
            }
        }
        goto $l600;
        $l601:;
    }
    return ((panda$collections$ListView*) result584);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result614;
    panda$core$String* suffix616;
    panda$core$Bit found622;
    panda$collections$Iterator* dir$Iter623;
    panda$io$File* dir635;
    panda$io$File* f640;
    panda$core$Bit $tmp642;
    panda$core$String$Index$nullable index644;
    org$pandalanguage$pandac$ClassDecl* parent647;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp648;
    panda$core$Object* $tmp615 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result614 = ((org$pandalanguage$pandac$ClassDecl*) $tmp615);
    if (((panda$core$Bit) { result614 == NULL }).value) {
    {
        panda$core$String* $tmp619 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s617, &$s618);
        panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s620);
        suffix616 = $tmp621;
        found622 = ((panda$core$Bit) { false });
        {
            ITable* $tmp624 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp624 = $tmp624->next;
            }
            $fn626 $tmp625 = $tmp624->methods[0];
            panda$collections$Iterator* $tmp627 = $tmp625(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter623 = $tmp627;
            $l628:;
            ITable* $tmp630 = dir$Iter623->$class->itable;
            while ($tmp630->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp630 = $tmp630->next;
            }
            $fn632 $tmp631 = $tmp630->methods[0];
            panda$core$Bit $tmp633 = $tmp631(dir$Iter623);
            panda$core$Bit $tmp634 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp633);
            if (!$tmp634.value) goto $l629;
            {
                ITable* $tmp636 = dir$Iter623->$class->itable;
                while ($tmp636->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp636 = $tmp636->next;
                }
                $fn638 $tmp637 = $tmp636->methods[1];
                panda$core$Object* $tmp639 = $tmp637(dir$Iter623);
                dir635 = ((panda$io$File*) $tmp639);
                panda$io$File* $tmp641 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir635, suffix616);
                f640 = $tmp641;
                panda$io$File$exists$R$panda$core$Bit(&$tmp642, f640);
                if ($tmp642.value) {
                {
                    found622 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f640);
                    panda$core$Object* $tmp643 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result614 = ((org$pandalanguage$pandac$ClassDecl*) $tmp643);
                }
                }
            }
            goto $l628;
            $l629:;
        }
    }
    }
    if (((panda$core$Bit) { result614 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp646 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s645);
        index644 = $tmp646;
        if (((panda$core$Bit) { index644.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp648, ((panda$core$String$Index$nullable) { .nonnull = false }), index644, ((panda$core$Bit) { false }));
            panda$core$String* $tmp649 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp648);
            org$pandalanguage$pandac$ClassDecl* $tmp650 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp649);
            parent647 = $tmp650;
            if (((panda$core$Bit) { parent647 != NULL }).value) {
            {
                panda$core$Object* $tmp651 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result614 = ((org$pandalanguage$pandac$ClassDecl*) $tmp651);
            }
            }
        }
        }
    }
    }
    return result614;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result652;
    panda$core$String* suffix654;
    panda$core$Bit found660;
    panda$collections$Iterator* dir$Iter661;
    panda$io$File* dir673;
    panda$io$File* f678;
    panda$core$Bit $tmp680;
    panda$core$Int64 oldErrorCount681;
    org$pandalanguage$pandac$Position $tmp687;
    panda$core$Object* $tmp653 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result652 = ((org$pandalanguage$pandac$ClassDecl*) $tmp653);
    if (((panda$core$Bit) { result652 == NULL }).value) {
    {
        panda$core$String* $tmp657 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s655, &$s656);
        panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s658);
        suffix654 = $tmp659;
        found660 = ((panda$core$Bit) { false });
        {
            ITable* $tmp662 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp662->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp662 = $tmp662->next;
            }
            $fn664 $tmp663 = $tmp662->methods[0];
            panda$collections$Iterator* $tmp665 = $tmp663(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter661 = $tmp665;
            $l666:;
            ITable* $tmp668 = dir$Iter661->$class->itable;
            while ($tmp668->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp668 = $tmp668->next;
            }
            $fn670 $tmp669 = $tmp668->methods[0];
            panda$core$Bit $tmp671 = $tmp669(dir$Iter661);
            panda$core$Bit $tmp672 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp671);
            if (!$tmp672.value) goto $l667;
            {
                ITable* $tmp674 = dir$Iter661->$class->itable;
                while ($tmp674->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp674 = $tmp674->next;
                }
                $fn676 $tmp675 = $tmp674->methods[1];
                panda$core$Object* $tmp677 = $tmp675(dir$Iter661);
                dir673 = ((panda$io$File*) $tmp677);
                panda$io$File* $tmp679 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir673, suffix654);
                f678 = $tmp679;
                panda$io$File$exists$R$panda$core$Bit(&$tmp680, f678);
                if ($tmp680.value) {
                {
                    found660 = ((panda$core$Bit) { true });
                    oldErrorCount681 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f678);
                    panda$core$Object* $tmp682 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result652 = ((org$pandalanguage$pandac$ClassDecl*) $tmp682);
                    bool $tmp683 = ((panda$core$Bit) { result652 == NULL }).value;
                    if (!$tmp683) goto $l684;
                    panda$core$Bit $tmp685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount681);
                    $tmp683 = $tmp685.value;
                    $l684:;
                    panda$core$Bit $tmp686 = { $tmp683 };
                    if ($tmp686.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp687, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s688, ((panda$core$Object*) f678));
                        panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, &$s690);
                        panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, p_fullName);
                        panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, &$s693);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f678, $tmp687, $tmp694);
                    }
                    }
                }
                }
            }
            goto $l666;
            $l667:;
        }
        panda$core$Bit $tmp695 = panda$core$Bit$$NOT$R$panda$core$Bit(found660);
        if ($tmp695.value) {
        {
            panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s696, suffix654);
            panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp697, &$s698);
            panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp699, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s701);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp702);
        }
        }
    }
    }
    return result652;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type706;
    org$pandalanguage$pandac$ClassDecl* result713;
    org$pandalanguage$pandac$Annotations* annotations715;
    panda$collections$Array* supertypes721;
    panda$collections$Iterator* intf$Iter725;
    org$pandalanguage$pandac$Type* intf737;
    panda$collections$HashMap* aliases743;
    panda$core$Range$LTpanda$core$Int64$GT $tmp746;
    panda$collections$Iterator* m$Iter790;
    org$pandalanguage$pandac$MethodDecl* m802;
    panda$collections$Array* parameters807;
    panda$collections$Iterator* p$Iter810;
    org$pandalanguage$pandac$MethodDecl$Parameter* p822;
    org$pandalanguage$pandac$MethodDecl* clone830;
    panda$collections$Iterator* f$Iter833;
    org$pandalanguage$pandac$FieldDecl* f845;
    org$pandalanguage$pandac$FieldDecl* clone850;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp704 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s703);
    panda$core$Bit $tmp705 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp704);
    PANDA_ASSERT($tmp705.value);
    org$pandalanguage$pandac$Type* $tmp707 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type706 = $tmp707;
    panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type706->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp708.value) {
    {
        panda$core$Object* $tmp709 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type706->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp710 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp709));
        return $tmp710;
    }
    }
    panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type706->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp711.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type706->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp712.value);
    panda$core$Object* $tmp714 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type706)->name));
    result713 = ((org$pandalanguage$pandac$ClassDecl*) $tmp714);
    if (((panda$core$Bit) { result713 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp716 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp716->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp716->refCount.value = 1;
        panda$core$Int64 $tmp718 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp719 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp718);
        panda$core$Int64 $tmp720 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp719);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp716, $tmp720);
        annotations715 = $tmp716;
        panda$collections$Array* $tmp722 = (panda$collections$Array*) malloc(40);
        $tmp722->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp722->refCount.value = 1;
        panda$collections$Array$init($tmp722);
        supertypes721 = $tmp722;
        org$pandalanguage$pandac$Type* $tmp724 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type706, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes721, ((panda$core$Object*) $tmp724));
        {
            ITable* $tmp726 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp726 = $tmp726->next;
            }
            $fn728 $tmp727 = $tmp726->methods[0];
            panda$collections$Iterator* $tmp729 = $tmp727(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter725 = $tmp729;
            $l730:;
            ITable* $tmp732 = intf$Iter725->$class->itable;
            while ($tmp732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp732 = $tmp732->next;
            }
            $fn734 $tmp733 = $tmp732->methods[0];
            panda$core$Bit $tmp735 = $tmp733(intf$Iter725);
            panda$core$Bit $tmp736 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp735);
            if (!$tmp736.value) goto $l731;
            {
                ITable* $tmp738 = intf$Iter725->$class->itable;
                while ($tmp738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp738 = $tmp738->next;
                }
                $fn740 $tmp739 = $tmp738->methods[1];
                panda$core$Object* $tmp741 = $tmp739(intf$Iter725);
                intf737 = ((org$pandalanguage$pandac$Type*) $tmp741);
                org$pandalanguage$pandac$Type* $tmp742 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type706, intf737);
                panda$collections$Array$add$panda$collections$Array$T(supertypes721, ((panda$core$Object*) $tmp742));
            }
            goto $l730;
            $l731:;
        }
        panda$collections$HashMap* $tmp744 = (panda$collections$HashMap*) malloc(56);
        $tmp744->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp744->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp744, p_cl->aliases);
        aliases743 = $tmp744;
        ITable* $tmp747 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp747->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp747 = $tmp747->next;
        }
        $fn749 $tmp748 = $tmp747->methods[0];
        panda$core$Int64 $tmp750 = $tmp748(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp746, ((panda$core$Int64) { 0 }), $tmp750, ((panda$core$Bit) { false }));
        int64_t $tmp752 = $tmp746.min.value;
        panda$core$Int64 i751 = { $tmp752 };
        int64_t $tmp754 = $tmp746.max.value;
        bool $tmp755 = $tmp746.inclusive.value;
        bool $tmp762 = 1 > 0;
        if ($tmp762) goto $l760; else goto $l761;
        $l760:;
        if ($tmp755) goto $l763; else goto $l764;
        $l763:;
        if ($tmp752 <= $tmp754) goto $l756; else goto $l758;
        $l764:;
        if ($tmp752 < $tmp754) goto $l756; else goto $l758;
        $l761:;
        if ($tmp755) goto $l765; else goto $l766;
        $l765:;
        if ($tmp752 >= $tmp754) goto $l756; else goto $l758;
        $l766:;
        if ($tmp752 > $tmp754) goto $l756; else goto $l758;
        $l756:;
        {
            ITable* $tmp768 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp768->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp768 = $tmp768->next;
            }
            $fn770 $tmp769 = $tmp768->methods[0];
            panda$core$Object* $tmp771 = $tmp769(((panda$collections$ListView*) p_cl->parameters), i751);
            panda$core$Int64 $tmp772 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i751, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp773 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type706->subtypes, $tmp772);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases743, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp771))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp773))->name));
        }
        $l759:;
        if ($tmp762) goto $l775; else goto $l776;
        $l775:;
        int64_t $tmp777 = $tmp754 - i751.value;
        if ($tmp755) goto $l778; else goto $l779;
        $l778:;
        if ($tmp777 >= 1) goto $l774; else goto $l758;
        $l779:;
        if ($tmp777 > 1) goto $l774; else goto $l758;
        $l776:;
        int64_t $tmp781 = i751.value - $tmp754;
        if ($tmp755) goto $l782; else goto $l783;
        $l782:;
        if ($tmp781 >= -1) goto $l774; else goto $l758;
        $l783:;
        if ($tmp781 > -1) goto $l774; else goto $l758;
        $l774:;
        i751.value += 1;
        goto $l756;
        $l758:;
        org$pandalanguage$pandac$ClassDecl* $tmp785 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
        $tmp785->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp785->refCount.value = 1;
        panda$collections$Array* $tmp787 = (panda$collections$Array*) malloc(40);
        $tmp787->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp787->refCount.value = 1;
        panda$collections$Array$init($tmp787);
        panda$core$Object* $tmp789 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp785, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases743), p_cl->doccomment, annotations715, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type706)->name, ((panda$collections$ListView*) supertypes721), $tmp787, ((org$pandalanguage$pandac$SymbolTable*) $tmp789));
        result713 = $tmp785;
        result713->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp791 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp791 = $tmp791->next;
            }
            $fn793 $tmp792 = $tmp791->methods[0];
            panda$collections$Iterator* $tmp794 = $tmp792(((panda$collections$Iterable*) p_cl->methods));
            m$Iter790 = $tmp794;
            $l795:;
            ITable* $tmp797 = m$Iter790->$class->itable;
            while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp797 = $tmp797->next;
            }
            $fn799 $tmp798 = $tmp797->methods[0];
            panda$core$Bit $tmp800 = $tmp798(m$Iter790);
            panda$core$Bit $tmp801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp800);
            if (!$tmp801.value) goto $l796;
            {
                ITable* $tmp803 = m$Iter790->$class->itable;
                while ($tmp803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp803 = $tmp803->next;
                }
                $fn805 $tmp804 = $tmp803->methods[1];
                panda$core$Object* $tmp806 = $tmp804(m$Iter790);
                m802 = ((org$pandalanguage$pandac$MethodDecl*) $tmp806);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m802);
                panda$collections$Array* $tmp808 = (panda$collections$Array*) malloc(40);
                $tmp808->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp808->refCount.value = 1;
                panda$collections$Array$init($tmp808);
                parameters807 = $tmp808;
                {
                    ITable* $tmp811 = ((panda$collections$Iterable*) m802->parameters)->$class->itable;
                    while ($tmp811->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp811 = $tmp811->next;
                    }
                    $fn813 $tmp812 = $tmp811->methods[0];
                    panda$collections$Iterator* $tmp814 = $tmp812(((panda$collections$Iterable*) m802->parameters));
                    p$Iter810 = $tmp814;
                    $l815:;
                    ITable* $tmp817 = p$Iter810->$class->itable;
                    while ($tmp817->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp817 = $tmp817->next;
                    }
                    $fn819 $tmp818 = $tmp817->methods[0];
                    panda$core$Bit $tmp820 = $tmp818(p$Iter810);
                    panda$core$Bit $tmp821 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp820);
                    if (!$tmp821.value) goto $l816;
                    {
                        ITable* $tmp823 = p$Iter810->$class->itable;
                        while ($tmp823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp823 = $tmp823->next;
                        }
                        $fn825 $tmp824 = $tmp823->methods[1];
                        panda$core$Object* $tmp826 = $tmp824(p$Iter810);
                        p822 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp826);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp827 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp827->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp827->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp829 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type706, p822->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp827, p822->name, $tmp829);
                        panda$collections$Array$add$panda$collections$Array$T(parameters807, ((panda$core$Object*) $tmp827));
                    }
                    goto $l815;
                    $l816:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp831 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
                $tmp831->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp831->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp831, result713, ((org$pandalanguage$pandac$Symbol*) m802)->position, m802->doccomment, m802->annotations, m802->methodKind, ((org$pandalanguage$pandac$Symbol*) m802)->name, parameters807, m802->returnType, m802->body);
                clone830 = $tmp831;
                panda$collections$Array$add$panda$collections$Array$T(result713->methods, ((panda$core$Object*) clone830));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result713->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone830));
            }
            goto $l795;
            $l796:;
        }
        {
            ITable* $tmp834 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp834->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp834 = $tmp834->next;
            }
            $fn836 $tmp835 = $tmp834->methods[0];
            panda$collections$Iterator* $tmp837 = $tmp835(((panda$collections$Iterable*) p_cl->fields));
            f$Iter833 = $tmp837;
            $l838:;
            ITable* $tmp840 = f$Iter833->$class->itable;
            while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp840 = $tmp840->next;
            }
            $fn842 $tmp841 = $tmp840->methods[0];
            panda$core$Bit $tmp843 = $tmp841(f$Iter833);
            panda$core$Bit $tmp844 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp843);
            if (!$tmp844.value) goto $l839;
            {
                ITable* $tmp846 = f$Iter833->$class->itable;
                while ($tmp846->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp846 = $tmp846->next;
                }
                $fn848 $tmp847 = $tmp846->methods[1];
                panda$core$Object* $tmp849 = $tmp847(f$Iter833);
                f845 = ((org$pandalanguage$pandac$FieldDecl*) $tmp849);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f845);
                org$pandalanguage$pandac$FieldDecl* $tmp851 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp851->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp851->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp853 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type706, f845->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp851, result713, ((org$pandalanguage$pandac$Symbol*) f845)->position, f845->doccomment, f845->annotations, f845->fieldKind, ((org$pandalanguage$pandac$Symbol*) f845)->name, $tmp853, f845->rawValue);
                clone850 = $tmp851;
                panda$collections$Array$add$panda$collections$Array$T(result713->fields, ((panda$core$Object*) clone850));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result713->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone850));
            }
            goto $l838;
            $l839:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result713)->name), ((panda$core$Object*) result713));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result713));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result713;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result854;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp855 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result854 = $tmp855;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp857 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp856));
            result854 = $tmp857;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp858 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp858;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp859 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result854->annotations);
    if ($tmp859.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp860 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result854, p_type);
        result854 = $tmp860;
    }
    }
    return result854;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl861;
    panda$collections$Set* result863;
    panda$collections$Iterator* intf$Iter868;
    org$pandalanguage$pandac$Type* intf880;
    org$pandalanguage$pandac$ClassDecl* $tmp862 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl861 = $tmp862;
    PANDA_ASSERT(((panda$core$Bit) { cl861 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl861);
    panda$collections$Set* $tmp864 = (panda$collections$Set*) malloc(24);
    $tmp864->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp864->refCount.value = 1;
    panda$collections$Set$init($tmp864);
    result863 = $tmp864;
    if (((panda$core$Bit) { cl861->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp866 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl861->rawSuper);
        panda$collections$Set* $tmp867 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp866);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result863, ((panda$collections$CollectionView*) $tmp867));
    }
    }
    {
        ITable* $tmp869 = ((panda$collections$Iterable*) cl861->rawInterfaces)->$class->itable;
        while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp869 = $tmp869->next;
        }
        $fn871 $tmp870 = $tmp869->methods[0];
        panda$collections$Iterator* $tmp872 = $tmp870(((panda$collections$Iterable*) cl861->rawInterfaces));
        intf$Iter868 = $tmp872;
        $l873:;
        ITable* $tmp875 = intf$Iter868->$class->itable;
        while ($tmp875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp875 = $tmp875->next;
        }
        $fn877 $tmp876 = $tmp875->methods[0];
        panda$core$Bit $tmp878 = $tmp876(intf$Iter868);
        panda$core$Bit $tmp879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp878);
        if (!$tmp879.value) goto $l874;
        {
            ITable* $tmp881 = intf$Iter868->$class->itable;
            while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp881 = $tmp881->next;
            }
            $fn883 $tmp882 = $tmp881->methods[1];
            panda$core$Object* $tmp884 = $tmp882(intf$Iter868);
            intf880 = ((org$pandalanguage$pandac$Type*) $tmp884);
            org$pandalanguage$pandac$Type* $tmp885 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf880);
            panda$collections$Set* $tmp886 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp885);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result863, ((panda$collections$CollectionView*) $tmp886));
        }
        goto $l873;
        $l874:;
    }
    panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl861->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp887.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result863, ((panda$collections$Key*) p_t));
    }
    }
    return result863;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp893;
    panda$core$Bit $tmp888 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp888.value);
    panda$core$Bit $tmp889 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp889.value);
    panda$core$Int64 $tmp890 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp891 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp892 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp890, $tmp891);
    if ($tmp892.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp894 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp893, ((panda$core$Int64) { 0 }), $tmp894, ((panda$core$Bit) { false }));
    int64_t $tmp896 = $tmp893.min.value;
    panda$core$Int64 i895 = { $tmp896 };
    int64_t $tmp898 = $tmp893.max.value;
    bool $tmp899 = $tmp893.inclusive.value;
    bool $tmp906 = 1 > 0;
    if ($tmp906) goto $l904; else goto $l905;
    $l904:;
    if ($tmp899) goto $l907; else goto $l908;
    $l907:;
    if ($tmp896 <= $tmp898) goto $l900; else goto $l902;
    $l908:;
    if ($tmp896 < $tmp898) goto $l900; else goto $l902;
    $l905:;
    if ($tmp899) goto $l909; else goto $l910;
    $l909:;
    if ($tmp896 >= $tmp898) goto $l900; else goto $l902;
    $l910:;
    if ($tmp896 > $tmp898) goto $l900; else goto $l902;
    $l900:;
    {
        panda$core$Object* $tmp912 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i895);
        panda$core$Object* $tmp913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i895);
        panda$core$Bit $tmp914 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp912), ((org$pandalanguage$pandac$Type*) $tmp913));
        if ($tmp914.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l903:;
    if ($tmp906) goto $l916; else goto $l917;
    $l916:;
    int64_t $tmp918 = $tmp898 - i895.value;
    if ($tmp899) goto $l919; else goto $l920;
    $l919:;
    if ($tmp918 >= 1) goto $l915; else goto $l902;
    $l920:;
    if ($tmp918 > 1) goto $l915; else goto $l902;
    $l917:;
    int64_t $tmp922 = i895.value - $tmp898;
    if ($tmp899) goto $l923; else goto $l924;
    $l923:;
    if ($tmp922 >= -1) goto $l915; else goto $l902;
    $l924:;
    if ($tmp922 > -1) goto $l915; else goto $l902;
    $l915:;
    i895.value += 1;
    goto $l900;
    $l902:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl926;
    panda$collections$Iterator* test$Iter928;
    org$pandalanguage$pandac$MethodDecl* test940;
    panda$collections$Iterator* raw$Iter953;
    org$pandalanguage$pandac$Type* raw965;
    org$pandalanguage$pandac$MethodDecl* result970;
    org$pandalanguage$pandac$ClassDecl* $tmp927 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl926 = $tmp927;
    PANDA_ASSERT(((panda$core$Bit) { cl926 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl926);
    {
        ITable* $tmp929 = ((panda$collections$Iterable*) cl926->methods)->$class->itable;
        while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp929 = $tmp929->next;
        }
        $fn931 $tmp930 = $tmp929->methods[0];
        panda$collections$Iterator* $tmp932 = $tmp930(((panda$collections$Iterable*) cl926->methods));
        test$Iter928 = $tmp932;
        $l933:;
        ITable* $tmp935 = test$Iter928->$class->itable;
        while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp935 = $tmp935->next;
        }
        $fn937 $tmp936 = $tmp935->methods[0];
        panda$core$Bit $tmp938 = $tmp936(test$Iter928);
        panda$core$Bit $tmp939 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp938);
        if (!$tmp939.value) goto $l934;
        {
            ITable* $tmp941 = test$Iter928->$class->itable;
            while ($tmp941->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp941 = $tmp941->next;
            }
            $fn943 $tmp942 = $tmp941->methods[1];
            panda$core$Object* $tmp944 = $tmp942(test$Iter928);
            test940 = ((org$pandalanguage$pandac$MethodDecl*) $tmp944);
            panda$core$Bit $tmp945 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test940)->name, p_name);
            if ($tmp945.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test940);
                org$pandalanguage$pandac$Type* $tmp946 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test940);
                org$pandalanguage$pandac$Type* $tmp947 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp946);
                panda$core$Bit $tmp948 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp947, p_methodType);
                if ($tmp948.value) {
                {
                    return test940;
                }
                }
            }
            }
        }
        goto $l933;
        $l934:;
    }
    bool $tmp949 = p_checkInterfaces.value;
    if ($tmp949) goto $l950;
    panda$core$Bit $tmp951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl926->classKind, ((panda$core$Int64) { 5012 }));
    $tmp949 = $tmp951.value;
    $l950:;
    panda$core$Bit $tmp952 = { $tmp949 };
    if ($tmp952.value) {
    {
        {
            ITable* $tmp954 = ((panda$collections$Iterable*) cl926->rawInterfaces)->$class->itable;
            while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp954 = $tmp954->next;
            }
            $fn956 $tmp955 = $tmp954->methods[0];
            panda$collections$Iterator* $tmp957 = $tmp955(((panda$collections$Iterable*) cl926->rawInterfaces));
            raw$Iter953 = $tmp957;
            $l958:;
            ITable* $tmp960 = raw$Iter953->$class->itable;
            while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp960 = $tmp960->next;
            }
            $fn962 $tmp961 = $tmp960->methods[0];
            panda$core$Bit $tmp963 = $tmp961(raw$Iter953);
            panda$core$Bit $tmp964 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp963);
            if (!$tmp964.value) goto $l959;
            {
                ITable* $tmp966 = raw$Iter953->$class->itable;
                while ($tmp966->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp966 = $tmp966->next;
                }
                $fn968 $tmp967 = $tmp966->methods[1];
                panda$core$Object* $tmp969 = $tmp967(raw$Iter953);
                raw965 = ((org$pandalanguage$pandac$Type*) $tmp969);
                org$pandalanguage$pandac$Type* $tmp971 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw965);
                org$pandalanguage$pandac$MethodDecl* $tmp972 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp971, p_name, p_methodType, p_checkInterfaces);
                result970 = $tmp972;
                if (((panda$core$Bit) { result970 != NULL }).value) {
                {
                    return result970;
                }
                }
            }
            goto $l958;
            $l959:;
        }
    }
    }
    if (((panda$core$Bit) { cl926->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp973 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl926->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp974 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp973, p_name, p_methodType, p_checkInterfaces);
        return $tmp974;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType976;
    org$pandalanguage$pandac$Type* owner978;
    panda$collections$Iterator* raw$Iter980;
    org$pandalanguage$pandac$Type* raw992;
    org$pandalanguage$pandac$MethodDecl* result997;
    panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp975.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp977 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType976 = $tmp977;
    org$pandalanguage$pandac$Type* $tmp979 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner978 = $tmp979;
    {
        ITable* $tmp981 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp981 = $tmp981->next;
        }
        $fn983 $tmp982 = $tmp981->methods[0];
        panda$collections$Iterator* $tmp984 = $tmp982(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter980 = $tmp984;
        $l985:;
        ITable* $tmp987 = raw$Iter980->$class->itable;
        while ($tmp987->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp987 = $tmp987->next;
        }
        $fn989 $tmp988 = $tmp987->methods[0];
        panda$core$Bit $tmp990 = $tmp988(raw$Iter980);
        panda$core$Bit $tmp991 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp990);
        if (!$tmp991.value) goto $l986;
        {
            ITable* $tmp993 = raw$Iter980->$class->itable;
            while ($tmp993->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp993 = $tmp993->next;
            }
            $fn995 $tmp994 = $tmp993->methods[1];
            panda$core$Object* $tmp996 = $tmp994(raw$Iter980);
            raw992 = ((org$pandalanguage$pandac$Type*) $tmp996);
            org$pandalanguage$pandac$Type* $tmp998 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner978, raw992);
            org$pandalanguage$pandac$MethodDecl* $tmp999 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp998, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType976, ((panda$core$Bit) { true }));
            result997 = $tmp999;
            if (((panda$core$Bit) { result997 != NULL }).value) {
            {
                return result997;
            }
            }
        }
        goto $l985;
        $l986:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1000 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner978, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1001 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1000, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType976, ((panda$core$Bit) { true }));
        return $tmp1001;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1002;
    panda$collections$Array* result1004;
    panda$collections$Iterator* m$Iter1007;
    org$pandalanguage$pandac$MethodDecl* m1019;
    org$pandalanguage$pandac$MethodDecl* found1024;
    org$pandalanguage$pandac$ClassDecl* $tmp1003 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1002 = $tmp1003;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1002 != NULL }).value);
    panda$collections$Array* $tmp1005 = (panda$collections$Array*) malloc(40);
    $tmp1005->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1005->refCount.value = 1;
    panda$collections$Array$init($tmp1005);
    result1004 = $tmp1005;
    {
        ITable* $tmp1008 = ((panda$collections$Iterable*) intfClass1002->methods)->$class->itable;
        while ($tmp1008->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1008 = $tmp1008->next;
        }
        $fn1010 $tmp1009 = $tmp1008->methods[0];
        panda$collections$Iterator* $tmp1011 = $tmp1009(((panda$collections$Iterable*) intfClass1002->methods));
        m$Iter1007 = $tmp1011;
        $l1012:;
        ITable* $tmp1014 = m$Iter1007->$class->itable;
        while ($tmp1014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1014 = $tmp1014->next;
        }
        $fn1016 $tmp1015 = $tmp1014->methods[0];
        panda$core$Bit $tmp1017 = $tmp1015(m$Iter1007);
        panda$core$Bit $tmp1018 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1017);
        if (!$tmp1018.value) goto $l1013;
        {
            ITable* $tmp1020 = m$Iter1007->$class->itable;
            while ($tmp1020->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1020 = $tmp1020->next;
            }
            $fn1022 $tmp1021 = $tmp1020->methods[1];
            panda$core$Object* $tmp1023 = $tmp1021(m$Iter1007);
            m1019 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1023);
            org$pandalanguage$pandac$Type* $tmp1025 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1026 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1019);
            org$pandalanguage$pandac$Type* $tmp1027 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1026);
            org$pandalanguage$pandac$MethodDecl* $tmp1028 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1025, ((org$pandalanguage$pandac$Symbol*) m1019)->name, $tmp1027, ((panda$core$Bit) { false }));
            found1024 = $tmp1028;
            PANDA_ASSERT(((panda$core$Bit) { found1024 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1004, ((panda$core$Object*) found1024));
        }
        goto $l1012;
        $l1013:;
    }
    return ((panda$collections$ListView*) result1004);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1030;
    panda$collections$Iterator* rawIntf$Iter1033;
    org$pandalanguage$pandac$Type* rawIntf1045;
    org$pandalanguage$pandac$ClassDecl* intf1050;
    panda$core$Bit $tmp1029 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1029.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1031 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1030 = $tmp1031;
            if (((panda$core$Bit) { superCl1030 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1032 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1030);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1032));
            }
            }
        }
        }
        {
            ITable* $tmp1034 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1034->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1034 = $tmp1034->next;
            }
            $fn1036 $tmp1035 = $tmp1034->methods[0];
            panda$collections$Iterator* $tmp1037 = $tmp1035(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1033 = $tmp1037;
            $l1038:;
            ITable* $tmp1040 = rawIntf$Iter1033->$class->itable;
            while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1040 = $tmp1040->next;
            }
            $fn1042 $tmp1041 = $tmp1040->methods[0];
            panda$core$Bit $tmp1043 = $tmp1041(rawIntf$Iter1033);
            panda$core$Bit $tmp1044 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1043);
            if (!$tmp1044.value) goto $l1039;
            {
                ITable* $tmp1046 = rawIntf$Iter1033->$class->itable;
                while ($tmp1046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1046 = $tmp1046->next;
                }
                $fn1048 $tmp1047 = $tmp1046->methods[1];
                panda$core$Object* $tmp1049 = $tmp1047(rawIntf$Iter1033);
                rawIntf1045 = ((org$pandalanguage$pandac$Type*) $tmp1049);
                org$pandalanguage$pandac$ClassDecl* $tmp1051 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1045);
                intf1050 = $tmp1051;
                if (((panda$core$Bit) { intf1050 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1052 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1050);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1052));
                }
                }
            }
            goto $l1038;
            $l1039:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1055;
    panda$collections$Iterator* derived$Iter1058;
    org$pandalanguage$pandac$MethodDecl* derived1070;
    panda$core$Bit found1080;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1081;
    org$pandalanguage$pandac$MethodDecl* base1100;
    panda$core$Int64 $tmp1053 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1053, ((panda$core$Int64) { 0 }));
    if ($tmp1054.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1056 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1055 = $tmp1056;
            if (((panda$core$Bit) { superCl1055 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1057 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1055);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1057));
        }
        }
        {
            ITable* $tmp1059 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1059->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1059 = $tmp1059->next;
            }
            $fn1061 $tmp1060 = $tmp1059->methods[0];
            panda$collections$Iterator* $tmp1062 = $tmp1060(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1058 = $tmp1062;
            $l1063:;
            ITable* $tmp1065 = derived$Iter1058->$class->itable;
            while ($tmp1065->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1065 = $tmp1065->next;
            }
            $fn1067 $tmp1066 = $tmp1065->methods[0];
            panda$core$Bit $tmp1068 = $tmp1066(derived$Iter1058);
            panda$core$Bit $tmp1069 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1068);
            if (!$tmp1069.value) goto $l1064;
            {
                ITable* $tmp1071 = derived$Iter1058->$class->itable;
                while ($tmp1071->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1071 = $tmp1071->next;
                }
                $fn1073 $tmp1072 = $tmp1071->methods[1];
                panda$core$Object* $tmp1074 = $tmp1072(derived$Iter1058);
                derived1070 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1074);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1070);
                panda$core$Bit $tmp1076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1070->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1075 = $tmp1076.value;
                if ($tmp1075) goto $l1077;
                panda$core$Bit $tmp1078 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1070->annotations);
                $tmp1075 = $tmp1078.value;
                $l1077:;
                panda$core$Bit $tmp1079 = { $tmp1075 };
                if ($tmp1079.value) {
                {
                    goto $l1063;
                }
                }
                found1080 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1082 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1081, ((panda$core$Int64) { 0 }), $tmp1082, ((panda$core$Bit) { false }));
                int64_t $tmp1084 = $tmp1081.min.value;
                panda$core$Int64 i1083 = { $tmp1084 };
                int64_t $tmp1086 = $tmp1081.max.value;
                bool $tmp1087 = $tmp1081.inclusive.value;
                bool $tmp1094 = 1 > 0;
                if ($tmp1094) goto $l1092; else goto $l1093;
                $l1092:;
                if ($tmp1087) goto $l1095; else goto $l1096;
                $l1095:;
                if ($tmp1084 <= $tmp1086) goto $l1088; else goto $l1090;
                $l1096:;
                if ($tmp1084 < $tmp1086) goto $l1088; else goto $l1090;
                $l1093:;
                if ($tmp1087) goto $l1097; else goto $l1098;
                $l1097:;
                if ($tmp1084 >= $tmp1086) goto $l1088; else goto $l1090;
                $l1098:;
                if ($tmp1084 > $tmp1086) goto $l1088; else goto $l1090;
                $l1088:;
                {
                    panda$core$Object* $tmp1101 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1083);
                    base1100 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1101);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1100);
                    panda$core$Bit $tmp1102 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1070, base1100);
                    if ($tmp1102.value) {
                    {
                        found1080 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1083, ((panda$core$Object*) derived1070));
                        goto $l1090;
                    }
                    }
                }
                $l1091:;
                if ($tmp1094) goto $l1104; else goto $l1105;
                $l1104:;
                int64_t $tmp1106 = $tmp1086 - i1083.value;
                if ($tmp1087) goto $l1107; else goto $l1108;
                $l1107:;
                if ($tmp1106 >= 1) goto $l1103; else goto $l1090;
                $l1108:;
                if ($tmp1106 > 1) goto $l1103; else goto $l1090;
                $l1105:;
                int64_t $tmp1110 = i1083.value - $tmp1086;
                if ($tmp1087) goto $l1111; else goto $l1112;
                $l1111:;
                if ($tmp1110 >= -1) goto $l1103; else goto $l1090;
                $l1112:;
                if ($tmp1110 > -1) goto $l1103; else goto $l1090;
                $l1103:;
                i1083.value += 1;
                goto $l1088;
                $l1090:;
                panda$core$Bit $tmp1114 = panda$core$Bit$$NOT$R$panda$core$Bit(found1080);
                if ($tmp1114.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1070));
                }
                }
            }
            goto $l1063;
            $l1064:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1115;
    org$pandalanguage$pandac$Symbol* s1118;
    panda$collections$Iterator* m$Iter1124;
    org$pandalanguage$pandac$MethodDecl* m1136;
    panda$collections$Iterator* p$Iter1143;
    org$pandalanguage$pandac$SymbolTable* p1155;
    panda$collections$Array* children1160;
    panda$collections$Array* types1172;
    panda$collections$Iterator* m$Iter1175;
    org$pandalanguage$pandac$MethodRef* m1187;
    panda$collections$Array* $tmp1116 = (panda$collections$Array*) malloc(40);
    $tmp1116->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1116->refCount.value = 1;
    panda$collections$Array$init($tmp1116);
    methods1115 = $tmp1116;
    org$pandalanguage$pandac$Symbol* $tmp1119 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1118 = $tmp1119;
    PANDA_ASSERT(((panda$core$Bit) { s1118 != NULL }).value);
    panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1118->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1120.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1118));
        org$pandalanguage$pandac$MethodRef* $tmp1121 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1121->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1121->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1121, ((org$pandalanguage$pandac$MethodDecl*) s1118), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1115, ((panda$core$Object*) $tmp1121));
    }
    }
    else {
    {
        panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1118->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1123.value);
        {
            ITable* $tmp1125 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1118)->methods)->$class->itable;
            while ($tmp1125->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1125 = $tmp1125->next;
            }
            $fn1127 $tmp1126 = $tmp1125->methods[0];
            panda$collections$Iterator* $tmp1128 = $tmp1126(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1118)->methods));
            m$Iter1124 = $tmp1128;
            $l1129:;
            ITable* $tmp1131 = m$Iter1124->$class->itable;
            while ($tmp1131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1131 = $tmp1131->next;
            }
            $fn1133 $tmp1132 = $tmp1131->methods[0];
            panda$core$Bit $tmp1134 = $tmp1132(m$Iter1124);
            panda$core$Bit $tmp1135 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1134);
            if (!$tmp1135.value) goto $l1130;
            {
                ITable* $tmp1137 = m$Iter1124->$class->itable;
                while ($tmp1137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1137 = $tmp1137->next;
                }
                $fn1139 $tmp1138 = $tmp1137->methods[1];
                panda$core$Object* $tmp1140 = $tmp1138(m$Iter1124);
                m1136 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1140);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1136);
                org$pandalanguage$pandac$MethodRef* $tmp1141 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1141->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1141->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1141, m1136, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1115, ((panda$core$Object*) $tmp1141));
            }
            goto $l1129;
            $l1130:;
        }
    }
    }
    {
        ITable* $tmp1144 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1144->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1144 = $tmp1144->next;
        }
        $fn1146 $tmp1145 = $tmp1144->methods[0];
        panda$collections$Iterator* $tmp1147 = $tmp1145(((panda$collections$Iterable*) p_st->parents));
        p$Iter1143 = $tmp1147;
        $l1148:;
        ITable* $tmp1150 = p$Iter1143->$class->itable;
        while ($tmp1150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1150 = $tmp1150->next;
        }
        $fn1152 $tmp1151 = $tmp1150->methods[0];
        panda$core$Bit $tmp1153 = $tmp1151(p$Iter1143);
        panda$core$Bit $tmp1154 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1153);
        if (!$tmp1154.value) goto $l1149;
        {
            ITable* $tmp1156 = p$Iter1143->$class->itable;
            while ($tmp1156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1156 = $tmp1156->next;
            }
            $fn1158 $tmp1157 = $tmp1156->methods[1];
            panda$core$Object* $tmp1159 = $tmp1157(p$Iter1143);
            p1155 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1159);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1155, p_name, methods1115, p_types);
        }
        goto $l1148;
        $l1149:;
    }
    panda$collections$Array* $tmp1161 = (panda$collections$Array*) malloc(40);
    $tmp1161->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1161->refCount.value = 1;
    panda$collections$Array$init($tmp1161);
    children1160 = $tmp1161;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1160, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1163 = panda$collections$Array$get_count$R$panda$core$Int64(methods1115);
    panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1163, ((panda$core$Int64) { 1 }));
    if ($tmp1164.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1165 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1165->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1165->refCount.value = 1;
        panda$core$Object* $tmp1167 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1115, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1168 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1167));
        panda$core$Object* $tmp1169 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1115, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1165, ((panda$core$Int64) { 1002 }), p_position, $tmp1168, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1169)), ((panda$collections$ListView*) children1160));
        return $tmp1165;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1170 = panda$collections$Array$get_count$R$panda$core$Int64(methods1115);
        panda$core$Bit $tmp1171 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1170, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1171.value);
        panda$collections$Array* $tmp1173 = (panda$collections$Array*) malloc(40);
        $tmp1173->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1173->refCount.value = 1;
        panda$collections$Array$init($tmp1173);
        types1172 = $tmp1173;
        {
            ITable* $tmp1176 = ((panda$collections$Iterable*) methods1115)->$class->itable;
            while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1176 = $tmp1176->next;
            }
            $fn1178 $tmp1177 = $tmp1176->methods[0];
            panda$collections$Iterator* $tmp1179 = $tmp1177(((panda$collections$Iterable*) methods1115));
            m$Iter1175 = $tmp1179;
            $l1180:;
            ITable* $tmp1182 = m$Iter1175->$class->itable;
            while ($tmp1182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1182 = $tmp1182->next;
            }
            $fn1184 $tmp1183 = $tmp1182->methods[0];
            panda$core$Bit $tmp1185 = $tmp1183(m$Iter1175);
            panda$core$Bit $tmp1186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1185);
            if (!$tmp1186.value) goto $l1181;
            {
                ITable* $tmp1188 = m$Iter1175->$class->itable;
                while ($tmp1188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1188 = $tmp1188->next;
                }
                $fn1190 $tmp1189 = $tmp1188->methods[1];
                panda$core$Object* $tmp1191 = $tmp1189(m$Iter1175);
                m1187 = ((org$pandalanguage$pandac$MethodRef*) $tmp1191);
                org$pandalanguage$pandac$Type* $tmp1192 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1187);
                panda$collections$Array$add$panda$collections$Array$T(types1172, ((panda$core$Object*) $tmp1192));
            }
            goto $l1180;
            $l1181:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1193 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1193->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1193->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1195 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1195->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1195->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1195, ((panda$collections$ListView*) types1172));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1193, ((panda$core$Int64) { 1003 }), p_position, $tmp1195, ((panda$core$Object*) methods1115), ((panda$collections$ListView*) children1160));
        return $tmp1193;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1197;
    org$pandalanguage$pandac$FieldDecl* f1213;
    panda$collections$Array* children1216;
    org$pandalanguage$pandac$Type* effectiveType1221;
    org$pandalanguage$pandac$IRNode* result1226;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1198 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1197 = $tmp1198;
            if (((panda$core$Bit) { cl1197 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1199 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1197);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1197, $tmp1199);
                org$pandalanguage$pandac$IRNode* $tmp1200 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1200->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1200->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1202 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1203 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1197);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1200, ((panda$core$Int64) { 1001 }), p_position, $tmp1202, $tmp1203);
                return $tmp1200;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1204 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1204);
            org$pandalanguage$pandac$IRNode* $tmp1205 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1205->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1205->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1207 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1208 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1205, ((panda$core$Int64) { 1001 }), p_position, $tmp1207, $tmp1208);
            return $tmp1205;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1209 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1210 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1209);
            return $tmp1210;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1211 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1211->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1211->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1211, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1211;
        }
        break;
        case 202:
        {
            f1213 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1213);
            org$pandalanguage$pandac$Type* $tmp1214 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1215 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1213->type, $tmp1214);
            if ($tmp1215.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1217 = (panda$collections$Array*) malloc(40);
            $tmp1217->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1217->refCount.value = 1;
            panda$collections$Array$init($tmp1217);
            children1216 = $tmp1217;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1219.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1220);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1222 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1213->type);
                effectiveType1221 = $tmp1222;
                panda$core$Bit $tmp1223 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1213->annotations);
                if ($tmp1223.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1216, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1224 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1213->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1225 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1224);
                    panda$collections$Array$add$panda$collections$Array$T(children1216, ((panda$core$Object*) $tmp1225));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1227 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1227->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1227, ((panda$core$Int64) { 1026 }), p_position, f1213->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1216));
                result1226 = $tmp1227;
                panda$core$Bit $tmp1229 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1221, result1226->type);
                if ($tmp1229.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1230 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1226, p_position, ((panda$core$Bit) { false }), effectiveType1221);
                    result1226 = $tmp1230;
                }
                }
                return result1226;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1231->refCount.value = 1;
                panda$core$Object* $tmp1233 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1234 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1233));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1231, ((panda$core$Int64) { 1025 }), p_position, $tmp1234);
                panda$collections$Array$add$panda$collections$Array$T(children1216, ((panda$core$Object*) $tmp1231));
                org$pandalanguage$pandac$IRNode* $tmp1235 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1235->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1235->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1235, ((panda$core$Int64) { 1026 }), p_position, f1213->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1216));
                return $tmp1235;
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
    panda$collections$HashMap* typeMap1243;
    org$pandalanguage$pandac$Type* base1246;
    org$pandalanguage$pandac$ClassDecl* cl1248;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1250;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1237 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1237, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1238.value);
            panda$core$Object* $tmp1239 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1240 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1239), p_raw);
            return $tmp1240;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1241 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1242 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1241, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1242.value);
            panda$collections$HashMap* $tmp1244 = (panda$collections$HashMap*) malloc(56);
            $tmp1244->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1244->refCount.value = 1;
            panda$collections$HashMap$init($tmp1244);
            typeMap1243 = $tmp1244;
            panda$core$Object* $tmp1247 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1246 = ((org$pandalanguage$pandac$Type*) $tmp1247);
            org$pandalanguage$pandac$ClassDecl* $tmp1249 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1246)->name);
            cl1248 = $tmp1249;
            PANDA_ASSERT(((panda$core$Bit) { cl1248 != NULL }).value);
            panda$core$Int64 $tmp1251 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1250, ((panda$core$Int64) { 1 }), $tmp1251, ((panda$core$Bit) { false }));
            int64_t $tmp1253 = $tmp1250.min.value;
            panda$core$Int64 i1252 = { $tmp1253 };
            int64_t $tmp1255 = $tmp1250.max.value;
            bool $tmp1256 = $tmp1250.inclusive.value;
            bool $tmp1263 = 1 > 0;
            if ($tmp1263) goto $l1261; else goto $l1262;
            $l1261:;
            if ($tmp1256) goto $l1264; else goto $l1265;
            $l1264:;
            if ($tmp1253 <= $tmp1255) goto $l1257; else goto $l1259;
            $l1265:;
            if ($tmp1253 < $tmp1255) goto $l1257; else goto $l1259;
            $l1262:;
            if ($tmp1256) goto $l1266; else goto $l1267;
            $l1266:;
            if ($tmp1253 >= $tmp1255) goto $l1257; else goto $l1259;
            $l1267:;
            if ($tmp1253 > $tmp1255) goto $l1257; else goto $l1259;
            $l1257:;
            {
                panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1248)->name, &$s1269);
                panda$core$Int64 $tmp1271 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1252, ((panda$core$Int64) { 1 }));
                ITable* $tmp1272 = ((panda$collections$ListView*) cl1248->parameters)->$class->itable;
                while ($tmp1272->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1272 = $tmp1272->next;
                }
                $fn1274 $tmp1273 = $tmp1272->methods[0];
                panda$core$Object* $tmp1275 = $tmp1273(((panda$collections$ListView*) cl1248->parameters), $tmp1271);
                panda$core$String* $tmp1276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1270, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1275))->name);
                panda$core$Object* $tmp1277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1252);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1243, ((panda$collections$Key*) $tmp1276), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1277)));
            }
            $l1260:;
            if ($tmp1263) goto $l1279; else goto $l1280;
            $l1279:;
            int64_t $tmp1281 = $tmp1255 - i1252.value;
            if ($tmp1256) goto $l1282; else goto $l1283;
            $l1282:;
            if ($tmp1281 >= 1) goto $l1278; else goto $l1259;
            $l1283:;
            if ($tmp1281 > 1) goto $l1278; else goto $l1259;
            $l1280:;
            int64_t $tmp1285 = i1252.value - $tmp1255;
            if ($tmp1256) goto $l1286; else goto $l1287;
            $l1286:;
            if ($tmp1285 >= -1) goto $l1278; else goto $l1259;
            $l1287:;
            if ($tmp1285 > -1) goto $l1278; else goto $l1259;
            $l1278:;
            i1252.value += 1;
            goto $l1257;
            $l1259:;
            org$pandalanguage$pandac$Type* $tmp1289 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1243);
            return $tmp1289;
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
    org$pandalanguage$pandac$Type* $tmp1290 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1291 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1290);
    if ($tmp1291.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1292 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1292;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1293 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1294 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1293);
    if ($tmp1294.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1295;
    }
    }
    panda$core$Bit $tmp1296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1296.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1297 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1297;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1324;
    panda$collections$Array* args1351;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1352;
    org$pandalanguage$pandac$IRNode* c1354;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1298 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1298, ((panda$core$Int64) { 2 }));
            if ($tmp1299.value) {
            {
                panda$core$Object* $tmp1300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1300)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1301.value) {
                {
                    panda$core$Object* $tmp1302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1302)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1303.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1304);
                        org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1305);
                        return $tmp1306;
                    }
                    }
                    panda$core$Object* $tmp1307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1308 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1307)->type);
                    org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1308);
                    org$pandalanguage$pandac$Type* $tmp1310 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1309);
                    return $tmp1310;
                }
                }
                panda$core$Object* $tmp1311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1311)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1312.value) {
                {
                    panda$core$Object* $tmp1313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1314 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1313)->type);
                    org$pandalanguage$pandac$Type* $tmp1315 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1314);
                    org$pandalanguage$pandac$Type* $tmp1316 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1315);
                    return $tmp1316;
                }
                }
                panda$core$Object* $tmp1317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1318 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1317)->type);
                panda$core$Object* $tmp1319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1320 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1319)->type);
                org$pandalanguage$pandac$Type* $tmp1321 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1318, $tmp1320);
                org$pandalanguage$pandac$Type* $tmp1322 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1321);
                org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1322);
                return $tmp1323;
            }
            }
            panda$core$Object* $tmp1325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1326 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1325)->type);
            step1324 = $tmp1326;
            panda$core$Object* $tmp1327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1327)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1328.value) {
            {
                panda$core$Object* $tmp1329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1329)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1330.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1331);
                    org$pandalanguage$pandac$Type* $tmp1333 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1332, step1324);
                    return $tmp1333;
                }
                }
                panda$core$Object* $tmp1334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1334)->type);
                org$pandalanguage$pandac$Type* $tmp1336 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1335);
                org$pandalanguage$pandac$Type* $tmp1337 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1336, step1324);
                return $tmp1337;
            }
            }
            panda$core$Object* $tmp1338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1338)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1339.value) {
            {
                panda$core$Object* $tmp1340 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1341 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1340)->type);
                org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1341);
                org$pandalanguage$pandac$Type* $tmp1343 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1342, step1324);
                return $tmp1343;
            }
            }
            panda$core$Object* $tmp1344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1344)->type);
            panda$core$Object* $tmp1346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1346)->type);
            org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1345, $tmp1347);
            org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1348);
            org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1349, step1324);
            return $tmp1350;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1352, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1353 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1352);
            args1351 = $tmp1353;
            panda$core$Object* $tmp1355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1357 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1355), &$s1356, ((panda$collections$ListView*) args1351));
            c1354 = $tmp1357;
            if (((panda$core$Bit) { c1354 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1358;
            }
            }
            return c1354->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1359;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1370;
    panda$core$Int64$nullable result1374;
    panda$core$Int64$nullable best1383;
    panda$collections$Iterator* t$Iter1384;
    org$pandalanguage$pandac$Type* t1396;
    panda$core$Int64$nullable cost1401;
    org$pandalanguage$pandac$ClassDecl* cl1415;
    panda$core$Int64$nullable cost1417;
    panda$collections$Iterator* intf$Iter1422;
    org$pandalanguage$pandac$Type* intf1434;
    panda$core$Int64$nullable cost1439;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1360 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1360.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1361 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1362 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1361);
    if ($tmp1362.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1363.value) {
    {
        panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1364.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1365 = $tmp1366.value;
    if (!$tmp1365) goto $l1367;
    panda$core$Bit $tmp1368 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1365 = $tmp1368.value;
    $l1367:;
    panda$core$Bit $tmp1369 = { $tmp1365 };
    if ($tmp1369.value) {
    {
        panda$core$Object* $tmp1371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1372 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1371), p_target);
        result1370 = $tmp1372;
        if (((panda$core$Bit) { !result1370.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1373 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1370.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1373, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1376 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1375));
            result1374 = $tmp1376;
            if (((panda$core$Bit) { !result1374.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1377 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1374.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1377, true });
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
            panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1378.value) {
            {
                panda$core$Object* $tmp1379 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1380 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1379), p_target);
                return $tmp1380;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1382 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1381, p_target);
            return $tmp1382;
        }
        break;
        case 17:
        {
            best1383 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1385 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1385->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1385 = $tmp1385->next;
                }
                $fn1387 $tmp1386 = $tmp1385->methods[0];
                panda$collections$Iterator* $tmp1388 = $tmp1386(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1384 = $tmp1388;
                $l1389:;
                ITable* $tmp1391 = t$Iter1384->$class->itable;
                while ($tmp1391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1391 = $tmp1391->next;
                }
                $fn1393 $tmp1392 = $tmp1391->methods[0];
                panda$core$Bit $tmp1394 = $tmp1392(t$Iter1384);
                panda$core$Bit $tmp1395 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1394);
                if (!$tmp1395.value) goto $l1390;
                {
                    ITable* $tmp1397 = t$Iter1384->$class->itable;
                    while ($tmp1397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1397 = $tmp1397->next;
                    }
                    $fn1399 $tmp1398 = $tmp1397->methods[1];
                    panda$core$Object* $tmp1400 = $tmp1398(t$Iter1384);
                    t1396 = ((org$pandalanguage$pandac$Type*) $tmp1400);
                    panda$core$Int64$nullable $tmp1402 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1396, p_target);
                    cost1401 = $tmp1402;
                    bool $tmp1403 = ((panda$core$Bit) { cost1401.nonnull }).value;
                    if (!$tmp1403) goto $l1404;
                    bool $tmp1405 = ((panda$core$Bit) { !best1383.nonnull }).value;
                    if ($tmp1405) goto $l1406;
                    panda$core$Bit $tmp1407 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1401.value), ((panda$core$Int64) best1383.value));
                    $tmp1405 = $tmp1407.value;
                    $l1406:;
                    panda$core$Bit $tmp1408 = { $tmp1405 };
                    $tmp1403 = $tmp1408.value;
                    $l1404:;
                    panda$core$Bit $tmp1409 = { $tmp1403 };
                    if ($tmp1409.value) {
                    {
                        best1383 = cost1401;
                    }
                    }
                }
                goto $l1389;
                $l1390:;
            }
            return best1383;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1410 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1410;
        }
        break;
    }
    panda$core$Bit $tmp1411 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1411);
    if ($tmp1412.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1413 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1413);
    if ($tmp1414.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1416 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1415 = $tmp1416;
    PANDA_ASSERT(((panda$core$Bit) { cl1415 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1415);
    if (((panda$core$Bit) { cl1415->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1415->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1418);
        panda$core$Int64$nullable $tmp1420 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1419, p_target);
        cost1417 = $tmp1420;
        if (((panda$core$Bit) { cost1417.nonnull }).value) {
        {
            panda$core$Int64 $tmp1421 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1417.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1421, true });
        }
        }
    }
    }
    {
        ITable* $tmp1423 = ((panda$collections$Iterable*) cl1415->rawInterfaces)->$class->itable;
        while ($tmp1423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1423 = $tmp1423->next;
        }
        $fn1425 $tmp1424 = $tmp1423->methods[0];
        panda$collections$Iterator* $tmp1426 = $tmp1424(((panda$collections$Iterable*) cl1415->rawInterfaces));
        intf$Iter1422 = $tmp1426;
        $l1427:;
        ITable* $tmp1429 = intf$Iter1422->$class->itable;
        while ($tmp1429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1429 = $tmp1429->next;
        }
        $fn1431 $tmp1430 = $tmp1429->methods[0];
        panda$core$Bit $tmp1432 = $tmp1430(intf$Iter1422);
        panda$core$Bit $tmp1433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1432);
        if (!$tmp1433.value) goto $l1428;
        {
            ITable* $tmp1435 = intf$Iter1422->$class->itable;
            while ($tmp1435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1435 = $tmp1435->next;
            }
            $fn1437 $tmp1436 = $tmp1435->methods[1];
            panda$core$Object* $tmp1438 = $tmp1436(intf$Iter1422);
            intf1434 = ((org$pandalanguage$pandac$Type*) $tmp1438);
            org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1434);
            org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1440);
            panda$core$Int64$nullable $tmp1442 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1441, p_target);
            cost1439 = $tmp1442;
            if (((panda$core$Bit) { cost1439.nonnull }).value) {
            {
                panda$core$Int64 $tmp1443 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1439.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1443, true });
            }
            }
        }
        goto $l1427;
        $l1428:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1445 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1444 = $tmp1445.value;
    if (!$tmp1444) goto $l1446;
    panda$core$Bit $tmp1447 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1444 = $tmp1447.value;
    $l1446:;
    panda$core$Bit $tmp1448 = { $tmp1444 };
    if ($tmp1448.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1450 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1449 = $tmp1450.value;
    if (!$tmp1449) goto $l1451;
    panda$core$Bit $tmp1452 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1449 = $tmp1452.value;
    $l1451:;
    panda$core$Bit $tmp1453 = { $tmp1449 };
    if ($tmp1453.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1455 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1454 = $tmp1455.value;
    if (!$tmp1454) goto $l1456;
    panda$core$Bit $tmp1457 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1454 = $tmp1457.value;
    $l1456:;
    panda$core$Bit $tmp1458 = { $tmp1454 };
    if ($tmp1458.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1459 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1459.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1460 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1460.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1461 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1461.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1464;
    panda$core$Int64$nullable cost11537;
    panda$core$Int64$nullable cost21541;
    panda$core$Int64 cost1549;
    panda$core$Int64$nullable cost11563;
    panda$core$Int64$nullable cost21567;
    panda$core$Int64$nullable cost31572;
    org$pandalanguage$pandac$ClassDecl* targetClass1582;
    panda$collections$Iterator* m$Iter1584;
    org$pandalanguage$pandac$MethodDecl* m1596;
    panda$core$Int64$nullable cost1605;
    panda$core$Bit $tmp1462 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1462.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1463.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1465 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1466 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1465));
            cost1464 = $tmp1466;
            if (((panda$core$Bit) { !cost1464.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1467.value) {
            {
                return cost1464;
            }
            }
            panda$core$Int64 $tmp1468 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1464.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1468, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1469 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1469;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1470.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1471 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1471.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1472 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1473 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1472, p_target);
                return $tmp1473;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1475 = $tmp1476.value;
            if (!$tmp1475) goto $l1477;
            panda$core$Int64 $tmp1478 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1479 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1478);
            panda$core$Int64 $tmp1480 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1481 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1479, $tmp1480);
            $tmp1475 = $tmp1481.value;
            $l1477:;
            panda$core$Bit $tmp1482 = { $tmp1475 };
            bool $tmp1474 = $tmp1482.value;
            if ($tmp1474) goto $l1483;
            panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1484 = $tmp1485.value;
            if (!$tmp1484) goto $l1486;
            panda$core$Int64 $tmp1487 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1488 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1489 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1487, $tmp1488);
            $tmp1484 = $tmp1489.value;
            $l1486:;
            panda$core$Bit $tmp1490 = { $tmp1484 };
            $tmp1474 = $tmp1490.value;
            $l1483:;
            panda$core$Bit $tmp1491 = { $tmp1474 };
            if ($tmp1491.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1492 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1493 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1492);
            if ($tmp1493.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1494 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1495 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1494, p_target);
                return $tmp1495;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1497 = $tmp1498.value;
            if (!$tmp1497) goto $l1499;
            panda$core$Int64 $tmp1500 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1501 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1500);
            panda$core$Int64 $tmp1502 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1501);
            panda$core$Int64 $tmp1503 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1504 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1502, $tmp1503);
            $tmp1497 = $tmp1504.value;
            $l1499:;
            panda$core$Bit $tmp1505 = { $tmp1497 };
            bool $tmp1496 = $tmp1505.value;
            if ($tmp1496) goto $l1506;
            panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1507 = $tmp1508.value;
            if (!$tmp1507) goto $l1509;
            panda$core$Int64 $tmp1510 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1511 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1510);
            panda$core$Int64 $tmp1512 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1511);
            panda$core$Int64 $tmp1513 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1514 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1512, $tmp1513);
            $tmp1507 = $tmp1514.value;
            $l1509:;
            panda$core$Bit $tmp1515 = { $tmp1507 };
            $tmp1496 = $tmp1515.value;
            $l1506:;
            panda$core$Bit $tmp1516 = { $tmp1496 };
            if ($tmp1516.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1517 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1518 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1517);
            if ($tmp1518.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1519 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1520 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1519, p_target);
                return $tmp1520;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1521 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1521.value) {
            {
                panda$core$Int64 $tmp1522 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1523 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1522, ((panda$core$Int64) { 2 }));
                if ($tmp1523.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1525)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1524 = $tmp1526.value;
                if (!$tmp1524) goto $l1527;
                panda$core$Object* $tmp1528 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1528)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1524 = $tmp1529.value;
                $l1527:;
                panda$core$Bit $tmp1530 = { $tmp1524 };
                if ($tmp1530.value) {
                {
                    panda$core$Object* $tmp1531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1531)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1532.value) {
                    {
                        panda$core$Object* $tmp1533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1533)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1535 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1534));
                        if ($tmp1535.value) {
                        {
                            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                        }
                        }
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1536.value);
                panda$core$Object* $tmp1538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1540 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1538), ((org$pandalanguage$pandac$Type*) $tmp1539));
                cost11537 = $tmp1540;
                if (((panda$core$Bit) { !cost11537.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1542 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1543 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1544 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1542), ((org$pandalanguage$pandac$Type*) $tmp1543));
                cost21541 = $tmp1544;
                if (((panda$core$Bit) { !cost21541.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1545 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11537.value), ((panda$core$Int64) cost21541.value));
                return ((panda$core$Int64$nullable) { $tmp1545, true });
            }
            }
            panda$core$Bit $tmp1546 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1546.value) {
            {
                panda$core$Int64 $tmp1547 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1548 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1547, ((panda$core$Int64) { 3 }));
                if ($tmp1548.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1551)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1550 = $tmp1552.value;
                if (!$tmp1550) goto $l1553;
                panda$core$Object* $tmp1554 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1554)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1550 = $tmp1555.value;
                $l1553:;
                panda$core$Bit $tmp1556 = { $tmp1550 };
                if ($tmp1556.value) {
                {
                    panda$core$Object* $tmp1557 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1557)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1558.value) {
                    {
                        panda$core$Object* $tmp1559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1559)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1561 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1560));
                        if ($tmp1561.value) {
                        {
                            cost1549 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1549 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1562.value);
                    panda$core$Object* $tmp1564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1566 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1564), ((org$pandalanguage$pandac$Type*) $tmp1565));
                    cost11563 = $tmp1566;
                    if (((panda$core$Bit) { !cost11563.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1568 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1570 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1568), ((org$pandalanguage$pandac$Type*) $tmp1569));
                    cost21567 = $tmp1570;
                    if (((panda$core$Bit) { !cost21567.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1571 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11563.value), ((panda$core$Int64) cost21567.value));
                    cost1549 = $tmp1571;
                }
                }
                panda$core$Object* $tmp1573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1574 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1575 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1573), ((org$pandalanguage$pandac$Type*) $tmp1574));
                cost31572 = $tmp1575;
                if (((panda$core$Bit) { !cost31572.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1576 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(cost1549, ((panda$core$Int64) cost31572.value));
                return ((panda$core$Int64$nullable) { $tmp1576, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1577 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1578 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1577, p_target);
            return $tmp1578;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1579 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1579;
        }
        break;
    }
    panda$core$Bit $tmp1580 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1581 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1580);
    if ($tmp1581.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1583 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1582 = $tmp1583;
    if (((panda$core$Bit) { targetClass1582 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1585 = ((panda$collections$Iterable*) targetClass1582->methods)->$class->itable;
        while ($tmp1585->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1585 = $tmp1585->next;
        }
        $fn1587 $tmp1586 = $tmp1585->methods[0];
        panda$collections$Iterator* $tmp1588 = $tmp1586(((panda$collections$Iterable*) targetClass1582->methods));
        m$Iter1584 = $tmp1588;
        $l1589:;
        ITable* $tmp1591 = m$Iter1584->$class->itable;
        while ($tmp1591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1591 = $tmp1591->next;
        }
        $fn1593 $tmp1592 = $tmp1591->methods[0];
        panda$core$Bit $tmp1594 = $tmp1592(m$Iter1584);
        panda$core$Bit $tmp1595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1594);
        if (!$tmp1595.value) goto $l1590;
        {
            ITable* $tmp1597 = m$Iter1584->$class->itable;
            while ($tmp1597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1597 = $tmp1597->next;
            }
            $fn1599 $tmp1598 = $tmp1597->methods[1];
            panda$core$Object* $tmp1600 = $tmp1598(m$Iter1584);
            m1596 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1600);
            panda$core$Bit $tmp1601 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1596->annotations);
            if ($tmp1601.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1596);
                panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1596->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1602.value);
                panda$core$Int64 $tmp1603 = panda$collections$Array$get_count$R$panda$core$Int64(m1596->parameters);
                panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1603, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1604.value);
                panda$core$Object* $tmp1606 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1596->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1607 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1606)->type);
                cost1605 = $tmp1607;
                if (((panda$core$Bit) { cost1605.nonnull }).value) {
                {
                    return cost1605;
                }
                }
            }
            }
        }
        goto $l1589;
        $l1590:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1608 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1608;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1617;
    org$pandalanguage$pandac$IRNode* intermediate1622;
    org$pandalanguage$pandac$IRNode* coerced1650;
    org$pandalanguage$pandac$IRNode* coerced1671;
    org$pandalanguage$pandac$IRNode* varType1685;
    org$pandalanguage$pandac$Type* param1700;
    org$pandalanguage$pandac$IRNode* start1702;
    org$pandalanguage$pandac$IRNode* end1705;
    panda$collections$Array* args1708;
    org$pandalanguage$pandac$IRNode* target1714;
    org$pandalanguage$pandac$Type* endPoint1730;
    org$pandalanguage$pandac$IRNode* start1732;
    org$pandalanguage$pandac$IRNode* end1735;
    org$pandalanguage$pandac$IRNode* step1738;
    panda$collections$Array* args1742;
    org$pandalanguage$pandac$IRNode* target1748;
    panda$collections$ListView* methods1755;
    panda$collections$Array* args1757;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1758;
    panda$collections$Array* best1760;
    panda$core$Int64$nullable bestCost1763;
    panda$collections$Iterator* m$Iter1764;
    org$pandalanguage$pandac$MethodRef* m1776;
    panda$core$Int64$nullable cost1781;
    org$pandalanguage$pandac$IRNode* callTarget1787;
    org$pandalanguage$pandac$IRNode* result1793;
    panda$collections$Array* args1797;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1798;
    panda$collections$Array* children1810;
    org$pandalanguage$pandac$IRNode* intermediate1816;
    org$pandalanguage$pandac$ClassDecl* cl1821;
    panda$collections$Iterator* m$Iter1823;
    org$pandalanguage$pandac$MethodDecl* m1835;
    org$pandalanguage$pandac$IRNode* type1846;
    panda$collections$Array* args1851;
    panda$collections$Array* children1855;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1609 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1609.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1610 = $tmp1611.value;
    if (!$tmp1610) goto $l1612;
    panda$core$Bit $tmp1613 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1610 = $tmp1613.value;
    $l1612:;
    panda$core$Bit $tmp1614 = { $tmp1610 };
    if ($tmp1614.value) {
    {
        panda$core$Object* $tmp1615 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1616 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1615), p_target);
        if ($tmp1616.value) {
        {
            panda$collections$Array* $tmp1618 = (panda$collections$Array*) malloc(40);
            $tmp1618->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1618->refCount.value = 1;
            panda$collections$Array$init($tmp1618);
            children1617 = $tmp1618;
            panda$collections$Array$add$panda$collections$Array$T(children1617, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1620 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1620->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1620->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1620, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1617));
            return $tmp1620;
        }
        }
        panda$core$Object* $tmp1623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1624 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1623));
        intermediate1622 = $tmp1624;
        org$pandalanguage$pandac$IRNode* $tmp1625 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1622, p_target);
        return $tmp1625;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1626 = $tmp1627.value;
            if (!$tmp1626) goto $l1628;
            panda$core$Int64 $tmp1629 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1630 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1631 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1629, $tmp1630);
            $tmp1626 = $tmp1631.value;
            $l1628:;
            panda$core$Bit $tmp1632 = { $tmp1626 };
            if ($tmp1632.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1633 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1633->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1633->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1633, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1633;
            }
            }
            else {
            panda$core$Bit $tmp1636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1635 = $tmp1636.value;
            if (!$tmp1635) goto $l1637;
            panda$core$Int64 $tmp1638 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1639 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1640 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1638, $tmp1639);
            $tmp1635 = $tmp1640.value;
            $l1637:;
            panda$core$Bit $tmp1641 = { $tmp1635 };
            if ($tmp1641.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1642 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1642->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1642->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1642, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1642;
            }
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
        case 1032:
        {
            panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1654 = $tmp1655.value;
            if (!$tmp1654) goto $l1656;
            panda$core$Int64 $tmp1657 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1658 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1657);
            panda$core$Int64 $tmp1659 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1658);
            panda$core$Int64 $tmp1660 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1661 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1659, $tmp1660);
            $tmp1654 = $tmp1661.value;
            $l1656:;
            panda$core$Bit $tmp1662 = { $tmp1654 };
            if ($tmp1662.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1663 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1663->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1663->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1663, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1663;
            }
            }
            panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1665 = $tmp1666.value;
            if (!$tmp1665) goto $l1667;
            panda$core$Bit $tmp1668 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1669 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1668);
            $tmp1665 = $tmp1669.value;
            $l1667:;
            panda$core$Bit $tmp1670 = { $tmp1665 };
            if ($tmp1670.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1672 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1673 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1672);
                coerced1671 = $tmp1673;
                if (((panda$core$Bit) { coerced1671 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1674 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1671, p_target);
                return $tmp1674;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1675 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1676 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1675);
            if ($tmp1676.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1677 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1677->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1677->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1677, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1677;
            }
            }
            panda$core$Bit $tmp1680 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1679 = $tmp1680.value;
            if (!$tmp1679) goto $l1681;
            org$pandalanguage$pandac$Type* $tmp1682 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1683 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1682);
            $tmp1679 = $tmp1683.value;
            $l1681:;
            panda$core$Bit $tmp1684 = { $tmp1679 };
            if ($tmp1684.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1686 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1687 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1686);
                varType1685 = $tmp1687;
                if (((panda$core$Bit) { varType1685 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1688 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1685, p_target);
                    return $tmp1688;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1689 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1689.value) {
            {
                panda$core$Int64 $tmp1690 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1691 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1690, ((panda$core$Int64) { 2 }));
                if ($tmp1691.value) {
                {
                    panda$core$String* $tmp1693 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1692, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1693, &$s1694);
                    panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1695, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1696, &$s1697);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1698);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1699.value);
                panda$core$Object* $tmp1701 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1700 = ((org$pandalanguage$pandac$Type*) $tmp1701);
                panda$core$Object* $tmp1703 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1704 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1703), param1700);
                start1702 = $tmp1704;
                if (((panda$core$Bit) { start1702 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1706 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1707 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1706), param1700);
                end1705 = $tmp1707;
                if (((panda$core$Bit) { end1705 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1709 = (panda$collections$Array*) malloc(40);
                $tmp1709->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1709->refCount.value = 1;
                panda$collections$Array$init($tmp1709);
                args1708 = $tmp1709;
                panda$collections$Array$add$panda$collections$Array$T(args1708, ((panda$core$Object*) start1702));
                panda$collections$Array$add$panda$collections$Array$T(args1708, ((panda$core$Object*) end1705));
                org$pandalanguage$pandac$IRNode* $tmp1711 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1711->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1711->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1713 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1711, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1713, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1708, ((panda$core$Object*) $tmp1711));
                org$pandalanguage$pandac$IRNode* $tmp1715 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1715->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1715->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1717 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1715, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1717, p_target);
                target1714 = $tmp1715;
                org$pandalanguage$pandac$IRNode* $tmp1718 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1714, ((panda$collections$ListView*) args1708));
                return $tmp1718;
            }
            }
            else {
            panda$core$Bit $tmp1719 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1719.value) {
            {
                panda$core$Int64 $tmp1720 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1721 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1720, ((panda$core$Int64) { 3 }));
                if ($tmp1721.value) {
                {
                    panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1722, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1723, &$s1724);
                    panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1725, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, &$s1727);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1728);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1729.value);
                panda$core$Object* $tmp1731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1730 = ((org$pandalanguage$pandac$Type*) $tmp1731);
                panda$core$Object* $tmp1733 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1734 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1733), endPoint1730);
                start1732 = $tmp1734;
                if (((panda$core$Bit) { start1732 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1736 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1737 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1736), endPoint1730);
                end1735 = $tmp1737;
                panda$core$Object* $tmp1739 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1740 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1741 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1739), ((org$pandalanguage$pandac$Type*) $tmp1740));
                step1738 = $tmp1741;
                panda$collections$Array* $tmp1743 = (panda$collections$Array*) malloc(40);
                $tmp1743->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1743->refCount.value = 1;
                panda$collections$Array$init($tmp1743);
                args1742 = $tmp1743;
                panda$collections$Array$add$panda$collections$Array$T(args1742, ((panda$core$Object*) start1732));
                panda$collections$Array$add$panda$collections$Array$T(args1742, ((panda$core$Object*) end1735));
                panda$collections$Array$add$panda$collections$Array$T(args1742, ((panda$core$Object*) step1738));
                org$pandalanguage$pandac$IRNode* $tmp1745 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1745->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1747 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1745, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1747, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1742, ((panda$core$Object*) $tmp1745));
                org$pandalanguage$pandac$IRNode* $tmp1749 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1749->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1749->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1751 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1749, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1751, p_target);
                target1748 = $tmp1749;
                org$pandalanguage$pandac$IRNode* $tmp1752 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1748, ((panda$collections$ListView*) args1742));
                return $tmp1752;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1753 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1754 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1753, p_target);
                return $tmp1754;
            }
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1756 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1755 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1756)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1758, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1759 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1758);
            args1757 = $tmp1759;
            panda$collections$Array* $tmp1761 = (panda$collections$Array*) malloc(40);
            $tmp1761->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1761->refCount.value = 1;
            panda$collections$Array$init($tmp1761);
            best1760 = $tmp1761;
            bestCost1763 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1765 = ((panda$collections$Iterable*) methods1755)->$class->itable;
                while ($tmp1765->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1765 = $tmp1765->next;
                }
                $fn1767 $tmp1766 = $tmp1765->methods[0];
                panda$collections$Iterator* $tmp1768 = $tmp1766(((panda$collections$Iterable*) methods1755));
                m$Iter1764 = $tmp1768;
                $l1769:;
                ITable* $tmp1771 = m$Iter1764->$class->itable;
                while ($tmp1771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1771 = $tmp1771->next;
                }
                $fn1773 $tmp1772 = $tmp1771->methods[0];
                panda$core$Bit $tmp1774 = $tmp1772(m$Iter1764);
                panda$core$Bit $tmp1775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1774);
                if (!$tmp1775.value) goto $l1770;
                {
                    ITable* $tmp1777 = m$Iter1764->$class->itable;
                    while ($tmp1777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1777 = $tmp1777->next;
                    }
                    $fn1779 $tmp1778 = $tmp1777->methods[1];
                    panda$core$Object* $tmp1780 = $tmp1778(m$Iter1764);
                    m1776 = ((org$pandalanguage$pandac$MethodRef*) $tmp1780);
                    panda$core$Int64$nullable $tmp1782 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1776, ((panda$collections$ListView*) args1757), p_target);
                    cost1781 = $tmp1782;
                    if (((panda$core$Bit) { !cost1781.nonnull }).value) {
                    {
                        goto $l1769;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1763.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1760, ((panda$core$Object*) m1776));
                        bestCost1763 = cost1781;
                        goto $l1769;
                    }
                    }
                    panda$core$Bit $tmp1783 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1781.value), ((panda$core$Int64) bestCost1763.value));
                    if ($tmp1783.value) {
                    {
                        panda$collections$Array$clear(best1760);
                        bestCost1763 = cost1781;
                    }
                    }
                    panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1781.value), ((panda$core$Int64) bestCost1763.value));
                    if ($tmp1784.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1760, ((panda$core$Object*) m1776));
                    }
                    }
                }
                goto $l1769;
                $l1770:;
            }
            panda$core$Int64 $tmp1785 = panda$collections$Array$get_count$R$panda$core$Int64(best1760);
            panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1785, ((panda$core$Int64) { 1 }));
            if ($tmp1786.value) {
            {
                panda$core$Object* $tmp1788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1789 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1788)->children);
                panda$core$Bit $tmp1790 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1789, ((panda$core$Int64) { 0 }));
                if ($tmp1790.value) {
                {
                    panda$core$Object* $tmp1791 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1791)->children, ((panda$core$Int64) { 0 }));
                    callTarget1787 = ((org$pandalanguage$pandac$IRNode*) $tmp1792);
                }
                }
                else {
                {
                    callTarget1787 = NULL;
                }
                }
                panda$core$Object* $tmp1794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1760, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1795 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget1787, ((org$pandalanguage$pandac$MethodRef*) $tmp1794), ((panda$collections$ListView*) args1757));
                result1793 = $tmp1795;
                org$pandalanguage$pandac$IRNode* $tmp1796 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1793, p_target);
                return $tmp1796;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1798, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1799 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1798);
            args1797 = $tmp1799;
            panda$core$Object* $tmp1800 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1802 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1800), &$s1801, ((panda$collections$ListView*) args1797), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1803 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1802, p_target);
            return $tmp1803;
        }
        break;
    }
    panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1804.value) {
    {
        panda$core$Bit $tmp1805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1805.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1806 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1806->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1806->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1806, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1806;
        }
        }
        panda$core$Object* $tmp1808 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1809 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1808));
        if ($tmp1809.value) {
        {
            panda$collections$Array* $tmp1811 = (panda$collections$Array*) malloc(40);
            $tmp1811->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1811->refCount.value = 1;
            panda$collections$Array$init($tmp1811);
            children1810 = $tmp1811;
            panda$collections$Array$add$panda$collections$Array$T(children1810, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1813 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1813->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1813->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1813, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1810));
            return $tmp1813;
        }
        }
        panda$core$Bit $tmp1815 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1815.value) {
        {
            panda$core$Object* $tmp1817 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1818 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1817));
            intermediate1816 = $tmp1818;
            org$pandalanguage$pandac$IRNode* $tmp1819 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1816, p_target);
            return $tmp1819;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1820 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1820.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1822 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1821 = $tmp1822;
        if (((panda$core$Bit) { cl1821 != NULL }).value) {
        {
            {
                ITable* $tmp1824 = ((panda$collections$Iterable*) cl1821->methods)->$class->itable;
                while ($tmp1824->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1824 = $tmp1824->next;
                }
                $fn1826 $tmp1825 = $tmp1824->methods[0];
                panda$collections$Iterator* $tmp1827 = $tmp1825(((panda$collections$Iterable*) cl1821->methods));
                m$Iter1823 = $tmp1827;
                $l1828:;
                ITable* $tmp1830 = m$Iter1823->$class->itable;
                while ($tmp1830->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1830 = $tmp1830->next;
                }
                $fn1832 $tmp1831 = $tmp1830->methods[0];
                panda$core$Bit $tmp1833 = $tmp1831(m$Iter1823);
                panda$core$Bit $tmp1834 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1833);
                if (!$tmp1834.value) goto $l1829;
                {
                    ITable* $tmp1836 = m$Iter1823->$class->itable;
                    while ($tmp1836->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1836 = $tmp1836->next;
                    }
                    $fn1838 $tmp1837 = $tmp1836->methods[1];
                    panda$core$Object* $tmp1839 = $tmp1837(m$Iter1823);
                    m1835 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1839);
                    panda$core$Bit $tmp1840 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1835->annotations);
                    if ($tmp1840.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1835);
                        panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1835->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1841.value);
                        panda$core$Int64 $tmp1842 = panda$collections$Array$get_count$R$panda$core$Int64(m1835->parameters);
                        panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1842, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1843.value);
                        panda$core$Object* $tmp1844 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1835->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1845 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1844)->type);
                        if (((panda$core$Bit) { $tmp1845.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1847 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1847->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1847->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1849 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1850 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1821);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1847, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1849, $tmp1850);
                            type1846 = $tmp1847;
                            panda$collections$Array* $tmp1852 = (panda$collections$Array*) malloc(40);
                            $tmp1852->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1852->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1852, ((panda$core$Int64) { 1 }));
                            args1851 = $tmp1852;
                            panda$collections$Array$add$panda$collections$Array$T(args1851, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1854 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1846, ((panda$collections$ListView*) args1851));
                            return $tmp1854;
                        }
                        }
                    }
                    }
                }
                goto $l1828;
                $l1829:;
            }
        }
        }
        panda$collections$Array* $tmp1856 = (panda$collections$Array*) malloc(40);
        $tmp1856->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1856->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1856, ((panda$core$Int64) { 1 }));
        children1855 = $tmp1856;
        panda$collections$Array$add$panda$collections$Array$T(children1855, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1858 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1858->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1858->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1858, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1855));
        return $tmp1858;
    }
    }
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1860, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
    panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1863, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1865);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1866);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1867;
    org$pandalanguage$pandac$IRNode* $tmp1868 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1867 = $tmp1868;
    bool $tmp1869 = ((panda$core$Bit) { result1867 == NULL }).value;
    if ($tmp1869) goto $l1870;
    panda$core$Bit $tmp1871 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1867->type, p_target);
    $tmp1869 = $tmp1871.value;
    $l1870:;
    panda$core$Bit $tmp1872 = { $tmp1869 };
    PANDA_ASSERT($tmp1872.value);
    return result1867;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1874 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1873 = $tmp1874.value;
    if (!$tmp1873) goto $l1875;
    panda$core$Bit $tmp1876 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1873 = $tmp1876.value;
    $l1875:;
    panda$core$Bit $tmp1877 = { $tmp1873 };
    if ($tmp1877.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1878 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1878.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1880 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1879 = $tmp1880.value;
    if (!$tmp1879) goto $l1881;
    panda$core$Bit $tmp1882 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1879 = $tmp1882.value;
    $l1881:;
    panda$core$Bit $tmp1883 = { $tmp1879 };
    if ($tmp1883.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1884.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1885 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1885.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1887;
    org$pandalanguage$pandac$IRNode* resolved1894;
    panda$core$Int64$nullable $tmp1886 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1886.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1888 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1887 = $tmp1888;
    panda$core$Bit $tmp1890 = panda$core$Bit$$NOT$R$panda$core$Bit(result1887);
    bool $tmp1889 = $tmp1890.value;
    if (!$tmp1889) goto $l1891;
    panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1889 = $tmp1892.value;
    $l1891:;
    panda$core$Bit $tmp1893 = { $tmp1889 };
    if ($tmp1893.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1895 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1894 = $tmp1895;
        if (((panda$core$Bit) { resolved1894 != NULL }).value) {
        {
            panda$core$Bit $tmp1896 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1894, p_target);
            result1887 = $tmp1896;
        }
        }
    }
    }
    return result1887;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1917;
    panda$collections$Array* children1920;
    panda$core$Bit $tmp1897 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1897.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1898 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1899 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1898);
    PANDA_ASSERT($tmp1899.value);
    bool $tmp1900 = p_isExplicit.value;
    if (!$tmp1900) goto $l1901;
    panda$core$Bit $tmp1902 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1903 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1902);
    $tmp1900 = $tmp1903.value;
    $l1901:;
    panda$core$Bit $tmp1904 = { $tmp1900 };
    if ($tmp1904.value) {
    {
        panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1905, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1906, &$s1907);
        panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1909, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, &$s1911);
        panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, $tmp1912);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1913);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1914 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1914;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1915 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1915.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1916 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1916;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1918 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1917 = $tmp1918;
            if (((panda$core$Bit) { resolved1917 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1919 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1917, p_position, p_isExplicit, p_target);
                return $tmp1919;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1921 = (panda$collections$Array*) malloc(40);
    $tmp1921->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1921->refCount.value = 1;
    panda$collections$Array$init($tmp1921);
    children1920 = $tmp1921;
    panda$collections$Array$add$panda$collections$Array$T(children1920, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1923 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1923->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1923->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1923, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1920));
    return $tmp1923;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1931;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1932;
    panda$core$Int64$nullable cost1951;
    panda$core$Int64$nullable cost1970;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1925 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1926 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1926->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1926 = $tmp1926->next;
    }
    $fn1928 $tmp1927 = $tmp1926->methods[0];
    panda$core$Int64 $tmp1929 = $tmp1927(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1930 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1925, $tmp1929);
    if ($tmp1930.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1931 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1933 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1932, ((panda$core$Int64) { 0 }), $tmp1933, ((panda$core$Bit) { false }));
    int64_t $tmp1935 = $tmp1932.min.value;
    panda$core$Int64 i1934 = { $tmp1935 };
    int64_t $tmp1937 = $tmp1932.max.value;
    bool $tmp1938 = $tmp1932.inclusive.value;
    bool $tmp1945 = 1 > 0;
    if ($tmp1945) goto $l1943; else goto $l1944;
    $l1943:;
    if ($tmp1938) goto $l1946; else goto $l1947;
    $l1946:;
    if ($tmp1935 <= $tmp1937) goto $l1939; else goto $l1941;
    $l1947:;
    if ($tmp1935 < $tmp1937) goto $l1939; else goto $l1941;
    $l1944:;
    if ($tmp1938) goto $l1948; else goto $l1949;
    $l1948:;
    if ($tmp1935 >= $tmp1937) goto $l1939; else goto $l1941;
    $l1949:;
    if ($tmp1935 > $tmp1937) goto $l1939; else goto $l1941;
    $l1939:;
    {
        ITable* $tmp1952 = p_args->$class->itable;
        while ($tmp1952->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1952 = $tmp1952->next;
        }
        $fn1954 $tmp1953 = $tmp1952->methods[0];
        panda$core$Object* $tmp1955 = $tmp1953(p_args, i1934);
        org$pandalanguage$pandac$Type* $tmp1956 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1934);
        panda$core$Int64$nullable $tmp1957 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1955), $tmp1956);
        cost1951 = $tmp1957;
        if (((panda$core$Bit) { !cost1951.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1958 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1931, ((panda$core$Int64) cost1951.value));
        result1931 = $tmp1958;
    }
    $l1942:;
    if ($tmp1945) goto $l1960; else goto $l1961;
    $l1960:;
    int64_t $tmp1962 = $tmp1937 - i1934.value;
    if ($tmp1938) goto $l1963; else goto $l1964;
    $l1963:;
    if ($tmp1962 >= 1) goto $l1959; else goto $l1941;
    $l1964:;
    if ($tmp1962 > 1) goto $l1959; else goto $l1941;
    $l1961:;
    int64_t $tmp1966 = i1934.value - $tmp1937;
    if ($tmp1938) goto $l1967; else goto $l1968;
    $l1967:;
    if ($tmp1966 >= -1) goto $l1959; else goto $l1941;
    $l1968:;
    if ($tmp1966 > -1) goto $l1959; else goto $l1941;
    $l1959:;
    i1934.value += 1;
    goto $l1939;
    $l1941:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1971 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1972 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1971, p_expectedReturn);
        cost1970 = $tmp1972;
        if (((panda$core$Bit) { !cost1970.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1973 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1931, ((panda$core$Int64) cost1970.value));
        result1931 = $tmp1973;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1976 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1977 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1976);
    bool $tmp1975 = $tmp1977.value;
    if (!$tmp1975) goto $l1978;
    ITable* $tmp1979 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1979->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1979 = $tmp1979->next;
    }
    $fn1981 $tmp1980 = $tmp1979->methods[0];
    panda$core$Int64 $tmp1982 = $tmp1980(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1982, ((panda$core$Int64) { 1 }));
    $tmp1975 = $tmp1983.value;
    $l1978:;
    panda$core$Bit $tmp1984 = { $tmp1975 };
    bool $tmp1974 = $tmp1984.value;
    if (!$tmp1974) goto $l1985;
    panda$core$Object* $tmp1986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1987 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1988 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1986)->type, $tmp1987);
    $tmp1974 = $tmp1988.value;
    $l1985:;
    panda$core$Bit $tmp1989 = { $tmp1974 };
    if ($tmp1989.value) {
    {
        panda$core$Int64 $tmp1990 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1931, ((panda$core$Int64) { 1 }));
        result1931 = $tmp1990;
    }
    }
    return ((panda$core$Int64$nullable) { result1931, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1991;
    panda$core$Int64$nullable best1994;
    panda$collections$Iterator* m$Iter1995;
    org$pandalanguage$pandac$MethodRef* m2007;
    panda$core$Int64$nullable cost2012;
    panda$collections$Array* $tmp1992 = (panda$collections$Array*) malloc(40);
    $tmp1992->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1992->refCount.value = 1;
    panda$collections$Array$init($tmp1992);
    result1991 = $tmp1992;
    best1994 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1996 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1996->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1996 = $tmp1996->next;
        }
        $fn1998 $tmp1997 = $tmp1996->methods[0];
        panda$collections$Iterator* $tmp1999 = $tmp1997(((panda$collections$Iterable*) p_methods));
        m$Iter1995 = $tmp1999;
        $l2000:;
        ITable* $tmp2002 = m$Iter1995->$class->itable;
        while ($tmp2002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2002 = $tmp2002->next;
        }
        $fn2004 $tmp2003 = $tmp2002->methods[0];
        panda$core$Bit $tmp2005 = $tmp2003(m$Iter1995);
        panda$core$Bit $tmp2006 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2005);
        if (!$tmp2006.value) goto $l2001;
        {
            ITable* $tmp2008 = m$Iter1995->$class->itable;
            while ($tmp2008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2008 = $tmp2008->next;
            }
            $fn2010 $tmp2009 = $tmp2008->methods[1];
            panda$core$Object* $tmp2011 = $tmp2009(m$Iter1995);
            m2007 = ((org$pandalanguage$pandac$MethodRef*) $tmp2011);
            panda$core$Int64$nullable $tmp2013 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2007, p_args, p_expectedReturn);
            cost2012 = $tmp2013;
            if (((panda$core$Bit) { !cost2012.nonnull }).value) {
            {
                goto $l2000;
            }
            }
            bool $tmp2014 = ((panda$core$Bit) { !best1994.nonnull }).value;
            if ($tmp2014) goto $l2015;
            panda$core$Bit $tmp2016 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2012.value), ((panda$core$Int64) best1994.value));
            $tmp2014 = $tmp2016.value;
            $l2015:;
            panda$core$Bit $tmp2017 = { $tmp2014 };
            if ($tmp2017.value) {
            {
                panda$collections$Array$clear(result1991);
                best1994 = cost2012;
            }
            }
            panda$core$Bit $tmp2018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2012.value), ((panda$core$Int64) best1994.value));
            if ($tmp2018.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1991, ((panda$core$Object*) m2007));
            }
            }
        }
        goto $l2000;
        $l2001:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1991));
    return best1994;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2025;
    panda$collections$Array* finalArgs2051;
    org$pandalanguage$pandac$IRNode* selfNode2087;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2116;
    org$pandalanguage$pandac$IRNode* coerced2138;
    org$pandalanguage$pandac$IRNode* result2158;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2019 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2020 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2020->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2020 = $tmp2020->next;
    }
    $fn2022 $tmp2021 = $tmp2020->methods[0];
    panda$core$Int64 $tmp2023 = $tmp2021(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2024 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2019, $tmp2023);
    if ($tmp2024.value) {
    {
        panda$core$Int64 $tmp2026 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2026, ((panda$core$Int64) { 1 }));
        if ($tmp2027.value) {
        {
            s2025 = &$s2028;
        }
        }
        else {
        {
            s2025 = &$s2029;
        }
        }
        panda$core$String* $tmp2031 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2030, $tmp2031);
        panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, &$s2033);
        panda$core$Int64 $tmp2035 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2034, ((panda$core$Object*) wrap_panda$core$Int64($tmp2035)));
        panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
        panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, s2025);
        panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2039, &$s2040);
        ITable* $tmp2043 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2043->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2043 = $tmp2043->next;
        }
        $fn2045 $tmp2044 = $tmp2043->methods[0];
        panda$core$Int64 $tmp2046 = $tmp2044(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2042, ((panda$core$Object*) wrap_panda$core$Int64($tmp2046)));
        panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
        panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2041, $tmp2049);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2050);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2052 = (panda$collections$Array*) malloc(40);
    $tmp2052->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2052->refCount.value = 1;
    panda$collections$Array$init($tmp2052);
    finalArgs2051 = $tmp2052;
    bool $tmp2055 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2055) goto $l2056;
    panda$core$Bit $tmp2057 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2055 = $tmp2057.value;
    $l2056:;
    panda$core$Bit $tmp2058 = { $tmp2055 };
    bool $tmp2054 = $tmp2058.value;
    if (!$tmp2054) goto $l2059;
    panda$core$Bit $tmp2060 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2061 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2060);
    $tmp2054 = $tmp2061.value;
    $l2059:;
    panda$core$Bit $tmp2062 = { $tmp2054 };
    if ($tmp2062.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2063 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2064 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2063);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2051, ((panda$core$Object*) $tmp2064));
    }
    }
    panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2065.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2066 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2066)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2067.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2068 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2068->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2068->refCount.value = 1;
                panda$core$Object* $tmp2070 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2071 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2070));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2068, ((panda$core$Int64) { 1025 }), p_position, $tmp2071);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2051, ((panda$core$Object*) $tmp2068));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2072);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2075 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2074 = $tmp2075.value;
        if (!$tmp2074) goto $l2076;
        panda$core$Bit $tmp2077 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2074 = $tmp2077.value;
        $l2076:;
        panda$core$Bit $tmp2078 = { $tmp2074 };
        bool $tmp2073 = $tmp2078.value;
        if (!$tmp2073) goto $l2079;
        panda$core$Bit $tmp2080 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2073 = $tmp2080.value;
        $l2079:;
        panda$core$Bit $tmp2081 = { $tmp2073 };
        if ($tmp2081.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2082);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2084 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2083 = $tmp2084.value;
    if (!$tmp2083) goto $l2085;
    $tmp2083 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2085:;
    panda$core$Bit $tmp2086 = { $tmp2083 };
    if ($tmp2086.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2088 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2088->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2088->refCount.value = 1;
        panda$core$Object* $tmp2090 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2091 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2090));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2088, ((panda$core$Int64) { 1025 }), p_position, $tmp2091);
        selfNode2087 = $tmp2088;
        org$pandalanguage$pandac$Type* $tmp2092 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2093 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2087, $tmp2092);
        selfNode2087 = $tmp2093;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2087 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2051, ((panda$core$Object*) selfNode2087));
        panda$core$Object* $tmp2094 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2095 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2094));
        panda$core$Bit $tmp2096 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2095);
        if ($tmp2096.value) {
        {
            panda$core$String* $tmp2098 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2097, $tmp2098);
            panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2101);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2104 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2105 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2104);
    bool $tmp2103 = $tmp2105.value;
    if (!$tmp2103) goto $l2106;
    $tmp2103 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2106:;
    panda$core$Bit $tmp2107 = { $tmp2103 };
    bool $tmp2102 = $tmp2107.value;
    if (!$tmp2102) goto $l2108;
    panda$core$Bit $tmp2109 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2102 = $tmp2109.value;
    $l2108:;
    panda$core$Bit $tmp2110 = { $tmp2102 };
    if ($tmp2110.value) {
    {
        panda$core$String* $tmp2112 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2111, $tmp2112);
        panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2113, &$s2114);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2115);
    }
    }
    }
    }
    ITable* $tmp2117 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2117->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2117 = $tmp2117->next;
    }
    $fn2119 $tmp2118 = $tmp2117->methods[0];
    panda$core$Int64 $tmp2120 = $tmp2118(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2116, ((panda$core$Int64) { 0 }), $tmp2120, ((panda$core$Bit) { false }));
    int64_t $tmp2122 = $tmp2116.min.value;
    panda$core$Int64 i2121 = { $tmp2122 };
    int64_t $tmp2124 = $tmp2116.max.value;
    bool $tmp2125 = $tmp2116.inclusive.value;
    bool $tmp2132 = 1 > 0;
    if ($tmp2132) goto $l2130; else goto $l2131;
    $l2130:;
    if ($tmp2125) goto $l2133; else goto $l2134;
    $l2133:;
    if ($tmp2122 <= $tmp2124) goto $l2126; else goto $l2128;
    $l2134:;
    if ($tmp2122 < $tmp2124) goto $l2126; else goto $l2128;
    $l2131:;
    if ($tmp2125) goto $l2135; else goto $l2136;
    $l2135:;
    if ($tmp2122 >= $tmp2124) goto $l2126; else goto $l2128;
    $l2136:;
    if ($tmp2122 > $tmp2124) goto $l2126; else goto $l2128;
    $l2126:;
    {
        ITable* $tmp2139 = p_args->$class->itable;
        while ($tmp2139->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2139 = $tmp2139->next;
        }
        $fn2141 $tmp2140 = $tmp2139->methods[0];
        panda$core$Object* $tmp2142 = $tmp2140(p_args, i2121);
        org$pandalanguage$pandac$Type* $tmp2143 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2121);
        org$pandalanguage$pandac$IRNode* $tmp2144 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2142), $tmp2143);
        coerced2138 = $tmp2144;
        if (((panda$core$Bit) { coerced2138 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2145 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2121);
        org$pandalanguage$pandac$IRNode* $tmp2146 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2138, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2145)->type);
        coerced2138 = $tmp2146;
        if (((panda$core$Bit) { coerced2138 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2051, ((panda$core$Object*) coerced2138));
    }
    $l2129:;
    if ($tmp2132) goto $l2148; else goto $l2149;
    $l2148:;
    int64_t $tmp2150 = $tmp2124 - i2121.value;
    if ($tmp2125) goto $l2151; else goto $l2152;
    $l2151:;
    if ($tmp2150 >= 1) goto $l2147; else goto $l2128;
    $l2152:;
    if ($tmp2150 > 1) goto $l2147; else goto $l2128;
    $l2149:;
    int64_t $tmp2154 = i2121.value - $tmp2124;
    if ($tmp2125) goto $l2155; else goto $l2156;
    $l2155:;
    if ($tmp2154 >= -1) goto $l2147; else goto $l2128;
    $l2156:;
    if ($tmp2154 > -1) goto $l2147; else goto $l2128;
    $l2147:;
    i2121.value += 1;
    goto $l2126;
    $l2128:;
    panda$core$Bit $tmp2160 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2159);
    if ($tmp2160.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2161 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2161->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2161->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2163 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2161, ((panda$core$Int64) { 1005 }), p_position, $tmp2163, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2051));
        result2158 = $tmp2161;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2164 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2164->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2164->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2164, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2051));
        result2158 = $tmp2164;
        org$pandalanguage$pandac$Type* $tmp2166 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2167 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2158, p_position, ((panda$core$Bit) { false }), $tmp2166);
        result2158 = $tmp2167;
    }
    }
    return result2158;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2168 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2168;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2169;
    org$pandalanguage$pandac$ClassDecl* cl2171;
    org$pandalanguage$pandac$Symbol* s2175;
    org$pandalanguage$pandac$IRNode* ref2197;
    org$pandalanguage$pandac$IRNode* $tmp2170 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2169 = $tmp2170;
    if (((panda$core$Bit) { resolved2169 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2169->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2172.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2173 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2169->payload));
        cl2171 = $tmp2173;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2174 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2169->type);
        cl2171 = $tmp2174;
    }
    }
    if (((panda$core$Bit) { cl2171 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2176 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2171);
    org$pandalanguage$pandac$Symbol* $tmp2177 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2176, p_name);
    s2175 = $tmp2177;
    if (((panda$core$Bit) { s2175 == NULL }).value) {
    {
        panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2178, ((org$pandalanguage$pandac$Symbol*) cl2171)->name);
        panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, &$s2180);
        panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, p_name);
        panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2183);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2184);
        return NULL;
    }
    }
    panda$core$Bit $tmp2186 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2175->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2185 = $tmp2186.value;
    if (!$tmp2185) goto $l2187;
    panda$core$Bit $tmp2188 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2175->kind, ((panda$core$Int64) { 205 }));
    $tmp2185 = $tmp2188.value;
    $l2187:;
    panda$core$Bit $tmp2189 = { $tmp2185 };
    if ($tmp2189.value) {
    {
        panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2190, ((org$pandalanguage$pandac$Symbol*) cl2171)->name);
        panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2192);
        panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, p_name);
        panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2194, &$s2195);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2196);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2198 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2171);
    org$pandalanguage$pandac$IRNode* $tmp2199 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2175, $tmp2198);
    ref2197 = $tmp2199;
    if (((panda$core$Bit) { ref2197 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2200 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2197, p_args, p_expectedType);
    return $tmp2200;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2201 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2201;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2202;
    panda$collections$Array* methods2209;
    org$pandalanguage$pandac$MethodDecl* first2214;
    panda$core$MutableString* msg2219;
    panda$core$String* separator2231;
    panda$collections$Iterator* a$Iter2233;
    org$pandalanguage$pandac$IRNode* a2245;
    org$pandalanguage$pandac$IRNode* target2259;
    panda$collections$Array* children2267;
    panda$collections$Array* types2273;
    panda$collections$Iterator* m$Iter2276;
    org$pandalanguage$pandac$MethodRef* m2288;
    org$pandalanguage$pandac$IRNode* target2298;
    org$pandalanguage$pandac$IRNode* initCall2301;
    panda$collections$Array* children2305;
    org$pandalanguage$pandac$IRNode* resolved2310;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2203 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2203, ((panda$core$Int64) { 0 }));
            if ($tmp2204.value) {
            {
                target2202 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2205 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2205, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2206.value);
                panda$core$Object* $tmp2207 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2202 = ((org$pandalanguage$pandac$IRNode*) $tmp2207);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2208 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2202, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2208;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2210 = (panda$collections$Array*) malloc(40);
            $tmp2210->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2210->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2210, ((panda$collections$ListView*) p_m->payload));
            methods2209 = $tmp2210;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2209, p_args, p_expectedType);
            panda$core$Int64 $tmp2212 = panda$collections$Array$get_count$R$panda$core$Int64(methods2209);
            panda$core$Bit $tmp2213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2212, ((panda$core$Int64) { 0 }));
            if ($tmp2213.value) {
            {
                ITable* $tmp2215 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2215->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2215 = $tmp2215->next;
                }
                $fn2217 $tmp2216 = $tmp2215->methods[0];
                panda$core$Object* $tmp2218 = $tmp2216(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2214 = ((org$pandalanguage$pandac$MethodRef*) $tmp2218)->value;
                panda$core$MutableString* $tmp2220 = (panda$core$MutableString*) malloc(40);
                $tmp2220->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2220->refCount.value = 1;
                panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2222, ((org$pandalanguage$pandac$Symbol*) first2214->owner)->name);
                panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, &$s2224);
                panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2226, ((org$pandalanguage$pandac$Symbol*) first2214)->name);
                panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
                panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2225, $tmp2229);
                panda$core$MutableString$init$panda$core$String($tmp2220, $tmp2230);
                msg2219 = $tmp2220;
                separator2231 = &$s2232;
                {
                    ITable* $tmp2234 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2234->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2234 = $tmp2234->next;
                    }
                    $fn2236 $tmp2235 = $tmp2234->methods[0];
                    panda$collections$Iterator* $tmp2237 = $tmp2235(((panda$collections$Iterable*) p_args));
                    a$Iter2233 = $tmp2237;
                    $l2238:;
                    ITable* $tmp2240 = a$Iter2233->$class->itable;
                    while ($tmp2240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2240 = $tmp2240->next;
                    }
                    $fn2242 $tmp2241 = $tmp2240->methods[0];
                    panda$core$Bit $tmp2243 = $tmp2241(a$Iter2233);
                    panda$core$Bit $tmp2244 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2243);
                    if (!$tmp2244.value) goto $l2239;
                    {
                        ITable* $tmp2246 = a$Iter2233->$class->itable;
                        while ($tmp2246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2246 = $tmp2246->next;
                        }
                        $fn2248 $tmp2247 = $tmp2246->methods[1];
                        panda$core$Object* $tmp2249 = $tmp2247(a$Iter2233);
                        a2245 = ((org$pandalanguage$pandac$IRNode*) $tmp2249);
                        panda$core$MutableString$append$panda$core$String(msg2219, separator2231);
                        panda$core$MutableString$append$panda$core$Object(msg2219, ((panda$core$Object*) a2245->type));
                        separator2231 = &$s2250;
                    }
                    goto $l2238;
                    $l2239:;
                }
                panda$core$MutableString$append$panda$core$String(msg2219, &$s2251);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2252, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
                    panda$core$MutableString$append$panda$core$String(msg2219, $tmp2255);
                }
                }
                panda$core$String* $tmp2256 = panda$core$MutableString$convert$R$panda$core$String(msg2219);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2256);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2257 = panda$collections$Array$get_count$R$panda$core$Int64(methods2209);
            panda$core$Bit $tmp2258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2257, ((panda$core$Int64) { 1 }));
            if ($tmp2258.value) {
            {
                panda$core$Int64 $tmp2260 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2260, ((panda$core$Int64) { 1 }));
                if ($tmp2261.value) {
                {
                    panda$core$Object* $tmp2262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2259 = ((org$pandalanguage$pandac$IRNode*) $tmp2262);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2263 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2263, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2264.value);
                    target2259 = NULL;
                }
                }
                panda$core$Object* $tmp2265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2209, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2266 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2259, ((org$pandalanguage$pandac$MethodRef*) $tmp2265), p_args);
                return $tmp2266;
            }
            }
            panda$collections$Array* $tmp2268 = (panda$collections$Array*) malloc(40);
            $tmp2268->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2268->refCount.value = 1;
            panda$collections$Array$init($tmp2268);
            children2267 = $tmp2268;
            org$pandalanguage$pandac$IRNode* $tmp2270 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2270->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2270->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2272 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2270, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2272, ((panda$core$Object*) methods2209), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2267, ((panda$core$Object*) $tmp2270));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2267, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2274 = (panda$collections$Array*) malloc(40);
            $tmp2274->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2274->refCount.value = 1;
            panda$collections$Array$init($tmp2274);
            types2273 = $tmp2274;
            {
                ITable* $tmp2277 = ((panda$collections$Iterable*) methods2209)->$class->itable;
                while ($tmp2277->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2277 = $tmp2277->next;
                }
                $fn2279 $tmp2278 = $tmp2277->methods[0];
                panda$collections$Iterator* $tmp2280 = $tmp2278(((panda$collections$Iterable*) methods2209));
                m$Iter2276 = $tmp2280;
                $l2281:;
                ITable* $tmp2283 = m$Iter2276->$class->itable;
                while ($tmp2283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2283 = $tmp2283->next;
                }
                $fn2285 $tmp2284 = $tmp2283->methods[0];
                panda$core$Bit $tmp2286 = $tmp2284(m$Iter2276);
                panda$core$Bit $tmp2287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2286);
                if (!$tmp2287.value) goto $l2282;
                {
                    ITable* $tmp2289 = m$Iter2276->$class->itable;
                    while ($tmp2289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2289 = $tmp2289->next;
                    }
                    $fn2291 $tmp2290 = $tmp2289->methods[1];
                    panda$core$Object* $tmp2292 = $tmp2290(m$Iter2276);
                    m2288 = ((org$pandalanguage$pandac$MethodRef*) $tmp2292);
                    org$pandalanguage$pandac$Type* $tmp2293 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2288);
                    panda$collections$Array$add$panda$collections$Array$T(types2273, ((panda$core$Object*) $tmp2293));
                }
                goto $l2281;
                $l2282:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2294 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2294->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2294->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2296 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2296->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2296->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2296, ((panda$collections$ListView*) types2273));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2294, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2296, ((panda$collections$ListView*) children2267));
            return $tmp2294;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2299 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2299->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2299->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2299, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2298 = $tmp2299;
            org$pandalanguage$pandac$IRNode* $tmp2303 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2298, &$s2302, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2304 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2303);
            initCall2301 = $tmp2304;
            if (((panda$core$Bit) { initCall2301 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2306 = (panda$collections$Array*) malloc(40);
            $tmp2306->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2306->refCount.value = 1;
            panda$collections$Array$init($tmp2306);
            children2305 = $tmp2306;
            panda$collections$Array$add$panda$collections$Array$T(children2305, ((panda$core$Object*) initCall2301));
            org$pandalanguage$pandac$IRNode* $tmp2308 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2308->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2308->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2308, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2305));
            return $tmp2308;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2311 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2310 = $tmp2311;
            if (((panda$core$Bit) { resolved2310 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2312, ((panda$core$Object*) resolved2310->type));
            panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2313, &$s2314);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2310->position, $tmp2315);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2316;
    panda$core$MutableString* typeName2319;
    panda$core$String* separator2323;
    panda$collections$Iterator* p$Iter2325;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2337;
    panda$core$Int64 kind2343;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2317 = (panda$collections$Array*) malloc(40);
    $tmp2317->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2317->refCount.value = 1;
    panda$collections$Array$init($tmp2317);
    subtypes2316 = $tmp2317;
    panda$core$MutableString* $tmp2320 = (panda$core$MutableString*) malloc(40);
    $tmp2320->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2320->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2320, &$s2322);
    typeName2319 = $tmp2320;
    separator2323 = &$s2324;
    {
        ITable* $tmp2326 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2326->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2326 = $tmp2326->next;
        }
        $fn2328 $tmp2327 = $tmp2326->methods[0];
        panda$collections$Iterator* $tmp2329 = $tmp2327(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2325 = $tmp2329;
        $l2330:;
        ITable* $tmp2332 = p$Iter2325->$class->itable;
        while ($tmp2332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2332 = $tmp2332->next;
        }
        $fn2334 $tmp2333 = $tmp2332->methods[0];
        panda$core$Bit $tmp2335 = $tmp2333(p$Iter2325);
        panda$core$Bit $tmp2336 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2335);
        if (!$tmp2336.value) goto $l2331;
        {
            ITable* $tmp2338 = p$Iter2325->$class->itable;
            while ($tmp2338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2338 = $tmp2338->next;
            }
            $fn2340 $tmp2339 = $tmp2338->methods[1];
            panda$core$Object* $tmp2341 = $tmp2339(p$Iter2325);
            p2337 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2341);
            panda$core$MutableString$append$panda$core$String(typeName2319, separator2323);
            panda$core$MutableString$append$panda$core$String(typeName2319, ((org$pandalanguage$pandac$Symbol*) p2337->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2316, ((panda$core$Object*) p2337->type));
            separator2323 = &$s2342;
        }
        goto $l2330;
        $l2331:;
    }
    panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2344.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2319, &$s2345);
        kind2343 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2319, &$s2346);
        kind2343 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2316, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2347 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2348 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2347);
    if ($tmp2348.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2319, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2319, &$s2349);
    org$pandalanguage$pandac$Type* $tmp2350 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2350->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2350->refCount.value = 1;
    panda$core$String* $tmp2352 = panda$core$MutableString$convert$R$panda$core$String(typeName2319);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2350, $tmp2352, kind2343, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2316), ((panda$core$Bit) { true }));
    return $tmp2350;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2353;
    panda$core$MutableString* typeName2356;
    panda$collections$Iterator* p$Iter2360;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2372;
    panda$core$Int64 kind2378;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2354 = (panda$collections$Array*) malloc(40);
    $tmp2354->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2354->refCount.value = 1;
    panda$collections$Array$init($tmp2354);
    subtypes2353 = $tmp2354;
    panda$core$MutableString* $tmp2357 = (panda$core$MutableString*) malloc(40);
    $tmp2357->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2357->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2357, &$s2359);
    typeName2356 = $tmp2357;
    panda$core$MutableString$append$panda$core$String(typeName2356, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2353, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2361 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2361->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2361 = $tmp2361->next;
        }
        $fn2363 $tmp2362 = $tmp2361->methods[0];
        panda$collections$Iterator* $tmp2364 = $tmp2362(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2360 = $tmp2364;
        $l2365:;
        ITable* $tmp2367 = p$Iter2360->$class->itable;
        while ($tmp2367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2367 = $tmp2367->next;
        }
        $fn2369 $tmp2368 = $tmp2367->methods[0];
        panda$core$Bit $tmp2370 = $tmp2368(p$Iter2360);
        panda$core$Bit $tmp2371 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2370);
        if (!$tmp2371.value) goto $l2366;
        {
            ITable* $tmp2373 = p$Iter2360->$class->itable;
            while ($tmp2373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2373 = $tmp2373->next;
            }
            $fn2375 $tmp2374 = $tmp2373->methods[1];
            panda$core$Object* $tmp2376 = $tmp2374(p$Iter2360);
            p2372 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2376);
            panda$core$MutableString$append$panda$core$String(typeName2356, &$s2377);
            panda$core$MutableString$append$panda$core$String(typeName2356, ((org$pandalanguage$pandac$Symbol*) p2372->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2353, ((panda$core$Object*) p2372->type));
        }
        goto $l2365;
        $l2366:;
    }
    panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2379.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2356, &$s2380);
        kind2378 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2356, &$s2381);
        kind2378 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2353, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2382 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2383 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2382);
    if ($tmp2383.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2356, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2356, &$s2384);
    org$pandalanguage$pandac$Type* $tmp2385 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2385->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2385->refCount.value = 1;
    panda$core$String* $tmp2387 = panda$core$MutableString$convert$R$panda$core$String(typeName2356);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2385, $tmp2387, kind2378, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2353), ((panda$core$Bit) { true }));
    return $tmp2385;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2388;
    org$pandalanguage$pandac$MethodDecl* $tmp2389 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2388 = $tmp2389;
    if (((panda$core$Bit) { inherited2388 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2390 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2390;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2391 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2388);
    return $tmp2391;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2392 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2393 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2392);
    return $tmp2393;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2394;
    org$pandalanguage$pandac$MethodDecl* $tmp2395 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2394 = $tmp2395;
    if (((panda$core$Bit) { inherited2394 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2396 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2396;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2397 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2394, p_selfType);
    return $tmp2397;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2398;
        }
        break;
        case 52:
        {
            return &$s2399;
        }
        break;
        case 53:
        {
            return &$s2400;
        }
        break;
        case 54:
        {
            return &$s2401;
        }
        break;
        case 55:
        {
            return &$s2402;
        }
        break;
        case 56:
        {
            return &$s2403;
        }
        break;
        case 57:
        {
            return &$s2404;
        }
        break;
        case 58:
        {
            return &$s2405;
        }
        break;
        case 59:
        {
            return &$s2406;
        }
        break;
        case 63:
        {
            return &$s2407;
        }
        break;
        case 62:
        {
            return &$s2408;
        }
        break;
        case 65:
        {
            return &$s2409;
        }
        break;
        case 64:
        {
            return &$s2410;
        }
        break;
        case 68:
        {
            return &$s2411;
        }
        break;
        case 69:
        {
            return &$s2412;
        }
        break;
        case 66:
        {
            return &$s2413;
        }
        break;
        case 67:
        {
            return &$s2414;
        }
        break;
        case 70:
        {
            return &$s2415;
        }
        break;
        case 71:
        {
            return &$s2416;
        }
        break;
        case 49:
        {
            return &$s2417;
        }
        break;
        case 50:
        {
            return &$s2418;
        }
        break;
        case 72:
        {
            return &$s2419;
        }
        break;
        case 1:
        {
            return &$s2420;
        }
        break;
        case 101:
        {
            return &$s2421;
        }
        break;
        case 73:
        {
            return &$s2422;
        }
        break;
        case 60:
        {
            return &$s2423;
        }
        break;
        case 61:
        {
            return &$s2424;
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
            panda$core$Int64 $tmp2425 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2425, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2426.value);
            panda$core$Bit $tmp2427 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2427.value) {
            {
                panda$core$Object* $tmp2428 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2429 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2428));
                return $tmp2429;
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
            panda$core$Object* $tmp2430 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2431 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2430));
            return $tmp2431;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2457;
    panda$core$Int64 r2459;
    panda$core$Bit $tmp2433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2432 = $tmp2433.value;
    if ($tmp2432) goto $l2434;
    panda$core$Bit $tmp2435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2432 = $tmp2435.value;
    $l2434:;
    panda$core$Bit $tmp2436 = { $tmp2432 };
    PANDA_ASSERT($tmp2436.value);
    panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2437 = $tmp2438.value;
    if ($tmp2437) goto $l2439;
    panda$core$Bit $tmp2440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2437 = $tmp2440.value;
    $l2439:;
    panda$core$Bit $tmp2441 = { $tmp2437 };
    PANDA_ASSERT($tmp2441.value);
    panda$core$Bit $tmp2444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2443 = $tmp2444.value;
    if ($tmp2443) goto $l2445;
    panda$core$UInt64 $tmp2447 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2448 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2447);
    bool $tmp2446 = $tmp2448.value;
    if (!$tmp2446) goto $l2449;
    panda$core$Bit $tmp2450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2446 = $tmp2450.value;
    $l2449:;
    panda$core$Bit $tmp2451 = { $tmp2446 };
    $tmp2443 = $tmp2451.value;
    $l2445:;
    panda$core$Bit $tmp2452 = { $tmp2443 };
    bool $tmp2442 = $tmp2452.value;
    if ($tmp2442) goto $l2453;
    panda$core$UInt64 $tmp2454 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2455 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2454);
    $tmp2442 = $tmp2455.value;
    $l2453:;
    panda$core$Bit $tmp2456 = { $tmp2442 };
    if ($tmp2456.value) {
    {
        panda$core$Int64 $tmp2458 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2457 = $tmp2458;
        panda$core$Int64 $tmp2460 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2459 = $tmp2460;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2461 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2461->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2461->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2463 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2464 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2465 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2464);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2461, ((panda$core$Int64) { 1004 }), p_position, $tmp2463, $tmp2465);
                return $tmp2461;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2466 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2466->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2466->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2468 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2469 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2470 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2469);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2466, ((panda$core$Int64) { 1004 }), p_position, $tmp2468, $tmp2470);
                return $tmp2466;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2471 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2471->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2471->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2473 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2474 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2475 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2474);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2471, ((panda$core$Int64) { 1004 }), p_position, $tmp2473, $tmp2475);
                return $tmp2471;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2476 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2476->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2476->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2478 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2479 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2480 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2479);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2476, ((panda$core$Int64) { 1004 }), p_position, $tmp2478, $tmp2480);
                return $tmp2476;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2481 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2481->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2481->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2483 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2484 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2485 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2484);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2481, ((panda$core$Int64) { 1004 }), p_position, $tmp2483, $tmp2485);
                return $tmp2481;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2486 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2486->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2486->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2488 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2457, r2459);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2486, ((panda$core$Int64) { 1011 }), p_position, $tmp2488, $tmp2489);
                return $tmp2486;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2490 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2490->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2490->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2492 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2493 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2457, r2459);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2490, ((panda$core$Int64) { 1011 }), p_position, $tmp2492, $tmp2493);
                return $tmp2490;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2494 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2494->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2494->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2496 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2497 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2457, r2459);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2494, ((panda$core$Int64) { 1011 }), p_position, $tmp2496, $tmp2497);
                return $tmp2494;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2498 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2498->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2498->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2500 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2501 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2457, r2459);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2498, ((panda$core$Int64) { 1011 }), p_position, $tmp2500, $tmp2501);
                return $tmp2498;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2502 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2502->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2502->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2504 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2505 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2457, r2459);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2502, ((panda$core$Int64) { 1011 }), p_position, $tmp2504, $tmp2505);
                return $tmp2502;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2506 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2506->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2506->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2508 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2509 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2457, r2459);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2506, ((panda$core$Int64) { 1011 }), p_position, $tmp2508, $tmp2509);
                return $tmp2506;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2510 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2510->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2510->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2512 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2513 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2514 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2513);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2510, ((panda$core$Int64) { 1004 }), p_position, $tmp2512, $tmp2514);
                return $tmp2510;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2515 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2515->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2515->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2517 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2518 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2519 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2518);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2515, ((panda$core$Int64) { 1004 }), p_position, $tmp2517, $tmp2519);
                return $tmp2515;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2520 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2520->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2520->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2522 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2523 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2524 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2523);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2520, ((panda$core$Int64) { 1004 }), p_position, $tmp2522, $tmp2524);
                return $tmp2520;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2525 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2525->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2525->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2527 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2528 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2529 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2528);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2525, ((panda$core$Int64) { 1004 }), p_position, $tmp2527, $tmp2529);
                return $tmp2525;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2530 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2530->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2530->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2532 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2533 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2457, r2459);
                panda$core$UInt64 $tmp2534 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2533);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2530, ((panda$core$Int64) { 1004 }), p_position, $tmp2532, $tmp2534);
                return $tmp2530;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2535);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2536.value) {
    {
        panda$core$Object* $tmp2537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2537);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2542;
    org$pandalanguage$pandac$IRNode* resolved2550;
    panda$collections$Array* children2555;
    panda$core$UInt64 baseId2561;
    org$pandalanguage$pandac$IRNode* base2562;
    panda$core$UInt64 indexId2569;
    org$pandalanguage$pandac$IRNode* index2570;
    org$pandalanguage$pandac$IRNode* baseRef2575;
    org$pandalanguage$pandac$IRNode* indexRef2578;
    org$pandalanguage$pandac$IRNode* rhsIndex2581;
    org$pandalanguage$pandac$IRNode* value2583;
    panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2538.value);
    panda$core$Int64 $tmp2539 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2539, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2540.value);
    panda$core$Bit $tmp2541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2541.value) {
    {
        panda$collections$Array* $tmp2543 = (panda$collections$Array*) malloc(40);
        $tmp2543->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2543->refCount.value = 1;
        panda$collections$Array$init($tmp2543);
        args2542 = $tmp2543;
        panda$core$Object* $tmp2545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2542, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2545)));
        panda$collections$Array$add$panda$collections$Array$T(args2542, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2548 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2546), &$s2547, ((panda$collections$ListView*) args2542));
        return $tmp2548;
    }
    }
    panda$core$Bit $tmp2549 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2549.value);
    org$pandalanguage$pandac$IRNode* $tmp2551 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2550 = $tmp2551;
    if (((panda$core$Bit) { resolved2550 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2552 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2550);
    resolved2550 = $tmp2552;
    panda$core$Int64 $tmp2553 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2550->children);
    panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2553, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2554.value);
    panda$collections$Array* $tmp2556 = (panda$collections$Array*) malloc(40);
    $tmp2556->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2556->refCount.value = 1;
    panda$collections$Array$init($tmp2556);
    children2555 = $tmp2556;
    panda$core$Object* $tmp2558 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2550->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2559 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2558));
    panda$collections$Array$add$panda$collections$Array$T(children2555, ((panda$core$Object*) $tmp2559));
    panda$core$UInt64 $tmp2560 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2560;
    baseId2561 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2563 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2563->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2563->refCount.value = 1;
    panda$core$Object* $tmp2565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2555, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2555, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2563, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2565)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2566)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2561)), ((panda$collections$ListView*) children2555));
    base2562 = $tmp2563;
    panda$collections$Array$clear(children2555);
    panda$core$Object* $tmp2567 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2550->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2555, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2567)));
    panda$core$UInt64 $tmp2568 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2568;
    indexId2569 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2571 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2571->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2571->refCount.value = 1;
    panda$core$Object* $tmp2573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2555, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2574 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2555, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2571, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2573)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2574)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2569)), ((panda$collections$ListView*) children2555));
    index2570 = $tmp2571;
    org$pandalanguage$pandac$IRNode* $tmp2576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2576->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2576, ((panda$core$Int64) { 1028 }), base2562->position, base2562->type, baseId2561);
    baseRef2575 = $tmp2576;
    org$pandalanguage$pandac$IRNode* $tmp2579 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2579->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2579->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2579, ((panda$core$Int64) { 1028 }), index2570->position, index2570->type, indexId2569);
    indexRef2578 = $tmp2579;
    org$pandalanguage$pandac$IRNode* $tmp2582 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2575, ((panda$core$Int64) { 101 }), indexRef2578);
    rhsIndex2581 = $tmp2582;
    if (((panda$core$Bit) { rhsIndex2581 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2584 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2585 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2581, $tmp2584, p_right);
    value2583 = $tmp2585;
    if (((panda$core$Bit) { value2583 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2588 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2581->type);
    bool $tmp2587 = $tmp2588.value;
    if (!$tmp2587) goto $l2589;
    panda$core$Bit $tmp2590 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2587 = $tmp2590.value;
    $l2589:;
    panda$core$Bit $tmp2591 = { $tmp2587 };
    bool $tmp2586 = $tmp2591.value;
    if (!$tmp2586) goto $l2592;
    panda$core$Bit $tmp2593 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2581->type, value2583->type);
    $tmp2586 = $tmp2593.value;
    $l2592:;
    panda$core$Bit $tmp2594 = { $tmp2586 };
    if ($tmp2594.value) {
    {
        panda$collections$Array* $tmp2596 = (panda$collections$Array*) malloc(40);
        $tmp2596->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2596->refCount.value = 1;
        panda$collections$Array$init($tmp2596);
        org$pandalanguage$pandac$IRNode* $tmp2598 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2583, &$s2595, ((panda$collections$ListView*) $tmp2596), resolved2550->type);
        value2583 = $tmp2598;
        if (((panda$core$Bit) { value2583 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2555);
    panda$collections$Array$add$panda$collections$Array$T(children2555, ((panda$core$Object*) index2570));
    panda$collections$Array$add$panda$collections$Array$T(children2555, ((panda$core$Object*) value2583));
    org$pandalanguage$pandac$IRNode* $tmp2600 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2562, &$s2599, ((panda$collections$ListView*) children2555));
    return $tmp2600;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2601;
    org$pandalanguage$pandac$IRNode* right2602;
    panda$core$Int64 kind2626;
    org$pandalanguage$pandac$IRNode* resolved2633;
    panda$collections$Array* children2635;
    org$pandalanguage$pandac$IRNode* resolved2642;
    panda$collections$Array* children2644;
    org$pandalanguage$pandac$ClassDecl* cl2656;
    org$pandalanguage$pandac$ClassDecl* cl2673;
    org$pandalanguage$pandac$IRNode* finalLeft2689;
    org$pandalanguage$pandac$IRNode* finalRight2692;
    panda$collections$Array* children2695;
    panda$collections$Array* children2709;
    panda$collections$Array* children2721;
    org$pandalanguage$pandac$IRNode* reusedLeft2727;
    org$pandalanguage$pandac$ClassDecl* cl2744;
    panda$collections$ListView* parameters2746;
    org$pandalanguage$pandac$Symbol* methods2748;
    org$pandalanguage$pandac$Type* type2752;
    panda$collections$Array* types2753;
    org$pandalanguage$pandac$MethodDecl* m2757;
    panda$collections$Iterator* m$Iter2762;
    org$pandalanguage$pandac$MethodDecl* m2774;
    panda$collections$Array* children2785;
    panda$collections$Array* children2814;
    panda$collections$Array* children2830;
    org$pandalanguage$pandac$Type* resultType2853;
    org$pandalanguage$pandac$IRNode* result2857;
    org$pandalanguage$pandac$IRNode* resolved2860;
    org$pandalanguage$pandac$IRNode* target2866;
    left2601 = p_rawLeft;
    right2602 = p_rawRight;
    panda$core$Bit $tmp2603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2601->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2603.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2604 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2602);
        right2602 = $tmp2604;
        if (((panda$core$Bit) { right2602 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2605 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2601, right2602->type);
        if (((panda$core$Bit) { $tmp2605.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2606 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2601, right2602->type);
            left2601 = $tmp2606;
        }
        }
    }
    }
    panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2602->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2607 = $tmp2608.value;
    if (!$tmp2607) goto $l2609;
    panda$core$Int64$nullable $tmp2610 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2602, left2601->type);
    $tmp2607 = ((panda$core$Bit) { $tmp2610.nonnull }).value;
    $l2609:;
    panda$core$Bit $tmp2611 = { $tmp2607 };
    if ($tmp2611.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2612 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2602, left2601->type);
        right2602 = $tmp2612;
    }
    }
    panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2615 = $tmp2616.value;
    if ($tmp2615) goto $l2617;
    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2615 = $tmp2618.value;
    $l2617:;
    panda$core$Bit $tmp2619 = { $tmp2615 };
    bool $tmp2614 = $tmp2619.value;
    if ($tmp2614) goto $l2620;
    panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2614 = $tmp2621.value;
    $l2620:;
    panda$core$Bit $tmp2622 = { $tmp2614 };
    bool $tmp2613 = $tmp2622.value;
    if ($tmp2613) goto $l2623;
    panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2613 = $tmp2624.value;
    $l2623:;
    panda$core$Bit $tmp2625 = { $tmp2613 };
    if ($tmp2625.value) {
    {
        panda$core$Bit $tmp2628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2627 = $tmp2628.value;
        if ($tmp2627) goto $l2629;
        panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2627 = $tmp2630.value;
        $l2629:;
        panda$core$Bit $tmp2631 = { $tmp2627 };
        if ($tmp2631.value) {
        {
            kind2626 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2626 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2601->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2632.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2634 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2602);
            resolved2633 = $tmp2634;
            if (((panda$core$Bit) { resolved2633 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2636 = (panda$collections$Array*) malloc(40);
            $tmp2636->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2636->refCount.value = 1;
            panda$collections$Array$init($tmp2636);
            children2635 = $tmp2636;
            panda$collections$Array$add$panda$collections$Array$T(children2635, ((panda$core$Object*) resolved2633));
            org$pandalanguage$pandac$IRNode* $tmp2638 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2638->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2638->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2640 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2638, kind2626, p_position, $tmp2640, ((panda$collections$ListView*) children2635));
            return $tmp2638;
        }
        }
        panda$core$Bit $tmp2641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2602->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2641.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2643 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2601);
            resolved2642 = $tmp2643;
            if (((panda$core$Bit) { resolved2642 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2645 = (panda$collections$Array*) malloc(40);
            $tmp2645->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2645->refCount.value = 1;
            panda$collections$Array$init($tmp2645);
            children2644 = $tmp2645;
            panda$collections$Array$add$panda$collections$Array$T(children2644, ((panda$core$Object*) resolved2642));
            org$pandalanguage$pandac$IRNode* $tmp2647 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2647->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2647->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2649 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2647, kind2626, p_position, $tmp2649, ((panda$collections$ListView*) children2644));
            return $tmp2647;
        }
        }
    }
    }
    panda$core$Bit $tmp2651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2650 = $tmp2651.value;
    if ($tmp2650) goto $l2652;
    panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2650 = $tmp2653.value;
    $l2652:;
    panda$core$Bit $tmp2654 = { $tmp2650 };
    if ($tmp2654.value) {
    {
        panda$core$Bit $tmp2655 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2601->type);
        if ($tmp2655.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2657 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2601->type);
            cl2656 = $tmp2657;
            if (((panda$core$Bit) { cl2656 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2658 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2656);
            if ($tmp2658.value) {
            {
                panda$core$String* $tmp2660 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2659, $tmp2660);
                panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2661, &$s2662);
                panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2663, ((panda$core$Object*) left2601->type));
                panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
                panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2667, ((panda$core$Object*) right2602->type));
                panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, &$s2669);
                panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, $tmp2670);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2671);
            }
            }
        }
        }
        panda$core$Bit $tmp2672 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2602->type);
        if ($tmp2672.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2674 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2602->type);
            cl2673 = $tmp2674;
            if (((panda$core$Bit) { cl2673 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2675 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2673);
            if ($tmp2675.value) {
            {
                panda$core$String* $tmp2677 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2676, $tmp2677);
                panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2678, &$s2679);
                panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2680, ((panda$core$Object*) left2601->type));
                panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, &$s2682);
                panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2684, ((panda$core$Object*) right2602->type));
                panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
                panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, $tmp2687);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2688);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2690 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2691 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2601, $tmp2690);
        finalLeft2689 = $tmp2691;
        if (((panda$core$Bit) { finalLeft2689 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2693 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2694 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2602, $tmp2693);
        finalRight2692 = $tmp2694;
        if (((panda$core$Bit) { finalRight2692 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2696 = (panda$collections$Array*) malloc(40);
        $tmp2696->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2696->refCount.value = 1;
        panda$collections$Array$init($tmp2696);
        children2695 = $tmp2696;
        panda$collections$Array$add$panda$collections$Array$T(children2695, ((panda$core$Object*) finalLeft2689));
        panda$collections$Array$add$panda$collections$Array$T(children2695, ((panda$core$Object*) finalRight2692));
        org$pandalanguage$pandac$IRNode* $tmp2698 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2698->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2698->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2700 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2698, ((panda$core$Int64) { 1023 }), p_position, $tmp2700, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2695));
        return $tmp2698;
    }
    }
    panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2701.value) {
    {
        panda$core$Bit $tmp2702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2601->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2702.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2703 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2601, p_op, right2602);
            return $tmp2703;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2704 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2601);
        left2601 = $tmp2704;
        if (((panda$core$Bit) { left2601 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2705 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2602, left2601->type);
        right2602 = $tmp2705;
        if (((panda$core$Bit) { right2602 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2706 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2601);
        panda$core$Bit $tmp2707 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2706);
        if ($tmp2707.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2601->position, &$s2708);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2710 = (panda$collections$Array*) malloc(40);
        $tmp2710->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2710->refCount.value = 1;
        panda$collections$Array$init($tmp2710);
        children2709 = $tmp2710;
        panda$collections$Array$add$panda$collections$Array$T(children2709, ((panda$core$Object*) left2601));
        panda$collections$Array$add$panda$collections$Array$T(children2709, ((panda$core$Object*) right2602));
        org$pandalanguage$pandac$IRNode* $tmp2712 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2712->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2712->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2712, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2709));
        return $tmp2712;
    }
    }
    panda$core$Bit $tmp2714 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2714.value) {
    {
        panda$core$Bit $tmp2715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2601->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2715.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2716 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2601, p_op, right2602);
            return $tmp2716;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2717 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2601);
        left2601 = $tmp2717;
        if (((panda$core$Bit) { left2601 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2718 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2601);
        panda$core$Bit $tmp2719 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2718);
        if ($tmp2719.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2601->position, &$s2720);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2722 = (panda$collections$Array*) malloc(40);
        $tmp2722->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2722->refCount.value = 1;
        panda$collections$Array$init($tmp2722);
        children2721 = $tmp2722;
        panda$collections$Array$add$panda$collections$Array$T(children2721, ((panda$core$Object*) left2601));
        panda$core$UInt64 $tmp2724 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2724;
        org$pandalanguage$pandac$IRNode* $tmp2725 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2725->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2725->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2725, ((panda$core$Int64) { 1027 }), left2601->position, left2601->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2721));
        left2601 = $tmp2725;
        org$pandalanguage$pandac$IRNode* $tmp2728 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2728->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2728->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2728, ((panda$core$Int64) { 1028 }), left2601->position, left2601->type, self->reusedValueCount);
        reusedLeft2727 = $tmp2728;
        panda$core$Int64 $tmp2730 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2731 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2727, $tmp2730, right2602);
        right2602 = $tmp2731;
        if (((panda$core$Bit) { right2602 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2733 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2601->type);
        bool $tmp2732 = $tmp2733.value;
        if (!$tmp2732) goto $l2734;
        panda$core$Bit $tmp2735 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2601->type, right2602->type);
        $tmp2732 = $tmp2735.value;
        $l2734:;
        panda$core$Bit $tmp2736 = { $tmp2732 };
        if ($tmp2736.value) {
        {
            panda$collections$Array* $tmp2738 = (panda$collections$Array*) malloc(40);
            $tmp2738->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2738->refCount.value = 1;
            panda$collections$Array$init($tmp2738);
            org$pandalanguage$pandac$IRNode* $tmp2740 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2602, &$s2737, ((panda$collections$ListView*) $tmp2738), left2601->type);
            right2602 = $tmp2740;
            if (((panda$core$Bit) { right2602 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2741 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2601, ((panda$core$Int64) { 73 }), right2602);
        return $tmp2741;
    }
    }
    panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2742.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2743 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2601);
        left2601 = $tmp2743;
        if (((panda$core$Bit) { left2601 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2745 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2601->type);
        cl2744 = $tmp2745;
        if (((panda$core$Bit) { cl2744 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2747 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2601->type);
        parameters2746 = $tmp2747;
        org$pandalanguage$pandac$SymbolTable* $tmp2749 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2744);
        org$pandalanguage$pandac$Symbol* $tmp2751 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2749, &$s2750);
        methods2748 = $tmp2751;
        if (((panda$core$Bit) { methods2748 != NULL }).value) {
        {
            panda$collections$Array* $tmp2754 = (panda$collections$Array*) malloc(40);
            $tmp2754->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2754->refCount.value = 1;
            panda$collections$Array$init($tmp2754);
            types2753 = $tmp2754;
            panda$core$Bit $tmp2756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2748->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2756.value) {
            {
                m2757 = ((org$pandalanguage$pandac$MethodDecl*) methods2748);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2757);
                org$pandalanguage$pandac$MethodRef* $tmp2758 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2758->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2758->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2758, m2757, parameters2746);
                org$pandalanguage$pandac$Type* $tmp2760 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2758);
                panda$collections$Array$add$panda$collections$Array$T(types2753, ((panda$core$Object*) $tmp2760));
            }
            }
            else {
            {
                panda$core$Bit $tmp2761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2748->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2761.value);
                {
                    ITable* $tmp2763 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2748)->methods)->$class->itable;
                    while ($tmp2763->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2763 = $tmp2763->next;
                    }
                    $fn2765 $tmp2764 = $tmp2763->methods[0];
                    panda$collections$Iterator* $tmp2766 = $tmp2764(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2748)->methods));
                    m$Iter2762 = $tmp2766;
                    $l2767:;
                    ITable* $tmp2769 = m$Iter2762->$class->itable;
                    while ($tmp2769->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2769 = $tmp2769->next;
                    }
                    $fn2771 $tmp2770 = $tmp2769->methods[0];
                    panda$core$Bit $tmp2772 = $tmp2770(m$Iter2762);
                    panda$core$Bit $tmp2773 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2772);
                    if (!$tmp2773.value) goto $l2768;
                    {
                        ITable* $tmp2775 = m$Iter2762->$class->itable;
                        while ($tmp2775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2775 = $tmp2775->next;
                        }
                        $fn2777 $tmp2776 = $tmp2775->methods[1];
                        panda$core$Object* $tmp2778 = $tmp2776(m$Iter2762);
                        m2774 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2778);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2774);
                        org$pandalanguage$pandac$MethodRef* $tmp2779 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2779->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2779->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2779, m2774, parameters2746);
                        org$pandalanguage$pandac$Type* $tmp2781 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2779);
                        panda$collections$Array$add$panda$collections$Array$T(types2753, ((panda$core$Object*) $tmp2781));
                    }
                    goto $l2767;
                    $l2768:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2782 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2782->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2782->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2782, ((panda$collections$ListView*) types2753));
            type2752 = $tmp2782;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2784 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2752 = $tmp2784;
        }
        }
        panda$collections$Array* $tmp2786 = (panda$collections$Array*) malloc(40);
        $tmp2786->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2786->refCount.value = 1;
        panda$collections$Array$init($tmp2786);
        children2785 = $tmp2786;
        panda$collections$Array$add$panda$collections$Array$T(children2785, ((panda$core$Object*) left2601));
        panda$collections$Array$add$panda$collections$Array$T(children2785, ((panda$core$Object*) right2602));
        org$pandalanguage$pandac$IRNode* $tmp2788 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2788->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2788->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2788, ((panda$core$Int64) { 1040 }), p_position, type2752, ((panda$collections$ListView*) children2785));
        return $tmp2788;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2790 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2791 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2601->type, $tmp2790);
    if ($tmp2791.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2793 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2794 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2602->type, $tmp2793);
        bool $tmp2792 = $tmp2794.value;
        if (!$tmp2792) goto $l2795;
        panda$core$Bit $tmp2800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2799 = $tmp2800.value;
        if ($tmp2799) goto $l2801;
        panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2799 = $tmp2802.value;
        $l2801:;
        panda$core$Bit $tmp2803 = { $tmp2799 };
        bool $tmp2798 = $tmp2803.value;
        if ($tmp2798) goto $l2804;
        panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2798 = $tmp2805.value;
        $l2804:;
        panda$core$Bit $tmp2806 = { $tmp2798 };
        bool $tmp2797 = $tmp2806.value;
        if ($tmp2797) goto $l2807;
        panda$core$Bit $tmp2808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2797 = $tmp2808.value;
        $l2807:;
        panda$core$Bit $tmp2809 = { $tmp2797 };
        bool $tmp2796 = $tmp2809.value;
        if ($tmp2796) goto $l2810;
        panda$core$Bit $tmp2811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2796 = $tmp2811.value;
        $l2810:;
        panda$core$Bit $tmp2812 = { $tmp2796 };
        $tmp2792 = $tmp2812.value;
        $l2795:;
        panda$core$Bit $tmp2813 = { $tmp2792 };
        if ($tmp2813.value) {
        {
            panda$collections$Array* $tmp2815 = (panda$collections$Array*) malloc(40);
            $tmp2815->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2815->refCount.value = 1;
            panda$collections$Array$init($tmp2815);
            children2814 = $tmp2815;
            panda$collections$Array$add$panda$collections$Array$T(children2814, ((panda$core$Object*) left2601));
            panda$collections$Array$add$panda$collections$Array$T(children2814, ((panda$core$Object*) right2602));
            org$pandalanguage$pandac$IRNode* $tmp2817 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2817->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2817->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2817, ((panda$core$Int64) { 1023 }), p_position, left2601->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2814));
            return $tmp2817;
        }
        }
        panda$core$String* $tmp2820 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2819, $tmp2820);
        panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
        panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2823, ((panda$core$Object*) left2601->type));
        panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
        panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2826, ((panda$core$Object*) right2602->type));
        panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, &$s2828);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2829);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2831 = (panda$collections$Array*) malloc(40);
    $tmp2831->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2831->refCount.value = 1;
    panda$collections$Array$init($tmp2831);
    children2830 = $tmp2831;
    panda$core$Bit $tmp2835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2601->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2834 = $tmp2835.value;
    if ($tmp2834) goto $l2836;
    panda$core$Bit $tmp2837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2601->kind, ((panda$core$Int64) { 1032 }));
    $tmp2834 = $tmp2837.value;
    $l2836:;
    panda$core$Bit $tmp2838 = { $tmp2834 };
    bool $tmp2833 = $tmp2838.value;
    if (!$tmp2833) goto $l2839;
    panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2602->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2840 = $tmp2841.value;
    if ($tmp2840) goto $l2842;
    panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2602->kind, ((panda$core$Int64) { 1032 }));
    $tmp2840 = $tmp2843.value;
    $l2842:;
    panda$core$Bit $tmp2844 = { $tmp2840 };
    $tmp2833 = $tmp2844.value;
    $l2839:;
    panda$core$Bit $tmp2845 = { $tmp2833 };
    if ($tmp2845.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2846 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2601, p_op, right2602);
        return $tmp2846;
    }
    }
    panda$core$Bit $tmp2848 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2601->type);
    bool $tmp2847 = $tmp2848.value;
    if (!$tmp2847) goto $l2849;
    panda$core$Int64$nullable $tmp2850 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2602, left2601->type);
    $tmp2847 = ((panda$core$Bit) { $tmp2850.nonnull }).value;
    $l2849:;
    panda$core$Bit $tmp2851 = { $tmp2847 };
    if ($tmp2851.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2852 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2602, left2601->type);
        right2602 = $tmp2852;
        PANDA_ASSERT(((panda$core$Bit) { right2602 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2830, ((panda$core$Object*) left2601));
        panda$collections$Array$add$panda$collections$Array$T(children2830, ((panda$core$Object*) right2602));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2854 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2853 = $tmp2854;
            }
            break;
            default:
            {
                resultType2853 = left2601->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2855 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2855->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2855->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2855, ((panda$core$Int64) { 1023 }), p_position, resultType2853, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2830));
        return $tmp2855;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2830, ((panda$core$Object*) right2602));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2858 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2859 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2601, $tmp2858, ((panda$collections$ListView*) children2830));
    result2857 = $tmp2859;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2857 == NULL }).value) {
    {
        panda$collections$Array$clear(children2830);
        panda$collections$Array$add$panda$collections$Array$T(children2830, ((panda$core$Object*) left2601));
        org$pandalanguage$pandac$IRNode* $tmp2861 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2602);
        resolved2860 = $tmp2861;
        bool $tmp2862 = ((panda$core$Bit) { resolved2860 != NULL }).value;
        if (!$tmp2862) goto $l2863;
        panda$core$Bit $tmp2864 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2860->type);
        $tmp2862 = $tmp2864.value;
        $l2863:;
        panda$core$Bit $tmp2865 = { $tmp2862 };
        if ($tmp2865.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2830, ((panda$core$Object*) resolved2860));
            org$pandalanguage$pandac$IRNode* $tmp2867 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2867->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2867->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2869 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2867, ((panda$core$Int64) { 1001 }), resolved2860->position, $tmp2869, resolved2860->type);
            target2866 = $tmp2867;
            panda$core$String* $tmp2870 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2871 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2866, $tmp2870, ((panda$collections$ListView*) children2830));
            result2857 = $tmp2871;
        }
        }
    }
    }
    return result2857;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2872;
    org$pandalanguage$pandac$IRNode* right2875;
    panda$core$Object* $tmp2873 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2874 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2873));
    left2872 = $tmp2874;
    if (((panda$core$Bit) { left2872 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2876 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2877 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2876));
    right2875 = $tmp2877;
    if (((panda$core$Bit) { right2875 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2878 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2872, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2875);
    return $tmp2878;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2882;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2879 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2879;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2880 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2881 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2880, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2881.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2882, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2883 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2882);
            return ((panda$collections$ListView*) $tmp2883);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2884 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2885 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2884));
            return $tmp2885;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2886 = (panda$collections$Array*) malloc(40);
            $tmp2886->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2886->refCount.value = 1;
            panda$collections$Array$init($tmp2886);
            return ((panda$collections$ListView*) $tmp2886);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2888.value) {
        {
            panda$collections$ListView* $tmp2889 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2889;
        }
        }
        panda$collections$ListView* $tmp2890 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2890;
    }
    }
    panda$collections$Array* $tmp2891 = (panda$collections$Array*) malloc(40);
    $tmp2891->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2891->refCount.value = 1;
    panda$collections$Array$init($tmp2891);
    return ((panda$collections$ListView*) $tmp2891);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2894;
    org$pandalanguage$pandac$ClassDecl* cl2896;
    org$pandalanguage$pandac$Symbol* s2898;
    org$pandalanguage$pandac$MethodDecl* m2901;
    panda$collections$Iterator* test$Iter2906;
    org$pandalanguage$pandac$MethodDecl* test2918;
    org$pandalanguage$pandac$MethodRef* ref2930;
    panda$collections$Array* children2934;
    org$pandalanguage$pandac$IRNode* methodRef2937;
    org$pandalanguage$pandac$Position $tmp2943;
    panda$collections$Array* args2944;
    panda$collections$Array* children2953;
    panda$collections$Array* children2963;
    org$pandalanguage$pandac$IRNode* coerced2972;
    panda$collections$Array* children2975;
    panda$core$Bit $tmp2893 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2893.value) {
    {
        panda$core$String* $tmp2895 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2894 = $tmp2895;
        org$pandalanguage$pandac$ClassDecl* $tmp2897 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2896 = $tmp2897;
        if (((panda$core$Bit) { cl2896 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2899 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2896);
        org$pandalanguage$pandac$Symbol* $tmp2900 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2899, name2894);
        s2898 = $tmp2900;
        if (((panda$core$Bit) { s2898 != NULL }).value) {
        {
            m2901 = NULL;
            switch (s2898->kind.value) {
                case 204:
                {
                    m2901 = ((org$pandalanguage$pandac$MethodDecl*) s2898);
                    panda$core$Int64 $tmp2902 = panda$collections$Array$get_count$R$panda$core$Int64(m2901->parameters);
                    panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2902, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2903.value);
                    panda$core$Bit $tmp2904 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2901->annotations);
                    panda$core$Bit $tmp2905 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2904);
                    PANDA_ASSERT($tmp2905.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2907 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2898)->methods)->$class->itable;
                        while ($tmp2907->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2907 = $tmp2907->next;
                        }
                        $fn2909 $tmp2908 = $tmp2907->methods[0];
                        panda$collections$Iterator* $tmp2910 = $tmp2908(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2898)->methods));
                        test$Iter2906 = $tmp2910;
                        $l2911:;
                        ITable* $tmp2913 = test$Iter2906->$class->itable;
                        while ($tmp2913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2913 = $tmp2913->next;
                        }
                        $fn2915 $tmp2914 = $tmp2913->methods[0];
                        panda$core$Bit $tmp2916 = $tmp2914(test$Iter2906);
                        panda$core$Bit $tmp2917 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2916);
                        if (!$tmp2917.value) goto $l2912;
                        {
                            ITable* $tmp2919 = test$Iter2906->$class->itable;
                            while ($tmp2919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2919 = $tmp2919->next;
                            }
                            $fn2921 $tmp2920 = $tmp2919->methods[1];
                            panda$core$Object* $tmp2922 = $tmp2920(test$Iter2906);
                            test2918 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2922);
                            panda$core$Bit $tmp2924 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2918->annotations);
                            panda$core$Bit $tmp2925 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2924);
                            bool $tmp2923 = $tmp2925.value;
                            if (!$tmp2923) goto $l2926;
                            panda$core$Int64 $tmp2927 = panda$collections$Array$get_count$R$panda$core$Int64(test2918->parameters);
                            panda$core$Bit $tmp2928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2927, ((panda$core$Int64) { 0 }));
                            $tmp2923 = $tmp2928.value;
                            $l2926:;
                            panda$core$Bit $tmp2929 = { $tmp2923 };
                            if ($tmp2929.value) {
                            {
                                m2901 = test2918;
                                goto $l2912;
                            }
                            }
                        }
                        goto $l2911;
                        $l2912:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2901 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2901);
                org$pandalanguage$pandac$MethodRef* $tmp2931 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2931->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2931->refCount.value = 1;
                panda$collections$ListView* $tmp2933 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2931, m2901, $tmp2933);
                ref2930 = $tmp2931;
                panda$collections$Array* $tmp2935 = (panda$collections$Array*) malloc(40);
                $tmp2935->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2935->refCount.value = 1;
                panda$collections$Array$init($tmp2935);
                children2934 = $tmp2935;
                panda$collections$Array$add$panda$collections$Array$T(children2934, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2938 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2938->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2938->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2940 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2940->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2940->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2943);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2940, &$s2942, ((panda$core$Int64) { 16 }), $tmp2943, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2938, ((panda$core$Int64) { 1002 }), p_position, $tmp2940, ((panda$core$Object*) ref2930), ((panda$collections$ListView*) children2934));
                methodRef2937 = $tmp2938;
                panda$collections$Array* $tmp2945 = (panda$collections$Array*) malloc(40);
                $tmp2945->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2945->refCount.value = 1;
                panda$collections$Array$init($tmp2945);
                args2944 = $tmp2945;
                org$pandalanguage$pandac$IRNode* $tmp2947 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2937, ((panda$collections$ListView*) args2944));
                return $tmp2947;
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
                    org$pandalanguage$pandac$IRNode* $tmp2948 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2948->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2948->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2948, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2948;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2950 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2950->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2950->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2950, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2950;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2952 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2952.value) {
                    {
                        panda$collections$Array* $tmp2954 = (panda$collections$Array*) malloc(40);
                        $tmp2954->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2954->refCount.value = 1;
                        panda$collections$Array$init($tmp2954);
                        children2953 = $tmp2954;
                        panda$collections$Array$add$panda$collections$Array$T(children2953, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2956 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2956->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2956->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2956, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2953));
                        return $tmp2956;
                    }
                    }
                }
            }
            panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2958, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2961);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2962 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2962.value) {
            {
                panda$collections$Array* $tmp2964 = (panda$collections$Array*) malloc(40);
                $tmp2964->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2964->refCount.value = 1;
                panda$collections$Array$init($tmp2964);
                children2963 = $tmp2964;
                panda$collections$Array$add$panda$collections$Array$T(children2963, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2966 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2966->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2966->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2966, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2963));
                return $tmp2966;
            }
            }
            else {
            {
                panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2968, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, &$s2970);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2971);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2973 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2974 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2973);
            coerced2972 = $tmp2974;
            if (((panda$core$Bit) { coerced2972 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2976 = (panda$collections$Array*) malloc(40);
            $tmp2976->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2976->refCount.value = 1;
            panda$collections$Array$init($tmp2976);
            children2975 = $tmp2976;
            panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) coerced2972));
            org$pandalanguage$pandac$IRNode* $tmp2978 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2978->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2978->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2978, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2975));
            return $tmp2978;
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
    org$pandalanguage$pandac$IRNode* base2983;
    panda$core$Bit $tmp2980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2980.value);
    panda$core$Int64 $tmp2981 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2981, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2982.value);
    panda$core$Object* $tmp2984 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2985 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2984));
    base2983 = $tmp2985;
    if (((panda$core$Bit) { base2983 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2986 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2983, p_p->position);
    return $tmp2986;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2988;
    panda$collections$Array* args2991;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2994;
    org$pandalanguage$pandac$IRNode* arg3013;
    panda$core$Bit $tmp2987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2987.value);
    panda$core$Object* $tmp2989 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2990 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2989));
    m2988 = $tmp2990;
    if (((panda$core$Bit) { m2988 != NULL }).value) {
    {
        panda$collections$Array* $tmp2992 = (panda$collections$Array*) malloc(40);
        $tmp2992->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2992->refCount.value = 1;
        panda$collections$Array$init($tmp2992);
        args2991 = $tmp2992;
        panda$core$Int64 $tmp2995 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2994, ((panda$core$Int64) { 1 }), $tmp2995, ((panda$core$Bit) { false }));
        int64_t $tmp2997 = $tmp2994.min.value;
        panda$core$Int64 i2996 = { $tmp2997 };
        int64_t $tmp2999 = $tmp2994.max.value;
        bool $tmp3000 = $tmp2994.inclusive.value;
        bool $tmp3007 = 1 > 0;
        if ($tmp3007) goto $l3005; else goto $l3006;
        $l3005:;
        if ($tmp3000) goto $l3008; else goto $l3009;
        $l3008:;
        if ($tmp2997 <= $tmp2999) goto $l3001; else goto $l3003;
        $l3009:;
        if ($tmp2997 < $tmp2999) goto $l3001; else goto $l3003;
        $l3006:;
        if ($tmp3000) goto $l3010; else goto $l3011;
        $l3010:;
        if ($tmp2997 >= $tmp2999) goto $l3001; else goto $l3003;
        $l3011:;
        if ($tmp2997 > $tmp2999) goto $l3001; else goto $l3003;
        $l3001:;
        {
            panda$core$Object* $tmp3014 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2996);
            org$pandalanguage$pandac$IRNode* $tmp3015 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3014));
            arg3013 = $tmp3015;
            if (((panda$core$Bit) { arg3013 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2991, ((panda$core$Object*) arg3013));
        }
        $l3004:;
        if ($tmp3007) goto $l3017; else goto $l3018;
        $l3017:;
        int64_t $tmp3019 = $tmp2999 - i2996.value;
        if ($tmp3000) goto $l3020; else goto $l3021;
        $l3020:;
        if ($tmp3019 >= 1) goto $l3016; else goto $l3003;
        $l3021:;
        if ($tmp3019 > 1) goto $l3016; else goto $l3003;
        $l3018:;
        int64_t $tmp3023 = i2996.value - $tmp2999;
        if ($tmp3000) goto $l3024; else goto $l3025;
        $l3024:;
        if ($tmp3023 >= -1) goto $l3016; else goto $l3003;
        $l3025:;
        if ($tmp3023 > -1) goto $l3016; else goto $l3003;
        $l3016:;
        i2996.value += 1;
        goto $l3001;
        $l3003:;
        org$pandalanguage$pandac$IRNode* $tmp3027 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2988, ((panda$collections$ListView*) args2991));
        return $tmp3027;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3031;
    org$pandalanguage$pandac$ClassDecl* cl3040;
    panda$core$String* name3042;
    org$pandalanguage$pandac$ClassDecl* cl3050;
    org$pandalanguage$pandac$Symbol* s3063;
    panda$core$Bit $tmp3028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3028.value);
    panda$core$Int64 $tmp3029 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3029, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3030.value);
    panda$core$Object* $tmp3032 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3033 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3032));
    base3031 = $tmp3033;
    if (((panda$core$Bit) { base3031 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3035 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3031->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3034 = $tmp3035.value;
    if (!$tmp3034) goto $l3036;
    panda$core$Bit $tmp3037 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3031->kind, ((panda$core$Int64) { 1024 }));
    $tmp3034 = $tmp3037.value;
    $l3036:;
    panda$core$Bit $tmp3038 = { $tmp3034 };
    if ($tmp3038.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3039 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3031);
        base3031 = $tmp3039;
    }
    }
    if (((panda$core$Bit) { base3031 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base3031->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3041 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base3031->payload));
            cl3040 = $tmp3041;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3043, base3031->payload);
            panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
            panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3046, p_d->payload);
            panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
            name3042 = $tmp3049;
            org$pandalanguage$pandac$ClassDecl* $tmp3051 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3042);
            cl3050 = $tmp3051;
            if (((panda$core$Bit) { cl3050 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3052 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3052->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3054 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3055 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3050);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3052, ((panda$core$Int64) { 1001 }), p_d->position, $tmp3054, $tmp3055);
                return $tmp3052;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3056 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3056->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3056->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3058 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3056, ((panda$core$Int64) { 1037 }), p_d->position, $tmp3058, name3042);
            return $tmp3056;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3059 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3059));
            panda$core$Object* $tmp3060 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3061 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3060)->rawSuper);
            cl3040 = $tmp3061;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3062 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base3031->type);
            cl3040 = $tmp3062;
        }
    }
    if (((panda$core$Bit) { cl3040 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3064 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3040);
    org$pandalanguage$pandac$Symbol* $tmp3065 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3064, ((panda$core$String*) p_d->payload));
    s3063 = $tmp3065;
    if (((panda$core$Bit) { s3063 == NULL }).value) {
    {
        panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3066, ((panda$core$Object*) base3031->type));
        panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
        panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3070, p_d->payload);
        panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, &$s3072);
        panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, $tmp3073);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp3074);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3075 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3040);
    org$pandalanguage$pandac$IRNode* $tmp3076 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3031, s3063, $tmp3075);
    return $tmp3076;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3078;
    panda$core$Bit $tmp3077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3077.value);
    org$pandalanguage$pandac$Symbol* $tmp3079 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3078 = $tmp3079;
    if (((panda$core$Bit) { s3078 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3080 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3078 = ((org$pandalanguage$pandac$Symbol*) $tmp3080);
    }
    }
    if (((panda$core$Bit) { s3078 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3081 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3078, self->symbolTable);
        return $tmp3081;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3082 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3082->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3082->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3084 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3082, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3084, ((panda$core$String*) p_i->payload));
    return $tmp3082;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3085;
    org$pandalanguage$pandac$Type* $tmp3086 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3087 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3086);
    resolved3085 = $tmp3087;
    if (((panda$core$Bit) { resolved3085 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3088 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3088->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3088->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3090 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3088, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3090, resolved3085);
    return $tmp3088;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3098;
    org$pandalanguage$pandac$IRNode* end3106;
    org$pandalanguage$pandac$IRNode* step3114;
    panda$collections$Array* children3121;
    org$pandalanguage$pandac$Position $tmp3129;
    panda$core$Bit $tmp3092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3091 = $tmp3092.value;
    if ($tmp3091) goto $l3093;
    panda$core$Bit $tmp3094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3091 = $tmp3094.value;
    $l3093:;
    panda$core$Bit $tmp3095 = { $tmp3091 };
    PANDA_ASSERT($tmp3095.value);
    panda$core$Int64 $tmp3096 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3096, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3097.value);
    panda$core$Object* $tmp3099 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3099)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3100.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3101 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3101->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3101->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3103 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3101, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3103);
        start3098 = $tmp3101;
    }
    }
    else {
    {
        panda$core$Object* $tmp3104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3105 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3104));
        start3098 = $tmp3105;
        if (((panda$core$Bit) { start3098 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3107 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3107)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3108.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3109 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3109->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3109->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3111 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3109, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3111);
        end3106 = $tmp3109;
    }
    }
    else {
    {
        panda$core$Object* $tmp3112 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3113 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3112));
        end3106 = $tmp3113;
        if (((panda$core$Bit) { end3106 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3115 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3115)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3116.value) {
    {
        step3114 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3117 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3118 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3117));
        org$pandalanguage$pandac$Type* $tmp3119 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3120 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3118, $tmp3119);
        step3114 = $tmp3120;
        if (((panda$core$Bit) { step3114 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3122 = (panda$collections$Array*) malloc(40);
    $tmp3122->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3122->refCount.value = 1;
    panda$collections$Array$init($tmp3122);
    children3121 = $tmp3122;
    panda$collections$Array$add$panda$collections$Array$T(children3121, ((panda$core$Object*) start3098));
    panda$collections$Array$add$panda$collections$Array$T(children3121, ((panda$core$Object*) end3106));
    if (((panda$core$Bit) { step3114 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3121, ((panda$core$Object*) step3114));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3124 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3124->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3124->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3126 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3126->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3126->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3129);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3126, &$s3128, ((panda$core$Int64) { 17 }), $tmp3129, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3124, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3126, ((panda$core$Object*) wrap_panda$core$Bit($tmp3130)), ((panda$collections$ListView*) children3121));
    return $tmp3124;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3131 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3131->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3131->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3133 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3131, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3133, ((panda$core$String*) p_s->payload));
    return $tmp3131;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3138;
    org$pandalanguage$pandac$ClassDecl* cl3139;
    panda$collections$Array* subtypes3146;
    panda$core$MutableString* name3150;
    panda$core$String* separator3154;
    panda$collections$Iterator* p$Iter3156;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3168;
    panda$collections$Array* pType3173;
    panda$core$String* pName3176;
    panda$core$Bit $tmp3134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3134.value);
    panda$core$Object* $tmp3135 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3136 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3135)->annotations);
    if ($tmp3136.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3137);
        return NULL;
    }
    }
    panda$core$Object* $tmp3140 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3139 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3140);
    ITable* $tmp3141 = ((panda$collections$CollectionView*) cl3139->parameters)->$class->itable;
    while ($tmp3141->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3141 = $tmp3141->next;
    }
    $fn3143 $tmp3142 = $tmp3141->methods[0];
    panda$core$Int64 $tmp3144 = $tmp3142(((panda$collections$CollectionView*) cl3139->parameters));
    panda$core$Bit $tmp3145 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3144, ((panda$core$Int64) { 0 }));
    if ($tmp3145.value) {
    {
        panda$collections$Array* $tmp3147 = (panda$collections$Array*) malloc(40);
        $tmp3147->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3147->refCount.value = 1;
        panda$collections$Array$init($tmp3147);
        subtypes3146 = $tmp3147;
        org$pandalanguage$pandac$Type* $tmp3149 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3139);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3146, ((panda$core$Object*) $tmp3149));
        panda$core$MutableString* $tmp3151 = (panda$core$MutableString*) malloc(40);
        $tmp3151->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3151->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3151, ((org$pandalanguage$pandac$Symbol*) cl3139)->name);
        name3150 = $tmp3151;
        panda$core$MutableString$append$panda$core$String(name3150, &$s3153);
        separator3154 = &$s3155;
        {
            ITable* $tmp3157 = ((panda$collections$Iterable*) cl3139->parameters)->$class->itable;
            while ($tmp3157->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3157 = $tmp3157->next;
            }
            $fn3159 $tmp3158 = $tmp3157->methods[0];
            panda$collections$Iterator* $tmp3160 = $tmp3158(((panda$collections$Iterable*) cl3139->parameters));
            p$Iter3156 = $tmp3160;
            $l3161:;
            ITable* $tmp3163 = p$Iter3156->$class->itable;
            while ($tmp3163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3163 = $tmp3163->next;
            }
            $fn3165 $tmp3164 = $tmp3163->methods[0];
            panda$core$Bit $tmp3166 = $tmp3164(p$Iter3156);
            panda$core$Bit $tmp3167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3166);
            if (!$tmp3167.value) goto $l3162;
            {
                ITable* $tmp3169 = p$Iter3156->$class->itable;
                while ($tmp3169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3169 = $tmp3169->next;
                }
                $fn3171 $tmp3170 = $tmp3169->methods[1];
                panda$core$Object* $tmp3172 = $tmp3170(p$Iter3156);
                p3168 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3172);
                panda$collections$Array* $tmp3174 = (panda$collections$Array*) malloc(40);
                $tmp3174->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3174->refCount.value = 1;
                panda$collections$Array$init($tmp3174);
                pType3173 = $tmp3174;
                panda$collections$Array$add$panda$collections$Array$T(pType3173, ((panda$core$Object*) p3168->bound));
                panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3177, ((org$pandalanguage$pandac$Symbol*) cl3139)->name);
                panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, &$s3179);
                panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, ((org$pandalanguage$pandac$Symbol*) p3168)->name);
                panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, &$s3182);
                pName3176 = $tmp3183;
                panda$core$MutableString$append$panda$core$String(name3150, separator3154);
                panda$core$MutableString$append$panda$core$String(name3150, pName3176);
                org$pandalanguage$pandac$Type* $tmp3184 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3184->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3184->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3184, p3168);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3146, ((panda$core$Object*) $tmp3184));
                separator3154 = &$s3186;
            }
            goto $l3161;
            $l3162:;
        }
        panda$core$MutableString$append$panda$core$String(name3150, &$s3187);
        org$pandalanguage$pandac$Type* $tmp3188 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3188->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3188->refCount.value = 1;
        panda$core$String* $tmp3190 = panda$core$MutableString$convert$R$panda$core$String(name3150);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3188, $tmp3190, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3146), ((panda$core$Bit) { true }));
        type3138 = $tmp3188;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3191 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3139);
        type3138 = $tmp3191;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3192 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3192->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3192->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3192, ((panda$core$Int64) { 1025 }), p_s->position, type3138);
    return $tmp3192;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3198;
    panda$core$Bit $tmp3194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3194.value);
    panda$core$Object* $tmp3195 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3196 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3195)->annotations);
    if ($tmp3196.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3197);
        return NULL;
    }
    }
    panda$core$Object* $tmp3199 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3198 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3199);
    PANDA_ASSERT(cl3198->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3200 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3200->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3200->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3200, ((panda$core$Int64) { 1024 }), p_s->position, cl3198->rawSuper);
    return $tmp3200;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3205;
    org$pandalanguage$pandac$Type* type3208;
    panda$core$Bit $tmp3202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3202.value);
    panda$core$Int64 $tmp3203 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3203, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3204.value);
    panda$core$Object* $tmp3206 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3207 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3206));
    value3205 = $tmp3207;
    if (((panda$core$Bit) { value3205 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3210 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3209));
    org$pandalanguage$pandac$Type* $tmp3211 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3210);
    type3208 = $tmp3211;
    if (((panda$core$Bit) { type3208 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3212 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3205, type3208);
    if (((panda$core$Bit) { $tmp3212.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3213 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3205, type3208);
        return $tmp3213;
    }
    }
    panda$core$Bit $tmp3214 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3205, type3208);
    if ($tmp3214.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3215 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3205, p_c->position, ((panda$core$Bit) { true }), type3208);
        return $tmp3215;
    }
    }
    else {
    {
        panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3216, ((panda$core$Object*) value3205->type));
        panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3217, &$s3218);
        panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3220, ((panda$core$Object*) type3208));
        panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, &$s3222);
        panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, $tmp3223);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3224);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3225.value);
    org$pandalanguage$pandac$IRNode* $tmp3226 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3226->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3226->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3228 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3226, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3228);
    return $tmp3226;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3233;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3229 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3229;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3230 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3230->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3230->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3232 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3230, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3232, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3230;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3234 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3233 = $tmp3234;
            bool $tmp3235 = ((panda$core$Bit) { result3233 != NULL }).value;
            if (!$tmp3235) goto $l3236;
            org$pandalanguage$pandac$Type* $tmp3237 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3238 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3233->type, $tmp3237);
            $tmp3235 = $tmp3238.value;
            $l3236:;
            panda$core$Bit $tmp3239 = { $tmp3235 };
            if ($tmp3239.value) {
            {
                panda$core$Bit $tmp3240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3233->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3240.value);
                panda$core$String* $tmp3241 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3233->payload)->value);
                panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3233->position, $tmp3243);
                return NULL;
            }
            }
            return result3233;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3244 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3244;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3245 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3245;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3246 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3246->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3246->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3248 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3246, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3248, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3246;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3249 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3249;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3250 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3250;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3251 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3251;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3252 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3252;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3253 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3253;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3254 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3254;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3255 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3255;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3256 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3256;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3258;
    panda$collections$Array* result3261;
    panda$collections$Iterator* stmt$Iter3264;
    org$pandalanguage$pandac$ASTNode* stmt3276;
    org$pandalanguage$pandac$IRNode* compiled3281;
    panda$core$Bit $tmp3257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3257.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3259 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3259->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3259->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3259, self->symbolTable);
    symbols3258 = $tmp3259;
    self->symbolTable = symbols3258;
    panda$collections$Array* $tmp3262 = (panda$collections$Array*) malloc(40);
    $tmp3262->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3262->refCount.value = 1;
    panda$collections$Array$init($tmp3262);
    result3261 = $tmp3262;
    {
        ITable* $tmp3265 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3265->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3265 = $tmp3265->next;
        }
        $fn3267 $tmp3266 = $tmp3265->methods[0];
        panda$collections$Iterator* $tmp3268 = $tmp3266(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3264 = $tmp3268;
        $l3269:;
        ITable* $tmp3271 = stmt$Iter3264->$class->itable;
        while ($tmp3271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3271 = $tmp3271->next;
        }
        $fn3273 $tmp3272 = $tmp3271->methods[0];
        panda$core$Bit $tmp3274 = $tmp3272(stmt$Iter3264);
        panda$core$Bit $tmp3275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3274);
        if (!$tmp3275.value) goto $l3270;
        {
            ITable* $tmp3277 = stmt$Iter3264->$class->itable;
            while ($tmp3277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3277 = $tmp3277->next;
            }
            $fn3279 $tmp3278 = $tmp3277->methods[1];
            panda$core$Object* $tmp3280 = $tmp3278(stmt$Iter3264);
            stmt3276 = ((org$pandalanguage$pandac$ASTNode*) $tmp3280);
            org$pandalanguage$pandac$IRNode* $tmp3282 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3276);
            compiled3281 = $tmp3282;
            if (((panda$core$Bit) { compiled3281 == NULL }).value) {
            {
                panda$core$Object* $tmp3283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3258->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3283);
                return NULL;
            }
            }
            panda$core$Bit $tmp3284 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3281->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3284.value);
            panda$collections$Array$add$panda$collections$Array$T(result3261, ((panda$core$Object*) compiled3281));
        }
        goto $l3269;
        $l3270:;
    }
    panda$core$Object* $tmp3285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3258->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3285);
    org$pandalanguage$pandac$IRNode* $tmp3286 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3286->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3286->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3286, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3261));
    return $tmp3286;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3296;
    org$pandalanguage$pandac$IRNode* ifTrue3301;
    panda$collections$Array* children3304;
    org$pandalanguage$pandac$IRNode* ifFalse3309;
    panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3288.value);
    panda$core$Int64 $tmp3290 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3290, ((panda$core$Int64) { 2 }));
    bool $tmp3289 = $tmp3291.value;
    if ($tmp3289) goto $l3292;
    panda$core$Int64 $tmp3293 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3293, ((panda$core$Int64) { 3 }));
    $tmp3289 = $tmp3294.value;
    $l3292:;
    panda$core$Bit $tmp3295 = { $tmp3289 };
    PANDA_ASSERT($tmp3295.value);
    panda$core$Object* $tmp3297 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3298 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3297));
    org$pandalanguage$pandac$Type* $tmp3299 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3300 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3298, $tmp3299);
    test3296 = $tmp3300;
    if (((panda$core$Bit) { test3296 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3303 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3302));
    ifTrue3301 = $tmp3303;
    if (((panda$core$Bit) { ifTrue3301 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3305 = (panda$collections$Array*) malloc(40);
    $tmp3305->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3305->refCount.value = 1;
    panda$collections$Array$init($tmp3305);
    children3304 = $tmp3305;
    panda$collections$Array$add$panda$collections$Array$T(children3304, ((panda$core$Object*) test3296));
    panda$collections$Array$add$panda$collections$Array$T(children3304, ((panda$core$Object*) ifTrue3301));
    panda$core$Int64 $tmp3307 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3307, ((panda$core$Int64) { 3 }));
    if ($tmp3308.value) {
    {
        panda$core$Object* $tmp3310 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3311 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3310));
        ifFalse3309 = $tmp3311;
        if (((panda$core$Bit) { ifFalse3309 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3304, ((panda$core$Object*) ifFalse3309));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3312 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3312->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3312->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3312, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3304));
    return $tmp3312;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3314;
    org$pandalanguage$pandac$IRNode* list3315;
    org$pandalanguage$pandac$Type* t3322;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3355;
    org$pandalanguage$pandac$IRNode* body3357;
    panda$collections$Array* children3359;
    panda$core$Bit $tmp3317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3316 = $tmp3317.value;
    if (!$tmp3316) goto $l3318;
    panda$core$Int64 $tmp3319 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3319, ((panda$core$Int64) { 1 }));
    $tmp3316 = $tmp3320.value;
    $l3318:;
    panda$core$Bit $tmp3321 = { $tmp3316 };
    if ($tmp3321.value) {
    {
        panda$core$Object* $tmp3323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3324 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3323));
        org$pandalanguage$pandac$Type* $tmp3325 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3324);
        t3322 = $tmp3325;
        panda$core$Bit $tmp3326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3326.value) {
        {
            panda$core$Int64 $tmp3327 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3327, ((panda$core$Int64) { 2 }));
            if ($tmp3328.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3329 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3322);
                org$pandalanguage$pandac$IRNode* $tmp3330 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3329);
                list3315 = $tmp3330;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3331 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3331, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3332.value);
                org$pandalanguage$pandac$Type* $tmp3333 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3334 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3322, $tmp3333);
                org$pandalanguage$pandac$IRNode* $tmp3335 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3334);
                list3315 = $tmp3335;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3336 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3336.value) {
        {
            panda$core$Object* $tmp3337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3338 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3322, ((org$pandalanguage$pandac$Type*) $tmp3337));
            org$pandalanguage$pandac$IRNode* $tmp3339 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3338);
            list3315 = $tmp3339;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3340 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3322);
        panda$core$Int64$nullable $tmp3341 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3340);
        if (((panda$core$Bit) { $tmp3341.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3342 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3322);
            org$pandalanguage$pandac$IRNode* $tmp3343 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3342);
            list3315 = $tmp3343;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3344 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3345 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3322, $tmp3344);
            org$pandalanguage$pandac$IRNode* $tmp3346 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3345);
            list3315 = $tmp3346;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3347 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3315 = $tmp3347;
    }
    }
    if (((panda$core$Bit) { list3315 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3315->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3348.value) {
    {
        panda$core$Object* $tmp3349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3315->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3349)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3350.value);
        panda$core$Object* $tmp3351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3315->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3351)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3314 = ((org$pandalanguage$pandac$Type*) $tmp3352);
    }
    }
    else {
    {
        panda$core$Bit $tmp3353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3315->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3353.value);
        panda$core$Object* $tmp3354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3315->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3314 = ((org$pandalanguage$pandac$Type*) $tmp3354);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3356 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3314);
    target3355 = $tmp3356;
    if (((panda$core$Bit) { target3355 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3355->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3358 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3357 = $tmp3358;
    if (((panda$core$Bit) { body3357 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3360 = (panda$collections$Array*) malloc(40);
    $tmp3360->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3360->refCount.value = 1;
    panda$collections$Array$init($tmp3360);
    children3359 = $tmp3360;
    panda$collections$Array$add$panda$collections$Array$T(children3359, ((panda$core$Object*) target3355->target));
    panda$collections$Array$add$panda$collections$Array$T(children3359, ((panda$core$Object*) list3315));
    panda$collections$Array$add$panda$collections$Array$T(children3359, ((panda$core$Object*) body3357));
    org$pandalanguage$pandac$IRNode* $tmp3362 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3362->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3362->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3362, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3359));
    return $tmp3362;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3371;
    org$pandalanguage$pandac$Variable* targetVar3375;
    panda$collections$Array* subtypes3376;
    org$pandalanguage$pandac$Type* iterType3380;
    org$pandalanguage$pandac$Variable* iter3392;
    panda$collections$Array* statements3397;
    panda$collections$Array* declChildren3400;
    panda$collections$Array* varChildren3405;
    panda$collections$Array* whileChildren3412;
    org$pandalanguage$pandac$IRNode* done3415;
    org$pandalanguage$pandac$IRNode* notCall3422;
    panda$collections$Array* valueDeclChildren3427;
    org$pandalanguage$pandac$IRNode* next3432;
    panda$collections$Array* valueVarChildren3439;
    org$pandalanguage$pandac$IRNode* block3444;
    panda$collections$Array* blockChildren3446;
    panda$core$Bit $tmp3365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3364 = $tmp3365.value;
    if (!$tmp3364) goto $l3366;
    panda$core$Object* $tmp3367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3368 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3369 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3367), $tmp3368);
    $tmp3364 = $tmp3369.value;
    $l3366:;
    panda$core$Bit $tmp3370 = { $tmp3364 };
    PANDA_ASSERT($tmp3370.value);
    panda$core$Object* $tmp3372 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3373 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3372));
    target3371 = $tmp3373;
    if (((panda$core$Bit) { target3371 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3371->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3374.value);
    targetVar3375 = ((org$pandalanguage$pandac$Variable*) target3371->target->payload);
    panda$collections$Array* $tmp3377 = (panda$collections$Array*) malloc(40);
    $tmp3377->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3377->refCount.value = 1;
    panda$collections$Array$init($tmp3377);
    subtypes3376 = $tmp3377;
    org$pandalanguage$pandac$Type* $tmp3379 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3376, ((panda$core$Object*) $tmp3379));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3376, ((panda$core$Object*) target3371->target->type));
    org$pandalanguage$pandac$Type* $tmp3381 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3381->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3381->refCount.value = 1;
    panda$core$Object* $tmp3384 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3376, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3383, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3384)));
    panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, &$s3386);
    panda$core$Object* $tmp3388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3376, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3387, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3388)));
    panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, &$s3390);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3381, $tmp3391, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3376), ((panda$core$Bit) { true }));
    iterType3380 = $tmp3381;
    org$pandalanguage$pandac$Variable* $tmp3393 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3393->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3393->refCount.value = 1;
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3375)->name, &$s3395);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3393, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3396, iterType3380);
    iter3392 = $tmp3393;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3392));
    panda$collections$Array* $tmp3398 = (panda$collections$Array*) malloc(40);
    $tmp3398->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3398->refCount.value = 1;
    panda$collections$Array$init($tmp3398);
    statements3397 = $tmp3398;
    panda$collections$Array* $tmp3401 = (panda$collections$Array*) malloc(40);
    $tmp3401->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3401->refCount.value = 1;
    panda$collections$Array$init($tmp3401);
    declChildren3400 = $tmp3401;
    org$pandalanguage$pandac$IRNode* $tmp3403 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3403->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3403->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3403, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3392->type, iter3392);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3400, ((panda$core$Object*) $tmp3403));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3400, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3406 = (panda$collections$Array*) malloc(40);
    $tmp3406->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3406->refCount.value = 1;
    panda$collections$Array$init($tmp3406);
    varChildren3405 = $tmp3406;
    org$pandalanguage$pandac$IRNode* $tmp3408 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3408->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3408->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3408, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3392)->position, ((panda$collections$ListView*) declChildren3400));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3405, ((panda$core$Object*) $tmp3408));
    org$pandalanguage$pandac$IRNode* $tmp3410 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3410->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3410->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3410, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3392)->position, ((panda$collections$ListView*) varChildren3405));
    panda$collections$Array$add$panda$collections$Array$T(statements3397, ((panda$core$Object*) $tmp3410));
    panda$collections$Array* $tmp3413 = (panda$collections$Array*) malloc(40);
    $tmp3413->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3413->refCount.value = 1;
    panda$collections$Array$init($tmp3413);
    whileChildren3412 = $tmp3413;
    org$pandalanguage$pandac$IRNode* $tmp3416 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3416->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3416->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3416, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3392)->position, iter3392->type, iter3392);
    panda$collections$Array* $tmp3419 = (panda$collections$Array*) malloc(40);
    $tmp3419->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3419->refCount.value = 1;
    panda$collections$Array$init($tmp3419);
    org$pandalanguage$pandac$IRNode* $tmp3421 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3416, &$s3418, ((panda$collections$ListView*) $tmp3419), NULL);
    done3415 = $tmp3421;
    if (((panda$core$Bit) { done3415 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3424 = (panda$collections$Array*) malloc(40);
    $tmp3424->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3424->refCount.value = 1;
    panda$collections$Array$init($tmp3424);
    org$pandalanguage$pandac$IRNode* $tmp3426 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3415, &$s3423, ((panda$collections$ListView*) $tmp3424), NULL);
    notCall3422 = $tmp3426;
    if (((panda$core$Bit) { notCall3422 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3412, ((panda$core$Object*) notCall3422));
    panda$collections$Array* $tmp3428 = (panda$collections$Array*) malloc(40);
    $tmp3428->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3428->refCount.value = 1;
    panda$collections$Array$init($tmp3428);
    valueDeclChildren3427 = $tmp3428;
    org$pandalanguage$pandac$IRNode* $tmp3430 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3430->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3430->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3430, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3375->type, targetVar3375);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3427, ((panda$core$Object*) $tmp3430));
    org$pandalanguage$pandac$IRNode* $tmp3433 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3433->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3433->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3433, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3392->type, iter3392);
    panda$collections$Array* $tmp3436 = (panda$collections$Array*) malloc(40);
    $tmp3436->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3436->refCount.value = 1;
    panda$collections$Array$init($tmp3436);
    org$pandalanguage$pandac$IRNode* $tmp3438 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3433, &$s3435, ((panda$collections$ListView*) $tmp3436), NULL);
    next3432 = $tmp3438;
    PANDA_ASSERT(((panda$core$Bit) { next3432 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3427, ((panda$core$Object*) next3432));
    panda$collections$Array* $tmp3440 = (panda$collections$Array*) malloc(40);
    $tmp3440->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3440->refCount.value = 1;
    panda$collections$Array$init($tmp3440);
    valueVarChildren3439 = $tmp3440;
    org$pandalanguage$pandac$IRNode* $tmp3442 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3442->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3442->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3442, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3427));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3439, ((panda$core$Object*) $tmp3442));
    org$pandalanguage$pandac$IRNode* $tmp3445 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3444 = $tmp3445;
    if (((panda$core$Bit) { block3444 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3447 = (panda$collections$Array*) malloc(40);
    $tmp3447->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3447->refCount.value = 1;
    panda$collections$Array$init($tmp3447);
    blockChildren3446 = $tmp3447;
    org$pandalanguage$pandac$IRNode* $tmp3449 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3449->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3449->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3449, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3439));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3446, ((panda$core$Object*) $tmp3449));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3446, ((panda$collections$CollectionView*) block3444->children));
    org$pandalanguage$pandac$IRNode* $tmp3451 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3451->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3451->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3451, ((panda$core$Int64) { 1000 }), block3444->position, ((panda$collections$ListView*) blockChildren3446));
    block3444 = $tmp3451;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3412, ((panda$core$Object*) block3444));
    org$pandalanguage$pandac$IRNode* $tmp3453 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3453->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3453, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3412));
    panda$collections$Array$add$panda$collections$Array$T(statements3397, ((panda$core$Object*) $tmp3453));
    org$pandalanguage$pandac$IRNode* $tmp3455 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3455->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3455->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3455, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3397));
    return $tmp3455;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3460;
    org$pandalanguage$pandac$SymbolTable* symbols3463;
    org$pandalanguage$pandac$IRNode* result3466;
    panda$core$Bit found3480;
    panda$collections$Iterator* intf$Iter3481;
    org$pandalanguage$pandac$Type* intf3494;
    org$pandalanguage$pandac$IRNode* iterator3506;
    org$pandalanguage$pandac$IRNode* iterable3518;
    org$pandalanguage$pandac$IRNode* iterator3520;
    panda$core$Bit $tmp3457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3457.value);
    panda$core$Int64 $tmp3458 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3458, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3459.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3462 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3461));
    list3460 = $tmp3462;
    if (((panda$core$Bit) { list3460 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3464 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3464->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3464->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3464, self->symbolTable);
    symbols3463 = $tmp3464;
    self->symbolTable = symbols3463;
    panda$core$Bit $tmp3469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3460->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3468 = $tmp3469.value;
    if ($tmp3468) goto $l3470;
    panda$core$Bit $tmp3471 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3460->type);
    $tmp3468 = $tmp3471.value;
    $l3470:;
    panda$core$Bit $tmp3472 = { $tmp3468 };
    bool $tmp3467 = $tmp3472.value;
    if ($tmp3467) goto $l3473;
    panda$core$Bit $tmp3474 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3460->type);
    $tmp3467 = $tmp3474.value;
    $l3473:;
    panda$core$Bit $tmp3475 = { $tmp3467 };
    if ($tmp3475.value) {
    {
        panda$core$Object* $tmp3476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3477 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3478 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3476), list3460, ((org$pandalanguage$pandac$ASTNode*) $tmp3477));
        result3466 = $tmp3478;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3479 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3460);
        list3460 = $tmp3479;
        if (((panda$core$Bit) { list3460 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3480 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3482 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3460->type);
            ITable* $tmp3483 = ((panda$collections$Iterable*) $tmp3482)->$class->itable;
            while ($tmp3483->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3483 = $tmp3483->next;
            }
            $fn3485 $tmp3484 = $tmp3483->methods[0];
            panda$collections$Iterator* $tmp3486 = $tmp3484(((panda$collections$Iterable*) $tmp3482));
            intf$Iter3481 = $tmp3486;
            $l3487:;
            ITable* $tmp3489 = intf$Iter3481->$class->itable;
            while ($tmp3489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3489 = $tmp3489->next;
            }
            $fn3491 $tmp3490 = $tmp3489->methods[0];
            panda$core$Bit $tmp3492 = $tmp3490(intf$Iter3481);
            panda$core$Bit $tmp3493 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3492);
            if (!$tmp3493.value) goto $l3488;
            {
                ITable* $tmp3495 = intf$Iter3481->$class->itable;
                while ($tmp3495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3495 = $tmp3495->next;
                }
                $fn3497 $tmp3496 = $tmp3495->methods[1];
                panda$core$Object* $tmp3498 = $tmp3496(intf$Iter3481);
                intf3494 = ((org$pandalanguage$pandac$Type*) $tmp3498);
                panda$core$Bit $tmp3500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3494->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3499 = $tmp3500.value;
                if (!$tmp3499) goto $l3501;
                panda$core$Object* $tmp3502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3494->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3503 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3504 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3502), $tmp3503);
                $tmp3499 = $tmp3504.value;
                $l3501:;
                panda$core$Bit $tmp3505 = { $tmp3499 };
                if ($tmp3505.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3507 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3460, intf3494);
                    iterator3506 = $tmp3507;
                    panda$core$Object* $tmp3508 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3509 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3510 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3508), iterator3506, ((org$pandalanguage$pandac$ASTNode*) $tmp3509));
                    result3466 = $tmp3510;
                    found3480 = ((panda$core$Bit) { true });
                    goto $l3488;
                }
                }
                panda$core$Bit $tmp3512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3494->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3511 = $tmp3512.value;
                if (!$tmp3511) goto $l3513;
                panda$core$Object* $tmp3514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3494->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3515 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3516 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3514), $tmp3515);
                $tmp3511 = $tmp3516.value;
                $l3513:;
                panda$core$Bit $tmp3517 = { $tmp3511 };
                if ($tmp3517.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3519 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3460, intf3494);
                    iterable3518 = $tmp3519;
                    panda$collections$Array* $tmp3522 = (panda$collections$Array*) malloc(40);
                    $tmp3522->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3522->refCount.value = 1;
                    panda$collections$Array$init($tmp3522);
                    org$pandalanguage$pandac$IRNode* $tmp3524 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3518, &$s3521, ((panda$collections$ListView*) $tmp3522));
                    iterator3520 = $tmp3524;
                    panda$core$Object* $tmp3525 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3526 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3527 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3525), iterator3520, ((org$pandalanguage$pandac$ASTNode*) $tmp3526));
                    result3466 = $tmp3527;
                    found3480 = ((panda$core$Bit) { true });
                    goto $l3488;
                }
                }
            }
            goto $l3487;
            $l3488:;
        }
        panda$core$Bit $tmp3528 = panda$core$Bit$$NOT$R$panda$core$Bit(found3480);
        if ($tmp3528.value) {
        {
            panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3529, ((panda$core$Object*) list3460->type));
            panda$core$String* $tmp3532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3530, &$s3531);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3460->position, $tmp3532);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3463->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3533);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3466;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3537;
    org$pandalanguage$pandac$IRNode* stmt3542;
    panda$collections$Array* children3545;
    panda$core$Bit $tmp3534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3534.value);
    panda$core$Int64 $tmp3535 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3535, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3536.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3538 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3539 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3538));
    org$pandalanguage$pandac$Type* $tmp3540 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3541 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3539, $tmp3540);
    test3537 = $tmp3541;
    if (((panda$core$Bit) { test3537 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3543 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3544 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3543));
    stmt3542 = $tmp3544;
    if (((panda$core$Bit) { stmt3542 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3546 = (panda$collections$Array*) malloc(40);
    $tmp3546->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3546->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3546, ((panda$core$Int64) { 2 }));
    children3545 = $tmp3546;
    panda$collections$Array$add$panda$collections$Array$T(children3545, ((panda$core$Object*) test3537));
    panda$collections$Array$add$panda$collections$Array$T(children3545, ((panda$core$Object*) stmt3542));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3548 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3548->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3548->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3548, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3545));
    return $tmp3548;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3553;
    org$pandalanguage$pandac$IRNode* test3556;
    panda$collections$Array* children3561;
    panda$core$Bit $tmp3550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3550.value);
    panda$core$Int64 $tmp3551 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3551, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3552.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3554 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3555 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3554));
    stmt3553 = $tmp3555;
    if (((panda$core$Bit) { stmt3553 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3557 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3558 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3557));
    org$pandalanguage$pandac$Type* $tmp3559 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3560 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3558, $tmp3559);
    test3556 = $tmp3560;
    if (((panda$core$Bit) { test3556 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3562 = (panda$collections$Array*) malloc(40);
    $tmp3562->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3562->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3562, ((panda$core$Int64) { 2 }));
    children3561 = $tmp3562;
    panda$collections$Array$add$panda$collections$Array$T(children3561, ((panda$core$Object*) stmt3553));
    panda$collections$Array$add$panda$collections$Array$T(children3561, ((panda$core$Object*) test3556));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3564 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3564->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3564->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3564, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3561));
    return $tmp3564;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3569;
    panda$collections$Array* children3572;
    panda$core$Bit $tmp3566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3566.value);
    panda$core$Int64 $tmp3567 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3567, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3568.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3570 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3571 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3570));
    stmt3569 = $tmp3571;
    if (((panda$core$Bit) { stmt3569 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3573 = (panda$collections$Array*) malloc(40);
    $tmp3573->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3573->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3573, ((panda$core$Int64) { 1 }));
    children3572 = $tmp3573;
    panda$collections$Array$add$panda$collections$Array$T(children3572, ((panda$core$Object*) stmt3569));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3575 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3575->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3575->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3575, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3572));
    return $tmp3575;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3577;
    org$pandalanguage$pandac$Type* type3581;
    org$pandalanguage$pandac$Variable* v3592;
    value3577 = p_rawValue;
    bool $tmp3578 = ((panda$core$Bit) { value3577 == NULL }).value;
    if ($tmp3578) goto $l3579;
    $tmp3578 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3579:;
    panda$core$Bit $tmp3580 = { $tmp3578 };
    PANDA_ASSERT($tmp3580.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3582 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3582, ((panda$core$Int64) { 1 }));
            if ($tmp3583.value) {
            {
                panda$core$Object* $tmp3584 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3585 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3584));
                org$pandalanguage$pandac$Type* $tmp3586 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3585);
                type3581 = $tmp3586;
            }
            }
            else {
            if (((panda$core$Bit) { value3577 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3587 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3577);
                value3577 = $tmp3587;
                if (((panda$core$Bit) { value3577 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3588 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3577);
                type3581 = $tmp3588;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3581 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3589);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3577 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3590 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3577, type3581);
                value3577 = $tmp3590;
                if (((panda$core$Bit) { value3577 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3591 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3577->type, type3581);
                PANDA_ASSERT($tmp3591.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3593 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3593->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3593->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3593, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3581);
            v3592 = $tmp3593;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3592));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3595 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3595->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3595->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3597 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3597->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3597->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3597, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3592)->position, v3592->type, v3592);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3595, $tmp3597, value3577);
            return $tmp3595;
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
    org$pandalanguage$pandac$IRNode* value3607;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3612;
    panda$collections$Array* children3615;
    org$pandalanguage$pandac$Variable* v3619;
    panda$core$Bit $tmp3599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3599.value);
    panda$core$Int64 $tmp3601 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3601, ((panda$core$Int64) { 1 }));
    bool $tmp3600 = $tmp3602.value;
    if ($tmp3600) goto $l3603;
    panda$core$Int64 $tmp3604 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3604, ((panda$core$Int64) { 2 }));
    $tmp3600 = $tmp3605.value;
    $l3603:;
    panda$core$Bit $tmp3606 = { $tmp3600 };
    PANDA_ASSERT($tmp3606.value);
    panda$core$Int64 $tmp3608 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3608, ((panda$core$Int64) { 2 }));
    if ($tmp3609.value) {
    {
        panda$core$Object* $tmp3610 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3611 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3610));
        value3607 = $tmp3611;
        if (((panda$core$Bit) { value3607 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3607 = NULL;
    }
    }
    panda$core$Object* $tmp3613 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3614 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3613), p_varKind, value3607, NULL);
    target3612 = $tmp3614;
    if (((panda$core$Bit) { target3612 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3616 = (panda$collections$Array*) malloc(40);
    $tmp3616->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3616->refCount.value = 1;
    panda$collections$Array$init($tmp3616);
    children3615 = $tmp3616;
    panda$collections$Array$add$panda$collections$Array$T(children3615, ((panda$core$Object*) target3612->target));
    if (((panda$core$Bit) { target3612->value != NULL }).value) {
    {
        panda$core$Bit $tmp3618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3612->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3618.value);
        v3619 = ((org$pandalanguage$pandac$Variable*) target3612->target->payload);
        v3619->initialValue = target3612->value;
        panda$collections$Array$add$panda$collections$Array$T(children3615, ((panda$core$Object*) target3612->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3620 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3620->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3620->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3620, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3615));
    return $tmp3620;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3623;
    panda$collections$Iterator* label$Iter3624;
    panda$core$String* label3636;
    panda$core$Bit $tmp3622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3622.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3623 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3625 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3625->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3625 = $tmp3625->next;
            }
            $fn3627 $tmp3626 = $tmp3625->methods[0];
            panda$collections$Iterator* $tmp3628 = $tmp3626(((panda$collections$Iterable*) self->loops));
            label$Iter3624 = $tmp3628;
            $l3629:;
            ITable* $tmp3631 = label$Iter3624->$class->itable;
            while ($tmp3631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3631 = $tmp3631->next;
            }
            $fn3633 $tmp3632 = $tmp3631->methods[0];
            panda$core$Bit $tmp3634 = $tmp3632(label$Iter3624);
            panda$core$Bit $tmp3635 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3634);
            if (!$tmp3635.value) goto $l3630;
            {
                ITable* $tmp3637 = label$Iter3624->$class->itable;
                while ($tmp3637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3637 = $tmp3637->next;
                }
                $fn3639 $tmp3638 = $tmp3637->methods[1];
                panda$core$Object* $tmp3640 = $tmp3638(label$Iter3624);
                label3636 = ((panda$core$String*) $tmp3640);
                bool $tmp3641 = ((panda$core$Bit) { label3636 != NULL }).value;
                if (!$tmp3641) goto $l3642;
                panda$core$Bit $tmp3643 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3636, ((panda$core$String*) p_b->payload));
                $tmp3641 = $tmp3643.value;
                $l3642:;
                panda$core$Bit $tmp3644 = { $tmp3641 };
                if ($tmp3644.value) {
                {
                    found3623 = ((panda$core$Bit) { true });
                    goto $l3630;
                }
                }
            }
            goto $l3629;
            $l3630:;
        }
        panda$core$Bit $tmp3645 = panda$core$Bit$$NOT$R$panda$core$Bit(found3623);
        if ($tmp3645.value) {
        {
            panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3646, p_b->payload);
            panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, &$s3648);
            panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3650, p_b->payload);
            panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, &$s3652);
            panda$core$String* $tmp3654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3649, $tmp3653);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3654);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3655 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3655, ((panda$core$Int64) { 0 }));
    if ($tmp3656.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3657);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3658 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3658->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3658->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3658, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3658;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3661;
    panda$collections$Iterator* label$Iter3662;
    panda$core$String* label3674;
    panda$core$Bit $tmp3660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3660.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3661 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3663 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3663->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3663 = $tmp3663->next;
            }
            $fn3665 $tmp3664 = $tmp3663->methods[0];
            panda$collections$Iterator* $tmp3666 = $tmp3664(((panda$collections$Iterable*) self->loops));
            label$Iter3662 = $tmp3666;
            $l3667:;
            ITable* $tmp3669 = label$Iter3662->$class->itable;
            while ($tmp3669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3669 = $tmp3669->next;
            }
            $fn3671 $tmp3670 = $tmp3669->methods[0];
            panda$core$Bit $tmp3672 = $tmp3670(label$Iter3662);
            panda$core$Bit $tmp3673 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3672);
            if (!$tmp3673.value) goto $l3668;
            {
                ITable* $tmp3675 = label$Iter3662->$class->itable;
                while ($tmp3675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3675 = $tmp3675->next;
                }
                $fn3677 $tmp3676 = $tmp3675->methods[1];
                panda$core$Object* $tmp3678 = $tmp3676(label$Iter3662);
                label3674 = ((panda$core$String*) $tmp3678);
                bool $tmp3679 = ((panda$core$Bit) { label3674 != NULL }).value;
                if (!$tmp3679) goto $l3680;
                panda$core$Bit $tmp3681 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3674, ((panda$core$String*) p_c->payload));
                $tmp3679 = $tmp3681.value;
                $l3680:;
                panda$core$Bit $tmp3682 = { $tmp3679 };
                if ($tmp3682.value) {
                {
                    found3661 = ((panda$core$Bit) { true });
                    goto $l3668;
                }
                }
            }
            goto $l3667;
            $l3668:;
        }
        panda$core$Bit $tmp3683 = panda$core$Bit$$NOT$R$panda$core$Bit(found3661);
        if ($tmp3683.value) {
        {
            panda$core$String* $tmp3685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3684, p_c->payload);
            panda$core$String* $tmp3687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3685, &$s3686);
            panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3688, p_c->payload);
            panda$core$String* $tmp3691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, &$s3690);
            panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, $tmp3691);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3692);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3693 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3693, ((panda$core$Int64) { 0 }));
    if ($tmp3694.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3695);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3696 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3696->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3696->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3696, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3696;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3705;
    panda$collections$Array* children3710;
    panda$core$Bit $tmp3698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3698.value);
    panda$core$Int64 $tmp3699 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3699, ((panda$core$Int64) { 1 }));
    if ($tmp3700.value) {
    {
        panda$core$Object* $tmp3701 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3702 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3703 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3701)->returnType, $tmp3702);
        if ($tmp3703.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3704);
            return NULL;
        }
        }
        panda$core$Object* $tmp3706 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3707 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3706));
        panda$core$Object* $tmp3708 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3709 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3707, ((org$pandalanguage$pandac$MethodDecl*) $tmp3708)->returnType);
        value3705 = $tmp3709;
        if (((panda$core$Bit) { value3705 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3711 = (panda$collections$Array*) malloc(40);
        $tmp3711->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3711->refCount.value = 1;
        panda$collections$Array$init($tmp3711);
        children3710 = $tmp3711;
        panda$collections$Array$add$panda$collections$Array$T(children3710, ((panda$core$Object*) value3705));
        org$pandalanguage$pandac$IRNode* $tmp3713 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3713->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3713->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3713, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3710));
        return $tmp3713;
    }
    }
    panda$core$Int64 $tmp3715 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3715, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3716.value);
    panda$core$Object* $tmp3717 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3718 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3719 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3717)->returnType, $tmp3718);
    if ($tmp3719.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3720);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3721 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3721->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3721->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3721, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3721;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3731;
    org$pandalanguage$pandac$ClassDecl* bit3736;
    org$pandalanguage$pandac$Symbol* value3739;
    panda$collections$Array* fieldChildren3742;
    panda$collections$Array* children3748;
    org$pandalanguage$pandac$IRNode* msg3753;
    panda$core$Bit $tmp3723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3723.value);
    panda$core$Int64 $tmp3725 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3725, ((panda$core$Int64) { 1 }));
    bool $tmp3724 = $tmp3726.value;
    if ($tmp3724) goto $l3727;
    panda$core$Int64 $tmp3728 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3728, ((panda$core$Int64) { 2 }));
    $tmp3724 = $tmp3729.value;
    $l3727:;
    panda$core$Bit $tmp3730 = { $tmp3724 };
    PANDA_ASSERT($tmp3730.value);
    panda$core$Object* $tmp3732 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3733 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3732));
    test3731 = $tmp3733;
    if (((panda$core$Bit) { test3731 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3734 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3735 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3731, $tmp3734);
    test3731 = $tmp3735;
    if (((panda$core$Bit) { test3731 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3737 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3738 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3737);
    bit3736 = $tmp3738;
    PANDA_ASSERT(((panda$core$Bit) { bit3736 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3741 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3736->symbolTable, &$s3740);
    value3739 = $tmp3741;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3739));
    panda$collections$Array* $tmp3743 = (panda$collections$Array*) malloc(40);
    $tmp3743->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3743->refCount.value = 1;
    panda$collections$Array$init($tmp3743);
    fieldChildren3742 = $tmp3743;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3742, ((panda$core$Object*) test3731));
    org$pandalanguage$pandac$IRNode* $tmp3745 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3745->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3747 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3745, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3747, ((panda$core$Object*) value3739), ((panda$collections$ListView*) fieldChildren3742));
    test3731 = $tmp3745;
    panda$collections$Array* $tmp3749 = (panda$collections$Array*) malloc(40);
    $tmp3749->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3749->refCount.value = 1;
    panda$collections$Array$init($tmp3749);
    children3748 = $tmp3749;
    panda$collections$Array$add$panda$collections$Array$T(children3748, ((panda$core$Object*) test3731));
    panda$core$Int64 $tmp3751 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3751, ((panda$core$Int64) { 2 }));
    if ($tmp3752.value) {
    {
        panda$core$Object* $tmp3754 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3755 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3754));
        msg3753 = $tmp3755;
        if (((panda$core$Bit) { msg3753 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3756 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3757 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3753, $tmp3756);
        msg3753 = $tmp3757;
        if (((panda$core$Bit) { msg3753 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3748, ((panda$core$Object*) msg3753));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3758 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3758->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3758->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3758, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3748));
    return $tmp3758;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3773;
    panda$core$Int64 varKind3774;
    panda$collections$Array* decls3775;
    panda$collections$Iterator* astDecl$Iter3778;
    org$pandalanguage$pandac$ASTNode* astDecl3790;
    org$pandalanguage$pandac$IRNode* decl3795;
    panda$core$Bit $tmp3763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3762 = $tmp3763.value;
    if ($tmp3762) goto $l3764;
    panda$core$Bit $tmp3765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3762 = $tmp3765.value;
    $l3764:;
    panda$core$Bit $tmp3766 = { $tmp3762 };
    bool $tmp3761 = $tmp3766.value;
    if ($tmp3761) goto $l3767;
    panda$core$Bit $tmp3768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3761 = $tmp3768.value;
    $l3767:;
    panda$core$Bit $tmp3769 = { $tmp3761 };
    bool $tmp3760 = $tmp3769.value;
    if ($tmp3760) goto $l3770;
    panda$core$Bit $tmp3771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3760 = $tmp3771.value;
    $l3770:;
    panda$core$Bit $tmp3772 = { $tmp3760 };
    PANDA_ASSERT($tmp3772.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3773 = ((panda$core$Int64) { 1017 });
            varKind3774 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3773 = ((panda$core$Int64) { 1018 });
            varKind3774 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3773 = ((panda$core$Int64) { 1019 });
            varKind3774 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3773 = ((panda$core$Int64) { 1020 });
            varKind3774 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3776 = (panda$collections$Array*) malloc(40);
    $tmp3776->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3776->refCount.value = 1;
    panda$collections$Array$init($tmp3776);
    decls3775 = $tmp3776;
    {
        ITable* $tmp3779 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3779->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3779 = $tmp3779->next;
        }
        $fn3781 $tmp3780 = $tmp3779->methods[0];
        panda$collections$Iterator* $tmp3782 = $tmp3780(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3778 = $tmp3782;
        $l3783:;
        ITable* $tmp3785 = astDecl$Iter3778->$class->itable;
        while ($tmp3785->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3785 = $tmp3785->next;
        }
        $fn3787 $tmp3786 = $tmp3785->methods[0];
        panda$core$Bit $tmp3788 = $tmp3786(astDecl$Iter3778);
        panda$core$Bit $tmp3789 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3788);
        if (!$tmp3789.value) goto $l3784;
        {
            ITable* $tmp3791 = astDecl$Iter3778->$class->itable;
            while ($tmp3791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3791 = $tmp3791->next;
            }
            $fn3793 $tmp3792 = $tmp3791->methods[1];
            panda$core$Object* $tmp3794 = $tmp3792(astDecl$Iter3778);
            astDecl3790 = ((org$pandalanguage$pandac$ASTNode*) $tmp3794);
            org$pandalanguage$pandac$IRNode* $tmp3796 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3790, varKind3774);
            decl3795 = $tmp3796;
            if (((panda$core$Bit) { decl3795 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3775, ((panda$core$Object*) decl3795));
        }
        goto $l3783;
        $l3784:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3797 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3797->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3797, nodeKind3773, p_v->position, ((panda$collections$ListView*) decls3775));
    return $tmp3797;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3799;
    panda$collections$Array* callChildren3802;
    org$pandalanguage$pandac$IRNode* testValue3805;
    org$pandalanguage$pandac$IRNode* $tmp3800 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3800->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3800->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3800, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3799 = $tmp3800;
    panda$collections$Array* $tmp3803 = (panda$collections$Array*) malloc(40);
    $tmp3803->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3803->refCount.value = 1;
    panda$collections$Array$init($tmp3803);
    callChildren3802 = $tmp3803;
    org$pandalanguage$pandac$IRNode* $tmp3806 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3805 = $tmp3806;
    if (((panda$core$Bit) { testValue3805 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3802, ((panda$core$Object*) testValue3805));
    org$pandalanguage$pandac$IRNode* $tmp3808 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3799, &$s3807, ((panda$collections$ListView*) callChildren3802));
    return $tmp3808;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3817;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3821;
    org$pandalanguage$pandac$IRNode* nextTest3841;
    panda$collections$Array* callChildren3845;
    panda$collections$Array* statements3863;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3866;
    org$pandalanguage$pandac$IRNode* statement3885;
    panda$collections$Array* children3900;
    panda$core$Bit $tmp3809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3809.value);
    panda$core$Int64 $tmp3810 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3811 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3810, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3811.value);
    panda$core$Object* $tmp3812 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3812)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3813.value);
    panda$core$Object* $tmp3814 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3815 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3814)->children);
    panda$core$Bit $tmp3816 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3815, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3816.value);
    panda$core$Object* $tmp3818 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3819 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3818)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3820 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3819));
    test3817 = $tmp3820;
    if (((panda$core$Bit) { test3817 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3822 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3823 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3822)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3821, ((panda$core$Int64) { 1 }), $tmp3823, ((panda$core$Bit) { false }));
    int64_t $tmp3825 = $tmp3821.min.value;
    panda$core$Int64 i3824 = { $tmp3825 };
    int64_t $tmp3827 = $tmp3821.max.value;
    bool $tmp3828 = $tmp3821.inclusive.value;
    bool $tmp3835 = 1 > 0;
    if ($tmp3835) goto $l3833; else goto $l3834;
    $l3833:;
    if ($tmp3828) goto $l3836; else goto $l3837;
    $l3836:;
    if ($tmp3825 <= $tmp3827) goto $l3829; else goto $l3831;
    $l3837:;
    if ($tmp3825 < $tmp3827) goto $l3829; else goto $l3831;
    $l3834:;
    if ($tmp3828) goto $l3838; else goto $l3839;
    $l3838:;
    if ($tmp3825 >= $tmp3827) goto $l3829; else goto $l3831;
    $l3839:;
    if ($tmp3825 > $tmp3827) goto $l3829; else goto $l3831;
    $l3829:;
    {
        panda$core$Object* $tmp3842 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3843 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3842)->children, i3824);
        org$pandalanguage$pandac$IRNode* $tmp3844 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3843));
        nextTest3841 = $tmp3844;
        if (((panda$core$Bit) { nextTest3841 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3846 = (panda$collections$Array*) malloc(40);
        $tmp3846->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3846->refCount.value = 1;
        panda$collections$Array$init($tmp3846);
        callChildren3845 = $tmp3846;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3845, ((panda$core$Object*) nextTest3841));
        org$pandalanguage$pandac$IRNode* $tmp3849 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3817, &$s3848, ((panda$collections$ListView*) callChildren3845));
        test3817 = $tmp3849;
        if (((panda$core$Bit) { test3817 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3832:;
    if ($tmp3835) goto $l3851; else goto $l3852;
    $l3851:;
    int64_t $tmp3853 = $tmp3827 - i3824.value;
    if ($tmp3828) goto $l3854; else goto $l3855;
    $l3854:;
    if ($tmp3853 >= 1) goto $l3850; else goto $l3831;
    $l3855:;
    if ($tmp3853 > 1) goto $l3850; else goto $l3831;
    $l3852:;
    int64_t $tmp3857 = i3824.value - $tmp3827;
    if ($tmp3828) goto $l3858; else goto $l3859;
    $l3858:;
    if ($tmp3857 >= -1) goto $l3850; else goto $l3831;
    $l3859:;
    if ($tmp3857 > -1) goto $l3850; else goto $l3831;
    $l3850:;
    i3824.value += 1;
    goto $l3829;
    $l3831:;
    org$pandalanguage$pandac$SymbolTable* $tmp3861 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3861->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3861->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3861, self->symbolTable);
    self->symbolTable = $tmp3861;
    panda$collections$Array* $tmp3864 = (panda$collections$Array*) malloc(40);
    $tmp3864->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3864->refCount.value = 1;
    panda$collections$Array$init($tmp3864);
    statements3863 = $tmp3864;
    panda$core$Int64 $tmp3867 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3866, ((panda$core$Int64) { 1 }), $tmp3867, ((panda$core$Bit) { false }));
    int64_t $tmp3869 = $tmp3866.min.value;
    panda$core$Int64 i3868 = { $tmp3869 };
    int64_t $tmp3871 = $tmp3866.max.value;
    bool $tmp3872 = $tmp3866.inclusive.value;
    bool $tmp3879 = 1 > 0;
    if ($tmp3879) goto $l3877; else goto $l3878;
    $l3877:;
    if ($tmp3872) goto $l3880; else goto $l3881;
    $l3880:;
    if ($tmp3869 <= $tmp3871) goto $l3873; else goto $l3875;
    $l3881:;
    if ($tmp3869 < $tmp3871) goto $l3873; else goto $l3875;
    $l3878:;
    if ($tmp3872) goto $l3882; else goto $l3883;
    $l3882:;
    if ($tmp3869 >= $tmp3871) goto $l3873; else goto $l3875;
    $l3883:;
    if ($tmp3869 > $tmp3871) goto $l3873; else goto $l3875;
    $l3873:;
    {
        panda$core$Object* $tmp3886 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3868);
        org$pandalanguage$pandac$IRNode* $tmp3887 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3886));
        statement3885 = $tmp3887;
        if (((panda$core$Bit) { statement3885 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3863, ((panda$core$Object*) statement3885));
    }
    $l3876:;
    if ($tmp3879) goto $l3889; else goto $l3890;
    $l3889:;
    int64_t $tmp3891 = $tmp3871 - i3868.value;
    if ($tmp3872) goto $l3892; else goto $l3893;
    $l3892:;
    if ($tmp3891 >= 1) goto $l3888; else goto $l3875;
    $l3893:;
    if ($tmp3891 > 1) goto $l3888; else goto $l3875;
    $l3890:;
    int64_t $tmp3895 = i3868.value - $tmp3871;
    if ($tmp3872) goto $l3896; else goto $l3897;
    $l3896:;
    if ($tmp3895 >= -1) goto $l3888; else goto $l3875;
    $l3897:;
    if ($tmp3895 > -1) goto $l3888; else goto $l3875;
    $l3888:;
    i3868.value += 1;
    goto $l3873;
    $l3875:;
    panda$core$Object* $tmp3899 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3899);
    panda$collections$Array* $tmp3901 = (panda$collections$Array*) malloc(40);
    $tmp3901->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3901->refCount.value = 1;
    panda$collections$Array$init($tmp3901);
    children3900 = $tmp3901;
    panda$collections$Array$add$panda$collections$Array$T(children3900, ((panda$core$Object*) test3817));
    org$pandalanguage$pandac$IRNode* $tmp3903 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3903->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3903->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3903, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3863));
    panda$collections$Array$add$panda$collections$Array$T(children3900, ((panda$core$Object*) $tmp3903));
    org$pandalanguage$pandac$IRNode* $tmp3905 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3905->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3905->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3905, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3900));
    return $tmp3905;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3907;
    org$pandalanguage$pandac$Variable* valueVar3910;
    panda$collections$Array* declChildren3920;
    panda$collections$Array* varChildren3925;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3932;
    org$pandalanguage$pandac$ASTNode* c3951;
    org$pandalanguage$pandac$IRNode* w3953;
    panda$collections$Array* statements3955;
    panda$collections$Iterator* astStatement$Iter3958;
    org$pandalanguage$pandac$ASTNode* astStatement3970;
    org$pandalanguage$pandac$IRNode* stmt3975;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp3990;
    panda$collections$Array* $tmp3908 = (panda$collections$Array*) malloc(40);
    $tmp3908->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3908->refCount.value = 1;
    panda$collections$Array$init($tmp3908);
    children3907 = $tmp3908;
    org$pandalanguage$pandac$Variable* $tmp3911 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3911->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3911->refCount.value = 1;
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3913, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, &$s3915);
    panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3916, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3911, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3919, p_value->type);
    valueVar3910 = $tmp3911;
    panda$collections$Array* $tmp3921 = (panda$collections$Array*) malloc(40);
    $tmp3921->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3921->refCount.value = 1;
    panda$collections$Array$init($tmp3921);
    declChildren3920 = $tmp3921;
    org$pandalanguage$pandac$IRNode* $tmp3923 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3923->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3923->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3923, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3910->type, valueVar3910);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3920, ((panda$core$Object*) $tmp3923));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3920, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3926 = (panda$collections$Array*) malloc(40);
    $tmp3926->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3926->refCount.value = 1;
    panda$collections$Array$init($tmp3926);
    varChildren3925 = $tmp3926;
    org$pandalanguage$pandac$IRNode* $tmp3928 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3928->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3928->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3928, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3910)->position, ((panda$collections$ListView*) declChildren3920));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3925, ((panda$core$Object*) $tmp3928));
    org$pandalanguage$pandac$IRNode* $tmp3930 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3930->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3930->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3930, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3910)->position, ((panda$collections$ListView*) varChildren3925));
    panda$collections$Array$add$panda$collections$Array$T(children3907, ((panda$core$Object*) $tmp3930));
    panda$core$Int64 $tmp3933 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3932, ((panda$core$Int64) { 1 }), $tmp3933, ((panda$core$Bit) { false }));
    int64_t $tmp3935 = $tmp3932.min.value;
    panda$core$Int64 i3934 = { $tmp3935 };
    int64_t $tmp3937 = $tmp3932.max.value;
    bool $tmp3938 = $tmp3932.inclusive.value;
    bool $tmp3945 = 1 > 0;
    if ($tmp3945) goto $l3943; else goto $l3944;
    $l3943:;
    if ($tmp3938) goto $l3946; else goto $l3947;
    $l3946:;
    if ($tmp3935 <= $tmp3937) goto $l3939; else goto $l3941;
    $l3947:;
    if ($tmp3935 < $tmp3937) goto $l3939; else goto $l3941;
    $l3944:;
    if ($tmp3938) goto $l3948; else goto $l3949;
    $l3948:;
    if ($tmp3935 >= $tmp3937) goto $l3939; else goto $l3941;
    $l3949:;
    if ($tmp3935 > $tmp3937) goto $l3939; else goto $l3941;
    $l3939:;
    {
        panda$core$Object* $tmp3952 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3934);
        c3951 = ((org$pandalanguage$pandac$ASTNode*) $tmp3952);
        switch (c3951->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3954 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3910, c3951);
                w3953 = $tmp3954;
                if (((panda$core$Bit) { w3953 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3907, ((panda$core$Object*) w3953));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3956 = (panda$collections$Array*) malloc(40);
                $tmp3956->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3956->refCount.value = 1;
                panda$collections$Array$init($tmp3956);
                statements3955 = $tmp3956;
                {
                    ITable* $tmp3959 = ((panda$collections$Iterable*) c3951->children)->$class->itable;
                    while ($tmp3959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3959 = $tmp3959->next;
                    }
                    $fn3961 $tmp3960 = $tmp3959->methods[0];
                    panda$collections$Iterator* $tmp3962 = $tmp3960(((panda$collections$Iterable*) c3951->children));
                    astStatement$Iter3958 = $tmp3962;
                    $l3963:;
                    ITable* $tmp3965 = astStatement$Iter3958->$class->itable;
                    while ($tmp3965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3965 = $tmp3965->next;
                    }
                    $fn3967 $tmp3966 = $tmp3965->methods[0];
                    panda$core$Bit $tmp3968 = $tmp3966(astStatement$Iter3958);
                    panda$core$Bit $tmp3969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3968);
                    if (!$tmp3969.value) goto $l3964;
                    {
                        ITable* $tmp3971 = astStatement$Iter3958->$class->itable;
                        while ($tmp3971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3971 = $tmp3971->next;
                        }
                        $fn3973 $tmp3972 = $tmp3971->methods[1];
                        panda$core$Object* $tmp3974 = $tmp3972(astStatement$Iter3958);
                        astStatement3970 = ((org$pandalanguage$pandac$ASTNode*) $tmp3974);
                        org$pandalanguage$pandac$IRNode* $tmp3976 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3970);
                        stmt3975 = $tmp3976;
                        if (((panda$core$Bit) { stmt3975 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3955, ((panda$core$Object*) stmt3975));
                    }
                    goto $l3963;
                    $l3964:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3977 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3977->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3977->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3977, ((panda$core$Int64) { 1000 }), c3951->position, ((panda$collections$ListView*) statements3955));
                panda$collections$Array$add$panda$collections$Array$T(children3907, ((panda$core$Object*) $tmp3977));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3942:;
    if ($tmp3945) goto $l3980; else goto $l3981;
    $l3980:;
    int64_t $tmp3982 = $tmp3937 - i3934.value;
    if ($tmp3938) goto $l3983; else goto $l3984;
    $l3983:;
    if ($tmp3982 >= 1) goto $l3979; else goto $l3941;
    $l3984:;
    if ($tmp3982 > 1) goto $l3979; else goto $l3941;
    $l3981:;
    int64_t $tmp3986 = i3934.value - $tmp3937;
    if ($tmp3938) goto $l3987; else goto $l3988;
    $l3987:;
    if ($tmp3986 >= -1) goto $l3979; else goto $l3941;
    $l3988:;
    if ($tmp3986 > -1) goto $l3979; else goto $l3941;
    $l3979:;
    i3934.value += 1;
    goto $l3939;
    $l3941:;
    panda$core$Int64 $tmp3991 = panda$collections$Array$get_count$R$panda$core$Int64(children3907);
    panda$core$Int64 $tmp3992 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3991, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3990, $tmp3992, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp3994 = $tmp3990.start.value;
    panda$core$Int64 i3993 = { $tmp3994 };
    int64_t $tmp3996 = $tmp3990.end.value;
    int64_t $tmp3997 = $tmp3990.step.value;
    bool $tmp3998 = $tmp3990.inclusive.value;
    bool $tmp4005 = $tmp3997 > 0;
    if ($tmp4005) goto $l4003; else goto $l4004;
    $l4003:;
    if ($tmp3998) goto $l4006; else goto $l4007;
    $l4006:;
    if ($tmp3994 <= $tmp3996) goto $l3999; else goto $l4001;
    $l4007:;
    if ($tmp3994 < $tmp3996) goto $l3999; else goto $l4001;
    $l4004:;
    if ($tmp3998) goto $l4008; else goto $l4009;
    $l4008:;
    if ($tmp3994 >= $tmp3996) goto $l3999; else goto $l4001;
    $l4009:;
    if ($tmp3994 > $tmp3996) goto $l3999; else goto $l4001;
    $l3999:;
    {
        panda$core$Int64 $tmp4011 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3993, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4012 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3907, $tmp4011);
        panda$core$Bit $tmp4013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4012)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4013.value);
        panda$core$Int64 $tmp4014 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3993, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4015 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3907, $tmp4014);
        panda$core$Int64 $tmp4016 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4015)->children);
        panda$core$Bit $tmp4017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4016, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4017.value);
        panda$core$Int64 $tmp4018 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3993, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4019 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3907, $tmp4018);
        panda$core$Object* $tmp4020 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3907, i3993);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4019)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4020)));
        panda$core$Int64 $tmp4021 = panda$collections$Array$get_count$R$panda$core$Int64(children3907);
        panda$core$Int64 $tmp4022 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4021, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3907, $tmp4022);
    }
    $l4002:;
    if ($tmp4005) goto $l4024; else goto $l4025;
    $l4024:;
    int64_t $tmp4026 = $tmp3996 - i3993.value;
    if ($tmp3998) goto $l4027; else goto $l4028;
    $l4027:;
    if ($tmp4026 >= $tmp3997) goto $l4023; else goto $l4001;
    $l4028:;
    if ($tmp4026 > $tmp3997) goto $l4023; else goto $l4001;
    $l4025:;
    int64_t $tmp4030 = i3993.value - $tmp3996;
    if ($tmp3998) goto $l4031; else goto $l4032;
    $l4031:;
    if ($tmp4030 >= -$tmp3997) goto $l4023; else goto $l4001;
    $l4032:;
    if ($tmp4030 > -$tmp3997) goto $l4023; else goto $l4001;
    $l4023:;
    i3993.value += $tmp3997;
    goto $l3999;
    $l4001:;
    org$pandalanguage$pandac$IRNode* $tmp4034 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4034->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4034->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4034, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3907));
    return $tmp4034;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4044;
    panda$collections$Iterator* expr$Iter4047;
    org$pandalanguage$pandac$ASTNode* expr4060;
    org$pandalanguage$pandac$IRNode* compiled4065;
    panda$collections$Array* statements4070;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4073;
    org$pandalanguage$pandac$IRNode* statement4092;
    panda$core$Bit $tmp4036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4036.value);
    panda$core$Int64 $tmp4037 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4038 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4037, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4038.value);
    panda$core$Object* $tmp4039 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4039)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4040.value);
    panda$core$Object* $tmp4041 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4042 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4041)->children);
    panda$core$Bit $tmp4043 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4042, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4043.value);
    panda$collections$Array* $tmp4045 = (panda$collections$Array*) malloc(40);
    $tmp4045->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4045->refCount.value = 1;
    panda$collections$Array$init($tmp4045);
    children4044 = $tmp4045;
    {
        panda$core$Object* $tmp4048 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4049 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4048)->children)->$class->itable;
        while ($tmp4049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4049 = $tmp4049->next;
        }
        $fn4051 $tmp4050 = $tmp4049->methods[0];
        panda$collections$Iterator* $tmp4052 = $tmp4050(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4048)->children));
        expr$Iter4047 = $tmp4052;
        $l4053:;
        ITable* $tmp4055 = expr$Iter4047->$class->itable;
        while ($tmp4055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4055 = $tmp4055->next;
        }
        $fn4057 $tmp4056 = $tmp4055->methods[0];
        panda$core$Bit $tmp4058 = $tmp4056(expr$Iter4047);
        panda$core$Bit $tmp4059 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4058);
        if (!$tmp4059.value) goto $l4054;
        {
            ITable* $tmp4061 = expr$Iter4047->$class->itable;
            while ($tmp4061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4061 = $tmp4061->next;
            }
            $fn4063 $tmp4062 = $tmp4061->methods[1];
            panda$core$Object* $tmp4064 = $tmp4062(expr$Iter4047);
            expr4060 = ((org$pandalanguage$pandac$ASTNode*) $tmp4064);
            org$pandalanguage$pandac$IRNode* $tmp4066 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4060);
            org$pandalanguage$pandac$IRNode* $tmp4067 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4066, p_type);
            compiled4065 = $tmp4067;
            if (((panda$core$Bit) { compiled4065 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4044, ((panda$core$Object*) compiled4065));
        }
        goto $l4053;
        $l4054:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4068 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4068->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4068->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4068, self->symbolTable);
    self->symbolTable = $tmp4068;
    panda$collections$Array* $tmp4071 = (panda$collections$Array*) malloc(40);
    $tmp4071->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4071->refCount.value = 1;
    panda$collections$Array$init($tmp4071);
    statements4070 = $tmp4071;
    panda$core$Int64 $tmp4074 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4073, ((panda$core$Int64) { 1 }), $tmp4074, ((panda$core$Bit) { false }));
    int64_t $tmp4076 = $tmp4073.min.value;
    panda$core$Int64 i4075 = { $tmp4076 };
    int64_t $tmp4078 = $tmp4073.max.value;
    bool $tmp4079 = $tmp4073.inclusive.value;
    bool $tmp4086 = 1 > 0;
    if ($tmp4086) goto $l4084; else goto $l4085;
    $l4084:;
    if ($tmp4079) goto $l4087; else goto $l4088;
    $l4087:;
    if ($tmp4076 <= $tmp4078) goto $l4080; else goto $l4082;
    $l4088:;
    if ($tmp4076 < $tmp4078) goto $l4080; else goto $l4082;
    $l4085:;
    if ($tmp4079) goto $l4089; else goto $l4090;
    $l4089:;
    if ($tmp4076 >= $tmp4078) goto $l4080; else goto $l4082;
    $l4090:;
    if ($tmp4076 > $tmp4078) goto $l4080; else goto $l4082;
    $l4080:;
    {
        panda$core$Object* $tmp4093 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4075);
        org$pandalanguage$pandac$IRNode* $tmp4094 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4093));
        statement4092 = $tmp4094;
        if (((panda$core$Bit) { statement4092 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4070, ((panda$core$Object*) statement4092));
    }
    $l4083:;
    if ($tmp4086) goto $l4096; else goto $l4097;
    $l4096:;
    int64_t $tmp4098 = $tmp4078 - i4075.value;
    if ($tmp4079) goto $l4099; else goto $l4100;
    $l4099:;
    if ($tmp4098 >= 1) goto $l4095; else goto $l4082;
    $l4100:;
    if ($tmp4098 > 1) goto $l4095; else goto $l4082;
    $l4097:;
    int64_t $tmp4102 = i4075.value - $tmp4078;
    if ($tmp4079) goto $l4103; else goto $l4104;
    $l4103:;
    if ($tmp4102 >= -1) goto $l4095; else goto $l4082;
    $l4104:;
    if ($tmp4102 > -1) goto $l4095; else goto $l4082;
    $l4095:;
    i4075.value += 1;
    goto $l4080;
    $l4082:;
    panda$core$Object* $tmp4106 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4106);
    org$pandalanguage$pandac$IRNode* $tmp4107 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4107->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4107->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4107, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4070));
    panda$collections$Array$add$panda$collections$Array$T(children4044, ((panda$core$Object*) $tmp4107));
    org$pandalanguage$pandac$IRNode* $tmp4109 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4109->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4109->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4109, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4044));
    return $tmp4109;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4112;
    panda$collections$Array* statements4117;
    panda$collections$Iterator* s$Iter4120;
    org$pandalanguage$pandac$ASTNode* s4132;
    org$pandalanguage$pandac$IRNode* statement4137;
    panda$core$Bit $tmp4111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4111.value);
    panda$collections$Array* $tmp4113 = (panda$collections$Array*) malloc(40);
    $tmp4113->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4113->refCount.value = 1;
    panda$collections$Array$init($tmp4113);
    children4112 = $tmp4113;
    org$pandalanguage$pandac$SymbolTable* $tmp4115 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4115->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4115->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4115, self->symbolTable);
    self->symbolTable = $tmp4115;
    panda$collections$Array* $tmp4118 = (panda$collections$Array*) malloc(40);
    $tmp4118->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4118->refCount.value = 1;
    panda$collections$Array$init($tmp4118);
    statements4117 = $tmp4118;
    {
        ITable* $tmp4121 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4121 = $tmp4121->next;
        }
        $fn4123 $tmp4122 = $tmp4121->methods[0];
        panda$collections$Iterator* $tmp4124 = $tmp4122(((panda$collections$Iterable*) p_o->children));
        s$Iter4120 = $tmp4124;
        $l4125:;
        ITable* $tmp4127 = s$Iter4120->$class->itable;
        while ($tmp4127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4127 = $tmp4127->next;
        }
        $fn4129 $tmp4128 = $tmp4127->methods[0];
        panda$core$Bit $tmp4130 = $tmp4128(s$Iter4120);
        panda$core$Bit $tmp4131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4130);
        if (!$tmp4131.value) goto $l4126;
        {
            ITable* $tmp4133 = s$Iter4120->$class->itable;
            while ($tmp4133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4133 = $tmp4133->next;
            }
            $fn4135 $tmp4134 = $tmp4133->methods[1];
            panda$core$Object* $tmp4136 = $tmp4134(s$Iter4120);
            s4132 = ((org$pandalanguage$pandac$ASTNode*) $tmp4136);
            org$pandalanguage$pandac$IRNode* $tmp4138 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4132);
            statement4137 = $tmp4138;
            if (((panda$core$Bit) { statement4137 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4117, ((panda$core$Object*) statement4137));
        }
        goto $l4125;
        $l4126:;
    }
    panda$core$Object* $tmp4139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4139);
    org$pandalanguage$pandac$IRNode* $tmp4140 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4140->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4140->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4140, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4117));
    panda$collections$Array$add$panda$collections$Array$T(children4112, ((panda$core$Object*) $tmp4140));
    org$pandalanguage$pandac$IRNode* $tmp4142 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4142->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4142->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4142, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4112));
    return $tmp4142;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4151;
    org$pandalanguage$pandac$Variable* v4160;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4145 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4144 = $tmp4145.value;
            if (!$tmp4144) goto $l4146;
            panda$core$Object* $tmp4147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4147)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4149 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4148));
            $tmp4144 = $tmp4149.value;
            $l4146:;
            panda$core$Bit $tmp4150 = { $tmp4144 };
            return $tmp4150;
        }
        break;
        case 1026:
        {
            f4151 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4151->resolved.value);
            panda$core$Bit $tmp4154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4151->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4153 = $tmp4154.value;
            if (!$tmp4153) goto $l4155;
            $tmp4153 = ((panda$core$Bit) { f4151->value != NULL }).value;
            $l4155:;
            panda$core$Bit $tmp4156 = { $tmp4153 };
            bool $tmp4152 = $tmp4156.value;
            if (!$tmp4152) goto $l4157;
            panda$core$Bit $tmp4158 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4151->value);
            $tmp4152 = $tmp4158.value;
            $l4157:;
            panda$core$Bit $tmp4159 = { $tmp4152 };
            return $tmp4159;
        }
        break;
        case 1016:
        {
            v4160 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4160->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4161 = $tmp4162.value;
            if ($tmp4161) goto $l4163;
            panda$core$Bit $tmp4166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4160->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4165 = $tmp4166.value;
            if (!$tmp4165) goto $l4167;
            $tmp4165 = ((panda$core$Bit) { v4160->initialValue != NULL }).value;
            $l4167:;
            panda$core$Bit $tmp4168 = { $tmp4165 };
            bool $tmp4164 = $tmp4168.value;
            if (!$tmp4164) goto $l4169;
            panda$core$Bit $tmp4170 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4160->initialValue);
            $tmp4164 = $tmp4170.value;
            $l4169:;
            panda$core$Bit $tmp4171 = { $tmp4164 };
            $tmp4161 = $tmp4171.value;
            $l4163:;
            panda$core$Bit $tmp4172 = { $tmp4161 };
            return $tmp4172;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4177;
    org$pandalanguage$pandac$Variable* v4179;
    panda$core$Bit $tmp4173 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4173.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4174 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4175 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4174)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4176 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4175));
            return $tmp4176;
        }
        break;
        case 1026:
        {
            f4177 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4178 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4177->value);
            return $tmp4178;
        }
        break;
        case 1016:
        {
            v4179 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4180 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4179->initialValue);
            return $tmp4180;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4184;
    panda$collections$Array* children4191;
    panda$collections$Iterator* rawWhen$Iter4194;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4195;
    org$pandalanguage$pandac$ASTNode* rawWhen4208;
    org$pandalanguage$pandac$IRNode* o4214;
    org$pandalanguage$pandac$IRNode* w4216;
    panda$core$Bit $tmp4181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4181.value);
    panda$core$Int64 $tmp4182 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4183 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4182, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4183.value);
    panda$core$Object* $tmp4185 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4186 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4185));
    org$pandalanguage$pandac$IRNode* $tmp4187 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4186);
    value4184 = $tmp4187;
    if (((panda$core$Bit) { value4184 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4188 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4184->type);
    panda$core$Bit $tmp4189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4188);
    if ($tmp4189.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4190 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4184);
        return $tmp4190;
    }
    }
    panda$collections$Array* $tmp4192 = (panda$collections$Array*) malloc(40);
    $tmp4192->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4192->refCount.value = 1;
    panda$collections$Array$init($tmp4192);
    children4191 = $tmp4192;
    panda$collections$Array$add$panda$collections$Array$T(children4191, ((panda$core$Object*) value4184));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4195, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4196 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4195);
        ITable* $tmp4197 = ((panda$collections$Iterable*) $tmp4196)->$class->itable;
        while ($tmp4197->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4197 = $tmp4197->next;
        }
        $fn4199 $tmp4198 = $tmp4197->methods[0];
        panda$collections$Iterator* $tmp4200 = $tmp4198(((panda$collections$Iterable*) $tmp4196));
        rawWhen$Iter4194 = $tmp4200;
        $l4201:;
        ITable* $tmp4203 = rawWhen$Iter4194->$class->itable;
        while ($tmp4203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4203 = $tmp4203->next;
        }
        $fn4205 $tmp4204 = $tmp4203->methods[0];
        panda$core$Bit $tmp4206 = $tmp4204(rawWhen$Iter4194);
        panda$core$Bit $tmp4207 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4206);
        if (!$tmp4207.value) goto $l4202;
        {
            ITable* $tmp4209 = rawWhen$Iter4194->$class->itable;
            while ($tmp4209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4209 = $tmp4209->next;
            }
            $fn4211 $tmp4210 = $tmp4209->methods[1];
            panda$core$Object* $tmp4212 = $tmp4210(rawWhen$Iter4194);
            rawWhen4208 = ((org$pandalanguage$pandac$ASTNode*) $tmp4212);
            panda$core$Bit $tmp4213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4208->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4213.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4215 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4208);
                o4214 = $tmp4215;
                if (((panda$core$Bit) { o4214 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4191, ((panda$core$Object*) o4214));
                goto $l4201;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4217 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4184->type, rawWhen4208);
            w4216 = $tmp4217;
            if (((panda$core$Bit) { w4216 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4216->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4219 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4218));
            panda$core$Bit $tmp4220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4219);
            if ($tmp4220.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4221 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4184);
                return $tmp4221;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4191, ((panda$core$Object*) w4216));
        }
        goto $l4201;
        $l4202:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4222 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4222->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4222, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4191));
    return $tmp4222;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4237;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4224 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4224;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4225 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4226 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4225);
            return $tmp4226;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4227 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4227;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4228 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4228;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4229 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4229;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4230 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4230;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4231 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4231;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4232 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4232;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4233 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4233;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4234 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4234;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4235 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4235;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4236 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4236;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4238 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4239 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4238);
            result4237 = $tmp4239;
            if (((panda$core$Bit) { result4237 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4240 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4237);
                result4237 = $tmp4240;
            }
            }
            return result4237;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4241 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4241;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4242;
    org$pandalanguage$pandac$SymbolTable* symbols4244;
    panda$collections$Iterator* p$Iter4247;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4259;
    panda$collections$Array* fieldInitializers4266;
    panda$collections$Iterator* f$Iter4270;
    org$pandalanguage$pandac$FieldDecl* f4283;
    panda$collections$Array* children4293;
    org$pandalanguage$pandac$IRNode* fieldRef4300;
    org$pandalanguage$pandac$IRNode* compiled4305;
    panda$collections$Array* children4309;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4242 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4243 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4243;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4245 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4245->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4245->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4245, self->symbolTable);
    symbols4244 = $tmp4245;
    {
        ITable* $tmp4248 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4248 = $tmp4248->next;
        }
        $fn4250 $tmp4249 = $tmp4248->methods[0];
        panda$collections$Iterator* $tmp4251 = $tmp4249(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4247 = $tmp4251;
        $l4252:;
        ITable* $tmp4254 = p$Iter4247->$class->itable;
        while ($tmp4254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4254 = $tmp4254->next;
        }
        $fn4256 $tmp4255 = $tmp4254->methods[0];
        panda$core$Bit $tmp4257 = $tmp4255(p$Iter4247);
        panda$core$Bit $tmp4258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4257);
        if (!$tmp4258.value) goto $l4253;
        {
            ITable* $tmp4260 = p$Iter4247->$class->itable;
            while ($tmp4260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4260 = $tmp4260->next;
            }
            $fn4262 $tmp4261 = $tmp4260->methods[1];
            panda$core$Object* $tmp4263 = $tmp4261(p$Iter4247);
            p4259 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4263);
            org$pandalanguage$pandac$Variable* $tmp4264 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4264->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4264->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4264, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4259->name, p4259->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4244, ((org$pandalanguage$pandac$Symbol*) $tmp4264));
        }
        goto $l4252;
        $l4253:;
    }
    self->symbolTable = symbols4244;
    panda$collections$Array* $tmp4267 = (panda$collections$Array*) malloc(40);
    $tmp4267->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4267->refCount.value = 1;
    panda$collections$Array$init($tmp4267);
    fieldInitializers4266 = $tmp4267;
    panda$core$Bit $tmp4269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4269.value) {
    {
        {
            panda$core$Object* $tmp4271 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4272 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4271)->fields)->$class->itable;
            while ($tmp4272->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4272 = $tmp4272->next;
            }
            $fn4274 $tmp4273 = $tmp4272->methods[0];
            panda$collections$Iterator* $tmp4275 = $tmp4273(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4271)->fields));
            f$Iter4270 = $tmp4275;
            $l4276:;
            ITable* $tmp4278 = f$Iter4270->$class->itable;
            while ($tmp4278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4278 = $tmp4278->next;
            }
            $fn4280 $tmp4279 = $tmp4278->methods[0];
            panda$core$Bit $tmp4281 = $tmp4279(f$Iter4270);
            panda$core$Bit $tmp4282 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4281);
            if (!$tmp4282.value) goto $l4277;
            {
                ITable* $tmp4284 = f$Iter4270->$class->itable;
                while ($tmp4284->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4284 = $tmp4284->next;
                }
                $fn4286 $tmp4285 = $tmp4284->methods[1];
                panda$core$Object* $tmp4287 = $tmp4285(f$Iter4270);
                f4283 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4287);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4283);
                panda$core$Bit $tmp4289 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4283->annotations);
                panda$core$Bit $tmp4290 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4289);
                bool $tmp4288 = $tmp4290.value;
                if (!$tmp4288) goto $l4291;
                $tmp4288 = ((panda$core$Bit) { f4283->value != NULL }).value;
                $l4291:;
                panda$core$Bit $tmp4292 = { $tmp4288 };
                if ($tmp4292.value) {
                {
                    panda$collections$Array* $tmp4294 = (panda$collections$Array*) malloc(40);
                    $tmp4294->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4294->refCount.value = 1;
                    panda$collections$Array$init($tmp4294);
                    children4293 = $tmp4294;
                    org$pandalanguage$pandac$IRNode* $tmp4296 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4296->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4296->refCount.value = 1;
                    panda$core$Object* $tmp4298 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4299 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4298));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4296, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4299);
                    panda$collections$Array$add$panda$collections$Array$T(children4293, ((panda$core$Object*) $tmp4296));
                    org$pandalanguage$pandac$IRNode* $tmp4301 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4301->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4301->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4301, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4283->type, ((panda$core$Object*) f4283), ((panda$collections$ListView*) children4293));
                    fieldRef4300 = $tmp4301;
                    panda$collections$Array$clear(children4293);
                    panda$collections$Array$add$panda$collections$Array$T(children4293, ((panda$core$Object*) fieldRef4300));
                    panda$collections$Array$add$panda$collections$Array$T(children4293, ((panda$core$Object*) f4283->value));
                    org$pandalanguage$pandac$IRNode* $tmp4303 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4303->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4303, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4283)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4293));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4266, ((panda$core$Object*) $tmp4303));
                }
                }
            }
            goto $l4276;
            $l4277:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4306 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4305 = $tmp4306;
    if (((panda$core$Bit) { compiled4305 != NULL }).value) {
    {
        panda$core$Int64 $tmp4307 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4266);
        panda$core$Bit $tmp4308 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4307, ((panda$core$Int64) { 0 }));
        if ($tmp4308.value) {
        {
            panda$collections$Array* $tmp4310 = (panda$collections$Array*) malloc(40);
            $tmp4310->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4310->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4310, ((panda$collections$ListView*) fieldInitializers4266));
            children4309 = $tmp4310;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4309, ((panda$collections$CollectionView*) compiled4305->children));
            org$pandalanguage$pandac$IRNode* $tmp4312 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4312->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4312->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4312, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4309));
            compiled4305 = $tmp4312;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4244) }).value);
    self->symbolTable = old4242;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4314 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4314.value) {
    {
        p_m->compiledBody = compiled4305;
    }
    }
    return compiled4305;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4315;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4316 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4315 = $tmp4316;
        if (((panda$core$Bit) { compiled4315 != NULL }).value) {
        {
            ITable* $tmp4317 = self->codeGenerator->$class->itable;
            while ($tmp4317->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4317 = $tmp4317->next;
            }
            $fn4319 $tmp4318 = $tmp4317->methods[3];
            $tmp4318(self->codeGenerator, p_m, compiled4315);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4320 = self->codeGenerator->$class->itable;
        while ($tmp4320->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4320 = $tmp4320->next;
        }
        $fn4322 $tmp4321 = $tmp4320->methods[2];
        $tmp4321(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4323;
    org$pandalanguage$pandac$ClassDecl* inner4335;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4324 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4324->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4324 = $tmp4324->next;
        }
        $fn4326 $tmp4325 = $tmp4324->methods[0];
        panda$collections$Iterator* $tmp4327 = $tmp4325(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4323 = $tmp4327;
        $l4328:;
        ITable* $tmp4330 = inner$Iter4323->$class->itable;
        while ($tmp4330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4330 = $tmp4330->next;
        }
        $fn4332 $tmp4331 = $tmp4330->methods[0];
        panda$core$Bit $tmp4333 = $tmp4331(inner$Iter4323);
        panda$core$Bit $tmp4334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4333);
        if (!$tmp4334.value) goto $l4329;
        {
            ITable* $tmp4336 = inner$Iter4323->$class->itable;
            while ($tmp4336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4336 = $tmp4336->next;
            }
            $fn4338 $tmp4337 = $tmp4336->methods[1];
            panda$core$Object* $tmp4339 = $tmp4337(inner$Iter4323);
            inner4335 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4339);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4335);
        }
        goto $l4328;
        $l4329:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4347;
    panda$collections$Iterator* m$Iter4352;
    org$pandalanguage$pandac$MethodDecl* m4364;
    org$pandalanguage$pandac$ClassDecl* next4374;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4340 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4340.value) {
    {
        ITable* $tmp4341 = self->codeGenerator->$class->itable;
        while ($tmp4341->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4341 = $tmp4341->next;
        }
        $fn4343 $tmp4342 = $tmp4341->methods[1];
        $tmp4342(self->codeGenerator, p_cl);
        ITable* $tmp4344 = self->codeGenerator->$class->itable;
        while ($tmp4344->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4344 = $tmp4344->next;
        }
        $fn4346 $tmp4345 = $tmp4344->methods[4];
        $tmp4345(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4347 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4348 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4348;
    ITable* $tmp4349 = self->codeGenerator->$class->itable;
    while ($tmp4349->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4349 = $tmp4349->next;
    }
    $fn4351 $tmp4350 = $tmp4349->methods[1];
    $tmp4350(self->codeGenerator, p_cl);
    {
        ITable* $tmp4353 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4353->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4353 = $tmp4353->next;
        }
        $fn4355 $tmp4354 = $tmp4353->methods[0];
        panda$collections$Iterator* $tmp4356 = $tmp4354(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4352 = $tmp4356;
        $l4357:;
        ITable* $tmp4359 = m$Iter4352->$class->itable;
        while ($tmp4359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4359 = $tmp4359->next;
        }
        $fn4361 $tmp4360 = $tmp4359->methods[0];
        panda$core$Bit $tmp4362 = $tmp4360(m$Iter4352);
        panda$core$Bit $tmp4363 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4362);
        if (!$tmp4363.value) goto $l4358;
        {
            ITable* $tmp4365 = m$Iter4352->$class->itable;
            while ($tmp4365->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4365 = $tmp4365->next;
            }
            $fn4367 $tmp4366 = $tmp4365->methods[1];
            panda$core$Object* $tmp4368 = $tmp4366(m$Iter4352);
            m4364 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4368);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4364);
        }
        goto $l4357;
        $l4358:;
    }
    ITable* $tmp4369 = self->codeGenerator->$class->itable;
    while ($tmp4369->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4369 = $tmp4369->next;
    }
    $fn4371 $tmp4370 = $tmp4369->methods[4];
    $tmp4370(self->codeGenerator, p_cl);
    self->symbolTable = old4347;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4372 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4373 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4372, ((panda$core$Int64) { 0 }));
    if ($tmp4373.value) {
    {
        panda$core$Object* $tmp4375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4374 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4375);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4374);
    }
    }
    panda$core$Int64 $tmp4376 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4376, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4377.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4378;
    org$pandalanguage$pandac$ASTNode* parsed4382;
    panda$collections$Iterator* cl$Iter4386;
    org$pandalanguage$pandac$ClassDecl* cl4398;
    panda$core$Object* $tmp4379 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4378 = ((panda$collections$ListView*) $tmp4379);
    if (((panda$core$Bit) { result4378 == NULL }).value) {
    {
        panda$core$String* $tmp4380 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4381) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4380);
        org$pandalanguage$pandac$ASTNode* $tmp4384 = (($fn4383) self->parser->$class->vtable[68])(self->parser);
        parsed4382 = $tmp4384;
        if (((panda$core$Bit) { parsed4382 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4385 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4382);
            result4378 = $tmp4385;
            {
                ITable* $tmp4387 = ((panda$collections$Iterable*) result4378)->$class->itable;
                while ($tmp4387->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4387 = $tmp4387->next;
                }
                $fn4389 $tmp4388 = $tmp4387->methods[0];
                panda$collections$Iterator* $tmp4390 = $tmp4388(((panda$collections$Iterable*) result4378));
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
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4398)->name), ((panda$core$Object*) cl4398));
                }
                goto $l4391;
                $l4392:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4403 = (panda$collections$Array*) malloc(40);
            $tmp4403->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4403->refCount.value = 1;
            panda$collections$Array$init($tmp4403);
            result4378 = ((panda$collections$ListView*) $tmp4403);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4378));
    }
    }
    return result4378;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4405;
    panda$collections$Iterator* cl$Iter4407;
    org$pandalanguage$pandac$ClassDecl* cl4419;
    panda$collections$ListView* $tmp4406 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4405 = $tmp4406;
    {
        ITable* $tmp4408 = ((panda$collections$Iterable*) classes4405)->$class->itable;
        while ($tmp4408->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4408 = $tmp4408->next;
        }
        $fn4410 $tmp4409 = $tmp4408->methods[0];
        panda$collections$Iterator* $tmp4411 = $tmp4409(((panda$collections$Iterable*) classes4405));
        cl$Iter4407 = $tmp4411;
        $l4412:;
        ITable* $tmp4414 = cl$Iter4407->$class->itable;
        while ($tmp4414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4414 = $tmp4414->next;
        }
        $fn4416 $tmp4415 = $tmp4414->methods[0];
        panda$core$Bit $tmp4417 = $tmp4415(cl$Iter4407);
        panda$core$Bit $tmp4418 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4417);
        if (!$tmp4418.value) goto $l4413;
        {
            ITable* $tmp4420 = cl$Iter4407->$class->itable;
            while ($tmp4420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4420 = $tmp4420->next;
            }
            $fn4422 $tmp4421 = $tmp4420->methods[1];
            panda$core$Object* $tmp4423 = $tmp4421(cl$Iter4407);
            cl4419 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4423);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4419);
        }
        goto $l4412;
        $l4413:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4424 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4424)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4425 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4425;
        panda$core$String* $tmp4427 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4426, $tmp4427);
        panda$core$String* $tmp4430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4428, &$s4429);
        panda$core$String* $tmp4431 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4430, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4431, &$s4432);
        panda$core$String* $tmp4434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4433, p_msg);
        panda$core$String* $tmp4436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4434, &$s4435);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4436));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4437 = self->codeGenerator->$class->itable;
    while ($tmp4437->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4437 = $tmp4437->next;
    }
    $fn4439 $tmp4438 = $tmp4437->methods[5];
    $tmp4438(self->codeGenerator);
}

