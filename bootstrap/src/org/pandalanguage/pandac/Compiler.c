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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Position.h"
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
typedef panda$collections$Iterator* (*$fn370)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn382)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn436)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn442)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn448)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn459)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn465)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn471)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn477)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn483)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn489)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn497)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn503)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn509)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn588)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn594)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn600)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn616)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn622)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn628)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn654)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn660)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn666)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn720)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn726)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn732)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn741)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn763)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn798)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn806)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn812)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn818)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn829)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn835)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn841)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn864)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn870)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn876)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn925)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn931)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn937)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn950)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn962)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn977)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn983)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn989)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1004)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1010)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1016)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1030)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1036)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1042)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1055)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1061)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1067)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1122)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1128)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1134)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1153)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1173)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1179)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1270)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1335)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1341)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1347)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1373)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1379)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1385)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1502)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1508)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1514)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1642)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1648)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1654)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1701)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1707)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1713)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1803)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1830)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1857)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1874)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1880)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1886)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1898)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1921)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1995)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2018)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2094)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2125)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2168)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2217)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2252)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2642)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2648)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2654)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2798)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3022)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3038)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3044)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3050)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3146)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3152)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3158)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3341)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3347)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3353)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3483)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3489)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3495)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3521)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3527)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3533)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3637)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3643)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3649)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3817)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3823)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3829)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3907)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3913)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3919)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3980)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3992)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4056)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4062)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4068)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4119)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4131)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4137)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4143)(panda$collections$Iterator*);
typedef void (*$fn4176)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4179)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4183)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4189)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4195)(panda$collections$Iterator*);
typedef void (*$fn4200)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4203)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4208)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4224)(panda$collections$Iterator*);
typedef void (*$fn4228)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4239)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4241)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4247)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4259)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4268)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4274)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4280)(panda$collections$Iterator*);
typedef panda$core$Char8$nullable (*$fn4307)(panda$io$InputStream*);
typedef void (*$fn4329)(panda$core$Object*);
typedef void (*$fn4345)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 1 };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, 1 };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 1 };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, 1 };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1 };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 23, 1 };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1 };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 33, 1 };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20\x6D\x65\x74\x68\x6F\x64\x20", 45, 1 };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 26, 1 };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, 1 };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1 };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, 1 };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
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
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, 1 };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
    panda$collections$Iterator* rawS$Iter367;
    org$pandalanguage$pandac$Type* rawS379;
    org$pandalanguage$pandac$Type* s384;
    org$pandalanguage$pandac$ClassDecl* sClass386;
    panda$collections$Iterator* m$Iter433;
    org$pandalanguage$pandac$MethodDecl* m445;
    panda$collections$Iterator* intf$Iter456;
    org$pandalanguage$pandac$Type* intf468;
    panda$collections$Iterator* p$Iter474;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p486;
    org$pandalanguage$pandac$ClassDecl* cl491;
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
    {
        ITable* $tmp368 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp368->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp368 = $tmp368->next;
        }
        $fn370 $tmp369 = $tmp368->methods[0];
        panda$collections$Iterator* $tmp371 = $tmp369(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter367 = $tmp371;
        $l372:;
        ITable* $tmp374 = rawS$Iter367->$class->itable;
        while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp374 = $tmp374->next;
        }
        $fn376 $tmp375 = $tmp374->methods[0];
        panda$core$Bit $tmp377 = $tmp375(rawS$Iter367);
        panda$core$Bit $tmp378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp377);
        if (!$tmp378.value) goto $l373;
        {
            ITable* $tmp380 = rawS$Iter367->$class->itable;
            while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp380 = $tmp380->next;
            }
            $fn382 $tmp381 = $tmp380->methods[1];
            panda$core$Object* $tmp383 = $tmp381(rawS$Iter367);
            rawS379 = ((org$pandalanguage$pandac$Type*) $tmp383);
            org$pandalanguage$pandac$Type* $tmp385 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS379, ((panda$core$Bit) { false }));
            s384 = $tmp385;
            if (((panda$core$Bit) { s384 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp387 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s384);
                sClass386 = $tmp387;
                if (((panda$core$Bit) { sClass386 != NULL }).value) {
                {
                    panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass386->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp388.value) {
                    {
                        panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp389.value) {
                        {
                            panda$core$String* $tmp391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s390, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp391, &$s392);
                            panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s394, ((org$pandalanguage$pandac$Symbol*) s384)->name);
                            panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp395, &$s396);
                            panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp393, $tmp397);
                            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s384)->offset, $tmp398);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s384;
                            panda$core$Int64 $tmp399 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp400 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp399, ((panda$core$Int64) { 0 }));
                            if ($tmp400.value) {
                            {
                                panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s401, ((panda$core$Object*) s384));
                                panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s403);
                                panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
                                panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s408);
                                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s384)->offset, $tmp409);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s410, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, &$s412);
                            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s384)->offset, $tmp413);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass386->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp414.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s384));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l372;
        $l373:;
    }
    bool $tmp415 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp415) goto $l416;
    panda$core$Bit $tmp418 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s417);
    $tmp415 = $tmp418.value;
    $l416:;
    panda$core$Bit $tmp419 = { $tmp415 };
    if ($tmp419.value) {
    {
        org$pandalanguage$pandac$Type* $tmp420 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp420;
    }
    }
    bool $tmp422 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp422) goto $l423;
    panda$core$Bit $tmp424 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp425 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp424);
    $tmp422 = $tmp425.value;
    $l423:;
    panda$core$Bit $tmp426 = { $tmp422 };
    bool $tmp421 = $tmp426.value;
    if (!$tmp421) goto $l427;
    panda$core$Bit $tmp429 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s428);
    $tmp421 = $tmp429.value;
    $l427:;
    panda$core$Bit $tmp430 = { $tmp421 };
    if ($tmp430.value) {
    {
        panda$core$Int64 $tmp431 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp432 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp431);
        p_cl->annotations->flags = $tmp432;
        {
            ITable* $tmp434 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp434->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp434 = $tmp434->next;
            }
            $fn436 $tmp435 = $tmp434->methods[0];
            panda$collections$Iterator* $tmp437 = $tmp435(((panda$collections$Iterable*) p_cl->methods));
            m$Iter433 = $tmp437;
            $l438:;
            ITable* $tmp440 = m$Iter433->$class->itable;
            while ($tmp440->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp440 = $tmp440->next;
            }
            $fn442 $tmp441 = $tmp440->methods[0];
            panda$core$Bit $tmp443 = $tmp441(m$Iter433);
            panda$core$Bit $tmp444 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp443);
            if (!$tmp444.value) goto $l439;
            {
                ITable* $tmp446 = m$Iter433->$class->itable;
                while ($tmp446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp446 = $tmp446->next;
                }
                $fn448 $tmp447 = $tmp446->methods[1];
                panda$core$Object* $tmp449 = $tmp447(m$Iter433);
                m445 = ((org$pandalanguage$pandac$MethodDecl*) $tmp449);
                panda$core$Int64 $tmp450 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp451 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m445->annotations->flags, $tmp450);
                m445->annotations->flags = $tmp451;
                panda$core$Bit $tmp452 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m445->annotations, m445->body);
                if ($tmp452.value) {
                {
                    panda$core$Int64 $tmp453 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp454 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m445->annotations->flags, $tmp453);
                    m445->annotations->flags = $tmp454;
                }
                }
            }
            goto $l438;
            $l439:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp455 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, $tmp455, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp457 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp457 = $tmp457->next;
        }
        $fn459 $tmp458 = $tmp457->methods[0];
        panda$collections$Iterator* $tmp460 = $tmp458(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter456 = $tmp460;
        $l461:;
        ITable* $tmp463 = intf$Iter456->$class->itable;
        while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp463 = $tmp463->next;
        }
        $fn465 $tmp464 = $tmp463->methods[0];
        panda$core$Bit $tmp466 = $tmp464(intf$Iter456);
        panda$core$Bit $tmp467 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp466);
        if (!$tmp467.value) goto $l462;
        {
            ITable* $tmp469 = intf$Iter456->$class->itable;
            while ($tmp469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp469 = $tmp469->next;
            }
            $fn471 $tmp470 = $tmp469->methods[1];
            panda$core$Object* $tmp472 = $tmp470(intf$Iter456);
            intf468 = ((org$pandalanguage$pandac$Type*) $tmp472);
            org$pandalanguage$pandac$ClassDecl* $tmp473 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf468);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, $tmp473, intf468);
        }
        goto $l461;
        $l462:;
    }
    {
        ITable* $tmp475 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp475 = $tmp475->next;
        }
        $fn477 $tmp476 = $tmp475->methods[0];
        panda$collections$Iterator* $tmp478 = $tmp476(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter474 = $tmp478;
        $l479:;
        ITable* $tmp481 = p$Iter474->$class->itable;
        while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp481 = $tmp481->next;
        }
        $fn483 $tmp482 = $tmp481->methods[0];
        panda$core$Bit $tmp484 = $tmp482(p$Iter474);
        panda$core$Bit $tmp485 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp484);
        if (!$tmp485.value) goto $l480;
        {
            ITable* $tmp487 = p$Iter474->$class->itable;
            while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp487 = $tmp487->next;
            }
            $fn489 $tmp488 = $tmp487->methods[1];
            panda$core$Object* $tmp490 = $tmp488(p$Iter474);
            p486 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp490);
            org$pandalanguage$pandac$ClassDecl* $tmp492 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p486->bound);
            cl491 = $tmp492;
            if (((panda$core$Bit) { cl491 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl491)->offset, cl491, p486->bound);
            }
            }
        }
        goto $l479;
        $l480:;
    }
    self->symbolTable = old347;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old493;
    panda$collections$Iterator* p$Iter494;
    org$pandalanguage$pandac$MethodDecl$Parameter* p506;
    org$pandalanguage$pandac$MethodDecl* overridden513;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old493 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp495 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp495->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp495 = $tmp495->next;
        }
        $fn497 $tmp496 = $tmp495->methods[0];
        panda$collections$Iterator* $tmp498 = $tmp496(((panda$collections$Iterable*) p_m->parameters));
        p$Iter494 = $tmp498;
        $l499:;
        ITable* $tmp501 = p$Iter494->$class->itable;
        while ($tmp501->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp501 = $tmp501->next;
        }
        $fn503 $tmp502 = $tmp501->methods[0];
        panda$core$Bit $tmp504 = $tmp502(p$Iter494);
        panda$core$Bit $tmp505 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp504);
        if (!$tmp505.value) goto $l500;
        {
            ITable* $tmp507 = p$Iter494->$class->itable;
            while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp507 = $tmp507->next;
            }
            $fn509 $tmp508 = $tmp507->methods[1];
            panda$core$Object* $tmp510 = $tmp508(p$Iter494);
            p506 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp510);
            org$pandalanguage$pandac$Type* $tmp511 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p506->type);
            p506->type = $tmp511;
        }
        goto $l499;
        $l500:;
    }
    org$pandalanguage$pandac$Type* $tmp512 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp512;
    p_m->resolved = ((panda$core$Bit) { true });
    org$pandalanguage$pandac$MethodDecl* $tmp514 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    overridden513 = $tmp514;
    if (((panda$core$Bit) { overridden513 != NULL }).value) {
    {
        panda$core$Bit $tmp515 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp516 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp515);
        if ($tmp516.value) {
        {
            panda$core$String* $tmp518 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s517, $tmp518);
            panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp519, &$s520);
            panda$core$String* $tmp522 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden513);
            panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp521, $tmp522);
            panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp523, &$s524);
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, &$s526);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp527);
        }
        }
        panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
        bool $tmp528 = $tmp529.value;
        if (!$tmp528) goto $l530;
        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden513->methodKind, ((panda$core$Int64) { 58 }));
        $tmp528 = $tmp531.value;
        $l530:;
        panda$core$Bit $tmp532 = { $tmp528 };
        if ($tmp532.value) {
        {
            panda$core$String* $tmp534 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s533, $tmp534);
            panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp535, &$s536);
            panda$core$String* $tmp538 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden513);
            panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp537, $tmp538);
            panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp539, &$s540);
            panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp543);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp544 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    if ($tmp544.value) {
    {
        panda$core$String* $tmp546 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
        panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s545, $tmp546);
        panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s548);
        panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s550);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp551);
    }
    }
    }
    self->symbolTable = old493;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old552;
    org$pandalanguage$pandac$Type* resolved555;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old552 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp553 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp554 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp553);
    if ($tmp554.value) {
    {
        org$pandalanguage$pandac$Type* $tmp556 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved555 = $tmp556;
        if (((panda$core$Bit) { resolved555 != NULL }).value) {
        {
            p_f->type = resolved555;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp557 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp558 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp557, p_f->type);
                p_f->value = $tmp558;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old552;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s559);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old552;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp560 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp560;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old552;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp561 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp561;
    org$pandalanguage$pandac$IRNode* $tmp562 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp562;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    self->symbolTable = old552;
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
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s563);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s564);
            panda$core$Object* $tmp565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp565)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s566);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp567 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp568 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp567);
            return $tmp568;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp569 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp569) goto $l570;
    org$pandalanguage$pandac$Type* $tmp571 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp572 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp571);
    $tmp569 = ((panda$core$Bit) { $tmp572.nonnull }).value;
    $l570:;
    panda$core$Bit $tmp573 = { $tmp569 };
    return $tmp573;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result574;
    org$pandalanguage$pandac$ClassDecl* s582;
    panda$collections$Iterator* f$Iter585;
    org$pandalanguage$pandac$FieldDecl* f597;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp575 = (panda$collections$Array*) malloc(40);
    $tmp575->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp575->refCount.value = 1;
    panda$collections$Array$init($tmp575);
    result574 = $tmp575;
    panda$core$Bit $tmp578 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp579 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp578);
    bool $tmp577 = $tmp579.value;
    if (!$tmp577) goto $l580;
    $tmp577 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l580:;
    panda$core$Bit $tmp581 = { $tmp577 };
    if ($tmp581.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp583 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s582 = $tmp583;
        if (((panda$core$Bit) { s582 != NULL }).value) {
        {
            panda$collections$ListView* $tmp584 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s582);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result574, ((panda$collections$CollectionView*) $tmp584));
        }
        }
    }
    }
    {
        ITable* $tmp586 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp586->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp586 = $tmp586->next;
        }
        $fn588 $tmp587 = $tmp586->methods[0];
        panda$collections$Iterator* $tmp589 = $tmp587(((panda$collections$Iterable*) p_cl->fields));
        f$Iter585 = $tmp589;
        $l590:;
        ITable* $tmp592 = f$Iter585->$class->itable;
        while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp592 = $tmp592->next;
        }
        $fn594 $tmp593 = $tmp592->methods[0];
        panda$core$Bit $tmp595 = $tmp593(f$Iter585);
        panda$core$Bit $tmp596 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp595);
        if (!$tmp596.value) goto $l591;
        {
            ITable* $tmp598 = f$Iter585->$class->itable;
            while ($tmp598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp598 = $tmp598->next;
            }
            $fn600 $tmp599 = $tmp598->methods[1];
            panda$core$Object* $tmp601 = $tmp599(f$Iter585);
            f597 = ((org$pandalanguage$pandac$FieldDecl*) $tmp601);
            panda$core$Bit $tmp602 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f597->annotations);
            panda$core$Bit $tmp603 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp602);
            if ($tmp603.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result574, ((panda$core$Object*) f597));
            }
            }
        }
        goto $l590;
        $l591:;
    }
    return ((panda$collections$ListView*) result574);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result604;
    panda$core$String* suffix606;
    panda$core$Bit found612;
    panda$collections$Iterator* dir$Iter613;
    panda$io$File* dir625;
    panda$io$File* f630;
    panda$core$Bit $tmp632;
    panda$core$String$Index$nullable index634;
    org$pandalanguage$pandac$ClassDecl* parent637;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp638;
    panda$core$Object* $tmp605 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result604 = ((org$pandalanguage$pandac$ClassDecl*) $tmp605);
    if (((panda$core$Bit) { result604 == NULL }).value) {
    {
        panda$core$String* $tmp609 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s607, &$s608);
        panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s610);
        suffix606 = $tmp611;
        found612 = ((panda$core$Bit) { false });
        {
            ITable* $tmp614 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp614->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp614 = $tmp614->next;
            }
            $fn616 $tmp615 = $tmp614->methods[0];
            panda$collections$Iterator* $tmp617 = $tmp615(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter613 = $tmp617;
            $l618:;
            ITable* $tmp620 = dir$Iter613->$class->itable;
            while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp620 = $tmp620->next;
            }
            $fn622 $tmp621 = $tmp620->methods[0];
            panda$core$Bit $tmp623 = $tmp621(dir$Iter613);
            panda$core$Bit $tmp624 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp623);
            if (!$tmp624.value) goto $l619;
            {
                ITable* $tmp626 = dir$Iter613->$class->itable;
                while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp626 = $tmp626->next;
                }
                $fn628 $tmp627 = $tmp626->methods[1];
                panda$core$Object* $tmp629 = $tmp627(dir$Iter613);
                dir625 = ((panda$io$File*) $tmp629);
                panda$io$File* $tmp631 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir625, suffix606);
                f630 = $tmp631;
                panda$io$File$exists$R$panda$core$Bit(&$tmp632, f630);
                if ($tmp632.value) {
                {
                    found612 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f630);
                    panda$core$Object* $tmp633 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result604 = ((org$pandalanguage$pandac$ClassDecl*) $tmp633);
                }
                }
            }
            goto $l618;
            $l619:;
        }
    }
    }
    if (((panda$core$Bit) { result604 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp636 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s635);
        index634 = $tmp636;
        if (((panda$core$Bit) { index634.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp638, ((panda$core$String$Index$nullable) { .nonnull = false }), index634, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp639 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp638);
            org$pandalanguage$pandac$ClassDecl* $tmp640 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp639);
            parent637 = $tmp640;
            if (((panda$core$Bit) { parent637 != NULL }).value) {
            {
                panda$core$Object* $tmp641 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result604 = ((org$pandalanguage$pandac$ClassDecl*) $tmp641);
            }
            }
        }
        }
    }
    }
    return result604;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result642;
    panda$core$String* suffix644;
    panda$core$Bit found650;
    panda$collections$Iterator* dir$Iter651;
    panda$io$File* dir663;
    panda$io$File* f668;
    panda$core$Bit $tmp670;
    panda$core$Int64 oldErrorCount671;
    panda$core$Object* $tmp643 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result642 = ((org$pandalanguage$pandac$ClassDecl*) $tmp643);
    if (((panda$core$Bit) { result642 == NULL }).value) {
    {
        panda$core$String* $tmp647 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s645, &$s646);
        panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, &$s648);
        suffix644 = $tmp649;
        found650 = ((panda$core$Bit) { false });
        {
            ITable* $tmp652 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp652->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp652 = $tmp652->next;
            }
            $fn654 $tmp653 = $tmp652->methods[0];
            panda$collections$Iterator* $tmp655 = $tmp653(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter651 = $tmp655;
            $l656:;
            ITable* $tmp658 = dir$Iter651->$class->itable;
            while ($tmp658->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp658 = $tmp658->next;
            }
            $fn660 $tmp659 = $tmp658->methods[0];
            panda$core$Bit $tmp661 = $tmp659(dir$Iter651);
            panda$core$Bit $tmp662 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp661);
            if (!$tmp662.value) goto $l657;
            {
                ITable* $tmp664 = dir$Iter651->$class->itable;
                while ($tmp664->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp664 = $tmp664->next;
                }
                $fn666 $tmp665 = $tmp664->methods[1];
                panda$core$Object* $tmp667 = $tmp665(dir$Iter651);
                dir663 = ((panda$io$File*) $tmp667);
                panda$io$File* $tmp669 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir663, suffix644);
                f668 = $tmp669;
                panda$io$File$exists$R$panda$core$Bit(&$tmp670, f668);
                if ($tmp670.value) {
                {
                    found650 = ((panda$core$Bit) { true });
                    oldErrorCount671 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f668);
                    panda$core$Object* $tmp672 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result642 = ((org$pandalanguage$pandac$ClassDecl*) $tmp672);
                    bool $tmp673 = ((panda$core$Bit) { result642 == NULL }).value;
                    if (!$tmp673) goto $l674;
                    panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount671);
                    $tmp673 = $tmp675.value;
                    $l674:;
                    panda$core$Bit $tmp676 = { $tmp673 };
                    if ($tmp676.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp677 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp677->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp677->refCount.value = 1;
                        panda$core$String* $tmp679 = panda$io$File$name$R$panda$core$String(f668);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp677, $tmp679, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s680, ((panda$core$Object*) f668));
                        panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp681, &$s682);
                        panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp683, p_fullName);
                        panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp684, &$s685);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp677, $tmp686);
                    }
                    }
                }
                }
            }
            goto $l656;
            $l657:;
        }
        panda$core$Bit $tmp687 = panda$core$Bit$$NOT$R$panda$core$Bit(found650);
        if ($tmp687.value) {
        {
            panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s688, suffix644);
            panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, &$s690);
            panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp691, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, &$s693);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp694);
        }
        }
    }
    }
    return result642;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type698;
    org$pandalanguage$pandac$ClassDecl* result705;
    org$pandalanguage$pandac$Annotations* annotations707;
    panda$collections$Array* supertypes713;
    panda$collections$Iterator* intf$Iter717;
    org$pandalanguage$pandac$Type* intf729;
    panda$collections$HashMap* aliases735;
    panda$core$Range$LTpanda$core$Int64$GT $tmp738;
    panda$collections$Iterator* m$Iter783;
    org$pandalanguage$pandac$MethodDecl* m795;
    panda$collections$Array* parameters800;
    panda$collections$Iterator* p$Iter803;
    org$pandalanguage$pandac$MethodDecl$Parameter* p815;
    org$pandalanguage$pandac$MethodDecl* clone823;
    panda$collections$Iterator* f$Iter826;
    org$pandalanguage$pandac$FieldDecl* f838;
    org$pandalanguage$pandac$FieldDecl* clone843;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp696 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s695);
    panda$core$Bit $tmp697 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp696);
    PANDA_ASSERT($tmp697.value);
    org$pandalanguage$pandac$Type* $tmp699 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type698 = $tmp699;
    panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type698->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp700.value) {
    {
        panda$core$Object* $tmp701 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type698->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp702 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp701));
        return $tmp702;
    }
    }
    panda$core$Bit $tmp703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type698->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp703.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type698->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp704.value);
    panda$core$Object* $tmp706 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type698)->name));
    result705 = ((org$pandalanguage$pandac$ClassDecl*) $tmp706);
    if (((panda$core$Bit) { result705 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp708 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp708->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp708->refCount.value = 1;
        panda$core$Int64 $tmp710 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp711 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp710);
        panda$core$Int64 $tmp712 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp711);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp708, $tmp712);
        annotations707 = $tmp708;
        panda$collections$Array* $tmp714 = (panda$collections$Array*) malloc(40);
        $tmp714->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp714->refCount.value = 1;
        panda$collections$Array$init($tmp714);
        supertypes713 = $tmp714;
        org$pandalanguage$pandac$Type* $tmp716 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type698, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes713, ((panda$core$Object*) $tmp716));
        {
            ITable* $tmp718 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp718 = $tmp718->next;
            }
            $fn720 $tmp719 = $tmp718->methods[0];
            panda$collections$Iterator* $tmp721 = $tmp719(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter717 = $tmp721;
            $l722:;
            ITable* $tmp724 = intf$Iter717->$class->itable;
            while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp724 = $tmp724->next;
            }
            $fn726 $tmp725 = $tmp724->methods[0];
            panda$core$Bit $tmp727 = $tmp725(intf$Iter717);
            panda$core$Bit $tmp728 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp727);
            if (!$tmp728.value) goto $l723;
            {
                ITable* $tmp730 = intf$Iter717->$class->itable;
                while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp730 = $tmp730->next;
                }
                $fn732 $tmp731 = $tmp730->methods[1];
                panda$core$Object* $tmp733 = $tmp731(intf$Iter717);
                intf729 = ((org$pandalanguage$pandac$Type*) $tmp733);
                org$pandalanguage$pandac$Type* $tmp734 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type698, intf729);
                panda$collections$Array$add$panda$collections$Array$T(supertypes713, ((panda$core$Object*) $tmp734));
            }
            goto $l722;
            $l723:;
        }
        panda$collections$HashMap* $tmp736 = (panda$collections$HashMap*) malloc(56);
        $tmp736->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp736->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp736, p_cl->aliases);
        aliases735 = $tmp736;
        ITable* $tmp739 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp739->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp739 = $tmp739->next;
        }
        $fn741 $tmp740 = $tmp739->methods[0];
        panda$core$Int64 $tmp742 = $tmp740(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp738, ((panda$core$Int64) { 0 }), $tmp742, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp744 = $tmp738.start.value;
        panda$core$Int64 i743 = { $tmp744 };
        int64_t $tmp746 = $tmp738.end.value;
        int64_t $tmp747 = $tmp738.step.value;
        bool $tmp748 = $tmp738.inclusive.value;
        bool $tmp755 = $tmp747 > 0;
        if ($tmp755) goto $l753; else goto $l754;
        $l753:;
        if ($tmp748) goto $l756; else goto $l757;
        $l756:;
        if ($tmp744 <= $tmp746) goto $l749; else goto $l751;
        $l757:;
        if ($tmp744 < $tmp746) goto $l749; else goto $l751;
        $l754:;
        if ($tmp748) goto $l758; else goto $l759;
        $l758:;
        if ($tmp744 >= $tmp746) goto $l749; else goto $l751;
        $l759:;
        if ($tmp744 > $tmp746) goto $l749; else goto $l751;
        $l749:;
        {
            ITable* $tmp761 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp761->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp761 = $tmp761->next;
            }
            $fn763 $tmp762 = $tmp761->methods[0];
            panda$core$Object* $tmp764 = $tmp762(((panda$collections$ListView*) p_cl->parameters), i743);
            panda$core$Int64 $tmp765 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i743, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp766 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type698->subtypes, $tmp765);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases735, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp764))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp766))->name));
        }
        $l752:;
        if ($tmp755) goto $l768; else goto $l769;
        $l768:;
        int64_t $tmp770 = $tmp746 - i743.value;
        if ($tmp748) goto $l771; else goto $l772;
        $l771:;
        if ($tmp770 >= $tmp747) goto $l767; else goto $l751;
        $l772:;
        if ($tmp770 > $tmp747) goto $l767; else goto $l751;
        $l769:;
        int64_t $tmp774 = i743.value - $tmp746;
        if ($tmp748) goto $l775; else goto $l776;
        $l775:;
        if ($tmp774 >= -$tmp747) goto $l767; else goto $l751;
        $l776:;
        if ($tmp774 > -$tmp747) goto $l767; else goto $l751;
        $l767:;
        i743.value += $tmp747;
        goto $l749;
        $l751:;
        org$pandalanguage$pandac$ClassDecl* $tmp778 = (org$pandalanguage$pandac$ClassDecl*) malloc(169);
        $tmp778->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp778->refCount.value = 1;
        panda$collections$Array* $tmp780 = (panda$collections$Array*) malloc(40);
        $tmp780->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp780->refCount.value = 1;
        panda$collections$Array$init($tmp780);
        panda$core$Object* $tmp782 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp778, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, ((panda$collections$MapView*) aliases735), p_cl->doccomment, annotations707, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type698)->name, ((panda$collections$ListView*) supertypes713), $tmp780, ((org$pandalanguage$pandac$SymbolTable*) $tmp782));
        result705 = $tmp778;
        result705->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp784 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp784 = $tmp784->next;
            }
            $fn786 $tmp785 = $tmp784->methods[0];
            panda$collections$Iterator* $tmp787 = $tmp785(((panda$collections$Iterable*) p_cl->methods));
            m$Iter783 = $tmp787;
            $l788:;
            ITable* $tmp790 = m$Iter783->$class->itable;
            while ($tmp790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp790 = $tmp790->next;
            }
            $fn792 $tmp791 = $tmp790->methods[0];
            panda$core$Bit $tmp793 = $tmp791(m$Iter783);
            panda$core$Bit $tmp794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp793);
            if (!$tmp794.value) goto $l789;
            {
                ITable* $tmp796 = m$Iter783->$class->itable;
                while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp796 = $tmp796->next;
                }
                $fn798 $tmp797 = $tmp796->methods[1];
                panda$core$Object* $tmp799 = $tmp797(m$Iter783);
                m795 = ((org$pandalanguage$pandac$MethodDecl*) $tmp799);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m795);
                panda$collections$Array* $tmp801 = (panda$collections$Array*) malloc(40);
                $tmp801->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp801->refCount.value = 1;
                panda$collections$Array$init($tmp801);
                parameters800 = $tmp801;
                {
                    ITable* $tmp804 = ((panda$collections$Iterable*) m795->parameters)->$class->itable;
                    while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp804 = $tmp804->next;
                    }
                    $fn806 $tmp805 = $tmp804->methods[0];
                    panda$collections$Iterator* $tmp807 = $tmp805(((panda$collections$Iterable*) m795->parameters));
                    p$Iter803 = $tmp807;
                    $l808:;
                    ITable* $tmp810 = p$Iter803->$class->itable;
                    while ($tmp810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp810 = $tmp810->next;
                    }
                    $fn812 $tmp811 = $tmp810->methods[0];
                    panda$core$Bit $tmp813 = $tmp811(p$Iter803);
                    panda$core$Bit $tmp814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp813);
                    if (!$tmp814.value) goto $l809;
                    {
                        ITable* $tmp816 = p$Iter803->$class->itable;
                        while ($tmp816->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp816 = $tmp816->next;
                        }
                        $fn818 $tmp817 = $tmp816->methods[1];
                        panda$core$Object* $tmp819 = $tmp817(p$Iter803);
                        p815 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp819);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp820 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp820->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp820->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp822 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type698, p815->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp820, p815->name, $tmp822);
                        panda$collections$Array$add$panda$collections$Array$T(parameters800, ((panda$core$Object*) $tmp820));
                    }
                    goto $l808;
                    $l809:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp824 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
                $tmp824->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp824->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp824, result705, ((org$pandalanguage$pandac$Symbol*) m795)->offset, m795->doccomment, m795->annotations, m795->methodKind, ((org$pandalanguage$pandac$Symbol*) m795)->name, parameters800, m795->returnType, m795->body);
                clone823 = $tmp824;
                panda$collections$Array$add$panda$collections$Array$T(result705->methods, ((panda$core$Object*) clone823));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result705->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone823));
            }
            goto $l788;
            $l789:;
        }
        {
            ITable* $tmp827 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp827->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp827 = $tmp827->next;
            }
            $fn829 $tmp828 = $tmp827->methods[0];
            panda$collections$Iterator* $tmp830 = $tmp828(((panda$collections$Iterable*) p_cl->fields));
            f$Iter826 = $tmp830;
            $l831:;
            ITable* $tmp833 = f$Iter826->$class->itable;
            while ($tmp833->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp833 = $tmp833->next;
            }
            $fn835 $tmp834 = $tmp833->methods[0];
            panda$core$Bit $tmp836 = $tmp834(f$Iter826);
            panda$core$Bit $tmp837 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp836);
            if (!$tmp837.value) goto $l832;
            {
                ITable* $tmp839 = f$Iter826->$class->itable;
                while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp839 = $tmp839->next;
                }
                $fn841 $tmp840 = $tmp839->methods[1];
                panda$core$Object* $tmp842 = $tmp840(f$Iter826);
                f838 = ((org$pandalanguage$pandac$FieldDecl*) $tmp842);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f838);
                org$pandalanguage$pandac$FieldDecl* $tmp844 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
                $tmp844->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp844->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp846 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type698, f838->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp844, result705, ((org$pandalanguage$pandac$Symbol*) f838)->offset, f838->doccomment, f838->annotations, f838->fieldKind, ((org$pandalanguage$pandac$Symbol*) f838)->name, $tmp846, f838->rawValue);
                clone843 = $tmp844;
                panda$collections$Array$add$panda$collections$Array$T(result705->fields, ((panda$core$Object*) clone843));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result705->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone843));
            }
            goto $l831;
            $l832:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result705)->name), ((panda$core$Object*) result705));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result705));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result705;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result847;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp848 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result847 = $tmp848;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp849 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp849));
            result847 = $tmp850;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp851 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp851;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp852 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result847->annotations);
    if ($tmp852.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp853 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result847, p_type);
        result847 = $tmp853;
    }
    }
    return result847;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl854;
    panda$collections$Set* result856;
    panda$collections$Iterator* intf$Iter861;
    org$pandalanguage$pandac$Type* intf873;
    org$pandalanguage$pandac$ClassDecl* $tmp855 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl854 = $tmp855;
    PANDA_ASSERT(((panda$core$Bit) { cl854 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl854);
    panda$collections$Set* $tmp857 = (panda$collections$Set*) malloc(24);
    $tmp857->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp857->refCount.value = 1;
    panda$collections$Set$init($tmp857);
    result856 = $tmp857;
    if (((panda$core$Bit) { cl854->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp859 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl854->rawSuper);
        panda$collections$Set* $tmp860 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp859);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result856, ((panda$collections$CollectionView*) $tmp860));
    }
    }
    {
        ITable* $tmp862 = ((panda$collections$Iterable*) cl854->rawInterfaces)->$class->itable;
        while ($tmp862->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp862 = $tmp862->next;
        }
        $fn864 $tmp863 = $tmp862->methods[0];
        panda$collections$Iterator* $tmp865 = $tmp863(((panda$collections$Iterable*) cl854->rawInterfaces));
        intf$Iter861 = $tmp865;
        $l866:;
        ITable* $tmp868 = intf$Iter861->$class->itable;
        while ($tmp868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp868 = $tmp868->next;
        }
        $fn870 $tmp869 = $tmp868->methods[0];
        panda$core$Bit $tmp871 = $tmp869(intf$Iter861);
        panda$core$Bit $tmp872 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp871);
        if (!$tmp872.value) goto $l867;
        {
            ITable* $tmp874 = intf$Iter861->$class->itable;
            while ($tmp874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp874 = $tmp874->next;
            }
            $fn876 $tmp875 = $tmp874->methods[1];
            panda$core$Object* $tmp877 = $tmp875(intf$Iter861);
            intf873 = ((org$pandalanguage$pandac$Type*) $tmp877);
            org$pandalanguage$pandac$Type* $tmp878 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf873);
            panda$collections$Set* $tmp879 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp878);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result856, ((panda$collections$CollectionView*) $tmp879));
        }
        goto $l866;
        $l867:;
    }
    panda$core$Bit $tmp880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl854->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp880.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result856, ((panda$collections$Key*) p_t));
    }
    }
    return result856;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp886;
    panda$core$Bit $tmp881 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp881.value);
    panda$core$Bit $tmp882 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp882.value);
    panda$core$Int64 $tmp883 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp884 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp885 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp883, $tmp884);
    if ($tmp885.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp887 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp886, ((panda$core$Int64) { 0 }), $tmp887, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp889 = $tmp886.start.value;
    panda$core$Int64 i888 = { $tmp889 };
    int64_t $tmp891 = $tmp886.end.value;
    int64_t $tmp892 = $tmp886.step.value;
    bool $tmp893 = $tmp886.inclusive.value;
    bool $tmp900 = $tmp892 > 0;
    if ($tmp900) goto $l898; else goto $l899;
    $l898:;
    if ($tmp893) goto $l901; else goto $l902;
    $l901:;
    if ($tmp889 <= $tmp891) goto $l894; else goto $l896;
    $l902:;
    if ($tmp889 < $tmp891) goto $l894; else goto $l896;
    $l899:;
    if ($tmp893) goto $l903; else goto $l904;
    $l903:;
    if ($tmp889 >= $tmp891) goto $l894; else goto $l896;
    $l904:;
    if ($tmp889 > $tmp891) goto $l894; else goto $l896;
    $l894:;
    {
        panda$core$Object* $tmp906 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t1->subtypes, i888);
        panda$core$Object* $tmp907 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t2->subtypes, i888);
        panda$core$Bit $tmp908 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp906), ((org$pandalanguage$pandac$Type*) $tmp907));
        if ($tmp908.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l897:;
    if ($tmp900) goto $l910; else goto $l911;
    $l910:;
    int64_t $tmp912 = $tmp891 - i888.value;
    if ($tmp893) goto $l913; else goto $l914;
    $l913:;
    if ($tmp912 >= $tmp892) goto $l909; else goto $l896;
    $l914:;
    if ($tmp912 > $tmp892) goto $l909; else goto $l896;
    $l911:;
    int64_t $tmp916 = i888.value - $tmp891;
    if ($tmp893) goto $l917; else goto $l918;
    $l917:;
    if ($tmp916 >= -$tmp892) goto $l909; else goto $l896;
    $l918:;
    if ($tmp916 > -$tmp892) goto $l909; else goto $l896;
    $l909:;
    i888.value += $tmp892;
    goto $l894;
    $l896:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl920;
    panda$collections$Iterator* test$Iter922;
    org$pandalanguage$pandac$MethodDecl* test934;
    panda$collections$Iterator* raw$Iter947;
    org$pandalanguage$pandac$Type* raw959;
    org$pandalanguage$pandac$MethodDecl* result964;
    org$pandalanguage$pandac$ClassDecl* $tmp921 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl920 = $tmp921;
    PANDA_ASSERT(((panda$core$Bit) { cl920 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl920);
    {
        ITable* $tmp923 = ((panda$collections$Iterable*) cl920->methods)->$class->itable;
        while ($tmp923->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp923 = $tmp923->next;
        }
        $fn925 $tmp924 = $tmp923->methods[0];
        panda$collections$Iterator* $tmp926 = $tmp924(((panda$collections$Iterable*) cl920->methods));
        test$Iter922 = $tmp926;
        $l927:;
        ITable* $tmp929 = test$Iter922->$class->itable;
        while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp929 = $tmp929->next;
        }
        $fn931 $tmp930 = $tmp929->methods[0];
        panda$core$Bit $tmp932 = $tmp930(test$Iter922);
        panda$core$Bit $tmp933 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp932);
        if (!$tmp933.value) goto $l928;
        {
            ITable* $tmp935 = test$Iter922->$class->itable;
            while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp935 = $tmp935->next;
            }
            $fn937 $tmp936 = $tmp935->methods[1];
            panda$core$Object* $tmp938 = $tmp936(test$Iter922);
            test934 = ((org$pandalanguage$pandac$MethodDecl*) $tmp938);
            panda$core$Bit $tmp939 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test934)->name, p_name);
            if ($tmp939.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test934);
                org$pandalanguage$pandac$Type* $tmp940 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test934);
                org$pandalanguage$pandac$Type* $tmp941 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp940);
                panda$core$Bit $tmp942 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp941, p_methodType);
                if ($tmp942.value) {
                {
                    return test934;
                }
                }
            }
            }
        }
        goto $l927;
        $l928:;
    }
    bool $tmp943 = p_checkInterfaces.value;
    if ($tmp943) goto $l944;
    panda$core$Bit $tmp945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl920->classKind, ((panda$core$Int64) { 5012 }));
    $tmp943 = $tmp945.value;
    $l944:;
    panda$core$Bit $tmp946 = { $tmp943 };
    if ($tmp946.value) {
    {
        {
            ITable* $tmp948 = ((panda$collections$Iterable*) cl920->rawInterfaces)->$class->itable;
            while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp948 = $tmp948->next;
            }
            $fn950 $tmp949 = $tmp948->methods[0];
            panda$collections$Iterator* $tmp951 = $tmp949(((panda$collections$Iterable*) cl920->rawInterfaces));
            raw$Iter947 = $tmp951;
            $l952:;
            ITable* $tmp954 = raw$Iter947->$class->itable;
            while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp954 = $tmp954->next;
            }
            $fn956 $tmp955 = $tmp954->methods[0];
            panda$core$Bit $tmp957 = $tmp955(raw$Iter947);
            panda$core$Bit $tmp958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp957);
            if (!$tmp958.value) goto $l953;
            {
                ITable* $tmp960 = raw$Iter947->$class->itable;
                while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp960 = $tmp960->next;
                }
                $fn962 $tmp961 = $tmp960->methods[1];
                panda$core$Object* $tmp963 = $tmp961(raw$Iter947);
                raw959 = ((org$pandalanguage$pandac$Type*) $tmp963);
                org$pandalanguage$pandac$Type* $tmp965 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw959);
                org$pandalanguage$pandac$MethodDecl* $tmp966 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp965, p_name, p_methodType, p_checkInterfaces);
                result964 = $tmp966;
                if (((panda$core$Bit) { result964 != NULL }).value) {
                {
                    return result964;
                }
                }
            }
            goto $l952;
            $l953:;
        }
    }
    }
    if (((panda$core$Bit) { cl920->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp967 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl920->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp968 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp967, p_name, p_methodType, p_checkInterfaces);
        return $tmp968;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType970;
    org$pandalanguage$pandac$Type* owner972;
    panda$collections$Iterator* raw$Iter974;
    org$pandalanguage$pandac$Type* raw986;
    org$pandalanguage$pandac$MethodDecl* result991;
    panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp969.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp971 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType970 = $tmp971;
    org$pandalanguage$pandac$Type* $tmp973 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner972 = $tmp973;
    {
        ITable* $tmp975 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp975->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp975 = $tmp975->next;
        }
        $fn977 $tmp976 = $tmp975->methods[0];
        panda$collections$Iterator* $tmp978 = $tmp976(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter974 = $tmp978;
        $l979:;
        ITable* $tmp981 = raw$Iter974->$class->itable;
        while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp981 = $tmp981->next;
        }
        $fn983 $tmp982 = $tmp981->methods[0];
        panda$core$Bit $tmp984 = $tmp982(raw$Iter974);
        panda$core$Bit $tmp985 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp984);
        if (!$tmp985.value) goto $l980;
        {
            ITable* $tmp987 = raw$Iter974->$class->itable;
            while ($tmp987->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp987 = $tmp987->next;
            }
            $fn989 $tmp988 = $tmp987->methods[1];
            panda$core$Object* $tmp990 = $tmp988(raw$Iter974);
            raw986 = ((org$pandalanguage$pandac$Type*) $tmp990);
            org$pandalanguage$pandac$Type* $tmp992 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner972, raw986);
            org$pandalanguage$pandac$MethodDecl* $tmp993 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp992, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType970, ((panda$core$Bit) { true }));
            result991 = $tmp993;
            if (((panda$core$Bit) { result991 != NULL }).value) {
            {
                return result991;
            }
            }
        }
        goto $l979;
        $l980:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp994 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner972, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp995 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp994, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType970, ((panda$core$Bit) { true }));
        return $tmp995;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass996;
    panda$collections$Array* result998;
    panda$collections$Iterator* m$Iter1001;
    org$pandalanguage$pandac$MethodDecl* m1013;
    org$pandalanguage$pandac$MethodDecl* found1018;
    org$pandalanguage$pandac$ClassDecl* $tmp997 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass996 = $tmp997;
    PANDA_ASSERT(((panda$core$Bit) { intfClass996 != NULL }).value);
    panda$collections$Array* $tmp999 = (panda$collections$Array*) malloc(40);
    $tmp999->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp999->refCount.value = 1;
    panda$collections$Array$init($tmp999);
    result998 = $tmp999;
    {
        ITable* $tmp1002 = ((panda$collections$Iterable*) intfClass996->methods)->$class->itable;
        while ($tmp1002->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1002 = $tmp1002->next;
        }
        $fn1004 $tmp1003 = $tmp1002->methods[0];
        panda$collections$Iterator* $tmp1005 = $tmp1003(((panda$collections$Iterable*) intfClass996->methods));
        m$Iter1001 = $tmp1005;
        $l1006:;
        ITable* $tmp1008 = m$Iter1001->$class->itable;
        while ($tmp1008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1008 = $tmp1008->next;
        }
        $fn1010 $tmp1009 = $tmp1008->methods[0];
        panda$core$Bit $tmp1011 = $tmp1009(m$Iter1001);
        panda$core$Bit $tmp1012 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1011);
        if (!$tmp1012.value) goto $l1007;
        {
            ITable* $tmp1014 = m$Iter1001->$class->itable;
            while ($tmp1014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1014 = $tmp1014->next;
            }
            $fn1016 $tmp1015 = $tmp1014->methods[1];
            panda$core$Object* $tmp1017 = $tmp1015(m$Iter1001);
            m1013 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1017);
            org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1020 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1013);
            org$pandalanguage$pandac$Type* $tmp1021 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1020);
            org$pandalanguage$pandac$MethodDecl* $tmp1022 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1019, ((org$pandalanguage$pandac$Symbol*) m1013)->name, $tmp1021, ((panda$core$Bit) { false }));
            found1018 = $tmp1022;
            PANDA_ASSERT(((panda$core$Bit) { found1018 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result998, ((panda$core$Object*) found1018));
        }
        goto $l1006;
        $l1007:;
    }
    return ((panda$collections$ListView*) result998);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1024;
    panda$collections$Iterator* rawIntf$Iter1027;
    org$pandalanguage$pandac$Type* rawIntf1039;
    org$pandalanguage$pandac$ClassDecl* intf1044;
    panda$core$Bit $tmp1023 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1023.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1025 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1024 = $tmp1025;
            if (((panda$core$Bit) { superCl1024 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1026 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1024);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1026));
            }
            }
        }
        }
        {
            ITable* $tmp1028 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1028 = $tmp1028->next;
            }
            $fn1030 $tmp1029 = $tmp1028->methods[0];
            panda$collections$Iterator* $tmp1031 = $tmp1029(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1027 = $tmp1031;
            $l1032:;
            ITable* $tmp1034 = rawIntf$Iter1027->$class->itable;
            while ($tmp1034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1034 = $tmp1034->next;
            }
            $fn1036 $tmp1035 = $tmp1034->methods[0];
            panda$core$Bit $tmp1037 = $tmp1035(rawIntf$Iter1027);
            panda$core$Bit $tmp1038 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1037);
            if (!$tmp1038.value) goto $l1033;
            {
                ITable* $tmp1040 = rawIntf$Iter1027->$class->itable;
                while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1040 = $tmp1040->next;
                }
                $fn1042 $tmp1041 = $tmp1040->methods[1];
                panda$core$Object* $tmp1043 = $tmp1041(rawIntf$Iter1027);
                rawIntf1039 = ((org$pandalanguage$pandac$Type*) $tmp1043);
                org$pandalanguage$pandac$ClassDecl* $tmp1045 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1039);
                intf1044 = $tmp1045;
                if (((panda$core$Bit) { intf1044 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1046 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1044);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1046));
                }
                }
            }
            goto $l1032;
            $l1033:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1049;
    panda$collections$Iterator* derived$Iter1052;
    org$pandalanguage$pandac$MethodDecl* derived1064;
    panda$core$Bit found1074;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1075;
    org$pandalanguage$pandac$MethodDecl* base1095;
    panda$core$Int64 $tmp1047 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1047, ((panda$core$Int64) { 0 }));
    if ($tmp1048.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1050 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1049 = $tmp1050;
            if (((panda$core$Bit) { superCl1049 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1051 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1049);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1051));
        }
        }
        {
            ITable* $tmp1053 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1053->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1053 = $tmp1053->next;
            }
            $fn1055 $tmp1054 = $tmp1053->methods[0];
            panda$collections$Iterator* $tmp1056 = $tmp1054(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1052 = $tmp1056;
            $l1057:;
            ITable* $tmp1059 = derived$Iter1052->$class->itable;
            while ($tmp1059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1059 = $tmp1059->next;
            }
            $fn1061 $tmp1060 = $tmp1059->methods[0];
            panda$core$Bit $tmp1062 = $tmp1060(derived$Iter1052);
            panda$core$Bit $tmp1063 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1062);
            if (!$tmp1063.value) goto $l1058;
            {
                ITable* $tmp1065 = derived$Iter1052->$class->itable;
                while ($tmp1065->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1065 = $tmp1065->next;
                }
                $fn1067 $tmp1066 = $tmp1065->methods[1];
                panda$core$Object* $tmp1068 = $tmp1066(derived$Iter1052);
                derived1064 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1068);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1064);
                panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1064->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1069 = $tmp1070.value;
                if ($tmp1069) goto $l1071;
                panda$core$Bit $tmp1072 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1064->annotations);
                $tmp1069 = $tmp1072.value;
                $l1071:;
                panda$core$Bit $tmp1073 = { $tmp1069 };
                if ($tmp1073.value) {
                {
                    goto $l1057;
                }
                }
                found1074 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1076 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1075, ((panda$core$Int64) { 0 }), $tmp1076, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp1078 = $tmp1075.start.value;
                panda$core$Int64 i1077 = { $tmp1078 };
                int64_t $tmp1080 = $tmp1075.end.value;
                int64_t $tmp1081 = $tmp1075.step.value;
                bool $tmp1082 = $tmp1075.inclusive.value;
                bool $tmp1089 = $tmp1081 > 0;
                if ($tmp1089) goto $l1087; else goto $l1088;
                $l1087:;
                if ($tmp1082) goto $l1090; else goto $l1091;
                $l1090:;
                if ($tmp1078 <= $tmp1080) goto $l1083; else goto $l1085;
                $l1091:;
                if ($tmp1078 < $tmp1080) goto $l1083; else goto $l1085;
                $l1088:;
                if ($tmp1082) goto $l1092; else goto $l1093;
                $l1092:;
                if ($tmp1078 >= $tmp1080) goto $l1083; else goto $l1085;
                $l1093:;
                if ($tmp1078 > $tmp1080) goto $l1083; else goto $l1085;
                $l1083:;
                {
                    panda$core$Object* $tmp1096 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1077);
                    base1095 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1096);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1095);
                    panda$core$Bit $tmp1097 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1064, base1095);
                    if ($tmp1097.value) {
                    {
                        found1074 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1077, ((panda$core$Object*) derived1064));
                        goto $l1085;
                    }
                    }
                }
                $l1086:;
                if ($tmp1089) goto $l1099; else goto $l1100;
                $l1099:;
                int64_t $tmp1101 = $tmp1080 - i1077.value;
                if ($tmp1082) goto $l1102; else goto $l1103;
                $l1102:;
                if ($tmp1101 >= $tmp1081) goto $l1098; else goto $l1085;
                $l1103:;
                if ($tmp1101 > $tmp1081) goto $l1098; else goto $l1085;
                $l1100:;
                int64_t $tmp1105 = i1077.value - $tmp1080;
                if ($tmp1082) goto $l1106; else goto $l1107;
                $l1106:;
                if ($tmp1105 >= -$tmp1081) goto $l1098; else goto $l1085;
                $l1107:;
                if ($tmp1105 > -$tmp1081) goto $l1098; else goto $l1085;
                $l1098:;
                i1077.value += $tmp1081;
                goto $l1083;
                $l1085:;
                panda$core$Bit $tmp1109 = panda$core$Bit$$NOT$R$panda$core$Bit(found1074);
                if ($tmp1109.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1064));
                }
                }
            }
            goto $l1057;
            $l1058:;
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
    panda$collections$Array* methods1110;
    org$pandalanguage$pandac$Symbol* s1113;
    panda$collections$Iterator* m$Iter1119;
    org$pandalanguage$pandac$MethodDecl* m1131;
    panda$collections$Iterator* p$Iter1138;
    org$pandalanguage$pandac$SymbolTable* p1150;
    panda$collections$Array* children1155;
    panda$collections$Array* types1167;
    panda$collections$Iterator* m$Iter1170;
    org$pandalanguage$pandac$MethodRef* m1182;
    panda$collections$Array* $tmp1111 = (panda$collections$Array*) malloc(40);
    $tmp1111->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1111->refCount.value = 1;
    panda$collections$Array$init($tmp1111);
    methods1110 = $tmp1111;
    org$pandalanguage$pandac$Symbol* $tmp1114 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1113 = $tmp1114;
    PANDA_ASSERT(((panda$core$Bit) { s1113 != NULL }).value);
    panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1113->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1115.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1113));
        org$pandalanguage$pandac$MethodRef* $tmp1116 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1116->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1116->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1116, ((org$pandalanguage$pandac$MethodDecl*) s1113), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1110, ((panda$core$Object*) $tmp1116));
    }
    }
    else {
    {
        panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1113->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1118.value);
        {
            ITable* $tmp1120 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1113)->methods)->$class->itable;
            while ($tmp1120->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1120 = $tmp1120->next;
            }
            $fn1122 $tmp1121 = $tmp1120->methods[0];
            panda$collections$Iterator* $tmp1123 = $tmp1121(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1113)->methods));
            m$Iter1119 = $tmp1123;
            $l1124:;
            ITable* $tmp1126 = m$Iter1119->$class->itable;
            while ($tmp1126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1126 = $tmp1126->next;
            }
            $fn1128 $tmp1127 = $tmp1126->methods[0];
            panda$core$Bit $tmp1129 = $tmp1127(m$Iter1119);
            panda$core$Bit $tmp1130 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1129);
            if (!$tmp1130.value) goto $l1125;
            {
                ITable* $tmp1132 = m$Iter1119->$class->itable;
                while ($tmp1132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1132 = $tmp1132->next;
                }
                $fn1134 $tmp1133 = $tmp1132->methods[1];
                panda$core$Object* $tmp1135 = $tmp1133(m$Iter1119);
                m1131 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1135);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1131);
                org$pandalanguage$pandac$MethodRef* $tmp1136 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1136->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1136->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1136, m1131, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1110, ((panda$core$Object*) $tmp1136));
            }
            goto $l1124;
            $l1125:;
        }
    }
    }
    {
        ITable* $tmp1139 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1139 = $tmp1139->next;
        }
        $fn1141 $tmp1140 = $tmp1139->methods[0];
        panda$collections$Iterator* $tmp1142 = $tmp1140(((panda$collections$Iterable*) p_st->parents));
        p$Iter1138 = $tmp1142;
        $l1143:;
        ITable* $tmp1145 = p$Iter1138->$class->itable;
        while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1145 = $tmp1145->next;
        }
        $fn1147 $tmp1146 = $tmp1145->methods[0];
        panda$core$Bit $tmp1148 = $tmp1146(p$Iter1138);
        panda$core$Bit $tmp1149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1148);
        if (!$tmp1149.value) goto $l1144;
        {
            ITable* $tmp1151 = p$Iter1138->$class->itable;
            while ($tmp1151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1151 = $tmp1151->next;
            }
            $fn1153 $tmp1152 = $tmp1151->methods[1];
            panda$core$Object* $tmp1154 = $tmp1152(p$Iter1138);
            p1150 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1154);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1150, p_name, methods1110, p_types);
        }
        goto $l1143;
        $l1144:;
    }
    panda$collections$Array* $tmp1156 = (panda$collections$Array*) malloc(40);
    $tmp1156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1156->refCount.value = 1;
    panda$collections$Array$init($tmp1156);
    children1155 = $tmp1156;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1155, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1158 = panda$collections$Array$get_count$R$panda$core$Int64(methods1110);
    panda$core$Bit $tmp1159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1158, ((panda$core$Int64) { 1 }));
    if ($tmp1159.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1160 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1160->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1160->refCount.value = 1;
        panda$core$Object* $tmp1162 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1110, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1163 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1162));
        panda$core$Object* $tmp1164 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1110, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1160, ((panda$core$Int64) { 1002 }), p_offset, $tmp1163, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1164)), ((panda$collections$ListView*) children1155));
        return $tmp1160;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1165 = panda$collections$Array$get_count$R$panda$core$Int64(methods1110);
        panda$core$Bit $tmp1166 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1165, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1166.value);
        panda$collections$Array* $tmp1168 = (panda$collections$Array*) malloc(40);
        $tmp1168->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1168->refCount.value = 1;
        panda$collections$Array$init($tmp1168);
        types1167 = $tmp1168;
        {
            ITable* $tmp1171 = ((panda$collections$Iterable*) methods1110)->$class->itable;
            while ($tmp1171->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1171 = $tmp1171->next;
            }
            $fn1173 $tmp1172 = $tmp1171->methods[0];
            panda$collections$Iterator* $tmp1174 = $tmp1172(((panda$collections$Iterable*) methods1110));
            m$Iter1170 = $tmp1174;
            $l1175:;
            ITable* $tmp1177 = m$Iter1170->$class->itable;
            while ($tmp1177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1177 = $tmp1177->next;
            }
            $fn1179 $tmp1178 = $tmp1177->methods[0];
            panda$core$Bit $tmp1180 = $tmp1178(m$Iter1170);
            panda$core$Bit $tmp1181 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1180);
            if (!$tmp1181.value) goto $l1176;
            {
                ITable* $tmp1183 = m$Iter1170->$class->itable;
                while ($tmp1183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1183 = $tmp1183->next;
                }
                $fn1185 $tmp1184 = $tmp1183->methods[1];
                panda$core$Object* $tmp1186 = $tmp1184(m$Iter1170);
                m1182 = ((org$pandalanguage$pandac$MethodRef*) $tmp1186);
                org$pandalanguage$pandac$Type* $tmp1187 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1182);
                panda$collections$Array$add$panda$collections$Array$T(types1167, ((panda$core$Object*) $tmp1187));
            }
            goto $l1175;
            $l1176:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1188 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1188->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1188->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1190 = (org$pandalanguage$pandac$Type*) malloc(80);
        $tmp1190->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1190->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1190, ((panda$collections$ListView*) types1167));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1188, ((panda$core$Int64) { 1003 }), p_offset, $tmp1190, ((panda$core$Object*) methods1110), ((panda$collections$ListView*) children1155));
        return $tmp1188;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1192;
    org$pandalanguage$pandac$FieldDecl* f1208;
    panda$collections$Array* children1211;
    org$pandalanguage$pandac$Type* effectiveType1216;
    org$pandalanguage$pandac$IRNode* result1221;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1193 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1192 = $tmp1193;
            if (((panda$core$Bit) { cl1192 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1194 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1192);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_offset, cl1192, $tmp1194);
                org$pandalanguage$pandac$IRNode* $tmp1195 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1195->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1195->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1197 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1198 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1192);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1195, ((panda$core$Int64) { 1001 }), p_offset, $tmp1197, $tmp1198);
                return $tmp1195;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1199 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_offset, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1199);
            org$pandalanguage$pandac$IRNode* $tmp1200 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1200->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1200->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1202 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1203 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1200, ((panda$core$Int64) { 1001 }), p_offset, $tmp1202, $tmp1203);
            return $tmp1200;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1204 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1205 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_offset, $tmp1204);
            return $tmp1205;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1206 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1206->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1206->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1206, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1206;
        }
        break;
        case 202:
        {
            f1208 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1208);
            org$pandalanguage$pandac$Type* $tmp1209 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1210 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1208->type, $tmp1209);
            if ($tmp1210.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1212 = (panda$collections$Array*) malloc(40);
            $tmp1212->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1212->refCount.value = 1;
            panda$collections$Array$init($tmp1212);
            children1211 = $tmp1212;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1214.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, &$s1215);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1217 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1208->type);
                effectiveType1216 = $tmp1217;
                panda$core$Bit $tmp1218 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1208->annotations);
                if ($tmp1218.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1211, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1219 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1208->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1220 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1219);
                    panda$collections$Array$add$panda$collections$Array$T(children1211, ((panda$core$Object*) $tmp1220));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1222 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1222->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1222, ((panda$core$Int64) { 1026 }), p_offset, f1208->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1211));
                result1221 = $tmp1222;
                panda$core$Bit $tmp1224 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1216, result1221->type);
                if ($tmp1224.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1225 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1221, p_offset, ((panda$core$Bit) { false }), effectiveType1216);
                    result1221 = $tmp1225;
                }
                }
                return result1221;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1226 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1226->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1226->refCount.value = 1;
                panda$core$Object* $tmp1228 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1228));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1226, ((panda$core$Int64) { 1025 }), p_offset, $tmp1229);
                panda$collections$Array$add$panda$collections$Array$T(children1211, ((panda$core$Object*) $tmp1226));
                org$pandalanguage$pandac$IRNode* $tmp1230 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1230->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1230->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1230, ((panda$core$Int64) { 1026 }), p_offset, f1208->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1211));
                return $tmp1230;
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
    panda$collections$HashMap* typeMap1238;
    org$pandalanguage$pandac$Type* base1241;
    org$pandalanguage$pandac$ClassDecl* cl1243;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1245;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1232 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1232, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1233.value);
            panda$core$Object* $tmp1234 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1234), p_raw);
            return $tmp1235;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1236 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1237 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1236, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1237.value);
            panda$collections$HashMap* $tmp1239 = (panda$collections$HashMap*) malloc(56);
            $tmp1239->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1239->refCount.value = 1;
            panda$collections$HashMap$init($tmp1239);
            typeMap1238 = $tmp1239;
            panda$core$Object* $tmp1242 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1241 = ((org$pandalanguage$pandac$Type*) $tmp1242);
            org$pandalanguage$pandac$ClassDecl* $tmp1244 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1241)->name);
            cl1243 = $tmp1244;
            PANDA_ASSERT(((panda$core$Bit) { cl1243 != NULL }).value);
            panda$core$Int64 $tmp1246 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1245, ((panda$core$Int64) { 1 }), $tmp1246, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1248 = $tmp1245.start.value;
            panda$core$Int64 i1247 = { $tmp1248 };
            int64_t $tmp1250 = $tmp1245.end.value;
            int64_t $tmp1251 = $tmp1245.step.value;
            bool $tmp1252 = $tmp1245.inclusive.value;
            bool $tmp1259 = $tmp1251 > 0;
            if ($tmp1259) goto $l1257; else goto $l1258;
            $l1257:;
            if ($tmp1252) goto $l1260; else goto $l1261;
            $l1260:;
            if ($tmp1248 <= $tmp1250) goto $l1253; else goto $l1255;
            $l1261:;
            if ($tmp1248 < $tmp1250) goto $l1253; else goto $l1255;
            $l1258:;
            if ($tmp1252) goto $l1262; else goto $l1263;
            $l1262:;
            if ($tmp1248 >= $tmp1250) goto $l1253; else goto $l1255;
            $l1263:;
            if ($tmp1248 > $tmp1250) goto $l1253; else goto $l1255;
            $l1253:;
            {
                panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1243)->name, &$s1265);
                panda$core$Int64 $tmp1267 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1247, ((panda$core$Int64) { 1 }));
                ITable* $tmp1268 = ((panda$collections$ListView*) cl1243->parameters)->$class->itable;
                while ($tmp1268->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1268 = $tmp1268->next;
                }
                $fn1270 $tmp1269 = $tmp1268->methods[0];
                panda$core$Object* $tmp1271 = $tmp1269(((panda$collections$ListView*) cl1243->parameters), $tmp1267);
                panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1266, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1271))->name);
                panda$core$Object* $tmp1273 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, i1247);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1238, ((panda$collections$Key*) $tmp1272), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1273)));
            }
            $l1256:;
            if ($tmp1259) goto $l1275; else goto $l1276;
            $l1275:;
            int64_t $tmp1277 = $tmp1250 - i1247.value;
            if ($tmp1252) goto $l1278; else goto $l1279;
            $l1278:;
            if ($tmp1277 >= $tmp1251) goto $l1274; else goto $l1255;
            $l1279:;
            if ($tmp1277 > $tmp1251) goto $l1274; else goto $l1255;
            $l1276:;
            int64_t $tmp1281 = i1247.value - $tmp1250;
            if ($tmp1252) goto $l1282; else goto $l1283;
            $l1282:;
            if ($tmp1281 >= -$tmp1251) goto $l1274; else goto $l1255;
            $l1283:;
            if ($tmp1281 > -$tmp1251) goto $l1274; else goto $l1255;
            $l1274:;
            i1247.value += $tmp1251;
            goto $l1253;
            $l1255:;
            org$pandalanguage$pandac$Type* $tmp1285 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1238);
            return $tmp1285;
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
    org$pandalanguage$pandac$Type* $tmp1286 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1287 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1286);
    if ($tmp1287.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1288 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1288;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1289 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1290 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1289);
    if ($tmp1290.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1291 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1291;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$collections$Array* args1299;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1300;
    org$pandalanguage$pandac$IRNode* c1302;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1293 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1292)->type);
            panda$core$Object* $tmp1294 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1294)->type);
            org$pandalanguage$pandac$Type* $tmp1296 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1293, $tmp1295);
            org$pandalanguage$pandac$Type* $tmp1297 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1296);
            org$pandalanguage$pandac$Type* $tmp1298 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1297);
            return $tmp1298;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1300, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1301 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1300);
            args1299 = $tmp1301;
            panda$core$Object* $tmp1303 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1305 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1303), &$s1304, ((panda$collections$ListView*) args1299));
            c1302 = $tmp1305;
            if (((panda$core$Bit) { c1302 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1306;
            }
            }
            return c1302->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1307 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1307;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1318;
    panda$core$Int64$nullable result1322;
    panda$core$Int64$nullable best1331;
    panda$collections$Iterator* t$Iter1332;
    org$pandalanguage$pandac$Type* t1344;
    panda$core$Int64$nullable cost1349;
    org$pandalanguage$pandac$ClassDecl* cl1363;
    panda$core$Int64$nullable cost1365;
    panda$collections$Iterator* intf$Iter1370;
    org$pandalanguage$pandac$Type* intf1382;
    panda$core$Int64$nullable cost1387;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1308 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1308.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1310 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1309);
    if ($tmp1310.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1311.value) {
    {
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1312.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1313 = $tmp1314.value;
    if (!$tmp1313) goto $l1315;
    panda$core$Bit $tmp1316 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1313 = $tmp1316.value;
    $l1315:;
    panda$core$Bit $tmp1317 = { $tmp1313 };
    if ($tmp1317.value) {
    {
        panda$core$Object* $tmp1319 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1320 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1319), p_target);
        result1318 = $tmp1320;
        if (((panda$core$Bit) { !result1318.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1321 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1318.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1321, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1324 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1323));
            result1322 = $tmp1324;
            if (((panda$core$Bit) { !result1322.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1325 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1322.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1325, true });
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
            panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1326.value) {
            {
                panda$core$Object* $tmp1327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1328 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1327), p_target);
                return $tmp1328;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1329 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1330 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1329, p_target);
            return $tmp1330;
        }
        break;
        case 17:
        {
            best1331 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1333 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1333->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1333 = $tmp1333->next;
                }
                $fn1335 $tmp1334 = $tmp1333->methods[0];
                panda$collections$Iterator* $tmp1336 = $tmp1334(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1332 = $tmp1336;
                $l1337:;
                ITable* $tmp1339 = t$Iter1332->$class->itable;
                while ($tmp1339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1339 = $tmp1339->next;
                }
                $fn1341 $tmp1340 = $tmp1339->methods[0];
                panda$core$Bit $tmp1342 = $tmp1340(t$Iter1332);
                panda$core$Bit $tmp1343 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1342);
                if (!$tmp1343.value) goto $l1338;
                {
                    ITable* $tmp1345 = t$Iter1332->$class->itable;
                    while ($tmp1345->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1345 = $tmp1345->next;
                    }
                    $fn1347 $tmp1346 = $tmp1345->methods[1];
                    panda$core$Object* $tmp1348 = $tmp1346(t$Iter1332);
                    t1344 = ((org$pandalanguage$pandac$Type*) $tmp1348);
                    panda$core$Int64$nullable $tmp1350 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1344, p_target);
                    cost1349 = $tmp1350;
                    bool $tmp1351 = ((panda$core$Bit) { cost1349.nonnull }).value;
                    if (!$tmp1351) goto $l1352;
                    bool $tmp1353 = ((panda$core$Bit) { !best1331.nonnull }).value;
                    if ($tmp1353) goto $l1354;
                    panda$core$Bit $tmp1355 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1349.value), ((panda$core$Int64) best1331.value));
                    $tmp1353 = $tmp1355.value;
                    $l1354:;
                    panda$core$Bit $tmp1356 = { $tmp1353 };
                    $tmp1351 = $tmp1356.value;
                    $l1352:;
                    panda$core$Bit $tmp1357 = { $tmp1351 };
                    if ($tmp1357.value) {
                    {
                        best1331 = cost1349;
                    }
                    }
                }
                goto $l1337;
                $l1338:;
            }
            return best1331;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1358 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1358;
        }
        break;
    }
    panda$core$Bit $tmp1359 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1360 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1359);
    if ($tmp1360.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1361 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1362 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1361);
    if ($tmp1362.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1364 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1363 = $tmp1364;
    PANDA_ASSERT(((panda$core$Bit) { cl1363 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1363);
    if (((panda$core$Bit) { cl1363->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1366 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1363->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1367 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1366);
        panda$core$Int64$nullable $tmp1368 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1367, p_target);
        cost1365 = $tmp1368;
        if (((panda$core$Bit) { cost1365.nonnull }).value) {
        {
            panda$core$Int64 $tmp1369 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1365.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1369, true });
        }
        }
    }
    }
    {
        ITable* $tmp1371 = ((panda$collections$Iterable*) cl1363->rawInterfaces)->$class->itable;
        while ($tmp1371->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1371 = $tmp1371->next;
        }
        $fn1373 $tmp1372 = $tmp1371->methods[0];
        panda$collections$Iterator* $tmp1374 = $tmp1372(((panda$collections$Iterable*) cl1363->rawInterfaces));
        intf$Iter1370 = $tmp1374;
        $l1375:;
        ITable* $tmp1377 = intf$Iter1370->$class->itable;
        while ($tmp1377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1377 = $tmp1377->next;
        }
        $fn1379 $tmp1378 = $tmp1377->methods[0];
        panda$core$Bit $tmp1380 = $tmp1378(intf$Iter1370);
        panda$core$Bit $tmp1381 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1380);
        if (!$tmp1381.value) goto $l1376;
        {
            ITable* $tmp1383 = intf$Iter1370->$class->itable;
            while ($tmp1383->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1383 = $tmp1383->next;
            }
            $fn1385 $tmp1384 = $tmp1383->methods[1];
            panda$core$Object* $tmp1386 = $tmp1384(intf$Iter1370);
            intf1382 = ((org$pandalanguage$pandac$Type*) $tmp1386);
            org$pandalanguage$pandac$Type* $tmp1388 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1382);
            org$pandalanguage$pandac$Type* $tmp1389 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1388);
            panda$core$Int64$nullable $tmp1390 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1389, p_target);
            cost1387 = $tmp1390;
            if (((panda$core$Bit) { cost1387.nonnull }).value) {
            {
                panda$core$Int64 $tmp1391 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1387.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1391, true });
            }
            }
        }
        goto $l1375;
        $l1376:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1393 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1392 = $tmp1393.value;
    if (!$tmp1392) goto $l1394;
    panda$core$Bit $tmp1395 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1392 = $tmp1395.value;
    $l1394:;
    panda$core$Bit $tmp1396 = { $tmp1392 };
    if ($tmp1396.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1398 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1397 = $tmp1398.value;
    if (!$tmp1397) goto $l1399;
    panda$core$Bit $tmp1400 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1397 = $tmp1400.value;
    $l1399:;
    panda$core$Bit $tmp1401 = { $tmp1397 };
    if ($tmp1401.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1403 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1402 = $tmp1403.value;
    if (!$tmp1402) goto $l1404;
    panda$core$Bit $tmp1405 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1402 = $tmp1405.value;
    $l1404:;
    panda$core$Bit $tmp1406 = { $tmp1402 };
    if ($tmp1406.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1407 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1407.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1408 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1408.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1409 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1409.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1412;
    panda$core$Int64$nullable cost11483;
    panda$core$Int64$nullable cost21487;
    org$pandalanguage$pandac$ClassDecl* targetClass1497;
    panda$collections$Iterator* m$Iter1499;
    org$pandalanguage$pandac$MethodDecl* m1511;
    panda$core$Int64$nullable cost1520;
    panda$core$Bit $tmp1410 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1410.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1411.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1414 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1413));
            cost1412 = $tmp1414;
            if (((panda$core$Bit) { !cost1412.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1415.value) {
            {
                return cost1412;
            }
            }
            panda$core$Int64 $tmp1416 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1412.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1416, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1417 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1417;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1418.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1419 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1419.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1420 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1421 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1420, p_target);
                return $tmp1421;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1423 = $tmp1424.value;
            if (!$tmp1423) goto $l1425;
            panda$core$Int64 $tmp1426 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1427 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1426);
            panda$core$Int64 $tmp1428 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1429 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1427, $tmp1428);
            $tmp1423 = $tmp1429.value;
            $l1425:;
            panda$core$Bit $tmp1430 = { $tmp1423 };
            bool $tmp1422 = $tmp1430.value;
            if ($tmp1422) goto $l1431;
            panda$core$Bit $tmp1433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1432 = $tmp1433.value;
            if (!$tmp1432) goto $l1434;
            panda$core$Int64 $tmp1435 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1436 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1437 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1435, $tmp1436);
            $tmp1432 = $tmp1437.value;
            $l1434:;
            panda$core$Bit $tmp1438 = { $tmp1432 };
            $tmp1422 = $tmp1438.value;
            $l1431:;
            panda$core$Bit $tmp1439 = { $tmp1422 };
            if ($tmp1439.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1440 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1441 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1440);
            if ($tmp1441.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1442 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1443 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1442, p_target);
                return $tmp1443;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1445 = $tmp1446.value;
            if (!$tmp1445) goto $l1447;
            panda$core$Int64 $tmp1448 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1449 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1448);
            panda$core$Int64 $tmp1450 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1449);
            panda$core$Int64 $tmp1451 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1452 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1450, $tmp1451);
            $tmp1445 = $tmp1452.value;
            $l1447:;
            panda$core$Bit $tmp1453 = { $tmp1445 };
            bool $tmp1444 = $tmp1453.value;
            if ($tmp1444) goto $l1454;
            panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1455 = $tmp1456.value;
            if (!$tmp1455) goto $l1457;
            panda$core$Int64 $tmp1458 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1459 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1458);
            panda$core$Int64 $tmp1460 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1459);
            panda$core$Int64 $tmp1461 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1462 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1460, $tmp1461);
            $tmp1455 = $tmp1462.value;
            $l1457:;
            panda$core$Bit $tmp1463 = { $tmp1455 };
            $tmp1444 = $tmp1463.value;
            $l1454:;
            panda$core$Bit $tmp1464 = { $tmp1444 };
            if ($tmp1464.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1465 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1465);
            if ($tmp1466.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1467 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1468 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1467, p_target);
                return $tmp1468;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1469 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1469.value) {
            {
                panda$core$Int64 $tmp1470 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1470, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp1471.value);
                panda$core$Object* $tmp1473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1473)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1472 = $tmp1474.value;
                if (!$tmp1472) goto $l1475;
                panda$core$Object* $tmp1476 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1476)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1472 = $tmp1477.value;
                $l1475:;
                panda$core$Bit $tmp1478 = { $tmp1472 };
                if ($tmp1478.value) {
                {
                    panda$core$Object* $tmp1479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1480 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1479));
                    panda$core$Bit $tmp1481 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1480);
                    if ($tmp1481.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1482.value);
                panda$core$Object* $tmp1484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1485 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1486 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1484), ((org$pandalanguage$pandac$Type*) $tmp1485));
                cost11483 = $tmp1486;
                if (((panda$core$Bit) { !cost11483.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1489 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1490 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1488), ((org$pandalanguage$pandac$Type*) $tmp1489));
                cost21487 = $tmp1490;
                if (((panda$core$Bit) { !cost21487.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1491 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11483.value), ((panda$core$Int64) cost21487.value));
                return ((panda$core$Int64$nullable) { $tmp1491, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1492 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1493 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1492, p_target);
            return $tmp1493;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1494 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1494;
        }
        break;
    }
    panda$core$Bit $tmp1495 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1495);
    if ($tmp1496.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1498 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1497 = $tmp1498;
    if (((panda$core$Bit) { targetClass1497 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1500 = ((panda$collections$Iterable*) targetClass1497->methods)->$class->itable;
        while ($tmp1500->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1500 = $tmp1500->next;
        }
        $fn1502 $tmp1501 = $tmp1500->methods[0];
        panda$collections$Iterator* $tmp1503 = $tmp1501(((panda$collections$Iterable*) targetClass1497->methods));
        m$Iter1499 = $tmp1503;
        $l1504:;
        ITable* $tmp1506 = m$Iter1499->$class->itable;
        while ($tmp1506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1506 = $tmp1506->next;
        }
        $fn1508 $tmp1507 = $tmp1506->methods[0];
        panda$core$Bit $tmp1509 = $tmp1507(m$Iter1499);
        panda$core$Bit $tmp1510 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1509);
        if (!$tmp1510.value) goto $l1505;
        {
            ITable* $tmp1512 = m$Iter1499->$class->itable;
            while ($tmp1512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1512 = $tmp1512->next;
            }
            $fn1514 $tmp1513 = $tmp1512->methods[1];
            panda$core$Object* $tmp1515 = $tmp1513(m$Iter1499);
            m1511 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1515);
            panda$core$Bit $tmp1516 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1511->annotations);
            if ($tmp1516.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1511);
                panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1511->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1517.value);
                panda$core$Int64 $tmp1518 = panda$collections$Array$get_count$R$panda$core$Int64(m1511->parameters);
                panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1518, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1519.value);
                panda$core$Object* $tmp1521 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1511->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1522 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1521)->type);
                cost1520 = $tmp1522;
                if (((panda$core$Bit) { cost1520.nonnull }).value) {
                {
                    return cost1520;
                }
                }
            }
            }
        }
        goto $l1504;
        $l1505:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1523 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1523;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1532;
    org$pandalanguage$pandac$IRNode* intermediate1537;
    org$pandalanguage$pandac$IRNode* coerced1565;
    org$pandalanguage$pandac$IRNode* coerced1586;
    org$pandalanguage$pandac$IRNode* varType1600;
    org$pandalanguage$pandac$Type* param1608;
    org$pandalanguage$pandac$IRNode* start1610;
    org$pandalanguage$pandac$IRNode* end1613;
    panda$collections$Array* args1616;
    org$pandalanguage$pandac$IRNode* target1623;
    panda$collections$ListView* methods1630;
    panda$collections$Array* args1632;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1633;
    panda$collections$Array* best1635;
    panda$core$Int64$nullable bestCost1638;
    panda$collections$Iterator* m$Iter1639;
    org$pandalanguage$pandac$MethodRef* m1651;
    panda$core$Int64$nullable cost1656;
    org$pandalanguage$pandac$IRNode* callTarget1662;
    org$pandalanguage$pandac$IRNode* result1668;
    panda$collections$Array* args1672;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1673;
    panda$collections$Array* children1685;
    org$pandalanguage$pandac$IRNode* intermediate1691;
    org$pandalanguage$pandac$ClassDecl* cl1696;
    panda$collections$Iterator* m$Iter1698;
    org$pandalanguage$pandac$MethodDecl* m1710;
    org$pandalanguage$pandac$IRNode* type1721;
    panda$collections$Array* args1726;
    panda$collections$Array* children1730;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1524 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1524.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1525 = $tmp1526.value;
    if (!$tmp1525) goto $l1527;
    panda$core$Bit $tmp1528 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1525 = $tmp1528.value;
    $l1527:;
    panda$core$Bit $tmp1529 = { $tmp1525 };
    if ($tmp1529.value) {
    {
        panda$core$Object* $tmp1530 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1531 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1530), p_target);
        if ($tmp1531.value) {
        {
            panda$collections$Array* $tmp1533 = (panda$collections$Array*) malloc(40);
            $tmp1533->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1533->refCount.value = 1;
            panda$collections$Array$init($tmp1533);
            children1532 = $tmp1533;
            panda$collections$Array$add$panda$collections$Array$T(children1532, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1535 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1535->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1535->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1535, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1532));
            return $tmp1535;
        }
        }
        panda$core$Object* $tmp1538 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1539 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1538));
        intermediate1537 = $tmp1539;
        org$pandalanguage$pandac$IRNode* $tmp1540 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1537, p_target);
        return $tmp1540;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1541 = $tmp1542.value;
            if (!$tmp1541) goto $l1543;
            panda$core$Int64 $tmp1544 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1545 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1546 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1544, $tmp1545);
            $tmp1541 = $tmp1546.value;
            $l1543:;
            panda$core$Bit $tmp1547 = { $tmp1541 };
            if ($tmp1547.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1548 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1548->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1548->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1548, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1548;
            }
            }
            else {
            panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1550 = $tmp1551.value;
            if (!$tmp1550) goto $l1552;
            panda$core$Int64 $tmp1553 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1554 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1555 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1553, $tmp1554);
            $tmp1550 = $tmp1555.value;
            $l1552:;
            panda$core$Bit $tmp1556 = { $tmp1550 };
            if ($tmp1556.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1557 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1557->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1557->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1557, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1557;
            }
            }
            }
            panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1559 = $tmp1560.value;
            if (!$tmp1559) goto $l1561;
            panda$core$Bit $tmp1562 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1563 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1562);
            $tmp1559 = $tmp1563.value;
            $l1561:;
            panda$core$Bit $tmp1564 = { $tmp1559 };
            if ($tmp1564.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1566 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1566);
                coerced1565 = $tmp1567;
                if (((panda$core$Bit) { coerced1565 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1568 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1565, p_target);
                return $tmp1568;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1569 = $tmp1570.value;
            if (!$tmp1569) goto $l1571;
            panda$core$Int64 $tmp1572 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1573 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1572);
            panda$core$Int64 $tmp1574 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1573);
            panda$core$Int64 $tmp1575 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1576 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1574, $tmp1575);
            $tmp1569 = $tmp1576.value;
            $l1571:;
            panda$core$Bit $tmp1577 = { $tmp1569 };
            if ($tmp1577.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1578 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1578->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1578->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1578, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1578;
            }
            }
            panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1580 = $tmp1581.value;
            if (!$tmp1580) goto $l1582;
            panda$core$Bit $tmp1583 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1584 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1583);
            $tmp1580 = $tmp1584.value;
            $l1582:;
            panda$core$Bit $tmp1585 = { $tmp1580 };
            if ($tmp1585.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1587 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1588 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1587);
                coerced1586 = $tmp1588;
                if (((panda$core$Bit) { coerced1586 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1589 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1586, p_target);
                return $tmp1589;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1590 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1591 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1590);
            if ($tmp1591.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1592 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1592->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1592->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1592, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1592;
            }
            }
            panda$core$Bit $tmp1595 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1594 = $tmp1595.value;
            if (!$tmp1594) goto $l1596;
            org$pandalanguage$pandac$Type* $tmp1597 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1598 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1597);
            $tmp1594 = $tmp1598.value;
            $l1596:;
            panda$core$Bit $tmp1599 = { $tmp1594 };
            if ($tmp1599.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1601 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1602 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1601);
                varType1600 = $tmp1602;
                if (((panda$core$Bit) { varType1600 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1603 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1600, p_target);
                    return $tmp1603;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Int64 $tmp1604 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1604, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1605.value);
            panda$core$Bit $tmp1606 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1606.value) {
            {
                panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1607.value);
                panda$core$Object* $tmp1609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1608 = ((org$pandalanguage$pandac$Type*) $tmp1609);
                panda$core$Object* $tmp1611 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1612 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1611), param1608);
                start1610 = $tmp1612;
                if (((panda$core$Bit) { start1610 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1615 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1614), param1608);
                end1613 = $tmp1615;
                if (((panda$core$Bit) { end1613 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1617 = (panda$collections$Array*) malloc(40);
                $tmp1617->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1617->refCount.value = 1;
                panda$collections$Array$init($tmp1617);
                args1616 = $tmp1617;
                panda$collections$Array$add$panda$collections$Array$T(args1616, ((panda$core$Object*) start1610));
                panda$collections$Array$add$panda$collections$Array$T(args1616, ((panda$core$Object*) end1613));
                panda$core$Object* $tmp1619 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1616, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1619)));
                org$pandalanguage$pandac$IRNode* $tmp1620 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1620->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1620->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1622 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1620, ((panda$core$Int64) { 1011 }), p_expr->offset, $tmp1622, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1616, ((panda$core$Object*) $tmp1620));
                org$pandalanguage$pandac$IRNode* $tmp1624 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1624->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1624->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1626 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1624, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1626, p_target);
                target1623 = $tmp1624;
                org$pandalanguage$pandac$IRNode* $tmp1627 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1623, ((panda$collections$ListView*) args1616));
                return $tmp1627;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1628 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1629 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1628, p_target);
                return $tmp1629;
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1631 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1630 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1631)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1633, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1634 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1633);
            args1632 = $tmp1634;
            panda$collections$Array* $tmp1636 = (panda$collections$Array*) malloc(40);
            $tmp1636->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1636->refCount.value = 1;
            panda$collections$Array$init($tmp1636);
            best1635 = $tmp1636;
            bestCost1638 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1640 = ((panda$collections$Iterable*) methods1630)->$class->itable;
                while ($tmp1640->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1640 = $tmp1640->next;
                }
                $fn1642 $tmp1641 = $tmp1640->methods[0];
                panda$collections$Iterator* $tmp1643 = $tmp1641(((panda$collections$Iterable*) methods1630));
                m$Iter1639 = $tmp1643;
                $l1644:;
                ITable* $tmp1646 = m$Iter1639->$class->itable;
                while ($tmp1646->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1646 = $tmp1646->next;
                }
                $fn1648 $tmp1647 = $tmp1646->methods[0];
                panda$core$Bit $tmp1649 = $tmp1647(m$Iter1639);
                panda$core$Bit $tmp1650 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1649);
                if (!$tmp1650.value) goto $l1645;
                {
                    ITable* $tmp1652 = m$Iter1639->$class->itable;
                    while ($tmp1652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1652 = $tmp1652->next;
                    }
                    $fn1654 $tmp1653 = $tmp1652->methods[1];
                    panda$core$Object* $tmp1655 = $tmp1653(m$Iter1639);
                    m1651 = ((org$pandalanguage$pandac$MethodRef*) $tmp1655);
                    panda$core$Int64$nullable $tmp1657 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1651, ((panda$collections$ListView*) args1632), p_target);
                    cost1656 = $tmp1657;
                    if (((panda$core$Bit) { !cost1656.nonnull }).value) {
                    {
                        goto $l1644;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1638.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1635, ((panda$core$Object*) m1651));
                        bestCost1638 = cost1656;
                        goto $l1644;
                    }
                    }
                    panda$core$Bit $tmp1658 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1656.value), ((panda$core$Int64) bestCost1638.value));
                    if ($tmp1658.value) {
                    {
                        panda$collections$Array$clear(best1635);
                        bestCost1638 = cost1656;
                    }
                    }
                    panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1656.value), ((panda$core$Int64) bestCost1638.value));
                    if ($tmp1659.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1635, ((panda$core$Object*) m1651));
                    }
                    }
                }
                goto $l1644;
                $l1645:;
            }
            panda$core$Int64 $tmp1660 = panda$collections$Array$get_count$R$panda$core$Int64(best1635);
            panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1660, ((panda$core$Int64) { 1 }));
            if ($tmp1661.value) {
            {
                panda$core$Object* $tmp1663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1664 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1663)->children);
                panda$core$Bit $tmp1665 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1664, ((panda$core$Int64) { 0 }));
                if ($tmp1665.value) {
                {
                    panda$core$Object* $tmp1666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1667 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1666)->children, ((panda$core$Int64) { 0 }));
                    callTarget1662 = ((org$pandalanguage$pandac$IRNode*) $tmp1667);
                }
                }
                else {
                {
                    callTarget1662 = NULL;
                }
                }
                panda$core$Object* $tmp1669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1635, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1670 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->offset, callTarget1662, ((org$pandalanguage$pandac$MethodRef*) $tmp1669), ((panda$collections$ListView*) args1632));
                result1668 = $tmp1670;
                org$pandalanguage$pandac$IRNode* $tmp1671 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1668, p_target);
                return $tmp1671;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1673, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1674 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1673);
            args1672 = $tmp1674;
            panda$core$Object* $tmp1675 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1677 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1675), &$s1676, ((panda$collections$ListView*) args1672), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1678 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1677, p_target);
            return $tmp1678;
        }
        break;
    }
    panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1679.value) {
    {
        panda$core$Bit $tmp1680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1680.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1681 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1681->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1681->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1681, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1681;
        }
        }
        panda$core$Object* $tmp1683 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1684 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1683));
        if ($tmp1684.value) {
        {
            panda$collections$Array* $tmp1686 = (panda$collections$Array*) malloc(40);
            $tmp1686->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1686->refCount.value = 1;
            panda$collections$Array$init($tmp1686);
            children1685 = $tmp1686;
            panda$collections$Array$add$panda$collections$Array$T(children1685, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1688 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1688->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1688->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1688, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1685));
            return $tmp1688;
        }
        }
        panda$core$Bit $tmp1690 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1690.value) {
        {
            panda$core$Object* $tmp1692 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1693 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1692));
            intermediate1691 = $tmp1693;
            org$pandalanguage$pandac$IRNode* $tmp1694 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1691, p_target);
            return $tmp1694;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1695 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1695.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1697 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1696 = $tmp1697;
        if (((panda$core$Bit) { cl1696 != NULL }).value) {
        {
            {
                ITable* $tmp1699 = ((panda$collections$Iterable*) cl1696->methods)->$class->itable;
                while ($tmp1699->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1699 = $tmp1699->next;
                }
                $fn1701 $tmp1700 = $tmp1699->methods[0];
                panda$collections$Iterator* $tmp1702 = $tmp1700(((panda$collections$Iterable*) cl1696->methods));
                m$Iter1698 = $tmp1702;
                $l1703:;
                ITable* $tmp1705 = m$Iter1698->$class->itable;
                while ($tmp1705->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1705 = $tmp1705->next;
                }
                $fn1707 $tmp1706 = $tmp1705->methods[0];
                panda$core$Bit $tmp1708 = $tmp1706(m$Iter1698);
                panda$core$Bit $tmp1709 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1708);
                if (!$tmp1709.value) goto $l1704;
                {
                    ITable* $tmp1711 = m$Iter1698->$class->itable;
                    while ($tmp1711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1711 = $tmp1711->next;
                    }
                    $fn1713 $tmp1712 = $tmp1711->methods[1];
                    panda$core$Object* $tmp1714 = $tmp1712(m$Iter1698);
                    m1710 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1714);
                    panda$core$Bit $tmp1715 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1710->annotations);
                    if ($tmp1715.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1710);
                        panda$core$Bit $tmp1716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1710->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1716.value);
                        panda$core$Int64 $tmp1717 = panda$collections$Array$get_count$R$panda$core$Int64(m1710->parameters);
                        panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1718.value);
                        panda$core$Object* $tmp1719 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1710->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1720 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1719)->type);
                        if (((panda$core$Bit) { $tmp1720.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1722 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1722->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1722->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1724 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1725 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1696);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1722, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1724, $tmp1725);
                            type1721 = $tmp1722;
                            panda$collections$Array* $tmp1727 = (panda$collections$Array*) malloc(40);
                            $tmp1727->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1727->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1727, ((panda$core$Int64) { 1 }));
                            args1726 = $tmp1727;
                            panda$collections$Array$add$panda$collections$Array$T(args1726, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1729 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1721, ((panda$collections$ListView*) args1726));
                            return $tmp1729;
                        }
                        }
                    }
                    }
                }
                goto $l1703;
                $l1704:;
            }
        }
        }
        panda$collections$Array* $tmp1731 = (panda$collections$Array*) malloc(40);
        $tmp1731->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1731->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1731, ((panda$core$Int64) { 1 }));
        children1730 = $tmp1731;
        panda$collections$Array$add$panda$collections$Array$T(children1730, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1733 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1733->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1733->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1733, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1730));
        return $tmp1733;
    }
    }
    panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1735, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, &$s1737);
    panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1738, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1740);
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, $tmp1741);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1742;
    org$pandalanguage$pandac$IRNode* $tmp1743 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1742 = $tmp1743;
    bool $tmp1744 = ((panda$core$Bit) { result1742 == NULL }).value;
    if ($tmp1744) goto $l1745;
    panda$core$Bit $tmp1746 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1742->type, p_target);
    $tmp1744 = $tmp1746.value;
    $l1745:;
    panda$core$Bit $tmp1747 = { $tmp1744 };
    PANDA_ASSERT($tmp1747.value);
    return result1742;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1749 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1748 = $tmp1749.value;
    if (!$tmp1748) goto $l1750;
    panda$core$Bit $tmp1751 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1748 = $tmp1751.value;
    $l1750:;
    panda$core$Bit $tmp1752 = { $tmp1748 };
    if ($tmp1752.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1753 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1753.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1755 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1754 = $tmp1755.value;
    if (!$tmp1754) goto $l1756;
    panda$core$Bit $tmp1757 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1754 = $tmp1757.value;
    $l1756:;
    panda$core$Bit $tmp1758 = { $tmp1754 };
    if ($tmp1758.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1759.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1760 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1760.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1762;
    org$pandalanguage$pandac$IRNode* resolved1769;
    panda$core$Int64$nullable $tmp1761 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1761.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1763 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1762 = $tmp1763;
    panda$core$Bit $tmp1765 = panda$core$Bit$$NOT$R$panda$core$Bit(result1762);
    bool $tmp1764 = $tmp1765.value;
    if (!$tmp1764) goto $l1766;
    panda$core$Bit $tmp1767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1764 = $tmp1767.value;
    $l1766:;
    panda$core$Bit $tmp1768 = { $tmp1764 };
    if ($tmp1768.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1770 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1769 = $tmp1770;
        if (((panda$core$Bit) { resolved1769 != NULL }).value) {
        {
            panda$core$Bit $tmp1771 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1769, p_target);
            result1762 = $tmp1771;
        }
        }
    }
    }
    return result1762;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1792;
    panda$collections$Array* children1795;
    panda$core$Bit $tmp1772 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1772.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1773 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1774 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1773);
    PANDA_ASSERT($tmp1774.value);
    bool $tmp1775 = p_isExplicit.value;
    if (!$tmp1775) goto $l1776;
    panda$core$Bit $tmp1777 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1778 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1777);
    $tmp1775 = $tmp1778.value;
    $l1776:;
    panda$core$Bit $tmp1779 = { $tmp1775 };
    if ($tmp1779.value) {
    {
        panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1780, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1781, &$s1782);
        panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1784, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, &$s1786);
        panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, $tmp1787);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1788);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1789 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1789;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1790 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1790.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1791 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1791;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1793 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1792 = $tmp1793;
            if (((panda$core$Bit) { resolved1792 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1794 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1792, p_offset, p_isExplicit, p_target);
                return $tmp1794;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1796 = (panda$collections$Array*) malloc(40);
    $tmp1796->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1796->refCount.value = 1;
    panda$collections$Array$init($tmp1796);
    children1795 = $tmp1796;
    panda$collections$Array$add$panda$collections$Array$T(children1795, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1798 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1798->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1798, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1795));
    return $tmp1798;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1806;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1807;
    panda$core$Int64$nullable cost1827;
    panda$core$Int64$nullable cost1846;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1800 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1801 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1801->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1801 = $tmp1801->next;
    }
    $fn1803 $tmp1802 = $tmp1801->methods[0];
    panda$core$Int64 $tmp1804 = $tmp1802(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1805 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1800, $tmp1804);
    if ($tmp1805.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1806 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1808 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1807, ((panda$core$Int64) { 0 }), $tmp1808, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1810 = $tmp1807.start.value;
    panda$core$Int64 i1809 = { $tmp1810 };
    int64_t $tmp1812 = $tmp1807.end.value;
    int64_t $tmp1813 = $tmp1807.step.value;
    bool $tmp1814 = $tmp1807.inclusive.value;
    bool $tmp1821 = $tmp1813 > 0;
    if ($tmp1821) goto $l1819; else goto $l1820;
    $l1819:;
    if ($tmp1814) goto $l1822; else goto $l1823;
    $l1822:;
    if ($tmp1810 <= $tmp1812) goto $l1815; else goto $l1817;
    $l1823:;
    if ($tmp1810 < $tmp1812) goto $l1815; else goto $l1817;
    $l1820:;
    if ($tmp1814) goto $l1824; else goto $l1825;
    $l1824:;
    if ($tmp1810 >= $tmp1812) goto $l1815; else goto $l1817;
    $l1825:;
    if ($tmp1810 > $tmp1812) goto $l1815; else goto $l1817;
    $l1815:;
    {
        ITable* $tmp1828 = p_args->$class->itable;
        while ($tmp1828->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1828 = $tmp1828->next;
        }
        $fn1830 $tmp1829 = $tmp1828->methods[0];
        panda$core$Object* $tmp1831 = $tmp1829(p_args, i1809);
        org$pandalanguage$pandac$Type* $tmp1832 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1809);
        panda$core$Int64$nullable $tmp1833 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1831), $tmp1832);
        cost1827 = $tmp1833;
        if (((panda$core$Bit) { !cost1827.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1834 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1806, ((panda$core$Int64) cost1827.value));
        result1806 = $tmp1834;
    }
    $l1818:;
    if ($tmp1821) goto $l1836; else goto $l1837;
    $l1836:;
    int64_t $tmp1838 = $tmp1812 - i1809.value;
    if ($tmp1814) goto $l1839; else goto $l1840;
    $l1839:;
    if ($tmp1838 >= $tmp1813) goto $l1835; else goto $l1817;
    $l1840:;
    if ($tmp1838 > $tmp1813) goto $l1835; else goto $l1817;
    $l1837:;
    int64_t $tmp1842 = i1809.value - $tmp1812;
    if ($tmp1814) goto $l1843; else goto $l1844;
    $l1843:;
    if ($tmp1842 >= -$tmp1813) goto $l1835; else goto $l1817;
    $l1844:;
    if ($tmp1842 > -$tmp1813) goto $l1835; else goto $l1817;
    $l1835:;
    i1809.value += $tmp1813;
    goto $l1815;
    $l1817:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1847 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1848 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1847, p_expectedReturn);
        cost1846 = $tmp1848;
        if (((panda$core$Bit) { !cost1846.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1849 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1806, ((panda$core$Int64) cost1846.value));
        result1806 = $tmp1849;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1852 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1853 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1852);
    bool $tmp1851 = $tmp1853.value;
    if (!$tmp1851) goto $l1854;
    ITable* $tmp1855 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1855->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1855 = $tmp1855->next;
    }
    $fn1857 $tmp1856 = $tmp1855->methods[0];
    panda$core$Int64 $tmp1858 = $tmp1856(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1858, ((panda$core$Int64) { 1 }));
    $tmp1851 = $tmp1859.value;
    $l1854:;
    panda$core$Bit $tmp1860 = { $tmp1851 };
    bool $tmp1850 = $tmp1860.value;
    if (!$tmp1850) goto $l1861;
    panda$core$Object* $tmp1862 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1863 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1864 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1862)->type, $tmp1863);
    $tmp1850 = $tmp1864.value;
    $l1861:;
    panda$core$Bit $tmp1865 = { $tmp1850 };
    if ($tmp1865.value) {
    {
        panda$core$Int64 $tmp1866 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1806, ((panda$core$Int64) { 1 }));
        result1806 = $tmp1866;
    }
    }
    return ((panda$core$Int64$nullable) { result1806, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1867;
    panda$core$Int64$nullable best1870;
    panda$collections$Iterator* m$Iter1871;
    org$pandalanguage$pandac$MethodRef* m1883;
    panda$core$Int64$nullable cost1888;
    panda$collections$Array* $tmp1868 = (panda$collections$Array*) malloc(40);
    $tmp1868->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1868->refCount.value = 1;
    panda$collections$Array$init($tmp1868);
    result1867 = $tmp1868;
    best1870 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1872 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1872->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1872 = $tmp1872->next;
        }
        $fn1874 $tmp1873 = $tmp1872->methods[0];
        panda$collections$Iterator* $tmp1875 = $tmp1873(((panda$collections$Iterable*) p_methods));
        m$Iter1871 = $tmp1875;
        $l1876:;
        ITable* $tmp1878 = m$Iter1871->$class->itable;
        while ($tmp1878->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1878 = $tmp1878->next;
        }
        $fn1880 $tmp1879 = $tmp1878->methods[0];
        panda$core$Bit $tmp1881 = $tmp1879(m$Iter1871);
        panda$core$Bit $tmp1882 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1881);
        if (!$tmp1882.value) goto $l1877;
        {
            ITable* $tmp1884 = m$Iter1871->$class->itable;
            while ($tmp1884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1884 = $tmp1884->next;
            }
            $fn1886 $tmp1885 = $tmp1884->methods[1];
            panda$core$Object* $tmp1887 = $tmp1885(m$Iter1871);
            m1883 = ((org$pandalanguage$pandac$MethodRef*) $tmp1887);
            panda$core$Int64$nullable $tmp1889 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1883, p_args, p_expectedReturn);
            cost1888 = $tmp1889;
            if (((panda$core$Bit) { !cost1888.nonnull }).value) {
            {
                goto $l1876;
            }
            }
            bool $tmp1890 = ((panda$core$Bit) { !best1870.nonnull }).value;
            if ($tmp1890) goto $l1891;
            panda$core$Bit $tmp1892 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1888.value), ((panda$core$Int64) best1870.value));
            $tmp1890 = $tmp1892.value;
            $l1891:;
            panda$core$Bit $tmp1893 = { $tmp1890 };
            if ($tmp1893.value) {
            {
                panda$collections$Array$clear(result1867);
                best1870 = cost1888;
            }
            }
            panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1888.value), ((panda$core$Int64) best1870.value));
            if ($tmp1894.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1867, ((panda$core$Object*) m1883));
            }
            }
        }
        goto $l1876;
        $l1877:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1867));
    return best1870;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s1901;
    panda$collections$Array* finalArgs1927;
    org$pandalanguage$pandac$IRNode* selfNode1963;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1992;
    org$pandalanguage$pandac$IRNode* coerced2015;
    org$pandalanguage$pandac$IRNode* result2035;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1895 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1896 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1896->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1896 = $tmp1896->next;
    }
    $fn1898 $tmp1897 = $tmp1896->methods[0];
    panda$core$Int64 $tmp1899 = $tmp1897(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1900 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1895, $tmp1899);
    if ($tmp1900.value) {
    {
        panda$core$Int64 $tmp1902 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1902, ((panda$core$Int64) { 1 }));
        if ($tmp1903.value) {
        {
            s1901 = &$s1904;
        }
        }
        else {
        {
            s1901 = &$s1905;
        }
        }
        panda$core$String* $tmp1907 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1906, $tmp1907);
        panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1909);
        panda$core$Int64 $tmp1911 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1910, ((panda$core$Object*) wrap_panda$core$Int64($tmp1911)));
        panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
        panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, s1901);
        panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1916);
        ITable* $tmp1919 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp1919->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1919 = $tmp1919->next;
        }
        $fn1921 $tmp1920 = $tmp1919->methods[0];
        panda$core$Int64 $tmp1922 = $tmp1920(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1918, ((panda$core$Object*) wrap_panda$core$Int64($tmp1922)));
        panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, &$s1924);
        panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, $tmp1925);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1926);
        return NULL;
    }
    }
    panda$collections$Array* $tmp1928 = (panda$collections$Array*) malloc(40);
    $tmp1928->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1928->refCount.value = 1;
    panda$collections$Array$init($tmp1928);
    finalArgs1927 = $tmp1928;
    bool $tmp1931 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1931) goto $l1932;
    panda$core$Bit $tmp1933 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1931 = $tmp1933.value;
    $l1932:;
    panda$core$Bit $tmp1934 = { $tmp1931 };
    bool $tmp1930 = $tmp1934.value;
    if (!$tmp1930) goto $l1935;
    panda$core$Bit $tmp1936 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1937 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1936);
    $tmp1930 = $tmp1937.value;
    $l1935:;
    panda$core$Bit $tmp1938 = { $tmp1930 };
    if ($tmp1938.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1939 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1940 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp1939);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1927, ((panda$core$Object*) $tmp1940));
    }
    }
    panda$core$Bit $tmp1941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1941.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1942 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1942)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1943.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1944 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1944->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1944->refCount.value = 1;
                panda$core$Object* $tmp1946 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1947 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1946));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1944, ((panda$core$Int64) { 1025 }), p_offset, $tmp1947);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1927, ((panda$core$Object*) $tmp1944));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1948);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1951 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1950 = $tmp1951.value;
        if (!$tmp1950) goto $l1952;
        panda$core$Bit $tmp1953 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1950 = $tmp1953.value;
        $l1952:;
        panda$core$Bit $tmp1954 = { $tmp1950 };
        bool $tmp1949 = $tmp1954.value;
        if (!$tmp1949) goto $l1955;
        panda$core$Bit $tmp1956 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1949 = $tmp1956.value;
        $l1955:;
        panda$core$Bit $tmp1957 = { $tmp1949 };
        if ($tmp1957.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1958);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1960 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1959 = $tmp1960.value;
    if (!$tmp1959) goto $l1961;
    $tmp1959 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1961:;
    panda$core$Bit $tmp1962 = { $tmp1959 };
    if ($tmp1962.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1964 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1964->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1964->refCount.value = 1;
        panda$core$Object* $tmp1966 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1967 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1966));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1964, ((panda$core$Int64) { 1025 }), p_offset, $tmp1967);
        selfNode1963 = $tmp1964;
        org$pandalanguage$pandac$Type* $tmp1968 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1969 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1963, $tmp1968);
        selfNode1963 = $tmp1969;
        PANDA_ASSERT(((panda$core$Bit) { selfNode1963 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1927, ((panda$core$Object*) selfNode1963));
        panda$core$Object* $tmp1970 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1971 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1970));
        panda$core$Bit $tmp1972 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1971);
        if ($tmp1972.value) {
        {
            panda$core$String* $tmp1974 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1973, $tmp1974);
            panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, &$s1976);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1977);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1980 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp1981 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1980);
    bool $tmp1979 = $tmp1981.value;
    if (!$tmp1979) goto $l1982;
    $tmp1979 = ((panda$core$Bit) { p_target != NULL }).value;
    $l1982:;
    panda$core$Bit $tmp1983 = { $tmp1979 };
    bool $tmp1978 = $tmp1983.value;
    if (!$tmp1978) goto $l1984;
    panda$core$Bit $tmp1985 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp1978 = $tmp1985.value;
    $l1984:;
    panda$core$Bit $tmp1986 = { $tmp1978 };
    if ($tmp1986.value) {
    {
        panda$core$String* $tmp1988 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1987, $tmp1988);
        panda$core$String* $tmp1991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1989, &$s1990);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1991);
    }
    }
    }
    }
    ITable* $tmp1993 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1993->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1993 = $tmp1993->next;
    }
    $fn1995 $tmp1994 = $tmp1993->methods[0];
    panda$core$Int64 $tmp1996 = $tmp1994(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1992, ((panda$core$Int64) { 0 }), $tmp1996, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1998 = $tmp1992.start.value;
    panda$core$Int64 i1997 = { $tmp1998 };
    int64_t $tmp2000 = $tmp1992.end.value;
    int64_t $tmp2001 = $tmp1992.step.value;
    bool $tmp2002 = $tmp1992.inclusive.value;
    bool $tmp2009 = $tmp2001 > 0;
    if ($tmp2009) goto $l2007; else goto $l2008;
    $l2007:;
    if ($tmp2002) goto $l2010; else goto $l2011;
    $l2010:;
    if ($tmp1998 <= $tmp2000) goto $l2003; else goto $l2005;
    $l2011:;
    if ($tmp1998 < $tmp2000) goto $l2003; else goto $l2005;
    $l2008:;
    if ($tmp2002) goto $l2012; else goto $l2013;
    $l2012:;
    if ($tmp1998 >= $tmp2000) goto $l2003; else goto $l2005;
    $l2013:;
    if ($tmp1998 > $tmp2000) goto $l2003; else goto $l2005;
    $l2003:;
    {
        ITable* $tmp2016 = p_args->$class->itable;
        while ($tmp2016->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2016 = $tmp2016->next;
        }
        $fn2018 $tmp2017 = $tmp2016->methods[0];
        panda$core$Object* $tmp2019 = $tmp2017(p_args, i1997);
        org$pandalanguage$pandac$Type* $tmp2020 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1997);
        org$pandalanguage$pandac$IRNode* $tmp2021 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2019), $tmp2020);
        coerced2015 = $tmp2021;
        if (((panda$core$Bit) { coerced2015 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2022 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1997);
        org$pandalanguage$pandac$IRNode* $tmp2023 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2015, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2022)->type);
        coerced2015 = $tmp2023;
        if (((panda$core$Bit) { coerced2015 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1927, ((panda$core$Object*) coerced2015));
    }
    $l2006:;
    if ($tmp2009) goto $l2025; else goto $l2026;
    $l2025:;
    int64_t $tmp2027 = $tmp2000 - i1997.value;
    if ($tmp2002) goto $l2028; else goto $l2029;
    $l2028:;
    if ($tmp2027 >= $tmp2001) goto $l2024; else goto $l2005;
    $l2029:;
    if ($tmp2027 > $tmp2001) goto $l2024; else goto $l2005;
    $l2026:;
    int64_t $tmp2031 = i1997.value - $tmp2000;
    if ($tmp2002) goto $l2032; else goto $l2033;
    $l2032:;
    if ($tmp2031 >= -$tmp2001) goto $l2024; else goto $l2005;
    $l2033:;
    if ($tmp2031 > -$tmp2001) goto $l2024; else goto $l2005;
    $l2024:;
    i1997.value += $tmp2001;
    goto $l2003;
    $l2005:;
    panda$core$Bit $tmp2037 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2036);
    if ($tmp2037.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2038 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2038->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2038->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2040 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2038, ((panda$core$Int64) { 1005 }), p_offset, $tmp2040, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1927));
        result2035 = $tmp2038;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2041 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2041->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2041->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2041, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1927));
        result2035 = $tmp2041;
        org$pandalanguage$pandac$Type* $tmp2043 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2044 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2035, p_offset, ((panda$core$Bit) { false }), $tmp2043);
        result2035 = $tmp2044;
    }
    }
    return result2035;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2045 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2045;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2046;
    org$pandalanguage$pandac$ClassDecl* cl2048;
    org$pandalanguage$pandac$Symbol* s2052;
    org$pandalanguage$pandac$IRNode* ref2074;
    org$pandalanguage$pandac$IRNode* $tmp2047 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2046 = $tmp2047;
    if (((panda$core$Bit) { resolved2046 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2046->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2049.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2050 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2046->payload));
        cl2048 = $tmp2050;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2051 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2046->type);
        cl2048 = $tmp2051;
    }
    }
    if (((panda$core$Bit) { cl2048 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2053 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2048);
    org$pandalanguage$pandac$Symbol* $tmp2054 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2053, p_name);
    s2052 = $tmp2054;
    if (((panda$core$Bit) { s2052 == NULL }).value) {
    {
        panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2055, ((org$pandalanguage$pandac$Symbol*) cl2048)->name);
        panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2056, &$s2057);
        panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, p_name);
        panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp2061);
        return NULL;
    }
    }
    panda$core$Bit $tmp2063 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2052->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2062 = $tmp2063.value;
    if (!$tmp2062) goto $l2064;
    panda$core$Bit $tmp2065 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2052->kind, ((panda$core$Int64) { 205 }));
    $tmp2062 = $tmp2065.value;
    $l2064:;
    panda$core$Bit $tmp2066 = { $tmp2062 };
    if ($tmp2066.value) {
    {
        panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2067, ((org$pandalanguage$pandac$Symbol*) cl2048)->name);
        panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, &$s2069);
        panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, p_name);
        panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2072);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp2073);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2075 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2048);
    org$pandalanguage$pandac$IRNode* $tmp2076 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->offset, p_target, s2052, $tmp2075);
    ref2074 = $tmp2076;
    if (((panda$core$Bit) { ref2074 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2077 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2074, p_args, p_expectedType);
    return $tmp2077;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2078 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2078;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2079;
    panda$collections$Array* methods2086;
    org$pandalanguage$pandac$MethodDecl* first2091;
    panda$core$MutableString* msg2096;
    panda$core$String* separator2108;
    panda$collections$Iterator* a$Iter2110;
    org$pandalanguage$pandac$IRNode* a2122;
    org$pandalanguage$pandac$IRNode* target2136;
    panda$collections$Array* children2144;
    panda$collections$Array* types2150;
    panda$collections$Iterator* m$Iter2153;
    org$pandalanguage$pandac$MethodRef* m2165;
    org$pandalanguage$pandac$IRNode* target2175;
    org$pandalanguage$pandac$IRNode* initCall2178;
    panda$collections$Array* children2182;
    org$pandalanguage$pandac$IRNode* resolved2187;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2080 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2080, ((panda$core$Int64) { 0 }));
            if ($tmp2081.value) {
            {
                target2079 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2082 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2082, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2083.value);
                panda$core$Object* $tmp2084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2079 = ((org$pandalanguage$pandac$IRNode*) $tmp2084);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2085 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target2079, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2085;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2087 = (panda$collections$Array*) malloc(40);
            $tmp2087->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2087->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2087, ((panda$collections$ListView*) p_m->payload));
            methods2086 = $tmp2087;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2086, p_args, p_expectedType);
            panda$core$Int64 $tmp2089 = panda$collections$Array$get_count$R$panda$core$Int64(methods2086);
            panda$core$Bit $tmp2090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2089, ((panda$core$Int64) { 0 }));
            if ($tmp2090.value) {
            {
                ITable* $tmp2092 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2092->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2092 = $tmp2092->next;
                }
                $fn2094 $tmp2093 = $tmp2092->methods[0];
                panda$core$Object* $tmp2095 = $tmp2093(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2091 = ((org$pandalanguage$pandac$MethodRef*) $tmp2095)->value;
                panda$core$MutableString* $tmp2097 = (panda$core$MutableString*) malloc(40);
                $tmp2097->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2097->refCount.value = 1;
                panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2099, ((org$pandalanguage$pandac$Symbol*) first2091->owner)->name);
                panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, &$s2101);
                panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2103, ((org$pandalanguage$pandac$Symbol*) first2091)->name);
                panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, &$s2105);
                panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, $tmp2106);
                panda$core$MutableString$init$panda$core$String($tmp2097, $tmp2107);
                msg2096 = $tmp2097;
                separator2108 = &$s2109;
                {
                    ITable* $tmp2111 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2111 = $tmp2111->next;
                    }
                    $fn2113 $tmp2112 = $tmp2111->methods[0];
                    panda$collections$Iterator* $tmp2114 = $tmp2112(((panda$collections$Iterable*) p_args));
                    a$Iter2110 = $tmp2114;
                    $l2115:;
                    ITable* $tmp2117 = a$Iter2110->$class->itable;
                    while ($tmp2117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2117 = $tmp2117->next;
                    }
                    $fn2119 $tmp2118 = $tmp2117->methods[0];
                    panda$core$Bit $tmp2120 = $tmp2118(a$Iter2110);
                    panda$core$Bit $tmp2121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2120);
                    if (!$tmp2121.value) goto $l2116;
                    {
                        ITable* $tmp2123 = a$Iter2110->$class->itable;
                        while ($tmp2123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2123 = $tmp2123->next;
                        }
                        $fn2125 $tmp2124 = $tmp2123->methods[1];
                        panda$core$Object* $tmp2126 = $tmp2124(a$Iter2110);
                        a2122 = ((org$pandalanguage$pandac$IRNode*) $tmp2126);
                        panda$core$MutableString$append$panda$core$String(msg2096, separator2108);
                        panda$core$MutableString$append$panda$core$Object(msg2096, ((panda$core$Object*) a2122->type));
                        separator2108 = &$s2127;
                    }
                    goto $l2115;
                    $l2116:;
                }
                panda$core$MutableString$append$panda$core$String(msg2096, &$s2128);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2129, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
                    panda$core$MutableString$append$panda$core$String(msg2096, $tmp2132);
                }
                }
                panda$core$String* $tmp2133 = panda$core$MutableString$convert$R$panda$core$String(msg2096);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_m->offset, $tmp2133);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2134 = panda$collections$Array$get_count$R$panda$core$Int64(methods2086);
            panda$core$Bit $tmp2135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2134, ((panda$core$Int64) { 1 }));
            if ($tmp2135.value) {
            {
                panda$core$Int64 $tmp2137 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2137, ((panda$core$Int64) { 1 }));
                if ($tmp2138.value) {
                {
                    panda$core$Object* $tmp2139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2136 = ((org$pandalanguage$pandac$IRNode*) $tmp2139);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2140 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2140, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2141.value);
                    target2136 = NULL;
                }
                }
                panda$core$Object* $tmp2142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2086, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2143 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target2136, ((org$pandalanguage$pandac$MethodRef*) $tmp2142), p_args);
                return $tmp2143;
            }
            }
            panda$collections$Array* $tmp2145 = (panda$collections$Array*) malloc(40);
            $tmp2145->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2145->refCount.value = 1;
            panda$collections$Array$init($tmp2145);
            children2144 = $tmp2145;
            org$pandalanguage$pandac$IRNode* $tmp2147 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2147->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2147->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2149 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2147, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp2149, ((panda$core$Object*) methods2086), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2144, ((panda$core$Object*) $tmp2147));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2144, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2151 = (panda$collections$Array*) malloc(40);
            $tmp2151->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2151->refCount.value = 1;
            panda$collections$Array$init($tmp2151);
            types2150 = $tmp2151;
            {
                ITable* $tmp2154 = ((panda$collections$Iterable*) methods2086)->$class->itable;
                while ($tmp2154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2154 = $tmp2154->next;
                }
                $fn2156 $tmp2155 = $tmp2154->methods[0];
                panda$collections$Iterator* $tmp2157 = $tmp2155(((panda$collections$Iterable*) methods2086));
                m$Iter2153 = $tmp2157;
                $l2158:;
                ITable* $tmp2160 = m$Iter2153->$class->itable;
                while ($tmp2160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2160 = $tmp2160->next;
                }
                $fn2162 $tmp2161 = $tmp2160->methods[0];
                panda$core$Bit $tmp2163 = $tmp2161(m$Iter2153);
                panda$core$Bit $tmp2164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2163);
                if (!$tmp2164.value) goto $l2159;
                {
                    ITable* $tmp2166 = m$Iter2153->$class->itable;
                    while ($tmp2166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2166 = $tmp2166->next;
                    }
                    $fn2168 $tmp2167 = $tmp2166->methods[1];
                    panda$core$Object* $tmp2169 = $tmp2167(m$Iter2153);
                    m2165 = ((org$pandalanguage$pandac$MethodRef*) $tmp2169);
                    org$pandalanguage$pandac$Type* $tmp2170 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2165);
                    panda$collections$Array$add$panda$collections$Array$T(types2150, ((panda$core$Object*) $tmp2170));
                }
                goto $l2158;
                $l2159:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2171 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2171->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2171->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2173 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp2173->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2173->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2173, ((panda$collections$ListView*) types2150));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2171, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp2173, ((panda$collections$ListView*) children2144));
            return $tmp2171;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2176 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2176->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2176->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2176, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2175 = $tmp2176;
            org$pandalanguage$pandac$IRNode* $tmp2180 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2175, &$s2179, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2181 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2180);
            initCall2178 = $tmp2181;
            if (((panda$core$Bit) { initCall2178 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2183 = (panda$collections$Array*) malloc(40);
            $tmp2183->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2183->refCount.value = 1;
            panda$collections$Array$init($tmp2183);
            children2182 = $tmp2183;
            panda$collections$Array$add$panda$collections$Array$T(children2182, ((panda$core$Object*) initCall2178));
            org$pandalanguage$pandac$IRNode* $tmp2185 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2185->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2185->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2185, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2182));
            return $tmp2185;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2188 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2187 = $tmp2188;
            if (((panda$core$Bit) { resolved2187 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2189, ((panda$core$Object*) resolved2187->type));
            panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, resolved2187->offset, $tmp2192);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2193;
    panda$core$MutableString* typeName2196;
    panda$core$String* separator2200;
    panda$collections$Iterator* p$Iter2202;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2214;
    panda$core$Int64 kind2220;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2194 = (panda$collections$Array*) malloc(40);
    $tmp2194->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2194->refCount.value = 1;
    panda$collections$Array$init($tmp2194);
    subtypes2193 = $tmp2194;
    panda$core$MutableString* $tmp2197 = (panda$core$MutableString*) malloc(40);
    $tmp2197->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2197->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2197, &$s2199);
    typeName2196 = $tmp2197;
    separator2200 = &$s2201;
    {
        ITable* $tmp2203 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2203 = $tmp2203->next;
        }
        $fn2205 $tmp2204 = $tmp2203->methods[0];
        panda$collections$Iterator* $tmp2206 = $tmp2204(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2202 = $tmp2206;
        $l2207:;
        ITable* $tmp2209 = p$Iter2202->$class->itable;
        while ($tmp2209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2209 = $tmp2209->next;
        }
        $fn2211 $tmp2210 = $tmp2209->methods[0];
        panda$core$Bit $tmp2212 = $tmp2210(p$Iter2202);
        panda$core$Bit $tmp2213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2212);
        if (!$tmp2213.value) goto $l2208;
        {
            ITable* $tmp2215 = p$Iter2202->$class->itable;
            while ($tmp2215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2215 = $tmp2215->next;
            }
            $fn2217 $tmp2216 = $tmp2215->methods[1];
            panda$core$Object* $tmp2218 = $tmp2216(p$Iter2202);
            p2214 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2218);
            panda$core$MutableString$append$panda$core$String(typeName2196, separator2200);
            panda$core$MutableString$append$panda$core$String(typeName2196, ((org$pandalanguage$pandac$Symbol*) p2214->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2193, ((panda$core$Object*) p2214->type));
            separator2200 = &$s2219;
        }
        goto $l2207;
        $l2208:;
    }
    panda$core$Bit $tmp2221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2221.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2196, &$s2222);
        kind2220 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2196, &$s2223);
        kind2220 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2193, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2224 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2225 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2224);
    if ($tmp2225.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2196, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2196, &$s2226);
    org$pandalanguage$pandac$Type* $tmp2227 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp2227->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2227->refCount.value = 1;
    panda$core$String* $tmp2229 = panda$core$MutableString$convert$R$panda$core$String(typeName2196);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2227, $tmp2229, kind2220, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2193), ((panda$core$Bit) { true }));
    return $tmp2227;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2230;
    panda$core$MutableString* typeName2233;
    panda$collections$Iterator* p$Iter2237;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2249;
    panda$core$Int64 kind2255;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2231 = (panda$collections$Array*) malloc(40);
    $tmp2231->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2231->refCount.value = 1;
    panda$collections$Array$init($tmp2231);
    subtypes2230 = $tmp2231;
    panda$core$MutableString* $tmp2234 = (panda$core$MutableString*) malloc(40);
    $tmp2234->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2234->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2234, &$s2236);
    typeName2233 = $tmp2234;
    panda$core$MutableString$append$panda$core$String(typeName2233, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2230, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2238 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2238 = $tmp2238->next;
        }
        $fn2240 $tmp2239 = $tmp2238->methods[0];
        panda$collections$Iterator* $tmp2241 = $tmp2239(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2237 = $tmp2241;
        $l2242:;
        ITable* $tmp2244 = p$Iter2237->$class->itable;
        while ($tmp2244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2244 = $tmp2244->next;
        }
        $fn2246 $tmp2245 = $tmp2244->methods[0];
        panda$core$Bit $tmp2247 = $tmp2245(p$Iter2237);
        panda$core$Bit $tmp2248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2247);
        if (!$tmp2248.value) goto $l2243;
        {
            ITable* $tmp2250 = p$Iter2237->$class->itable;
            while ($tmp2250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2250 = $tmp2250->next;
            }
            $fn2252 $tmp2251 = $tmp2250->methods[1];
            panda$core$Object* $tmp2253 = $tmp2251(p$Iter2237);
            p2249 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2253);
            panda$core$MutableString$append$panda$core$String(typeName2233, &$s2254);
            panda$core$MutableString$append$panda$core$String(typeName2233, ((org$pandalanguage$pandac$Symbol*) p2249->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2230, ((panda$core$Object*) p2249->type));
        }
        goto $l2242;
        $l2243:;
    }
    panda$core$Bit $tmp2256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2256.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2233, &$s2257);
        kind2255 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2233, &$s2258);
        kind2255 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2230, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2259 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2260 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2259);
    if ($tmp2260.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2233, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2233, &$s2261);
    org$pandalanguage$pandac$Type* $tmp2262 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp2262->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2262->refCount.value = 1;
    panda$core$String* $tmp2264 = panda$core$MutableString$convert$R$panda$core$String(typeName2233);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2262, $tmp2264, kind2255, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2230), ((panda$core$Bit) { true }));
    return $tmp2262;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2265;
    org$pandalanguage$pandac$MethodDecl* $tmp2266 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2265 = $tmp2266;
    if (((panda$core$Bit) { inherited2265 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2267 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2267;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2268 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2265);
    return $tmp2268;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2269 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2270 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2269);
    return $tmp2270;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2271;
    org$pandalanguage$pandac$MethodDecl* $tmp2272 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2271 = $tmp2272;
    if (((panda$core$Bit) { inherited2271 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2273 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2273;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2274 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2271, p_selfType);
    return $tmp2274;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2275;
        }
        break;
        case 52:
        {
            return &$s2276;
        }
        break;
        case 53:
        {
            return &$s2277;
        }
        break;
        case 54:
        {
            return &$s2278;
        }
        break;
        case 55:
        {
            return &$s2279;
        }
        break;
        case 56:
        {
            return &$s2280;
        }
        break;
        case 57:
        {
            return &$s2281;
        }
        break;
        case 58:
        {
            return &$s2282;
        }
        break;
        case 59:
        {
            return &$s2283;
        }
        break;
        case 63:
        {
            return &$s2284;
        }
        break;
        case 62:
        {
            return &$s2285;
        }
        break;
        case 65:
        {
            return &$s2286;
        }
        break;
        case 64:
        {
            return &$s2287;
        }
        break;
        case 68:
        {
            return &$s2288;
        }
        break;
        case 69:
        {
            return &$s2289;
        }
        break;
        case 66:
        {
            return &$s2290;
        }
        break;
        case 67:
        {
            return &$s2291;
        }
        break;
        case 70:
        {
            return &$s2292;
        }
        break;
        case 71:
        {
            return &$s2293;
        }
        break;
        case 49:
        {
            return &$s2294;
        }
        break;
        case 50:
        {
            return &$s2295;
        }
        break;
        case 72:
        {
            return &$s2296;
        }
        break;
        case 1:
        {
            return &$s2297;
        }
        break;
        case 101:
        {
            return &$s2298;
        }
        break;
        case 73:
        {
            return &$s2299;
        }
        break;
        case 60:
        {
            return &$s2300;
        }
        break;
        case 61:
        {
            return &$s2301;
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
            panda$core$Int64 $tmp2302 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2302, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2303.value);
            panda$core$Bit $tmp2304 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2304.value) {
            {
                panda$core$Object* $tmp2305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2306 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2305));
                return $tmp2306;
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
            panda$core$Object* $tmp2307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2308 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2307));
            return $tmp2308;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2334;
    panda$core$Int64 r2336;
    panda$core$Bit $tmp2310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2309 = $tmp2310.value;
    if ($tmp2309) goto $l2311;
    panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2309 = $tmp2312.value;
    $l2311:;
    panda$core$Bit $tmp2313 = { $tmp2309 };
    PANDA_ASSERT($tmp2313.value);
    panda$core$Bit $tmp2315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2314 = $tmp2315.value;
    if ($tmp2314) goto $l2316;
    panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2314 = $tmp2317.value;
    $l2316:;
    panda$core$Bit $tmp2318 = { $tmp2314 };
    PANDA_ASSERT($tmp2318.value);
    panda$core$Bit $tmp2321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2320 = $tmp2321.value;
    if ($tmp2320) goto $l2322;
    panda$core$UInt64 $tmp2324 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2325 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2324);
    bool $tmp2323 = $tmp2325.value;
    if (!$tmp2323) goto $l2326;
    panda$core$Bit $tmp2327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2323 = $tmp2327.value;
    $l2326:;
    panda$core$Bit $tmp2328 = { $tmp2323 };
    $tmp2320 = $tmp2328.value;
    $l2322:;
    panda$core$Bit $tmp2329 = { $tmp2320 };
    bool $tmp2319 = $tmp2329.value;
    if ($tmp2319) goto $l2330;
    panda$core$UInt64 $tmp2331 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2332 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2331);
    $tmp2319 = $tmp2332.value;
    $l2330:;
    panda$core$Bit $tmp2333 = { $tmp2319 };
    if ($tmp2333.value) {
    {
        panda$core$Int64 $tmp2335 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2334 = $tmp2335;
        panda$core$Int64 $tmp2337 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2336 = $tmp2337;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2338 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2338->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2338->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2340 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2341 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2342 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2341);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2338, ((panda$core$Int64) { 1004 }), p_offset, $tmp2340, $tmp2342);
                return $tmp2338;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2343 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2343->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2343->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2345 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2346 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2347 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2346);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2343, ((panda$core$Int64) { 1004 }), p_offset, $tmp2345, $tmp2347);
                return $tmp2343;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2348 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2348->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2348->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2350 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2351 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2352 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2351);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2348, ((panda$core$Int64) { 1004 }), p_offset, $tmp2350, $tmp2352);
                return $tmp2348;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2353 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2353->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2353->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2355 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2356 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2357 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2356);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2353, ((panda$core$Int64) { 1004 }), p_offset, $tmp2355, $tmp2357);
                return $tmp2353;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2358 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2358->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2358->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2360 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2361 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2362 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2361);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2358, ((panda$core$Int64) { 1004 }), p_offset, $tmp2360, $tmp2362);
                return $tmp2358;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2363 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2363->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2365 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2334, r2336);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2363, ((panda$core$Int64) { 1011 }), p_offset, $tmp2365, $tmp2366);
                return $tmp2363;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2367 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2367->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2367->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2369 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2370 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2334, r2336);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2367, ((panda$core$Int64) { 1011 }), p_offset, $tmp2369, $tmp2370);
                return $tmp2367;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2371 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2371->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2371->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2373 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2374 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2334, r2336);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2371, ((panda$core$Int64) { 1011 }), p_offset, $tmp2373, $tmp2374);
                return $tmp2371;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2375 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2375->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2375->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2377 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2378 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2334, r2336);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2375, ((panda$core$Int64) { 1011 }), p_offset, $tmp2377, $tmp2378);
                return $tmp2375;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2379 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2379->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2379->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2381 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2382 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2334, r2336);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2379, ((panda$core$Int64) { 1011 }), p_offset, $tmp2381, $tmp2382);
                return $tmp2379;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2383 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2383->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2383->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2385 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2386 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2334, r2336);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2383, ((panda$core$Int64) { 1011 }), p_offset, $tmp2385, $tmp2386);
                return $tmp2383;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2387 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2387->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2387->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2389 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2390 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2391 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2390);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2387, ((panda$core$Int64) { 1004 }), p_offset, $tmp2389, $tmp2391);
                return $tmp2387;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2392 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2392->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2392->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2394 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2395 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2396 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2395);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2392, ((panda$core$Int64) { 1004 }), p_offset, $tmp2394, $tmp2396);
                return $tmp2392;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2397 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2397->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2397->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2399 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2400 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2401 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2400);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2397, ((panda$core$Int64) { 1004 }), p_offset, $tmp2399, $tmp2401);
                return $tmp2397;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2402 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2402->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2402->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2404 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2405 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2406 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2405);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2402, ((panda$core$Int64) { 1004 }), p_offset, $tmp2404, $tmp2406);
                return $tmp2402;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2407 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2407->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2407->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2409 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2410 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2334, r2336);
                panda$core$UInt64 $tmp2411 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2410);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2407, ((panda$core$Int64) { 1004 }), p_offset, $tmp2409, $tmp2411);
                return $tmp2407;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s2412);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2413.value) {
    {
        panda$core$Object* $tmp2414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2414);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2419;
    org$pandalanguage$pandac$IRNode* resolved2427;
    panda$collections$Array* children2432;
    panda$core$UInt64 baseId2438;
    org$pandalanguage$pandac$IRNode* base2439;
    panda$core$UInt64 indexId2446;
    org$pandalanguage$pandac$IRNode* index2447;
    org$pandalanguage$pandac$IRNode* baseRef2452;
    org$pandalanguage$pandac$IRNode* indexRef2455;
    org$pandalanguage$pandac$IRNode* rhsIndex2458;
    org$pandalanguage$pandac$IRNode* value2460;
    panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2415.value);
    panda$core$Int64 $tmp2416 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2416, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2417.value);
    panda$core$Bit $tmp2418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2418.value) {
    {
        panda$collections$Array* $tmp2420 = (panda$collections$Array*) malloc(40);
        $tmp2420->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2420->refCount.value = 1;
        panda$collections$Array$init($tmp2420);
        args2419 = $tmp2420;
        panda$core$Object* $tmp2422 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2419, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2422)));
        panda$collections$Array$add$panda$collections$Array$T(args2419, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2423 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2425 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2423), &$s2424, ((panda$collections$ListView*) args2419));
        return $tmp2425;
    }
    }
    panda$core$Bit $tmp2426 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2426.value);
    org$pandalanguage$pandac$IRNode* $tmp2428 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2427 = $tmp2428;
    if (((panda$core$Bit) { resolved2427 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2429 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2427);
    resolved2427 = $tmp2429;
    panda$core$Int64 $tmp2430 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2427->children);
    panda$core$Bit $tmp2431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2430, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2431.value);
    panda$collections$Array* $tmp2433 = (panda$collections$Array*) malloc(40);
    $tmp2433->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2433->refCount.value = 1;
    panda$collections$Array$init($tmp2433);
    children2432 = $tmp2433;
    panda$core$Object* $tmp2435 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2427->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2436 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2435));
    panda$collections$Array$add$panda$collections$Array$T(children2432, ((panda$core$Object*) $tmp2436));
    panda$core$UInt64 $tmp2437 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2437;
    baseId2438 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2440 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2440->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2440->refCount.value = 1;
    panda$core$Object* $tmp2442 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2432, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2432, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2440, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2442)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2443)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2438)), ((panda$collections$ListView*) children2432));
    base2439 = $tmp2440;
    panda$collections$Array$clear(children2432);
    panda$core$Object* $tmp2444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2427->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2432, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2444)));
    panda$core$UInt64 $tmp2445 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2445;
    indexId2446 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2448 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2448->refCount.value = 1;
    panda$core$Object* $tmp2450 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2432, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2451 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2432, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2448, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2450)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2451)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2446)), ((panda$collections$ListView*) children2432));
    index2447 = $tmp2448;
    org$pandalanguage$pandac$IRNode* $tmp2453 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2453->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2453, ((panda$core$Int64) { 1028 }), base2439->offset, base2439->type, baseId2438);
    baseRef2452 = $tmp2453;
    org$pandalanguage$pandac$IRNode* $tmp2456 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2456->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2456->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2456, ((panda$core$Int64) { 1028 }), index2447->offset, index2447->type, indexId2446);
    indexRef2455 = $tmp2456;
    org$pandalanguage$pandac$IRNode* $tmp2459 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, baseRef2452, ((panda$core$Int64) { 101 }), indexRef2455);
    rhsIndex2458 = $tmp2459;
    if (((panda$core$Bit) { rhsIndex2458 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2461 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2462 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, rhsIndex2458, $tmp2461, p_right);
    value2460 = $tmp2462;
    if (((panda$core$Bit) { value2460 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2465 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2458->type);
    bool $tmp2464 = $tmp2465.value;
    if (!$tmp2464) goto $l2466;
    panda$core$Bit $tmp2467 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2464 = $tmp2467.value;
    $l2466:;
    panda$core$Bit $tmp2468 = { $tmp2464 };
    bool $tmp2463 = $tmp2468.value;
    if (!$tmp2463) goto $l2469;
    panda$core$Bit $tmp2470 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2458->type, value2460->type);
    $tmp2463 = $tmp2470.value;
    $l2469:;
    panda$core$Bit $tmp2471 = { $tmp2463 };
    if ($tmp2471.value) {
    {
        panda$collections$Array* $tmp2473 = (panda$collections$Array*) malloc(40);
        $tmp2473->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2473->refCount.value = 1;
        panda$collections$Array$init($tmp2473);
        org$pandalanguage$pandac$IRNode* $tmp2475 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2460, &$s2472, ((panda$collections$ListView*) $tmp2473), resolved2427->type);
        value2460 = $tmp2475;
        if (((panda$core$Bit) { value2460 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2432);
    panda$collections$Array$add$panda$collections$Array$T(children2432, ((panda$core$Object*) index2447));
    panda$collections$Array$add$panda$collections$Array$T(children2432, ((panda$core$Object*) value2460));
    org$pandalanguage$pandac$IRNode* $tmp2477 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2439, &$s2476, ((panda$collections$ListView*) children2432));
    return $tmp2477;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2478;
    org$pandalanguage$pandac$IRNode* right2479;
    panda$core$Int64 kind2503;
    org$pandalanguage$pandac$IRNode* resolved2510;
    panda$collections$Array* children2512;
    org$pandalanguage$pandac$IRNode* resolved2519;
    panda$collections$Array* children2521;
    org$pandalanguage$pandac$ClassDecl* cl2533;
    org$pandalanguage$pandac$ClassDecl* cl2550;
    org$pandalanguage$pandac$IRNode* finalLeft2566;
    org$pandalanguage$pandac$IRNode* finalRight2569;
    panda$collections$Array* children2572;
    panda$collections$Array* children2586;
    panda$collections$Array* children2598;
    org$pandalanguage$pandac$IRNode* reusedLeft2604;
    org$pandalanguage$pandac$ClassDecl* cl2621;
    panda$collections$ListView* parameters2623;
    org$pandalanguage$pandac$Symbol* methods2625;
    org$pandalanguage$pandac$Type* type2629;
    panda$collections$Array* types2630;
    org$pandalanguage$pandac$MethodDecl* m2634;
    panda$collections$Iterator* m$Iter2639;
    org$pandalanguage$pandac$MethodDecl* m2651;
    panda$collections$Array* children2662;
    panda$collections$Array* children2691;
    panda$collections$Array* children2707;
    org$pandalanguage$pandac$Type* resultType2730;
    org$pandalanguage$pandac$IRNode* result2734;
    org$pandalanguage$pandac$IRNode* resolved2737;
    org$pandalanguage$pandac$IRNode* target2743;
    left2478 = p_rawLeft;
    right2479 = p_rawRight;
    panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2478->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2480.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2481 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2479);
        right2479 = $tmp2481;
        if (((panda$core$Bit) { right2479 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2482 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2478, right2479->type);
        if (((panda$core$Bit) { $tmp2482.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2483 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2478, right2479->type);
            left2478 = $tmp2483;
        }
        }
    }
    }
    panda$core$Bit $tmp2485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2479->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2484 = $tmp2485.value;
    if (!$tmp2484) goto $l2486;
    panda$core$Int64$nullable $tmp2487 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2479, left2478->type);
    $tmp2484 = ((panda$core$Bit) { $tmp2487.nonnull }).value;
    $l2486:;
    panda$core$Bit $tmp2488 = { $tmp2484 };
    if ($tmp2488.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2489 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2479, left2478->type);
        right2479 = $tmp2489;
    }
    }
    panda$core$Bit $tmp2493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2492 = $tmp2493.value;
    if ($tmp2492) goto $l2494;
    panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2492 = $tmp2495.value;
    $l2494:;
    panda$core$Bit $tmp2496 = { $tmp2492 };
    bool $tmp2491 = $tmp2496.value;
    if ($tmp2491) goto $l2497;
    panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2491 = $tmp2498.value;
    $l2497:;
    panda$core$Bit $tmp2499 = { $tmp2491 };
    bool $tmp2490 = $tmp2499.value;
    if ($tmp2490) goto $l2500;
    panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2490 = $tmp2501.value;
    $l2500:;
    panda$core$Bit $tmp2502 = { $tmp2490 };
    if ($tmp2502.value) {
    {
        panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2504 = $tmp2505.value;
        if ($tmp2504) goto $l2506;
        panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2504 = $tmp2507.value;
        $l2506:;
        panda$core$Bit $tmp2508 = { $tmp2504 };
        if ($tmp2508.value) {
        {
            kind2503 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2503 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2478->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2509.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2511 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2479);
            resolved2510 = $tmp2511;
            if (((panda$core$Bit) { resolved2510 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2513 = (panda$collections$Array*) malloc(40);
            $tmp2513->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2513->refCount.value = 1;
            panda$collections$Array$init($tmp2513);
            children2512 = $tmp2513;
            panda$collections$Array$add$panda$collections$Array$T(children2512, ((panda$core$Object*) resolved2510));
            org$pandalanguage$pandac$IRNode* $tmp2515 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2515->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2515->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2517 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2515, kind2503, p_offset, $tmp2517, ((panda$collections$ListView*) children2512));
            return $tmp2515;
        }
        }
        panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2479->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2518.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2520 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2478);
            resolved2519 = $tmp2520;
            if (((panda$core$Bit) { resolved2519 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2522 = (panda$collections$Array*) malloc(40);
            $tmp2522->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2522->refCount.value = 1;
            panda$collections$Array$init($tmp2522);
            children2521 = $tmp2522;
            panda$collections$Array$add$panda$collections$Array$T(children2521, ((panda$core$Object*) resolved2519));
            org$pandalanguage$pandac$IRNode* $tmp2524 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2524->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2524->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2526 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2524, kind2503, p_offset, $tmp2526, ((panda$collections$ListView*) children2521));
            return $tmp2524;
        }
        }
    }
    }
    panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2527 = $tmp2528.value;
    if ($tmp2527) goto $l2529;
    panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2527 = $tmp2530.value;
    $l2529:;
    panda$core$Bit $tmp2531 = { $tmp2527 };
    if ($tmp2531.value) {
    {
        panda$core$Bit $tmp2532 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2478->type);
        if ($tmp2532.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2534 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2478->type);
            cl2533 = $tmp2534;
            if (((panda$core$Bit) { cl2533 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2535 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2533);
            if ($tmp2535.value) {
            {
                panda$core$String* $tmp2537 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2536, $tmp2537);
                panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
                panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2540, ((panda$core$Object*) left2478->type));
                panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
                panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2544, ((panda$core$Object*) right2479->type));
                panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, &$s2546);
                panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, $tmp2547);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2548);
            }
            }
        }
        }
        panda$core$Bit $tmp2549 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2479->type);
        if ($tmp2549.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2551 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2479->type);
            cl2550 = $tmp2551;
            if (((panda$core$Bit) { cl2550 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2552 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2550);
            if ($tmp2552.value) {
            {
                panda$core$String* $tmp2554 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2553, $tmp2554);
                panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
                panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2557, ((panda$core$Object*) left2478->type));
                panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
                panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2561, ((panda$core$Object*) right2479->type));
                panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, &$s2563);
                panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, $tmp2564);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2565);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2567 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2568 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2478, $tmp2567);
        finalLeft2566 = $tmp2568;
        if (((panda$core$Bit) { finalLeft2566 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2570 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2571 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2479, $tmp2570);
        finalRight2569 = $tmp2571;
        if (((panda$core$Bit) { finalRight2569 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2573 = (panda$collections$Array*) malloc(40);
        $tmp2573->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2573->refCount.value = 1;
        panda$collections$Array$init($tmp2573);
        children2572 = $tmp2573;
        panda$collections$Array$add$panda$collections$Array$T(children2572, ((panda$core$Object*) finalLeft2566));
        panda$collections$Array$add$panda$collections$Array$T(children2572, ((panda$core$Object*) finalRight2569));
        org$pandalanguage$pandac$IRNode* $tmp2575 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2575->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2575->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2577 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2575, ((panda$core$Int64) { 1023 }), p_offset, $tmp2577, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2572));
        return $tmp2575;
    }
    }
    panda$core$Bit $tmp2578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2578.value) {
    {
        panda$core$Bit $tmp2579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2478->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2579.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2580 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2478, p_op, right2479);
            return $tmp2580;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2581 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2478);
        left2478 = $tmp2581;
        if (((panda$core$Bit) { left2478 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2582 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2479, left2478->type);
        right2479 = $tmp2582;
        if (((panda$core$Bit) { right2479 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2583 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2478);
        panda$core$Bit $tmp2584 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2583);
        if ($tmp2584.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2478->offset, &$s2585);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2587 = (panda$collections$Array*) malloc(40);
        $tmp2587->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2587->refCount.value = 1;
        panda$collections$Array$init($tmp2587);
        children2586 = $tmp2587;
        panda$collections$Array$add$panda$collections$Array$T(children2586, ((panda$core$Object*) left2478));
        panda$collections$Array$add$panda$collections$Array$T(children2586, ((panda$core$Object*) right2479));
        org$pandalanguage$pandac$IRNode* $tmp2589 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2589->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2589->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2589, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2586));
        return $tmp2589;
    }
    }
    panda$core$Bit $tmp2591 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2591.value) {
    {
        panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2478->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2592.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2593 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2478, p_op, right2479);
            return $tmp2593;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2594 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2478);
        left2478 = $tmp2594;
        if (((panda$core$Bit) { left2478 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2595 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2478);
        panda$core$Bit $tmp2596 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2595);
        if ($tmp2596.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2478->offset, &$s2597);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2599 = (panda$collections$Array*) malloc(40);
        $tmp2599->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2599->refCount.value = 1;
        panda$collections$Array$init($tmp2599);
        children2598 = $tmp2599;
        panda$collections$Array$add$panda$collections$Array$T(children2598, ((panda$core$Object*) left2478));
        panda$core$UInt64 $tmp2601 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2601;
        org$pandalanguage$pandac$IRNode* $tmp2602 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2602->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2602->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2602, ((panda$core$Int64) { 1027 }), left2478->offset, left2478->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2598));
        left2478 = $tmp2602;
        org$pandalanguage$pandac$IRNode* $tmp2605 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2605->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2605->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2605, ((panda$core$Int64) { 1028 }), left2478->offset, left2478->type, self->reusedValueCount);
        reusedLeft2604 = $tmp2605;
        panda$core$Int64 $tmp2607 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2608 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, reusedLeft2604, $tmp2607, right2479);
        right2479 = $tmp2608;
        if (((panda$core$Bit) { right2479 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2610 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2478->type);
        bool $tmp2609 = $tmp2610.value;
        if (!$tmp2609) goto $l2611;
        panda$core$Bit $tmp2612 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2478->type, right2479->type);
        $tmp2609 = $tmp2612.value;
        $l2611:;
        panda$core$Bit $tmp2613 = { $tmp2609 };
        if ($tmp2613.value) {
        {
            panda$collections$Array* $tmp2615 = (panda$collections$Array*) malloc(40);
            $tmp2615->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2615->refCount.value = 1;
            panda$collections$Array$init($tmp2615);
            org$pandalanguage$pandac$IRNode* $tmp2617 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2479, &$s2614, ((panda$collections$ListView*) $tmp2615), left2478->type);
            right2479 = $tmp2617;
            if (((panda$core$Bit) { right2479 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2618 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2478, ((panda$core$Int64) { 73 }), right2479);
        return $tmp2618;
    }
    }
    panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2619.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2620 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2478);
        left2478 = $tmp2620;
        if (((panda$core$Bit) { left2478 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2622 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2478->type);
        cl2621 = $tmp2622;
        if (((panda$core$Bit) { cl2621 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2624 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2478->type);
        parameters2623 = $tmp2624;
        org$pandalanguage$pandac$SymbolTable* $tmp2626 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2621);
        org$pandalanguage$pandac$Symbol* $tmp2628 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2626, &$s2627);
        methods2625 = $tmp2628;
        if (((panda$core$Bit) { methods2625 != NULL }).value) {
        {
            panda$collections$Array* $tmp2631 = (panda$collections$Array*) malloc(40);
            $tmp2631->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2631->refCount.value = 1;
            panda$collections$Array$init($tmp2631);
            types2630 = $tmp2631;
            panda$core$Bit $tmp2633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2625->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2633.value) {
            {
                m2634 = ((org$pandalanguage$pandac$MethodDecl*) methods2625);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2634);
                org$pandalanguage$pandac$MethodRef* $tmp2635 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2635->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2635->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2635, m2634, parameters2623);
                org$pandalanguage$pandac$Type* $tmp2637 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2635);
                panda$collections$Array$add$panda$collections$Array$T(types2630, ((panda$core$Object*) $tmp2637));
            }
            }
            else {
            {
                panda$core$Bit $tmp2638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2625->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2638.value);
                {
                    ITable* $tmp2640 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2625)->methods)->$class->itable;
                    while ($tmp2640->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2640 = $tmp2640->next;
                    }
                    $fn2642 $tmp2641 = $tmp2640->methods[0];
                    panda$collections$Iterator* $tmp2643 = $tmp2641(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2625)->methods));
                    m$Iter2639 = $tmp2643;
                    $l2644:;
                    ITable* $tmp2646 = m$Iter2639->$class->itable;
                    while ($tmp2646->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2646 = $tmp2646->next;
                    }
                    $fn2648 $tmp2647 = $tmp2646->methods[0];
                    panda$core$Bit $tmp2649 = $tmp2647(m$Iter2639);
                    panda$core$Bit $tmp2650 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2649);
                    if (!$tmp2650.value) goto $l2645;
                    {
                        ITable* $tmp2652 = m$Iter2639->$class->itable;
                        while ($tmp2652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2652 = $tmp2652->next;
                        }
                        $fn2654 $tmp2653 = $tmp2652->methods[1];
                        panda$core$Object* $tmp2655 = $tmp2653(m$Iter2639);
                        m2651 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2655);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2651);
                        org$pandalanguage$pandac$MethodRef* $tmp2656 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2656->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2656->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2656, m2651, parameters2623);
                        org$pandalanguage$pandac$Type* $tmp2658 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2656);
                        panda$collections$Array$add$panda$collections$Array$T(types2630, ((panda$core$Object*) $tmp2658));
                    }
                    goto $l2644;
                    $l2645:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2659 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp2659->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2659->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2659, ((panda$collections$ListView*) types2630));
            type2629 = $tmp2659;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2661 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2629 = $tmp2661;
        }
        }
        panda$collections$Array* $tmp2663 = (panda$collections$Array*) malloc(40);
        $tmp2663->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2663->refCount.value = 1;
        panda$collections$Array$init($tmp2663);
        children2662 = $tmp2663;
        panda$collections$Array$add$panda$collections$Array$T(children2662, ((panda$core$Object*) left2478));
        panda$collections$Array$add$panda$collections$Array$T(children2662, ((panda$core$Object*) right2479));
        org$pandalanguage$pandac$IRNode* $tmp2665 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2665->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2665->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2665, ((panda$core$Int64) { 1040 }), p_offset, type2629, ((panda$collections$ListView*) children2662));
        return $tmp2665;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2667 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2668 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2478->type, $tmp2667);
    if ($tmp2668.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2670 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2671 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2479->type, $tmp2670);
        bool $tmp2669 = $tmp2671.value;
        if (!$tmp2669) goto $l2672;
        panda$core$Bit $tmp2677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2676 = $tmp2677.value;
        if ($tmp2676) goto $l2678;
        panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2676 = $tmp2679.value;
        $l2678:;
        panda$core$Bit $tmp2680 = { $tmp2676 };
        bool $tmp2675 = $tmp2680.value;
        if ($tmp2675) goto $l2681;
        panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2675 = $tmp2682.value;
        $l2681:;
        panda$core$Bit $tmp2683 = { $tmp2675 };
        bool $tmp2674 = $tmp2683.value;
        if ($tmp2674) goto $l2684;
        panda$core$Bit $tmp2685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2674 = $tmp2685.value;
        $l2684:;
        panda$core$Bit $tmp2686 = { $tmp2674 };
        bool $tmp2673 = $tmp2686.value;
        if ($tmp2673) goto $l2687;
        panda$core$Bit $tmp2688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2673 = $tmp2688.value;
        $l2687:;
        panda$core$Bit $tmp2689 = { $tmp2673 };
        $tmp2669 = $tmp2689.value;
        $l2672:;
        panda$core$Bit $tmp2690 = { $tmp2669 };
        if ($tmp2690.value) {
        {
            panda$collections$Array* $tmp2692 = (panda$collections$Array*) malloc(40);
            $tmp2692->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2692->refCount.value = 1;
            panda$collections$Array$init($tmp2692);
            children2691 = $tmp2692;
            panda$collections$Array$add$panda$collections$Array$T(children2691, ((panda$core$Object*) left2478));
            panda$collections$Array$add$panda$collections$Array$T(children2691, ((panda$core$Object*) right2479));
            org$pandalanguage$pandac$IRNode* $tmp2694 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2694->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2694->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2694, ((panda$core$Int64) { 1023 }), p_offset, left2478->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2691));
            return $tmp2694;
        }
        }
        panda$core$String* $tmp2697 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2696, $tmp2697);
        panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
        panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2700, ((panda$core$Object*) left2478->type));
        panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
        panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2703, ((panda$core$Object*) right2479->type));
        panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2706);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2708 = (panda$collections$Array*) malloc(40);
    $tmp2708->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2708->refCount.value = 1;
    panda$collections$Array$init($tmp2708);
    children2707 = $tmp2708;
    panda$core$Bit $tmp2712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2478->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2711 = $tmp2712.value;
    if ($tmp2711) goto $l2713;
    panda$core$Bit $tmp2714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2478->kind, ((panda$core$Int64) { 1032 }));
    $tmp2711 = $tmp2714.value;
    $l2713:;
    panda$core$Bit $tmp2715 = { $tmp2711 };
    bool $tmp2710 = $tmp2715.value;
    if (!$tmp2710) goto $l2716;
    panda$core$Bit $tmp2718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2479->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2717 = $tmp2718.value;
    if ($tmp2717) goto $l2719;
    panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2479->kind, ((panda$core$Int64) { 1032 }));
    $tmp2717 = $tmp2720.value;
    $l2719:;
    panda$core$Bit $tmp2721 = { $tmp2717 };
    $tmp2710 = $tmp2721.value;
    $l2716:;
    panda$core$Bit $tmp2722 = { $tmp2710 };
    if ($tmp2722.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2723 = org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2478, p_op, right2479);
        return $tmp2723;
    }
    }
    panda$core$Bit $tmp2725 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2478->type);
    bool $tmp2724 = $tmp2725.value;
    if (!$tmp2724) goto $l2726;
    panda$core$Int64$nullable $tmp2727 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2479, left2478->type);
    $tmp2724 = ((panda$core$Bit) { $tmp2727.nonnull }).value;
    $l2726:;
    panda$core$Bit $tmp2728 = { $tmp2724 };
    if ($tmp2728.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2729 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2479, left2478->type);
        right2479 = $tmp2729;
        PANDA_ASSERT(((panda$core$Bit) { right2479 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2707, ((panda$core$Object*) left2478));
        panda$collections$Array$add$panda$collections$Array$T(children2707, ((panda$core$Object*) right2479));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2731 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2730 = $tmp2731;
            }
            break;
            default:
            {
                resultType2730 = left2478->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2732 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2732->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2732->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2732, ((panda$core$Int64) { 1023 }), p_offset, resultType2730, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2707));
        return $tmp2732;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2707, ((panda$core$Object*) right2479));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2735 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2736 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2478, $tmp2735, ((panda$collections$ListView*) children2707));
    result2734 = $tmp2736;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2734 == NULL }).value) {
    {
        panda$collections$Array$clear(children2707);
        panda$collections$Array$add$panda$collections$Array$T(children2707, ((panda$core$Object*) left2478));
        org$pandalanguage$pandac$IRNode* $tmp2738 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2479);
        resolved2737 = $tmp2738;
        bool $tmp2739 = ((panda$core$Bit) { resolved2737 != NULL }).value;
        if (!$tmp2739) goto $l2740;
        panda$core$Bit $tmp2741 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2737->type);
        $tmp2739 = $tmp2741.value;
        $l2740:;
        panda$core$Bit $tmp2742 = { $tmp2739 };
        if ($tmp2742.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2707, ((panda$core$Object*) resolved2737));
            org$pandalanguage$pandac$IRNode* $tmp2744 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2744->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2744->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2746 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2744, ((panda$core$Int64) { 1001 }), resolved2737->offset, $tmp2746, resolved2737->type);
            target2743 = $tmp2744;
            panda$core$String* $tmp2747 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2748 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2743, $tmp2747, ((panda$collections$ListView*) children2707));
            result2734 = $tmp2748;
        }
        }
    }
    }
    return result2734;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2749;
    org$pandalanguage$pandac$IRNode* right2752;
    panda$core$Object* $tmp2750 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2751 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2750));
    left2749 = $tmp2751;
    if (((panda$core$Bit) { left2749 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2753 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2754 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2753));
    right2752 = $tmp2754;
    if (((panda$core$Bit) { right2752 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2755 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->offset, left2749, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2752);
    return $tmp2755;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2759;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2756 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2756;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2757 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2758 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2757, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2758.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2759, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2760 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2759);
            return ((panda$collections$ListView*) $tmp2760);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2761 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2762 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2761));
            return $tmp2762;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2763 = (panda$collections$Array*) malloc(40);
            $tmp2763->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2763->refCount.value = 1;
            panda$collections$Array$init($tmp2763);
            return ((panda$collections$ListView*) $tmp2763);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2765.value) {
        {
            panda$collections$ListView* $tmp2766 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2766;
        }
        }
        panda$collections$ListView* $tmp2767 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2767;
    }
    }
    panda$collections$Array* $tmp2768 = (panda$collections$Array*) malloc(40);
    $tmp2768->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2768->refCount.value = 1;
    panda$collections$Array$init($tmp2768);
    return ((panda$collections$ListView*) $tmp2768);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name2771;
    org$pandalanguage$pandac$ClassDecl* cl2773;
    org$pandalanguage$pandac$Symbol* s2775;
    org$pandalanguage$pandac$MethodDecl* m2778;
    panda$collections$Iterator* test$Iter2783;
    org$pandalanguage$pandac$MethodDecl* test2795;
    org$pandalanguage$pandac$MethodRef* ref2807;
    panda$collections$Array* children2811;
    org$pandalanguage$pandac$IRNode* methodRef2814;
    panda$collections$Array* args2820;
    panda$collections$Array* children2829;
    panda$collections$Array* children2839;
    org$pandalanguage$pandac$IRNode* coerced2848;
    panda$collections$Array* children2851;
    panda$core$Bit $tmp2770 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2770.value) {
    {
        panda$core$String* $tmp2772 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2771 = $tmp2772;
        org$pandalanguage$pandac$ClassDecl* $tmp2774 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2773 = $tmp2774;
        if (((panda$core$Bit) { cl2773 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2776 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2773);
        org$pandalanguage$pandac$Symbol* $tmp2777 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2776, name2771);
        s2775 = $tmp2777;
        if (((panda$core$Bit) { s2775 != NULL }).value) {
        {
            m2778 = NULL;
            switch (s2775->kind.value) {
                case 204:
                {
                    m2778 = ((org$pandalanguage$pandac$MethodDecl*) s2775);
                    panda$core$Int64 $tmp2779 = panda$collections$Array$get_count$R$panda$core$Int64(m2778->parameters);
                    panda$core$Bit $tmp2780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2779, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2780.value);
                    panda$core$Bit $tmp2781 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2778->annotations);
                    panda$core$Bit $tmp2782 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2781);
                    PANDA_ASSERT($tmp2782.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2784 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2775)->methods)->$class->itable;
                        while ($tmp2784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2784 = $tmp2784->next;
                        }
                        $fn2786 $tmp2785 = $tmp2784->methods[0];
                        panda$collections$Iterator* $tmp2787 = $tmp2785(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2775)->methods));
                        test$Iter2783 = $tmp2787;
                        $l2788:;
                        ITable* $tmp2790 = test$Iter2783->$class->itable;
                        while ($tmp2790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2790 = $tmp2790->next;
                        }
                        $fn2792 $tmp2791 = $tmp2790->methods[0];
                        panda$core$Bit $tmp2793 = $tmp2791(test$Iter2783);
                        panda$core$Bit $tmp2794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2793);
                        if (!$tmp2794.value) goto $l2789;
                        {
                            ITable* $tmp2796 = test$Iter2783->$class->itable;
                            while ($tmp2796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2796 = $tmp2796->next;
                            }
                            $fn2798 $tmp2797 = $tmp2796->methods[1];
                            panda$core$Object* $tmp2799 = $tmp2797(test$Iter2783);
                            test2795 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2799);
                            panda$core$Bit $tmp2801 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2795->annotations);
                            panda$core$Bit $tmp2802 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2801);
                            bool $tmp2800 = $tmp2802.value;
                            if (!$tmp2800) goto $l2803;
                            panda$core$Int64 $tmp2804 = panda$collections$Array$get_count$R$panda$core$Int64(test2795->parameters);
                            panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2804, ((panda$core$Int64) { 0 }));
                            $tmp2800 = $tmp2805.value;
                            $l2803:;
                            panda$core$Bit $tmp2806 = { $tmp2800 };
                            if ($tmp2806.value) {
                            {
                                m2778 = test2795;
                                goto $l2789;
                            }
                            }
                        }
                        goto $l2788;
                        $l2789:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2778 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2778);
                org$pandalanguage$pandac$MethodRef* $tmp2808 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2808->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2808->refCount.value = 1;
                panda$collections$ListView* $tmp2810 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2808, m2778, $tmp2810);
                ref2807 = $tmp2808;
                panda$collections$Array* $tmp2812 = (panda$collections$Array*) malloc(40);
                $tmp2812->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2812->refCount.value = 1;
                panda$collections$Array$init($tmp2812);
                children2811 = $tmp2812;
                panda$collections$Array$add$panda$collections$Array$T(children2811, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2815 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2815->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2815->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2817 = (org$pandalanguage$pandac$Type*) malloc(80);
                $tmp2817->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2817->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2817, &$s2819, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2815, ((panda$core$Int64) { 1002 }), p_offset, $tmp2817, ((panda$core$Object*) ref2807), ((panda$collections$ListView*) children2811));
                methodRef2814 = $tmp2815;
                panda$collections$Array* $tmp2821 = (panda$collections$Array*) malloc(40);
                $tmp2821->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2821->refCount.value = 1;
                panda$collections$Array$init($tmp2821);
                args2820 = $tmp2821;
                org$pandalanguage$pandac$IRNode* $tmp2823 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2814, ((panda$collections$ListView*) args2820));
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
                    org$pandalanguage$pandac$IRNode* $tmp2824 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2824->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2824->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2824, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2824;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2826 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2826->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2826->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2826, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
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
                        org$pandalanguage$pandac$IRNode* $tmp2832 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp2832->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2832->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2832, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2829));
                        return $tmp2832;
                    }
                    }
                }
            }
            panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2834, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2837);
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
                org$pandalanguage$pandac$IRNode* $tmp2842 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2842->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2842->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2842, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2839));
                return $tmp2842;
            }
            }
            else {
            {
                panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2844, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2845, &$s2846);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2847);
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
            org$pandalanguage$pandac$IRNode* $tmp2854 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2854->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2854->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2854, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2851));
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
    org$pandalanguage$pandac$IRNode* $tmp2862 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2859, p_p->offset);
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
                org$pandalanguage$pandac$IRNode* $tmp2929 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2929->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2929->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2931 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2932 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2927);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2929, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp2931, $tmp2932);
                return $tmp2929;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2933 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2933->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2933->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2935 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2933, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp2935, name2919);
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
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_d->offset, $tmp2951);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2952 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2917);
    org$pandalanguage$pandac$IRNode* $tmp2953 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->offset, base2908, s2940, $tmp2952);
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
        org$pandalanguage$pandac$IRNode* $tmp2958 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->offset, NULL, s2955, self->symbolTable);
        return $tmp2958;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2959 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2959->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2959->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2961 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2959, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp2961, ((panda$core$String*) p_i->payload));
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
    org$pandalanguage$pandac$IRNode* $tmp2965 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2965->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2965->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2967 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2965, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp2967, resolved2962);
    return $tmp2965;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2975;
    org$pandalanguage$pandac$IRNode* end2983;
    org$pandalanguage$pandac$IRNode* step2991;
    panda$collections$Array* children3001;
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
        org$pandalanguage$pandac$IRNode* $tmp2978 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2978->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2978->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2980 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2978, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2980);
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
        org$pandalanguage$pandac$IRNode* $tmp2986 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2986->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2986->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2988 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2986, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2988);
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
        org$pandalanguage$pandac$IRNode* $tmp2994 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2994->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2994->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2996 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2994, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp2996, ((panda$core$UInt64) { 1 }));
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
    org$pandalanguage$pandac$IRNode* $tmp3004 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3004->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3004->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3006 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp3006->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3006->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3006, &$s3008, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3004, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp3006, ((panda$core$Object*) wrap_panda$core$Bit($tmp3009)), ((panda$collections$ListView*) children3001));
    return $tmp3004;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3010 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3010->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3012 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3010, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp3012, ((panda$core$String*) p_s->payload));
    return $tmp3010;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3017;
    org$pandalanguage$pandac$ClassDecl* cl3018;
    panda$collections$Array* subtypes3025;
    panda$core$MutableString* name3029;
    panda$core$String* separator3033;
    panda$collections$Iterator* p$Iter3035;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3047;
    panda$collections$Array* pType3052;
    panda$core$String* pName3055;
    panda$core$Bit $tmp3013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3013.value);
    panda$core$Object* $tmp3014 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3015 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3014)->annotations);
    if ($tmp3015.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s3016);
        return NULL;
    }
    }
    panda$core$Object* $tmp3019 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3018 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3019);
    ITable* $tmp3020 = ((panda$collections$CollectionView*) cl3018->parameters)->$class->itable;
    while ($tmp3020->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3020 = $tmp3020->next;
    }
    $fn3022 $tmp3021 = $tmp3020->methods[0];
    panda$core$Int64 $tmp3023 = $tmp3021(((panda$collections$CollectionView*) cl3018->parameters));
    panda$core$Bit $tmp3024 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3023, ((panda$core$Int64) { 0 }));
    if ($tmp3024.value) {
    {
        panda$collections$Array* $tmp3026 = (panda$collections$Array*) malloc(40);
        $tmp3026->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3026->refCount.value = 1;
        panda$collections$Array$init($tmp3026);
        subtypes3025 = $tmp3026;
        org$pandalanguage$pandac$Type* $tmp3028 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3018);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3025, ((panda$core$Object*) $tmp3028));
        panda$core$MutableString* $tmp3030 = (panda$core$MutableString*) malloc(40);
        $tmp3030->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3030->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3030, ((org$pandalanguage$pandac$Symbol*) cl3018)->name);
        name3029 = $tmp3030;
        panda$core$MutableString$append$panda$core$String(name3029, &$s3032);
        separator3033 = &$s3034;
        {
            ITable* $tmp3036 = ((panda$collections$Iterable*) cl3018->parameters)->$class->itable;
            while ($tmp3036->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3036 = $tmp3036->next;
            }
            $fn3038 $tmp3037 = $tmp3036->methods[0];
            panda$collections$Iterator* $tmp3039 = $tmp3037(((panda$collections$Iterable*) cl3018->parameters));
            p$Iter3035 = $tmp3039;
            $l3040:;
            ITable* $tmp3042 = p$Iter3035->$class->itable;
            while ($tmp3042->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3042 = $tmp3042->next;
            }
            $fn3044 $tmp3043 = $tmp3042->methods[0];
            panda$core$Bit $tmp3045 = $tmp3043(p$Iter3035);
            panda$core$Bit $tmp3046 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3045);
            if (!$tmp3046.value) goto $l3041;
            {
                ITable* $tmp3048 = p$Iter3035->$class->itable;
                while ($tmp3048->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3048 = $tmp3048->next;
                }
                $fn3050 $tmp3049 = $tmp3048->methods[1];
                panda$core$Object* $tmp3051 = $tmp3049(p$Iter3035);
                p3047 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3051);
                panda$collections$Array* $tmp3053 = (panda$collections$Array*) malloc(40);
                $tmp3053->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3053->refCount.value = 1;
                panda$collections$Array$init($tmp3053);
                pType3052 = $tmp3053;
                panda$collections$Array$add$panda$collections$Array$T(pType3052, ((panda$core$Object*) p3047->bound));
                panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3056, ((org$pandalanguage$pandac$Symbol*) cl3018)->name);
                panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3057, &$s3058);
                panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, ((org$pandalanguage$pandac$Symbol*) p3047)->name);
                panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3060, &$s3061);
                pName3055 = $tmp3062;
                panda$core$MutableString$append$panda$core$String(name3029, separator3033);
                panda$core$MutableString$append$panda$core$String(name3029, pName3055);
                org$pandalanguage$pandac$Type* $tmp3063 = (org$pandalanguage$pandac$Type*) malloc(80);
                $tmp3063->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3063->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3063, p3047);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3025, ((panda$core$Object*) $tmp3063));
                separator3033 = &$s3065;
            }
            goto $l3040;
            $l3041:;
        }
        panda$core$MutableString$append$panda$core$String(name3029, &$s3066);
        org$pandalanguage$pandac$Type* $tmp3067 = (org$pandalanguage$pandac$Type*) malloc(80);
        $tmp3067->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3067->refCount.value = 1;
        panda$core$String* $tmp3069 = panda$core$MutableString$convert$R$panda$core$String(name3029);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3067, $tmp3069, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes3025), ((panda$core$Bit) { true }));
        type3017 = $tmp3067;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3070 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3018);
        type3017 = $tmp3070;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3071 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3071->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3071->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3071, ((panda$core$Int64) { 1025 }), p_s->offset, type3017);
    return $tmp3071;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3077;
    panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3073.value);
    panda$core$Object* $tmp3074 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3075 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3074)->annotations);
    if ($tmp3075.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s3076);
        return NULL;
    }
    }
    panda$core$Object* $tmp3078 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3077 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3078);
    PANDA_ASSERT(cl3077->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3079 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3079->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3079->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3079, ((panda$core$Int64) { 1024 }), p_s->offset, cl3077->rawSuper);
    return $tmp3079;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3084;
    org$pandalanguage$pandac$Type* type3087;
    panda$core$Bit $tmp3081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3081.value);
    panda$core$Int64 $tmp3082 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3082, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3083.value);
    panda$core$Object* $tmp3085 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3086 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3085));
    value3084 = $tmp3086;
    if (((panda$core$Bit) { value3084 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3088 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3089 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3088));
    org$pandalanguage$pandac$Type* $tmp3090 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3089);
    type3087 = $tmp3090;
    if (((panda$core$Bit) { type3087 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3091 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3084, type3087);
    if (((panda$core$Bit) { $tmp3091.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3092 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3084, type3087);
        return $tmp3092;
    }
    }
    panda$core$Bit $tmp3093 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3084, type3087);
    if ($tmp3093.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3094 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3084, p_c->offset, ((panda$core$Bit) { true }), type3087);
        return $tmp3094;
    }
    }
    else {
    {
        panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3095, ((panda$core$Object*) value3084->type));
        panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
        panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3099, ((panda$core$Object*) type3087));
        panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
        panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, $tmp3102);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3103);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3104.value);
    org$pandalanguage$pandac$IRNode* $tmp3105 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3105->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3107 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3105, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp3107);
    return $tmp3105;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3112;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3108 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3108;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3109 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3109->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3109->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3111 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3109, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp3111, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3109;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3113 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3112 = $tmp3113;
            bool $tmp3114 = ((panda$core$Bit) { result3112 != NULL }).value;
            if (!$tmp3114) goto $l3115;
            org$pandalanguage$pandac$Type* $tmp3116 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3117 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3112->type, $tmp3116);
            $tmp3114 = $tmp3117.value;
            $l3115:;
            panda$core$Bit $tmp3118 = { $tmp3114 };
            if ($tmp3118.value) {
            {
                panda$core$Bit $tmp3119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3112->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3119.value);
                panda$core$String* $tmp3120 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3112->payload)->value);
                panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, &$s3121);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, result3112->offset, $tmp3122);
                return NULL;
            }
            }
            return result3112;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3123 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3123;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3124 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3124;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3125 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3125->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3125->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3127 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3125, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp3127, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3125;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3128 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3128;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3129 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3129;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3130 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3130;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3131 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3131;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3132 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3132;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3133 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3133;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3134 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3134;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3135 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3135;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3137;
    panda$collections$Array* result3140;
    panda$collections$Iterator* stmt$Iter3143;
    org$pandalanguage$pandac$ASTNode* stmt3155;
    org$pandalanguage$pandac$IRNode* compiled3160;
    panda$core$Bit $tmp3136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3136.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3138 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3138->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3138->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3138, self->symbolTable);
    symbols3137 = $tmp3138;
    self->symbolTable = symbols3137;
    panda$collections$Array* $tmp3141 = (panda$collections$Array*) malloc(40);
    $tmp3141->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3141->refCount.value = 1;
    panda$collections$Array$init($tmp3141);
    result3140 = $tmp3141;
    {
        ITable* $tmp3144 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3144->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3144 = $tmp3144->next;
        }
        $fn3146 $tmp3145 = $tmp3144->methods[0];
        panda$collections$Iterator* $tmp3147 = $tmp3145(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3143 = $tmp3147;
        $l3148:;
        ITable* $tmp3150 = stmt$Iter3143->$class->itable;
        while ($tmp3150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3150 = $tmp3150->next;
        }
        $fn3152 $tmp3151 = $tmp3150->methods[0];
        panda$core$Bit $tmp3153 = $tmp3151(stmt$Iter3143);
        panda$core$Bit $tmp3154 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3153);
        if (!$tmp3154.value) goto $l3149;
        {
            ITable* $tmp3156 = stmt$Iter3143->$class->itable;
            while ($tmp3156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3156 = $tmp3156->next;
            }
            $fn3158 $tmp3157 = $tmp3156->methods[1];
            panda$core$Object* $tmp3159 = $tmp3157(stmt$Iter3143);
            stmt3155 = ((org$pandalanguage$pandac$ASTNode*) $tmp3159);
            org$pandalanguage$pandac$IRNode* $tmp3161 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3155);
            compiled3160 = $tmp3161;
            if (((panda$core$Bit) { compiled3160 == NULL }).value) {
            {
                panda$core$Object* $tmp3162 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3137->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3162);
                return NULL;
            }
            }
            panda$core$Bit $tmp3163 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3160->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3163.value);
            panda$collections$Array$add$panda$collections$Array$T(result3140, ((panda$core$Object*) compiled3160));
        }
        goto $l3148;
        $l3149:;
    }
    panda$core$Object* $tmp3164 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3137->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3164);
    org$pandalanguage$pandac$IRNode* $tmp3165 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3165->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3165->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3165, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result3140));
    return $tmp3165;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3175;
    org$pandalanguage$pandac$IRNode* ifTrue3180;
    panda$collections$Array* children3183;
    org$pandalanguage$pandac$IRNode* ifFalse3188;
    panda$core$Bit $tmp3167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3167.value);
    panda$core$Int64 $tmp3169 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3169, ((panda$core$Int64) { 2 }));
    bool $tmp3168 = $tmp3170.value;
    if ($tmp3168) goto $l3171;
    panda$core$Int64 $tmp3172 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3172, ((panda$core$Int64) { 3 }));
    $tmp3168 = $tmp3173.value;
    $l3171:;
    panda$core$Bit $tmp3174 = { $tmp3168 };
    PANDA_ASSERT($tmp3174.value);
    panda$core$Object* $tmp3176 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3177 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3176));
    org$pandalanguage$pandac$Type* $tmp3178 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3179 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3177, $tmp3178);
    test3175 = $tmp3179;
    if (((panda$core$Bit) { test3175 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3181 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3182 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3181));
    ifTrue3180 = $tmp3182;
    if (((panda$core$Bit) { ifTrue3180 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3184 = (panda$collections$Array*) malloc(40);
    $tmp3184->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3184->refCount.value = 1;
    panda$collections$Array$init($tmp3184);
    children3183 = $tmp3184;
    panda$collections$Array$add$panda$collections$Array$T(children3183, ((panda$core$Object*) test3175));
    panda$collections$Array$add$panda$collections$Array$T(children3183, ((panda$core$Object*) ifTrue3180));
    panda$core$Int64 $tmp3186 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3186, ((panda$core$Int64) { 3 }));
    if ($tmp3187.value) {
    {
        panda$core$Object* $tmp3189 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3190 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3189));
        ifFalse3188 = $tmp3190;
        if (((panda$core$Bit) { ifFalse3188 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3183, ((panda$core$Object*) ifFalse3188));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3191 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3191->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3191->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3191, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children3183));
    return $tmp3191;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3193;
    org$pandalanguage$pandac$IRNode* list3194;
    org$pandalanguage$pandac$Type* t3201;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3215;
    org$pandalanguage$pandac$IRNode* body3217;
    panda$collections$Array* children3219;
    panda$core$Bit $tmp3196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3195 = $tmp3196.value;
    if (!$tmp3195) goto $l3197;
    panda$core$Int64 $tmp3198 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3198, ((panda$core$Int64) { 1 }));
    $tmp3195 = $tmp3199.value;
    $l3197:;
    panda$core$Bit $tmp3200 = { $tmp3195 };
    if ($tmp3200.value) {
    {
        panda$core$Object* $tmp3202 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3203 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3202));
        org$pandalanguage$pandac$Type* $tmp3204 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3203);
        t3201 = $tmp3204;
        org$pandalanguage$pandac$Type* $tmp3205 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3201);
        org$pandalanguage$pandac$IRNode* $tmp3206 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3205);
        list3194 = $tmp3206;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3207 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3194 = $tmp3207;
    }
    }
    if (((panda$core$Bit) { list3194 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3194->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3208.value) {
    {
        panda$core$Object* $tmp3209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3194->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3209)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3210.value);
        panda$core$Object* $tmp3211 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3194->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3212 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp3211)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3193 = ((org$pandalanguage$pandac$Type*) $tmp3212);
    }
    }
    else {
    {
        panda$core$Bit $tmp3213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3194->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3213.value);
        panda$core$Object* $tmp3214 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3194->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3193 = ((org$pandalanguage$pandac$Type*) $tmp3214);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3216 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3193);
    target3215 = $tmp3216;
    if (((panda$core$Bit) { target3215 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3215->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3218 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3217 = $tmp3218;
    if (((panda$core$Bit) { body3217 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3220 = (panda$collections$Array*) malloc(40);
    $tmp3220->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3220->refCount.value = 1;
    panda$collections$Array$init($tmp3220);
    children3219 = $tmp3220;
    panda$collections$Array$add$panda$collections$Array$T(children3219, ((panda$core$Object*) target3215->target));
    panda$collections$Array$add$panda$collections$Array$T(children3219, ((panda$core$Object*) list3194));
    panda$collections$Array$add$panda$collections$Array$T(children3219, ((panda$core$Object*) body3217));
    org$pandalanguage$pandac$IRNode* $tmp3222 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3222->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3222, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3219));
    return $tmp3222;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3231;
    org$pandalanguage$pandac$Variable* targetVar3235;
    panda$collections$Array* subtypes3236;
    org$pandalanguage$pandac$Type* iterType3240;
    org$pandalanguage$pandac$Variable* iter3252;
    panda$collections$Array* statements3257;
    panda$collections$Array* declChildren3260;
    panda$collections$Array* varChildren3265;
    panda$collections$Array* whileChildren3272;
    org$pandalanguage$pandac$IRNode* done3275;
    org$pandalanguage$pandac$IRNode* notCall3282;
    panda$collections$Array* valueDeclChildren3287;
    org$pandalanguage$pandac$IRNode* next3292;
    panda$collections$Array* valueVarChildren3299;
    org$pandalanguage$pandac$IRNode* block3304;
    panda$collections$Array* blockChildren3306;
    panda$core$Bit $tmp3225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3224 = $tmp3225.value;
    if (!$tmp3224) goto $l3226;
    panda$core$Object* $tmp3227 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3228 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3229 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3227), $tmp3228);
    $tmp3224 = $tmp3229.value;
    $l3226:;
    panda$core$Bit $tmp3230 = { $tmp3224 };
    PANDA_ASSERT($tmp3230.value);
    panda$core$Object* $tmp3232 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3233 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3232));
    target3231 = $tmp3233;
    if (((panda$core$Bit) { target3231 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3231->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3234.value);
    targetVar3235 = ((org$pandalanguage$pandac$Variable*) target3231->target->payload);
    panda$collections$Array* $tmp3237 = (panda$collections$Array*) malloc(40);
    $tmp3237->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3237->refCount.value = 1;
    panda$collections$Array$init($tmp3237);
    subtypes3236 = $tmp3237;
    org$pandalanguage$pandac$Type* $tmp3239 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3236, ((panda$core$Object*) $tmp3239));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3236, ((panda$core$Object*) target3231->target->type));
    org$pandalanguage$pandac$Type* $tmp3241 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp3241->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3241->refCount.value = 1;
    panda$core$Object* $tmp3244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3236, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3243, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3244)));
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, &$s3246);
    panda$core$Object* $tmp3248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3236, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3247, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3248)));
    panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3241, $tmp3251, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes3236), ((panda$core$Bit) { true }));
    iterType3240 = $tmp3241;
    org$pandalanguage$pandac$Variable* $tmp3253 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3253->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3253->refCount.value = 1;
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3235)->name, &$s3255);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3253, p_iterator->offset, ((panda$core$Int64) { 10001 }), $tmp3256, iterType3240);
    iter3252 = $tmp3253;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3252));
    panda$collections$Array* $tmp3258 = (panda$collections$Array*) malloc(40);
    $tmp3258->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3258->refCount.value = 1;
    panda$collections$Array$init($tmp3258);
    statements3257 = $tmp3258;
    panda$collections$Array* $tmp3261 = (panda$collections$Array*) malloc(40);
    $tmp3261->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3261->refCount.value = 1;
    panda$collections$Array$init($tmp3261);
    declChildren3260 = $tmp3261;
    org$pandalanguage$pandac$IRNode* $tmp3263 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3263->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3263->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3263, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3252->type, iter3252);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3260, ((panda$core$Object*) $tmp3263));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3260, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3266 = (panda$collections$Array*) malloc(40);
    $tmp3266->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3266->refCount.value = 1;
    panda$collections$Array$init($tmp3266);
    varChildren3265 = $tmp3266;
    org$pandalanguage$pandac$IRNode* $tmp3268 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3268->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3268->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3268, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3252)->offset, ((panda$collections$ListView*) declChildren3260));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3265, ((panda$core$Object*) $tmp3268));
    org$pandalanguage$pandac$IRNode* $tmp3270 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3270->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3270->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3270, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3252)->offset, ((panda$collections$ListView*) varChildren3265));
    panda$collections$Array$add$panda$collections$Array$T(statements3257, ((panda$core$Object*) $tmp3270));
    panda$collections$Array* $tmp3273 = (panda$collections$Array*) malloc(40);
    $tmp3273->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3273->refCount.value = 1;
    panda$collections$Array$init($tmp3273);
    whileChildren3272 = $tmp3273;
    org$pandalanguage$pandac$IRNode* $tmp3276 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3276->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3276->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3276, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3252)->offset, iter3252->type, iter3252);
    panda$collections$Array* $tmp3279 = (panda$collections$Array*) malloc(40);
    $tmp3279->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3279->refCount.value = 1;
    panda$collections$Array$init($tmp3279);
    org$pandalanguage$pandac$IRNode* $tmp3281 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3276, &$s3278, ((panda$collections$ListView*) $tmp3279), NULL);
    done3275 = $tmp3281;
    if (((panda$core$Bit) { done3275 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3284 = (panda$collections$Array*) malloc(40);
    $tmp3284->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3284->refCount.value = 1;
    panda$collections$Array$init($tmp3284);
    org$pandalanguage$pandac$IRNode* $tmp3286 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3275, &$s3283, ((panda$collections$ListView*) $tmp3284), NULL);
    notCall3282 = $tmp3286;
    if (((panda$core$Bit) { notCall3282 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3272, ((panda$core$Object*) notCall3282));
    panda$collections$Array* $tmp3288 = (panda$collections$Array*) malloc(40);
    $tmp3288->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3288->refCount.value = 1;
    panda$collections$Array$init($tmp3288);
    valueDeclChildren3287 = $tmp3288;
    org$pandalanguage$pandac$IRNode* $tmp3290 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3290->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3290->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3290, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar3235->type, targetVar3235);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3287, ((panda$core$Object*) $tmp3290));
    org$pandalanguage$pandac$IRNode* $tmp3293 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3293->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3293->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3293, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3252->type, iter3252);
    panda$collections$Array* $tmp3296 = (panda$collections$Array*) malloc(40);
    $tmp3296->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3296->refCount.value = 1;
    panda$collections$Array$init($tmp3296);
    org$pandalanguage$pandac$IRNode* $tmp3298 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3293, &$s3295, ((panda$collections$ListView*) $tmp3296), NULL);
    next3292 = $tmp3298;
    PANDA_ASSERT(((panda$core$Bit) { next3292 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3287, ((panda$core$Object*) next3292));
    panda$collections$Array* $tmp3300 = (panda$collections$Array*) malloc(40);
    $tmp3300->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3300->refCount.value = 1;
    panda$collections$Array$init($tmp3300);
    valueVarChildren3299 = $tmp3300;
    org$pandalanguage$pandac$IRNode* $tmp3302 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3302->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3302->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3302, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3287));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3299, ((panda$core$Object*) $tmp3302));
    org$pandalanguage$pandac$IRNode* $tmp3305 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3304 = $tmp3305;
    if (((panda$core$Bit) { block3304 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3307 = (panda$collections$Array*) malloc(40);
    $tmp3307->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3307->refCount.value = 1;
    panda$collections$Array$init($tmp3307);
    blockChildren3306 = $tmp3307;
    org$pandalanguage$pandac$IRNode* $tmp3309 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3309->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3309->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3309, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3299));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3306, ((panda$core$Object*) $tmp3309));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3306, ((panda$collections$CollectionView*) block3304->children));
    org$pandalanguage$pandac$IRNode* $tmp3311 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3311->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3311->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3311, ((panda$core$Int64) { 1000 }), block3304->offset, ((panda$collections$ListView*) blockChildren3306));
    block3304 = $tmp3311;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3272, ((panda$core$Object*) block3304));
    org$pandalanguage$pandac$IRNode* $tmp3313 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3313->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3313->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3313, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3272));
    panda$collections$Array$add$panda$collections$Array$T(statements3257, ((panda$core$Object*) $tmp3313));
    org$pandalanguage$pandac$IRNode* $tmp3315 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3315->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3315->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3315, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3257));
    return $tmp3315;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3320;
    org$pandalanguage$pandac$SymbolTable* symbols3323;
    org$pandalanguage$pandac$IRNode* result3326;
    panda$core$Bit found3336;
    panda$collections$Iterator* intf$Iter3337;
    org$pandalanguage$pandac$Type* intf3350;
    org$pandalanguage$pandac$IRNode* iterator3362;
    org$pandalanguage$pandac$IRNode* iterable3374;
    org$pandalanguage$pandac$IRNode* iterator3376;
    panda$core$Bit $tmp3317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3317.value);
    panda$core$Int64 $tmp3318 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3318, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3319.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3321 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3322 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3321));
    list3320 = $tmp3322;
    if (((panda$core$Bit) { list3320 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3324 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3324->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3324->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3324, self->symbolTable);
    symbols3323 = $tmp3324;
    self->symbolTable = symbols3323;
    panda$core$Bit $tmp3328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3320->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3327 = $tmp3328.value;
    if ($tmp3327) goto $l3329;
    panda$core$Bit $tmp3330 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3320->type);
    $tmp3327 = $tmp3330.value;
    $l3329:;
    panda$core$Bit $tmp3331 = { $tmp3327 };
    if ($tmp3331.value) {
    {
        panda$core$Object* $tmp3332 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3333 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3334 = org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3332), list3320, ((org$pandalanguage$pandac$ASTNode*) $tmp3333));
        result3326 = $tmp3334;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3335 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3320);
        list3320 = $tmp3335;
        if (((panda$core$Bit) { list3320 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3336 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3338 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3320->type);
            ITable* $tmp3339 = ((panda$collections$Iterable*) $tmp3338)->$class->itable;
            while ($tmp3339->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3339 = $tmp3339->next;
            }
            $fn3341 $tmp3340 = $tmp3339->methods[0];
            panda$collections$Iterator* $tmp3342 = $tmp3340(((panda$collections$Iterable*) $tmp3338));
            intf$Iter3337 = $tmp3342;
            $l3343:;
            ITable* $tmp3345 = intf$Iter3337->$class->itable;
            while ($tmp3345->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3345 = $tmp3345->next;
            }
            $fn3347 $tmp3346 = $tmp3345->methods[0];
            panda$core$Bit $tmp3348 = $tmp3346(intf$Iter3337);
            panda$core$Bit $tmp3349 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3348);
            if (!$tmp3349.value) goto $l3344;
            {
                ITable* $tmp3351 = intf$Iter3337->$class->itable;
                while ($tmp3351->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3351 = $tmp3351->next;
                }
                $fn3353 $tmp3352 = $tmp3351->methods[1];
                panda$core$Object* $tmp3354 = $tmp3352(intf$Iter3337);
                intf3350 = ((org$pandalanguage$pandac$Type*) $tmp3354);
                panda$core$Bit $tmp3356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3350->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3355 = $tmp3356.value;
                if (!$tmp3355) goto $l3357;
                panda$core$Object* $tmp3358 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3350->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3359 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3360 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3358), $tmp3359);
                $tmp3355 = $tmp3360.value;
                $l3357:;
                panda$core$Bit $tmp3361 = { $tmp3355 };
                if ($tmp3361.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3363 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3320, intf3350);
                    iterator3362 = $tmp3363;
                    panda$core$Object* $tmp3364 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3365 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3366 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3364), iterator3362, ((org$pandalanguage$pandac$ASTNode*) $tmp3365));
                    result3326 = $tmp3366;
                    found3336 = ((panda$core$Bit) { true });
                    goto $l3344;
                }
                }
                panda$core$Bit $tmp3368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3350->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3367 = $tmp3368.value;
                if (!$tmp3367) goto $l3369;
                panda$core$Object* $tmp3370 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3350->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3371 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3372 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3370), $tmp3371);
                $tmp3367 = $tmp3372.value;
                $l3369:;
                panda$core$Bit $tmp3373 = { $tmp3367 };
                if ($tmp3373.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3375 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3320, intf3350);
                    iterable3374 = $tmp3375;
                    panda$collections$Array* $tmp3378 = (panda$collections$Array*) malloc(40);
                    $tmp3378->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3378->refCount.value = 1;
                    panda$collections$Array$init($tmp3378);
                    org$pandalanguage$pandac$IRNode* $tmp3380 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3374, &$s3377, ((panda$collections$ListView*) $tmp3378));
                    iterator3376 = $tmp3380;
                    panda$core$Object* $tmp3381 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3382 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3383 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3381), iterator3376, ((org$pandalanguage$pandac$ASTNode*) $tmp3382));
                    result3326 = $tmp3383;
                    found3336 = ((panda$core$Bit) { true });
                    goto $l3344;
                }
                }
            }
            goto $l3343;
            $l3344:;
        }
        panda$core$Bit $tmp3384 = panda$core$Bit$$NOT$R$panda$core$Bit(found3336);
        if ($tmp3384.value) {
        {
            panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3385, ((panda$core$Object*) list3320->type));
            panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, &$s3387);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, list3320->offset, $tmp3388);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3323->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3389);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3326;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3393;
    org$pandalanguage$pandac$IRNode* stmt3398;
    panda$collections$Array* children3401;
    panda$core$Bit $tmp3390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3390.value);
    panda$core$Int64 $tmp3391 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3391, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3392.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3395 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3394));
    org$pandalanguage$pandac$Type* $tmp3396 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3397 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3395, $tmp3396);
    test3393 = $tmp3397;
    if (((panda$core$Bit) { test3393 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3400 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3399));
    stmt3398 = $tmp3400;
    if (((panda$core$Bit) { stmt3398 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3402 = (panda$collections$Array*) malloc(40);
    $tmp3402->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3402->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3402, ((panda$core$Int64) { 2 }));
    children3401 = $tmp3402;
    panda$collections$Array$add$panda$collections$Array$T(children3401, ((panda$core$Object*) test3393));
    panda$collections$Array$add$panda$collections$Array$T(children3401, ((panda$core$Object*) stmt3398));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3404 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3404->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3404->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3404, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3401));
    return $tmp3404;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3409;
    org$pandalanguage$pandac$IRNode* test3412;
    panda$collections$Array* children3417;
    panda$core$Bit $tmp3406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3406.value);
    panda$core$Int64 $tmp3407 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3407, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3408.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3410 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3411 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3410));
    stmt3409 = $tmp3411;
    if (((panda$core$Bit) { stmt3409 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3414 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3413));
    org$pandalanguage$pandac$Type* $tmp3415 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3416 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3414, $tmp3415);
    test3412 = $tmp3416;
    if (((panda$core$Bit) { test3412 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3418 = (panda$collections$Array*) malloc(40);
    $tmp3418->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3418->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3418, ((panda$core$Int64) { 2 }));
    children3417 = $tmp3418;
    panda$collections$Array$add$panda$collections$Array$T(children3417, ((panda$core$Object*) stmt3409));
    panda$collections$Array$add$panda$collections$Array$T(children3417, ((panda$core$Object*) test3412));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3420 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3420->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3420->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3420, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3417));
    return $tmp3420;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3425;
    panda$collections$Array* children3428;
    panda$core$Bit $tmp3422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3422.value);
    panda$core$Int64 $tmp3423 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3423, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3424.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3426 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3427 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3426));
    stmt3425 = $tmp3427;
    if (((panda$core$Bit) { stmt3425 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3429 = (panda$collections$Array*) malloc(40);
    $tmp3429->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3429->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3429, ((panda$core$Int64) { 1 }));
    children3428 = $tmp3429;
    panda$collections$Array$add$panda$collections$Array$T(children3428, ((panda$core$Object*) stmt3425));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3431 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3431->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3431->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3431, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3428));
    return $tmp3431;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3433;
    org$pandalanguage$pandac$Type* type3437;
    org$pandalanguage$pandac$Variable* v3448;
    value3433 = p_rawValue;
    bool $tmp3434 = ((panda$core$Bit) { value3433 == NULL }).value;
    if ($tmp3434) goto $l3435;
    $tmp3434 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3435:;
    panda$core$Bit $tmp3436 = { $tmp3434 };
    PANDA_ASSERT($tmp3436.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3438 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3438, ((panda$core$Int64) { 1 }));
            if ($tmp3439.value) {
            {
                panda$core$Object* $tmp3440 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3441 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3440));
                org$pandalanguage$pandac$Type* $tmp3442 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3441);
                type3437 = $tmp3442;
            }
            }
            else {
            if (((panda$core$Bit) { value3433 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3443 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3433);
                value3433 = $tmp3443;
                if (((panda$core$Bit) { value3433 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3444 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3433);
                type3437 = $tmp3444;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3437 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_t->offset, &$s3445);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3433 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3446 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3433, type3437);
                value3433 = $tmp3446;
                if (((panda$core$Bit) { value3433 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3447 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3433->type, type3437);
                PANDA_ASSERT($tmp3447.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3449 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp3449->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3449->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3449, p_t->offset, p_kind, ((panda$core$String*) p_t->payload), type3437);
            v3448 = $tmp3449;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3448));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3451 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3451->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3451->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3453 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3453->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3453, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3448)->offset, v3448->type, v3448);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3451, $tmp3453, value3433);
            return $tmp3451;
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
    org$pandalanguage$pandac$IRNode* value3463;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3468;
    panda$collections$Array* children3471;
    org$pandalanguage$pandac$Variable* v3475;
    panda$core$Bit $tmp3455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3455.value);
    panda$core$Int64 $tmp3457 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3457, ((panda$core$Int64) { 1 }));
    bool $tmp3456 = $tmp3458.value;
    if ($tmp3456) goto $l3459;
    panda$core$Int64 $tmp3460 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3460, ((panda$core$Int64) { 2 }));
    $tmp3456 = $tmp3461.value;
    $l3459:;
    panda$core$Bit $tmp3462 = { $tmp3456 };
    PANDA_ASSERT($tmp3462.value);
    panda$core$Int64 $tmp3464 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3464, ((panda$core$Int64) { 2 }));
    if ($tmp3465.value) {
    {
        panda$core$Object* $tmp3466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3467 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3466));
        value3463 = $tmp3467;
        if (((panda$core$Bit) { value3463 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3463 = NULL;
    }
    }
    panda$core$Object* $tmp3469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3470 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3469), p_varKind, value3463, NULL);
    target3468 = $tmp3470;
    if (((panda$core$Bit) { target3468 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3472 = (panda$collections$Array*) malloc(40);
    $tmp3472->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3472->refCount.value = 1;
    panda$collections$Array$init($tmp3472);
    children3471 = $tmp3472;
    panda$collections$Array$add$panda$collections$Array$T(children3471, ((panda$core$Object*) target3468->target));
    if (((panda$core$Bit) { target3468->value != NULL }).value) {
    {
        panda$core$Bit $tmp3474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3468->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3474.value);
        v3475 = ((org$pandalanguage$pandac$Variable*) target3468->target->payload);
        v3475->initialValue = target3468->value;
        panda$collections$Array$add$panda$collections$Array$T(children3471, ((panda$core$Object*) target3468->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3476 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3476->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3476->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3476, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children3471));
    return $tmp3476;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3479;
    panda$collections$Iterator* label$Iter3480;
    panda$core$String* label3492;
    panda$core$Bit $tmp3478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3478.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3479 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3481 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3481->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3481 = $tmp3481->next;
            }
            $fn3483 $tmp3482 = $tmp3481->methods[0];
            panda$collections$Iterator* $tmp3484 = $tmp3482(((panda$collections$Iterable*) self->loops));
            label$Iter3480 = $tmp3484;
            $l3485:;
            ITable* $tmp3487 = label$Iter3480->$class->itable;
            while ($tmp3487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3487 = $tmp3487->next;
            }
            $fn3489 $tmp3488 = $tmp3487->methods[0];
            panda$core$Bit $tmp3490 = $tmp3488(label$Iter3480);
            panda$core$Bit $tmp3491 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3490);
            if (!$tmp3491.value) goto $l3486;
            {
                ITable* $tmp3493 = label$Iter3480->$class->itable;
                while ($tmp3493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3493 = $tmp3493->next;
                }
                $fn3495 $tmp3494 = $tmp3493->methods[1];
                panda$core$Object* $tmp3496 = $tmp3494(label$Iter3480);
                label3492 = ((panda$core$String*) $tmp3496);
                bool $tmp3497 = ((panda$core$Bit) { label3492 != NULL }).value;
                if (!$tmp3497) goto $l3498;
                panda$core$Bit $tmp3499 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3492, ((panda$core$String*) p_b->payload));
                $tmp3497 = $tmp3499.value;
                $l3498:;
                panda$core$Bit $tmp3500 = { $tmp3497 };
                if ($tmp3500.value) {
                {
                    found3479 = ((panda$core$Bit) { true });
                    goto $l3486;
                }
                }
            }
            goto $l3485;
            $l3486:;
        }
        panda$core$Bit $tmp3501 = panda$core$Bit$$NOT$R$panda$core$Bit(found3479);
        if ($tmp3501.value) {
        {
            panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3502, p_b->payload);
            panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3503, &$s3504);
            panda$core$String* $tmp3507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3506, p_b->payload);
            panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, &$s3508);
            panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3505, $tmp3509);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, $tmp3510);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3511 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3511, ((panda$core$Int64) { 0 }));
    if ($tmp3512.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, &$s3513);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3514 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3514->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3514->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3514, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp3514;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3517;
    panda$collections$Iterator* label$Iter3518;
    panda$core$String* label3530;
    panda$core$Bit $tmp3516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3516.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3517 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3519 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3519->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3519 = $tmp3519->next;
            }
            $fn3521 $tmp3520 = $tmp3519->methods[0];
            panda$collections$Iterator* $tmp3522 = $tmp3520(((panda$collections$Iterable*) self->loops));
            label$Iter3518 = $tmp3522;
            $l3523:;
            ITable* $tmp3525 = label$Iter3518->$class->itable;
            while ($tmp3525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3525 = $tmp3525->next;
            }
            $fn3527 $tmp3526 = $tmp3525->methods[0];
            panda$core$Bit $tmp3528 = $tmp3526(label$Iter3518);
            panda$core$Bit $tmp3529 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3528);
            if (!$tmp3529.value) goto $l3524;
            {
                ITable* $tmp3531 = label$Iter3518->$class->itable;
                while ($tmp3531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3531 = $tmp3531->next;
                }
                $fn3533 $tmp3532 = $tmp3531->methods[1];
                panda$core$Object* $tmp3534 = $tmp3532(label$Iter3518);
                label3530 = ((panda$core$String*) $tmp3534);
                bool $tmp3535 = ((panda$core$Bit) { label3530 != NULL }).value;
                if (!$tmp3535) goto $l3536;
                panda$core$Bit $tmp3537 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3530, ((panda$core$String*) p_c->payload));
                $tmp3535 = $tmp3537.value;
                $l3536:;
                panda$core$Bit $tmp3538 = { $tmp3535 };
                if ($tmp3538.value) {
                {
                    found3517 = ((panda$core$Bit) { true });
                    goto $l3524;
                }
                }
            }
            goto $l3523;
            $l3524:;
        }
        panda$core$Bit $tmp3539 = panda$core$Bit$$NOT$R$panda$core$Bit(found3517);
        if ($tmp3539.value) {
        {
            panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3540, p_c->payload);
            panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, &$s3542);
            panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3544, p_c->payload);
            panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3545, &$s3546);
            panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3543, $tmp3547);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3548);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3549 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3549, ((panda$core$Int64) { 0 }));
    if ($tmp3550.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, &$s3551);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3552 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3552->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3552->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3552, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp3552;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3561;
    panda$collections$Array* children3566;
    panda$core$Bit $tmp3554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3554.value);
    panda$core$Int64 $tmp3555 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3555, ((panda$core$Int64) { 1 }));
    if ($tmp3556.value) {
    {
        panda$core$Object* $tmp3557 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3558 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3559 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3557)->returnType, $tmp3558);
        if ($tmp3559.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3560);
            return NULL;
        }
        }
        panda$core$Object* $tmp3562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3563 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3562));
        panda$core$Object* $tmp3564 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3565 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3563, ((org$pandalanguage$pandac$MethodDecl*) $tmp3564)->returnType);
        value3561 = $tmp3565;
        if (((panda$core$Bit) { value3561 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3567 = (panda$collections$Array*) malloc(40);
        $tmp3567->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3567->refCount.value = 1;
        panda$collections$Array$init($tmp3567);
        children3566 = $tmp3567;
        panda$collections$Array$add$panda$collections$Array$T(children3566, ((panda$core$Object*) value3561));
        org$pandalanguage$pandac$IRNode* $tmp3569 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3569->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3569->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3569, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children3566));
        return $tmp3569;
    }
    }
    panda$core$Int64 $tmp3571 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3571, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3572.value);
    panda$core$Object* $tmp3573 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3574 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3575 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3573)->returnType, $tmp3574);
    if ($tmp3575.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3576);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3577 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3577->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3577->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp3577, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp3577;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3587;
    org$pandalanguage$pandac$ClassDecl* bit3592;
    org$pandalanguage$pandac$Symbol* value3595;
    panda$collections$Array* fieldChildren3598;
    panda$collections$Array* children3604;
    org$pandalanguage$pandac$IRNode* msg3609;
    panda$core$Bit $tmp3579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3579.value);
    panda$core$Int64 $tmp3581 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3581, ((panda$core$Int64) { 1 }));
    bool $tmp3580 = $tmp3582.value;
    if ($tmp3580) goto $l3583;
    panda$core$Int64 $tmp3584 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3584, ((panda$core$Int64) { 2 }));
    $tmp3580 = $tmp3585.value;
    $l3583:;
    panda$core$Bit $tmp3586 = { $tmp3580 };
    PANDA_ASSERT($tmp3586.value);
    panda$core$Object* $tmp3588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3589 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3588));
    test3587 = $tmp3589;
    if (((panda$core$Bit) { test3587 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3590 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3591 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3587, $tmp3590);
    test3587 = $tmp3591;
    if (((panda$core$Bit) { test3587 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3593 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3594 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3593);
    bit3592 = $tmp3594;
    PANDA_ASSERT(((panda$core$Bit) { bit3592 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3597 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3592->symbolTable, &$s3596);
    value3595 = $tmp3597;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3595));
    panda$collections$Array* $tmp3599 = (panda$collections$Array*) malloc(40);
    $tmp3599->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3599->refCount.value = 1;
    panda$collections$Array$init($tmp3599);
    fieldChildren3598 = $tmp3599;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3598, ((panda$core$Object*) test3587));
    org$pandalanguage$pandac$IRNode* $tmp3601 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3601->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3603 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3601, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp3603, ((panda$core$Object*) value3595), ((panda$collections$ListView*) fieldChildren3598));
    test3587 = $tmp3601;
    panda$collections$Array* $tmp3605 = (panda$collections$Array*) malloc(40);
    $tmp3605->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3605->refCount.value = 1;
    panda$collections$Array$init($tmp3605);
    children3604 = $tmp3605;
    panda$collections$Array$add$panda$collections$Array$T(children3604, ((panda$core$Object*) test3587));
    panda$core$Int64 $tmp3607 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3607, ((panda$core$Int64) { 2 }));
    if ($tmp3608.value) {
    {
        panda$core$Object* $tmp3610 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3611 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3610));
        msg3609 = $tmp3611;
        if (((panda$core$Bit) { msg3609 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3612 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3613 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3609, $tmp3612);
        msg3609 = $tmp3613;
        if (((panda$core$Bit) { msg3609 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3604, ((panda$core$Object*) msg3609));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3614 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3614->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3614->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3614, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children3604));
    return $tmp3614;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3629;
    panda$core$Int64 varKind3630;
    panda$collections$Array* decls3631;
    panda$collections$Iterator* astDecl$Iter3634;
    org$pandalanguage$pandac$ASTNode* astDecl3646;
    org$pandalanguage$pandac$IRNode* decl3651;
    panda$core$Bit $tmp3619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3618 = $tmp3619.value;
    if ($tmp3618) goto $l3620;
    panda$core$Bit $tmp3621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3618 = $tmp3621.value;
    $l3620:;
    panda$core$Bit $tmp3622 = { $tmp3618 };
    bool $tmp3617 = $tmp3622.value;
    if ($tmp3617) goto $l3623;
    panda$core$Bit $tmp3624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3617 = $tmp3624.value;
    $l3623:;
    panda$core$Bit $tmp3625 = { $tmp3617 };
    bool $tmp3616 = $tmp3625.value;
    if ($tmp3616) goto $l3626;
    panda$core$Bit $tmp3627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3616 = $tmp3627.value;
    $l3626:;
    panda$core$Bit $tmp3628 = { $tmp3616 };
    PANDA_ASSERT($tmp3628.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3629 = ((panda$core$Int64) { 1017 });
            varKind3630 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3629 = ((panda$core$Int64) { 1018 });
            varKind3630 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3629 = ((panda$core$Int64) { 1019 });
            varKind3630 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3629 = ((panda$core$Int64) { 1020 });
            varKind3630 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3632 = (panda$collections$Array*) malloc(40);
    $tmp3632->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3632->refCount.value = 1;
    panda$collections$Array$init($tmp3632);
    decls3631 = $tmp3632;
    {
        ITable* $tmp3635 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3635->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3635 = $tmp3635->next;
        }
        $fn3637 $tmp3636 = $tmp3635->methods[0];
        panda$collections$Iterator* $tmp3638 = $tmp3636(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3634 = $tmp3638;
        $l3639:;
        ITable* $tmp3641 = astDecl$Iter3634->$class->itable;
        while ($tmp3641->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3641 = $tmp3641->next;
        }
        $fn3643 $tmp3642 = $tmp3641->methods[0];
        panda$core$Bit $tmp3644 = $tmp3642(astDecl$Iter3634);
        panda$core$Bit $tmp3645 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3644);
        if (!$tmp3645.value) goto $l3640;
        {
            ITable* $tmp3647 = astDecl$Iter3634->$class->itable;
            while ($tmp3647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3647 = $tmp3647->next;
            }
            $fn3649 $tmp3648 = $tmp3647->methods[1];
            panda$core$Object* $tmp3650 = $tmp3648(astDecl$Iter3634);
            astDecl3646 = ((org$pandalanguage$pandac$ASTNode*) $tmp3650);
            org$pandalanguage$pandac$IRNode* $tmp3652 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3646, varKind3630);
            decl3651 = $tmp3652;
            if (((panda$core$Bit) { decl3651 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3631, ((panda$core$Object*) decl3651));
        }
        goto $l3639;
        $l3640:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3653 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3653->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3653, nodeKind3629, p_v->offset, ((panda$collections$ListView*) decls3631));
    return $tmp3653;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3655;
    panda$collections$Array* callChildren3658;
    org$pandalanguage$pandac$IRNode* testValue3661;
    org$pandalanguage$pandac$IRNode* $tmp3656 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3656->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3656, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target3655 = $tmp3656;
    panda$collections$Array* $tmp3659 = (panda$collections$Array*) malloc(40);
    $tmp3659->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3659->refCount.value = 1;
    panda$collections$Array$init($tmp3659);
    callChildren3658 = $tmp3659;
    org$pandalanguage$pandac$IRNode* $tmp3662 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3661 = $tmp3662;
    if (((panda$core$Bit) { testValue3661 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3658, ((panda$core$Object*) testValue3661));
    org$pandalanguage$pandac$IRNode* $tmp3664 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3655, &$s3663, ((panda$collections$ListView*) callChildren3658));
    return $tmp3664;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3673;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3677;
    org$pandalanguage$pandac$IRNode* nextTest3698;
    panda$collections$Array* callChildren3702;
    panda$collections$Array* statements3720;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3723;
    org$pandalanguage$pandac$IRNode* statement3743;
    panda$collections$Array* children3758;
    panda$core$Bit $tmp3665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3665.value);
    panda$core$Int64 $tmp3666 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3667 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3666, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3667.value);
    panda$core$Object* $tmp3668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3668)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3669.value);
    panda$core$Object* $tmp3670 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3671 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3670)->children);
    panda$core$Bit $tmp3672 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3671, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3672.value);
    panda$core$Object* $tmp3674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3674)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3676 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3675));
    test3673 = $tmp3676;
    if (((panda$core$Bit) { test3673 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3678 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3679 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3678)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3677, ((panda$core$Int64) { 1 }), $tmp3679, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3681 = $tmp3677.start.value;
    panda$core$Int64 i3680 = { $tmp3681 };
    int64_t $tmp3683 = $tmp3677.end.value;
    int64_t $tmp3684 = $tmp3677.step.value;
    bool $tmp3685 = $tmp3677.inclusive.value;
    bool $tmp3692 = $tmp3684 > 0;
    if ($tmp3692) goto $l3690; else goto $l3691;
    $l3690:;
    if ($tmp3685) goto $l3693; else goto $l3694;
    $l3693:;
    if ($tmp3681 <= $tmp3683) goto $l3686; else goto $l3688;
    $l3694:;
    if ($tmp3681 < $tmp3683) goto $l3686; else goto $l3688;
    $l3691:;
    if ($tmp3685) goto $l3695; else goto $l3696;
    $l3695:;
    if ($tmp3681 >= $tmp3683) goto $l3686; else goto $l3688;
    $l3696:;
    if ($tmp3681 > $tmp3683) goto $l3686; else goto $l3688;
    $l3686:;
    {
        panda$core$Object* $tmp3699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3700 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3699)->children, i3680);
        org$pandalanguage$pandac$IRNode* $tmp3701 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3700));
        nextTest3698 = $tmp3701;
        if (((panda$core$Bit) { nextTest3698 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3703 = (panda$collections$Array*) malloc(40);
        $tmp3703->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3703->refCount.value = 1;
        panda$collections$Array$init($tmp3703);
        callChildren3702 = $tmp3703;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3702, ((panda$core$Object*) nextTest3698));
        org$pandalanguage$pandac$IRNode* $tmp3706 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3673, &$s3705, ((panda$collections$ListView*) callChildren3702));
        test3673 = $tmp3706;
        if (((panda$core$Bit) { test3673 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3689:;
    if ($tmp3692) goto $l3708; else goto $l3709;
    $l3708:;
    int64_t $tmp3710 = $tmp3683 - i3680.value;
    if ($tmp3685) goto $l3711; else goto $l3712;
    $l3711:;
    if ($tmp3710 >= $tmp3684) goto $l3707; else goto $l3688;
    $l3712:;
    if ($tmp3710 > $tmp3684) goto $l3707; else goto $l3688;
    $l3709:;
    int64_t $tmp3714 = i3680.value - $tmp3683;
    if ($tmp3685) goto $l3715; else goto $l3716;
    $l3715:;
    if ($tmp3714 >= -$tmp3684) goto $l3707; else goto $l3688;
    $l3716:;
    if ($tmp3714 > -$tmp3684) goto $l3707; else goto $l3688;
    $l3707:;
    i3680.value += $tmp3684;
    goto $l3686;
    $l3688:;
    org$pandalanguage$pandac$SymbolTable* $tmp3718 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3718->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3718->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3718, self->symbolTable);
    self->symbolTable = $tmp3718;
    panda$collections$Array* $tmp3721 = (panda$collections$Array*) malloc(40);
    $tmp3721->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3721->refCount.value = 1;
    panda$collections$Array$init($tmp3721);
    statements3720 = $tmp3721;
    panda$core$Int64 $tmp3724 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3723, ((panda$core$Int64) { 1 }), $tmp3724, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3726 = $tmp3723.start.value;
    panda$core$Int64 i3725 = { $tmp3726 };
    int64_t $tmp3728 = $tmp3723.end.value;
    int64_t $tmp3729 = $tmp3723.step.value;
    bool $tmp3730 = $tmp3723.inclusive.value;
    bool $tmp3737 = $tmp3729 > 0;
    if ($tmp3737) goto $l3735; else goto $l3736;
    $l3735:;
    if ($tmp3730) goto $l3738; else goto $l3739;
    $l3738:;
    if ($tmp3726 <= $tmp3728) goto $l3731; else goto $l3733;
    $l3739:;
    if ($tmp3726 < $tmp3728) goto $l3731; else goto $l3733;
    $l3736:;
    if ($tmp3730) goto $l3740; else goto $l3741;
    $l3740:;
    if ($tmp3726 >= $tmp3728) goto $l3731; else goto $l3733;
    $l3741:;
    if ($tmp3726 > $tmp3728) goto $l3731; else goto $l3733;
    $l3731:;
    {
        panda$core$Object* $tmp3744 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3725);
        org$pandalanguage$pandac$IRNode* $tmp3745 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3744));
        statement3743 = $tmp3745;
        if (((panda$core$Bit) { statement3743 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3720, ((panda$core$Object*) statement3743));
    }
    $l3734:;
    if ($tmp3737) goto $l3747; else goto $l3748;
    $l3747:;
    int64_t $tmp3749 = $tmp3728 - i3725.value;
    if ($tmp3730) goto $l3750; else goto $l3751;
    $l3750:;
    if ($tmp3749 >= $tmp3729) goto $l3746; else goto $l3733;
    $l3751:;
    if ($tmp3749 > $tmp3729) goto $l3746; else goto $l3733;
    $l3748:;
    int64_t $tmp3753 = i3725.value - $tmp3728;
    if ($tmp3730) goto $l3754; else goto $l3755;
    $l3754:;
    if ($tmp3753 >= -$tmp3729) goto $l3746; else goto $l3733;
    $l3755:;
    if ($tmp3753 > -$tmp3729) goto $l3746; else goto $l3733;
    $l3746:;
    i3725.value += $tmp3729;
    goto $l3731;
    $l3733:;
    panda$core$Object* $tmp3757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3757);
    panda$collections$Array* $tmp3759 = (panda$collections$Array*) malloc(40);
    $tmp3759->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3759->refCount.value = 1;
    panda$collections$Array$init($tmp3759);
    children3758 = $tmp3759;
    panda$collections$Array$add$panda$collections$Array$T(children3758, ((panda$core$Object*) test3673));
    org$pandalanguage$pandac$IRNode* $tmp3761 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3761->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3761->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3761, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3720));
    panda$collections$Array$add$panda$collections$Array$T(children3758, ((panda$core$Object*) $tmp3761));
    org$pandalanguage$pandac$IRNode* $tmp3763 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3763->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3763->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3763, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children3758));
    return $tmp3763;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3765;
    org$pandalanguage$pandac$Variable* valueVar3768;
    panda$collections$Array* declChildren3775;
    panda$collections$Array* varChildren3780;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3787;
    org$pandalanguage$pandac$ASTNode* c3807;
    org$pandalanguage$pandac$IRNode* w3809;
    panda$collections$Array* statements3811;
    panda$collections$Iterator* astStatement$Iter3814;
    org$pandalanguage$pandac$ASTNode* astStatement3826;
    org$pandalanguage$pandac$IRNode* stmt3831;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3846;
    panda$collections$Array* $tmp3766 = (panda$collections$Array*) malloc(40);
    $tmp3766->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3766->refCount.value = 1;
    panda$collections$Array$init($tmp3766);
    children3765 = $tmp3766;
    org$pandalanguage$pandac$Variable* $tmp3769 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3769->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3769->refCount.value = 1;
    panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3771, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, &$s3773);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3769, p_m->offset, ((panda$core$Int64) { 10001 }), $tmp3774, p_value->type);
    valueVar3768 = $tmp3769;
    panda$collections$Array* $tmp3776 = (panda$collections$Array*) malloc(40);
    $tmp3776->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3776->refCount.value = 1;
    panda$collections$Array$init($tmp3776);
    declChildren3775 = $tmp3776;
    org$pandalanguage$pandac$IRNode* $tmp3778 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3778->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3778->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3778, ((panda$core$Int64) { 1016 }), p_value->offset, valueVar3768->type, valueVar3768);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3775, ((panda$core$Object*) $tmp3778));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3775, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3781 = (panda$collections$Array*) malloc(40);
    $tmp3781->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3781->refCount.value = 1;
    panda$collections$Array$init($tmp3781);
    varChildren3780 = $tmp3781;
    org$pandalanguage$pandac$IRNode* $tmp3783 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3783->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3783->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3783, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3768)->offset, ((panda$collections$ListView*) declChildren3775));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3780, ((panda$core$Object*) $tmp3783));
    org$pandalanguage$pandac$IRNode* $tmp3785 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3785->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3785->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3785, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3768)->offset, ((panda$collections$ListView*) varChildren3780));
    panda$collections$Array$add$panda$collections$Array$T(children3765, ((panda$core$Object*) $tmp3785));
    panda$core$Int64 $tmp3788 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3787, ((panda$core$Int64) { 1 }), $tmp3788, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3790 = $tmp3787.start.value;
    panda$core$Int64 i3789 = { $tmp3790 };
    int64_t $tmp3792 = $tmp3787.end.value;
    int64_t $tmp3793 = $tmp3787.step.value;
    bool $tmp3794 = $tmp3787.inclusive.value;
    bool $tmp3801 = $tmp3793 > 0;
    if ($tmp3801) goto $l3799; else goto $l3800;
    $l3799:;
    if ($tmp3794) goto $l3802; else goto $l3803;
    $l3802:;
    if ($tmp3790 <= $tmp3792) goto $l3795; else goto $l3797;
    $l3803:;
    if ($tmp3790 < $tmp3792) goto $l3795; else goto $l3797;
    $l3800:;
    if ($tmp3794) goto $l3804; else goto $l3805;
    $l3804:;
    if ($tmp3790 >= $tmp3792) goto $l3795; else goto $l3797;
    $l3805:;
    if ($tmp3790 > $tmp3792) goto $l3795; else goto $l3797;
    $l3795:;
    {
        panda$core$Object* $tmp3808 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3789);
        c3807 = ((org$pandalanguage$pandac$ASTNode*) $tmp3808);
        switch (c3807->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3810 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3768, c3807);
                w3809 = $tmp3810;
                if (((panda$core$Bit) { w3809 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3765, ((panda$core$Object*) w3809));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3812 = (panda$collections$Array*) malloc(40);
                $tmp3812->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3812->refCount.value = 1;
                panda$collections$Array$init($tmp3812);
                statements3811 = $tmp3812;
                {
                    ITable* $tmp3815 = ((panda$collections$Iterable*) c3807->children)->$class->itable;
                    while ($tmp3815->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3815 = $tmp3815->next;
                    }
                    $fn3817 $tmp3816 = $tmp3815->methods[0];
                    panda$collections$Iterator* $tmp3818 = $tmp3816(((panda$collections$Iterable*) c3807->children));
                    astStatement$Iter3814 = $tmp3818;
                    $l3819:;
                    ITable* $tmp3821 = astStatement$Iter3814->$class->itable;
                    while ($tmp3821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3821 = $tmp3821->next;
                    }
                    $fn3823 $tmp3822 = $tmp3821->methods[0];
                    panda$core$Bit $tmp3824 = $tmp3822(astStatement$Iter3814);
                    panda$core$Bit $tmp3825 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3824);
                    if (!$tmp3825.value) goto $l3820;
                    {
                        ITable* $tmp3827 = astStatement$Iter3814->$class->itable;
                        while ($tmp3827->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3827 = $tmp3827->next;
                        }
                        $fn3829 $tmp3828 = $tmp3827->methods[1];
                        panda$core$Object* $tmp3830 = $tmp3828(astStatement$Iter3814);
                        astStatement3826 = ((org$pandalanguage$pandac$ASTNode*) $tmp3830);
                        org$pandalanguage$pandac$IRNode* $tmp3832 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3826);
                        stmt3831 = $tmp3832;
                        if (((panda$core$Bit) { stmt3831 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3811, ((panda$core$Object*) stmt3831));
                    }
                    goto $l3819;
                    $l3820:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3833 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3833->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3833->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3833, ((panda$core$Int64) { 1000 }), c3807->offset, ((panda$collections$ListView*) statements3811));
                panda$collections$Array$add$panda$collections$Array$T(children3765, ((panda$core$Object*) $tmp3833));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3798:;
    if ($tmp3801) goto $l3836; else goto $l3837;
    $l3836:;
    int64_t $tmp3838 = $tmp3792 - i3789.value;
    if ($tmp3794) goto $l3839; else goto $l3840;
    $l3839:;
    if ($tmp3838 >= $tmp3793) goto $l3835; else goto $l3797;
    $l3840:;
    if ($tmp3838 > $tmp3793) goto $l3835; else goto $l3797;
    $l3837:;
    int64_t $tmp3842 = i3789.value - $tmp3792;
    if ($tmp3794) goto $l3843; else goto $l3844;
    $l3843:;
    if ($tmp3842 >= -$tmp3793) goto $l3835; else goto $l3797;
    $l3844:;
    if ($tmp3842 > -$tmp3793) goto $l3835; else goto $l3797;
    $l3835:;
    i3789.value += $tmp3793;
    goto $l3795;
    $l3797:;
    panda$core$Int64 $tmp3847 = panda$collections$Array$get_count$R$panda$core$Int64(children3765);
    panda$core$Int64 $tmp3848 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3847, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3846, $tmp3848, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3850 = $tmp3846.start.value;
    panda$core$Int64 i3849 = { $tmp3850 };
    int64_t $tmp3852 = $tmp3846.end.value;
    int64_t $tmp3853 = $tmp3846.step.value;
    bool $tmp3854 = $tmp3846.inclusive.value;
    bool $tmp3861 = $tmp3853 > 0;
    if ($tmp3861) goto $l3859; else goto $l3860;
    $l3859:;
    if ($tmp3854) goto $l3862; else goto $l3863;
    $l3862:;
    if ($tmp3850 <= $tmp3852) goto $l3855; else goto $l3857;
    $l3863:;
    if ($tmp3850 < $tmp3852) goto $l3855; else goto $l3857;
    $l3860:;
    if ($tmp3854) goto $l3864; else goto $l3865;
    $l3864:;
    if ($tmp3850 >= $tmp3852) goto $l3855; else goto $l3857;
    $l3865:;
    if ($tmp3850 > $tmp3852) goto $l3855; else goto $l3857;
    $l3855:;
    {
        panda$core$Int64 $tmp3867 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3849, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3868 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3765, $tmp3867);
        panda$core$Bit $tmp3869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3868)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3869.value);
        panda$core$Int64 $tmp3870 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3849, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3871 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3765, $tmp3870);
        panda$core$Int64 $tmp3872 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3871)->children);
        panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3872, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3873.value);
        panda$core$Int64 $tmp3874 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3849, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3875 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3765, $tmp3874);
        panda$core$Object* $tmp3876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3765, i3849);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3875)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3876)));
        panda$core$Int64 $tmp3877 = panda$collections$Array$get_count$R$panda$core$Int64(children3765);
        panda$core$Int64 $tmp3878 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3877, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3765, $tmp3878);
    }
    $l3858:;
    if ($tmp3861) goto $l3880; else goto $l3881;
    $l3880:;
    int64_t $tmp3882 = $tmp3852 - i3849.value;
    if ($tmp3854) goto $l3883; else goto $l3884;
    $l3883:;
    if ($tmp3882 >= $tmp3853) goto $l3879; else goto $l3857;
    $l3884:;
    if ($tmp3882 > $tmp3853) goto $l3879; else goto $l3857;
    $l3881:;
    int64_t $tmp3886 = i3849.value - $tmp3852;
    if ($tmp3854) goto $l3887; else goto $l3888;
    $l3887:;
    if ($tmp3886 >= -$tmp3853) goto $l3879; else goto $l3857;
    $l3888:;
    if ($tmp3886 > -$tmp3853) goto $l3879; else goto $l3857;
    $l3879:;
    i3849.value += $tmp3853;
    goto $l3855;
    $l3857:;
    org$pandalanguage$pandac$IRNode* $tmp3890 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3890->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3890->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3890, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children3765));
    return $tmp3890;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3900;
    panda$collections$Iterator* expr$Iter3903;
    org$pandalanguage$pandac$ASTNode* expr3916;
    org$pandalanguage$pandac$IRNode* compiled3921;
    panda$collections$Array* statements3926;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3929;
    org$pandalanguage$pandac$IRNode* statement3949;
    panda$core$Bit $tmp3892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3892.value);
    panda$core$Int64 $tmp3893 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3894 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3893, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3894.value);
    panda$core$Object* $tmp3895 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3895)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3896.value);
    panda$core$Object* $tmp3897 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3898 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3897)->children);
    panda$core$Bit $tmp3899 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3898, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3899.value);
    panda$collections$Array* $tmp3901 = (panda$collections$Array*) malloc(40);
    $tmp3901->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3901->refCount.value = 1;
    panda$collections$Array$init($tmp3901);
    children3900 = $tmp3901;
    {
        panda$core$Object* $tmp3904 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3905 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3904)->children)->$class->itable;
        while ($tmp3905->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3905 = $tmp3905->next;
        }
        $fn3907 $tmp3906 = $tmp3905->methods[0];
        panda$collections$Iterator* $tmp3908 = $tmp3906(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3904)->children));
        expr$Iter3903 = $tmp3908;
        $l3909:;
        ITable* $tmp3911 = expr$Iter3903->$class->itable;
        while ($tmp3911->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3911 = $tmp3911->next;
        }
        $fn3913 $tmp3912 = $tmp3911->methods[0];
        panda$core$Bit $tmp3914 = $tmp3912(expr$Iter3903);
        panda$core$Bit $tmp3915 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3914);
        if (!$tmp3915.value) goto $l3910;
        {
            ITable* $tmp3917 = expr$Iter3903->$class->itable;
            while ($tmp3917->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3917 = $tmp3917->next;
            }
            $fn3919 $tmp3918 = $tmp3917->methods[1];
            panda$core$Object* $tmp3920 = $tmp3918(expr$Iter3903);
            expr3916 = ((org$pandalanguage$pandac$ASTNode*) $tmp3920);
            org$pandalanguage$pandac$IRNode* $tmp3922 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3916);
            org$pandalanguage$pandac$IRNode* $tmp3923 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3922, p_type);
            compiled3921 = $tmp3923;
            if (((panda$core$Bit) { compiled3921 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3900, ((panda$core$Object*) compiled3921));
        }
        goto $l3909;
        $l3910:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3924 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3924->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3924->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3924, self->symbolTable);
    self->symbolTable = $tmp3924;
    panda$collections$Array* $tmp3927 = (panda$collections$Array*) malloc(40);
    $tmp3927->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3927->refCount.value = 1;
    panda$collections$Array$init($tmp3927);
    statements3926 = $tmp3927;
    panda$core$Int64 $tmp3930 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3929, ((panda$core$Int64) { 1 }), $tmp3930, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3932 = $tmp3929.start.value;
    panda$core$Int64 i3931 = { $tmp3932 };
    int64_t $tmp3934 = $tmp3929.end.value;
    int64_t $tmp3935 = $tmp3929.step.value;
    bool $tmp3936 = $tmp3929.inclusive.value;
    bool $tmp3943 = $tmp3935 > 0;
    if ($tmp3943) goto $l3941; else goto $l3942;
    $l3941:;
    if ($tmp3936) goto $l3944; else goto $l3945;
    $l3944:;
    if ($tmp3932 <= $tmp3934) goto $l3937; else goto $l3939;
    $l3945:;
    if ($tmp3932 < $tmp3934) goto $l3937; else goto $l3939;
    $l3942:;
    if ($tmp3936) goto $l3946; else goto $l3947;
    $l3946:;
    if ($tmp3932 >= $tmp3934) goto $l3937; else goto $l3939;
    $l3947:;
    if ($tmp3932 > $tmp3934) goto $l3937; else goto $l3939;
    $l3937:;
    {
        panda$core$Object* $tmp3950 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3931);
        org$pandalanguage$pandac$IRNode* $tmp3951 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3950));
        statement3949 = $tmp3951;
        if (((panda$core$Bit) { statement3949 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3926, ((panda$core$Object*) statement3949));
    }
    $l3940:;
    if ($tmp3943) goto $l3953; else goto $l3954;
    $l3953:;
    int64_t $tmp3955 = $tmp3934 - i3931.value;
    if ($tmp3936) goto $l3956; else goto $l3957;
    $l3956:;
    if ($tmp3955 >= $tmp3935) goto $l3952; else goto $l3939;
    $l3957:;
    if ($tmp3955 > $tmp3935) goto $l3952; else goto $l3939;
    $l3954:;
    int64_t $tmp3959 = i3931.value - $tmp3934;
    if ($tmp3936) goto $l3960; else goto $l3961;
    $l3960:;
    if ($tmp3959 >= -$tmp3935) goto $l3952; else goto $l3939;
    $l3961:;
    if ($tmp3959 > -$tmp3935) goto $l3952; else goto $l3939;
    $l3952:;
    i3931.value += $tmp3935;
    goto $l3937;
    $l3939:;
    panda$core$Object* $tmp3963 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3963);
    org$pandalanguage$pandac$IRNode* $tmp3964 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3964->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3964->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3964, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3926));
    panda$collections$Array$add$panda$collections$Array$T(children3900, ((panda$core$Object*) $tmp3964));
    org$pandalanguage$pandac$IRNode* $tmp3966 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3966->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3966->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3966, ((panda$core$Int64) { 1042 }), p_w->offset, ((panda$collections$ListView*) children3900));
    return $tmp3966;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3969;
    panda$collections$Array* statements3974;
    panda$collections$Iterator* s$Iter3977;
    org$pandalanguage$pandac$ASTNode* s3989;
    org$pandalanguage$pandac$IRNode* statement3994;
    panda$core$Bit $tmp3968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3968.value);
    panda$collections$Array* $tmp3970 = (panda$collections$Array*) malloc(40);
    $tmp3970->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3970->refCount.value = 1;
    panda$collections$Array$init($tmp3970);
    children3969 = $tmp3970;
    org$pandalanguage$pandac$SymbolTable* $tmp3972 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3972->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3972->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3972, self->symbolTable);
    self->symbolTable = $tmp3972;
    panda$collections$Array* $tmp3975 = (panda$collections$Array*) malloc(40);
    $tmp3975->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3975->refCount.value = 1;
    panda$collections$Array$init($tmp3975);
    statements3974 = $tmp3975;
    {
        ITable* $tmp3978 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp3978->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3978 = $tmp3978->next;
        }
        $fn3980 $tmp3979 = $tmp3978->methods[0];
        panda$collections$Iterator* $tmp3981 = $tmp3979(((panda$collections$Iterable*) p_o->children));
        s$Iter3977 = $tmp3981;
        $l3982:;
        ITable* $tmp3984 = s$Iter3977->$class->itable;
        while ($tmp3984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3984 = $tmp3984->next;
        }
        $fn3986 $tmp3985 = $tmp3984->methods[0];
        panda$core$Bit $tmp3987 = $tmp3985(s$Iter3977);
        panda$core$Bit $tmp3988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3987);
        if (!$tmp3988.value) goto $l3983;
        {
            ITable* $tmp3990 = s$Iter3977->$class->itable;
            while ($tmp3990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3990 = $tmp3990->next;
            }
            $fn3992 $tmp3991 = $tmp3990->methods[1];
            panda$core$Object* $tmp3993 = $tmp3991(s$Iter3977);
            s3989 = ((org$pandalanguage$pandac$ASTNode*) $tmp3993);
            org$pandalanguage$pandac$IRNode* $tmp3995 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s3989);
            statement3994 = $tmp3995;
            if (((panda$core$Bit) { statement3994 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements3974, ((panda$core$Object*) statement3994));
        }
        goto $l3982;
        $l3983:;
    }
    panda$core$Object* $tmp3996 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3996);
    org$pandalanguage$pandac$IRNode* $tmp3997 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3997->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3997->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3997, ((panda$core$Int64) { 1000 }), p_o->offset, ((panda$collections$ListView*) statements3974));
    panda$collections$Array$add$panda$collections$Array$T(children3969, ((panda$core$Object*) $tmp3997));
    org$pandalanguage$pandac$IRNode* $tmp3999 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3999->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3999->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3999, ((panda$core$Int64) { 1043 }), p_o->offset, ((panda$collections$ListView*) children3969));
    return $tmp3999;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4008;
    org$pandalanguage$pandac$Variable* v4017;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4002 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4001 = $tmp4002.value;
            if (!$tmp4001) goto $l4003;
            panda$core$Object* $tmp4004 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4005 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4004)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4006 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4005));
            $tmp4001 = $tmp4006.value;
            $l4003:;
            panda$core$Bit $tmp4007 = { $tmp4001 };
            return $tmp4007;
        }
        break;
        case 1026:
        {
            f4008 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4008->resolved.value);
            panda$core$Bit $tmp4011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4008->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4010 = $tmp4011.value;
            if (!$tmp4010) goto $l4012;
            $tmp4010 = ((panda$core$Bit) { f4008->value != NULL }).value;
            $l4012:;
            panda$core$Bit $tmp4013 = { $tmp4010 };
            bool $tmp4009 = $tmp4013.value;
            if (!$tmp4009) goto $l4014;
            panda$core$Bit $tmp4015 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4008->value);
            $tmp4009 = $tmp4015.value;
            $l4014:;
            panda$core$Bit $tmp4016 = { $tmp4009 };
            return $tmp4016;
        }
        break;
        case 1016:
        {
            v4017 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4017->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4018 = $tmp4019.value;
            if ($tmp4018) goto $l4020;
            panda$core$Bit $tmp4023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4017->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4022 = $tmp4023.value;
            if (!$tmp4022) goto $l4024;
            $tmp4022 = ((panda$core$Bit) { v4017->initialValue != NULL }).value;
            $l4024:;
            panda$core$Bit $tmp4025 = { $tmp4022 };
            bool $tmp4021 = $tmp4025.value;
            if (!$tmp4021) goto $l4026;
            panda$core$Bit $tmp4027 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4017->initialValue);
            $tmp4021 = $tmp4027.value;
            $l4026:;
            panda$core$Bit $tmp4028 = { $tmp4021 };
            $tmp4018 = $tmp4028.value;
            $l4020:;
            panda$core$Bit $tmp4029 = { $tmp4018 };
            return $tmp4029;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4034;
    org$pandalanguage$pandac$Variable* v4036;
    panda$core$Bit $tmp4030 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4030.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4031 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4032 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4031)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4033 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4032));
            return $tmp4033;
        }
        break;
        case 1026:
        {
            f4034 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4035 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4034->value);
            return $tmp4035;
        }
        break;
        case 1016:
        {
            v4036 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4037 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4036->initialValue);
            return $tmp4037;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4041;
    panda$collections$Array* children4048;
    panda$collections$Iterator* rawWhen$Iter4051;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4052;
    org$pandalanguage$pandac$ASTNode* rawWhen4065;
    org$pandalanguage$pandac$IRNode* o4071;
    org$pandalanguage$pandac$IRNode* w4073;
    panda$core$Bit $tmp4038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4038.value);
    panda$core$Int64 $tmp4039 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4040 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4039, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4040.value);
    panda$core$Object* $tmp4042 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4043 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4042));
    org$pandalanguage$pandac$IRNode* $tmp4044 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4043);
    value4041 = $tmp4044;
    if (((panda$core$Bit) { value4041 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4045 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4041->type);
    panda$core$Bit $tmp4046 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4045);
    if ($tmp4046.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4047 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4041);
        return $tmp4047;
    }
    }
    panda$collections$Array* $tmp4049 = (panda$collections$Array*) malloc(40);
    $tmp4049->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4049->refCount.value = 1;
    panda$collections$Array$init($tmp4049);
    children4048 = $tmp4049;
    panda$collections$Array$add$panda$collections$Array$T(children4048, ((panda$core$Object*) value4041));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4052, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4053 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4052);
        ITable* $tmp4054 = ((panda$collections$Iterable*) $tmp4053)->$class->itable;
        while ($tmp4054->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4054 = $tmp4054->next;
        }
        $fn4056 $tmp4055 = $tmp4054->methods[0];
        panda$collections$Iterator* $tmp4057 = $tmp4055(((panda$collections$Iterable*) $tmp4053));
        rawWhen$Iter4051 = $tmp4057;
        $l4058:;
        ITable* $tmp4060 = rawWhen$Iter4051->$class->itable;
        while ($tmp4060->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4060 = $tmp4060->next;
        }
        $fn4062 $tmp4061 = $tmp4060->methods[0];
        panda$core$Bit $tmp4063 = $tmp4061(rawWhen$Iter4051);
        panda$core$Bit $tmp4064 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4063);
        if (!$tmp4064.value) goto $l4059;
        {
            ITable* $tmp4066 = rawWhen$Iter4051->$class->itable;
            while ($tmp4066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4066 = $tmp4066->next;
            }
            $fn4068 $tmp4067 = $tmp4066->methods[1];
            panda$core$Object* $tmp4069 = $tmp4067(rawWhen$Iter4051);
            rawWhen4065 = ((org$pandalanguage$pandac$ASTNode*) $tmp4069);
            panda$core$Bit $tmp4070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4065->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4070.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4072 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4065);
                o4071 = $tmp4072;
                if (((panda$core$Bit) { o4071 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4048, ((panda$core$Object*) o4071));
                goto $l4058;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4074 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4041->type, rawWhen4065);
            w4073 = $tmp4074;
            if (((panda$core$Bit) { w4073 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4075 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4073->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4076 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4075));
            panda$core$Bit $tmp4077 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4076);
            if ($tmp4077.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4078 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4041);
                return $tmp4078;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4048, ((panda$core$Object*) w4073));
        }
        goto $l4058;
        $l4059:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4079 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4079->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4079->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4079, ((panda$core$Int64) { 1042 }), p_m->offset, ((panda$collections$ListView*) children4048));
    return $tmp4079;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4094;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4081 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4081;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4082 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4083 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4082);
            return $tmp4083;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4084 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4084;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4085 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4085;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4086 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4086;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4087 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4087;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4088 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4088;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4089 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4089;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4090 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4090;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4091 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4091;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4092 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4092;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4093 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4093;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4095 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4096 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4095);
            result4094 = $tmp4096;
            if (((panda$core$Bit) { result4094 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4097 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4094);
                result4094 = $tmp4097;
            }
            }
            return result4094;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4098 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4098;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4099;
    org$pandalanguage$pandac$SymbolTable* symbols4101;
    panda$collections$Iterator* p$Iter4104;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4116;
    panda$collections$Array* fieldInitializers4123;
    panda$collections$Iterator* f$Iter4127;
    org$pandalanguage$pandac$FieldDecl* f4140;
    panda$collections$Array* children4150;
    org$pandalanguage$pandac$IRNode* fieldRef4157;
    org$pandalanguage$pandac$IRNode* compiled4162;
    panda$collections$Array* children4166;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4099 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4100 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4100;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4102 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4102->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4102->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4102, self->symbolTable);
    symbols4101 = $tmp4102;
    {
        ITable* $tmp4105 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4105 = $tmp4105->next;
        }
        $fn4107 $tmp4106 = $tmp4105->methods[0];
        panda$collections$Iterator* $tmp4108 = $tmp4106(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4104 = $tmp4108;
        $l4109:;
        ITable* $tmp4111 = p$Iter4104->$class->itable;
        while ($tmp4111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4111 = $tmp4111->next;
        }
        $fn4113 $tmp4112 = $tmp4111->methods[0];
        panda$core$Bit $tmp4114 = $tmp4112(p$Iter4104);
        panda$core$Bit $tmp4115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4114);
        if (!$tmp4115.value) goto $l4110;
        {
            ITable* $tmp4117 = p$Iter4104->$class->itable;
            while ($tmp4117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4117 = $tmp4117->next;
            }
            $fn4119 $tmp4118 = $tmp4117->methods[1];
            panda$core$Object* $tmp4120 = $tmp4118(p$Iter4104);
            p4116 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4120);
            org$pandalanguage$pandac$Variable* $tmp4121 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp4121->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4121->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4121, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$core$Int64) { 10001 }), p4116->name, p4116->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4101, ((org$pandalanguage$pandac$Symbol*) $tmp4121));
        }
        goto $l4109;
        $l4110:;
    }
    self->symbolTable = symbols4101;
    panda$collections$Array* $tmp4124 = (panda$collections$Array*) malloc(40);
    $tmp4124->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4124->refCount.value = 1;
    panda$collections$Array$init($tmp4124);
    fieldInitializers4123 = $tmp4124;
    panda$core$Bit $tmp4126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4126.value) {
    {
        {
            panda$core$Object* $tmp4128 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4129 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4128)->fields)->$class->itable;
            while ($tmp4129->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4129 = $tmp4129->next;
            }
            $fn4131 $tmp4130 = $tmp4129->methods[0];
            panda$collections$Iterator* $tmp4132 = $tmp4130(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4128)->fields));
            f$Iter4127 = $tmp4132;
            $l4133:;
            ITable* $tmp4135 = f$Iter4127->$class->itable;
            while ($tmp4135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4135 = $tmp4135->next;
            }
            $fn4137 $tmp4136 = $tmp4135->methods[0];
            panda$core$Bit $tmp4138 = $tmp4136(f$Iter4127);
            panda$core$Bit $tmp4139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4138);
            if (!$tmp4139.value) goto $l4134;
            {
                ITable* $tmp4141 = f$Iter4127->$class->itable;
                while ($tmp4141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4141 = $tmp4141->next;
                }
                $fn4143 $tmp4142 = $tmp4141->methods[1];
                panda$core$Object* $tmp4144 = $tmp4142(f$Iter4127);
                f4140 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4144);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4140);
                panda$core$Bit $tmp4146 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4140->annotations);
                panda$core$Bit $tmp4147 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4146);
                bool $tmp4145 = $tmp4147.value;
                if (!$tmp4145) goto $l4148;
                $tmp4145 = ((panda$core$Bit) { f4140->value != NULL }).value;
                $l4148:;
                panda$core$Bit $tmp4149 = { $tmp4145 };
                if ($tmp4149.value) {
                {
                    panda$collections$Array* $tmp4151 = (panda$collections$Array*) malloc(40);
                    $tmp4151->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4151->refCount.value = 1;
                    panda$collections$Array$init($tmp4151);
                    children4150 = $tmp4151;
                    org$pandalanguage$pandac$IRNode* $tmp4153 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4153->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4153->refCount.value = 1;
                    panda$core$Object* $tmp4155 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4156 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4155));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp4153, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp4156);
                    panda$collections$Array$add$panda$collections$Array$T(children4150, ((panda$core$Object*) $tmp4153));
                    org$pandalanguage$pandac$IRNode* $tmp4158 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4158->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4158, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f4140->type, ((panda$core$Object*) f4140), ((panda$collections$ListView*) children4150));
                    fieldRef4157 = $tmp4158;
                    panda$collections$Array$clear(children4150);
                    panda$collections$Array$add$panda$collections$Array$T(children4150, ((panda$core$Object*) fieldRef4157));
                    panda$collections$Array$add$panda$collections$Array$T(children4150, ((panda$core$Object*) f4140->value));
                    org$pandalanguage$pandac$IRNode* $tmp4160 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4160->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4160->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4160, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4140)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4150));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4123, ((panda$core$Object*) $tmp4160));
                }
                }
            }
            goto $l4133;
            $l4134:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4163 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4162 = $tmp4163;
    if (((panda$core$Bit) { compiled4162 != NULL }).value) {
    {
        panda$core$Int64 $tmp4164 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4123);
        panda$core$Bit $tmp4165 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4164, ((panda$core$Int64) { 0 }));
        if ($tmp4165.value) {
        {
            panda$collections$Array* $tmp4167 = (panda$collections$Array*) malloc(40);
            $tmp4167->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4167->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4167, ((panda$collections$ListView*) fieldInitializers4123));
            children4166 = $tmp4167;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4166, ((panda$collections$CollectionView*) compiled4162->children));
            org$pandalanguage$pandac$IRNode* $tmp4169 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp4169->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4169->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4169, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children4166));
            compiled4162 = $tmp4169;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4101) }).value);
    self->symbolTable = old4099;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4171 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4171.value) {
    {
        p_m->compiledBody = compiled4162;
    }
    }
    return compiled4162;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4172;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4173 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4172 = $tmp4173;
        if (((panda$core$Bit) { compiled4172 != NULL }).value) {
        {
            ITable* $tmp4174 = self->codeGenerator->$class->itable;
            while ($tmp4174->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4174 = $tmp4174->next;
            }
            $fn4176 $tmp4175 = $tmp4174->methods[3];
            $tmp4175(self->codeGenerator, p_m, compiled4172);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4177 = self->codeGenerator->$class->itable;
        while ($tmp4177->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4177 = $tmp4177->next;
        }
        $fn4179 $tmp4178 = $tmp4177->methods[2];
        $tmp4178(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4180;
    org$pandalanguage$pandac$ClassDecl* inner4192;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4181 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4181->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4181 = $tmp4181->next;
        }
        $fn4183 $tmp4182 = $tmp4181->methods[0];
        panda$collections$Iterator* $tmp4184 = $tmp4182(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4180 = $tmp4184;
        $l4185:;
        ITable* $tmp4187 = inner$Iter4180->$class->itable;
        while ($tmp4187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4187 = $tmp4187->next;
        }
        $fn4189 $tmp4188 = $tmp4187->methods[0];
        panda$core$Bit $tmp4190 = $tmp4188(inner$Iter4180);
        panda$core$Bit $tmp4191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4190);
        if (!$tmp4191.value) goto $l4186;
        {
            ITable* $tmp4193 = inner$Iter4180->$class->itable;
            while ($tmp4193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4193 = $tmp4193->next;
            }
            $fn4195 $tmp4194 = $tmp4193->methods[1];
            panda$core$Object* $tmp4196 = $tmp4194(inner$Iter4180);
            inner4192 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4196);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4192);
        }
        goto $l4185;
        $l4186:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4204;
    panda$collections$Iterator* m$Iter4209;
    org$pandalanguage$pandac$MethodDecl* m4221;
    org$pandalanguage$pandac$ClassDecl* next4231;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4197 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4197.value) {
    {
        ITable* $tmp4198 = self->codeGenerator->$class->itable;
        while ($tmp4198->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4198 = $tmp4198->next;
        }
        $fn4200 $tmp4199 = $tmp4198->methods[1];
        $tmp4199(self->codeGenerator, p_cl);
        ITable* $tmp4201 = self->codeGenerator->$class->itable;
        while ($tmp4201->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4201 = $tmp4201->next;
        }
        $fn4203 $tmp4202 = $tmp4201->methods[4];
        $tmp4202(self->codeGenerator, p_cl);
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    old4204 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4205 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4205;
    ITable* $tmp4206 = self->codeGenerator->$class->itable;
    while ($tmp4206->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4206 = $tmp4206->next;
    }
    $fn4208 $tmp4207 = $tmp4206->methods[1];
    $tmp4207(self->codeGenerator, p_cl);
    {
        ITable* $tmp4210 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4210 = $tmp4210->next;
        }
        $fn4212 $tmp4211 = $tmp4210->methods[0];
        panda$collections$Iterator* $tmp4213 = $tmp4211(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4209 = $tmp4213;
        $l4214:;
        ITable* $tmp4216 = m$Iter4209->$class->itable;
        while ($tmp4216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4216 = $tmp4216->next;
        }
        $fn4218 $tmp4217 = $tmp4216->methods[0];
        panda$core$Bit $tmp4219 = $tmp4217(m$Iter4209);
        panda$core$Bit $tmp4220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4219);
        if (!$tmp4220.value) goto $l4215;
        {
            ITable* $tmp4222 = m$Iter4209->$class->itable;
            while ($tmp4222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4222 = $tmp4222->next;
            }
            $fn4224 $tmp4223 = $tmp4222->methods[1];
            panda$core$Object* $tmp4225 = $tmp4223(m$Iter4209);
            m4221 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4225);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4221);
        }
        goto $l4214;
        $l4215:;
    }
    ITable* $tmp4226 = self->codeGenerator->$class->itable;
    while ($tmp4226->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4226 = $tmp4226->next;
    }
    $fn4228 $tmp4227 = $tmp4226->methods[4];
    $tmp4227(self->codeGenerator, p_cl);
    self->symbolTable = old4204;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4229 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4230 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4229, ((panda$core$Int64) { 0 }));
    if ($tmp4230.value) {
    {
        panda$core$Object* $tmp4232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4231 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4232);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4231);
    }
    }
    panda$core$Int64 $tmp4233 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4233, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4234.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4235;
    org$pandalanguage$pandac$ASTNode* parsed4240;
    panda$collections$Iterator* cl$Iter4244;
    org$pandalanguage$pandac$ClassDecl* cl4256;
    panda$core$Object* $tmp4236 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4235 = ((panda$collections$ListView*) $tmp4236);
    if (((panda$core$Bit) { result4235 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp4237 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4238 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4239) self->parser->$class->vtable[2])(self->parser, $tmp4237, $tmp4238);
        org$pandalanguage$pandac$ASTNode* $tmp4242 = (($fn4241) self->parser->$class->vtable[68])(self->parser);
        parsed4240 = $tmp4242;
        if (((panda$core$Bit) { parsed4240 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4243 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4240);
            result4235 = $tmp4243;
            {
                ITable* $tmp4245 = ((panda$collections$Iterable*) result4235)->$class->itable;
                while ($tmp4245->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4245 = $tmp4245->next;
                }
                $fn4247 $tmp4246 = $tmp4245->methods[0];
                panda$collections$Iterator* $tmp4248 = $tmp4246(((panda$collections$Iterable*) result4235));
                cl$Iter4244 = $tmp4248;
                $l4249:;
                ITable* $tmp4251 = cl$Iter4244->$class->itable;
                while ($tmp4251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4251 = $tmp4251->next;
                }
                $fn4253 $tmp4252 = $tmp4251->methods[0];
                panda$core$Bit $tmp4254 = $tmp4252(cl$Iter4244);
                panda$core$Bit $tmp4255 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4254);
                if (!$tmp4255.value) goto $l4250;
                {
                    ITable* $tmp4257 = cl$Iter4244->$class->itable;
                    while ($tmp4257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4257 = $tmp4257->next;
                    }
                    $fn4259 $tmp4258 = $tmp4257->methods[1];
                    panda$core$Object* $tmp4260 = $tmp4258(cl$Iter4244);
                    cl4256 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4260);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4256)->name), ((panda$core$Object*) cl4256));
                }
                goto $l4249;
                $l4250:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4261 = (panda$collections$Array*) malloc(40);
            $tmp4261->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4261->refCount.value = 1;
            panda$collections$Array$init($tmp4261);
            result4235 = ((panda$collections$ListView*) $tmp4261);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4235));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return result4235;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4263;
    panda$collections$Iterator* cl$Iter4265;
    org$pandalanguage$pandac$ClassDecl* cl4277;
    panda$collections$ListView* $tmp4264 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4263 = $tmp4264;
    {
        ITable* $tmp4266 = ((panda$collections$Iterable*) classes4263)->$class->itable;
        while ($tmp4266->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4266 = $tmp4266->next;
        }
        $fn4268 $tmp4267 = $tmp4266->methods[0];
        panda$collections$Iterator* $tmp4269 = $tmp4267(((panda$collections$Iterable*) classes4263));
        cl$Iter4265 = $tmp4269;
        $l4270:;
        ITable* $tmp4272 = cl$Iter4265->$class->itable;
        while ($tmp4272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4272 = $tmp4272->next;
        }
        $fn4274 $tmp4273 = $tmp4272->methods[0];
        panda$core$Bit $tmp4275 = $tmp4273(cl$Iter4265);
        panda$core$Bit $tmp4276 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4275);
        if (!$tmp4276.value) goto $l4271;
        {
            ITable* $tmp4278 = cl$Iter4265->$class->itable;
            while ($tmp4278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4278 = $tmp4278->next;
            }
            $fn4280 $tmp4279 = $tmp4278->methods[1];
            panda$core$Object* $tmp4281 = $tmp4279(cl$Iter4265);
            cl4277 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4281);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4277);
        }
        goto $l4270;
        $l4271:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source4282;
    panda$core$Int64 line4285;
    panda$core$Int64 column4286;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4287;
    panda$core$Char8 $match$1243124306;
    panda$core$Char8 $tmp4309;
    panda$core$Char8 $tmp4312;
    panda$core$Object* $tmp4283 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$io$InputStream* $tmp4284 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp4283));
    source4282 = $tmp4284;
    line4285 = ((panda$core$Int64) { 1 });
    column4286 = ((panda$core$Int64) { 1 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4287, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4289 = $tmp4287.start.value;
    panda$core$Int64 i4288 = { $tmp4289 };
    int64_t $tmp4291 = $tmp4287.end.value;
    int64_t $tmp4292 = $tmp4287.step.value;
    bool $tmp4293 = $tmp4287.inclusive.value;
    bool $tmp4300 = $tmp4292 > 0;
    if ($tmp4300) goto $l4298; else goto $l4299;
    $l4298:;
    if ($tmp4293) goto $l4301; else goto $l4302;
    $l4301:;
    if ($tmp4289 <= $tmp4291) goto $l4294; else goto $l4296;
    $l4302:;
    if ($tmp4289 < $tmp4291) goto $l4294; else goto $l4296;
    $l4299:;
    if ($tmp4293) goto $l4303; else goto $l4304;
    $l4303:;
    if ($tmp4289 >= $tmp4291) goto $l4294; else goto $l4296;
    $l4304:;
    if ($tmp4289 > $tmp4291) goto $l4294; else goto $l4296;
    $l4294:;
    {
        {
            panda$core$Char8$nullable $tmp4308 = (($fn4307) source4282->$class->vtable[10])(source4282);
            $match$1243124306 = ((panda$core$Char8) $tmp4308.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4309, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4310 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1243124306, $tmp4309);
            if ($tmp4310.value) {
            {
                panda$core$Int64 $tmp4311 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4285, ((panda$core$Int64) { 1 }));
                line4285 = $tmp4311;
                column4286 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4312, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4313 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1243124306, $tmp4312);
            if ($tmp4313.value) {
            {
                panda$core$Int64 $tmp4314 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column4286, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4315 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4314);
                panda$core$Int64 $tmp4316 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4286, $tmp4315);
                column4286 = $tmp4316;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4317 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4286, ((panda$core$Int64) { 1 }));
                column4286 = $tmp4317;
            }
            }
            }
        }
    }
    $l4297:;
    if ($tmp4300) goto $l4319; else goto $l4320;
    $l4319:;
    int64_t $tmp4321 = $tmp4291 - i4288.value;
    if ($tmp4293) goto $l4322; else goto $l4323;
    $l4322:;
    if ($tmp4321 >= $tmp4292) goto $l4318; else goto $l4296;
    $l4323:;
    if ($tmp4321 > $tmp4292) goto $l4318; else goto $l4296;
    $l4320:;
    int64_t $tmp4325 = i4288.value - $tmp4291;
    if ($tmp4293) goto $l4326; else goto $l4327;
    $l4326:;
    if ($tmp4325 >= -$tmp4292) goto $l4318; else goto $l4296;
    $l4327:;
    if ($tmp4325 > -$tmp4292) goto $l4318; else goto $l4296;
    $l4318:;
    i4288.value += $tmp4292;
    goto $l4294;
    $l4296:;
    (($fn4329) ((panda$core$Object*) source4282)->$class->vtable[1])(((panda$core$Object*) source4282));
    org$pandalanguage$pandac$Position* $tmp4330 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4330->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4330->refCount.value = 1;
    panda$core$Object* $tmp4332 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$core$String* $tmp4333 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4332));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4330, $tmp4333, line4285, column4286);
    return $tmp4330;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4334 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, p_offset);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4334, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4335 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4335;
        panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4336, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4337, &$s4338);
        panda$core$String* $tmp4340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4339, p_msg);
        panda$core$String* $tmp4342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4340, &$s4341);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4342));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4343 = self->codeGenerator->$class->itable;
    while ($tmp4343->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4343 = $tmp4343->next;
    }
    $fn4345 $tmp4344 = $tmp4343->methods[5];
    $tmp4344(self->codeGenerator);
}

