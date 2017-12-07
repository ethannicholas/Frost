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
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/io/Console.h"
#include "panda/collections/CollectionView.h"
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

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn121)(panda$collections$MapView*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn258)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn264)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn270)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn313)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn319)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn325)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn332)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn338)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn344)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn383)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn389)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn395)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn411)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn417)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn423)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn441)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn447)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn453)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn508)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn514)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn520)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn529)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn551)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn574)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn580)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn586)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn600)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn606)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn617)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn623)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn629)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn651)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn657)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn663)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn712)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn724)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn737)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn749)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn763)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn769)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn775)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn790)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn796)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn802)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn816)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn822)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn828)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn841)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn853)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn908)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn914)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn920)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn927)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn933)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn939)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn959)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn965)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn971)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1054)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1131)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1164)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1170)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1288)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1294)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1300)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1440)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1487)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1493)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1499)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1561)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1594)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1621)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1648)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1665)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1671)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1677)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1689)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1746)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1769)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1845)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1864)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1870)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1876)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1907)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1913)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1919)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1956)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1962)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1968)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1991)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1997)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2003)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2393)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2399)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2405)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2553)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2775)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2791)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2797)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2803)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2889)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2895)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2901)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3084)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3090)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3096)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3221)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3227)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3233)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3259)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3271)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3375)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3381)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3387)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3555)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3561)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3567)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3645)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3651)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3657)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3718)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3724)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3730)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3794)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3800)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3806)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3844)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3850)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3856)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3868)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3874)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3880)(panda$collections$Iterator*);
typedef void (*$fn3913)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3916)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn3920)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3932)(panda$collections$Iterator*);
typedef void (*$fn3937)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3940)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3945)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn3949)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3955)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3961)(panda$collections$Iterator*);
typedef void (*$fn3965)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3976)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn3978)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn3984)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3990)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3996)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4005)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4011)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4017)(panda$collections$Iterator*);
typedef panda$core$Char8$nullable (*$fn4044)(panda$io$InputStream*);
typedef void (*$fn4066)(panda$core$Object*);
typedef void (*$fn4082)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
    org$pandalanguage$pandac$Type* $tmp24 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp24->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp24->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp24, &$s26, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { 1 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp24));
    org$pandalanguage$pandac$Type* $tmp27 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp27->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp27->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp27, &$s29, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp27));
    org$pandalanguage$pandac$Type* $tmp30 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp30->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp30->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp30, &$s32, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp30));
    org$pandalanguage$pandac$Type* $tmp33 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp33->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp33->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp33, &$s35, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp33));
    org$pandalanguage$pandac$Type* $tmp36 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp36->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp36->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp36, &$s38, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp36));
    org$pandalanguage$pandac$Type* $tmp39 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp39->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp39->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp39, &$s41, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp39));
    org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp42->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp42, &$s44, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp42));
    org$pandalanguage$pandac$Type* $tmp45 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp45->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp45->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp45, &$s47, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp45));
    org$pandalanguage$pandac$Type* $tmp48 = (org$pandalanguage$pandac$Type*) malloc(64);
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* resolved155;
    org$pandalanguage$pandac$Symbol* s158;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp162;
    panda$collections$Array* subtypes164;
    panda$collections$Array* subtypes181;
    panda$collections$Array* subtypes193;
    panda$core$MutableString* name198;
    panda$core$String* separator203;
    panda$core$Range$LTpanda$core$Int64$GT $tmp205;
    org$pandalanguage$pandac$Type* resolved225;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp156 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved155 = $tmp156;
            if (((panda$core$Bit) { resolved155 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp157 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved155);
                return $tmp157;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp159 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s158 = $tmp159;
            if (((panda$core$Bit) { s158 != NULL }).value) {
            {
                switch (s158->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp160 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp160->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp160->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp160, ((org$pandalanguage$pandac$Alias*) s158)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$core$Bit) { true }));
                        return $tmp160;
                    }
                    break;
                    case 203:
                    {
                        gp162 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s158);
                        org$pandalanguage$pandac$ClassDecl* $tmp163 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, gp162->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp163);
                        panda$collections$Array* $tmp165 = (panda$collections$Array*) malloc(40);
                        $tmp165->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp165->refCount.value = 1;
                        panda$collections$Array$init($tmp165);
                        subtypes164 = $tmp165;
                        panda$collections$Array$add$panda$collections$Array$T(subtypes164, ((panda$core$Object*) gp162->bound));
                        org$pandalanguage$pandac$Type* $tmp167 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp167->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp167->refCount.value = 1;
                        panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(gp162->owner, &$s169);
                        panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, ((org$pandalanguage$pandac$Symbol*) gp162)->name);
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp167, $tmp171, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes164), ((panda$core$Bit) { true }));
                        return $tmp167;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s158);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp172 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s158));
                        return $tmp172;
                    }
                    break;
                }
            }
            }
            org$pandalanguage$pandac$Position* $tmp173 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset);
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s174, ((panda$core$Object*) p_type));
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp173, $tmp177);
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
            org$pandalanguage$pandac$Type* $tmp178 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp178;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp179 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp179, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp180.value);
            panda$collections$Array* $tmp182 = (panda$collections$Array*) malloc(40);
            $tmp182->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp182->refCount.value = 1;
            panda$collections$Array$init($tmp182);
            subtypes181 = $tmp182;
            panda$core$Object* $tmp184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp185 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp184));
            panda$collections$Array$add$panda$collections$Array$T(subtypes181, ((panda$core$Object*) $tmp185));
            org$pandalanguage$pandac$Type* $tmp186 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp186->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp186->refCount.value = 1;
            panda$core$Object* $tmp188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes181, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp188))->name, &$s189);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp186, $tmp190, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes181), ((panda$core$Bit) { true }));
            return $tmp186;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp191 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp192 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp191, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp192.value);
            panda$collections$Array* $tmp194 = (panda$collections$Array*) malloc(40);
            $tmp194->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp194->refCount.value = 1;
            panda$collections$Array$init($tmp194);
            subtypes193 = $tmp194;
            panda$core$Object* $tmp196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp196));
            panda$collections$Array$add$panda$collections$Array$T(subtypes193, ((panda$core$Object*) $tmp197));
            panda$core$MutableString* $tmp199 = (panda$core$MutableString*) malloc(40);
            $tmp199->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp199->refCount.value = 1;
            panda$core$Object* $tmp201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes193, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp199, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp201))->name);
            name198 = $tmp199;
            panda$core$MutableString$append$panda$core$String(name198, &$s202);
            separator203 = &$s204;
            panda$core$Int64 $tmp206 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp205, ((panda$core$Int64) { 1 }), $tmp206, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp208 = $tmp205.start.value;
            panda$core$Int64 i207 = { $tmp208 };
            int64_t $tmp210 = $tmp205.end.value;
            int64_t $tmp211 = $tmp205.step.value;
            bool $tmp212 = $tmp205.inclusive.value;
            bool $tmp219 = $tmp211 > 0;
            if ($tmp219) goto $l217; else goto $l218;
            $l217:;
            if ($tmp212) goto $l220; else goto $l221;
            $l220:;
            if ($tmp208 <= $tmp210) goto $l213; else goto $l215;
            $l221:;
            if ($tmp208 < $tmp210) goto $l213; else goto $l215;
            $l218:;
            if ($tmp212) goto $l222; else goto $l223;
            $l222:;
            if ($tmp208 >= $tmp210) goto $l213; else goto $l215;
            $l223:;
            if ($tmp208 > $tmp210) goto $l213; else goto $l215;
            $l213:;
            {
                panda$core$Object* $tmp226 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, i207);
                org$pandalanguage$pandac$Type* $tmp227 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp226));
                resolved225 = $tmp227;
                panda$collections$Array$add$panda$collections$Array$T(subtypes193, ((panda$core$Object*) resolved225));
                panda$core$MutableString$append$panda$core$String(name198, separator203);
                panda$core$MutableString$append$panda$core$String(name198, ((org$pandalanguage$pandac$Symbol*) resolved225)->name);
                separator203 = &$s228;
            }
            $l216:;
            if ($tmp219) goto $l230; else goto $l231;
            $l230:;
            int64_t $tmp232 = $tmp210 - i207.value;
            if ($tmp212) goto $l233; else goto $l234;
            $l233:;
            if ($tmp232 >= $tmp211) goto $l229; else goto $l215;
            $l234:;
            if ($tmp232 > $tmp211) goto $l229; else goto $l215;
            $l231:;
            int64_t $tmp236 = i207.value - $tmp210;
            if ($tmp212) goto $l237; else goto $l238;
            $l237:;
            if ($tmp236 >= -$tmp211) goto $l229; else goto $l215;
            $l238:;
            if ($tmp236 > -$tmp211) goto $l229; else goto $l215;
            $l229:;
            i207.value += $tmp211;
            goto $l213;
            $l215:;
            panda$core$MutableString$append$panda$core$String(name198, &$s240);
            org$pandalanguage$pandac$Type* $tmp241 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp241->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp241->refCount.value = 1;
            panda$core$String* $tmp243 = panda$core$MutableString$convert$R$panda$core$String(name198);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp241, $tmp243, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes193), ((panda$core$Bit) { true }));
            return $tmp241;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old244;
    panda$collections$Iterator* m$Iter255;
    org$pandalanguage$pandac$MethodDecl* m267;
    panda$core$Range$LTpanda$core$Int64$GT $tmp277;
    panda$collections$Iterator* p$Iter310;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p322;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old244 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp245 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_cl->rawSuper);
        p_cl->rawSuper = $tmp245;
        panda$core$Bit $tmp247 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
        panda$core$Bit $tmp248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp247);
        bool $tmp246 = $tmp248.value;
        if (!$tmp246) goto $l249;
        panda$core$Bit $tmp251 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s250);
        $tmp246 = $tmp251.value;
        $l249:;
        panda$core$Bit $tmp252 = { $tmp246 };
        if ($tmp252.value) {
        {
            panda$core$Int64 $tmp253 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp254 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp253);
            p_cl->annotations->flags = $tmp254;
            {
                ITable* $tmp256 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp256 = $tmp256->next;
                }
                $fn258 $tmp257 = $tmp256->methods[0];
                panda$collections$Iterator* $tmp259 = $tmp257(((panda$collections$Iterable*) p_cl->methods));
                m$Iter255 = $tmp259;
                $l260:;
                ITable* $tmp262 = m$Iter255->$class->itable;
                while ($tmp262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp262 = $tmp262->next;
                }
                $fn264 $tmp263 = $tmp262->methods[0];
                panda$core$Bit $tmp265 = $tmp263(m$Iter255);
                panda$core$Bit $tmp266 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp265);
                if (!$tmp266.value) goto $l261;
                {
                    ITable* $tmp268 = m$Iter255->$class->itable;
                    while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp268 = $tmp268->next;
                    }
                    $fn270 $tmp269 = $tmp268->methods[1];
                    panda$core$Object* $tmp271 = $tmp269(m$Iter255);
                    m267 = ((org$pandalanguage$pandac$MethodDecl*) $tmp271);
                    panda$core$Int64 $tmp272 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp273 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m267->annotations->flags, $tmp272);
                    m267->annotations->flags = $tmp273;
                    panda$core$Bit $tmp274 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m267->annotations, m267->body);
                    if ($tmp274.value) {
                    {
                        panda$core$Int64 $tmp275 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                        panda$core$Int64 $tmp276 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m267->annotations->flags, $tmp275);
                        m267->annotations->flags = $tmp276;
                    }
                    }
                }
                goto $l260;
                $l261:;
            }
        }
        }
    }
    }
    panda$core$Int64 $tmp278 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp277, ((panda$core$Int64) { 0 }), $tmp278, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp280 = $tmp277.start.value;
    panda$core$Int64 i279 = { $tmp280 };
    int64_t $tmp282 = $tmp277.end.value;
    int64_t $tmp283 = $tmp277.step.value;
    bool $tmp284 = $tmp277.inclusive.value;
    bool $tmp291 = $tmp283 > 0;
    if ($tmp291) goto $l289; else goto $l290;
    $l289:;
    if ($tmp284) goto $l292; else goto $l293;
    $l292:;
    if ($tmp280 <= $tmp282) goto $l285; else goto $l287;
    $l293:;
    if ($tmp280 < $tmp282) goto $l285; else goto $l287;
    $l290:;
    if ($tmp284) goto $l294; else goto $l295;
    $l294:;
    if ($tmp280 >= $tmp282) goto $l285; else goto $l287;
    $l295:;
    if ($tmp280 > $tmp282) goto $l285; else goto $l287;
    $l285:;
    {
        panda$core$Object* $tmp297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->rawInterfaces, i279);
        org$pandalanguage$pandac$Type* $tmp298 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp297));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->rawInterfaces, i279, ((panda$core$Object*) $tmp298));
    }
    $l288:;
    if ($tmp291) goto $l300; else goto $l301;
    $l300:;
    int64_t $tmp302 = $tmp282 - i279.value;
    if ($tmp284) goto $l303; else goto $l304;
    $l303:;
    if ($tmp302 >= $tmp283) goto $l299; else goto $l287;
    $l304:;
    if ($tmp302 > $tmp283) goto $l299; else goto $l287;
    $l301:;
    int64_t $tmp306 = i279.value - $tmp282;
    if ($tmp284) goto $l307; else goto $l308;
    $l307:;
    if ($tmp306 >= -$tmp283) goto $l299; else goto $l287;
    $l308:;
    if ($tmp306 > -$tmp283) goto $l299; else goto $l287;
    $l299:;
    i279.value += $tmp283;
    goto $l285;
    $l287:;
    {
        ITable* $tmp311 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp311->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp311 = $tmp311->next;
        }
        $fn313 $tmp312 = $tmp311->methods[0];
        panda$collections$Iterator* $tmp314 = $tmp312(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter310 = $tmp314;
        $l315:;
        ITable* $tmp317 = p$Iter310->$class->itable;
        while ($tmp317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp317 = $tmp317->next;
        }
        $fn319 $tmp318 = $tmp317->methods[0];
        panda$core$Bit $tmp320 = $tmp318(p$Iter310);
        panda$core$Bit $tmp321 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp320);
        if (!$tmp321.value) goto $l316;
        {
            ITable* $tmp323 = p$Iter310->$class->itable;
            while ($tmp323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp323 = $tmp323->next;
            }
            $fn325 $tmp324 = $tmp323->methods[1];
            panda$core$Object* $tmp326 = $tmp324(p$Iter310);
            p322 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp326);
            org$pandalanguage$pandac$Type* $tmp327 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p322->bound);
            p322->bound = $tmp327;
        }
        goto $l315;
        $l316:;
    }
    self->symbolTable = old244;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old328;
    panda$collections$Iterator* p$Iter329;
    org$pandalanguage$pandac$MethodDecl$Parameter* p341;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old328 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp330 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp330 = $tmp330->next;
        }
        $fn332 $tmp331 = $tmp330->methods[0];
        panda$collections$Iterator* $tmp333 = $tmp331(((panda$collections$Iterable*) p_m->parameters));
        p$Iter329 = $tmp333;
        $l334:;
        ITable* $tmp336 = p$Iter329->$class->itable;
        while ($tmp336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp336 = $tmp336->next;
        }
        $fn338 $tmp337 = $tmp336->methods[0];
        panda$core$Bit $tmp339 = $tmp337(p$Iter329);
        panda$core$Bit $tmp340 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp339);
        if (!$tmp340.value) goto $l335;
        {
            ITable* $tmp342 = p$Iter329->$class->itable;
            while ($tmp342->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp342 = $tmp342->next;
            }
            $fn344 $tmp343 = $tmp342->methods[1];
            panda$core$Object* $tmp345 = $tmp343(p$Iter329);
            p341 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp345);
            org$pandalanguage$pandac$Type* $tmp346 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p341->type);
            p341->type = $tmp346;
        }
        goto $l334;
        $l335:;
    }
    org$pandalanguage$pandac$Type* $tmp347 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m->returnType);
    p_m->returnType = $tmp347;
    p_m->resolved = ((panda$core$Bit) { true });
    self->symbolTable = old328;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old348;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old348 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp349 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp350 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp349);
    if ($tmp350.value) {
    {
        org$pandalanguage$pandac$Type* $tmp351 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_f->type);
        p_f->type = $tmp351;
        if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp352 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
            org$pandalanguage$pandac$IRNode* $tmp353 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp352, p_f->type);
            p_f->value = $tmp353;
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old348;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s354);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old348;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp355 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp355;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old348;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp356 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp356;
    org$pandalanguage$pandac$IRNode* $tmp357 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp357;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    self->symbolTable = old348;
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
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s358);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s359);
            panda$core$Object* $tmp360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp360)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s361);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp362 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp363 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp362);
            return $tmp363;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp364 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp364) goto $l365;
    org$pandalanguage$pandac$Type* $tmp366 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp367 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp366);
    $tmp364 = ((panda$core$Bit) { $tmp367.nonnull }).value;
    $l365:;
    panda$core$Bit $tmp368 = { $tmp364 };
    return $tmp368;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result369;
    org$pandalanguage$pandac$ClassDecl* s377;
    panda$collections$Iterator* f$Iter380;
    org$pandalanguage$pandac$FieldDecl* f392;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp370 = (panda$collections$Array*) malloc(40);
    $tmp370->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp370->refCount.value = 1;
    panda$collections$Array$init($tmp370);
    result369 = $tmp370;
    panda$core$Bit $tmp373 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp374 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp373);
    bool $tmp372 = $tmp374.value;
    if (!$tmp372) goto $l375;
    $tmp372 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l375:;
    panda$core$Bit $tmp376 = { $tmp372 };
    if ($tmp376.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp378 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s377 = $tmp378;
        if (((panda$core$Bit) { s377 != NULL }).value) {
        {
            panda$collections$ListView* $tmp379 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s377);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result369, ((panda$collections$CollectionView*) $tmp379));
        }
        }
    }
    }
    {
        ITable* $tmp381 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp381 = $tmp381->next;
        }
        $fn383 $tmp382 = $tmp381->methods[0];
        panda$collections$Iterator* $tmp384 = $tmp382(((panda$collections$Iterable*) p_cl->fields));
        f$Iter380 = $tmp384;
        $l385:;
        ITable* $tmp387 = f$Iter380->$class->itable;
        while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp387 = $tmp387->next;
        }
        $fn389 $tmp388 = $tmp387->methods[0];
        panda$core$Bit $tmp390 = $tmp388(f$Iter380);
        panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
        if (!$tmp391.value) goto $l386;
        {
            ITable* $tmp393 = f$Iter380->$class->itable;
            while ($tmp393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp393 = $tmp393->next;
            }
            $fn395 $tmp394 = $tmp393->methods[1];
            panda$core$Object* $tmp396 = $tmp394(f$Iter380);
            f392 = ((org$pandalanguage$pandac$FieldDecl*) $tmp396);
            panda$core$Bit $tmp397 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f392->annotations);
            panda$core$Bit $tmp398 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp397);
            if ($tmp398.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result369, ((panda$core$Object*) f392));
            }
            }
        }
        goto $l385;
        $l386:;
    }
    return ((panda$collections$ListView*) result369);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result399;
    panda$core$String* suffix401;
    panda$core$Bit found407;
    panda$collections$Iterator* dir$Iter408;
    panda$io$File* dir420;
    panda$io$File* f425;
    panda$core$Bit $tmp427;
    panda$core$Object* $tmp400 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result399 = ((org$pandalanguage$pandac$ClassDecl*) $tmp400);
    if (((panda$core$Bit) { result399 == NULL }).value) {
    {
        panda$core$String* $tmp404 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s402, &$s403);
        panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s405);
        suffix401 = $tmp406;
        found407 = ((panda$core$Bit) { false });
        {
            ITable* $tmp409 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp409->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp409 = $tmp409->next;
            }
            $fn411 $tmp410 = $tmp409->methods[0];
            panda$collections$Iterator* $tmp412 = $tmp410(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter408 = $tmp412;
            $l413:;
            ITable* $tmp415 = dir$Iter408->$class->itable;
            while ($tmp415->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp415 = $tmp415->next;
            }
            $fn417 $tmp416 = $tmp415->methods[0];
            panda$core$Bit $tmp418 = $tmp416(dir$Iter408);
            panda$core$Bit $tmp419 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp418);
            if (!$tmp419.value) goto $l414;
            {
                ITable* $tmp421 = dir$Iter408->$class->itable;
                while ($tmp421->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp421 = $tmp421->next;
                }
                $fn423 $tmp422 = $tmp421->methods[1];
                panda$core$Object* $tmp424 = $tmp422(dir$Iter408);
                dir420 = ((panda$io$File*) $tmp424);
                panda$io$File* $tmp426 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir420, suffix401);
                f425 = $tmp426;
                panda$io$File$exists$R$panda$core$Bit(&$tmp427, f425);
                if ($tmp427.value) {
                {
                    found407 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f425);
                    panda$core$Object* $tmp428 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result399 = ((org$pandalanguage$pandac$ClassDecl*) $tmp428);
                }
                }
            }
            goto $l413;
            $l414:;
        }
    }
    }
    return result399;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result429;
    panda$core$String* suffix431;
    panda$core$Bit found437;
    panda$collections$Iterator* dir$Iter438;
    panda$io$File* dir450;
    panda$io$File* f455;
    panda$core$Bit $tmp457;
    panda$core$Int64 oldErrorCount458;
    panda$core$Object* $tmp430 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result429 = ((org$pandalanguage$pandac$ClassDecl*) $tmp430);
    if (((panda$core$Bit) { result429 == NULL }).value) {
    {
        panda$core$String* $tmp434 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s432, &$s433);
        panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s435);
        suffix431 = $tmp436;
        found437 = ((panda$core$Bit) { false });
        {
            ITable* $tmp439 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp439->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp439 = $tmp439->next;
            }
            $fn441 $tmp440 = $tmp439->methods[0];
            panda$collections$Iterator* $tmp442 = $tmp440(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter438 = $tmp442;
            $l443:;
            ITable* $tmp445 = dir$Iter438->$class->itable;
            while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp445 = $tmp445->next;
            }
            $fn447 $tmp446 = $tmp445->methods[0];
            panda$core$Bit $tmp448 = $tmp446(dir$Iter438);
            panda$core$Bit $tmp449 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp448);
            if (!$tmp449.value) goto $l444;
            {
                ITable* $tmp451 = dir$Iter438->$class->itable;
                while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp451 = $tmp451->next;
                }
                $fn453 $tmp452 = $tmp451->methods[1];
                panda$core$Object* $tmp454 = $tmp452(dir$Iter438);
                dir450 = ((panda$io$File*) $tmp454);
                panda$io$File* $tmp456 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir450, suffix431);
                f455 = $tmp456;
                panda$io$File$exists$R$panda$core$Bit(&$tmp457, f455);
                if ($tmp457.value) {
                {
                    found437 = ((panda$core$Bit) { true });
                    oldErrorCount458 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f455);
                    panda$core$Object* $tmp459 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result429 = ((org$pandalanguage$pandac$ClassDecl*) $tmp459);
                    bool $tmp460 = ((panda$core$Bit) { result429 == NULL }).value;
                    if (!$tmp460) goto $l461;
                    panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount458);
                    $tmp460 = $tmp462.value;
                    $l461:;
                    panda$core$Bit $tmp463 = { $tmp460 };
                    if ($tmp463.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp464 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp464->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp464->refCount.value = 1;
                        panda$core$String* $tmp466 = panda$io$File$name$R$panda$core$String(f455);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp464, $tmp466, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s467, ((panda$core$Object*) f455));
                        panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp468, &$s469);
                        panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, p_fullName);
                        panda$core$String* $tmp473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp471, &$s472);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp464, $tmp473);
                    }
                    }
                }
                }
            }
            goto $l443;
            $l444:;
        }
        panda$core$Bit $tmp474 = panda$core$Bit$$NOT$R$panda$core$Bit(found437);
        if ($tmp474.value) {
        {
            panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s475, suffix431);
            panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s477);
            panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp478, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s480);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp481);
        }
        }
    }
    }
    return result429;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type485;
    org$pandalanguage$pandac$ClassDecl* result492;
    org$pandalanguage$pandac$Annotations* annotations494;
    org$pandalanguage$pandac$Type* supertype500;
    panda$collections$Array* interfaces502;
    panda$collections$Iterator* intf$Iter505;
    org$pandalanguage$pandac$Type* intf517;
    panda$collections$HashMap* aliases523;
    panda$core$Range$LTpanda$core$Int64$GT $tmp526;
    panda$collections$Iterator* m$Iter571;
    org$pandalanguage$pandac$MethodDecl* m583;
    panda$collections$Array* parameters588;
    panda$collections$Iterator* p$Iter591;
    org$pandalanguage$pandac$MethodDecl$Parameter* p603;
    org$pandalanguage$pandac$MethodDecl* clone611;
    panda$collections$Iterator* f$Iter614;
    org$pandalanguage$pandac$FieldDecl* f626;
    org$pandalanguage$pandac$FieldDecl* clone631;
    panda$core$Bit $tmp483 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s482);
    panda$core$Bit $tmp484 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp483);
    PANDA_ASSERT($tmp484.value);
    org$pandalanguage$pandac$Type* $tmp486 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_rawType);
    type485 = $tmp486;
    panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type485->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp487.value) {
    {
        panda$core$Object* $tmp488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type485->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp489 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp488));
        return $tmp489;
    }
    }
    panda$core$Bit $tmp490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type485->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp490.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type485->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp491.value);
    panda$core$Object* $tmp493 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type485)->name));
    result492 = ((org$pandalanguage$pandac$ClassDecl*) $tmp493);
    if (((panda$core$Bit) { result492 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp495 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp495->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp495->refCount.value = 1;
        panda$core$Int64 $tmp497 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp498 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp497);
        panda$core$Int64 $tmp499 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp498);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp495, $tmp499);
        annotations494 = $tmp495;
        org$pandalanguage$pandac$Type* $tmp501 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type485, p_cl->rawSuper);
        supertype500 = $tmp501;
        panda$collections$Array* $tmp503 = (panda$collections$Array*) malloc(40);
        $tmp503->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp503->refCount.value = 1;
        panda$collections$Array$init($tmp503);
        interfaces502 = $tmp503;
        {
            ITable* $tmp506 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp506 = $tmp506->next;
            }
            $fn508 $tmp507 = $tmp506->methods[0];
            panda$collections$Iterator* $tmp509 = $tmp507(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter505 = $tmp509;
            $l510:;
            ITable* $tmp512 = intf$Iter505->$class->itable;
            while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp512 = $tmp512->next;
            }
            $fn514 $tmp513 = $tmp512->methods[0];
            panda$core$Bit $tmp515 = $tmp513(intf$Iter505);
            panda$core$Bit $tmp516 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp515);
            if (!$tmp516.value) goto $l511;
            {
                ITable* $tmp518 = intf$Iter505->$class->itable;
                while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp518 = $tmp518->next;
                }
                $fn520 $tmp519 = $tmp518->methods[1];
                panda$core$Object* $tmp521 = $tmp519(intf$Iter505);
                intf517 = ((org$pandalanguage$pandac$Type*) $tmp521);
                org$pandalanguage$pandac$Type* $tmp522 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type485, intf517);
                panda$collections$Array$add$panda$collections$Array$T(interfaces502, ((panda$core$Object*) $tmp522));
            }
            goto $l510;
            $l511:;
        }
        panda$collections$HashMap* $tmp524 = (panda$collections$HashMap*) malloc(56);
        $tmp524->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp524->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp524, p_cl->aliases);
        aliases523 = $tmp524;
        ITable* $tmp527 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp527->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp527 = $tmp527->next;
        }
        $fn529 $tmp528 = $tmp527->methods[0];
        panda$core$Int64 $tmp530 = $tmp528(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp526, ((panda$core$Int64) { 0 }), $tmp530, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp532 = $tmp526.start.value;
        panda$core$Int64 i531 = { $tmp532 };
        int64_t $tmp534 = $tmp526.end.value;
        int64_t $tmp535 = $tmp526.step.value;
        bool $tmp536 = $tmp526.inclusive.value;
        bool $tmp543 = $tmp535 > 0;
        if ($tmp543) goto $l541; else goto $l542;
        $l541:;
        if ($tmp536) goto $l544; else goto $l545;
        $l544:;
        if ($tmp532 <= $tmp534) goto $l537; else goto $l539;
        $l545:;
        if ($tmp532 < $tmp534) goto $l537; else goto $l539;
        $l542:;
        if ($tmp536) goto $l546; else goto $l547;
        $l546:;
        if ($tmp532 >= $tmp534) goto $l537; else goto $l539;
        $l547:;
        if ($tmp532 > $tmp534) goto $l537; else goto $l539;
        $l537:;
        {
            ITable* $tmp549 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp549->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp549 = $tmp549->next;
            }
            $fn551 $tmp550 = $tmp549->methods[0];
            panda$core$Object* $tmp552 = $tmp550(((panda$collections$ListView*) p_cl->parameters), i531);
            panda$core$Int64 $tmp553 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i531, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp554 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type485->subtypes, $tmp553);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases523, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp552))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp554))->name));
        }
        $l540:;
        if ($tmp543) goto $l556; else goto $l557;
        $l556:;
        int64_t $tmp558 = $tmp534 - i531.value;
        if ($tmp536) goto $l559; else goto $l560;
        $l559:;
        if ($tmp558 >= $tmp535) goto $l555; else goto $l539;
        $l560:;
        if ($tmp558 > $tmp535) goto $l555; else goto $l539;
        $l557:;
        int64_t $tmp562 = i531.value - $tmp534;
        if ($tmp536) goto $l563; else goto $l564;
        $l563:;
        if ($tmp562 >= -$tmp535) goto $l555; else goto $l539;
        $l564:;
        if ($tmp562 > -$tmp535) goto $l555; else goto $l539;
        $l555:;
        i531.value += $tmp535;
        goto $l537;
        $l539:;
        org$pandalanguage$pandac$ClassDecl* $tmp566 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
        $tmp566->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp566->refCount.value = 1;
        panda$collections$Array* $tmp568 = (panda$collections$Array*) malloc(40);
        $tmp568->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp568->refCount.value = 1;
        panda$collections$Array$init($tmp568);
        panda$core$Object* $tmp570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp566, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, ((panda$collections$MapView*) aliases523), p_cl->doccomment, annotations494, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type485)->name, supertype500, interfaces502, $tmp568, ((org$pandalanguage$pandac$SymbolTable*) $tmp570));
        result492 = $tmp566;
        result492->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp572 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp572->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp572 = $tmp572->next;
            }
            $fn574 $tmp573 = $tmp572->methods[0];
            panda$collections$Iterator* $tmp575 = $tmp573(((panda$collections$Iterable*) p_cl->methods));
            m$Iter571 = $tmp575;
            $l576:;
            ITable* $tmp578 = m$Iter571->$class->itable;
            while ($tmp578->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp578 = $tmp578->next;
            }
            $fn580 $tmp579 = $tmp578->methods[0];
            panda$core$Bit $tmp581 = $tmp579(m$Iter571);
            panda$core$Bit $tmp582 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp581);
            if (!$tmp582.value) goto $l577;
            {
                ITable* $tmp584 = m$Iter571->$class->itable;
                while ($tmp584->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp584 = $tmp584->next;
                }
                $fn586 $tmp585 = $tmp584->methods[1];
                panda$core$Object* $tmp587 = $tmp585(m$Iter571);
                m583 = ((org$pandalanguage$pandac$MethodDecl*) $tmp587);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m583);
                panda$collections$Array* $tmp589 = (panda$collections$Array*) malloc(40);
                $tmp589->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp589->refCount.value = 1;
                panda$collections$Array$init($tmp589);
                parameters588 = $tmp589;
                {
                    ITable* $tmp592 = ((panda$collections$Iterable*) m583->parameters)->$class->itable;
                    while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp592 = $tmp592->next;
                    }
                    $fn594 $tmp593 = $tmp592->methods[0];
                    panda$collections$Iterator* $tmp595 = $tmp593(((panda$collections$Iterable*) m583->parameters));
                    p$Iter591 = $tmp595;
                    $l596:;
                    ITable* $tmp598 = p$Iter591->$class->itable;
                    while ($tmp598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp598 = $tmp598->next;
                    }
                    $fn600 $tmp599 = $tmp598->methods[0];
                    panda$core$Bit $tmp601 = $tmp599(p$Iter591);
                    panda$core$Bit $tmp602 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp601);
                    if (!$tmp602.value) goto $l597;
                    {
                        ITable* $tmp604 = p$Iter591->$class->itable;
                        while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp604 = $tmp604->next;
                        }
                        $fn606 $tmp605 = $tmp604->methods[1];
                        panda$core$Object* $tmp607 = $tmp605(p$Iter591);
                        p603 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp607);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp608 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp608->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp608->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp610 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type485, p603->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp608, p603->name, $tmp610);
                        panda$collections$Array$add$panda$collections$Array$T(parameters588, ((panda$core$Object*) $tmp608));
                    }
                    goto $l596;
                    $l597:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp612 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
                $tmp612->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp612->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp612, result492, ((org$pandalanguage$pandac$Symbol*) m583)->offset, m583->doccomment, m583->annotations, m583->methodKind, ((org$pandalanguage$pandac$Symbol*) m583)->name, parameters588, m583->returnType, m583->body);
                clone611 = $tmp612;
                panda$collections$Array$add$panda$collections$Array$T(result492->methods, ((panda$core$Object*) clone611));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result492->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone611));
            }
            goto $l576;
            $l577:;
        }
        {
            ITable* $tmp615 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp615 = $tmp615->next;
            }
            $fn617 $tmp616 = $tmp615->methods[0];
            panda$collections$Iterator* $tmp618 = $tmp616(((panda$collections$Iterable*) p_cl->fields));
            f$Iter614 = $tmp618;
            $l619:;
            ITable* $tmp621 = f$Iter614->$class->itable;
            while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp621 = $tmp621->next;
            }
            $fn623 $tmp622 = $tmp621->methods[0];
            panda$core$Bit $tmp624 = $tmp622(f$Iter614);
            panda$core$Bit $tmp625 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp624);
            if (!$tmp625.value) goto $l620;
            {
                ITable* $tmp627 = f$Iter614->$class->itable;
                while ($tmp627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp627 = $tmp627->next;
                }
                $fn629 $tmp628 = $tmp627->methods[1];
                panda$core$Object* $tmp630 = $tmp628(f$Iter614);
                f626 = ((org$pandalanguage$pandac$FieldDecl*) $tmp630);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f626);
                org$pandalanguage$pandac$FieldDecl* $tmp632 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
                $tmp632->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp632->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp634 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type485, f626->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp632, result492, ((org$pandalanguage$pandac$Symbol*) f626)->offset, f626->doccomment, f626->annotations, f626->fieldKind, ((org$pandalanguage$pandac$Symbol*) f626)->name, $tmp634, f626->rawValue);
                clone631 = $tmp632;
                panda$collections$Array$add$panda$collections$Array$T(result492->fields, ((panda$core$Object*) clone631));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result492->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone631));
            }
            goto $l619;
            $l620:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result492)->name), ((panda$core$Object*) result492));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result492));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result492;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result635;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp636 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result635 = $tmp636;
        }
        break;
        case 11:
        case 21:
        case 22:
        {
            panda$core$Object* $tmp637 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp638 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp637));
            result635 = $tmp638;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp639 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result635->annotations);
    if ($tmp639.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp640 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result635, p_type);
        result635 = $tmp640;
    }
    }
    return result635;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl641;
    panda$collections$Set* result643;
    panda$collections$Iterator* intf$Iter648;
    org$pandalanguage$pandac$Type* intf660;
    org$pandalanguage$pandac$ClassDecl* $tmp642 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl641 = $tmp642;
    PANDA_ASSERT(((panda$core$Bit) { cl641 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl641);
    panda$collections$Set* $tmp644 = (panda$collections$Set*) malloc(24);
    $tmp644->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp644->refCount.value = 1;
    panda$collections$Set$init($tmp644);
    result643 = $tmp644;
    if (((panda$core$Bit) { cl641->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp646 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl641->rawSuper);
        panda$collections$Set* $tmp647 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp646);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result643, ((panda$collections$CollectionView*) $tmp647));
    }
    }
    {
        ITable* $tmp649 = ((panda$collections$Iterable*) cl641->rawInterfaces)->$class->itable;
        while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp649 = $tmp649->next;
        }
        $fn651 $tmp650 = $tmp649->methods[0];
        panda$collections$Iterator* $tmp652 = $tmp650(((panda$collections$Iterable*) cl641->rawInterfaces));
        intf$Iter648 = $tmp652;
        $l653:;
        ITable* $tmp655 = intf$Iter648->$class->itable;
        while ($tmp655->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp655 = $tmp655->next;
        }
        $fn657 $tmp656 = $tmp655->methods[0];
        panda$core$Bit $tmp658 = $tmp656(intf$Iter648);
        panda$core$Bit $tmp659 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp658);
        if (!$tmp659.value) goto $l654;
        {
            ITable* $tmp661 = intf$Iter648->$class->itable;
            while ($tmp661->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp661 = $tmp661->next;
            }
            $fn663 $tmp662 = $tmp661->methods[1];
            panda$core$Object* $tmp664 = $tmp662(intf$Iter648);
            intf660 = ((org$pandalanguage$pandac$Type*) $tmp664);
            org$pandalanguage$pandac$Type* $tmp665 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf660);
            panda$collections$Set* $tmp666 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp665);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result643, ((panda$collections$CollectionView*) $tmp666));
        }
        goto $l653;
        $l654:;
    }
    panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl641->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp667.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result643, ((panda$collections$Key*) p_t));
    }
    }
    return result643;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp673;
    panda$core$Bit $tmp668 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp668.value);
    panda$core$Bit $tmp669 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp669.value);
    panda$core$Int64 $tmp670 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp671 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp672 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp670, $tmp671);
    if ($tmp672.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp674 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp673, ((panda$core$Int64) { 0 }), $tmp674, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp676 = $tmp673.start.value;
    panda$core$Int64 i675 = { $tmp676 };
    int64_t $tmp678 = $tmp673.end.value;
    int64_t $tmp679 = $tmp673.step.value;
    bool $tmp680 = $tmp673.inclusive.value;
    bool $tmp687 = $tmp679 > 0;
    if ($tmp687) goto $l685; else goto $l686;
    $l685:;
    if ($tmp680) goto $l688; else goto $l689;
    $l688:;
    if ($tmp676 <= $tmp678) goto $l681; else goto $l683;
    $l689:;
    if ($tmp676 < $tmp678) goto $l681; else goto $l683;
    $l686:;
    if ($tmp680) goto $l690; else goto $l691;
    $l690:;
    if ($tmp676 >= $tmp678) goto $l681; else goto $l683;
    $l691:;
    if ($tmp676 > $tmp678) goto $l681; else goto $l683;
    $l681:;
    {
        panda$core$Object* $tmp693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t1->subtypes, i675);
        panda$core$Object* $tmp694 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t2->subtypes, i675);
        panda$core$Bit $tmp695 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp693), ((org$pandalanguage$pandac$Type*) $tmp694));
        if ($tmp695.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l684:;
    if ($tmp687) goto $l697; else goto $l698;
    $l697:;
    int64_t $tmp699 = $tmp678 - i675.value;
    if ($tmp680) goto $l700; else goto $l701;
    $l700:;
    if ($tmp699 >= $tmp679) goto $l696; else goto $l683;
    $l701:;
    if ($tmp699 > $tmp679) goto $l696; else goto $l683;
    $l698:;
    int64_t $tmp703 = i675.value - $tmp678;
    if ($tmp680) goto $l704; else goto $l705;
    $l704:;
    if ($tmp703 >= -$tmp679) goto $l696; else goto $l683;
    $l705:;
    if ($tmp703 > -$tmp679) goto $l696; else goto $l683;
    $l696:;
    i675.value += $tmp679;
    goto $l681;
    $l683:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl707;
    panda$collections$Iterator* test$Iter709;
    org$pandalanguage$pandac$MethodDecl* test721;
    panda$collections$Iterator* raw$Iter734;
    org$pandalanguage$pandac$Type* raw746;
    org$pandalanguage$pandac$MethodDecl* result751;
    org$pandalanguage$pandac$ClassDecl* $tmp708 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl707 = $tmp708;
    PANDA_ASSERT(((panda$core$Bit) { cl707 != NULL }).value);
    {
        ITable* $tmp710 = ((panda$collections$Iterable*) cl707->methods)->$class->itable;
        while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp710 = $tmp710->next;
        }
        $fn712 $tmp711 = $tmp710->methods[0];
        panda$collections$Iterator* $tmp713 = $tmp711(((panda$collections$Iterable*) cl707->methods));
        test$Iter709 = $tmp713;
        $l714:;
        ITable* $tmp716 = test$Iter709->$class->itable;
        while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp716 = $tmp716->next;
        }
        $fn718 $tmp717 = $tmp716->methods[0];
        panda$core$Bit $tmp719 = $tmp717(test$Iter709);
        panda$core$Bit $tmp720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp719);
        if (!$tmp720.value) goto $l715;
        {
            ITable* $tmp722 = test$Iter709->$class->itable;
            while ($tmp722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp722 = $tmp722->next;
            }
            $fn724 $tmp723 = $tmp722->methods[1];
            panda$core$Object* $tmp725 = $tmp723(test$Iter709);
            test721 = ((org$pandalanguage$pandac$MethodDecl*) $tmp725);
            panda$core$Bit $tmp726 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test721)->name, p_name);
            if ($tmp726.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test721);
                org$pandalanguage$pandac$Type* $tmp727 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test721);
                org$pandalanguage$pandac$Type* $tmp728 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp727);
                panda$core$Bit $tmp729 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp728, p_methodType);
                if ($tmp729.value) {
                {
                    return test721;
                }
                }
            }
            }
        }
        goto $l714;
        $l715:;
    }
    bool $tmp730 = p_checkInterfaces.value;
    if ($tmp730) goto $l731;
    panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl707->classKind, ((panda$core$Int64) { 5012 }));
    $tmp730 = $tmp732.value;
    $l731:;
    panda$core$Bit $tmp733 = { $tmp730 };
    if ($tmp733.value) {
    {
        {
            ITable* $tmp735 = ((panda$collections$Iterable*) cl707->rawInterfaces)->$class->itable;
            while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp735 = $tmp735->next;
            }
            $fn737 $tmp736 = $tmp735->methods[0];
            panda$collections$Iterator* $tmp738 = $tmp736(((panda$collections$Iterable*) cl707->rawInterfaces));
            raw$Iter734 = $tmp738;
            $l739:;
            ITable* $tmp741 = raw$Iter734->$class->itable;
            while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp741 = $tmp741->next;
            }
            $fn743 $tmp742 = $tmp741->methods[0];
            panda$core$Bit $tmp744 = $tmp742(raw$Iter734);
            panda$core$Bit $tmp745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp744);
            if (!$tmp745.value) goto $l740;
            {
                ITable* $tmp747 = raw$Iter734->$class->itable;
                while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp747 = $tmp747->next;
                }
                $fn749 $tmp748 = $tmp747->methods[1];
                panda$core$Object* $tmp750 = $tmp748(raw$Iter734);
                raw746 = ((org$pandalanguage$pandac$Type*) $tmp750);
                org$pandalanguage$pandac$Type* $tmp752 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw746);
                org$pandalanguage$pandac$MethodDecl* $tmp753 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp752, p_name, p_methodType, p_checkInterfaces);
                result751 = $tmp753;
                if (((panda$core$Bit) { result751 != NULL }).value) {
                {
                    return result751;
                }
                }
            }
            goto $l739;
            $l740:;
        }
    }
    }
    if (((panda$core$Bit) { cl707->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp754 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl707->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp755 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp754, p_name, p_methodType, p_checkInterfaces);
        return $tmp755;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType756;
    org$pandalanguage$pandac$Type* owner758;
    panda$collections$Iterator* raw$Iter760;
    org$pandalanguage$pandac$Type* raw772;
    org$pandalanguage$pandac$MethodDecl* result777;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp757 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType756 = $tmp757;
    org$pandalanguage$pandac$Type* $tmp759 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner758 = $tmp759;
    {
        ITable* $tmp761 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp761 = $tmp761->next;
        }
        $fn763 $tmp762 = $tmp761->methods[0];
        panda$collections$Iterator* $tmp764 = $tmp762(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter760 = $tmp764;
        $l765:;
        ITable* $tmp767 = raw$Iter760->$class->itable;
        while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp767 = $tmp767->next;
        }
        $fn769 $tmp768 = $tmp767->methods[0];
        panda$core$Bit $tmp770 = $tmp768(raw$Iter760);
        panda$core$Bit $tmp771 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp770);
        if (!$tmp771.value) goto $l766;
        {
            ITable* $tmp773 = raw$Iter760->$class->itable;
            while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp773 = $tmp773->next;
            }
            $fn775 $tmp774 = $tmp773->methods[1];
            panda$core$Object* $tmp776 = $tmp774(raw$Iter760);
            raw772 = ((org$pandalanguage$pandac$Type*) $tmp776);
            org$pandalanguage$pandac$Type* $tmp778 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner758, raw772);
            org$pandalanguage$pandac$MethodDecl* $tmp779 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp778, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType756, ((panda$core$Bit) { true }));
            result777 = $tmp779;
            if (((panda$core$Bit) { result777 != NULL }).value) {
            {
                return result777;
            }
            }
        }
        goto $l765;
        $l766:;
    }
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp780 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner758, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp781 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp780, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType756, ((panda$core$Bit) { true }));
        return $tmp781;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass782;
    panda$collections$Array* result784;
    panda$collections$Iterator* m$Iter787;
    org$pandalanguage$pandac$MethodDecl* m799;
    org$pandalanguage$pandac$MethodDecl* found804;
    org$pandalanguage$pandac$ClassDecl* $tmp783 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass782 = $tmp783;
    PANDA_ASSERT(((panda$core$Bit) { intfClass782 != NULL }).value);
    panda$collections$Array* $tmp785 = (panda$collections$Array*) malloc(40);
    $tmp785->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp785->refCount.value = 1;
    panda$collections$Array$init($tmp785);
    result784 = $tmp785;
    {
        ITable* $tmp788 = ((panda$collections$Iterable*) intfClass782->methods)->$class->itable;
        while ($tmp788->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp788 = $tmp788->next;
        }
        $fn790 $tmp789 = $tmp788->methods[0];
        panda$collections$Iterator* $tmp791 = $tmp789(((panda$collections$Iterable*) intfClass782->methods));
        m$Iter787 = $tmp791;
        $l792:;
        ITable* $tmp794 = m$Iter787->$class->itable;
        while ($tmp794->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp794 = $tmp794->next;
        }
        $fn796 $tmp795 = $tmp794->methods[0];
        panda$core$Bit $tmp797 = $tmp795(m$Iter787);
        panda$core$Bit $tmp798 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp797);
        if (!$tmp798.value) goto $l793;
        {
            ITable* $tmp800 = m$Iter787->$class->itable;
            while ($tmp800->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp800 = $tmp800->next;
            }
            $fn802 $tmp801 = $tmp800->methods[1];
            panda$core$Object* $tmp803 = $tmp801(m$Iter787);
            m799 = ((org$pandalanguage$pandac$MethodDecl*) $tmp803);
            org$pandalanguage$pandac$Type* $tmp805 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp806 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m799);
            org$pandalanguage$pandac$Type* $tmp807 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp806);
            org$pandalanguage$pandac$MethodDecl* $tmp808 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp805, ((org$pandalanguage$pandac$Symbol*) m799)->name, $tmp807, ((panda$core$Bit) { false }));
            found804 = $tmp808;
            PANDA_ASSERT(((panda$core$Bit) { found804 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result784, ((panda$core$Object*) found804));
        }
        goto $l792;
        $l793:;
    }
    return ((panda$collections$ListView*) result784);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl810;
    panda$collections$Iterator* rawIntf$Iter813;
    org$pandalanguage$pandac$Type* rawIntf825;
    org$pandalanguage$pandac$ClassDecl* intf830;
    panda$core$Bit $tmp809 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp809.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp811 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl810 = $tmp811;
            if (((panda$core$Bit) { superCl810 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp812 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl810);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp812));
            }
            }
        }
        }
        {
            ITable* $tmp814 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp814->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp814 = $tmp814->next;
            }
            $fn816 $tmp815 = $tmp814->methods[0];
            panda$collections$Iterator* $tmp817 = $tmp815(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter813 = $tmp817;
            $l818:;
            ITable* $tmp820 = rawIntf$Iter813->$class->itable;
            while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp820 = $tmp820->next;
            }
            $fn822 $tmp821 = $tmp820->methods[0];
            panda$core$Bit $tmp823 = $tmp821(rawIntf$Iter813);
            panda$core$Bit $tmp824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp823);
            if (!$tmp824.value) goto $l819;
            {
                ITable* $tmp826 = rawIntf$Iter813->$class->itable;
                while ($tmp826->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp826 = $tmp826->next;
                }
                $fn828 $tmp827 = $tmp826->methods[1];
                panda$core$Object* $tmp829 = $tmp827(rawIntf$Iter813);
                rawIntf825 = ((org$pandalanguage$pandac$Type*) $tmp829);
                org$pandalanguage$pandac$ClassDecl* $tmp831 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf825);
                intf830 = $tmp831;
                if (((panda$core$Bit) { intf830 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp832 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf830);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp832));
                }
                }
            }
            goto $l818;
            $l819:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl835;
    panda$collections$Iterator* derived$Iter838;
    org$pandalanguage$pandac$MethodDecl* derived850;
    panda$core$Bit found860;
    panda$core$Range$LTpanda$core$Int64$GT $tmp861;
    org$pandalanguage$pandac$MethodDecl* base881;
    panda$core$Int64 $tmp833 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp833, ((panda$core$Int64) { 0 }));
    if ($tmp834.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp836 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl835 = $tmp836;
            if (((panda$core$Bit) { superCl835 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp837 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl835);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp837));
        }
        }
        {
            ITable* $tmp839 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp839 = $tmp839->next;
            }
            $fn841 $tmp840 = $tmp839->methods[0];
            panda$collections$Iterator* $tmp842 = $tmp840(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter838 = $tmp842;
            $l843:;
            ITable* $tmp845 = derived$Iter838->$class->itable;
            while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp845 = $tmp845->next;
            }
            $fn847 $tmp846 = $tmp845->methods[0];
            panda$core$Bit $tmp848 = $tmp846(derived$Iter838);
            panda$core$Bit $tmp849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp848);
            if (!$tmp849.value) goto $l844;
            {
                ITable* $tmp851 = derived$Iter838->$class->itable;
                while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp851 = $tmp851->next;
                }
                $fn853 $tmp852 = $tmp851->methods[1];
                panda$core$Object* $tmp854 = $tmp852(derived$Iter838);
                derived850 = ((org$pandalanguage$pandac$MethodDecl*) $tmp854);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived850);
                panda$core$Bit $tmp856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived850->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp855 = $tmp856.value;
                if ($tmp855) goto $l857;
                panda$core$Bit $tmp858 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived850->annotations);
                $tmp855 = $tmp858.value;
                $l857:;
                panda$core$Bit $tmp859 = { $tmp855 };
                if ($tmp859.value) {
                {
                    goto $l843;
                }
                }
                found860 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp862 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp861, ((panda$core$Int64) { 0 }), $tmp862, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp864 = $tmp861.start.value;
                panda$core$Int64 i863 = { $tmp864 };
                int64_t $tmp866 = $tmp861.end.value;
                int64_t $tmp867 = $tmp861.step.value;
                bool $tmp868 = $tmp861.inclusive.value;
                bool $tmp875 = $tmp867 > 0;
                if ($tmp875) goto $l873; else goto $l874;
                $l873:;
                if ($tmp868) goto $l876; else goto $l877;
                $l876:;
                if ($tmp864 <= $tmp866) goto $l869; else goto $l871;
                $l877:;
                if ($tmp864 < $tmp866) goto $l869; else goto $l871;
                $l874:;
                if ($tmp868) goto $l878; else goto $l879;
                $l878:;
                if ($tmp864 >= $tmp866) goto $l869; else goto $l871;
                $l879:;
                if ($tmp864 > $tmp866) goto $l869; else goto $l871;
                $l869:;
                {
                    panda$core$Object* $tmp882 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i863);
                    base881 = ((org$pandalanguage$pandac$MethodDecl*) $tmp882);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base881);
                    panda$core$Bit $tmp883 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived850, base881);
                    if ($tmp883.value) {
                    {
                        found860 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i863, ((panda$core$Object*) derived850));
                        goto $l871;
                    }
                    }
                }
                $l872:;
                if ($tmp875) goto $l885; else goto $l886;
                $l885:;
                int64_t $tmp887 = $tmp866 - i863.value;
                if ($tmp868) goto $l888; else goto $l889;
                $l888:;
                if ($tmp887 >= $tmp867) goto $l884; else goto $l871;
                $l889:;
                if ($tmp887 > $tmp867) goto $l884; else goto $l871;
                $l886:;
                int64_t $tmp891 = i863.value - $tmp866;
                if ($tmp868) goto $l892; else goto $l893;
                $l892:;
                if ($tmp891 >= -$tmp867) goto $l884; else goto $l871;
                $l893:;
                if ($tmp891 > -$tmp867) goto $l884; else goto $l871;
                $l884:;
                i863.value += $tmp867;
                goto $l869;
                $l871:;
                panda$core$Bit $tmp895 = panda$core$Bit$$NOT$R$panda$core$Bit(found860);
                if ($tmp895.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived850));
                }
                }
            }
            goto $l843;
            $l844:;
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
    panda$collections$Array* methods896;
    org$pandalanguage$pandac$Symbol* s899;
    panda$collections$Iterator* m$Iter905;
    org$pandalanguage$pandac$MethodDecl* m917;
    panda$collections$Iterator* p$Iter924;
    org$pandalanguage$pandac$SymbolTable* p936;
    panda$collections$Array* children941;
    panda$collections$Array* types953;
    panda$collections$Iterator* m$Iter956;
    org$pandalanguage$pandac$MethodRef* m968;
    panda$collections$Array* $tmp897 = (panda$collections$Array*) malloc(40);
    $tmp897->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp897->refCount.value = 1;
    panda$collections$Array$init($tmp897);
    methods896 = $tmp897;
    org$pandalanguage$pandac$Symbol* $tmp900 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s899 = $tmp900;
    PANDA_ASSERT(((panda$core$Bit) { s899 != NULL }).value);
    panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s899->kind, ((panda$core$Int64) { 204 }));
    if ($tmp901.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s899));
        org$pandalanguage$pandac$MethodRef* $tmp902 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp902->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp902->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp902, ((org$pandalanguage$pandac$MethodDecl*) s899), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods896, ((panda$core$Object*) $tmp902));
    }
    }
    else {
    {
        panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s899->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp904.value);
        {
            ITable* $tmp906 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s899)->methods)->$class->itable;
            while ($tmp906->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp906 = $tmp906->next;
            }
            $fn908 $tmp907 = $tmp906->methods[0];
            panda$collections$Iterator* $tmp909 = $tmp907(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s899)->methods));
            m$Iter905 = $tmp909;
            $l910:;
            ITable* $tmp912 = m$Iter905->$class->itable;
            while ($tmp912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp912 = $tmp912->next;
            }
            $fn914 $tmp913 = $tmp912->methods[0];
            panda$core$Bit $tmp915 = $tmp913(m$Iter905);
            panda$core$Bit $tmp916 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp915);
            if (!$tmp916.value) goto $l911;
            {
                ITable* $tmp918 = m$Iter905->$class->itable;
                while ($tmp918->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp918 = $tmp918->next;
                }
                $fn920 $tmp919 = $tmp918->methods[1];
                panda$core$Object* $tmp921 = $tmp919(m$Iter905);
                m917 = ((org$pandalanguage$pandac$MethodDecl*) $tmp921);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m917);
                org$pandalanguage$pandac$MethodRef* $tmp922 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp922->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp922->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp922, m917, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods896, ((panda$core$Object*) $tmp922));
            }
            goto $l910;
            $l911:;
        }
    }
    }
    {
        ITable* $tmp925 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp925 = $tmp925->next;
        }
        $fn927 $tmp926 = $tmp925->methods[0];
        panda$collections$Iterator* $tmp928 = $tmp926(((panda$collections$Iterable*) p_st->parents));
        p$Iter924 = $tmp928;
        $l929:;
        ITable* $tmp931 = p$Iter924->$class->itable;
        while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp931 = $tmp931->next;
        }
        $fn933 $tmp932 = $tmp931->methods[0];
        panda$core$Bit $tmp934 = $tmp932(p$Iter924);
        panda$core$Bit $tmp935 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp934);
        if (!$tmp935.value) goto $l930;
        {
            ITable* $tmp937 = p$Iter924->$class->itable;
            while ($tmp937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp937 = $tmp937->next;
            }
            $fn939 $tmp938 = $tmp937->methods[1];
            panda$core$Object* $tmp940 = $tmp938(p$Iter924);
            p936 = ((org$pandalanguage$pandac$SymbolTable*) $tmp940);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p936, p_name, methods896, p_types);
        }
        goto $l929;
        $l930:;
    }
    panda$collections$Array* $tmp942 = (panda$collections$Array*) malloc(40);
    $tmp942->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp942->refCount.value = 1;
    panda$collections$Array$init($tmp942);
    children941 = $tmp942;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children941, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp944 = panda$collections$Array$get_count$R$panda$core$Int64(methods896);
    panda$core$Bit $tmp945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp944, ((panda$core$Int64) { 1 }));
    if ($tmp945.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp946 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp946->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp946->refCount.value = 1;
        panda$core$Object* $tmp948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods896, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp949 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp948));
        panda$core$Object* $tmp950 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods896, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp946, ((panda$core$Int64) { 1002 }), p_offset, $tmp949, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp950)), ((panda$collections$ListView*) children941));
        return $tmp946;
    }
    }
    else {
    {
        panda$core$Int64 $tmp951 = panda$collections$Array$get_count$R$panda$core$Int64(methods896);
        panda$core$Bit $tmp952 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp951, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp952.value);
        panda$collections$Array* $tmp954 = (panda$collections$Array*) malloc(40);
        $tmp954->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp954->refCount.value = 1;
        panda$collections$Array$init($tmp954);
        types953 = $tmp954;
        {
            ITable* $tmp957 = ((panda$collections$Iterable*) methods896)->$class->itable;
            while ($tmp957->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp957 = $tmp957->next;
            }
            $fn959 $tmp958 = $tmp957->methods[0];
            panda$collections$Iterator* $tmp960 = $tmp958(((panda$collections$Iterable*) methods896));
            m$Iter956 = $tmp960;
            $l961:;
            ITable* $tmp963 = m$Iter956->$class->itable;
            while ($tmp963->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp963 = $tmp963->next;
            }
            $fn965 $tmp964 = $tmp963->methods[0];
            panda$core$Bit $tmp966 = $tmp964(m$Iter956);
            panda$core$Bit $tmp967 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp966);
            if (!$tmp967.value) goto $l962;
            {
                ITable* $tmp969 = m$Iter956->$class->itable;
                while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp969 = $tmp969->next;
                }
                $fn971 $tmp970 = $tmp969->methods[1];
                panda$core$Object* $tmp972 = $tmp970(m$Iter956);
                m968 = ((org$pandalanguage$pandac$MethodRef*) $tmp972);
                org$pandalanguage$pandac$Type* $tmp973 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m968);
                panda$collections$Array$add$panda$collections$Array$T(types953, ((panda$core$Object*) $tmp973));
            }
            goto $l961;
            $l962:;
        }
        org$pandalanguage$pandac$IRNode* $tmp974 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp974->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp974->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp976 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp976->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp976->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp976, ((panda$collections$ListView*) types953));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp974, ((panda$core$Int64) { 1003 }), p_offset, $tmp976, ((panda$core$Object*) methods896), ((panda$collections$ListView*) children941));
        return $tmp974;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl978;
    org$pandalanguage$pandac$FieldDecl* f992;
    panda$collections$Array* children995;
    org$pandalanguage$pandac$Type* effectiveType1000;
    org$pandalanguage$pandac$IRNode* result1005;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp979 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl978 = $tmp979;
            if (((panda$core$Bit) { cl978 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp980 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp980->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp980->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp982 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp983 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl978);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp980, ((panda$core$Int64) { 1001 }), p_offset, $tmp982, $tmp983);
                return $tmp980;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$IRNode* $tmp984 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp984->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp984->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp986 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp987 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp984, ((panda$core$Int64) { 1001 }), p_offset, $tmp986, $tmp987);
            return $tmp984;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp988 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp989 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_offset, $tmp988);
            return $tmp989;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp990 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp990->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp990->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp990, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp990;
        }
        break;
        case 202:
        {
            f992 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f992);
            org$pandalanguage$pandac$Type* $tmp993 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp994 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f992->type, $tmp993);
            if ($tmp994.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp996 = (panda$collections$Array*) malloc(40);
            $tmp996->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp996->refCount.value = 1;
            panda$collections$Array$init($tmp996);
            children995 = $tmp996;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp998.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, &$s999);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1001 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f992->type);
                effectiveType1000 = $tmp1001;
                panda$core$Bit $tmp1002 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f992->annotations);
                if ($tmp1002.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children995, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1003 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f992->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1004 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1003);
                    panda$collections$Array$add$panda$collections$Array$T(children995, ((panda$core$Object*) $tmp1004));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1006 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1006->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1006->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1006, ((panda$core$Int64) { 1026 }), p_offset, f992->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children995));
                result1005 = $tmp1006;
                panda$core$Bit $tmp1008 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1000, result1005->type);
                if ($tmp1008.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1009 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1005, p_offset, ((panda$core$Bit) { false }), effectiveType1000);
                    result1005 = $tmp1009;
                }
                }
                return result1005;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1010 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1010->refCount.value = 1;
                panda$core$Object* $tmp1012 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1012));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1010, ((panda$core$Int64) { 1025 }), p_offset, $tmp1013);
                panda$collections$Array$add$panda$collections$Array$T(children995, ((panda$core$Object*) $tmp1010));
                org$pandalanguage$pandac$IRNode* $tmp1014 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1014->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1014->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1014, ((panda$core$Int64) { 1026 }), p_offset, f992->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children995));
                return $tmp1014;
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
    panda$collections$HashMap* typeMap1022;
    org$pandalanguage$pandac$Type* base1025;
    org$pandalanguage$pandac$ClassDecl* cl1027;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1029;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1016 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1016, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1017.value);
            panda$core$Object* $tmp1018 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1018), p_raw);
            return $tmp1019;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1020 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1021 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1020, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1021.value);
            panda$collections$HashMap* $tmp1023 = (panda$collections$HashMap*) malloc(56);
            $tmp1023->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1023->refCount.value = 1;
            panda$collections$HashMap$init($tmp1023);
            typeMap1022 = $tmp1023;
            panda$core$Object* $tmp1026 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1025 = ((org$pandalanguage$pandac$Type*) $tmp1026);
            org$pandalanguage$pandac$ClassDecl* $tmp1028 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1025)->name);
            cl1027 = $tmp1028;
            PANDA_ASSERT(((panda$core$Bit) { cl1027 != NULL }).value);
            panda$core$Int64 $tmp1030 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1029, ((panda$core$Int64) { 1 }), $tmp1030, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1032 = $tmp1029.start.value;
            panda$core$Int64 i1031 = { $tmp1032 };
            int64_t $tmp1034 = $tmp1029.end.value;
            int64_t $tmp1035 = $tmp1029.step.value;
            bool $tmp1036 = $tmp1029.inclusive.value;
            bool $tmp1043 = $tmp1035 > 0;
            if ($tmp1043) goto $l1041; else goto $l1042;
            $l1041:;
            if ($tmp1036) goto $l1044; else goto $l1045;
            $l1044:;
            if ($tmp1032 <= $tmp1034) goto $l1037; else goto $l1039;
            $l1045:;
            if ($tmp1032 < $tmp1034) goto $l1037; else goto $l1039;
            $l1042:;
            if ($tmp1036) goto $l1046; else goto $l1047;
            $l1046:;
            if ($tmp1032 >= $tmp1034) goto $l1037; else goto $l1039;
            $l1047:;
            if ($tmp1032 > $tmp1034) goto $l1037; else goto $l1039;
            $l1037:;
            {
                panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1027)->name, &$s1049);
                panda$core$Int64 $tmp1051 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1031, ((panda$core$Int64) { 1 }));
                ITable* $tmp1052 = ((panda$collections$ListView*) cl1027->parameters)->$class->itable;
                while ($tmp1052->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1052 = $tmp1052->next;
                }
                $fn1054 $tmp1053 = $tmp1052->methods[0];
                panda$core$Object* $tmp1055 = $tmp1053(((panda$collections$ListView*) cl1027->parameters), $tmp1051);
                panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1055))->name);
                panda$core$Object* $tmp1057 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, i1031);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1022, ((panda$collections$Key*) $tmp1056), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1057)));
            }
            $l1040:;
            if ($tmp1043) goto $l1059; else goto $l1060;
            $l1059:;
            int64_t $tmp1061 = $tmp1034 - i1031.value;
            if ($tmp1036) goto $l1062; else goto $l1063;
            $l1062:;
            if ($tmp1061 >= $tmp1035) goto $l1058; else goto $l1039;
            $l1063:;
            if ($tmp1061 > $tmp1035) goto $l1058; else goto $l1039;
            $l1060:;
            int64_t $tmp1065 = i1031.value - $tmp1034;
            if ($tmp1036) goto $l1066; else goto $l1067;
            $l1066:;
            if ($tmp1065 >= -$tmp1035) goto $l1058; else goto $l1039;
            $l1067:;
            if ($tmp1065 > -$tmp1035) goto $l1058; else goto $l1039;
            $l1058:;
            i1031.value += $tmp1035;
            goto $l1037;
            $l1039:;
            org$pandalanguage$pandac$Type* $tmp1069 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1022);
            return $tmp1069;
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
    org$pandalanguage$pandac$Type* $tmp1070 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1071 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1070);
    if ($tmp1071.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1072 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1072;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1073 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1074 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1073);
    if ($tmp1074.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1075 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1075;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$collections$Array* args1083;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1084;
    org$pandalanguage$pandac$IRNode* c1086;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1076 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1077 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1076)->type);
            panda$core$Object* $tmp1078 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1079 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1078)->type);
            org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1077, $tmp1079);
            org$pandalanguage$pandac$Type* $tmp1081 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1080);
            org$pandalanguage$pandac$Type* $tmp1082 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1081);
            return $tmp1082;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1084, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1085 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1084);
            args1083 = $tmp1085;
            panda$core$Object* $tmp1087 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1089 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1087), &$s1088, ((panda$collections$ListView*) args1083));
            c1086 = $tmp1089;
            if (((panda$core$Bit) { c1086 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1090 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1090;
            }
            }
            return c1086->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1091 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1091;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1102;
    panda$core$Int64$nullable result1106;
    panda$core$Int64$nullable best1115;
    panda$collections$Iterator* t$Iter1116;
    org$pandalanguage$pandac$Type* t1128;
    panda$core$Int64$nullable cost1133;
    org$pandalanguage$pandac$ClassDecl* cl1148;
    panda$core$Int64$nullable cost1150;
    panda$collections$Iterator* intf$Iter1155;
    org$pandalanguage$pandac$Type* intf1167;
    panda$core$Int64$nullable cost1172;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1092 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1092.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1093 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1094 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1093);
    if ($tmp1094.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1095.value) {
    {
        panda$core$Bit $tmp1096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1096.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1097 = $tmp1098.value;
    if (!$tmp1097) goto $l1099;
    panda$core$Bit $tmp1100 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1097 = $tmp1100.value;
    $l1099:;
    panda$core$Bit $tmp1101 = { $tmp1097 };
    if ($tmp1101.value) {
    {
        panda$core$Object* $tmp1103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1104 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1103), p_target);
        result1102 = $tmp1104;
        if (((panda$core$Bit) { !result1102.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1102.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1105, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1107 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1108 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1107));
            result1106 = $tmp1108;
            if (((panda$core$Bit) { !result1106.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1109 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1106.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1109, true });
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
            panda$core$Bit $tmp1110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1110.value) {
            {
                panda$core$Object* $tmp1111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1112 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1111), p_target);
                return $tmp1112;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1113 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1114 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1113, p_target);
            return $tmp1114;
        }
        break;
        case 17:
        {
            best1115 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1117 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1117 = $tmp1117->next;
                }
                $fn1119 $tmp1118 = $tmp1117->methods[0];
                panda$collections$Iterator* $tmp1120 = $tmp1118(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1116 = $tmp1120;
                $l1121:;
                ITable* $tmp1123 = t$Iter1116->$class->itable;
                while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1123 = $tmp1123->next;
                }
                $fn1125 $tmp1124 = $tmp1123->methods[0];
                panda$core$Bit $tmp1126 = $tmp1124(t$Iter1116);
                panda$core$Bit $tmp1127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1126);
                if (!$tmp1127.value) goto $l1122;
                {
                    ITable* $tmp1129 = t$Iter1116->$class->itable;
                    while ($tmp1129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1129 = $tmp1129->next;
                    }
                    $fn1131 $tmp1130 = $tmp1129->methods[1];
                    panda$core$Object* $tmp1132 = $tmp1130(t$Iter1116);
                    t1128 = ((org$pandalanguage$pandac$Type*) $tmp1132);
                    panda$core$Int64$nullable $tmp1134 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1128, p_target);
                    cost1133 = $tmp1134;
                    bool $tmp1135 = ((panda$core$Bit) { cost1133.nonnull }).value;
                    if (!$tmp1135) goto $l1136;
                    bool $tmp1137 = ((panda$core$Bit) { !best1115.nonnull }).value;
                    if ($tmp1137) goto $l1138;
                    panda$core$Bit $tmp1139 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1133.value), ((panda$core$Int64) best1115.value));
                    $tmp1137 = $tmp1139.value;
                    $l1138:;
                    panda$core$Bit $tmp1140 = { $tmp1137 };
                    $tmp1135 = $tmp1140.value;
                    $l1136:;
                    panda$core$Bit $tmp1141 = { $tmp1135 };
                    if ($tmp1141.value) {
                    {
                        best1115 = cost1133;
                    }
                    }
                }
                goto $l1121;
                $l1122:;
            }
            return best1115;
        }
        break;
        case 22:
        {
            panda$core$Object* $tmp1142 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1143 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1142), p_target);
            return $tmp1143;
        }
        break;
    }
    panda$core$Bit $tmp1144 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1144);
    if ($tmp1145.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1146 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1147 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1146);
    if ($tmp1147.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1149 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1148 = $tmp1149;
    PANDA_ASSERT(((panda$core$Bit) { cl1148 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1148);
    if (((panda$core$Bit) { cl1148->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1151 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1148->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1152 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1151);
        panda$core$Int64$nullable $tmp1153 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1152, p_target);
        cost1150 = $tmp1153;
        if (((panda$core$Bit) { cost1150.nonnull }).value) {
        {
            panda$core$Int64 $tmp1154 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1150.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1154, true });
        }
        }
    }
    }
    {
        ITable* $tmp1156 = ((panda$collections$Iterable*) cl1148->rawInterfaces)->$class->itable;
        while ($tmp1156->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1156 = $tmp1156->next;
        }
        $fn1158 $tmp1157 = $tmp1156->methods[0];
        panda$collections$Iterator* $tmp1159 = $tmp1157(((panda$collections$Iterable*) cl1148->rawInterfaces));
        intf$Iter1155 = $tmp1159;
        $l1160:;
        ITable* $tmp1162 = intf$Iter1155->$class->itable;
        while ($tmp1162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1162 = $tmp1162->next;
        }
        $fn1164 $tmp1163 = $tmp1162->methods[0];
        panda$core$Bit $tmp1165 = $tmp1163(intf$Iter1155);
        panda$core$Bit $tmp1166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1165);
        if (!$tmp1166.value) goto $l1161;
        {
            ITable* $tmp1168 = intf$Iter1155->$class->itable;
            while ($tmp1168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1168 = $tmp1168->next;
            }
            $fn1170 $tmp1169 = $tmp1168->methods[1];
            panda$core$Object* $tmp1171 = $tmp1169(intf$Iter1155);
            intf1167 = ((org$pandalanguage$pandac$Type*) $tmp1171);
            org$pandalanguage$pandac$Type* $tmp1173 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1167);
            org$pandalanguage$pandac$Type* $tmp1174 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1173);
            panda$core$Int64$nullable $tmp1175 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1174, p_target);
            cost1172 = $tmp1175;
            if (((panda$core$Bit) { cost1172.nonnull }).value) {
            {
                panda$core$Int64 $tmp1176 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1172.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1176, true });
            }
            }
        }
        goto $l1160;
        $l1161:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1178 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1177 = $tmp1178.value;
    if (!$tmp1177) goto $l1179;
    panda$core$Bit $tmp1180 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1177 = $tmp1180.value;
    $l1179:;
    panda$core$Bit $tmp1181 = { $tmp1177 };
    if ($tmp1181.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1183 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1182 = $tmp1183.value;
    if (!$tmp1182) goto $l1184;
    panda$core$Bit $tmp1185 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1182 = $tmp1185.value;
    $l1184:;
    panda$core$Bit $tmp1186 = { $tmp1182 };
    if ($tmp1186.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1188 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1187 = $tmp1188.value;
    if (!$tmp1187) goto $l1189;
    panda$core$Bit $tmp1190 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1187 = $tmp1190.value;
    $l1189:;
    panda$core$Bit $tmp1191 = { $tmp1187 };
    if ($tmp1191.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1192 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1192.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1193 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1193.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1194 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1194.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1197;
    panda$core$Int64$nullable cost11269;
    panda$core$Int64$nullable cost21273;
    org$pandalanguage$pandac$ClassDecl* targetClass1283;
    panda$collections$Iterator* m$Iter1285;
    org$pandalanguage$pandac$MethodDecl* m1297;
    panda$core$Int64$nullable cost1306;
    panda$core$Bit $tmp1195 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1195.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1196.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1198 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1199 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1198));
            cost1197 = $tmp1199;
            if (((panda$core$Bit) { !cost1197.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1200.value) {
            {
                return cost1197;
            }
            }
            panda$core$Int64 $tmp1201 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1197.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1201, true });
        }
        break;
        case 22:
        {
            panda$core$Object* $tmp1202 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1203 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1202));
            return $tmp1203;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1204.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1205 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1205.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1206 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1207 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1206, p_target);
                return $tmp1207;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1209 = $tmp1210.value;
            if (!$tmp1209) goto $l1211;
            panda$core$Int64 $tmp1212 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1213 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1212);
            panda$core$Int64 $tmp1214 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1215 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1213, $tmp1214);
            $tmp1209 = $tmp1215.value;
            $l1211:;
            panda$core$Bit $tmp1216 = { $tmp1209 };
            bool $tmp1208 = $tmp1216.value;
            if ($tmp1208) goto $l1217;
            panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1218 = $tmp1219.value;
            if (!$tmp1218) goto $l1220;
            panda$core$Int64 $tmp1221 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1222 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1223 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1221, $tmp1222);
            $tmp1218 = $tmp1223.value;
            $l1220:;
            panda$core$Bit $tmp1224 = { $tmp1218 };
            $tmp1208 = $tmp1224.value;
            $l1217:;
            panda$core$Bit $tmp1225 = { $tmp1208 };
            if ($tmp1225.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1226 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1226);
            if ($tmp1227.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1228 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1229 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1228, p_target);
                return $tmp1229;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1231 = $tmp1232.value;
            if (!$tmp1231) goto $l1233;
            panda$core$Int64 $tmp1234 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1235 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1234);
            panda$core$Int64 $tmp1236 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1235);
            panda$core$Int64 $tmp1237 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1238 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1236, $tmp1237);
            $tmp1231 = $tmp1238.value;
            $l1233:;
            panda$core$Bit $tmp1239 = { $tmp1231 };
            bool $tmp1230 = $tmp1239.value;
            if ($tmp1230) goto $l1240;
            panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1241 = $tmp1242.value;
            if (!$tmp1241) goto $l1243;
            panda$core$Int64 $tmp1244 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1245 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1244);
            panda$core$Int64 $tmp1246 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1245);
            panda$core$Int64 $tmp1247 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1248 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1246, $tmp1247);
            $tmp1241 = $tmp1248.value;
            $l1243:;
            panda$core$Bit $tmp1249 = { $tmp1241 };
            $tmp1230 = $tmp1249.value;
            $l1240:;
            panda$core$Bit $tmp1250 = { $tmp1230 };
            if ($tmp1250.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1251 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1251);
            if ($tmp1252.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1253 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1254 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1253, p_target);
                return $tmp1254;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1255.value) {
            {
                panda$core$Int64 $tmp1256 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1256, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp1257.value);
                panda$core$Object* $tmp1259 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1259)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1258 = $tmp1260.value;
                if (!$tmp1258) goto $l1261;
                panda$core$Object* $tmp1262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1262)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1258 = $tmp1263.value;
                $l1261:;
                panda$core$Bit $tmp1264 = { $tmp1258 };
                if ($tmp1264.value) {
                {
                    panda$core$Object* $tmp1265 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1266 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1265));
                    panda$core$Bit $tmp1267 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1266);
                    if ($tmp1267.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1268.value);
                panda$core$Object* $tmp1270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1271 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1272 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1270), ((org$pandalanguage$pandac$Type*) $tmp1271));
                cost11269 = $tmp1272;
                if (((panda$core$Bit) { !cost11269.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1274 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1275 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1276 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1274), ((org$pandalanguage$pandac$Type*) $tmp1275));
                cost21273 = $tmp1276;
                if (((panda$core$Bit) { !cost21273.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1277 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11269.value), ((panda$core$Int64) cost21273.value));
                return ((panda$core$Int64$nullable) { $tmp1277, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1278 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1279 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1278, p_target);
            return $tmp1279;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1280 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1280;
        }
        break;
    }
    panda$core$Bit $tmp1281 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1282 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1281);
    if ($tmp1282.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1284 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1283 = $tmp1284;
    if (((panda$core$Bit) { targetClass1283 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1286 = ((panda$collections$Iterable*) targetClass1283->methods)->$class->itable;
        while ($tmp1286->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1286 = $tmp1286->next;
        }
        $fn1288 $tmp1287 = $tmp1286->methods[0];
        panda$collections$Iterator* $tmp1289 = $tmp1287(((panda$collections$Iterable*) targetClass1283->methods));
        m$Iter1285 = $tmp1289;
        $l1290:;
        ITable* $tmp1292 = m$Iter1285->$class->itable;
        while ($tmp1292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1292 = $tmp1292->next;
        }
        $fn1294 $tmp1293 = $tmp1292->methods[0];
        panda$core$Bit $tmp1295 = $tmp1293(m$Iter1285);
        panda$core$Bit $tmp1296 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1295);
        if (!$tmp1296.value) goto $l1291;
        {
            ITable* $tmp1298 = m$Iter1285->$class->itable;
            while ($tmp1298->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1298 = $tmp1298->next;
            }
            $fn1300 $tmp1299 = $tmp1298->methods[1];
            panda$core$Object* $tmp1301 = $tmp1299(m$Iter1285);
            m1297 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1301);
            panda$core$Bit $tmp1302 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1297->annotations);
            if ($tmp1302.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1297);
                panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1297->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1303.value);
                panda$core$Int64 $tmp1304 = panda$collections$Array$get_count$R$panda$core$Int64(m1297->parameters);
                panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1304, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1305.value);
                panda$core$Object* $tmp1307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1297->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1308 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1307)->type);
                cost1306 = $tmp1308;
                if (((panda$core$Bit) { cost1306.nonnull }).value) {
                {
                    return cost1306;
                }
                }
            }
            }
        }
        goto $l1290;
        $l1291:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1309 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1309;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1318;
    org$pandalanguage$pandac$IRNode* intermediate1323;
    org$pandalanguage$pandac$IRNode* coerced1351;
    org$pandalanguage$pandac$IRNode* coerced1372;
    org$pandalanguage$pandac$IRNode* varType1386;
    org$pandalanguage$pandac$Type* param1394;
    org$pandalanguage$pandac$IRNode* start1396;
    org$pandalanguage$pandac$IRNode* end1399;
    panda$collections$Array* args1402;
    org$pandalanguage$pandac$IRNode* target1409;
    panda$collections$ListView* methods1416;
    panda$collections$Array* args1418;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1419;
    panda$collections$Array* best1421;
    panda$core$Int64$nullable bestCost1424;
    panda$collections$Iterator* m$Iter1425;
    org$pandalanguage$pandac$MethodRef* m1437;
    panda$core$Int64$nullable cost1442;
    org$pandalanguage$pandac$IRNode* callTarget1448;
    org$pandalanguage$pandac$IRNode* result1454;
    panda$collections$Array* args1458;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1459;
    panda$collections$Array* children1471;
    org$pandalanguage$pandac$IRNode* intermediate1477;
    org$pandalanguage$pandac$ClassDecl* cl1482;
    panda$collections$Iterator* m$Iter1484;
    org$pandalanguage$pandac$MethodDecl* m1496;
    org$pandalanguage$pandac$IRNode* type1507;
    panda$collections$Array* args1512;
    panda$collections$Array* children1516;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1310 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1310.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1311 = $tmp1312.value;
    if (!$tmp1311) goto $l1313;
    panda$core$Bit $tmp1314 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1311 = $tmp1314.value;
    $l1313:;
    panda$core$Bit $tmp1315 = { $tmp1311 };
    if ($tmp1315.value) {
    {
        panda$core$Object* $tmp1316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1317 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1316), p_target);
        if ($tmp1317.value) {
        {
            panda$collections$Array* $tmp1319 = (panda$collections$Array*) malloc(40);
            $tmp1319->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1319->refCount.value = 1;
            panda$collections$Array$init($tmp1319);
            children1318 = $tmp1319;
            panda$collections$Array$add$panda$collections$Array$T(children1318, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1321 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1321->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1321->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1321, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1318));
            return $tmp1321;
        }
        }
        panda$core$Object* $tmp1324 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1325 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1324));
        intermediate1323 = $tmp1325;
        org$pandalanguage$pandac$IRNode* $tmp1326 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1323, p_target);
        return $tmp1326;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1327 = $tmp1328.value;
            if (!$tmp1327) goto $l1329;
            panda$core$Int64 $tmp1330 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1331 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1332 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1330, $tmp1331);
            $tmp1327 = $tmp1332.value;
            $l1329:;
            panda$core$Bit $tmp1333 = { $tmp1327 };
            if ($tmp1333.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1334 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1334->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1334->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1334, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1334;
            }
            }
            else {
            panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1336 = $tmp1337.value;
            if (!$tmp1336) goto $l1338;
            panda$core$Int64 $tmp1339 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1340 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1341 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1339, $tmp1340);
            $tmp1336 = $tmp1341.value;
            $l1338:;
            panda$core$Bit $tmp1342 = { $tmp1336 };
            if ($tmp1342.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1343 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1343->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1343->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1343, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1343;
            }
            }
            }
            panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1345 = $tmp1346.value;
            if (!$tmp1345) goto $l1347;
            panda$core$Bit $tmp1348 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1349 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1348);
            $tmp1345 = $tmp1349.value;
            $l1347:;
            panda$core$Bit $tmp1350 = { $tmp1345 };
            if ($tmp1350.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1353 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1352);
                coerced1351 = $tmp1353;
                if (((panda$core$Bit) { coerced1351 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1354 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1351, p_target);
                return $tmp1354;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1355 = $tmp1356.value;
            if (!$tmp1355) goto $l1357;
            panda$core$Int64 $tmp1358 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1359 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1358);
            panda$core$Int64 $tmp1360 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1359);
            panda$core$Int64 $tmp1361 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1362 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1360, $tmp1361);
            $tmp1355 = $tmp1362.value;
            $l1357:;
            panda$core$Bit $tmp1363 = { $tmp1355 };
            if ($tmp1363.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1364 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1364->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1364, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1364;
            }
            }
            panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1366 = $tmp1367.value;
            if (!$tmp1366) goto $l1368;
            panda$core$Bit $tmp1369 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1369);
            $tmp1366 = $tmp1370.value;
            $l1368:;
            panda$core$Bit $tmp1371 = { $tmp1366 };
            if ($tmp1371.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1373 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1374 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1373);
                coerced1372 = $tmp1374;
                if (((panda$core$Bit) { coerced1372 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1375 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1372, p_target);
                return $tmp1375;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1376 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1377 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1376);
            if ($tmp1377.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1378 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1378->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1378->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1378, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1378;
            }
            }
            panda$core$Bit $tmp1381 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1380 = $tmp1381.value;
            if (!$tmp1380) goto $l1382;
            org$pandalanguage$pandac$Type* $tmp1383 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1384 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1383);
            $tmp1380 = $tmp1384.value;
            $l1382:;
            panda$core$Bit $tmp1385 = { $tmp1380 };
            if ($tmp1385.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1388 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1387);
                varType1386 = $tmp1388;
                if (((panda$core$Bit) { varType1386 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1389 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1386, p_target);
                    return $tmp1389;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Int64 $tmp1390 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1390, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1391.value);
            panda$core$Bit $tmp1392 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1392.value) {
            {
                panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1393.value);
                panda$core$Object* $tmp1395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1394 = ((org$pandalanguage$pandac$Type*) $tmp1395);
                panda$core$Object* $tmp1397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1398 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1397), param1394);
                start1396 = $tmp1398;
                if (((panda$core$Bit) { start1396 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1401 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1400), param1394);
                end1399 = $tmp1401;
                if (((panda$core$Bit) { end1399 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1403 = (panda$collections$Array*) malloc(40);
                $tmp1403->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1403->refCount.value = 1;
                panda$collections$Array$init($tmp1403);
                args1402 = $tmp1403;
                panda$collections$Array$add$panda$collections$Array$T(args1402, ((panda$core$Object*) start1396));
                panda$collections$Array$add$panda$collections$Array$T(args1402, ((panda$core$Object*) end1399));
                panda$core$Object* $tmp1405 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1402, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1405)));
                org$pandalanguage$pandac$IRNode* $tmp1406 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1406->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1406->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1408 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1406, ((panda$core$Int64) { 1011 }), p_expr->offset, $tmp1408, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1402, ((panda$core$Object*) $tmp1406));
                org$pandalanguage$pandac$IRNode* $tmp1410 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1410->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1410->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1412 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1410, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1412, p_target);
                target1409 = $tmp1410;
                org$pandalanguage$pandac$IRNode* $tmp1413 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1409, ((panda$collections$ListView*) args1402));
                return $tmp1413;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1414 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1415 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1414, p_target);
                return $tmp1415;
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1417 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1416 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1417)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1419, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1420 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1419);
            args1418 = $tmp1420;
            panda$collections$Array* $tmp1422 = (panda$collections$Array*) malloc(40);
            $tmp1422->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1422->refCount.value = 1;
            panda$collections$Array$init($tmp1422);
            best1421 = $tmp1422;
            bestCost1424 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1426 = ((panda$collections$Iterable*) methods1416)->$class->itable;
                while ($tmp1426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1426 = $tmp1426->next;
                }
                $fn1428 $tmp1427 = $tmp1426->methods[0];
                panda$collections$Iterator* $tmp1429 = $tmp1427(((panda$collections$Iterable*) methods1416));
                m$Iter1425 = $tmp1429;
                $l1430:;
                ITable* $tmp1432 = m$Iter1425->$class->itable;
                while ($tmp1432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1432 = $tmp1432->next;
                }
                $fn1434 $tmp1433 = $tmp1432->methods[0];
                panda$core$Bit $tmp1435 = $tmp1433(m$Iter1425);
                panda$core$Bit $tmp1436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1435);
                if (!$tmp1436.value) goto $l1431;
                {
                    ITable* $tmp1438 = m$Iter1425->$class->itable;
                    while ($tmp1438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1438 = $tmp1438->next;
                    }
                    $fn1440 $tmp1439 = $tmp1438->methods[1];
                    panda$core$Object* $tmp1441 = $tmp1439(m$Iter1425);
                    m1437 = ((org$pandalanguage$pandac$MethodRef*) $tmp1441);
                    panda$core$Int64$nullable $tmp1443 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1437, ((panda$collections$ListView*) args1418), p_target);
                    cost1442 = $tmp1443;
                    if (((panda$core$Bit) { !cost1442.nonnull }).value) {
                    {
                        goto $l1430;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1424.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1421, ((panda$core$Object*) m1437));
                        bestCost1424 = cost1442;
                        goto $l1430;
                    }
                    }
                    panda$core$Bit $tmp1444 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1442.value), ((panda$core$Int64) bestCost1424.value));
                    if ($tmp1444.value) {
                    {
                        panda$collections$Array$clear(best1421);
                        bestCost1424 = cost1442;
                    }
                    }
                    panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1442.value), ((panda$core$Int64) bestCost1424.value));
                    if ($tmp1445.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1421, ((panda$core$Object*) m1437));
                    }
                    }
                }
                goto $l1430;
                $l1431:;
            }
            panda$core$Int64 $tmp1446 = panda$collections$Array$get_count$R$panda$core$Int64(best1421);
            panda$core$Bit $tmp1447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1446, ((panda$core$Int64) { 1 }));
            if ($tmp1447.value) {
            {
                panda$core$Object* $tmp1449 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1450 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1449)->children);
                panda$core$Bit $tmp1451 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1450, ((panda$core$Int64) { 0 }));
                if ($tmp1451.value) {
                {
                    panda$core$Object* $tmp1452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1453 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1452)->children, ((panda$core$Int64) { 0 }));
                    callTarget1448 = ((org$pandalanguage$pandac$IRNode*) $tmp1453);
                }
                }
                else {
                {
                    callTarget1448 = NULL;
                }
                }
                panda$core$Object* $tmp1455 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1421, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1456 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->offset, callTarget1448, ((org$pandalanguage$pandac$MethodRef*) $tmp1455), ((panda$collections$ListView*) args1418));
                result1454 = $tmp1456;
                org$pandalanguage$pandac$IRNode* $tmp1457 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1454, p_target);
                return $tmp1457;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1459, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1460 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1459);
            args1458 = $tmp1460;
            panda$core$Object* $tmp1461 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1463 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1461), &$s1462, ((panda$collections$ListView*) args1458), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1464 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1463, p_target);
            return $tmp1464;
        }
        break;
    }
    panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1465.value) {
    {
        panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1466.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1467 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1467->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1467->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1467, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1467;
        }
        }
        panda$core$Object* $tmp1469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1470 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1469));
        if ($tmp1470.value) {
        {
            panda$collections$Array* $tmp1472 = (panda$collections$Array*) malloc(40);
            $tmp1472->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1472->refCount.value = 1;
            panda$collections$Array$init($tmp1472);
            children1471 = $tmp1472;
            panda$collections$Array$add$panda$collections$Array$T(children1471, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1474 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1474->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1474->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1474, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1471));
            return $tmp1474;
        }
        }
        panda$core$Bit $tmp1476 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1476.value) {
        {
            panda$core$Object* $tmp1478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1479 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1478));
            intermediate1477 = $tmp1479;
            org$pandalanguage$pandac$IRNode* $tmp1480 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1477, p_target);
            return $tmp1480;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1481 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1481.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1483 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1482 = $tmp1483;
        if (((panda$core$Bit) { cl1482 != NULL }).value) {
        {
            {
                ITable* $tmp1485 = ((panda$collections$Iterable*) cl1482->methods)->$class->itable;
                while ($tmp1485->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1485 = $tmp1485->next;
                }
                $fn1487 $tmp1486 = $tmp1485->methods[0];
                panda$collections$Iterator* $tmp1488 = $tmp1486(((panda$collections$Iterable*) cl1482->methods));
                m$Iter1484 = $tmp1488;
                $l1489:;
                ITable* $tmp1491 = m$Iter1484->$class->itable;
                while ($tmp1491->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1491 = $tmp1491->next;
                }
                $fn1493 $tmp1492 = $tmp1491->methods[0];
                panda$core$Bit $tmp1494 = $tmp1492(m$Iter1484);
                panda$core$Bit $tmp1495 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1494);
                if (!$tmp1495.value) goto $l1490;
                {
                    ITable* $tmp1497 = m$Iter1484->$class->itable;
                    while ($tmp1497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1497 = $tmp1497->next;
                    }
                    $fn1499 $tmp1498 = $tmp1497->methods[1];
                    panda$core$Object* $tmp1500 = $tmp1498(m$Iter1484);
                    m1496 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1500);
                    panda$core$Bit $tmp1501 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1496->annotations);
                    if ($tmp1501.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1496);
                        panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1496->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1502.value);
                        panda$core$Int64 $tmp1503 = panda$collections$Array$get_count$R$panda$core$Int64(m1496->parameters);
                        panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1503, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1504.value);
                        panda$core$Object* $tmp1505 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1496->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1506 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1505)->type);
                        if (((panda$core$Bit) { $tmp1506.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1508 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1508->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1508->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1510 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1511 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1482);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1508, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1510, $tmp1511);
                            type1507 = $tmp1508;
                            panda$collections$Array* $tmp1513 = (panda$collections$Array*) malloc(40);
                            $tmp1513->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1513->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1513, ((panda$core$Int64) { 1 }));
                            args1512 = $tmp1513;
                            panda$collections$Array$add$panda$collections$Array$T(args1512, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1515 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1507, ((panda$collections$ListView*) args1512));
                            return $tmp1515;
                        }
                        }
                    }
                    }
                }
                goto $l1489;
                $l1490:;
            }
        }
        }
        panda$collections$Array* $tmp1517 = (panda$collections$Array*) malloc(40);
        $tmp1517->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1517->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1517, ((panda$core$Int64) { 1 }));
        children1516 = $tmp1517;
        panda$collections$Array$add$panda$collections$Array$T(children1516, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1519 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1519->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1519->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1519, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1516));
        return $tmp1519;
    }
    }
    panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1521, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, &$s1523);
    panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1524, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, &$s1526);
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, $tmp1527);
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1528;
    org$pandalanguage$pandac$IRNode* $tmp1529 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1528 = $tmp1529;
    bool $tmp1530 = ((panda$core$Bit) { result1528 == NULL }).value;
    if ($tmp1530) goto $l1531;
    panda$core$Bit $tmp1532 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1528->type, p_target);
    $tmp1530 = $tmp1532.value;
    $l1531:;
    panda$core$Bit $tmp1533 = { $tmp1530 };
    PANDA_ASSERT($tmp1533.value);
    return result1528;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Iterator* t$Iter1546;
    org$pandalanguage$pandac$Type* t1558;
    panda$core$Bit $tmp1535 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1534 = $tmp1535.value;
    if (!$tmp1534) goto $l1536;
    panda$core$Bit $tmp1537 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1534 = $tmp1537.value;
    $l1536:;
    panda$core$Bit $tmp1538 = { $tmp1534 };
    if ($tmp1538.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1539 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1539.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1541 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1540 = $tmp1541.value;
    if (!$tmp1540) goto $l1542;
    panda$core$Bit $tmp1543 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1540 = $tmp1543.value;
    $l1542:;
    panda$core$Bit $tmp1544 = { $tmp1540 };
    if ($tmp1544.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 17 }));
    if ($tmp1545.value) {
    {
        {
            ITable* $tmp1547 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
            while ($tmp1547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1547 = $tmp1547->next;
            }
            $fn1549 $tmp1548 = $tmp1547->methods[0];
            panda$collections$Iterator* $tmp1550 = $tmp1548(((panda$collections$Iterable*) p_type->subtypes));
            t$Iter1546 = $tmp1550;
            $l1551:;
            ITable* $tmp1553 = t$Iter1546->$class->itable;
            while ($tmp1553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1553 = $tmp1553->next;
            }
            $fn1555 $tmp1554 = $tmp1553->methods[0];
            panda$core$Bit $tmp1556 = $tmp1554(t$Iter1546);
            panda$core$Bit $tmp1557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1556);
            if (!$tmp1557.value) goto $l1552;
            {
                ITable* $tmp1559 = t$Iter1546->$class->itable;
                while ($tmp1559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1559 = $tmp1559->next;
                }
                $fn1561 $tmp1560 = $tmp1559->methods[1];
                panda$core$Object* $tmp1562 = $tmp1560(t$Iter1546);
                t1558 = ((org$pandalanguage$pandac$Type*) $tmp1562);
                panda$core$Int64$nullable $tmp1563 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1558, p_target);
                if (((panda$core$Bit) { $tmp1563.nonnull }).value) {
                {
                    return ((panda$core$Bit) { true });
                }
                }
            }
            goto $l1551;
            $l1552:;
        }
    }
    }
    panda$core$Bit $tmp1564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1564.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1565 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1565.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable $tmp1566 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1566.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1567 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    return $tmp1567;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1586;
    panda$core$Bit $tmp1568 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1568.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1569 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1570 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1569);
    PANDA_ASSERT($tmp1570.value);
    bool $tmp1571 = p_isExplicit.value;
    if (!$tmp1571) goto $l1572;
    panda$core$Bit $tmp1573 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1574 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1573);
    $tmp1571 = $tmp1574.value;
    $l1572:;
    panda$core$Bit $tmp1575 = { $tmp1571 };
    if ($tmp1575.value) {
    {
        panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1576, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1577, &$s1578);
        panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1580, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1581, &$s1582);
        panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1579, $tmp1583);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1584);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        case 1039:
        case 1040:
        {
            org$pandalanguage$pandac$IRNode* $tmp1585 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1585;
        }
        break;
    }
    panda$collections$Array* $tmp1587 = (panda$collections$Array*) malloc(40);
    $tmp1587->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1587->refCount.value = 1;
    panda$collections$Array$init($tmp1587);
    children1586 = $tmp1587;
    panda$collections$Array$add$panda$collections$Array$T(children1586, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1589 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1589->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1589->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1589, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1586));
    return $tmp1589;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1597;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1598;
    panda$core$Int64$nullable cost1618;
    panda$core$Int64$nullable cost1637;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1591 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1592 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1592->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1592 = $tmp1592->next;
    }
    $fn1594 $tmp1593 = $tmp1592->methods[0];
    panda$core$Int64 $tmp1595 = $tmp1593(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1596 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1591, $tmp1595);
    if ($tmp1596.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1597 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1599 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1598, ((panda$core$Int64) { 0 }), $tmp1599, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1601 = $tmp1598.start.value;
    panda$core$Int64 i1600 = { $tmp1601 };
    int64_t $tmp1603 = $tmp1598.end.value;
    int64_t $tmp1604 = $tmp1598.step.value;
    bool $tmp1605 = $tmp1598.inclusive.value;
    bool $tmp1612 = $tmp1604 > 0;
    if ($tmp1612) goto $l1610; else goto $l1611;
    $l1610:;
    if ($tmp1605) goto $l1613; else goto $l1614;
    $l1613:;
    if ($tmp1601 <= $tmp1603) goto $l1606; else goto $l1608;
    $l1614:;
    if ($tmp1601 < $tmp1603) goto $l1606; else goto $l1608;
    $l1611:;
    if ($tmp1605) goto $l1615; else goto $l1616;
    $l1615:;
    if ($tmp1601 >= $tmp1603) goto $l1606; else goto $l1608;
    $l1616:;
    if ($tmp1601 > $tmp1603) goto $l1606; else goto $l1608;
    $l1606:;
    {
        ITable* $tmp1619 = p_args->$class->itable;
        while ($tmp1619->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1619 = $tmp1619->next;
        }
        $fn1621 $tmp1620 = $tmp1619->methods[0];
        panda$core$Object* $tmp1622 = $tmp1620(p_args, i1600);
        org$pandalanguage$pandac$Type* $tmp1623 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1600);
        panda$core$Int64$nullable $tmp1624 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1622), $tmp1623);
        cost1618 = $tmp1624;
        if (((panda$core$Bit) { !cost1618.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1625 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1597, ((panda$core$Int64) cost1618.value));
        result1597 = $tmp1625;
    }
    $l1609:;
    if ($tmp1612) goto $l1627; else goto $l1628;
    $l1627:;
    int64_t $tmp1629 = $tmp1603 - i1600.value;
    if ($tmp1605) goto $l1630; else goto $l1631;
    $l1630:;
    if ($tmp1629 >= $tmp1604) goto $l1626; else goto $l1608;
    $l1631:;
    if ($tmp1629 > $tmp1604) goto $l1626; else goto $l1608;
    $l1628:;
    int64_t $tmp1633 = i1600.value - $tmp1603;
    if ($tmp1605) goto $l1634; else goto $l1635;
    $l1634:;
    if ($tmp1633 >= -$tmp1604) goto $l1626; else goto $l1608;
    $l1635:;
    if ($tmp1633 > -$tmp1604) goto $l1626; else goto $l1608;
    $l1626:;
    i1600.value += $tmp1604;
    goto $l1606;
    $l1608:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1638 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1639 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1638, p_expectedReturn);
        cost1637 = $tmp1639;
        if (((panda$core$Bit) { !cost1637.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1640 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1597, ((panda$core$Int64) cost1637.value));
        result1597 = $tmp1640;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1643 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1644 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1643);
    bool $tmp1642 = $tmp1644.value;
    if (!$tmp1642) goto $l1645;
    ITable* $tmp1646 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1646->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1646 = $tmp1646->next;
    }
    $fn1648 $tmp1647 = $tmp1646->methods[0];
    panda$core$Int64 $tmp1649 = $tmp1647(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1649, ((panda$core$Int64) { 1 }));
    $tmp1642 = $tmp1650.value;
    $l1645:;
    panda$core$Bit $tmp1651 = { $tmp1642 };
    bool $tmp1641 = $tmp1651.value;
    if (!$tmp1641) goto $l1652;
    panda$core$Object* $tmp1653 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1654 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1655 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1653)->type, $tmp1654);
    $tmp1641 = $tmp1655.value;
    $l1652:;
    panda$core$Bit $tmp1656 = { $tmp1641 };
    if ($tmp1656.value) {
    {
        panda$core$Int64 $tmp1657 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1597, ((panda$core$Int64) { 1 }));
        result1597 = $tmp1657;
    }
    }
    return ((panda$core$Int64$nullable) { result1597, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1658;
    panda$core$Int64$nullable best1661;
    panda$collections$Iterator* m$Iter1662;
    org$pandalanguage$pandac$MethodRef* m1674;
    panda$core$Int64$nullable cost1679;
    panda$collections$Array* $tmp1659 = (panda$collections$Array*) malloc(40);
    $tmp1659->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1659->refCount.value = 1;
    panda$collections$Array$init($tmp1659);
    result1658 = $tmp1659;
    best1661 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1663 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1663->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1663 = $tmp1663->next;
        }
        $fn1665 $tmp1664 = $tmp1663->methods[0];
        panda$collections$Iterator* $tmp1666 = $tmp1664(((panda$collections$Iterable*) p_methods));
        m$Iter1662 = $tmp1666;
        $l1667:;
        ITable* $tmp1669 = m$Iter1662->$class->itable;
        while ($tmp1669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1669 = $tmp1669->next;
        }
        $fn1671 $tmp1670 = $tmp1669->methods[0];
        panda$core$Bit $tmp1672 = $tmp1670(m$Iter1662);
        panda$core$Bit $tmp1673 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1672);
        if (!$tmp1673.value) goto $l1668;
        {
            ITable* $tmp1675 = m$Iter1662->$class->itable;
            while ($tmp1675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1675 = $tmp1675->next;
            }
            $fn1677 $tmp1676 = $tmp1675->methods[1];
            panda$core$Object* $tmp1678 = $tmp1676(m$Iter1662);
            m1674 = ((org$pandalanguage$pandac$MethodRef*) $tmp1678);
            panda$core$Int64$nullable $tmp1680 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1674, p_args, p_expectedReturn);
            cost1679 = $tmp1680;
            if (((panda$core$Bit) { !cost1679.nonnull }).value) {
            {
                goto $l1667;
            }
            }
            bool $tmp1681 = ((panda$core$Bit) { !best1661.nonnull }).value;
            if ($tmp1681) goto $l1682;
            panda$core$Bit $tmp1683 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1679.value), ((panda$core$Int64) best1661.value));
            $tmp1681 = $tmp1683.value;
            $l1682:;
            panda$core$Bit $tmp1684 = { $tmp1681 };
            if ($tmp1684.value) {
            {
                panda$collections$Array$clear(result1658);
                best1661 = cost1679;
            }
            }
            panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1679.value), ((panda$core$Int64) best1661.value));
            if ($tmp1685.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1658, ((panda$core$Object*) m1674));
            }
            }
        }
        goto $l1667;
        $l1668:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1658));
    return best1661;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs1692;
    org$pandalanguage$pandac$IRNode* selfNode1728;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1743;
    org$pandalanguage$pandac$IRNode* coerced1766;
    org$pandalanguage$pandac$IRNode* result1786;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1686 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1687 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1687->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1687 = $tmp1687->next;
    }
    $fn1689 $tmp1688 = $tmp1687->methods[0];
    panda$core$Int64 $tmp1690 = $tmp1688(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1686, $tmp1690);
    PANDA_ASSERT($tmp1691.value);
    panda$collections$Array* $tmp1693 = (panda$collections$Array*) malloc(40);
    $tmp1693->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1693->refCount.value = 1;
    panda$collections$Array$init($tmp1693);
    finalArgs1692 = $tmp1693;
    bool $tmp1696 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1696) goto $l1697;
    panda$core$Bit $tmp1698 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1696 = $tmp1698.value;
    $l1697:;
    panda$core$Bit $tmp1699 = { $tmp1696 };
    bool $tmp1695 = $tmp1699.value;
    if (!$tmp1695) goto $l1700;
    panda$core$Bit $tmp1701 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1701);
    $tmp1695 = $tmp1702.value;
    $l1700:;
    panda$core$Bit $tmp1703 = { $tmp1695 };
    if ($tmp1703.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1704 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1705 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp1704);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1692, ((panda$core$Object*) $tmp1705));
    }
    }
    panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1706.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1707 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1707)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1708.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1709 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1709->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1709->refCount.value = 1;
                panda$core$Object* $tmp1711 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1712 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1711));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1709, ((panda$core$Int64) { 1025 }), p_offset, $tmp1712);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1692, ((panda$core$Object*) $tmp1709));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1713);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1716 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1715 = $tmp1716.value;
        if (!$tmp1715) goto $l1717;
        panda$core$Bit $tmp1718 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1715 = $tmp1718.value;
        $l1717:;
        panda$core$Bit $tmp1719 = { $tmp1715 };
        bool $tmp1714 = $tmp1719.value;
        if (!$tmp1714) goto $l1720;
        panda$core$Bit $tmp1721 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1714 = $tmp1721.value;
        $l1720:;
        panda$core$Bit $tmp1722 = { $tmp1714 };
        if ($tmp1722.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1723);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1725 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1724 = $tmp1725.value;
    if (!$tmp1724) goto $l1726;
    $tmp1724 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1726:;
    panda$core$Bit $tmp1727 = { $tmp1724 };
    if ($tmp1727.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1729 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1729->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1729->refCount.value = 1;
        panda$core$Object* $tmp1731 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1732 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1731));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1729, ((panda$core$Int64) { 1025 }), p_offset, $tmp1732);
        selfNode1728 = $tmp1729;
        org$pandalanguage$pandac$Type* $tmp1733 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1734 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1728, $tmp1733);
        selfNode1728 = $tmp1734;
        PANDA_ASSERT(((panda$core$Bit) { selfNode1728 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1692, ((panda$core$Object*) selfNode1728));
        panda$core$Object* $tmp1735 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1736 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1735));
        panda$core$Bit $tmp1737 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1736);
        if ($tmp1737.value) {
        {
            panda$core$String* $tmp1739 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1738, $tmp1739);
            panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1740, &$s1741);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1742);
        }
        }
    }
    }
    }
    ITable* $tmp1744 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1744->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1744 = $tmp1744->next;
    }
    $fn1746 $tmp1745 = $tmp1744->methods[0];
    panda$core$Int64 $tmp1747 = $tmp1745(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1743, ((panda$core$Int64) { 0 }), $tmp1747, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1749 = $tmp1743.start.value;
    panda$core$Int64 i1748 = { $tmp1749 };
    int64_t $tmp1751 = $tmp1743.end.value;
    int64_t $tmp1752 = $tmp1743.step.value;
    bool $tmp1753 = $tmp1743.inclusive.value;
    bool $tmp1760 = $tmp1752 > 0;
    if ($tmp1760) goto $l1758; else goto $l1759;
    $l1758:;
    if ($tmp1753) goto $l1761; else goto $l1762;
    $l1761:;
    if ($tmp1749 <= $tmp1751) goto $l1754; else goto $l1756;
    $l1762:;
    if ($tmp1749 < $tmp1751) goto $l1754; else goto $l1756;
    $l1759:;
    if ($tmp1753) goto $l1763; else goto $l1764;
    $l1763:;
    if ($tmp1749 >= $tmp1751) goto $l1754; else goto $l1756;
    $l1764:;
    if ($tmp1749 > $tmp1751) goto $l1754; else goto $l1756;
    $l1754:;
    {
        ITable* $tmp1767 = p_args->$class->itable;
        while ($tmp1767->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1767 = $tmp1767->next;
        }
        $fn1769 $tmp1768 = $tmp1767->methods[0];
        panda$core$Object* $tmp1770 = $tmp1768(p_args, i1748);
        org$pandalanguage$pandac$Type* $tmp1771 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1748);
        org$pandalanguage$pandac$IRNode* $tmp1772 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1770), $tmp1771);
        coerced1766 = $tmp1772;
        if (((panda$core$Bit) { coerced1766 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp1773 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1748);
        org$pandalanguage$pandac$IRNode* $tmp1774 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced1766, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1773)->type);
        coerced1766 = $tmp1774;
        if (((panda$core$Bit) { coerced1766 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1692, ((panda$core$Object*) coerced1766));
    }
    $l1757:;
    if ($tmp1760) goto $l1776; else goto $l1777;
    $l1776:;
    int64_t $tmp1778 = $tmp1751 - i1748.value;
    if ($tmp1753) goto $l1779; else goto $l1780;
    $l1779:;
    if ($tmp1778 >= $tmp1752) goto $l1775; else goto $l1756;
    $l1780:;
    if ($tmp1778 > $tmp1752) goto $l1775; else goto $l1756;
    $l1777:;
    int64_t $tmp1782 = i1748.value - $tmp1751;
    if ($tmp1753) goto $l1783; else goto $l1784;
    $l1783:;
    if ($tmp1782 >= -$tmp1752) goto $l1775; else goto $l1756;
    $l1784:;
    if ($tmp1782 > -$tmp1752) goto $l1775; else goto $l1756;
    $l1775:;
    i1748.value += $tmp1752;
    goto $l1754;
    $l1756:;
    panda$core$Bit $tmp1788 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s1787);
    if ($tmp1788.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1789 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1789->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1789->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1791 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1789, ((panda$core$Int64) { 1005 }), p_offset, $tmp1791, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1692));
        result1786 = $tmp1789;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp1792 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1792->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1792->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1792, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1692));
        result1786 = $tmp1792;
        org$pandalanguage$pandac$Type* $tmp1794 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1795 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1786, p_offset, ((panda$core$Bit) { false }), $tmp1794);
        result1786 = $tmp1795;
    }
    }
    return result1786;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1796 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp1796;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved1797;
    org$pandalanguage$pandac$ClassDecl* cl1799;
    org$pandalanguage$pandac$Symbol* s1803;
    org$pandalanguage$pandac$IRNode* ref1825;
    org$pandalanguage$pandac$IRNode* $tmp1798 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved1797 = $tmp1798;
    if (((panda$core$Bit) { resolved1797 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved1797->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp1800.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1801 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved1797->payload));
        cl1799 = $tmp1801;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1802 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved1797->type);
        cl1799 = $tmp1802;
    }
    }
    if (((panda$core$Bit) { cl1799 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1804 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1799);
    org$pandalanguage$pandac$Symbol* $tmp1805 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1804, p_name);
    s1803 = $tmp1805;
    if (((panda$core$Bit) { s1803 == NULL }).value) {
    {
        panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1806, ((org$pandalanguage$pandac$Symbol*) cl1799)->name);
        panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, &$s1808);
        panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, p_name);
        panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1810, &$s1811);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1812);
        return NULL;
    }
    }
    panda$core$Bit $tmp1814 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1803->kind, ((panda$core$Int64) { 204 }));
    bool $tmp1813 = $tmp1814.value;
    if (!$tmp1813) goto $l1815;
    panda$core$Bit $tmp1816 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1803->kind, ((panda$core$Int64) { 205 }));
    $tmp1813 = $tmp1816.value;
    $l1815:;
    panda$core$Bit $tmp1817 = { $tmp1813 };
    if ($tmp1817.value) {
    {
        panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1818, ((org$pandalanguage$pandac$Symbol*) cl1799)->name);
        panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, &$s1820);
        panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, p_name);
        panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1824);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1826 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1799);
    org$pandalanguage$pandac$IRNode* $tmp1827 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->offset, p_target, s1803, $tmp1826);
    ref1825 = $tmp1827;
    if (((panda$core$Bit) { ref1825 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1828 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref1825, p_args, p_expectedType);
    return $tmp1828;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1829 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp1829;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target1830;
    panda$collections$Array* methods1837;
    org$pandalanguage$pandac$MethodDecl* first1842;
    panda$core$MutableString* msg1847;
    panda$core$String* separator1859;
    panda$collections$Iterator* a$Iter1861;
    org$pandalanguage$pandac$IRNode* a1873;
    org$pandalanguage$pandac$IRNode* target1887;
    panda$collections$Array* children1895;
    panda$collections$Array* types1901;
    panda$collections$Iterator* m$Iter1904;
    org$pandalanguage$pandac$MethodRef* m1916;
    org$pandalanguage$pandac$IRNode* target1926;
    org$pandalanguage$pandac$IRNode* initCall1929;
    panda$collections$Array* children1933;
    org$pandalanguage$pandac$IRNode* resolved1938;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp1831 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp1832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1831, ((panda$core$Int64) { 0 }));
            if ($tmp1832.value) {
            {
                target1830 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp1833 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp1834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1833, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1834.value);
                panda$core$Object* $tmp1835 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target1830 = ((org$pandalanguage$pandac$IRNode*) $tmp1835);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1836 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1830, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp1836;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp1838 = (panda$collections$Array*) malloc(40);
            $tmp1838->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1838->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp1838, ((panda$collections$ListView*) p_m->payload));
            methods1837 = $tmp1838;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods1837, p_args, p_expectedType);
            panda$core$Int64 $tmp1840 = panda$collections$Array$get_count$R$panda$core$Int64(methods1837);
            panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1840, ((panda$core$Int64) { 0 }));
            if ($tmp1841.value) {
            {
                ITable* $tmp1843 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp1843->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1843 = $tmp1843->next;
                }
                $fn1845 $tmp1844 = $tmp1843->methods[0];
                panda$core$Object* $tmp1846 = $tmp1844(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first1842 = ((org$pandalanguage$pandac$MethodRef*) $tmp1846)->value;
                panda$core$MutableString* $tmp1848 = (panda$core$MutableString*) malloc(40);
                $tmp1848->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp1848->refCount.value = 1;
                panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1850, ((org$pandalanguage$pandac$Symbol*) first1842->owner)->name);
                panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, &$s1852);
                panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1854, ((org$pandalanguage$pandac$Symbol*) first1842)->name);
                panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
                panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, $tmp1857);
                panda$core$MutableString$init$panda$core$String($tmp1848, $tmp1858);
                msg1847 = $tmp1848;
                separator1859 = &$s1860;
                {
                    ITable* $tmp1862 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp1862->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1862 = $tmp1862->next;
                    }
                    $fn1864 $tmp1863 = $tmp1862->methods[0];
                    panda$collections$Iterator* $tmp1865 = $tmp1863(((panda$collections$Iterable*) p_args));
                    a$Iter1861 = $tmp1865;
                    $l1866:;
                    ITable* $tmp1868 = a$Iter1861->$class->itable;
                    while ($tmp1868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1868 = $tmp1868->next;
                    }
                    $fn1870 $tmp1869 = $tmp1868->methods[0];
                    panda$core$Bit $tmp1871 = $tmp1869(a$Iter1861);
                    panda$core$Bit $tmp1872 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1871);
                    if (!$tmp1872.value) goto $l1867;
                    {
                        ITable* $tmp1874 = a$Iter1861->$class->itable;
                        while ($tmp1874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1874 = $tmp1874->next;
                        }
                        $fn1876 $tmp1875 = $tmp1874->methods[1];
                        panda$core$Object* $tmp1877 = $tmp1875(a$Iter1861);
                        a1873 = ((org$pandalanguage$pandac$IRNode*) $tmp1877);
                        panda$core$MutableString$append$panda$core$String(msg1847, separator1859);
                        panda$core$MutableString$append$panda$core$Object(msg1847, ((panda$core$Object*) a1873->type));
                        separator1859 = &$s1878;
                    }
                    goto $l1866;
                    $l1867:;
                }
                panda$core$MutableString$append$panda$core$String(msg1847, &$s1879);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1880, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, &$s1882);
                    panda$core$MutableString$append$panda$core$String(msg1847, $tmp1883);
                }
                }
                panda$core$String* $tmp1884 = panda$core$MutableString$convert$R$panda$core$String(msg1847);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_m->offset, $tmp1884);
                return NULL;
            }
            }
            panda$core$Int64 $tmp1885 = panda$collections$Array$get_count$R$panda$core$Int64(methods1837);
            panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1885, ((panda$core$Int64) { 1 }));
            if ($tmp1886.value) {
            {
                panda$core$Int64 $tmp1888 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1888, ((panda$core$Int64) { 1 }));
                if ($tmp1889.value) {
                {
                    panda$core$Object* $tmp1890 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target1887 = ((org$pandalanguage$pandac$IRNode*) $tmp1890);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp1891 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1891, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp1892.value);
                    target1887 = NULL;
                }
                }
                panda$core$Object* $tmp1893 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1837, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1894 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1887, ((org$pandalanguage$pandac$MethodRef*) $tmp1893), p_args);
                return $tmp1894;
            }
            }
            panda$collections$Array* $tmp1896 = (panda$collections$Array*) malloc(40);
            $tmp1896->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1896->refCount.value = 1;
            panda$collections$Array$init($tmp1896);
            children1895 = $tmp1896;
            org$pandalanguage$pandac$IRNode* $tmp1898 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1898->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1898->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1900 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1898, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp1900, ((panda$core$Object*) methods1837), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children1895, ((panda$core$Object*) $tmp1898));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children1895, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp1902 = (panda$collections$Array*) malloc(40);
            $tmp1902->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1902->refCount.value = 1;
            panda$collections$Array$init($tmp1902);
            types1901 = $tmp1902;
            {
                ITable* $tmp1905 = ((panda$collections$Iterable*) methods1837)->$class->itable;
                while ($tmp1905->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1905 = $tmp1905->next;
                }
                $fn1907 $tmp1906 = $tmp1905->methods[0];
                panda$collections$Iterator* $tmp1908 = $tmp1906(((panda$collections$Iterable*) methods1837));
                m$Iter1904 = $tmp1908;
                $l1909:;
                ITable* $tmp1911 = m$Iter1904->$class->itable;
                while ($tmp1911->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1911 = $tmp1911->next;
                }
                $fn1913 $tmp1912 = $tmp1911->methods[0];
                panda$core$Bit $tmp1914 = $tmp1912(m$Iter1904);
                panda$core$Bit $tmp1915 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1914);
                if (!$tmp1915.value) goto $l1910;
                {
                    ITable* $tmp1917 = m$Iter1904->$class->itable;
                    while ($tmp1917->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1917 = $tmp1917->next;
                    }
                    $fn1919 $tmp1918 = $tmp1917->methods[1];
                    panda$core$Object* $tmp1920 = $tmp1918(m$Iter1904);
                    m1916 = ((org$pandalanguage$pandac$MethodRef*) $tmp1920);
                    org$pandalanguage$pandac$Type* $tmp1921 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1916);
                    panda$collections$Array$add$panda$collections$Array$T(types1901, ((panda$core$Object*) $tmp1921));
                }
                goto $l1909;
                $l1910:;
            }
            org$pandalanguage$pandac$IRNode* $tmp1922 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1922->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1922->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1924 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp1924->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp1924->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1924, ((panda$collections$ListView*) types1901));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1922, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp1924, ((panda$collections$ListView*) children1895));
            return $tmp1922;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp1927 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1927->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1927->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1927, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target1926 = $tmp1927;
            org$pandalanguage$pandac$IRNode* $tmp1931 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1926, &$s1930, p_args);
            org$pandalanguage$pandac$IRNode* $tmp1932 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1931);
            initCall1929 = $tmp1932;
            if (((panda$core$Bit) { initCall1929 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1934 = (panda$collections$Array*) malloc(40);
            $tmp1934->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1934->refCount.value = 1;
            panda$collections$Array$init($tmp1934);
            children1933 = $tmp1934;
            panda$collections$Array$add$panda$collections$Array$T(children1933, ((panda$core$Object*) initCall1929));
            org$pandalanguage$pandac$IRNode* $tmp1936 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1936->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1936->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1936, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children1933));
            return $tmp1936;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp1939 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved1938 = $tmp1939;
            if (((panda$core$Bit) { resolved1938 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1940, ((panda$core$Object*) resolved1938->type));
            panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, &$s1942);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, resolved1938->offset, $tmp1943);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes1944;
    panda$core$MutableString* typeName1947;
    panda$core$String* separator1951;
    panda$collections$Iterator* p$Iter1953;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1965;
    panda$core$Int64 kind1971;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp1945 = (panda$collections$Array*) malloc(40);
    $tmp1945->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1945->refCount.value = 1;
    panda$collections$Array$init($tmp1945);
    subtypes1944 = $tmp1945;
    panda$core$MutableString* $tmp1948 = (panda$core$MutableString*) malloc(40);
    $tmp1948->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1948->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1948, &$s1950);
    typeName1947 = $tmp1948;
    separator1951 = &$s1952;
    {
        ITable* $tmp1954 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1954->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1954 = $tmp1954->next;
        }
        $fn1956 $tmp1955 = $tmp1954->methods[0];
        panda$collections$Iterator* $tmp1957 = $tmp1955(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1953 = $tmp1957;
        $l1958:;
        ITable* $tmp1960 = p$Iter1953->$class->itable;
        while ($tmp1960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1960 = $tmp1960->next;
        }
        $fn1962 $tmp1961 = $tmp1960->methods[0];
        panda$core$Bit $tmp1963 = $tmp1961(p$Iter1953);
        panda$core$Bit $tmp1964 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1963);
        if (!$tmp1964.value) goto $l1959;
        {
            ITable* $tmp1966 = p$Iter1953->$class->itable;
            while ($tmp1966->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1966 = $tmp1966->next;
            }
            $fn1968 $tmp1967 = $tmp1966->methods[1];
            panda$core$Object* $tmp1969 = $tmp1967(p$Iter1953);
            p1965 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1969);
            panda$core$MutableString$append$panda$core$String(typeName1947, separator1951);
            panda$core$MutableString$append$panda$core$String(typeName1947, ((org$pandalanguage$pandac$Symbol*) p1965->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes1944, ((panda$core$Object*) p1965->type));
            separator1951 = &$s1970;
        }
        goto $l1958;
        $l1959:;
    }
    panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp1972.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1947, &$s1973);
        kind1971 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName1947, &$s1974);
        kind1971 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes1944, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp1975 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1976 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1975);
    if ($tmp1976.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1947, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName1947, &$s1977);
    org$pandalanguage$pandac$Type* $tmp1978 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp1978->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp1978->refCount.value = 1;
    panda$core$String* $tmp1980 = panda$core$MutableString$convert$R$panda$core$String(typeName1947);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1978, $tmp1980, kind1971, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes1944), ((panda$core$Bit) { true }));
    return $tmp1978;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes1981;
    panda$core$MutableString* typeName1984;
    panda$collections$Iterator* p$Iter1988;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2000;
    panda$core$Int64 kind2006;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp1982 = (panda$collections$Array*) malloc(40);
    $tmp1982->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1982->refCount.value = 1;
    panda$collections$Array$init($tmp1982);
    subtypes1981 = $tmp1982;
    panda$core$MutableString* $tmp1985 = (panda$core$MutableString*) malloc(40);
    $tmp1985->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1985->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1985, &$s1987);
    typeName1984 = $tmp1985;
    panda$core$MutableString$append$panda$core$String(typeName1984, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes1981, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp1989 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1989->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1989 = $tmp1989->next;
        }
        $fn1991 $tmp1990 = $tmp1989->methods[0];
        panda$collections$Iterator* $tmp1992 = $tmp1990(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1988 = $tmp1992;
        $l1993:;
        ITable* $tmp1995 = p$Iter1988->$class->itable;
        while ($tmp1995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1995 = $tmp1995->next;
        }
        $fn1997 $tmp1996 = $tmp1995->methods[0];
        panda$core$Bit $tmp1998 = $tmp1996(p$Iter1988);
        panda$core$Bit $tmp1999 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1998);
        if (!$tmp1999.value) goto $l1994;
        {
            ITable* $tmp2001 = p$Iter1988->$class->itable;
            while ($tmp2001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2001 = $tmp2001->next;
            }
            $fn2003 $tmp2002 = $tmp2001->methods[1];
            panda$core$Object* $tmp2004 = $tmp2002(p$Iter1988);
            p2000 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2004);
            panda$core$MutableString$append$panda$core$String(typeName1984, &$s2005);
            panda$core$MutableString$append$panda$core$String(typeName1984, ((org$pandalanguage$pandac$Symbol*) p2000->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes1981, ((panda$core$Object*) p2000->type));
        }
        goto $l1993;
        $l1994:;
    }
    panda$core$Bit $tmp2007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2007.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1984, &$s2008);
        kind2006 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName1984, &$s2009);
        kind2006 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes1981, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2010 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2011 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2010);
    if ($tmp2011.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1984, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName1984, &$s2012);
    org$pandalanguage$pandac$Type* $tmp2013 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2013->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2013->refCount.value = 1;
    panda$core$String* $tmp2015 = panda$core$MutableString$convert$R$panda$core$String(typeName1984);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2013, $tmp2015, kind2006, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes1981), ((panda$core$Bit) { true }));
    return $tmp2013;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2016;
    org$pandalanguage$pandac$MethodDecl* $tmp2017 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2016 = $tmp2017;
    if (((panda$core$Bit) { inherited2016 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2018 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2018;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2019 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2016);
    return $tmp2019;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2020 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2021 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2020);
    return $tmp2021;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2022;
    org$pandalanguage$pandac$MethodDecl* $tmp2023 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2022 = $tmp2023;
    if (((panda$core$Bit) { inherited2022 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2024 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2024;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2025 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2022, p_selfType);
    return $tmp2025;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2026;
        }
        break;
        case 52:
        {
            return &$s2027;
        }
        break;
        case 53:
        {
            return &$s2028;
        }
        break;
        case 54:
        {
            return &$s2029;
        }
        break;
        case 55:
        {
            return &$s2030;
        }
        break;
        case 56:
        {
            return &$s2031;
        }
        break;
        case 57:
        {
            return &$s2032;
        }
        break;
        case 58:
        {
            return &$s2033;
        }
        break;
        case 59:
        {
            return &$s2034;
        }
        break;
        case 63:
        {
            return &$s2035;
        }
        break;
        case 62:
        {
            return &$s2036;
        }
        break;
        case 65:
        {
            return &$s2037;
        }
        break;
        case 64:
        {
            return &$s2038;
        }
        break;
        case 68:
        {
            return &$s2039;
        }
        break;
        case 69:
        {
            return &$s2040;
        }
        break;
        case 66:
        {
            return &$s2041;
        }
        break;
        case 67:
        {
            return &$s2042;
        }
        break;
        case 70:
        {
            return &$s2043;
        }
        break;
        case 71:
        {
            return &$s2044;
        }
        break;
        case 49:
        {
            return &$s2045;
        }
        break;
        case 50:
        {
            return &$s2046;
        }
        break;
        case 72:
        {
            return &$s2047;
        }
        break;
        case 1:
        {
            return &$s2048;
        }
        break;
        case 101:
        {
            return &$s2049;
        }
        break;
        case 73:
        {
            return &$s2050;
        }
        break;
        case 60:
        {
            return &$s2051;
        }
        break;
        case 61:
        {
            return &$s2052;
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
            panda$core$Int64 $tmp2053 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2053, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2054.value);
            panda$core$Bit $tmp2055 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2055.value) {
            {
                panda$core$Object* $tmp2056 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2057 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2056));
                return $tmp2057;
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
            panda$core$Object* $tmp2058 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2059 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2058));
            return $tmp2059;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2085;
    panda$core$Int64 r2087;
    panda$core$Bit $tmp2061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2060 = $tmp2061.value;
    if ($tmp2060) goto $l2062;
    panda$core$Bit $tmp2063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2060 = $tmp2063.value;
    $l2062:;
    panda$core$Bit $tmp2064 = { $tmp2060 };
    PANDA_ASSERT($tmp2064.value);
    panda$core$Bit $tmp2066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2065 = $tmp2066.value;
    if ($tmp2065) goto $l2067;
    panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2065 = $tmp2068.value;
    $l2067:;
    panda$core$Bit $tmp2069 = { $tmp2065 };
    PANDA_ASSERT($tmp2069.value);
    panda$core$Bit $tmp2072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2071 = $tmp2072.value;
    if ($tmp2071) goto $l2073;
    panda$core$UInt64 $tmp2075 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2076 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2075);
    bool $tmp2074 = $tmp2076.value;
    if (!$tmp2074) goto $l2077;
    panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2074 = $tmp2078.value;
    $l2077:;
    panda$core$Bit $tmp2079 = { $tmp2074 };
    $tmp2071 = $tmp2079.value;
    $l2073:;
    panda$core$Bit $tmp2080 = { $tmp2071 };
    bool $tmp2070 = $tmp2080.value;
    if ($tmp2070) goto $l2081;
    panda$core$UInt64 $tmp2082 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2083 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2082);
    $tmp2070 = $tmp2083.value;
    $l2081:;
    panda$core$Bit $tmp2084 = { $tmp2070 };
    if ($tmp2084.value) {
    {
        panda$core$Int64 $tmp2086 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2085 = $tmp2086;
        panda$core$Int64 $tmp2088 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2087 = $tmp2088;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2089 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2089->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2089->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2091 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2092 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2093 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2092);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2089, ((panda$core$Int64) { 1004 }), p_offset, $tmp2091, $tmp2093);
                return $tmp2089;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2094 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2094->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2094->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2096 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2097 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2098 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2097);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2094, ((panda$core$Int64) { 1004 }), p_offset, $tmp2096, $tmp2098);
                return $tmp2094;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2099 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2099->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2099->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2101 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2102 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2103 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2102);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2099, ((panda$core$Int64) { 1004 }), p_offset, $tmp2101, $tmp2103);
                return $tmp2099;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2104 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2104->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2104->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2106 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2107 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2108 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2107);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2104, ((panda$core$Int64) { 1004 }), p_offset, $tmp2106, $tmp2108);
                return $tmp2104;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2109 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2109->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2109->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2111 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2112 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2113 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2112);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2109, ((panda$core$Int64) { 1004 }), p_offset, $tmp2111, $tmp2113);
                return $tmp2109;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2114 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2114->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2114->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2116 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2085, r2087);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2114, ((panda$core$Int64) { 1011 }), p_offset, $tmp2116, $tmp2117);
                return $tmp2114;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2118 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2118->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2118->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2120 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2121 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2085, r2087);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2118, ((panda$core$Int64) { 1011 }), p_offset, $tmp2120, $tmp2121);
                return $tmp2118;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2122 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2122->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2122->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2124 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2125 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2085, r2087);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2122, ((panda$core$Int64) { 1011 }), p_offset, $tmp2124, $tmp2125);
                return $tmp2122;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2126 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2126->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2126->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2128 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2129 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2085, r2087);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2126, ((panda$core$Int64) { 1011 }), p_offset, $tmp2128, $tmp2129);
                return $tmp2126;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2130 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2130->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2130->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2132 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2133 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2085, r2087);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2130, ((panda$core$Int64) { 1011 }), p_offset, $tmp2132, $tmp2133);
                return $tmp2130;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2134 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2134->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2134->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2136 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2137 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2085, r2087);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2134, ((panda$core$Int64) { 1011 }), p_offset, $tmp2136, $tmp2137);
                return $tmp2134;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2138 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2138->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2138->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2140 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2141 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2142 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2141);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2138, ((panda$core$Int64) { 1004 }), p_offset, $tmp2140, $tmp2142);
                return $tmp2138;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2143 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2143->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2143->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2145 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2146 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2147 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2146);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2143, ((panda$core$Int64) { 1004 }), p_offset, $tmp2145, $tmp2147);
                return $tmp2143;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2148 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2148->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2148->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2150 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2151 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2152 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2151);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2148, ((panda$core$Int64) { 1004 }), p_offset, $tmp2150, $tmp2152);
                return $tmp2148;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2153 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2153->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2153->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2155 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2156 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2157 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2156);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2153, ((panda$core$Int64) { 1004 }), p_offset, $tmp2155, $tmp2157);
                return $tmp2153;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2158 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2158->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2160 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2161 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2085, r2087);
                panda$core$UInt64 $tmp2162 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2161);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2158, ((panda$core$Int64) { 1004 }), p_offset, $tmp2160, $tmp2162);
                return $tmp2158;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s2163);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2164.value) {
    {
        panda$core$Object* $tmp2165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2165);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2170;
    org$pandalanguage$pandac$IRNode* resolved2178;
    panda$collections$Array* children2183;
    panda$core$UInt64 baseId2189;
    org$pandalanguage$pandac$IRNode* base2190;
    panda$core$UInt64 indexId2197;
    org$pandalanguage$pandac$IRNode* index2198;
    org$pandalanguage$pandac$IRNode* baseRef2203;
    org$pandalanguage$pandac$IRNode* indexRef2206;
    org$pandalanguage$pandac$IRNode* rhsIndex2209;
    org$pandalanguage$pandac$IRNode* value2211;
    panda$core$Bit $tmp2166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2166.value);
    panda$core$Int64 $tmp2167 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2167, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2168.value);
    panda$core$Bit $tmp2169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2169.value) {
    {
        panda$collections$Array* $tmp2171 = (panda$collections$Array*) malloc(40);
        $tmp2171->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2171->refCount.value = 1;
        panda$collections$Array$init($tmp2171);
        args2170 = $tmp2171;
        panda$core$Object* $tmp2173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2170, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2173)));
        panda$collections$Array$add$panda$collections$Array$T(args2170, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2174 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2176 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2174), &$s2175, ((panda$collections$ListView*) args2170));
        return $tmp2176;
    }
    }
    panda$core$Bit $tmp2177 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2177.value);
    org$pandalanguage$pandac$IRNode* $tmp2179 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2178 = $tmp2179;
    if (((panda$core$Bit) { resolved2178 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2180 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2178);
    resolved2178 = $tmp2180;
    panda$core$Int64 $tmp2181 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2178->children);
    panda$core$Bit $tmp2182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2181, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2182.value);
    panda$collections$Array* $tmp2184 = (panda$collections$Array*) malloc(40);
    $tmp2184->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2184->refCount.value = 1;
    panda$collections$Array$init($tmp2184);
    children2183 = $tmp2184;
    panda$core$Object* $tmp2186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2178->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2187 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2186));
    panda$collections$Array$add$panda$collections$Array$T(children2183, ((panda$core$Object*) $tmp2187));
    panda$core$UInt64 $tmp2188 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2188;
    baseId2189 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2191 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2191->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2191->refCount.value = 1;
    panda$core$Object* $tmp2193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2183, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2194 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2183, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2191, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2193)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2194)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2189)), ((panda$collections$ListView*) children2183));
    base2190 = $tmp2191;
    panda$collections$Array$clear(children2183);
    panda$core$Object* $tmp2195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2178->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2183, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2195)));
    panda$core$UInt64 $tmp2196 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2196;
    indexId2197 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2199 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2199->refCount.value = 1;
    panda$core$Object* $tmp2201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2183, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2183, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2199, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2201)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2202)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2197)), ((panda$collections$ListView*) children2183));
    index2198 = $tmp2199;
    org$pandalanguage$pandac$IRNode* $tmp2204 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2204->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2204->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2204, ((panda$core$Int64) { 1028 }), base2190->offset, base2190->type, baseId2189);
    baseRef2203 = $tmp2204;
    org$pandalanguage$pandac$IRNode* $tmp2207 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2207->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2207->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2207, ((panda$core$Int64) { 1028 }), index2198->offset, index2198->type, indexId2197);
    indexRef2206 = $tmp2207;
    org$pandalanguage$pandac$IRNode* $tmp2210 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, baseRef2203, ((panda$core$Int64) { 101 }), indexRef2206);
    rhsIndex2209 = $tmp2210;
    if (((panda$core$Bit) { rhsIndex2209 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2212 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2213 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, rhsIndex2209, $tmp2212, p_right);
    value2211 = $tmp2213;
    if (((panda$core$Bit) { value2211 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2216 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2209->type);
    bool $tmp2215 = $tmp2216.value;
    if (!$tmp2215) goto $l2217;
    panda$core$Bit $tmp2218 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2215 = $tmp2218.value;
    $l2217:;
    panda$core$Bit $tmp2219 = { $tmp2215 };
    bool $tmp2214 = $tmp2219.value;
    if (!$tmp2214) goto $l2220;
    panda$core$Bit $tmp2221 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2209->type, value2211->type);
    $tmp2214 = $tmp2221.value;
    $l2220:;
    panda$core$Bit $tmp2222 = { $tmp2214 };
    if ($tmp2222.value) {
    {
        panda$collections$Array* $tmp2224 = (panda$collections$Array*) malloc(40);
        $tmp2224->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2224->refCount.value = 1;
        panda$collections$Array$init($tmp2224);
        org$pandalanguage$pandac$IRNode* $tmp2226 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2211, &$s2223, ((panda$collections$ListView*) $tmp2224), resolved2178->type);
        value2211 = $tmp2226;
        if (((panda$core$Bit) { value2211 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2183);
    panda$collections$Array$add$panda$collections$Array$T(children2183, ((panda$core$Object*) index2198));
    panda$collections$Array$add$panda$collections$Array$T(children2183, ((panda$core$Object*) value2211));
    org$pandalanguage$pandac$IRNode* $tmp2228 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2190, &$s2227, ((panda$collections$ListView*) children2183));
    return $tmp2228;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2229;
    org$pandalanguage$pandac$IRNode* right2230;
    panda$core$Int64 kind2254;
    org$pandalanguage$pandac$IRNode* resolved2261;
    panda$collections$Array* children2263;
    org$pandalanguage$pandac$IRNode* resolved2270;
    panda$collections$Array* children2272;
    org$pandalanguage$pandac$ClassDecl* cl2284;
    org$pandalanguage$pandac$ClassDecl* cl2301;
    org$pandalanguage$pandac$IRNode* finalLeft2317;
    org$pandalanguage$pandac$IRNode* finalRight2320;
    panda$collections$Array* children2323;
    panda$collections$Array* children2337;
    panda$collections$Array* children2349;
    org$pandalanguage$pandac$IRNode* reusedLeft2355;
    org$pandalanguage$pandac$ClassDecl* cl2372;
    panda$collections$ListView* parameters2374;
    org$pandalanguage$pandac$Symbol* methods2376;
    org$pandalanguage$pandac$Type* type2380;
    panda$collections$Array* types2381;
    org$pandalanguage$pandac$MethodDecl* m2385;
    panda$collections$Iterator* m$Iter2390;
    org$pandalanguage$pandac$MethodDecl* m2402;
    panda$collections$Array* children2413;
    panda$collections$Array* children2442;
    panda$collections$Array* children2458;
    org$pandalanguage$pandac$Type* resultType2481;
    org$pandalanguage$pandac$IRNode* result2485;
    org$pandalanguage$pandac$IRNode* resolved2488;
    org$pandalanguage$pandac$IRNode* target2494;
    left2229 = p_rawLeft;
    right2230 = p_rawRight;
    panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2229->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2231.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2232 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2230);
        right2230 = $tmp2232;
        if (((panda$core$Bit) { right2230 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2233 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2229, right2230->type);
        if (((panda$core$Bit) { $tmp2233.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2234 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2229, right2230->type);
            left2229 = $tmp2234;
        }
        }
    }
    }
    panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2230->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2235 = $tmp2236.value;
    if (!$tmp2235) goto $l2237;
    panda$core$Int64$nullable $tmp2238 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2230, left2229->type);
    $tmp2235 = ((panda$core$Bit) { $tmp2238.nonnull }).value;
    $l2237:;
    panda$core$Bit $tmp2239 = { $tmp2235 };
    if ($tmp2239.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2240 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2230, left2229->type);
        right2230 = $tmp2240;
    }
    }
    panda$core$Bit $tmp2244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2243 = $tmp2244.value;
    if ($tmp2243) goto $l2245;
    panda$core$Bit $tmp2246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2243 = $tmp2246.value;
    $l2245:;
    panda$core$Bit $tmp2247 = { $tmp2243 };
    bool $tmp2242 = $tmp2247.value;
    if ($tmp2242) goto $l2248;
    panda$core$Bit $tmp2249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2242 = $tmp2249.value;
    $l2248:;
    panda$core$Bit $tmp2250 = { $tmp2242 };
    bool $tmp2241 = $tmp2250.value;
    if ($tmp2241) goto $l2251;
    panda$core$Bit $tmp2252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2241 = $tmp2252.value;
    $l2251:;
    panda$core$Bit $tmp2253 = { $tmp2241 };
    if ($tmp2253.value) {
    {
        panda$core$Bit $tmp2256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2255 = $tmp2256.value;
        if ($tmp2255) goto $l2257;
        panda$core$Bit $tmp2258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2255 = $tmp2258.value;
        $l2257:;
        panda$core$Bit $tmp2259 = { $tmp2255 };
        if ($tmp2259.value) {
        {
            kind2254 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2254 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2229->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2260.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2262 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2230);
            resolved2261 = $tmp2262;
            if (((panda$core$Bit) { resolved2261 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2264 = (panda$collections$Array*) malloc(40);
            $tmp2264->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2264->refCount.value = 1;
            panda$collections$Array$init($tmp2264);
            children2263 = $tmp2264;
            panda$collections$Array$add$panda$collections$Array$T(children2263, ((panda$core$Object*) resolved2261));
            org$pandalanguage$pandac$IRNode* $tmp2266 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2266->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2266->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2268 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2266, kind2254, p_offset, $tmp2268, ((panda$collections$ListView*) children2263));
            return $tmp2266;
        }
        }
        panda$core$Bit $tmp2269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2230->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2269.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2271 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2229);
            resolved2270 = $tmp2271;
            if (((panda$core$Bit) { resolved2270 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2273 = (panda$collections$Array*) malloc(40);
            $tmp2273->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2273->refCount.value = 1;
            panda$collections$Array$init($tmp2273);
            children2272 = $tmp2273;
            panda$collections$Array$add$panda$collections$Array$T(children2272, ((panda$core$Object*) resolved2270));
            org$pandalanguage$pandac$IRNode* $tmp2275 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2275->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2277 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2275, kind2254, p_offset, $tmp2277, ((panda$collections$ListView*) children2272));
            return $tmp2275;
        }
        }
    }
    }
    panda$core$Bit $tmp2279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2278 = $tmp2279.value;
    if ($tmp2278) goto $l2280;
    panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2278 = $tmp2281.value;
    $l2280:;
    panda$core$Bit $tmp2282 = { $tmp2278 };
    if ($tmp2282.value) {
    {
        panda$core$Bit $tmp2283 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2229->type);
        if ($tmp2283.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2285 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2229->type);
            cl2284 = $tmp2285;
            if (((panda$core$Bit) { cl2284 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2286 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2284);
            if ($tmp2286.value) {
            {
                panda$core$String* $tmp2288 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2287, $tmp2288);
                panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, &$s2290);
                panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2291, ((panda$core$Object*) left2229->type));
                panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2293);
                panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2295, ((panda$core$Object*) right2230->type));
                panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2297);
                panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, $tmp2298);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2299);
            }
            }
        }
        }
        panda$core$Bit $tmp2300 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2230->type);
        if ($tmp2300.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2302 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2230->type);
            cl2301 = $tmp2302;
            if (((panda$core$Bit) { cl2301 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2303 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2301);
            if ($tmp2303.value) {
            {
                panda$core$String* $tmp2305 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2304, $tmp2305);
                panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
                panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2308, ((panda$core$Object*) left2229->type));
                panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
                panda$core$String* $tmp2313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2312, ((panda$core$Object*) right2230->type));
                panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2313, &$s2314);
                panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, $tmp2315);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2316);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2318 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2319 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2229, $tmp2318);
        finalLeft2317 = $tmp2319;
        if (((panda$core$Bit) { finalLeft2317 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2321 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2322 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2230, $tmp2321);
        finalRight2320 = $tmp2322;
        if (((panda$core$Bit) { finalRight2320 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2324 = (panda$collections$Array*) malloc(40);
        $tmp2324->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2324->refCount.value = 1;
        panda$collections$Array$init($tmp2324);
        children2323 = $tmp2324;
        panda$collections$Array$add$panda$collections$Array$T(children2323, ((panda$core$Object*) finalLeft2317));
        panda$collections$Array$add$panda$collections$Array$T(children2323, ((panda$core$Object*) finalRight2320));
        org$pandalanguage$pandac$IRNode* $tmp2326 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2326->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2326->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2328 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2326, ((panda$core$Int64) { 1023 }), p_offset, $tmp2328, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2323));
        return $tmp2326;
    }
    }
    panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2329.value) {
    {
        panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2229->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2330.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2331 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2229, p_op, right2230);
            return $tmp2331;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2332 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2229);
        left2229 = $tmp2332;
        if (((panda$core$Bit) { left2229 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2333 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2230, left2229->type);
        right2230 = $tmp2333;
        if (((panda$core$Bit) { right2230 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2334 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2229);
        panda$core$Bit $tmp2335 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2334);
        if ($tmp2335.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2229->offset, &$s2336);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2338 = (panda$collections$Array*) malloc(40);
        $tmp2338->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2338->refCount.value = 1;
        panda$collections$Array$init($tmp2338);
        children2337 = $tmp2338;
        panda$collections$Array$add$panda$collections$Array$T(children2337, ((panda$core$Object*) left2229));
        panda$collections$Array$add$panda$collections$Array$T(children2337, ((panda$core$Object*) right2230));
        org$pandalanguage$pandac$IRNode* $tmp2340 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2340->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2340->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2340, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2337));
        return $tmp2340;
    }
    }
    panda$core$Bit $tmp2342 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2342.value) {
    {
        panda$core$Bit $tmp2343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2229->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2343.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2344 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2229, p_op, right2230);
            return $tmp2344;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2345 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2229);
        left2229 = $tmp2345;
        if (((panda$core$Bit) { left2229 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2346 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2229);
        panda$core$Bit $tmp2347 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2346);
        if ($tmp2347.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2229->offset, &$s2348);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2350 = (panda$collections$Array*) malloc(40);
        $tmp2350->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2350->refCount.value = 1;
        panda$collections$Array$init($tmp2350);
        children2349 = $tmp2350;
        panda$collections$Array$add$panda$collections$Array$T(children2349, ((panda$core$Object*) left2229));
        panda$core$UInt64 $tmp2352 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2352;
        org$pandalanguage$pandac$IRNode* $tmp2353 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2353->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2353->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2353, ((panda$core$Int64) { 1027 }), left2229->offset, left2229->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2349));
        left2229 = $tmp2353;
        org$pandalanguage$pandac$IRNode* $tmp2356 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2356->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2356->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2356, ((panda$core$Int64) { 1028 }), left2229->offset, left2229->type, self->reusedValueCount);
        reusedLeft2355 = $tmp2356;
        panda$core$Int64 $tmp2358 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2359 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, reusedLeft2355, $tmp2358, right2230);
        right2230 = $tmp2359;
        if (((panda$core$Bit) { right2230 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2361 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2229->type);
        bool $tmp2360 = $tmp2361.value;
        if (!$tmp2360) goto $l2362;
        panda$core$Bit $tmp2363 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2229->type, right2230->type);
        $tmp2360 = $tmp2363.value;
        $l2362:;
        panda$core$Bit $tmp2364 = { $tmp2360 };
        if ($tmp2364.value) {
        {
            panda$collections$Array* $tmp2366 = (panda$collections$Array*) malloc(40);
            $tmp2366->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2366->refCount.value = 1;
            panda$collections$Array$init($tmp2366);
            org$pandalanguage$pandac$IRNode* $tmp2368 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2230, &$s2365, ((panda$collections$ListView*) $tmp2366), left2229->type);
            right2230 = $tmp2368;
            if (((panda$core$Bit) { right2230 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2369 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2229, ((panda$core$Int64) { 73 }), right2230);
        return $tmp2369;
    }
    }
    panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2370.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2371 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2229);
        left2229 = $tmp2371;
        if (((panda$core$Bit) { left2229 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2373 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2229->type);
        cl2372 = $tmp2373;
        if (((panda$core$Bit) { cl2372 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2375 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2229->type);
        parameters2374 = $tmp2375;
        org$pandalanguage$pandac$SymbolTable* $tmp2377 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2372);
        org$pandalanguage$pandac$Symbol* $tmp2379 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2377, &$s2378);
        methods2376 = $tmp2379;
        if (((panda$core$Bit) { methods2376 != NULL }).value) {
        {
            panda$collections$Array* $tmp2382 = (panda$collections$Array*) malloc(40);
            $tmp2382->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2382->refCount.value = 1;
            panda$collections$Array$init($tmp2382);
            types2381 = $tmp2382;
            panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2376->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2384.value) {
            {
                m2385 = ((org$pandalanguage$pandac$MethodDecl*) methods2376);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2385);
                org$pandalanguage$pandac$MethodRef* $tmp2386 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2386->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2386->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2386, m2385, parameters2374);
                org$pandalanguage$pandac$Type* $tmp2388 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2386);
                panda$collections$Array$add$panda$collections$Array$T(types2381, ((panda$core$Object*) $tmp2388));
            }
            }
            else {
            {
                panda$core$Bit $tmp2389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2376->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2389.value);
                {
                    ITable* $tmp2391 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2376)->methods)->$class->itable;
                    while ($tmp2391->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2391 = $tmp2391->next;
                    }
                    $fn2393 $tmp2392 = $tmp2391->methods[0];
                    panda$collections$Iterator* $tmp2394 = $tmp2392(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2376)->methods));
                    m$Iter2390 = $tmp2394;
                    $l2395:;
                    ITable* $tmp2397 = m$Iter2390->$class->itable;
                    while ($tmp2397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2397 = $tmp2397->next;
                    }
                    $fn2399 $tmp2398 = $tmp2397->methods[0];
                    panda$core$Bit $tmp2400 = $tmp2398(m$Iter2390);
                    panda$core$Bit $tmp2401 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2400);
                    if (!$tmp2401.value) goto $l2396;
                    {
                        ITable* $tmp2403 = m$Iter2390->$class->itable;
                        while ($tmp2403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2403 = $tmp2403->next;
                        }
                        $fn2405 $tmp2404 = $tmp2403->methods[1];
                        panda$core$Object* $tmp2406 = $tmp2404(m$Iter2390);
                        m2402 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2406);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2402);
                        org$pandalanguage$pandac$MethodRef* $tmp2407 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2407->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2407->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2407, m2402, parameters2374);
                        org$pandalanguage$pandac$Type* $tmp2409 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2407);
                        panda$collections$Array$add$panda$collections$Array$T(types2381, ((panda$core$Object*) $tmp2409));
                    }
                    goto $l2395;
                    $l2396:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2410 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp2410->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2410->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2410, ((panda$collections$ListView*) types2381));
            type2380 = $tmp2410;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2412 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2380 = $tmp2412;
        }
        }
        panda$collections$Array* $tmp2414 = (panda$collections$Array*) malloc(40);
        $tmp2414->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2414->refCount.value = 1;
        panda$collections$Array$init($tmp2414);
        children2413 = $tmp2414;
        panda$collections$Array$add$panda$collections$Array$T(children2413, ((panda$core$Object*) left2229));
        panda$collections$Array$add$panda$collections$Array$T(children2413, ((panda$core$Object*) right2230));
        org$pandalanguage$pandac$IRNode* $tmp2416 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2416->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2416->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2416, ((panda$core$Int64) { 1040 }), p_offset, type2380, ((panda$collections$ListView*) children2413));
        return $tmp2416;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2418 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2419 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2229->type, $tmp2418);
    if ($tmp2419.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2421 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2422 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2230->type, $tmp2421);
        bool $tmp2420 = $tmp2422.value;
        if (!$tmp2420) goto $l2423;
        panda$core$Bit $tmp2428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2427 = $tmp2428.value;
        if ($tmp2427) goto $l2429;
        panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2427 = $tmp2430.value;
        $l2429:;
        panda$core$Bit $tmp2431 = { $tmp2427 };
        bool $tmp2426 = $tmp2431.value;
        if ($tmp2426) goto $l2432;
        panda$core$Bit $tmp2433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2426 = $tmp2433.value;
        $l2432:;
        panda$core$Bit $tmp2434 = { $tmp2426 };
        bool $tmp2425 = $tmp2434.value;
        if ($tmp2425) goto $l2435;
        panda$core$Bit $tmp2436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2425 = $tmp2436.value;
        $l2435:;
        panda$core$Bit $tmp2437 = { $tmp2425 };
        bool $tmp2424 = $tmp2437.value;
        if ($tmp2424) goto $l2438;
        panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2424 = $tmp2439.value;
        $l2438:;
        panda$core$Bit $tmp2440 = { $tmp2424 };
        $tmp2420 = $tmp2440.value;
        $l2423:;
        panda$core$Bit $tmp2441 = { $tmp2420 };
        if ($tmp2441.value) {
        {
            panda$collections$Array* $tmp2443 = (panda$collections$Array*) malloc(40);
            $tmp2443->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2443->refCount.value = 1;
            panda$collections$Array$init($tmp2443);
            children2442 = $tmp2443;
            panda$collections$Array$add$panda$collections$Array$T(children2442, ((panda$core$Object*) left2229));
            panda$collections$Array$add$panda$collections$Array$T(children2442, ((panda$core$Object*) right2230));
            org$pandalanguage$pandac$IRNode* $tmp2445 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2445->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2445->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2445, ((panda$core$Int64) { 1023 }), p_offset, left2229->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2442));
            return $tmp2445;
        }
        }
        panda$core$String* $tmp2448 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2447, $tmp2448);
        panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2449, &$s2450);
        panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2451, ((panda$core$Object*) left2229->type));
        panda$core$String* $tmp2454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2452, &$s2453);
        panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2454, ((panda$core$Object*) right2230->type));
        panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, &$s2456);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2457);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2459 = (panda$collections$Array*) malloc(40);
    $tmp2459->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2459->refCount.value = 1;
    panda$collections$Array$init($tmp2459);
    children2458 = $tmp2459;
    panda$core$Bit $tmp2463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2229->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2462 = $tmp2463.value;
    if ($tmp2462) goto $l2464;
    panda$core$Bit $tmp2465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2229->kind, ((panda$core$Int64) { 1032 }));
    $tmp2462 = $tmp2465.value;
    $l2464:;
    panda$core$Bit $tmp2466 = { $tmp2462 };
    bool $tmp2461 = $tmp2466.value;
    if (!$tmp2461) goto $l2467;
    panda$core$Bit $tmp2469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2230->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2468 = $tmp2469.value;
    if ($tmp2468) goto $l2470;
    panda$core$Bit $tmp2471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2230->kind, ((panda$core$Int64) { 1032 }));
    $tmp2468 = $tmp2471.value;
    $l2470:;
    panda$core$Bit $tmp2472 = { $tmp2468 };
    $tmp2461 = $tmp2472.value;
    $l2467:;
    panda$core$Bit $tmp2473 = { $tmp2461 };
    if ($tmp2473.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2474 = org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2229, p_op, right2230);
        return $tmp2474;
    }
    }
    panda$core$Bit $tmp2476 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2229->type);
    bool $tmp2475 = $tmp2476.value;
    if (!$tmp2475) goto $l2477;
    panda$core$Int64$nullable $tmp2478 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2230, left2229->type);
    $tmp2475 = ((panda$core$Bit) { $tmp2478.nonnull }).value;
    $l2477:;
    panda$core$Bit $tmp2479 = { $tmp2475 };
    if ($tmp2479.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2480 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2230, left2229->type);
        right2230 = $tmp2480;
        PANDA_ASSERT(((panda$core$Bit) { right2230 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2458, ((panda$core$Object*) left2229));
        panda$collections$Array$add$panda$collections$Array$T(children2458, ((panda$core$Object*) right2230));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2482 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2481 = $tmp2482;
            }
            break;
            default:
            {
                resultType2481 = left2229->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2483 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2483->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2483, ((panda$core$Int64) { 1023 }), p_offset, resultType2481, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2458));
        return $tmp2483;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2458, ((panda$core$Object*) right2230));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2486 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2487 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2229, $tmp2486, ((panda$collections$ListView*) children2458));
    result2485 = $tmp2487;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2485 == NULL }).value) {
    {
        panda$collections$Array$clear(children2458);
        panda$collections$Array$add$panda$collections$Array$T(children2458, ((panda$core$Object*) left2229));
        org$pandalanguage$pandac$IRNode* $tmp2489 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2230);
        resolved2488 = $tmp2489;
        bool $tmp2490 = ((panda$core$Bit) { resolved2488 != NULL }).value;
        if (!$tmp2490) goto $l2491;
        panda$core$Bit $tmp2492 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2488->type);
        $tmp2490 = $tmp2492.value;
        $l2491:;
        panda$core$Bit $tmp2493 = { $tmp2490 };
        if ($tmp2493.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2458, ((panda$core$Object*) resolved2488));
            org$pandalanguage$pandac$IRNode* $tmp2495 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2495->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2495->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2497 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2495, ((panda$core$Int64) { 1001 }), resolved2488->offset, $tmp2497, resolved2488->type);
            target2494 = $tmp2495;
            panda$core$String* $tmp2498 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2499 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2494, $tmp2498, ((panda$collections$ListView*) children2458));
            result2485 = $tmp2499;
        }
        }
    }
    }
    return result2485;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2500;
    org$pandalanguage$pandac$IRNode* right2503;
    panda$core$Object* $tmp2501 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2502 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2501));
    left2500 = $tmp2502;
    if (((panda$core$Bit) { left2500 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2505 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2504));
    right2503 = $tmp2505;
    if (((panda$core$Bit) { right2503 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2506 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->offset, left2500, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2503);
    return $tmp2506;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2513;
    panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 22 }));
    if ($tmp2507.value) {
    {
        panda$core$Object* $tmp2508 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$collections$ListView* $tmp2509 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2508));
        return $tmp2509;
    }
    }
    panda$core$Bit $tmp2510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2510.value) {
    {
        panda$core$Int64 $tmp2511 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
        panda$core$Bit $tmp2512 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2511, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp2512.value);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2513, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp2514 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2513);
        return ((panda$collections$ListView*) $tmp2514);
    }
    }
    else {
    {
        panda$collections$Array* $tmp2515 = (panda$collections$Array*) malloc(40);
        $tmp2515->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2515->refCount.value = 1;
        panda$collections$Array$init($tmp2515);
        return ((panda$collections$ListView*) $tmp2515);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    org$pandalanguage$pandac$Type* type2519;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2517.value) {
        {
            panda$collections$ListView* $tmp2518 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2518;
        }
        }
        panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2520.value) {
        {
            panda$core$Object* $tmp2521 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->type->subtypes, ((panda$core$Int64) { 0 }));
            type2519 = ((org$pandalanguage$pandac$Type*) $tmp2521);
        }
        }
        else {
        {
            type2519 = p_target->type;
        }
        }
        panda$collections$ListView* $tmp2522 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, type2519);
        return $tmp2522;
    }
    }
    panda$collections$Array* $tmp2523 = (panda$collections$Array*) malloc(40);
    $tmp2523->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2523->refCount.value = 1;
    panda$collections$Array$init($tmp2523);
    return ((panda$collections$ListView*) $tmp2523);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name2526;
    org$pandalanguage$pandac$ClassDecl* cl2528;
    org$pandalanguage$pandac$Symbol* s2530;
    org$pandalanguage$pandac$MethodDecl* m2533;
    panda$collections$Iterator* test$Iter2538;
    org$pandalanguage$pandac$MethodDecl* test2550;
    org$pandalanguage$pandac$MethodRef* ref2562;
    panda$collections$Array* children2566;
    org$pandalanguage$pandac$IRNode* methodRef2569;
    panda$collections$Array* args2575;
    panda$collections$Array* children2584;
    panda$collections$Array* children2594;
    org$pandalanguage$pandac$IRNode* coerced2603;
    panda$collections$Array* children2606;
    panda$core$Bit $tmp2525 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2525.value) {
    {
        panda$core$String* $tmp2527 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2526 = $tmp2527;
        org$pandalanguage$pandac$ClassDecl* $tmp2529 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2528 = $tmp2529;
        if (((panda$core$Bit) { cl2528 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2531 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2528);
        org$pandalanguage$pandac$Symbol* $tmp2532 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2531, name2526);
        s2530 = $tmp2532;
        if (((panda$core$Bit) { s2530 != NULL }).value) {
        {
            m2533 = NULL;
            switch (s2530->kind.value) {
                case 204:
                {
                    m2533 = ((org$pandalanguage$pandac$MethodDecl*) s2530);
                    panda$core$Int64 $tmp2534 = panda$collections$Array$get_count$R$panda$core$Int64(m2533->parameters);
                    panda$core$Bit $tmp2535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2534, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2535.value);
                    panda$core$Bit $tmp2536 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2533->annotations);
                    panda$core$Bit $tmp2537 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2536);
                    PANDA_ASSERT($tmp2537.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2539 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2530)->methods)->$class->itable;
                        while ($tmp2539->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2539 = $tmp2539->next;
                        }
                        $fn2541 $tmp2540 = $tmp2539->methods[0];
                        panda$collections$Iterator* $tmp2542 = $tmp2540(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2530)->methods));
                        test$Iter2538 = $tmp2542;
                        $l2543:;
                        ITable* $tmp2545 = test$Iter2538->$class->itable;
                        while ($tmp2545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2545 = $tmp2545->next;
                        }
                        $fn2547 $tmp2546 = $tmp2545->methods[0];
                        panda$core$Bit $tmp2548 = $tmp2546(test$Iter2538);
                        panda$core$Bit $tmp2549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2548);
                        if (!$tmp2549.value) goto $l2544;
                        {
                            ITable* $tmp2551 = test$Iter2538->$class->itable;
                            while ($tmp2551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2551 = $tmp2551->next;
                            }
                            $fn2553 $tmp2552 = $tmp2551->methods[1];
                            panda$core$Object* $tmp2554 = $tmp2552(test$Iter2538);
                            test2550 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2554);
                            panda$core$Bit $tmp2556 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2550->annotations);
                            panda$core$Bit $tmp2557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2556);
                            bool $tmp2555 = $tmp2557.value;
                            if (!$tmp2555) goto $l2558;
                            panda$core$Int64 $tmp2559 = panda$collections$Array$get_count$R$panda$core$Int64(test2550->parameters);
                            panda$core$Bit $tmp2560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2559, ((panda$core$Int64) { 0 }));
                            $tmp2555 = $tmp2560.value;
                            $l2558:;
                            panda$core$Bit $tmp2561 = { $tmp2555 };
                            if ($tmp2561.value) {
                            {
                                m2533 = test2550;
                                goto $l2544;
                            }
                            }
                        }
                        goto $l2543;
                        $l2544:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2533 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2533);
                org$pandalanguage$pandac$MethodRef* $tmp2563 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2563->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2563->refCount.value = 1;
                panda$collections$ListView* $tmp2565 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2563, m2533, $tmp2565);
                ref2562 = $tmp2563;
                panda$collections$Array* $tmp2567 = (panda$collections$Array*) malloc(40);
                $tmp2567->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2567->refCount.value = 1;
                panda$collections$Array$init($tmp2567);
                children2566 = $tmp2567;
                panda$collections$Array$add$panda$collections$Array$T(children2566, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2570 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2570->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2572 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp2572->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2572->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2572, &$s2574, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2570, ((panda$core$Int64) { 1002 }), p_offset, $tmp2572, ((panda$core$Object*) ref2562), ((panda$collections$ListView*) children2566));
                methodRef2569 = $tmp2570;
                panda$collections$Array* $tmp2576 = (panda$collections$Array*) malloc(40);
                $tmp2576->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2576->refCount.value = 1;
                panda$collections$Array$init($tmp2576);
                args2575 = $tmp2576;
                org$pandalanguage$pandac$IRNode* $tmp2578 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2569, ((panda$collections$ListView*) args2575));
                return $tmp2578;
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
                    org$pandalanguage$pandac$IRNode* $tmp2579 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2579->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2579->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2579, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2579;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2581 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2581->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2581->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2581, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2581;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2583 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2583.value) {
                    {
                        panda$collections$Array* $tmp2585 = (panda$collections$Array*) malloc(40);
                        $tmp2585->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2585->refCount.value = 1;
                        panda$collections$Array$init($tmp2585);
                        children2584 = $tmp2585;
                        panda$collections$Array$add$panda$collections$Array$T(children2584, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2587 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp2587->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2587->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2587, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2584));
                        return $tmp2587;
                    }
                    }
                }
            }
            panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2589, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, &$s2591);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2592);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2593 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2593.value) {
            {
                panda$collections$Array* $tmp2595 = (panda$collections$Array*) malloc(40);
                $tmp2595->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2595->refCount.value = 1;
                panda$collections$Array$init($tmp2595);
                children2594 = $tmp2595;
                panda$collections$Array$add$panda$collections$Array$T(children2594, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2597 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2597->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2597->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2597, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2594));
                return $tmp2597;
            }
            }
            else {
            {
                panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2599, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, &$s2601);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2602);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2604 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2605 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2604);
            coerced2603 = $tmp2605;
            if (((panda$core$Bit) { coerced2603 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2607 = (panda$collections$Array*) malloc(40);
            $tmp2607->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2607->refCount.value = 1;
            panda$collections$Array$init($tmp2607);
            children2606 = $tmp2607;
            panda$collections$Array$add$panda$collections$Array$T(children2606, ((panda$core$Object*) coerced2603));
            org$pandalanguage$pandac$IRNode* $tmp2609 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2609->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2609->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2609, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2606));
            return $tmp2609;
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
    org$pandalanguage$pandac$IRNode* base2614;
    panda$core$Bit $tmp2611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2611.value);
    panda$core$Int64 $tmp2612 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2612, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2613.value);
    panda$core$Object* $tmp2615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2616 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2615));
    base2614 = $tmp2616;
    if (((panda$core$Bit) { base2614 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2617 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2614, p_p->offset);
    return $tmp2617;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2619;
    panda$collections$Array* args2622;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2625;
    org$pandalanguage$pandac$IRNode* arg2645;
    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2618.value);
    panda$core$Object* $tmp2620 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2621 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2620));
    m2619 = $tmp2621;
    if (((panda$core$Bit) { m2619 != NULL }).value) {
    {
        panda$collections$Array* $tmp2623 = (panda$collections$Array*) malloc(40);
        $tmp2623->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2623->refCount.value = 1;
        panda$collections$Array$init($tmp2623);
        args2622 = $tmp2623;
        panda$core$Int64 $tmp2626 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2625, ((panda$core$Int64) { 1 }), $tmp2626, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp2628 = $tmp2625.start.value;
        panda$core$Int64 i2627 = { $tmp2628 };
        int64_t $tmp2630 = $tmp2625.end.value;
        int64_t $tmp2631 = $tmp2625.step.value;
        bool $tmp2632 = $tmp2625.inclusive.value;
        bool $tmp2639 = $tmp2631 > 0;
        if ($tmp2639) goto $l2637; else goto $l2638;
        $l2637:;
        if ($tmp2632) goto $l2640; else goto $l2641;
        $l2640:;
        if ($tmp2628 <= $tmp2630) goto $l2633; else goto $l2635;
        $l2641:;
        if ($tmp2628 < $tmp2630) goto $l2633; else goto $l2635;
        $l2638:;
        if ($tmp2632) goto $l2642; else goto $l2643;
        $l2642:;
        if ($tmp2628 >= $tmp2630) goto $l2633; else goto $l2635;
        $l2643:;
        if ($tmp2628 > $tmp2630) goto $l2633; else goto $l2635;
        $l2633:;
        {
            panda$core$Object* $tmp2646 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2627);
            org$pandalanguage$pandac$IRNode* $tmp2647 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2646));
            arg2645 = $tmp2647;
            if (((panda$core$Bit) { arg2645 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2622, ((panda$core$Object*) arg2645));
        }
        $l2636:;
        if ($tmp2639) goto $l2649; else goto $l2650;
        $l2649:;
        int64_t $tmp2651 = $tmp2630 - i2627.value;
        if ($tmp2632) goto $l2652; else goto $l2653;
        $l2652:;
        if ($tmp2651 >= $tmp2631) goto $l2648; else goto $l2635;
        $l2653:;
        if ($tmp2651 > $tmp2631) goto $l2648; else goto $l2635;
        $l2650:;
        int64_t $tmp2655 = i2627.value - $tmp2630;
        if ($tmp2632) goto $l2656; else goto $l2657;
        $l2656:;
        if ($tmp2655 >= -$tmp2631) goto $l2648; else goto $l2635;
        $l2657:;
        if ($tmp2655 > -$tmp2631) goto $l2648; else goto $l2635;
        $l2648:;
        i2627.value += $tmp2631;
        goto $l2633;
        $l2635:;
        org$pandalanguage$pandac$IRNode* $tmp2659 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2619, ((panda$collections$ListView*) args2622));
        return $tmp2659;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2663;
    org$pandalanguage$pandac$ClassDecl* cl2672;
    panda$core$String* name2674;
    org$pandalanguage$pandac$ClassDecl* cl2682;
    org$pandalanguage$pandac$Symbol* s2694;
    panda$core$Bit $tmp2660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2660.value);
    panda$core$Int64 $tmp2661 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2661, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2662.value);
    panda$core$Object* $tmp2664 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2665 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2664));
    base2663 = $tmp2665;
    if (((panda$core$Bit) { base2663 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2667 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2663->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2666 = $tmp2667.value;
    if (!$tmp2666) goto $l2668;
    panda$core$Bit $tmp2669 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2663->kind, ((panda$core$Int64) { 1024 }));
    $tmp2666 = $tmp2669.value;
    $l2668:;
    panda$core$Bit $tmp2670 = { $tmp2666 };
    if ($tmp2670.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2671 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2663);
        base2663 = $tmp2671;
    }
    }
    if (((panda$core$Bit) { base2663 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2663->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2673 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2663->payload));
            cl2672 = $tmp2673;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2675, base2663->payload);
            panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, &$s2677);
            panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2678, p_d->payload);
            panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
            name2674 = $tmp2681;
            org$pandalanguage$pandac$ClassDecl* $tmp2683 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2674);
            cl2682 = $tmp2683;
            if (((panda$core$Bit) { cl2682 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2684 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2684->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2684->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2686 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2687 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2682);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2684, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp2686, $tmp2687);
                return $tmp2684;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2688 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2688->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2688->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2690 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2688, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp2690, name2674);
            return $tmp2688;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2691 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2692 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2691)->rawSuper);
            cl2672 = $tmp2692;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2693 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2663->type);
            cl2672 = $tmp2693;
        }
    }
    if (((panda$core$Bit) { cl2672 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2695 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2672);
    org$pandalanguage$pandac$Symbol* $tmp2696 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2695, ((panda$core$String*) p_d->payload));
    s2694 = $tmp2696;
    if (((panda$core$Bit) { s2694 == NULL }).value) {
    {
        panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2697, ((panda$core$Object*) base2663->type));
        panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
        panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2701, p_d->payload);
        panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2703);
        panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, $tmp2704);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_d->offset, $tmp2705);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2706 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2672);
    org$pandalanguage$pandac$IRNode* $tmp2707 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->offset, base2663, s2694, $tmp2706);
    return $tmp2707;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2709;
    panda$core$Bit $tmp2708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2708.value);
    org$pandalanguage$pandac$Symbol* $tmp2710 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2709 = $tmp2710;
    if (((panda$core$Bit) { s2709 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2711 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2709 = ((org$pandalanguage$pandac$Symbol*) $tmp2711);
    }
    }
    if (((panda$core$Bit) { s2709 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2712 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->offset, NULL, s2709, self->symbolTable);
        return $tmp2712;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2713 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2713->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2713->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2715 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2713, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp2715, ((panda$core$String*) p_i->payload));
    return $tmp2713;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$IRNode* $tmp2716 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2716->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2716->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2718 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp2719 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp2720 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp2719);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2716, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp2718, $tmp2720);
    return $tmp2716;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2728;
    org$pandalanguage$pandac$IRNode* end2736;
    org$pandalanguage$pandac$IRNode* step2744;
    panda$collections$Array* children2754;
    panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp2721 = $tmp2722.value;
    if ($tmp2721) goto $l2723;
    panda$core$Bit $tmp2724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp2721 = $tmp2724.value;
    $l2723:;
    panda$core$Bit $tmp2725 = { $tmp2721 };
    PANDA_ASSERT($tmp2725.value);
    panda$core$Int64 $tmp2726 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp2727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2726, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2727.value);
    panda$core$Object* $tmp2729 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2729)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2730.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2731 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2731->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2731->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2733 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2731, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2733);
        start2728 = $tmp2731;
    }
    }
    else {
    {
        panda$core$Object* $tmp2734 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2735 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2734));
        start2728 = $tmp2735;
        if (((panda$core$Bit) { start2728 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2737)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2738.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2739 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2739->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2739->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2741 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2739, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2741);
        end2736 = $tmp2739;
    }
    }
    else {
    {
        panda$core$Object* $tmp2742 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp2743 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2742));
        end2736 = $tmp2743;
        if (((panda$core$Bit) { end2736 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2745 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2745)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2746.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2747 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2747->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2747->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2749 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2747, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp2749, ((panda$core$UInt64) { 1 }));
        step2744 = $tmp2747;
    }
    }
    else {
    {
        panda$core$Object* $tmp2750 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2751 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2750));
        org$pandalanguage$pandac$Type* $tmp2752 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2753 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2751, $tmp2752);
        step2744 = $tmp2753;
        if (((panda$core$Bit) { step2744 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp2755 = (panda$collections$Array*) malloc(40);
    $tmp2755->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2755->refCount.value = 1;
    panda$collections$Array$init($tmp2755);
    children2754 = $tmp2755;
    panda$collections$Array$add$panda$collections$Array$T(children2754, ((panda$core$Object*) start2728));
    panda$collections$Array$add$panda$collections$Array$T(children2754, ((panda$core$Object*) end2736));
    panda$collections$Array$add$panda$collections$Array$T(children2754, ((panda$core$Object*) step2744));
    org$pandalanguage$pandac$IRNode* $tmp2757 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2757->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2757->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2759 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2759->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2759->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2759, &$s2761, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp2762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2757, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp2759, ((panda$core$Object*) wrap_panda$core$Bit($tmp2762)), ((panda$collections$ListView*) children2754));
    return $tmp2757;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp2763 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2763->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2763->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2765 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2763, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp2765, ((panda$core$String*) p_s->payload));
    return $tmp2763;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type2770;
    org$pandalanguage$pandac$ClassDecl* cl2771;
    panda$collections$Array* subtypes2778;
    panda$core$MutableString* name2782;
    panda$core$String* separator2786;
    panda$collections$Iterator* p$Iter2788;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p2800;
    panda$collections$Array* pType2805;
    panda$core$String* pName2808;
    panda$core$Bit $tmp2766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp2766.value);
    panda$core$Object* $tmp2767 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2768 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2767)->annotations);
    if ($tmp2768.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2769);
        return NULL;
    }
    }
    panda$core$Object* $tmp2772 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2771 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2772);
    ITable* $tmp2773 = ((panda$collections$CollectionView*) cl2771->parameters)->$class->itable;
    while ($tmp2773->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2773 = $tmp2773->next;
    }
    $fn2775 $tmp2774 = $tmp2773->methods[0];
    panda$core$Int64 $tmp2776 = $tmp2774(((panda$collections$CollectionView*) cl2771->parameters));
    panda$core$Bit $tmp2777 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2776, ((panda$core$Int64) { 0 }));
    if ($tmp2777.value) {
    {
        panda$collections$Array* $tmp2779 = (panda$collections$Array*) malloc(40);
        $tmp2779->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2779->refCount.value = 1;
        panda$collections$Array$init($tmp2779);
        subtypes2778 = $tmp2779;
        org$pandalanguage$pandac$Type* $tmp2781 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2771);
        panda$collections$Array$add$panda$collections$Array$T(subtypes2778, ((panda$core$Object*) $tmp2781));
        panda$core$MutableString* $tmp2783 = (panda$core$MutableString*) malloc(40);
        $tmp2783->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp2783->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp2783, ((org$pandalanguage$pandac$Symbol*) cl2771)->name);
        name2782 = $tmp2783;
        panda$core$MutableString$append$panda$core$String(name2782, &$s2785);
        separator2786 = &$s2787;
        {
            ITable* $tmp2789 = ((panda$collections$Iterable*) cl2771->parameters)->$class->itable;
            while ($tmp2789->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2789 = $tmp2789->next;
            }
            $fn2791 $tmp2790 = $tmp2789->methods[0];
            panda$collections$Iterator* $tmp2792 = $tmp2790(((panda$collections$Iterable*) cl2771->parameters));
            p$Iter2788 = $tmp2792;
            $l2793:;
            ITable* $tmp2795 = p$Iter2788->$class->itable;
            while ($tmp2795->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2795 = $tmp2795->next;
            }
            $fn2797 $tmp2796 = $tmp2795->methods[0];
            panda$core$Bit $tmp2798 = $tmp2796(p$Iter2788);
            panda$core$Bit $tmp2799 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2798);
            if (!$tmp2799.value) goto $l2794;
            {
                ITable* $tmp2801 = p$Iter2788->$class->itable;
                while ($tmp2801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2801 = $tmp2801->next;
                }
                $fn2803 $tmp2802 = $tmp2801->methods[1];
                panda$core$Object* $tmp2804 = $tmp2802(p$Iter2788);
                p2800 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp2804);
                panda$collections$Array* $tmp2806 = (panda$collections$Array*) malloc(40);
                $tmp2806->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2806->refCount.value = 1;
                panda$collections$Array$init($tmp2806);
                pType2805 = $tmp2806;
                panda$collections$Array$add$panda$collections$Array$T(pType2805, ((panda$core$Object*) p2800->bound));
                panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2809, ((org$pandalanguage$pandac$Symbol*) cl2771)->name);
                panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2811);
                panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, ((org$pandalanguage$pandac$Symbol*) p2800)->name);
                panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
                pName2808 = $tmp2815;
                panda$core$MutableString$append$panda$core$String(name2782, separator2786);
                panda$core$MutableString$append$panda$core$String(name2782, pName2808);
                org$pandalanguage$pandac$Type* $tmp2816 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp2816->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2816->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2816, pName2808, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p2800)->offset, ((panda$collections$ListView*) pType2805), ((panda$core$Bit) { true }));
                panda$collections$Array$add$panda$collections$Array$T(subtypes2778, ((panda$core$Object*) $tmp2816));
                separator2786 = &$s2818;
            }
            goto $l2793;
            $l2794:;
        }
        panda$core$MutableString$append$panda$core$String(name2782, &$s2819);
        org$pandalanguage$pandac$Type* $tmp2820 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp2820->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp2820->refCount.value = 1;
        panda$core$String* $tmp2822 = panda$core$MutableString$convert$R$panda$core$String(name2782);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2820, $tmp2822, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes2778), ((panda$core$Bit) { true }));
        type2770 = $tmp2820;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2823 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2771);
        type2770 = $tmp2823;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2824 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2824->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2824->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2824, ((panda$core$Int64) { 1025 }), p_s->offset, type2770);
    return $tmp2824;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl2830;
    panda$core$Bit $tmp2826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp2826.value);
    panda$core$Object* $tmp2827 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2828 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2827)->annotations);
    if ($tmp2828.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2829);
        return NULL;
    }
    }
    panda$core$Object* $tmp2831 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2830 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2831);
    PANDA_ASSERT(cl2830->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp2832 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2832->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2832->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2832, ((panda$core$Int64) { 1024 }), p_s->offset, cl2830->rawSuper);
    return $tmp2832;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value2837;
    org$pandalanguage$pandac$Type* type2840;
    panda$core$Bit $tmp2834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp2834.value);
    panda$core$Int64 $tmp2835 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp2836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2835, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2836.value);
    panda$core$Object* $tmp2838 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2839 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2838));
    value2837 = $tmp2839;
    if (((panda$core$Bit) { value2837 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2841 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp2842 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp2841));
    org$pandalanguage$pandac$Type* $tmp2843 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp2842);
    type2840 = $tmp2843;
    panda$core$Int64$nullable $tmp2844 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value2837, type2840);
    if (((panda$core$Bit) { $tmp2844.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2845 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value2837, type2840);
        return $tmp2845;
    }
    }
    panda$core$Bit $tmp2846 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value2837, type2840);
    if ($tmp2846.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2847 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value2837, p_c->offset, ((panda$core$Bit) { true }), type2840);
        return $tmp2847;
    }
    }
    else {
    {
        panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2848, ((panda$core$Object*) value2837->type));
        panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, &$s2850);
        panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2852, ((panda$core$Object*) type2840));
        panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2854);
        panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, $tmp2855);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp2856);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp2857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp2857.value);
    org$pandalanguage$pandac$IRNode* $tmp2858 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2858->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2858->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2860 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2858, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp2860);
    return $tmp2858;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp2861 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2861;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp2862 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2862->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2862->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2864 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2862, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp2864, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp2862;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp2865 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2865;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp2866 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2866;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp2867 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2867;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp2868 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2868->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2868->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2870 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2868, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp2870, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp2868;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp2871 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2871;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp2872 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2872;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp2873 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2873;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp2874 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2874;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp2875 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2875;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp2876 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2876;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp2877 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2877;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp2878 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp2878;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols2880;
    panda$collections$Array* result2883;
    panda$collections$Iterator* stmt$Iter2886;
    org$pandalanguage$pandac$ASTNode* stmt2898;
    org$pandalanguage$pandac$IRNode* compiled2903;
    panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp2879.value);
    org$pandalanguage$pandac$SymbolTable* $tmp2881 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp2881->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp2881->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp2881, self->symbolTable);
    symbols2880 = $tmp2881;
    self->symbolTable = symbols2880;
    panda$collections$Array* $tmp2884 = (panda$collections$Array*) malloc(40);
    $tmp2884->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2884->refCount.value = 1;
    panda$collections$Array$init($tmp2884);
    result2883 = $tmp2884;
    {
        ITable* $tmp2887 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp2887->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2887 = $tmp2887->next;
        }
        $fn2889 $tmp2888 = $tmp2887->methods[0];
        panda$collections$Iterator* $tmp2890 = $tmp2888(((panda$collections$Iterable*) p_b->children));
        stmt$Iter2886 = $tmp2890;
        $l2891:;
        ITable* $tmp2893 = stmt$Iter2886->$class->itable;
        while ($tmp2893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2893 = $tmp2893->next;
        }
        $fn2895 $tmp2894 = $tmp2893->methods[0];
        panda$core$Bit $tmp2896 = $tmp2894(stmt$Iter2886);
        panda$core$Bit $tmp2897 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2896);
        if (!$tmp2897.value) goto $l2892;
        {
            ITable* $tmp2899 = stmt$Iter2886->$class->itable;
            while ($tmp2899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2899 = $tmp2899->next;
            }
            $fn2901 $tmp2900 = $tmp2899->methods[1];
            panda$core$Object* $tmp2902 = $tmp2900(stmt$Iter2886);
            stmt2898 = ((org$pandalanguage$pandac$ASTNode*) $tmp2902);
            org$pandalanguage$pandac$IRNode* $tmp2904 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt2898);
            compiled2903 = $tmp2904;
            if (((panda$core$Bit) { compiled2903 == NULL }).value) {
            {
                panda$core$Object* $tmp2905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols2880->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp2905);
                return NULL;
            }
            }
            panda$core$Bit $tmp2906 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled2903->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp2906.value);
            panda$collections$Array$add$panda$collections$Array$T(result2883, ((panda$core$Object*) compiled2903));
        }
        goto $l2891;
        $l2892:;
    }
    panda$core$Object* $tmp2907 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols2880->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp2907);
    org$pandalanguage$pandac$IRNode* $tmp2908 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2908->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2908->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2908, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result2883));
    return $tmp2908;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test2918;
    org$pandalanguage$pandac$IRNode* ifTrue2923;
    panda$collections$Array* children2926;
    org$pandalanguage$pandac$IRNode* ifFalse2931;
    panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp2910.value);
    panda$core$Int64 $tmp2912 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2912, ((panda$core$Int64) { 2 }));
    bool $tmp2911 = $tmp2913.value;
    if ($tmp2911) goto $l2914;
    panda$core$Int64 $tmp2915 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2915, ((panda$core$Int64) { 3 }));
    $tmp2911 = $tmp2916.value;
    $l2914:;
    panda$core$Bit $tmp2917 = { $tmp2911 };
    PANDA_ASSERT($tmp2917.value);
    panda$core$Object* $tmp2919 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2920 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2919));
    org$pandalanguage$pandac$Type* $tmp2921 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp2922 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2920, $tmp2921);
    test2918 = $tmp2922;
    if (((panda$core$Bit) { test2918 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2924 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2925 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2924));
    ifTrue2923 = $tmp2925;
    panda$collections$Array* $tmp2927 = (panda$collections$Array*) malloc(40);
    $tmp2927->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2927->refCount.value = 1;
    panda$collections$Array$init($tmp2927);
    children2926 = $tmp2927;
    panda$collections$Array$add$panda$collections$Array$T(children2926, ((panda$core$Object*) test2918));
    panda$collections$Array$add$panda$collections$Array$T(children2926, ((panda$core$Object*) ifTrue2923));
    panda$core$Int64 $tmp2929 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2929, ((panda$core$Int64) { 3 }));
    if ($tmp2930.value) {
    {
        panda$core$Object* $tmp2932 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2933 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2932));
        ifFalse2931 = $tmp2933;
        if (((panda$core$Bit) { ifFalse2931 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children2926, ((panda$core$Object*) ifFalse2931));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2934 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2934->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2934, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children2926));
    return $tmp2934;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType2936;
    org$pandalanguage$pandac$IRNode* list2937;
    org$pandalanguage$pandac$Type* t2944;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target2958;
    org$pandalanguage$pandac$IRNode* body2960;
    panda$collections$Array* children2962;
    panda$core$Bit $tmp2939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp2938 = $tmp2939.value;
    if (!$tmp2938) goto $l2940;
    panda$core$Int64 $tmp2941 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp2942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2941, ((panda$core$Int64) { 1 }));
    $tmp2938 = $tmp2942.value;
    $l2940:;
    panda$core$Bit $tmp2943 = { $tmp2938 };
    if ($tmp2943.value) {
    {
        panda$core$Object* $tmp2945 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp2946 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp2945));
        org$pandalanguage$pandac$Type* $tmp2947 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp2946);
        t2944 = $tmp2947;
        org$pandalanguage$pandac$Type* $tmp2948 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t2944);
        org$pandalanguage$pandac$IRNode* $tmp2949 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp2948);
        list2937 = $tmp2949;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2950 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list2937 = $tmp2950;
    }
    }
    if (((panda$core$Bit) { list2937 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list2937->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2951.value) {
    {
        panda$core$Object* $tmp2952 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2937->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2952)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp2953.value);
        panda$core$Object* $tmp2954 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2937->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp2955 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp2954)->subtypes, ((panda$core$Int64) { 1 }));
        elementType2936 = ((org$pandalanguage$pandac$Type*) $tmp2955);
    }
    }
    else {
    {
        panda$core$Bit $tmp2956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list2937->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp2956.value);
        panda$core$Object* $tmp2957 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2937->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType2936 = ((org$pandalanguage$pandac$Type*) $tmp2957);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp2959 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType2936);
    target2958 = $tmp2959;
    if (((panda$core$Bit) { target2958 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target2958->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp2961 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body2960 = $tmp2961;
    if (((panda$core$Bit) { body2960 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp2963 = (panda$collections$Array*) malloc(40);
    $tmp2963->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2963->refCount.value = 1;
    panda$collections$Array$init($tmp2963);
    children2962 = $tmp2963;
    panda$collections$Array$add$panda$collections$Array$T(children2962, ((panda$core$Object*) target2958->target));
    panda$collections$Array$add$panda$collections$Array$T(children2962, ((panda$core$Object*) list2937));
    panda$collections$Array$add$panda$collections$Array$T(children2962, ((panda$core$Object*) body2960));
    org$pandalanguage$pandac$IRNode* $tmp2965 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2965->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2965->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2965, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children2962));
    return $tmp2965;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target2974;
    org$pandalanguage$pandac$Variable* targetVar2978;
    panda$collections$Array* subtypes2979;
    org$pandalanguage$pandac$Type* iterType2983;
    org$pandalanguage$pandac$Variable* iter2995;
    panda$collections$Array* statements3000;
    panda$collections$Array* declChildren3003;
    panda$collections$Array* varChildren3008;
    panda$collections$Array* whileChildren3015;
    org$pandalanguage$pandac$IRNode* done3018;
    org$pandalanguage$pandac$IRNode* notCall3025;
    panda$collections$Array* valueDeclChildren3030;
    org$pandalanguage$pandac$IRNode* next3035;
    panda$collections$Array* valueVarChildren3042;
    org$pandalanguage$pandac$IRNode* block3047;
    panda$collections$Array* blockChildren3049;
    panda$core$Bit $tmp2968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp2967 = $tmp2968.value;
    if (!$tmp2967) goto $l2969;
    panda$core$Object* $tmp2970 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2971 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2972 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2970), $tmp2971);
    $tmp2967 = $tmp2972.value;
    $l2969:;
    panda$core$Bit $tmp2973 = { $tmp2967 };
    PANDA_ASSERT($tmp2973.value);
    panda$core$Object* $tmp2975 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp2976 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp2975));
    target2974 = $tmp2976;
    if (((panda$core$Bit) { target2974 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2974->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2977.value);
    targetVar2978 = ((org$pandalanguage$pandac$Variable*) target2974->target->payload);
    panda$collections$Array* $tmp2980 = (panda$collections$Array*) malloc(40);
    $tmp2980->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2980->refCount.value = 1;
    panda$collections$Array$init($tmp2980);
    subtypes2979 = $tmp2980;
    org$pandalanguage$pandac$Type* $tmp2982 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes2979, ((panda$core$Object*) $tmp2982));
    panda$collections$Array$add$panda$collections$Array$T(subtypes2979, ((panda$core$Object*) target2974->target->type));
    org$pandalanguage$pandac$Type* $tmp2984 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2984->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2984->refCount.value = 1;
    panda$core$Object* $tmp2987 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes2979, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2986, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp2987)));
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, &$s2989);
    panda$core$Object* $tmp2991 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes2979, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2990, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp2991)));
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, &$s2993);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2984, $tmp2994, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes2979), ((panda$core$Bit) { true }));
    iterType2983 = $tmp2984;
    org$pandalanguage$pandac$Variable* $tmp2996 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp2996->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp2996->refCount.value = 1;
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar2978)->name, &$s2998);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp2996, p_iterator->offset, ((panda$core$Int64) { 10001 }), $tmp2999, iterType2983);
    iter2995 = $tmp2996;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter2995));
    panda$collections$Array* $tmp3001 = (panda$collections$Array*) malloc(40);
    $tmp3001->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3001->refCount.value = 1;
    panda$collections$Array$init($tmp3001);
    statements3000 = $tmp3001;
    panda$collections$Array* $tmp3004 = (panda$collections$Array*) malloc(40);
    $tmp3004->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3004->refCount.value = 1;
    panda$collections$Array$init($tmp3004);
    declChildren3003 = $tmp3004;
    org$pandalanguage$pandac$IRNode* $tmp3006 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3006->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3006->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3006, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter2995->type, iter2995);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3003, ((panda$core$Object*) $tmp3006));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3003, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3009 = (panda$collections$Array*) malloc(40);
    $tmp3009->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3009->refCount.value = 1;
    panda$collections$Array$init($tmp3009);
    varChildren3008 = $tmp3009;
    org$pandalanguage$pandac$IRNode* $tmp3011 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3011->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3011, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter2995)->offset, ((panda$collections$ListView*) declChildren3003));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3008, ((panda$core$Object*) $tmp3011));
    org$pandalanguage$pandac$IRNode* $tmp3013 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3013->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3013->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3013, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter2995)->offset, ((panda$collections$ListView*) varChildren3008));
    panda$collections$Array$add$panda$collections$Array$T(statements3000, ((panda$core$Object*) $tmp3013));
    panda$collections$Array* $tmp3016 = (panda$collections$Array*) malloc(40);
    $tmp3016->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3016->refCount.value = 1;
    panda$collections$Array$init($tmp3016);
    whileChildren3015 = $tmp3016;
    org$pandalanguage$pandac$IRNode* $tmp3019 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3019->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3019->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3019, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter2995)->offset, iter2995->type, iter2995);
    panda$collections$Array* $tmp3022 = (panda$collections$Array*) malloc(40);
    $tmp3022->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3022->refCount.value = 1;
    panda$collections$Array$init($tmp3022);
    org$pandalanguage$pandac$IRNode* $tmp3024 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3019, &$s3021, ((panda$collections$ListView*) $tmp3022), NULL);
    done3018 = $tmp3024;
    if (((panda$core$Bit) { done3018 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3027 = (panda$collections$Array*) malloc(40);
    $tmp3027->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3027->refCount.value = 1;
    panda$collections$Array$init($tmp3027);
    org$pandalanguage$pandac$IRNode* $tmp3029 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3018, &$s3026, ((panda$collections$ListView*) $tmp3027), NULL);
    notCall3025 = $tmp3029;
    if (((panda$core$Bit) { notCall3025 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3015, ((panda$core$Object*) notCall3025));
    panda$collections$Array* $tmp3031 = (panda$collections$Array*) malloc(40);
    $tmp3031->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3031->refCount.value = 1;
    panda$collections$Array$init($tmp3031);
    valueDeclChildren3030 = $tmp3031;
    org$pandalanguage$pandac$IRNode* $tmp3033 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3033->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3033->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3033, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar2978->type, targetVar2978);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3030, ((panda$core$Object*) $tmp3033));
    org$pandalanguage$pandac$IRNode* $tmp3036 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3036->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3036->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3036, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter2995->type, iter2995);
    panda$collections$Array* $tmp3039 = (panda$collections$Array*) malloc(40);
    $tmp3039->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3039->refCount.value = 1;
    panda$collections$Array$init($tmp3039);
    org$pandalanguage$pandac$IRNode* $tmp3041 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3036, &$s3038, ((panda$collections$ListView*) $tmp3039), NULL);
    next3035 = $tmp3041;
    PANDA_ASSERT(((panda$core$Bit) { next3035 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3030, ((panda$core$Object*) next3035));
    panda$collections$Array* $tmp3043 = (panda$collections$Array*) malloc(40);
    $tmp3043->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3043->refCount.value = 1;
    panda$collections$Array$init($tmp3043);
    valueVarChildren3042 = $tmp3043;
    org$pandalanguage$pandac$IRNode* $tmp3045 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3045->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3045->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3045, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3030));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3042, ((panda$core$Object*) $tmp3045));
    org$pandalanguage$pandac$IRNode* $tmp3048 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3047 = $tmp3048;
    if (((panda$core$Bit) { block3047 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3050 = (panda$collections$Array*) malloc(40);
    $tmp3050->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3050->refCount.value = 1;
    panda$collections$Array$init($tmp3050);
    blockChildren3049 = $tmp3050;
    org$pandalanguage$pandac$IRNode* $tmp3052 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3052->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3052, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3042));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3049, ((panda$core$Object*) $tmp3052));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3049, ((panda$collections$CollectionView*) block3047->children));
    org$pandalanguage$pandac$IRNode* $tmp3054 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3054->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3054->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3054, ((panda$core$Int64) { 1000 }), block3047->offset, ((panda$collections$ListView*) blockChildren3049));
    block3047 = $tmp3054;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3015, ((panda$core$Object*) block3047));
    org$pandalanguage$pandac$IRNode* $tmp3056 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3056->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3056->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3056, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3015));
    panda$collections$Array$add$panda$collections$Array$T(statements3000, ((panda$core$Object*) $tmp3056));
    org$pandalanguage$pandac$IRNode* $tmp3058 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3058->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3058->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3058, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3000));
    return $tmp3058;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3063;
    org$pandalanguage$pandac$SymbolTable* symbols3066;
    org$pandalanguage$pandac$IRNode* result3069;
    panda$core$Bit found3079;
    panda$collections$Iterator* intf$Iter3080;
    org$pandalanguage$pandac$Type* intf3093;
    org$pandalanguage$pandac$IRNode* iterator3105;
    org$pandalanguage$pandac$IRNode* iterable3117;
    org$pandalanguage$pandac$IRNode* iterator3119;
    panda$core$Bit $tmp3060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3060.value);
    panda$core$Int64 $tmp3061 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3061, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3062.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3064 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3065 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3064));
    list3063 = $tmp3065;
    if (((panda$core$Bit) { list3063 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3067 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3067->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3067->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3067, self->symbolTable);
    symbols3066 = $tmp3067;
    self->symbolTable = symbols3066;
    panda$core$Bit $tmp3071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3063->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3070 = $tmp3071.value;
    if ($tmp3070) goto $l3072;
    panda$core$Bit $tmp3073 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3063->type);
    $tmp3070 = $tmp3073.value;
    $l3072:;
    panda$core$Bit $tmp3074 = { $tmp3070 };
    if ($tmp3074.value) {
    {
        panda$core$Object* $tmp3075 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3076 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3077 = org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3075), list3063, ((org$pandalanguage$pandac$ASTNode*) $tmp3076));
        result3069 = $tmp3077;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3078 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3063);
        list3063 = $tmp3078;
        if (((panda$core$Bit) { list3063 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3079 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3081 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3063->type);
            ITable* $tmp3082 = ((panda$collections$Iterable*) $tmp3081)->$class->itable;
            while ($tmp3082->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3082 = $tmp3082->next;
            }
            $fn3084 $tmp3083 = $tmp3082->methods[0];
            panda$collections$Iterator* $tmp3085 = $tmp3083(((panda$collections$Iterable*) $tmp3081));
            intf$Iter3080 = $tmp3085;
            $l3086:;
            ITable* $tmp3088 = intf$Iter3080->$class->itable;
            while ($tmp3088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3088 = $tmp3088->next;
            }
            $fn3090 $tmp3089 = $tmp3088->methods[0];
            panda$core$Bit $tmp3091 = $tmp3089(intf$Iter3080);
            panda$core$Bit $tmp3092 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3091);
            if (!$tmp3092.value) goto $l3087;
            {
                ITable* $tmp3094 = intf$Iter3080->$class->itable;
                while ($tmp3094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3094 = $tmp3094->next;
                }
                $fn3096 $tmp3095 = $tmp3094->methods[1];
                panda$core$Object* $tmp3097 = $tmp3095(intf$Iter3080);
                intf3093 = ((org$pandalanguage$pandac$Type*) $tmp3097);
                panda$core$Bit $tmp3099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3093->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3098 = $tmp3099.value;
                if (!$tmp3098) goto $l3100;
                panda$core$Object* $tmp3101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3093->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3102 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3103 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3101), $tmp3102);
                $tmp3098 = $tmp3103.value;
                $l3100:;
                panda$core$Bit $tmp3104 = { $tmp3098 };
                if ($tmp3104.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3106 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3063, intf3093);
                    iterator3105 = $tmp3106;
                    panda$core$Object* $tmp3107 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3108 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3109 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3107), iterator3105, ((org$pandalanguage$pandac$ASTNode*) $tmp3108));
                    result3069 = $tmp3109;
                    found3079 = ((panda$core$Bit) { true });
                    goto $l3087;
                }
                }
                panda$core$Bit $tmp3111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3093->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3110 = $tmp3111.value;
                if (!$tmp3110) goto $l3112;
                panda$core$Object* $tmp3113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3093->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3114 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3115 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3113), $tmp3114);
                $tmp3110 = $tmp3115.value;
                $l3112:;
                panda$core$Bit $tmp3116 = { $tmp3110 };
                if ($tmp3116.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3118 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3063, intf3093);
                    iterable3117 = $tmp3118;
                    panda$collections$Array* $tmp3121 = (panda$collections$Array*) malloc(40);
                    $tmp3121->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3121->refCount.value = 1;
                    panda$collections$Array$init($tmp3121);
                    org$pandalanguage$pandac$IRNode* $tmp3123 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3117, &$s3120, ((panda$collections$ListView*) $tmp3121));
                    iterator3119 = $tmp3123;
                    panda$core$Object* $tmp3124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3125 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3126 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3124), iterator3119, ((org$pandalanguage$pandac$ASTNode*) $tmp3125));
                    result3069 = $tmp3126;
                    found3079 = ((panda$core$Bit) { true });
                    goto $l3087;
                }
                }
            }
            goto $l3086;
            $l3087:;
        }
    }
    }
    panda$core$Object* $tmp3127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3066->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3127);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3069;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3131;
    org$pandalanguage$pandac$IRNode* stmt3136;
    panda$collections$Array* children3139;
    panda$core$Bit $tmp3128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3128.value);
    panda$core$Int64 $tmp3129 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3129, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3130.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3132 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3133 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3132));
    org$pandalanguage$pandac$Type* $tmp3134 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3135 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3133, $tmp3134);
    test3131 = $tmp3135;
    if (((panda$core$Bit) { test3131 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3137 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3138 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3137));
    stmt3136 = $tmp3138;
    if (((panda$core$Bit) { stmt3136 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3140 = (panda$collections$Array*) malloc(40);
    $tmp3140->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3140->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3140, ((panda$core$Int64) { 2 }));
    children3139 = $tmp3140;
    panda$collections$Array$add$panda$collections$Array$T(children3139, ((panda$core$Object*) test3131));
    panda$collections$Array$add$panda$collections$Array$T(children3139, ((panda$core$Object*) stmt3136));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3142 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3142->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3142->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3142, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3139));
    return $tmp3142;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3147;
    org$pandalanguage$pandac$IRNode* test3150;
    panda$collections$Array* children3155;
    panda$core$Bit $tmp3144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3144.value);
    panda$core$Int64 $tmp3145 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3145, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3146.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3148 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3149 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3148));
    stmt3147 = $tmp3149;
    if (((panda$core$Bit) { stmt3147 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3152 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3151));
    org$pandalanguage$pandac$Type* $tmp3153 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3154 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3152, $tmp3153);
    test3150 = $tmp3154;
    if (((panda$core$Bit) { test3150 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3156 = (panda$collections$Array*) malloc(40);
    $tmp3156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3156->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3156, ((panda$core$Int64) { 2 }));
    children3155 = $tmp3156;
    panda$collections$Array$add$panda$collections$Array$T(children3155, ((panda$core$Object*) stmt3147));
    panda$collections$Array$add$panda$collections$Array$T(children3155, ((panda$core$Object*) test3150));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3158 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3158->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3158, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3155));
    return $tmp3158;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3163;
    panda$collections$Array* children3166;
    panda$core$Bit $tmp3160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3160.value);
    panda$core$Int64 $tmp3161 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3161, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3162.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3164 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3165 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3164));
    stmt3163 = $tmp3165;
    if (((panda$core$Bit) { stmt3163 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3167 = (panda$collections$Array*) malloc(40);
    $tmp3167->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3167->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3167, ((panda$core$Int64) { 1 }));
    children3166 = $tmp3167;
    panda$collections$Array$add$panda$collections$Array$T(children3166, ((panda$core$Object*) stmt3163));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3169 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3169->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3169->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3169, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3166));
    return $tmp3169;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3171;
    org$pandalanguage$pandac$Type* type3175;
    org$pandalanguage$pandac$Variable* v3186;
    value3171 = p_rawValue;
    bool $tmp3172 = ((panda$core$Bit) { value3171 == NULL }).value;
    if ($tmp3172) goto $l3173;
    $tmp3172 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3173:;
    panda$core$Bit $tmp3174 = { $tmp3172 };
    PANDA_ASSERT($tmp3174.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3176 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3176, ((panda$core$Int64) { 1 }));
            if ($tmp3177.value) {
            {
                panda$core$Object* $tmp3178 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3179 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3178));
                org$pandalanguage$pandac$Type* $tmp3180 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp3179);
                type3175 = $tmp3180;
            }
            }
            else {
            if (((panda$core$Bit) { value3171 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3181 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3171);
                value3171 = $tmp3181;
                if (((panda$core$Bit) { value3171 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3182 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3171);
                type3175 = $tmp3182;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3175 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_t->offset, &$s3183);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3171 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3184 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3171, type3175);
                value3171 = $tmp3184;
                if (((panda$core$Bit) { value3171 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3185 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3171->type, type3175);
                PANDA_ASSERT($tmp3185.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3187 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp3187->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3187->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3187, p_t->offset, p_kind, ((panda$core$String*) p_t->payload), type3175);
            v3186 = $tmp3187;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3186));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3189 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3189->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3189->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3191 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3191->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3191->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3191, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3186)->offset, v3186->type, v3186);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3189, $tmp3191, value3171);
            return $tmp3189;
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
    org$pandalanguage$pandac$IRNode* value3201;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3206;
    panda$collections$Array* children3209;
    org$pandalanguage$pandac$Variable* v3213;
    panda$core$Bit $tmp3193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3193.value);
    panda$core$Int64 $tmp3195 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3195, ((panda$core$Int64) { 1 }));
    bool $tmp3194 = $tmp3196.value;
    if ($tmp3194) goto $l3197;
    panda$core$Int64 $tmp3198 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3198, ((panda$core$Int64) { 2 }));
    $tmp3194 = $tmp3199.value;
    $l3197:;
    panda$core$Bit $tmp3200 = { $tmp3194 };
    PANDA_ASSERT($tmp3200.value);
    panda$core$Int64 $tmp3202 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3202, ((panda$core$Int64) { 2 }));
    if ($tmp3203.value) {
    {
        panda$core$Object* $tmp3204 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3205 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3204));
        value3201 = $tmp3205;
        if (((panda$core$Bit) { value3201 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3201 = NULL;
    }
    }
    panda$core$Object* $tmp3207 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3208 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3207), p_varKind, value3201, NULL);
    target3206 = $tmp3208;
    if (((panda$core$Bit) { target3206 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3210 = (panda$collections$Array*) malloc(40);
    $tmp3210->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3210->refCount.value = 1;
    panda$collections$Array$init($tmp3210);
    children3209 = $tmp3210;
    panda$collections$Array$add$panda$collections$Array$T(children3209, ((panda$core$Object*) target3206->target));
    if (((panda$core$Bit) { target3206->value != NULL }).value) {
    {
        panda$core$Bit $tmp3212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3206->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3212.value);
        v3213 = ((org$pandalanguage$pandac$Variable*) target3206->target->payload);
        v3213->initialValue = target3206->value;
        panda$collections$Array$add$panda$collections$Array$T(children3209, ((panda$core$Object*) target3206->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3214 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3214->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3214->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3214, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children3209));
    return $tmp3214;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3217;
    panda$collections$Iterator* label$Iter3218;
    panda$core$String* label3230;
    panda$core$Bit $tmp3216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3216.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3217 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3219 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3219->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3219 = $tmp3219->next;
            }
            $fn3221 $tmp3220 = $tmp3219->methods[0];
            panda$collections$Iterator* $tmp3222 = $tmp3220(((panda$collections$Iterable*) self->loops));
            label$Iter3218 = $tmp3222;
            $l3223:;
            ITable* $tmp3225 = label$Iter3218->$class->itable;
            while ($tmp3225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3225 = $tmp3225->next;
            }
            $fn3227 $tmp3226 = $tmp3225->methods[0];
            panda$core$Bit $tmp3228 = $tmp3226(label$Iter3218);
            panda$core$Bit $tmp3229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3228);
            if (!$tmp3229.value) goto $l3224;
            {
                ITable* $tmp3231 = label$Iter3218->$class->itable;
                while ($tmp3231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3231 = $tmp3231->next;
                }
                $fn3233 $tmp3232 = $tmp3231->methods[1];
                panda$core$Object* $tmp3234 = $tmp3232(label$Iter3218);
                label3230 = ((panda$core$String*) $tmp3234);
                bool $tmp3235 = ((panda$core$Bit) { label3230 != NULL }).value;
                if (!$tmp3235) goto $l3236;
                panda$core$Bit $tmp3237 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3230, ((panda$core$String*) p_b->payload));
                $tmp3235 = $tmp3237.value;
                $l3236:;
                panda$core$Bit $tmp3238 = { $tmp3235 };
                if ($tmp3238.value) {
                {
                    found3217 = ((panda$core$Bit) { true });
                    goto $l3224;
                }
                }
            }
            goto $l3223;
            $l3224:;
        }
        panda$core$Bit $tmp3239 = panda$core$Bit$$NOT$R$panda$core$Bit(found3217);
        if ($tmp3239.value) {
        {
            panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3240, p_b->payload);
            panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
            panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3244, p_b->payload);
            panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, &$s3246);
            panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, $tmp3247);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, $tmp3248);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3249 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3249, ((panda$core$Int64) { 0 }));
    if ($tmp3250.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, &$s3251);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3252 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3252->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3252->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3252, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp3252;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3255;
    panda$collections$Iterator* label$Iter3256;
    panda$core$String* label3268;
    panda$core$Bit $tmp3254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3254.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3255 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3257 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3257->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3257 = $tmp3257->next;
            }
            $fn3259 $tmp3258 = $tmp3257->methods[0];
            panda$collections$Iterator* $tmp3260 = $tmp3258(((panda$collections$Iterable*) self->loops));
            label$Iter3256 = $tmp3260;
            $l3261:;
            ITable* $tmp3263 = label$Iter3256->$class->itable;
            while ($tmp3263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3263 = $tmp3263->next;
            }
            $fn3265 $tmp3264 = $tmp3263->methods[0];
            panda$core$Bit $tmp3266 = $tmp3264(label$Iter3256);
            panda$core$Bit $tmp3267 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3266);
            if (!$tmp3267.value) goto $l3262;
            {
                ITable* $tmp3269 = label$Iter3256->$class->itable;
                while ($tmp3269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3269 = $tmp3269->next;
                }
                $fn3271 $tmp3270 = $tmp3269->methods[1];
                panda$core$Object* $tmp3272 = $tmp3270(label$Iter3256);
                label3268 = ((panda$core$String*) $tmp3272);
                bool $tmp3273 = ((panda$core$Bit) { label3268 != NULL }).value;
                if (!$tmp3273) goto $l3274;
                panda$core$Bit $tmp3275 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3268, ((panda$core$String*) p_c->payload));
                $tmp3273 = $tmp3275.value;
                $l3274:;
                panda$core$Bit $tmp3276 = { $tmp3273 };
                if ($tmp3276.value) {
                {
                    found3255 = ((panda$core$Bit) { true });
                    goto $l3262;
                }
                }
            }
            goto $l3261;
            $l3262:;
        }
        panda$core$Bit $tmp3277 = panda$core$Bit$$NOT$R$panda$core$Bit(found3255);
        if ($tmp3277.value) {
        {
            panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3278, p_c->payload);
            panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
            panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3282, p_c->payload);
            panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
            panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, $tmp3285);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3286);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3287 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3287, ((panda$core$Int64) { 0 }));
    if ($tmp3288.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, &$s3289);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3290 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3290->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3290->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3290, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp3290;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3299;
    panda$collections$Array* children3304;
    panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3292.value);
    panda$core$Int64 $tmp3293 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3293, ((panda$core$Int64) { 1 }));
    if ($tmp3294.value) {
    {
        panda$core$Object* $tmp3295 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3296 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3297 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3295)->returnType, $tmp3296);
        if ($tmp3297.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3298);
            return NULL;
        }
        }
        panda$core$Object* $tmp3300 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3301 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3300));
        panda$core$Object* $tmp3302 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3303 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3301, ((org$pandalanguage$pandac$MethodDecl*) $tmp3302)->returnType);
        value3299 = $tmp3303;
        if (((panda$core$Bit) { value3299 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3305 = (panda$collections$Array*) malloc(40);
        $tmp3305->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3305->refCount.value = 1;
        panda$collections$Array$init($tmp3305);
        children3304 = $tmp3305;
        panda$collections$Array$add$panda$collections$Array$T(children3304, ((panda$core$Object*) value3299));
        org$pandalanguage$pandac$IRNode* $tmp3307 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3307->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3307->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3307, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children3304));
        return $tmp3307;
    }
    }
    panda$core$Int64 $tmp3309 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3309, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3310.value);
    panda$core$Object* $tmp3311 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3312 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3313 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3311)->returnType, $tmp3312);
    if ($tmp3313.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3314);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3315 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3315->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3315->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp3315, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp3315;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3325;
    org$pandalanguage$pandac$ClassDecl* bit3330;
    org$pandalanguage$pandac$Symbol* value3333;
    panda$collections$Array* fieldChildren3336;
    panda$collections$Array* children3342;
    org$pandalanguage$pandac$IRNode* msg3347;
    panda$core$Bit $tmp3317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3317.value);
    panda$core$Int64 $tmp3319 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3319, ((panda$core$Int64) { 1 }));
    bool $tmp3318 = $tmp3320.value;
    if ($tmp3318) goto $l3321;
    panda$core$Int64 $tmp3322 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3322, ((panda$core$Int64) { 2 }));
    $tmp3318 = $tmp3323.value;
    $l3321:;
    panda$core$Bit $tmp3324 = { $tmp3318 };
    PANDA_ASSERT($tmp3324.value);
    panda$core$Object* $tmp3326 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3327 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3326));
    test3325 = $tmp3327;
    if (((panda$core$Bit) { test3325 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3328 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3329 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3325, $tmp3328);
    test3325 = $tmp3329;
    if (((panda$core$Bit) { test3325 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3331 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3332 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3331);
    bit3330 = $tmp3332;
    PANDA_ASSERT(((panda$core$Bit) { bit3330 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3335 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3330->symbolTable, &$s3334);
    value3333 = $tmp3335;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3333));
    panda$collections$Array* $tmp3337 = (panda$collections$Array*) malloc(40);
    $tmp3337->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3337->refCount.value = 1;
    panda$collections$Array$init($tmp3337);
    fieldChildren3336 = $tmp3337;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3336, ((panda$core$Object*) test3325));
    org$pandalanguage$pandac$IRNode* $tmp3339 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3339->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3339->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3341 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3339, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp3341, ((panda$core$Object*) value3333), ((panda$collections$ListView*) fieldChildren3336));
    test3325 = $tmp3339;
    panda$collections$Array* $tmp3343 = (panda$collections$Array*) malloc(40);
    $tmp3343->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3343->refCount.value = 1;
    panda$collections$Array$init($tmp3343);
    children3342 = $tmp3343;
    panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) test3325));
    panda$core$Int64 $tmp3345 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3345, ((panda$core$Int64) { 2 }));
    if ($tmp3346.value) {
    {
        panda$core$Object* $tmp3348 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3349 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3348));
        msg3347 = $tmp3349;
        if (((panda$core$Bit) { msg3347 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3350 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3351 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3347, $tmp3350);
        msg3347 = $tmp3351;
        if (((panda$core$Bit) { msg3347 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) msg3347));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3352 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3352->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3352->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3352, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children3342));
    return $tmp3352;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3367;
    panda$core$Int64 varKind3368;
    panda$collections$Array* decls3369;
    panda$collections$Iterator* astDecl$Iter3372;
    org$pandalanguage$pandac$ASTNode* astDecl3384;
    org$pandalanguage$pandac$IRNode* decl3389;
    panda$core$Bit $tmp3357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3356 = $tmp3357.value;
    if ($tmp3356) goto $l3358;
    panda$core$Bit $tmp3359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3356 = $tmp3359.value;
    $l3358:;
    panda$core$Bit $tmp3360 = { $tmp3356 };
    bool $tmp3355 = $tmp3360.value;
    if ($tmp3355) goto $l3361;
    panda$core$Bit $tmp3362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3355 = $tmp3362.value;
    $l3361:;
    panda$core$Bit $tmp3363 = { $tmp3355 };
    bool $tmp3354 = $tmp3363.value;
    if ($tmp3354) goto $l3364;
    panda$core$Bit $tmp3365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3354 = $tmp3365.value;
    $l3364:;
    panda$core$Bit $tmp3366 = { $tmp3354 };
    PANDA_ASSERT($tmp3366.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3367 = ((panda$core$Int64) { 1017 });
            varKind3368 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3367 = ((panda$core$Int64) { 1018 });
            varKind3368 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3367 = ((panda$core$Int64) { 1019 });
            varKind3368 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3367 = ((panda$core$Int64) { 1020 });
            varKind3368 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3370 = (panda$collections$Array*) malloc(40);
    $tmp3370->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3370->refCount.value = 1;
    panda$collections$Array$init($tmp3370);
    decls3369 = $tmp3370;
    {
        ITable* $tmp3373 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3373->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3373 = $tmp3373->next;
        }
        $fn3375 $tmp3374 = $tmp3373->methods[0];
        panda$collections$Iterator* $tmp3376 = $tmp3374(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3372 = $tmp3376;
        $l3377:;
        ITable* $tmp3379 = astDecl$Iter3372->$class->itable;
        while ($tmp3379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3379 = $tmp3379->next;
        }
        $fn3381 $tmp3380 = $tmp3379->methods[0];
        panda$core$Bit $tmp3382 = $tmp3380(astDecl$Iter3372);
        panda$core$Bit $tmp3383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3382);
        if (!$tmp3383.value) goto $l3378;
        {
            ITable* $tmp3385 = astDecl$Iter3372->$class->itable;
            while ($tmp3385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3385 = $tmp3385->next;
            }
            $fn3387 $tmp3386 = $tmp3385->methods[1];
            panda$core$Object* $tmp3388 = $tmp3386(astDecl$Iter3372);
            astDecl3384 = ((org$pandalanguage$pandac$ASTNode*) $tmp3388);
            org$pandalanguage$pandac$IRNode* $tmp3390 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3384, varKind3368);
            decl3389 = $tmp3390;
            if (((panda$core$Bit) { decl3389 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3369, ((panda$core$Object*) decl3389));
        }
        goto $l3377;
        $l3378:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3391 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3391->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3391->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3391, nodeKind3367, p_v->offset, ((panda$collections$ListView*) decls3369));
    return $tmp3391;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3393;
    panda$collections$Array* callChildren3396;
    org$pandalanguage$pandac$IRNode* testValue3399;
    org$pandalanguage$pandac$IRNode* $tmp3394 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3394->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3394, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target3393 = $tmp3394;
    panda$collections$Array* $tmp3397 = (panda$collections$Array*) malloc(40);
    $tmp3397->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3397->refCount.value = 1;
    panda$collections$Array$init($tmp3397);
    callChildren3396 = $tmp3397;
    org$pandalanguage$pandac$IRNode* $tmp3400 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3399 = $tmp3400;
    if (((panda$core$Bit) { testValue3399 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3396, ((panda$core$Object*) testValue3399));
    org$pandalanguage$pandac$IRNode* $tmp3402 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3393, &$s3401, ((panda$collections$ListView*) callChildren3396));
    return $tmp3402;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3411;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3415;
    org$pandalanguage$pandac$IRNode* nextTest3436;
    panda$collections$Array* callChildren3440;
    panda$collections$Array* statements3458;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3461;
    org$pandalanguage$pandac$IRNode* statement3481;
    panda$collections$Array* children3496;
    panda$core$Bit $tmp3403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3403.value);
    panda$core$Int64 $tmp3404 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3405 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3404, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3405.value);
    panda$core$Object* $tmp3406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3406)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3407.value);
    panda$core$Object* $tmp3408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3409 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3408)->children);
    panda$core$Bit $tmp3410 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3409, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3410.value);
    panda$core$Object* $tmp3412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3412)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3414 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3413));
    test3411 = $tmp3414;
    if (((panda$core$Bit) { test3411 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3416 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3417 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3416)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3415, ((panda$core$Int64) { 1 }), $tmp3417, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3419 = $tmp3415.start.value;
    panda$core$Int64 i3418 = { $tmp3419 };
    int64_t $tmp3421 = $tmp3415.end.value;
    int64_t $tmp3422 = $tmp3415.step.value;
    bool $tmp3423 = $tmp3415.inclusive.value;
    bool $tmp3430 = $tmp3422 > 0;
    if ($tmp3430) goto $l3428; else goto $l3429;
    $l3428:;
    if ($tmp3423) goto $l3431; else goto $l3432;
    $l3431:;
    if ($tmp3419 <= $tmp3421) goto $l3424; else goto $l3426;
    $l3432:;
    if ($tmp3419 < $tmp3421) goto $l3424; else goto $l3426;
    $l3429:;
    if ($tmp3423) goto $l3433; else goto $l3434;
    $l3433:;
    if ($tmp3419 >= $tmp3421) goto $l3424; else goto $l3426;
    $l3434:;
    if ($tmp3419 > $tmp3421) goto $l3424; else goto $l3426;
    $l3424:;
    {
        panda$core$Object* $tmp3437 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3438 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3437)->children, i3418);
        org$pandalanguage$pandac$IRNode* $tmp3439 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3438));
        nextTest3436 = $tmp3439;
        if (((panda$core$Bit) { nextTest3436 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3441 = (panda$collections$Array*) malloc(40);
        $tmp3441->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3441->refCount.value = 1;
        panda$collections$Array$init($tmp3441);
        callChildren3440 = $tmp3441;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3440, ((panda$core$Object*) nextTest3436));
        org$pandalanguage$pandac$IRNode* $tmp3444 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3411, &$s3443, ((panda$collections$ListView*) callChildren3440));
        test3411 = $tmp3444;
        if (((panda$core$Bit) { test3411 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3427:;
    if ($tmp3430) goto $l3446; else goto $l3447;
    $l3446:;
    int64_t $tmp3448 = $tmp3421 - i3418.value;
    if ($tmp3423) goto $l3449; else goto $l3450;
    $l3449:;
    if ($tmp3448 >= $tmp3422) goto $l3445; else goto $l3426;
    $l3450:;
    if ($tmp3448 > $tmp3422) goto $l3445; else goto $l3426;
    $l3447:;
    int64_t $tmp3452 = i3418.value - $tmp3421;
    if ($tmp3423) goto $l3453; else goto $l3454;
    $l3453:;
    if ($tmp3452 >= -$tmp3422) goto $l3445; else goto $l3426;
    $l3454:;
    if ($tmp3452 > -$tmp3422) goto $l3445; else goto $l3426;
    $l3445:;
    i3418.value += $tmp3422;
    goto $l3424;
    $l3426:;
    org$pandalanguage$pandac$SymbolTable* $tmp3456 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3456->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3456->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3456, self->symbolTable);
    self->symbolTable = $tmp3456;
    panda$collections$Array* $tmp3459 = (panda$collections$Array*) malloc(40);
    $tmp3459->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3459->refCount.value = 1;
    panda$collections$Array$init($tmp3459);
    statements3458 = $tmp3459;
    panda$core$Int64 $tmp3462 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3461, ((panda$core$Int64) { 1 }), $tmp3462, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3464 = $tmp3461.start.value;
    panda$core$Int64 i3463 = { $tmp3464 };
    int64_t $tmp3466 = $tmp3461.end.value;
    int64_t $tmp3467 = $tmp3461.step.value;
    bool $tmp3468 = $tmp3461.inclusive.value;
    bool $tmp3475 = $tmp3467 > 0;
    if ($tmp3475) goto $l3473; else goto $l3474;
    $l3473:;
    if ($tmp3468) goto $l3476; else goto $l3477;
    $l3476:;
    if ($tmp3464 <= $tmp3466) goto $l3469; else goto $l3471;
    $l3477:;
    if ($tmp3464 < $tmp3466) goto $l3469; else goto $l3471;
    $l3474:;
    if ($tmp3468) goto $l3478; else goto $l3479;
    $l3478:;
    if ($tmp3464 >= $tmp3466) goto $l3469; else goto $l3471;
    $l3479:;
    if ($tmp3464 > $tmp3466) goto $l3469; else goto $l3471;
    $l3469:;
    {
        panda$core$Object* $tmp3482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3463);
        org$pandalanguage$pandac$IRNode* $tmp3483 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3482));
        statement3481 = $tmp3483;
        if (((panda$core$Bit) { statement3481 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3458, ((panda$core$Object*) statement3481));
    }
    $l3472:;
    if ($tmp3475) goto $l3485; else goto $l3486;
    $l3485:;
    int64_t $tmp3487 = $tmp3466 - i3463.value;
    if ($tmp3468) goto $l3488; else goto $l3489;
    $l3488:;
    if ($tmp3487 >= $tmp3467) goto $l3484; else goto $l3471;
    $l3489:;
    if ($tmp3487 > $tmp3467) goto $l3484; else goto $l3471;
    $l3486:;
    int64_t $tmp3491 = i3463.value - $tmp3466;
    if ($tmp3468) goto $l3492; else goto $l3493;
    $l3492:;
    if ($tmp3491 >= -$tmp3467) goto $l3484; else goto $l3471;
    $l3493:;
    if ($tmp3491 > -$tmp3467) goto $l3484; else goto $l3471;
    $l3484:;
    i3463.value += $tmp3467;
    goto $l3469;
    $l3471:;
    panda$core$Object* $tmp3495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3495);
    panda$collections$Array* $tmp3497 = (panda$collections$Array*) malloc(40);
    $tmp3497->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3497->refCount.value = 1;
    panda$collections$Array$init($tmp3497);
    children3496 = $tmp3497;
    panda$collections$Array$add$panda$collections$Array$T(children3496, ((panda$core$Object*) test3411));
    org$pandalanguage$pandac$IRNode* $tmp3499 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3499->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3499->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3499, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3458));
    panda$collections$Array$add$panda$collections$Array$T(children3496, ((panda$core$Object*) $tmp3499));
    org$pandalanguage$pandac$IRNode* $tmp3501 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3501->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3501->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3501, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children3496));
    return $tmp3501;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3503;
    org$pandalanguage$pandac$Variable* valueVar3506;
    panda$collections$Array* declChildren3513;
    panda$collections$Array* varChildren3518;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3525;
    org$pandalanguage$pandac$ASTNode* c3545;
    org$pandalanguage$pandac$IRNode* w3547;
    panda$collections$Array* statements3549;
    panda$collections$Iterator* astStatement$Iter3552;
    org$pandalanguage$pandac$ASTNode* astStatement3564;
    org$pandalanguage$pandac$IRNode* stmt3569;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3584;
    panda$collections$Array* $tmp3504 = (panda$collections$Array*) malloc(40);
    $tmp3504->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3504->refCount.value = 1;
    panda$collections$Array$init($tmp3504);
    children3503 = $tmp3504;
    org$pandalanguage$pandac$Variable* $tmp3507 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3507->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3507->refCount.value = 1;
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3509, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, &$s3511);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3507, p_m->offset, ((panda$core$Int64) { 10001 }), $tmp3512, p_value->type);
    valueVar3506 = $tmp3507;
    panda$collections$Array* $tmp3514 = (panda$collections$Array*) malloc(40);
    $tmp3514->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3514->refCount.value = 1;
    panda$collections$Array$init($tmp3514);
    declChildren3513 = $tmp3514;
    org$pandalanguage$pandac$IRNode* $tmp3516 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3516->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3516->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3516, ((panda$core$Int64) { 1016 }), p_value->offset, valueVar3506->type, valueVar3506);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3513, ((panda$core$Object*) $tmp3516));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3513, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3519 = (panda$collections$Array*) malloc(40);
    $tmp3519->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3519->refCount.value = 1;
    panda$collections$Array$init($tmp3519);
    varChildren3518 = $tmp3519;
    org$pandalanguage$pandac$IRNode* $tmp3521 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3521->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3521->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3521, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3506)->offset, ((panda$collections$ListView*) declChildren3513));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3518, ((panda$core$Object*) $tmp3521));
    org$pandalanguage$pandac$IRNode* $tmp3523 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3523->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3523->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3523, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3506)->offset, ((panda$collections$ListView*) varChildren3518));
    panda$collections$Array$add$panda$collections$Array$T(children3503, ((panda$core$Object*) $tmp3523));
    panda$core$Int64 $tmp3526 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3525, ((panda$core$Int64) { 1 }), $tmp3526, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3528 = $tmp3525.start.value;
    panda$core$Int64 i3527 = { $tmp3528 };
    int64_t $tmp3530 = $tmp3525.end.value;
    int64_t $tmp3531 = $tmp3525.step.value;
    bool $tmp3532 = $tmp3525.inclusive.value;
    bool $tmp3539 = $tmp3531 > 0;
    if ($tmp3539) goto $l3537; else goto $l3538;
    $l3537:;
    if ($tmp3532) goto $l3540; else goto $l3541;
    $l3540:;
    if ($tmp3528 <= $tmp3530) goto $l3533; else goto $l3535;
    $l3541:;
    if ($tmp3528 < $tmp3530) goto $l3533; else goto $l3535;
    $l3538:;
    if ($tmp3532) goto $l3542; else goto $l3543;
    $l3542:;
    if ($tmp3528 >= $tmp3530) goto $l3533; else goto $l3535;
    $l3543:;
    if ($tmp3528 > $tmp3530) goto $l3533; else goto $l3535;
    $l3533:;
    {
        panda$core$Object* $tmp3546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3527);
        c3545 = ((org$pandalanguage$pandac$ASTNode*) $tmp3546);
        switch (c3545->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3548 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3506, c3545);
                w3547 = $tmp3548;
                if (((panda$core$Bit) { w3547 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3503, ((panda$core$Object*) w3547));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3550 = (panda$collections$Array*) malloc(40);
                $tmp3550->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3550->refCount.value = 1;
                panda$collections$Array$init($tmp3550);
                statements3549 = $tmp3550;
                {
                    ITable* $tmp3553 = ((panda$collections$Iterable*) c3545->children)->$class->itable;
                    while ($tmp3553->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3553 = $tmp3553->next;
                    }
                    $fn3555 $tmp3554 = $tmp3553->methods[0];
                    panda$collections$Iterator* $tmp3556 = $tmp3554(((panda$collections$Iterable*) c3545->children));
                    astStatement$Iter3552 = $tmp3556;
                    $l3557:;
                    ITable* $tmp3559 = astStatement$Iter3552->$class->itable;
                    while ($tmp3559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3559 = $tmp3559->next;
                    }
                    $fn3561 $tmp3560 = $tmp3559->methods[0];
                    panda$core$Bit $tmp3562 = $tmp3560(astStatement$Iter3552);
                    panda$core$Bit $tmp3563 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3562);
                    if (!$tmp3563.value) goto $l3558;
                    {
                        ITable* $tmp3565 = astStatement$Iter3552->$class->itable;
                        while ($tmp3565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3565 = $tmp3565->next;
                        }
                        $fn3567 $tmp3566 = $tmp3565->methods[1];
                        panda$core$Object* $tmp3568 = $tmp3566(astStatement$Iter3552);
                        astStatement3564 = ((org$pandalanguage$pandac$ASTNode*) $tmp3568);
                        org$pandalanguage$pandac$IRNode* $tmp3570 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3564);
                        stmt3569 = $tmp3570;
                        if (((panda$core$Bit) { stmt3569 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3549, ((panda$core$Object*) stmt3569));
                    }
                    goto $l3557;
                    $l3558:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3571 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3571->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3571->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3571, ((panda$core$Int64) { 1000 }), c3545->offset, ((panda$collections$ListView*) statements3549));
                panda$collections$Array$add$panda$collections$Array$T(children3503, ((panda$core$Object*) $tmp3571));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3536:;
    if ($tmp3539) goto $l3574; else goto $l3575;
    $l3574:;
    int64_t $tmp3576 = $tmp3530 - i3527.value;
    if ($tmp3532) goto $l3577; else goto $l3578;
    $l3577:;
    if ($tmp3576 >= $tmp3531) goto $l3573; else goto $l3535;
    $l3578:;
    if ($tmp3576 > $tmp3531) goto $l3573; else goto $l3535;
    $l3575:;
    int64_t $tmp3580 = i3527.value - $tmp3530;
    if ($tmp3532) goto $l3581; else goto $l3582;
    $l3581:;
    if ($tmp3580 >= -$tmp3531) goto $l3573; else goto $l3535;
    $l3582:;
    if ($tmp3580 > -$tmp3531) goto $l3573; else goto $l3535;
    $l3573:;
    i3527.value += $tmp3531;
    goto $l3533;
    $l3535:;
    panda$core$Int64 $tmp3585 = panda$collections$Array$get_count$R$panda$core$Int64(children3503);
    panda$core$Int64 $tmp3586 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3585, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3584, $tmp3586, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3588 = $tmp3584.start.value;
    panda$core$Int64 i3587 = { $tmp3588 };
    int64_t $tmp3590 = $tmp3584.end.value;
    int64_t $tmp3591 = $tmp3584.step.value;
    bool $tmp3592 = $tmp3584.inclusive.value;
    bool $tmp3599 = $tmp3591 > 0;
    if ($tmp3599) goto $l3597; else goto $l3598;
    $l3597:;
    if ($tmp3592) goto $l3600; else goto $l3601;
    $l3600:;
    if ($tmp3588 <= $tmp3590) goto $l3593; else goto $l3595;
    $l3601:;
    if ($tmp3588 < $tmp3590) goto $l3593; else goto $l3595;
    $l3598:;
    if ($tmp3592) goto $l3602; else goto $l3603;
    $l3602:;
    if ($tmp3588 >= $tmp3590) goto $l3593; else goto $l3595;
    $l3603:;
    if ($tmp3588 > $tmp3590) goto $l3593; else goto $l3595;
    $l3593:;
    {
        panda$core$Int64 $tmp3605 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3587, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3606 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3503, $tmp3605);
        panda$core$Bit $tmp3607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3606)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3607.value);
        panda$core$Int64 $tmp3608 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3587, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3609 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3503, $tmp3608);
        panda$core$Int64 $tmp3610 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3609)->children);
        panda$core$Bit $tmp3611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3610, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3611.value);
        panda$core$Int64 $tmp3612 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3587, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3503, $tmp3612);
        panda$core$Object* $tmp3614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3503, i3587);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3613)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3614)));
        panda$core$Int64 $tmp3615 = panda$collections$Array$get_count$R$panda$core$Int64(children3503);
        panda$core$Int64 $tmp3616 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3615, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3503, $tmp3616);
    }
    $l3596:;
    if ($tmp3599) goto $l3618; else goto $l3619;
    $l3618:;
    int64_t $tmp3620 = $tmp3590 - i3587.value;
    if ($tmp3592) goto $l3621; else goto $l3622;
    $l3621:;
    if ($tmp3620 >= $tmp3591) goto $l3617; else goto $l3595;
    $l3622:;
    if ($tmp3620 > $tmp3591) goto $l3617; else goto $l3595;
    $l3619:;
    int64_t $tmp3624 = i3587.value - $tmp3590;
    if ($tmp3592) goto $l3625; else goto $l3626;
    $l3625:;
    if ($tmp3624 >= -$tmp3591) goto $l3617; else goto $l3595;
    $l3626:;
    if ($tmp3624 > -$tmp3591) goto $l3617; else goto $l3595;
    $l3617:;
    i3587.value += $tmp3591;
    goto $l3593;
    $l3595:;
    org$pandalanguage$pandac$IRNode* $tmp3628 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3628->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3628->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3628, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children3503));
    return $tmp3628;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3638;
    panda$collections$Iterator* expr$Iter3641;
    org$pandalanguage$pandac$ASTNode* expr3654;
    org$pandalanguage$pandac$IRNode* compiled3659;
    panda$collections$Array* statements3664;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3667;
    org$pandalanguage$pandac$IRNode* statement3687;
    panda$core$Bit $tmp3630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3630.value);
    panda$core$Int64 $tmp3631 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3632 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3631, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3632.value);
    panda$core$Object* $tmp3633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3633)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3634.value);
    panda$core$Object* $tmp3635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3636 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3635)->children);
    panda$core$Bit $tmp3637 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3636, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3637.value);
    panda$collections$Array* $tmp3639 = (panda$collections$Array*) malloc(40);
    $tmp3639->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3639->refCount.value = 1;
    panda$collections$Array$init($tmp3639);
    children3638 = $tmp3639;
    {
        panda$core$Object* $tmp3642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3643 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3642)->children)->$class->itable;
        while ($tmp3643->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3643 = $tmp3643->next;
        }
        $fn3645 $tmp3644 = $tmp3643->methods[0];
        panda$collections$Iterator* $tmp3646 = $tmp3644(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3642)->children));
        expr$Iter3641 = $tmp3646;
        $l3647:;
        ITable* $tmp3649 = expr$Iter3641->$class->itable;
        while ($tmp3649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3649 = $tmp3649->next;
        }
        $fn3651 $tmp3650 = $tmp3649->methods[0];
        panda$core$Bit $tmp3652 = $tmp3650(expr$Iter3641);
        panda$core$Bit $tmp3653 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3652);
        if (!$tmp3653.value) goto $l3648;
        {
            ITable* $tmp3655 = expr$Iter3641->$class->itable;
            while ($tmp3655->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3655 = $tmp3655->next;
            }
            $fn3657 $tmp3656 = $tmp3655->methods[1];
            panda$core$Object* $tmp3658 = $tmp3656(expr$Iter3641);
            expr3654 = ((org$pandalanguage$pandac$ASTNode*) $tmp3658);
            org$pandalanguage$pandac$IRNode* $tmp3660 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3654);
            org$pandalanguage$pandac$IRNode* $tmp3661 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3660, p_type);
            compiled3659 = $tmp3661;
            if (((panda$core$Bit) { compiled3659 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3638, ((panda$core$Object*) compiled3659));
        }
        goto $l3647;
        $l3648:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3662 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3662->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3662->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3662, self->symbolTable);
    self->symbolTable = $tmp3662;
    panda$collections$Array* $tmp3665 = (panda$collections$Array*) malloc(40);
    $tmp3665->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3665->refCount.value = 1;
    panda$collections$Array$init($tmp3665);
    statements3664 = $tmp3665;
    panda$core$Int64 $tmp3668 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3667, ((panda$core$Int64) { 1 }), $tmp3668, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3670 = $tmp3667.start.value;
    panda$core$Int64 i3669 = { $tmp3670 };
    int64_t $tmp3672 = $tmp3667.end.value;
    int64_t $tmp3673 = $tmp3667.step.value;
    bool $tmp3674 = $tmp3667.inclusive.value;
    bool $tmp3681 = $tmp3673 > 0;
    if ($tmp3681) goto $l3679; else goto $l3680;
    $l3679:;
    if ($tmp3674) goto $l3682; else goto $l3683;
    $l3682:;
    if ($tmp3670 <= $tmp3672) goto $l3675; else goto $l3677;
    $l3683:;
    if ($tmp3670 < $tmp3672) goto $l3675; else goto $l3677;
    $l3680:;
    if ($tmp3674) goto $l3684; else goto $l3685;
    $l3684:;
    if ($tmp3670 >= $tmp3672) goto $l3675; else goto $l3677;
    $l3685:;
    if ($tmp3670 > $tmp3672) goto $l3675; else goto $l3677;
    $l3675:;
    {
        panda$core$Object* $tmp3688 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3669);
        org$pandalanguage$pandac$IRNode* $tmp3689 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3688));
        statement3687 = $tmp3689;
        if (((panda$core$Bit) { statement3687 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3664, ((panda$core$Object*) statement3687));
    }
    $l3678:;
    if ($tmp3681) goto $l3691; else goto $l3692;
    $l3691:;
    int64_t $tmp3693 = $tmp3672 - i3669.value;
    if ($tmp3674) goto $l3694; else goto $l3695;
    $l3694:;
    if ($tmp3693 >= $tmp3673) goto $l3690; else goto $l3677;
    $l3695:;
    if ($tmp3693 > $tmp3673) goto $l3690; else goto $l3677;
    $l3692:;
    int64_t $tmp3697 = i3669.value - $tmp3672;
    if ($tmp3674) goto $l3698; else goto $l3699;
    $l3698:;
    if ($tmp3697 >= -$tmp3673) goto $l3690; else goto $l3677;
    $l3699:;
    if ($tmp3697 > -$tmp3673) goto $l3690; else goto $l3677;
    $l3690:;
    i3669.value += $tmp3673;
    goto $l3675;
    $l3677:;
    panda$core$Object* $tmp3701 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3701);
    org$pandalanguage$pandac$IRNode* $tmp3702 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3702->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3702->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3702, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3664));
    panda$collections$Array$add$panda$collections$Array$T(children3638, ((panda$core$Object*) $tmp3702));
    org$pandalanguage$pandac$IRNode* $tmp3704 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3704->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3704->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3704, ((panda$core$Int64) { 1042 }), p_w->offset, ((panda$collections$ListView*) children3638));
    return $tmp3704;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3707;
    panda$collections$Array* statements3712;
    panda$collections$Iterator* s$Iter3715;
    org$pandalanguage$pandac$ASTNode* s3727;
    org$pandalanguage$pandac$IRNode* statement3732;
    panda$core$Bit $tmp3706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3706.value);
    panda$collections$Array* $tmp3708 = (panda$collections$Array*) malloc(40);
    $tmp3708->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3708->refCount.value = 1;
    panda$collections$Array$init($tmp3708);
    children3707 = $tmp3708;
    org$pandalanguage$pandac$SymbolTable* $tmp3710 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3710->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3710->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3710, self->symbolTable);
    self->symbolTable = $tmp3710;
    panda$collections$Array* $tmp3713 = (panda$collections$Array*) malloc(40);
    $tmp3713->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3713->refCount.value = 1;
    panda$collections$Array$init($tmp3713);
    statements3712 = $tmp3713;
    {
        ITable* $tmp3716 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp3716->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3716 = $tmp3716->next;
        }
        $fn3718 $tmp3717 = $tmp3716->methods[0];
        panda$collections$Iterator* $tmp3719 = $tmp3717(((panda$collections$Iterable*) p_o->children));
        s$Iter3715 = $tmp3719;
        $l3720:;
        ITable* $tmp3722 = s$Iter3715->$class->itable;
        while ($tmp3722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3722 = $tmp3722->next;
        }
        $fn3724 $tmp3723 = $tmp3722->methods[0];
        panda$core$Bit $tmp3725 = $tmp3723(s$Iter3715);
        panda$core$Bit $tmp3726 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3725);
        if (!$tmp3726.value) goto $l3721;
        {
            ITable* $tmp3728 = s$Iter3715->$class->itable;
            while ($tmp3728->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3728 = $tmp3728->next;
            }
            $fn3730 $tmp3729 = $tmp3728->methods[1];
            panda$core$Object* $tmp3731 = $tmp3729(s$Iter3715);
            s3727 = ((org$pandalanguage$pandac$ASTNode*) $tmp3731);
            org$pandalanguage$pandac$IRNode* $tmp3733 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s3727);
            statement3732 = $tmp3733;
            if (((panda$core$Bit) { statement3732 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements3712, ((panda$core$Object*) statement3732));
        }
        goto $l3720;
        $l3721:;
    }
    panda$core$Object* $tmp3734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3734);
    org$pandalanguage$pandac$IRNode* $tmp3735 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3735->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3735->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3735, ((panda$core$Int64) { 1000 }), p_o->offset, ((panda$collections$ListView*) statements3712));
    panda$collections$Array$add$panda$collections$Array$T(children3707, ((panda$core$Object*) $tmp3735));
    org$pandalanguage$pandac$IRNode* $tmp3737 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3737->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3737->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3737, ((panda$core$Int64) { 1043 }), p_o->offset, ((panda$collections$ListView*) children3707));
    return $tmp3737;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f3746;
    org$pandalanguage$pandac$Variable* v3755;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp3740 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp3739 = $tmp3740.value;
            if (!$tmp3739) goto $l3741;
            panda$core$Object* $tmp3742 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3743 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3742)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp3744 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3743));
            $tmp3739 = $tmp3744.value;
            $l3741:;
            panda$core$Bit $tmp3745 = { $tmp3739 };
            return $tmp3745;
        }
        break;
        case 1026:
        {
            f3746 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f3746->resolved.value);
            panda$core$Bit $tmp3749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f3746->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp3748 = $tmp3749.value;
            if (!$tmp3748) goto $l3750;
            $tmp3748 = ((panda$core$Bit) { f3746->value != NULL }).value;
            $l3750:;
            panda$core$Bit $tmp3751 = { $tmp3748 };
            bool $tmp3747 = $tmp3751.value;
            if (!$tmp3747) goto $l3752;
            panda$core$Bit $tmp3753 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f3746->value);
            $tmp3747 = $tmp3753.value;
            $l3752:;
            panda$core$Bit $tmp3754 = { $tmp3747 };
            return $tmp3754;
        }
        break;
        case 1016:
        {
            v3755 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp3757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v3755->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp3756 = $tmp3757.value;
            if ($tmp3756) goto $l3758;
            panda$core$Bit $tmp3761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v3755->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp3760 = $tmp3761.value;
            if (!$tmp3760) goto $l3762;
            $tmp3760 = ((panda$core$Bit) { v3755->initialValue != NULL }).value;
            $l3762:;
            panda$core$Bit $tmp3763 = { $tmp3760 };
            bool $tmp3759 = $tmp3763.value;
            if (!$tmp3759) goto $l3764;
            panda$core$Bit $tmp3765 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v3755->initialValue);
            $tmp3759 = $tmp3765.value;
            $l3764:;
            panda$core$Bit $tmp3766 = { $tmp3759 };
            $tmp3756 = $tmp3766.value;
            $l3758:;
            panda$core$Bit $tmp3767 = { $tmp3756 };
            return $tmp3767;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f3772;
    org$pandalanguage$pandac$Variable* v3774;
    panda$core$Bit $tmp3768 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp3768.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp3769 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3769)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp3771 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp3770));
            return $tmp3771;
        }
        break;
        case 1026:
        {
            f3772 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp3773 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f3772->value);
            return $tmp3773;
        }
        break;
        case 1016:
        {
            v3774 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp3775 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v3774->initialValue);
            return $tmp3775;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value3779;
    panda$collections$Array* children3786;
    panda$collections$Iterator* rawWhen$Iter3789;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3790;
    org$pandalanguage$pandac$ASTNode* rawWhen3803;
    org$pandalanguage$pandac$IRNode* o3809;
    org$pandalanguage$pandac$IRNode* w3811;
    panda$core$Bit $tmp3776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp3776.value);
    panda$core$Int64 $tmp3777 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp3778 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3777, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3778.value);
    panda$core$Object* $tmp3780 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3781 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3780));
    org$pandalanguage$pandac$IRNode* $tmp3782 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3781);
    value3779 = $tmp3782;
    if (((panda$core$Bit) { value3779 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3783 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value3779->type);
    panda$core$Bit $tmp3784 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3783);
    if ($tmp3784.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3785 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value3779);
        return $tmp3785;
    }
    }
    panda$collections$Array* $tmp3787 = (panda$collections$Array*) malloc(40);
    $tmp3787->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3787->refCount.value = 1;
    panda$collections$Array$init($tmp3787);
    children3786 = $tmp3787;
    panda$collections$Array$add$panda$collections$Array$T(children3786, ((panda$core$Object*) value3779));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3790, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp3791 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp3790);
        ITable* $tmp3792 = ((panda$collections$Iterable*) $tmp3791)->$class->itable;
        while ($tmp3792->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3792 = $tmp3792->next;
        }
        $fn3794 $tmp3793 = $tmp3792->methods[0];
        panda$collections$Iterator* $tmp3795 = $tmp3793(((panda$collections$Iterable*) $tmp3791));
        rawWhen$Iter3789 = $tmp3795;
        $l3796:;
        ITable* $tmp3798 = rawWhen$Iter3789->$class->itable;
        while ($tmp3798->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3798 = $tmp3798->next;
        }
        $fn3800 $tmp3799 = $tmp3798->methods[0];
        panda$core$Bit $tmp3801 = $tmp3799(rawWhen$Iter3789);
        panda$core$Bit $tmp3802 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3801);
        if (!$tmp3802.value) goto $l3797;
        {
            ITable* $tmp3804 = rawWhen$Iter3789->$class->itable;
            while ($tmp3804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3804 = $tmp3804->next;
            }
            $fn3806 $tmp3805 = $tmp3804->methods[1];
            panda$core$Object* $tmp3807 = $tmp3805(rawWhen$Iter3789);
            rawWhen3803 = ((org$pandalanguage$pandac$ASTNode*) $tmp3807);
            panda$core$Bit $tmp3808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen3803->kind, ((panda$core$Int64) { 127 }));
            if ($tmp3808.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3810 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen3803);
                o3809 = $tmp3810;
                if (((panda$core$Bit) { o3809 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3786, ((panda$core$Object*) o3809));
                goto $l3796;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3812 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value3779->type, rawWhen3803);
            w3811 = $tmp3812;
            if (((panda$core$Bit) { w3811 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp3813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3811->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp3814 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3813));
            panda$core$Bit $tmp3815 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3814);
            if ($tmp3815.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3816 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value3779);
                return $tmp3816;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3786, ((panda$core$Object*) w3811));
        }
        goto $l3796;
        $l3797:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3817 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3817->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3817->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3817, ((panda$core$Int64) { 1042 }), p_m->offset, ((panda$collections$ListView*) children3786));
    return $tmp3817;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp3819 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3819;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3820 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp3821 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3820);
            return $tmp3821;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp3822 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3822;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3823 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp3824 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3823);
            org$pandalanguage$pandac$IRNode* $tmp3825 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, $tmp3824);
            return $tmp3825;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp3826 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3826;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp3827 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3827;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp3828 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3828;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp3829 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3829;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp3830 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3830;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp3831 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3831;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp3832 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3832;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp3833 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3833;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp3834 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3834;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp3835 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3835;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old3836;
    org$pandalanguage$pandac$SymbolTable* symbols3838;
    panda$collections$Iterator* p$Iter3841;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3853;
    panda$collections$Array* fieldInitializers3860;
    panda$collections$Iterator* f$Iter3864;
    org$pandalanguage$pandac$FieldDecl* f3877;
    panda$collections$Array* children3887;
    org$pandalanguage$pandac$IRNode* fieldRef3894;
    org$pandalanguage$pandac$IRNode* compiled3899;
    panda$collections$Array* children3903;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old3836 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp3837 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp3837;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp3839 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3839->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3839->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3839, self->symbolTable);
    symbols3838 = $tmp3839;
    {
        ITable* $tmp3842 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3842->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3842 = $tmp3842->next;
        }
        $fn3844 $tmp3843 = $tmp3842->methods[0];
        panda$collections$Iterator* $tmp3845 = $tmp3843(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3841 = $tmp3845;
        $l3846:;
        ITable* $tmp3848 = p$Iter3841->$class->itable;
        while ($tmp3848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3848 = $tmp3848->next;
        }
        $fn3850 $tmp3849 = $tmp3848->methods[0];
        panda$core$Bit $tmp3851 = $tmp3849(p$Iter3841);
        panda$core$Bit $tmp3852 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3851);
        if (!$tmp3852.value) goto $l3847;
        {
            ITable* $tmp3854 = p$Iter3841->$class->itable;
            while ($tmp3854->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3854 = $tmp3854->next;
            }
            $fn3856 $tmp3855 = $tmp3854->methods[1];
            panda$core$Object* $tmp3857 = $tmp3855(p$Iter3841);
            p3853 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3857);
            org$pandalanguage$pandac$Variable* $tmp3858 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp3858->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3858->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp3858, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$core$Int64) { 10001 }), p3853->name, p3853->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols3838, ((org$pandalanguage$pandac$Symbol*) $tmp3858));
        }
        goto $l3846;
        $l3847:;
    }
    self->symbolTable = symbols3838;
    panda$collections$Array* $tmp3861 = (panda$collections$Array*) malloc(40);
    $tmp3861->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3861->refCount.value = 1;
    panda$collections$Array$init($tmp3861);
    fieldInitializers3860 = $tmp3861;
    panda$core$Bit $tmp3863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp3863.value) {
    {
        {
            panda$core$Object* $tmp3865 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp3866 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3865)->fields)->$class->itable;
            while ($tmp3866->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3866 = $tmp3866->next;
            }
            $fn3868 $tmp3867 = $tmp3866->methods[0];
            panda$collections$Iterator* $tmp3869 = $tmp3867(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3865)->fields));
            f$Iter3864 = $tmp3869;
            $l3870:;
            ITable* $tmp3872 = f$Iter3864->$class->itable;
            while ($tmp3872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3872 = $tmp3872->next;
            }
            $fn3874 $tmp3873 = $tmp3872->methods[0];
            panda$core$Bit $tmp3875 = $tmp3873(f$Iter3864);
            panda$core$Bit $tmp3876 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3875);
            if (!$tmp3876.value) goto $l3871;
            {
                ITable* $tmp3878 = f$Iter3864->$class->itable;
                while ($tmp3878->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3878 = $tmp3878->next;
                }
                $fn3880 $tmp3879 = $tmp3878->methods[1];
                panda$core$Object* $tmp3881 = $tmp3879(f$Iter3864);
                f3877 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3881);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f3877);
                panda$core$Bit $tmp3883 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f3877->annotations);
                panda$core$Bit $tmp3884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3883);
                bool $tmp3882 = $tmp3884.value;
                if (!$tmp3882) goto $l3885;
                $tmp3882 = ((panda$core$Bit) { f3877->value != NULL }).value;
                $l3885:;
                panda$core$Bit $tmp3886 = { $tmp3882 };
                if ($tmp3886.value) {
                {
                    panda$collections$Array* $tmp3888 = (panda$collections$Array*) malloc(40);
                    $tmp3888->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3888->refCount.value = 1;
                    panda$collections$Array$init($tmp3888);
                    children3887 = $tmp3888;
                    org$pandalanguage$pandac$IRNode* $tmp3890 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3890->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3890->refCount.value = 1;
                    panda$core$Object* $tmp3892 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp3893 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp3892));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3890, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp3893);
                    panda$collections$Array$add$panda$collections$Array$T(children3887, ((panda$core$Object*) $tmp3890));
                    org$pandalanguage$pandac$IRNode* $tmp3895 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3895->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3895->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3895, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f3877->type, ((panda$core$Object*) f3877), ((panda$collections$ListView*) children3887));
                    fieldRef3894 = $tmp3895;
                    panda$collections$Array$clear(children3887);
                    panda$collections$Array$add$panda$collections$Array$T(children3887, ((panda$core$Object*) fieldRef3894));
                    panda$collections$Array$add$panda$collections$Array$T(children3887, ((panda$core$Object*) f3877->value));
                    org$pandalanguage$pandac$IRNode* $tmp3897 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3897->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3897->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3897, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f3877)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children3887));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers3860, ((panda$core$Object*) $tmp3897));
                }
                }
            }
            goto $l3870;
            $l3871:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3900 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled3899 = $tmp3900;
    if (((panda$core$Bit) { compiled3899 != NULL }).value) {
    {
        panda$core$Int64 $tmp3901 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers3860);
        panda$core$Bit $tmp3902 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3901, ((panda$core$Int64) { 0 }));
        if ($tmp3902.value) {
        {
            panda$collections$Array* $tmp3904 = (panda$collections$Array*) malloc(40);
            $tmp3904->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3904->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp3904, ((panda$collections$ListView*) fieldInitializers3860));
            children3903 = $tmp3904;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children3903, ((panda$collections$CollectionView*) compiled3899->children));
            org$pandalanguage$pandac$IRNode* $tmp3906 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3906->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3906->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3906, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children3903));
            compiled3899 = $tmp3906;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols3838) }).value);
    self->symbolTable = old3836;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp3908 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp3908.value) {
    {
        p_m->compiledBody = compiled3899;
    }
    }
    return compiled3899;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled3909;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3910 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled3909 = $tmp3910;
        if (((panda$core$Bit) { compiled3909 != NULL }).value) {
        {
            ITable* $tmp3911 = self->codeGenerator->$class->itable;
            while ($tmp3911->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp3911 = $tmp3911->next;
            }
            $fn3913 $tmp3912 = $tmp3911->methods[3];
            $tmp3912(self->codeGenerator, p_m, compiled3909);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp3914 = self->codeGenerator->$class->itable;
        while ($tmp3914->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3914 = $tmp3914->next;
        }
        $fn3916 $tmp3915 = $tmp3914->methods[2];
        $tmp3915(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter3917;
    org$pandalanguage$pandac$ClassDecl* inner3929;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp3918 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp3918->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3918 = $tmp3918->next;
        }
        $fn3920 $tmp3919 = $tmp3918->methods[0];
        panda$collections$Iterator* $tmp3921 = $tmp3919(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter3917 = $tmp3921;
        $l3922:;
        ITable* $tmp3924 = inner$Iter3917->$class->itable;
        while ($tmp3924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3924 = $tmp3924->next;
        }
        $fn3926 $tmp3925 = $tmp3924->methods[0];
        panda$core$Bit $tmp3927 = $tmp3925(inner$Iter3917);
        panda$core$Bit $tmp3928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3927);
        if (!$tmp3928.value) goto $l3923;
        {
            ITable* $tmp3930 = inner$Iter3917->$class->itable;
            while ($tmp3930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3930 = $tmp3930->next;
            }
            $fn3932 $tmp3931 = $tmp3930->methods[1];
            panda$core$Object* $tmp3933 = $tmp3931(inner$Iter3917);
            inner3929 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3933);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner3929);
        }
        goto $l3922;
        $l3923:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old3941;
    panda$collections$Iterator* m$Iter3946;
    org$pandalanguage$pandac$MethodDecl* m3958;
    org$pandalanguage$pandac$ClassDecl* next3968;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp3934 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp3934.value) {
    {
        ITable* $tmp3935 = self->codeGenerator->$class->itable;
        while ($tmp3935->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3935 = $tmp3935->next;
        }
        $fn3937 $tmp3936 = $tmp3935->methods[1];
        $tmp3936(self->codeGenerator, p_cl);
        ITable* $tmp3938 = self->codeGenerator->$class->itable;
        while ($tmp3938->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3938 = $tmp3938->next;
        }
        $fn3940 $tmp3939 = $tmp3938->methods[4];
        $tmp3939(self->codeGenerator, p_cl);
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    old3941 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp3942 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp3942;
    ITable* $tmp3943 = self->codeGenerator->$class->itable;
    while ($tmp3943->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp3943 = $tmp3943->next;
    }
    $fn3945 $tmp3944 = $tmp3943->methods[1];
    $tmp3944(self->codeGenerator, p_cl);
    {
        ITable* $tmp3947 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp3947->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3947 = $tmp3947->next;
        }
        $fn3949 $tmp3948 = $tmp3947->methods[0];
        panda$collections$Iterator* $tmp3950 = $tmp3948(((panda$collections$Iterable*) p_cl->methods));
        m$Iter3946 = $tmp3950;
        $l3951:;
        ITable* $tmp3953 = m$Iter3946->$class->itable;
        while ($tmp3953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3953 = $tmp3953->next;
        }
        $fn3955 $tmp3954 = $tmp3953->methods[0];
        panda$core$Bit $tmp3956 = $tmp3954(m$Iter3946);
        panda$core$Bit $tmp3957 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3956);
        if (!$tmp3957.value) goto $l3952;
        {
            ITable* $tmp3959 = m$Iter3946->$class->itable;
            while ($tmp3959->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3959 = $tmp3959->next;
            }
            $fn3961 $tmp3960 = $tmp3959->methods[1];
            panda$core$Object* $tmp3962 = $tmp3960(m$Iter3946);
            m3958 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3962);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m3958);
        }
        goto $l3951;
        $l3952:;
    }
    ITable* $tmp3963 = self->codeGenerator->$class->itable;
    while ($tmp3963->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp3963 = $tmp3963->next;
    }
    $fn3965 $tmp3964 = $tmp3963->methods[4];
    $tmp3964(self->codeGenerator, p_cl);
    self->symbolTable = old3941;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp3966 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp3967 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3966, ((panda$core$Int64) { 0 }));
    if ($tmp3967.value) {
    {
        panda$core$Object* $tmp3969 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next3968 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3969);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next3968);
    }
    }
    panda$core$Int64 $tmp3970 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp3971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3970, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3971.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result3972;
    org$pandalanguage$pandac$ASTNode* parsed3977;
    panda$collections$Iterator* cl$Iter3981;
    org$pandalanguage$pandac$ClassDecl* cl3993;
    panda$core$Object* $tmp3973 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result3972 = ((panda$collections$ListView*) $tmp3973);
    if (((panda$core$Bit) { result3972 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp3974 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp3975 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn3976) self->parser->$class->vtable[2])(self->parser, $tmp3974, $tmp3975);
        org$pandalanguage$pandac$ASTNode* $tmp3979 = (($fn3978) self->parser->$class->vtable[68])(self->parser);
        parsed3977 = $tmp3979;
        if (((panda$core$Bit) { parsed3977 != NULL }).value) {
        {
            panda$collections$ListView* $tmp3980 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed3977);
            result3972 = $tmp3980;
            {
                ITable* $tmp3982 = ((panda$collections$Iterable*) result3972)->$class->itable;
                while ($tmp3982->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp3982 = $tmp3982->next;
                }
                $fn3984 $tmp3983 = $tmp3982->methods[0];
                panda$collections$Iterator* $tmp3985 = $tmp3983(((panda$collections$Iterable*) result3972));
                cl$Iter3981 = $tmp3985;
                $l3986:;
                ITable* $tmp3988 = cl$Iter3981->$class->itable;
                while ($tmp3988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3988 = $tmp3988->next;
                }
                $fn3990 $tmp3989 = $tmp3988->methods[0];
                panda$core$Bit $tmp3991 = $tmp3989(cl$Iter3981);
                panda$core$Bit $tmp3992 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3991);
                if (!$tmp3992.value) goto $l3987;
                {
                    ITable* $tmp3994 = cl$Iter3981->$class->itable;
                    while ($tmp3994->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3994 = $tmp3994->next;
                    }
                    $fn3996 $tmp3995 = $tmp3994->methods[1];
                    panda$core$Object* $tmp3997 = $tmp3995(cl$Iter3981);
                    cl3993 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3997);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl3993)->name), ((panda$core$Object*) cl3993));
                }
                goto $l3986;
                $l3987:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp3998 = (panda$collections$Array*) malloc(40);
            $tmp3998->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3998->refCount.value = 1;
            panda$collections$Array$init($tmp3998);
            result3972 = ((panda$collections$ListView*) $tmp3998);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result3972));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return result3972;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4000;
    panda$collections$Iterator* cl$Iter4002;
    org$pandalanguage$pandac$ClassDecl* cl4014;
    panda$collections$ListView* $tmp4001 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4000 = $tmp4001;
    {
        ITable* $tmp4003 = ((panda$collections$Iterable*) classes4000)->$class->itable;
        while ($tmp4003->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4003 = $tmp4003->next;
        }
        $fn4005 $tmp4004 = $tmp4003->methods[0];
        panda$collections$Iterator* $tmp4006 = $tmp4004(((panda$collections$Iterable*) classes4000));
        cl$Iter4002 = $tmp4006;
        $l4007:;
        ITable* $tmp4009 = cl$Iter4002->$class->itable;
        while ($tmp4009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4009 = $tmp4009->next;
        }
        $fn4011 $tmp4010 = $tmp4009->methods[0];
        panda$core$Bit $tmp4012 = $tmp4010(cl$Iter4002);
        panda$core$Bit $tmp4013 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4012);
        if (!$tmp4013.value) goto $l4008;
        {
            ITable* $tmp4015 = cl$Iter4002->$class->itable;
            while ($tmp4015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4015 = $tmp4015->next;
            }
            $fn4017 $tmp4016 = $tmp4015->methods[1];
            panda$core$Object* $tmp4018 = $tmp4016(cl$Iter4002);
            cl4014 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4018);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4014);
        }
        goto $l4007;
        $l4008:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source4019;
    panda$core$Int64 line4022;
    panda$core$Int64 column4023;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4024;
    panda$core$Char8 $match$1177084043;
    panda$core$Char8 $tmp4046;
    panda$core$Char8 $tmp4049;
    panda$core$Object* $tmp4020 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$io$InputStream* $tmp4021 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp4020));
    source4019 = $tmp4021;
    line4022 = ((panda$core$Int64) { 1 });
    column4023 = ((panda$core$Int64) { 1 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4024, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4026 = $tmp4024.start.value;
    panda$core$Int64 i4025 = { $tmp4026 };
    int64_t $tmp4028 = $tmp4024.end.value;
    int64_t $tmp4029 = $tmp4024.step.value;
    bool $tmp4030 = $tmp4024.inclusive.value;
    bool $tmp4037 = $tmp4029 > 0;
    if ($tmp4037) goto $l4035; else goto $l4036;
    $l4035:;
    if ($tmp4030) goto $l4038; else goto $l4039;
    $l4038:;
    if ($tmp4026 <= $tmp4028) goto $l4031; else goto $l4033;
    $l4039:;
    if ($tmp4026 < $tmp4028) goto $l4031; else goto $l4033;
    $l4036:;
    if ($tmp4030) goto $l4040; else goto $l4041;
    $l4040:;
    if ($tmp4026 >= $tmp4028) goto $l4031; else goto $l4033;
    $l4041:;
    if ($tmp4026 > $tmp4028) goto $l4031; else goto $l4033;
    $l4031:;
    {
        {
            panda$core$Char8$nullable $tmp4045 = (($fn4044) source4019->$class->vtable[10])(source4019);
            $match$1177084043 = ((panda$core$Char8) $tmp4045.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4046, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4047 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1177084043, $tmp4046);
            if ($tmp4047.value) {
            {
                panda$core$Int64 $tmp4048 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4022, ((panda$core$Int64) { 1 }));
                line4022 = $tmp4048;
                column4023 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4049, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4050 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1177084043, $tmp4049);
            if ($tmp4050.value) {
            {
                panda$core$Int64 $tmp4051 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column4023, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4052 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4051);
                panda$core$Int64 $tmp4053 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4023, $tmp4052);
                column4023 = $tmp4053;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4054 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4023, ((panda$core$Int64) { 1 }));
                column4023 = $tmp4054;
            }
            }
            }
        }
    }
    $l4034:;
    if ($tmp4037) goto $l4056; else goto $l4057;
    $l4056:;
    int64_t $tmp4058 = $tmp4028 - i4025.value;
    if ($tmp4030) goto $l4059; else goto $l4060;
    $l4059:;
    if ($tmp4058 >= $tmp4029) goto $l4055; else goto $l4033;
    $l4060:;
    if ($tmp4058 > $tmp4029) goto $l4055; else goto $l4033;
    $l4057:;
    int64_t $tmp4062 = i4025.value - $tmp4028;
    if ($tmp4030) goto $l4063; else goto $l4064;
    $l4063:;
    if ($tmp4062 >= -$tmp4029) goto $l4055; else goto $l4033;
    $l4064:;
    if ($tmp4062 > -$tmp4029) goto $l4055; else goto $l4033;
    $l4055:;
    i4025.value += $tmp4029;
    goto $l4031;
    $l4033:;
    (($fn4066) ((panda$core$Object*) source4019)->$class->vtable[1])(((panda$core$Object*) source4019));
    org$pandalanguage$pandac$Position* $tmp4067 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4067->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4067->refCount.value = 1;
    panda$core$Object* $tmp4069 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$core$String* $tmp4070 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4069));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4067, $tmp4070, line4022, column4023);
    return $tmp4067;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4071 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, p_offset);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4071, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4072 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4072;
        panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4073, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4074, &$s4075);
        panda$core$String* $tmp4077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4076, p_msg);
        panda$core$String* $tmp4079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4077, &$s4078);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4079));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4080 = self->codeGenerator->$class->itable;
    while ($tmp4080->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4080 = $tmp4080->next;
    }
    $fn4082 $tmp4081 = $tmp4080->methods[5];
    $tmp4081(self->codeGenerator);
}

