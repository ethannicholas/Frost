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
typedef panda$core$Int64 (*$fn1589)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1616)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1643)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1660)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1666)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1672)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1684)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1741)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1764)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1840)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1859)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1865)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1871)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1902)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1908)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1914)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1951)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1957)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1963)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1986)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1992)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1998)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2388)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2394)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2400)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2536)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2542)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2548)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2770)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2798)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2884)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2890)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2896)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3079)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3085)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3091)(panda$collections$Iterator*);
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
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
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
    panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1545.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1546 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1546.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1548;
    org$pandalanguage$pandac$IRNode* resolved1555;
    panda$core$Int64$nullable $tmp1547 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1547.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1549 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1548 = $tmp1549;
    panda$core$Bit $tmp1551 = panda$core$Bit$$NOT$R$panda$core$Bit(result1548);
    bool $tmp1550 = $tmp1551.value;
    if (!$tmp1550) goto $l1552;
    panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1550 = $tmp1553.value;
    $l1552:;
    panda$core$Bit $tmp1554 = { $tmp1550 };
    if ($tmp1554.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1556 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1555 = $tmp1556;
        if (((panda$core$Bit) { resolved1555 != NULL }).value) {
        {
            panda$core$Bit $tmp1557 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1555, p_target);
            result1548 = $tmp1557;
        }
        }
    }
    }
    return result1548;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1578;
    panda$collections$Array* children1581;
    panda$core$Bit $tmp1558 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1558.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1559 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1560 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1559);
    PANDA_ASSERT($tmp1560.value);
    bool $tmp1561 = p_isExplicit.value;
    if (!$tmp1561) goto $l1562;
    panda$core$Bit $tmp1563 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1563);
    $tmp1561 = $tmp1564.value;
    $l1562:;
    panda$core$Bit $tmp1565 = { $tmp1561 };
    if ($tmp1565.value) {
    {
        panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1566, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, &$s1568);
        panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1570, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1572);
        panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, $tmp1573);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1574);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1575 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1575;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1576 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1576.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1577 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1577;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1579 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1578 = $tmp1579;
            if (((panda$core$Bit) { resolved1578 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1580 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1578, p_offset, p_isExplicit, p_target);
                return $tmp1580;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1582 = (panda$collections$Array*) malloc(40);
    $tmp1582->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1582->refCount.value = 1;
    panda$collections$Array$init($tmp1582);
    children1581 = $tmp1582;
    panda$collections$Array$add$panda$collections$Array$T(children1581, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1584 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1584->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1584->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1584, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1581));
    return $tmp1584;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1592;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1593;
    panda$core$Int64$nullable cost1613;
    panda$core$Int64$nullable cost1632;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1586 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1587 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1587->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1587 = $tmp1587->next;
    }
    $fn1589 $tmp1588 = $tmp1587->methods[0];
    panda$core$Int64 $tmp1590 = $tmp1588(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1591 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1586, $tmp1590);
    if ($tmp1591.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1592 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1594 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1593, ((panda$core$Int64) { 0 }), $tmp1594, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1596 = $tmp1593.start.value;
    panda$core$Int64 i1595 = { $tmp1596 };
    int64_t $tmp1598 = $tmp1593.end.value;
    int64_t $tmp1599 = $tmp1593.step.value;
    bool $tmp1600 = $tmp1593.inclusive.value;
    bool $tmp1607 = $tmp1599 > 0;
    if ($tmp1607) goto $l1605; else goto $l1606;
    $l1605:;
    if ($tmp1600) goto $l1608; else goto $l1609;
    $l1608:;
    if ($tmp1596 <= $tmp1598) goto $l1601; else goto $l1603;
    $l1609:;
    if ($tmp1596 < $tmp1598) goto $l1601; else goto $l1603;
    $l1606:;
    if ($tmp1600) goto $l1610; else goto $l1611;
    $l1610:;
    if ($tmp1596 >= $tmp1598) goto $l1601; else goto $l1603;
    $l1611:;
    if ($tmp1596 > $tmp1598) goto $l1601; else goto $l1603;
    $l1601:;
    {
        ITable* $tmp1614 = p_args->$class->itable;
        while ($tmp1614->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1614 = $tmp1614->next;
        }
        $fn1616 $tmp1615 = $tmp1614->methods[0];
        panda$core$Object* $tmp1617 = $tmp1615(p_args, i1595);
        org$pandalanguage$pandac$Type* $tmp1618 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1595);
        panda$core$Int64$nullable $tmp1619 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1617), $tmp1618);
        cost1613 = $tmp1619;
        if (((panda$core$Bit) { !cost1613.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1620 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1592, ((panda$core$Int64) cost1613.value));
        result1592 = $tmp1620;
    }
    $l1604:;
    if ($tmp1607) goto $l1622; else goto $l1623;
    $l1622:;
    int64_t $tmp1624 = $tmp1598 - i1595.value;
    if ($tmp1600) goto $l1625; else goto $l1626;
    $l1625:;
    if ($tmp1624 >= $tmp1599) goto $l1621; else goto $l1603;
    $l1626:;
    if ($tmp1624 > $tmp1599) goto $l1621; else goto $l1603;
    $l1623:;
    int64_t $tmp1628 = i1595.value - $tmp1598;
    if ($tmp1600) goto $l1629; else goto $l1630;
    $l1629:;
    if ($tmp1628 >= -$tmp1599) goto $l1621; else goto $l1603;
    $l1630:;
    if ($tmp1628 > -$tmp1599) goto $l1621; else goto $l1603;
    $l1621:;
    i1595.value += $tmp1599;
    goto $l1601;
    $l1603:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1633 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1634 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1633, p_expectedReturn);
        cost1632 = $tmp1634;
        if (((panda$core$Bit) { !cost1632.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1635 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1592, ((panda$core$Int64) cost1632.value));
        result1592 = $tmp1635;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1638 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1639 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1638);
    bool $tmp1637 = $tmp1639.value;
    if (!$tmp1637) goto $l1640;
    ITable* $tmp1641 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1641->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1641 = $tmp1641->next;
    }
    $fn1643 $tmp1642 = $tmp1641->methods[0];
    panda$core$Int64 $tmp1644 = $tmp1642(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1644, ((panda$core$Int64) { 1 }));
    $tmp1637 = $tmp1645.value;
    $l1640:;
    panda$core$Bit $tmp1646 = { $tmp1637 };
    bool $tmp1636 = $tmp1646.value;
    if (!$tmp1636) goto $l1647;
    panda$core$Object* $tmp1648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1649 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1650 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1648)->type, $tmp1649);
    $tmp1636 = $tmp1650.value;
    $l1647:;
    panda$core$Bit $tmp1651 = { $tmp1636 };
    if ($tmp1651.value) {
    {
        panda$core$Int64 $tmp1652 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1592, ((panda$core$Int64) { 1 }));
        result1592 = $tmp1652;
    }
    }
    return ((panda$core$Int64$nullable) { result1592, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1653;
    panda$core$Int64$nullable best1656;
    panda$collections$Iterator* m$Iter1657;
    org$pandalanguage$pandac$MethodRef* m1669;
    panda$core$Int64$nullable cost1674;
    panda$collections$Array* $tmp1654 = (panda$collections$Array*) malloc(40);
    $tmp1654->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1654->refCount.value = 1;
    panda$collections$Array$init($tmp1654);
    result1653 = $tmp1654;
    best1656 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1658 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1658->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1658 = $tmp1658->next;
        }
        $fn1660 $tmp1659 = $tmp1658->methods[0];
        panda$collections$Iterator* $tmp1661 = $tmp1659(((panda$collections$Iterable*) p_methods));
        m$Iter1657 = $tmp1661;
        $l1662:;
        ITable* $tmp1664 = m$Iter1657->$class->itable;
        while ($tmp1664->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1664 = $tmp1664->next;
        }
        $fn1666 $tmp1665 = $tmp1664->methods[0];
        panda$core$Bit $tmp1667 = $tmp1665(m$Iter1657);
        panda$core$Bit $tmp1668 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1667);
        if (!$tmp1668.value) goto $l1663;
        {
            ITable* $tmp1670 = m$Iter1657->$class->itable;
            while ($tmp1670->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1670 = $tmp1670->next;
            }
            $fn1672 $tmp1671 = $tmp1670->methods[1];
            panda$core$Object* $tmp1673 = $tmp1671(m$Iter1657);
            m1669 = ((org$pandalanguage$pandac$MethodRef*) $tmp1673);
            panda$core$Int64$nullable $tmp1675 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1669, p_args, p_expectedReturn);
            cost1674 = $tmp1675;
            if (((panda$core$Bit) { !cost1674.nonnull }).value) {
            {
                goto $l1662;
            }
            }
            bool $tmp1676 = ((panda$core$Bit) { !best1656.nonnull }).value;
            if ($tmp1676) goto $l1677;
            panda$core$Bit $tmp1678 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1674.value), ((panda$core$Int64) best1656.value));
            $tmp1676 = $tmp1678.value;
            $l1677:;
            panda$core$Bit $tmp1679 = { $tmp1676 };
            if ($tmp1679.value) {
            {
                panda$collections$Array$clear(result1653);
                best1656 = cost1674;
            }
            }
            panda$core$Bit $tmp1680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1674.value), ((panda$core$Int64) best1656.value));
            if ($tmp1680.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1653, ((panda$core$Object*) m1669));
            }
            }
        }
        goto $l1662;
        $l1663:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1653));
    return best1656;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs1687;
    org$pandalanguage$pandac$IRNode* selfNode1723;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1738;
    org$pandalanguage$pandac$IRNode* coerced1761;
    org$pandalanguage$pandac$IRNode* result1781;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1681 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1682 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1682->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1682 = $tmp1682->next;
    }
    $fn1684 $tmp1683 = $tmp1682->methods[0];
    panda$core$Int64 $tmp1685 = $tmp1683(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1681, $tmp1685);
    PANDA_ASSERT($tmp1686.value);
    panda$collections$Array* $tmp1688 = (panda$collections$Array*) malloc(40);
    $tmp1688->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1688->refCount.value = 1;
    panda$collections$Array$init($tmp1688);
    finalArgs1687 = $tmp1688;
    bool $tmp1691 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1691) goto $l1692;
    panda$core$Bit $tmp1693 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1691 = $tmp1693.value;
    $l1692:;
    panda$core$Bit $tmp1694 = { $tmp1691 };
    bool $tmp1690 = $tmp1694.value;
    if (!$tmp1690) goto $l1695;
    panda$core$Bit $tmp1696 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1697 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1696);
    $tmp1690 = $tmp1697.value;
    $l1695:;
    panda$core$Bit $tmp1698 = { $tmp1690 };
    if ($tmp1698.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1699 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1700 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp1699);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1687, ((panda$core$Object*) $tmp1700));
    }
    }
    panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1701.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1702 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1702)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1703.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1704 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1704->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1704->refCount.value = 1;
                panda$core$Object* $tmp1706 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1707 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1706));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1704, ((panda$core$Int64) { 1025 }), p_offset, $tmp1707);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1687, ((panda$core$Object*) $tmp1704));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1708);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1711 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1710 = $tmp1711.value;
        if (!$tmp1710) goto $l1712;
        panda$core$Bit $tmp1713 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1710 = $tmp1713.value;
        $l1712:;
        panda$core$Bit $tmp1714 = { $tmp1710 };
        bool $tmp1709 = $tmp1714.value;
        if (!$tmp1709) goto $l1715;
        panda$core$Bit $tmp1716 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1709 = $tmp1716.value;
        $l1715:;
        panda$core$Bit $tmp1717 = { $tmp1709 };
        if ($tmp1717.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1718);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1720 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1719 = $tmp1720.value;
    if (!$tmp1719) goto $l1721;
    $tmp1719 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1721:;
    panda$core$Bit $tmp1722 = { $tmp1719 };
    if ($tmp1722.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1724 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1724->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1724->refCount.value = 1;
        panda$core$Object* $tmp1726 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1727 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1726));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1724, ((panda$core$Int64) { 1025 }), p_offset, $tmp1727);
        selfNode1723 = $tmp1724;
        org$pandalanguage$pandac$Type* $tmp1728 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1729 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1723, $tmp1728);
        selfNode1723 = $tmp1729;
        PANDA_ASSERT(((panda$core$Bit) { selfNode1723 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1687, ((panda$core$Object*) selfNode1723));
        panda$core$Object* $tmp1730 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1731 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1730));
        panda$core$Bit $tmp1732 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1731);
        if ($tmp1732.value) {
        {
            panda$core$String* $tmp1734 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1733, $tmp1734);
            panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1736);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1737);
        }
        }
    }
    }
    }
    ITable* $tmp1739 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1739->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1739 = $tmp1739->next;
    }
    $fn1741 $tmp1740 = $tmp1739->methods[0];
    panda$core$Int64 $tmp1742 = $tmp1740(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1738, ((panda$core$Int64) { 0 }), $tmp1742, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1744 = $tmp1738.start.value;
    panda$core$Int64 i1743 = { $tmp1744 };
    int64_t $tmp1746 = $tmp1738.end.value;
    int64_t $tmp1747 = $tmp1738.step.value;
    bool $tmp1748 = $tmp1738.inclusive.value;
    bool $tmp1755 = $tmp1747 > 0;
    if ($tmp1755) goto $l1753; else goto $l1754;
    $l1753:;
    if ($tmp1748) goto $l1756; else goto $l1757;
    $l1756:;
    if ($tmp1744 <= $tmp1746) goto $l1749; else goto $l1751;
    $l1757:;
    if ($tmp1744 < $tmp1746) goto $l1749; else goto $l1751;
    $l1754:;
    if ($tmp1748) goto $l1758; else goto $l1759;
    $l1758:;
    if ($tmp1744 >= $tmp1746) goto $l1749; else goto $l1751;
    $l1759:;
    if ($tmp1744 > $tmp1746) goto $l1749; else goto $l1751;
    $l1749:;
    {
        ITable* $tmp1762 = p_args->$class->itable;
        while ($tmp1762->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1762 = $tmp1762->next;
        }
        $fn1764 $tmp1763 = $tmp1762->methods[0];
        panda$core$Object* $tmp1765 = $tmp1763(p_args, i1743);
        org$pandalanguage$pandac$Type* $tmp1766 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1743);
        org$pandalanguage$pandac$IRNode* $tmp1767 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1765), $tmp1766);
        coerced1761 = $tmp1767;
        if (((panda$core$Bit) { coerced1761 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp1768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1743);
        org$pandalanguage$pandac$IRNode* $tmp1769 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced1761, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1768)->type);
        coerced1761 = $tmp1769;
        if (((panda$core$Bit) { coerced1761 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1687, ((panda$core$Object*) coerced1761));
    }
    $l1752:;
    if ($tmp1755) goto $l1771; else goto $l1772;
    $l1771:;
    int64_t $tmp1773 = $tmp1746 - i1743.value;
    if ($tmp1748) goto $l1774; else goto $l1775;
    $l1774:;
    if ($tmp1773 >= $tmp1747) goto $l1770; else goto $l1751;
    $l1775:;
    if ($tmp1773 > $tmp1747) goto $l1770; else goto $l1751;
    $l1772:;
    int64_t $tmp1777 = i1743.value - $tmp1746;
    if ($tmp1748) goto $l1778; else goto $l1779;
    $l1778:;
    if ($tmp1777 >= -$tmp1747) goto $l1770; else goto $l1751;
    $l1779:;
    if ($tmp1777 > -$tmp1747) goto $l1770; else goto $l1751;
    $l1770:;
    i1743.value += $tmp1747;
    goto $l1749;
    $l1751:;
    panda$core$Bit $tmp1783 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s1782);
    if ($tmp1783.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1784 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1784->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1784->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1786 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1784, ((panda$core$Int64) { 1005 }), p_offset, $tmp1786, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1687));
        result1781 = $tmp1784;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp1787 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1787->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1787->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1787, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1687));
        result1781 = $tmp1787;
        org$pandalanguage$pandac$Type* $tmp1789 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1790 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1781, p_offset, ((panda$core$Bit) { false }), $tmp1789);
        result1781 = $tmp1790;
    }
    }
    return result1781;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1791 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp1791;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved1792;
    org$pandalanguage$pandac$ClassDecl* cl1794;
    org$pandalanguage$pandac$Symbol* s1798;
    org$pandalanguage$pandac$IRNode* ref1820;
    org$pandalanguage$pandac$IRNode* $tmp1793 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved1792 = $tmp1793;
    if (((panda$core$Bit) { resolved1792 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved1792->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp1795.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1796 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved1792->payload));
        cl1794 = $tmp1796;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1797 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved1792->type);
        cl1794 = $tmp1797;
    }
    }
    if (((panda$core$Bit) { cl1794 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1799 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1794);
    org$pandalanguage$pandac$Symbol* $tmp1800 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1799, p_name);
    s1798 = $tmp1800;
    if (((panda$core$Bit) { s1798 == NULL }).value) {
    {
        panda$core$String* $tmp1802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1801, ((org$pandalanguage$pandac$Symbol*) cl1794)->name);
        panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1802, &$s1803);
        panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, p_name);
        panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1805, &$s1806);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1807);
        return NULL;
    }
    }
    panda$core$Bit $tmp1809 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1798->kind, ((panda$core$Int64) { 204 }));
    bool $tmp1808 = $tmp1809.value;
    if (!$tmp1808) goto $l1810;
    panda$core$Bit $tmp1811 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1798->kind, ((panda$core$Int64) { 205 }));
    $tmp1808 = $tmp1811.value;
    $l1810:;
    panda$core$Bit $tmp1812 = { $tmp1808 };
    if ($tmp1812.value) {
    {
        panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1813, ((org$pandalanguage$pandac$Symbol*) cl1794)->name);
        panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, &$s1815);
        panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, p_name);
        panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, &$s1818);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1819);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1821 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1794);
    org$pandalanguage$pandac$IRNode* $tmp1822 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->offset, p_target, s1798, $tmp1821);
    ref1820 = $tmp1822;
    if (((panda$core$Bit) { ref1820 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1823 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref1820, p_args, p_expectedType);
    return $tmp1823;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1824 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp1824;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target1825;
    panda$collections$Array* methods1832;
    org$pandalanguage$pandac$MethodDecl* first1837;
    panda$core$MutableString* msg1842;
    panda$core$String* separator1854;
    panda$collections$Iterator* a$Iter1856;
    org$pandalanguage$pandac$IRNode* a1868;
    org$pandalanguage$pandac$IRNode* target1882;
    panda$collections$Array* children1890;
    panda$collections$Array* types1896;
    panda$collections$Iterator* m$Iter1899;
    org$pandalanguage$pandac$MethodRef* m1911;
    org$pandalanguage$pandac$IRNode* target1921;
    org$pandalanguage$pandac$IRNode* initCall1924;
    panda$collections$Array* children1928;
    org$pandalanguage$pandac$IRNode* resolved1933;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp1826 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp1827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1826, ((panda$core$Int64) { 0 }));
            if ($tmp1827.value) {
            {
                target1825 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp1828 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1828, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1829.value);
                panda$core$Object* $tmp1830 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target1825 = ((org$pandalanguage$pandac$IRNode*) $tmp1830);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1831 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1825, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp1831;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp1833 = (panda$collections$Array*) malloc(40);
            $tmp1833->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1833->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp1833, ((panda$collections$ListView*) p_m->payload));
            methods1832 = $tmp1833;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods1832, p_args, p_expectedType);
            panda$core$Int64 $tmp1835 = panda$collections$Array$get_count$R$panda$core$Int64(methods1832);
            panda$core$Bit $tmp1836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1835, ((panda$core$Int64) { 0 }));
            if ($tmp1836.value) {
            {
                ITable* $tmp1838 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp1838->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1838 = $tmp1838->next;
                }
                $fn1840 $tmp1839 = $tmp1838->methods[0];
                panda$core$Object* $tmp1841 = $tmp1839(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first1837 = ((org$pandalanguage$pandac$MethodRef*) $tmp1841)->value;
                panda$core$MutableString* $tmp1843 = (panda$core$MutableString*) malloc(40);
                $tmp1843->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp1843->refCount.value = 1;
                panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1845, ((org$pandalanguage$pandac$Symbol*) first1837->owner)->name);
                panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1846, &$s1847);
                panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1849, ((org$pandalanguage$pandac$Symbol*) first1837)->name);
                panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, &$s1851);
                panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, $tmp1852);
                panda$core$MutableString$init$panda$core$String($tmp1843, $tmp1853);
                msg1842 = $tmp1843;
                separator1854 = &$s1855;
                {
                    ITable* $tmp1857 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp1857->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1857 = $tmp1857->next;
                    }
                    $fn1859 $tmp1858 = $tmp1857->methods[0];
                    panda$collections$Iterator* $tmp1860 = $tmp1858(((panda$collections$Iterable*) p_args));
                    a$Iter1856 = $tmp1860;
                    $l1861:;
                    ITable* $tmp1863 = a$Iter1856->$class->itable;
                    while ($tmp1863->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1863 = $tmp1863->next;
                    }
                    $fn1865 $tmp1864 = $tmp1863->methods[0];
                    panda$core$Bit $tmp1866 = $tmp1864(a$Iter1856);
                    panda$core$Bit $tmp1867 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1866);
                    if (!$tmp1867.value) goto $l1862;
                    {
                        ITable* $tmp1869 = a$Iter1856->$class->itable;
                        while ($tmp1869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1869 = $tmp1869->next;
                        }
                        $fn1871 $tmp1870 = $tmp1869->methods[1];
                        panda$core$Object* $tmp1872 = $tmp1870(a$Iter1856);
                        a1868 = ((org$pandalanguage$pandac$IRNode*) $tmp1872);
                        panda$core$MutableString$append$panda$core$String(msg1842, separator1854);
                        panda$core$MutableString$append$panda$core$Object(msg1842, ((panda$core$Object*) a1868->type));
                        separator1854 = &$s1873;
                    }
                    goto $l1861;
                    $l1862:;
                }
                panda$core$MutableString$append$panda$core$String(msg1842, &$s1874);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1875, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp1878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, &$s1877);
                    panda$core$MutableString$append$panda$core$String(msg1842, $tmp1878);
                }
                }
                panda$core$String* $tmp1879 = panda$core$MutableString$convert$R$panda$core$String(msg1842);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_m->offset, $tmp1879);
                return NULL;
            }
            }
            panda$core$Int64 $tmp1880 = panda$collections$Array$get_count$R$panda$core$Int64(methods1832);
            panda$core$Bit $tmp1881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1880, ((panda$core$Int64) { 1 }));
            if ($tmp1881.value) {
            {
                panda$core$Int64 $tmp1883 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1883, ((panda$core$Int64) { 1 }));
                if ($tmp1884.value) {
                {
                    panda$core$Object* $tmp1885 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target1882 = ((org$pandalanguage$pandac$IRNode*) $tmp1885);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp1886 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp1887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1886, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp1887.value);
                    target1882 = NULL;
                }
                }
                panda$core$Object* $tmp1888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1832, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1889 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1882, ((org$pandalanguage$pandac$MethodRef*) $tmp1888), p_args);
                return $tmp1889;
            }
            }
            panda$collections$Array* $tmp1891 = (panda$collections$Array*) malloc(40);
            $tmp1891->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1891->refCount.value = 1;
            panda$collections$Array$init($tmp1891);
            children1890 = $tmp1891;
            org$pandalanguage$pandac$IRNode* $tmp1893 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1893->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1893->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1895 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1893, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp1895, ((panda$core$Object*) methods1832), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children1890, ((panda$core$Object*) $tmp1893));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children1890, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp1897 = (panda$collections$Array*) malloc(40);
            $tmp1897->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1897->refCount.value = 1;
            panda$collections$Array$init($tmp1897);
            types1896 = $tmp1897;
            {
                ITable* $tmp1900 = ((panda$collections$Iterable*) methods1832)->$class->itable;
                while ($tmp1900->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1900 = $tmp1900->next;
                }
                $fn1902 $tmp1901 = $tmp1900->methods[0];
                panda$collections$Iterator* $tmp1903 = $tmp1901(((panda$collections$Iterable*) methods1832));
                m$Iter1899 = $tmp1903;
                $l1904:;
                ITable* $tmp1906 = m$Iter1899->$class->itable;
                while ($tmp1906->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1906 = $tmp1906->next;
                }
                $fn1908 $tmp1907 = $tmp1906->methods[0];
                panda$core$Bit $tmp1909 = $tmp1907(m$Iter1899);
                panda$core$Bit $tmp1910 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1909);
                if (!$tmp1910.value) goto $l1905;
                {
                    ITable* $tmp1912 = m$Iter1899->$class->itable;
                    while ($tmp1912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1912 = $tmp1912->next;
                    }
                    $fn1914 $tmp1913 = $tmp1912->methods[1];
                    panda$core$Object* $tmp1915 = $tmp1913(m$Iter1899);
                    m1911 = ((org$pandalanguage$pandac$MethodRef*) $tmp1915);
                    org$pandalanguage$pandac$Type* $tmp1916 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1911);
                    panda$collections$Array$add$panda$collections$Array$T(types1896, ((panda$core$Object*) $tmp1916));
                }
                goto $l1904;
                $l1905:;
            }
            org$pandalanguage$pandac$IRNode* $tmp1917 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1917->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1917->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1919 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp1919->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp1919->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1919, ((panda$collections$ListView*) types1896));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1917, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp1919, ((panda$collections$ListView*) children1890));
            return $tmp1917;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp1922 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1922->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1922->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1922, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target1921 = $tmp1922;
            org$pandalanguage$pandac$IRNode* $tmp1926 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1921, &$s1925, p_args);
            org$pandalanguage$pandac$IRNode* $tmp1927 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1926);
            initCall1924 = $tmp1927;
            if (((panda$core$Bit) { initCall1924 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1929 = (panda$collections$Array*) malloc(40);
            $tmp1929->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1929->refCount.value = 1;
            panda$collections$Array$init($tmp1929);
            children1928 = $tmp1929;
            panda$collections$Array$add$panda$collections$Array$T(children1928, ((panda$core$Object*) initCall1924));
            org$pandalanguage$pandac$IRNode* $tmp1931 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1931->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1931->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1931, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children1928));
            return $tmp1931;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp1934 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved1933 = $tmp1934;
            if (((panda$core$Bit) { resolved1933 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1935, ((panda$core$Object*) resolved1933->type));
            panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, &$s1937);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, resolved1933->offset, $tmp1938);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes1939;
    panda$core$MutableString* typeName1942;
    panda$core$String* separator1946;
    panda$collections$Iterator* p$Iter1948;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1960;
    panda$core$Int64 kind1966;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp1940 = (panda$collections$Array*) malloc(40);
    $tmp1940->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1940->refCount.value = 1;
    panda$collections$Array$init($tmp1940);
    subtypes1939 = $tmp1940;
    panda$core$MutableString* $tmp1943 = (panda$core$MutableString*) malloc(40);
    $tmp1943->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1943->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1943, &$s1945);
    typeName1942 = $tmp1943;
    separator1946 = &$s1947;
    {
        ITable* $tmp1949 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1949->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1949 = $tmp1949->next;
        }
        $fn1951 $tmp1950 = $tmp1949->methods[0];
        panda$collections$Iterator* $tmp1952 = $tmp1950(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1948 = $tmp1952;
        $l1953:;
        ITable* $tmp1955 = p$Iter1948->$class->itable;
        while ($tmp1955->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1955 = $tmp1955->next;
        }
        $fn1957 $tmp1956 = $tmp1955->methods[0];
        panda$core$Bit $tmp1958 = $tmp1956(p$Iter1948);
        panda$core$Bit $tmp1959 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1958);
        if (!$tmp1959.value) goto $l1954;
        {
            ITable* $tmp1961 = p$Iter1948->$class->itable;
            while ($tmp1961->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1961 = $tmp1961->next;
            }
            $fn1963 $tmp1962 = $tmp1961->methods[1];
            panda$core$Object* $tmp1964 = $tmp1962(p$Iter1948);
            p1960 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1964);
            panda$core$MutableString$append$panda$core$String(typeName1942, separator1946);
            panda$core$MutableString$append$panda$core$String(typeName1942, ((org$pandalanguage$pandac$Symbol*) p1960->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes1939, ((panda$core$Object*) p1960->type));
            separator1946 = &$s1965;
        }
        goto $l1953;
        $l1954:;
    }
    panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp1967.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1942, &$s1968);
        kind1966 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName1942, &$s1969);
        kind1966 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes1939, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp1970 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1971 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1970);
    if ($tmp1971.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1942, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName1942, &$s1972);
    org$pandalanguage$pandac$Type* $tmp1973 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp1973->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp1973->refCount.value = 1;
    panda$core$String* $tmp1975 = panda$core$MutableString$convert$R$panda$core$String(typeName1942);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1973, $tmp1975, kind1966, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes1939), ((panda$core$Bit) { true }));
    return $tmp1973;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes1976;
    panda$core$MutableString* typeName1979;
    panda$collections$Iterator* p$Iter1983;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1995;
    panda$core$Int64 kind2001;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp1977 = (panda$collections$Array*) malloc(40);
    $tmp1977->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1977->refCount.value = 1;
    panda$collections$Array$init($tmp1977);
    subtypes1976 = $tmp1977;
    panda$core$MutableString* $tmp1980 = (panda$core$MutableString*) malloc(40);
    $tmp1980->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1980->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1980, &$s1982);
    typeName1979 = $tmp1980;
    panda$core$MutableString$append$panda$core$String(typeName1979, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes1976, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp1984 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1984->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1984 = $tmp1984->next;
        }
        $fn1986 $tmp1985 = $tmp1984->methods[0];
        panda$collections$Iterator* $tmp1987 = $tmp1985(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1983 = $tmp1987;
        $l1988:;
        ITable* $tmp1990 = p$Iter1983->$class->itable;
        while ($tmp1990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1990 = $tmp1990->next;
        }
        $fn1992 $tmp1991 = $tmp1990->methods[0];
        panda$core$Bit $tmp1993 = $tmp1991(p$Iter1983);
        panda$core$Bit $tmp1994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1993);
        if (!$tmp1994.value) goto $l1989;
        {
            ITable* $tmp1996 = p$Iter1983->$class->itable;
            while ($tmp1996->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1996 = $tmp1996->next;
            }
            $fn1998 $tmp1997 = $tmp1996->methods[1];
            panda$core$Object* $tmp1999 = $tmp1997(p$Iter1983);
            p1995 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1999);
            panda$core$MutableString$append$panda$core$String(typeName1979, &$s2000);
            panda$core$MutableString$append$panda$core$String(typeName1979, ((org$pandalanguage$pandac$Symbol*) p1995->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes1976, ((panda$core$Object*) p1995->type));
        }
        goto $l1988;
        $l1989:;
    }
    panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2002.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1979, &$s2003);
        kind2001 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName1979, &$s2004);
        kind2001 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes1976, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2005 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2006 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2005);
    if ($tmp2006.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1979, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName1979, &$s2007);
    org$pandalanguage$pandac$Type* $tmp2008 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2008->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2008->refCount.value = 1;
    panda$core$String* $tmp2010 = panda$core$MutableString$convert$R$panda$core$String(typeName1979);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2008, $tmp2010, kind2001, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes1976), ((panda$core$Bit) { true }));
    return $tmp2008;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2011;
    org$pandalanguage$pandac$MethodDecl* $tmp2012 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2011 = $tmp2012;
    if (((panda$core$Bit) { inherited2011 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2013 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2013;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2014 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2011);
    return $tmp2014;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2015 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2016 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2015);
    return $tmp2016;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2017;
    org$pandalanguage$pandac$MethodDecl* $tmp2018 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2017 = $tmp2018;
    if (((panda$core$Bit) { inherited2017 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2019 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2019;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2020 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2017, p_selfType);
    return $tmp2020;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2021;
        }
        break;
        case 52:
        {
            return &$s2022;
        }
        break;
        case 53:
        {
            return &$s2023;
        }
        break;
        case 54:
        {
            return &$s2024;
        }
        break;
        case 55:
        {
            return &$s2025;
        }
        break;
        case 56:
        {
            return &$s2026;
        }
        break;
        case 57:
        {
            return &$s2027;
        }
        break;
        case 58:
        {
            return &$s2028;
        }
        break;
        case 59:
        {
            return &$s2029;
        }
        break;
        case 63:
        {
            return &$s2030;
        }
        break;
        case 62:
        {
            return &$s2031;
        }
        break;
        case 65:
        {
            return &$s2032;
        }
        break;
        case 64:
        {
            return &$s2033;
        }
        break;
        case 68:
        {
            return &$s2034;
        }
        break;
        case 69:
        {
            return &$s2035;
        }
        break;
        case 66:
        {
            return &$s2036;
        }
        break;
        case 67:
        {
            return &$s2037;
        }
        break;
        case 70:
        {
            return &$s2038;
        }
        break;
        case 71:
        {
            return &$s2039;
        }
        break;
        case 49:
        {
            return &$s2040;
        }
        break;
        case 50:
        {
            return &$s2041;
        }
        break;
        case 72:
        {
            return &$s2042;
        }
        break;
        case 1:
        {
            return &$s2043;
        }
        break;
        case 101:
        {
            return &$s2044;
        }
        break;
        case 73:
        {
            return &$s2045;
        }
        break;
        case 60:
        {
            return &$s2046;
        }
        break;
        case 61:
        {
            return &$s2047;
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
            panda$core$Int64 $tmp2048 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2049.value);
            panda$core$Bit $tmp2050 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2050.value) {
            {
                panda$core$Object* $tmp2051 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2052 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2051));
                return $tmp2052;
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
            panda$core$Object* $tmp2053 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2054 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2053));
            return $tmp2054;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2080;
    panda$core$Int64 r2082;
    panda$core$Bit $tmp2056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2055 = $tmp2056.value;
    if ($tmp2055) goto $l2057;
    panda$core$Bit $tmp2058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2055 = $tmp2058.value;
    $l2057:;
    panda$core$Bit $tmp2059 = { $tmp2055 };
    PANDA_ASSERT($tmp2059.value);
    panda$core$Bit $tmp2061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2060 = $tmp2061.value;
    if ($tmp2060) goto $l2062;
    panda$core$Bit $tmp2063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2060 = $tmp2063.value;
    $l2062:;
    panda$core$Bit $tmp2064 = { $tmp2060 };
    PANDA_ASSERT($tmp2064.value);
    panda$core$Bit $tmp2067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2066 = $tmp2067.value;
    if ($tmp2066) goto $l2068;
    panda$core$UInt64 $tmp2070 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2071 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2070);
    bool $tmp2069 = $tmp2071.value;
    if (!$tmp2069) goto $l2072;
    panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2069 = $tmp2073.value;
    $l2072:;
    panda$core$Bit $tmp2074 = { $tmp2069 };
    $tmp2066 = $tmp2074.value;
    $l2068:;
    panda$core$Bit $tmp2075 = { $tmp2066 };
    bool $tmp2065 = $tmp2075.value;
    if ($tmp2065) goto $l2076;
    panda$core$UInt64 $tmp2077 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2078 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2077);
    $tmp2065 = $tmp2078.value;
    $l2076:;
    panda$core$Bit $tmp2079 = { $tmp2065 };
    if ($tmp2079.value) {
    {
        panda$core$Int64 $tmp2081 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2080 = $tmp2081;
        panda$core$Int64 $tmp2083 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2082 = $tmp2083;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2084 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2084->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2084->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2086 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2087 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2088 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2087);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2084, ((panda$core$Int64) { 1004 }), p_offset, $tmp2086, $tmp2088);
                return $tmp2084;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2089 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2089->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2089->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2091 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2092 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2093 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2092);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2089, ((panda$core$Int64) { 1004 }), p_offset, $tmp2091, $tmp2093);
                return $tmp2089;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2094 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2094->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2094->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2096 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2097 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2098 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2097);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2094, ((panda$core$Int64) { 1004 }), p_offset, $tmp2096, $tmp2098);
                return $tmp2094;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2099 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2099->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2099->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2101 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2102 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2103 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2102);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2099, ((panda$core$Int64) { 1004 }), p_offset, $tmp2101, $tmp2103);
                return $tmp2099;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2104 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2104->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2104->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2106 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2107 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2108 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2107);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2104, ((panda$core$Int64) { 1004 }), p_offset, $tmp2106, $tmp2108);
                return $tmp2104;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2109 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2109->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2109->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2111 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2080, r2082);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2109, ((panda$core$Int64) { 1011 }), p_offset, $tmp2111, $tmp2112);
                return $tmp2109;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2113 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2113->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2113->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2115 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2116 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2080, r2082);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2113, ((panda$core$Int64) { 1011 }), p_offset, $tmp2115, $tmp2116);
                return $tmp2113;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2117 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2117->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2117->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2119 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2120 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2080, r2082);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2117, ((panda$core$Int64) { 1011 }), p_offset, $tmp2119, $tmp2120);
                return $tmp2117;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2121 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2121->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2121->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2123 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2124 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2080, r2082);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2121, ((panda$core$Int64) { 1011 }), p_offset, $tmp2123, $tmp2124);
                return $tmp2121;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2125 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2125->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2125->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2127 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2128 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2080, r2082);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2125, ((panda$core$Int64) { 1011 }), p_offset, $tmp2127, $tmp2128);
                return $tmp2125;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2129 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2129->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2129->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2131 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2132 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2080, r2082);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2129, ((panda$core$Int64) { 1011 }), p_offset, $tmp2131, $tmp2132);
                return $tmp2129;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2133 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2133->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2133->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2135 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2136 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2137 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2136);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2133, ((panda$core$Int64) { 1004 }), p_offset, $tmp2135, $tmp2137);
                return $tmp2133;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2138 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2138->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2138->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2140 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2141 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2142 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2141);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2138, ((panda$core$Int64) { 1004 }), p_offset, $tmp2140, $tmp2142);
                return $tmp2138;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2143 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2143->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2143->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2145 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2146 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2147 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2146);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2143, ((panda$core$Int64) { 1004 }), p_offset, $tmp2145, $tmp2147);
                return $tmp2143;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2148 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2148->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2148->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2150 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2151 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2152 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2151);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2148, ((panda$core$Int64) { 1004 }), p_offset, $tmp2150, $tmp2152);
                return $tmp2148;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2153 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2153->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2153->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2155 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2156 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2080, r2082);
                panda$core$UInt64 $tmp2157 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2156);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2153, ((panda$core$Int64) { 1004 }), p_offset, $tmp2155, $tmp2157);
                return $tmp2153;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s2158);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2159.value) {
    {
        panda$core$Object* $tmp2160 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2160);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2165;
    org$pandalanguage$pandac$IRNode* resolved2173;
    panda$collections$Array* children2178;
    panda$core$UInt64 baseId2184;
    org$pandalanguage$pandac$IRNode* base2185;
    panda$core$UInt64 indexId2192;
    org$pandalanguage$pandac$IRNode* index2193;
    org$pandalanguage$pandac$IRNode* baseRef2198;
    org$pandalanguage$pandac$IRNode* indexRef2201;
    org$pandalanguage$pandac$IRNode* rhsIndex2204;
    org$pandalanguage$pandac$IRNode* value2206;
    panda$core$Bit $tmp2161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2161.value);
    panda$core$Int64 $tmp2162 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2162, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2163.value);
    panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2164.value) {
    {
        panda$collections$Array* $tmp2166 = (panda$collections$Array*) malloc(40);
        $tmp2166->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2166->refCount.value = 1;
        panda$collections$Array$init($tmp2166);
        args2165 = $tmp2166;
        panda$core$Object* $tmp2168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2165, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2168)));
        panda$collections$Array$add$panda$collections$Array$T(args2165, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2169 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2171 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2169), &$s2170, ((panda$collections$ListView*) args2165));
        return $tmp2171;
    }
    }
    panda$core$Bit $tmp2172 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2172.value);
    org$pandalanguage$pandac$IRNode* $tmp2174 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2173 = $tmp2174;
    if (((panda$core$Bit) { resolved2173 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2175 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2173);
    resolved2173 = $tmp2175;
    panda$core$Int64 $tmp2176 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2173->children);
    panda$core$Bit $tmp2177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2176, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2177.value);
    panda$collections$Array* $tmp2179 = (panda$collections$Array*) malloc(40);
    $tmp2179->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2179->refCount.value = 1;
    panda$collections$Array$init($tmp2179);
    children2178 = $tmp2179;
    panda$core$Object* $tmp2181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2173->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2182 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2181));
    panda$collections$Array$add$panda$collections$Array$T(children2178, ((panda$core$Object*) $tmp2182));
    panda$core$UInt64 $tmp2183 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2183;
    baseId2184 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2186 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2186->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2186->refCount.value = 1;
    panda$core$Object* $tmp2188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2178, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2178, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2186, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2188)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2189)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2184)), ((panda$collections$ListView*) children2178));
    base2185 = $tmp2186;
    panda$collections$Array$clear(children2178);
    panda$core$Object* $tmp2190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2173->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2178, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2190)));
    panda$core$UInt64 $tmp2191 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2191;
    indexId2192 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2194 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2194->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2194->refCount.value = 1;
    panda$core$Object* $tmp2196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2178, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2178, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2194, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2196)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2197)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2192)), ((panda$collections$ListView*) children2178));
    index2193 = $tmp2194;
    org$pandalanguage$pandac$IRNode* $tmp2199 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2199->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2199, ((panda$core$Int64) { 1028 }), base2185->offset, base2185->type, baseId2184);
    baseRef2198 = $tmp2199;
    org$pandalanguage$pandac$IRNode* $tmp2202 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2202->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2202->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2202, ((panda$core$Int64) { 1028 }), index2193->offset, index2193->type, indexId2192);
    indexRef2201 = $tmp2202;
    org$pandalanguage$pandac$IRNode* $tmp2205 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, baseRef2198, ((panda$core$Int64) { 101 }), indexRef2201);
    rhsIndex2204 = $tmp2205;
    if (((panda$core$Bit) { rhsIndex2204 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2207 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2208 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, rhsIndex2204, $tmp2207, p_right);
    value2206 = $tmp2208;
    if (((panda$core$Bit) { value2206 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2211 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2204->type);
    bool $tmp2210 = $tmp2211.value;
    if (!$tmp2210) goto $l2212;
    panda$core$Bit $tmp2213 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2210 = $tmp2213.value;
    $l2212:;
    panda$core$Bit $tmp2214 = { $tmp2210 };
    bool $tmp2209 = $tmp2214.value;
    if (!$tmp2209) goto $l2215;
    panda$core$Bit $tmp2216 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2204->type, value2206->type);
    $tmp2209 = $tmp2216.value;
    $l2215:;
    panda$core$Bit $tmp2217 = { $tmp2209 };
    if ($tmp2217.value) {
    {
        panda$collections$Array* $tmp2219 = (panda$collections$Array*) malloc(40);
        $tmp2219->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2219->refCount.value = 1;
        panda$collections$Array$init($tmp2219);
        org$pandalanguage$pandac$IRNode* $tmp2221 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2206, &$s2218, ((panda$collections$ListView*) $tmp2219), resolved2173->type);
        value2206 = $tmp2221;
        if (((panda$core$Bit) { value2206 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2178);
    panda$collections$Array$add$panda$collections$Array$T(children2178, ((panda$core$Object*) index2193));
    panda$collections$Array$add$panda$collections$Array$T(children2178, ((panda$core$Object*) value2206));
    org$pandalanguage$pandac$IRNode* $tmp2223 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2185, &$s2222, ((panda$collections$ListView*) children2178));
    return $tmp2223;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2224;
    org$pandalanguage$pandac$IRNode* right2225;
    panda$core$Int64 kind2249;
    org$pandalanguage$pandac$IRNode* resolved2256;
    panda$collections$Array* children2258;
    org$pandalanguage$pandac$IRNode* resolved2265;
    panda$collections$Array* children2267;
    org$pandalanguage$pandac$ClassDecl* cl2279;
    org$pandalanguage$pandac$ClassDecl* cl2296;
    org$pandalanguage$pandac$IRNode* finalLeft2312;
    org$pandalanguage$pandac$IRNode* finalRight2315;
    panda$collections$Array* children2318;
    panda$collections$Array* children2332;
    panda$collections$Array* children2344;
    org$pandalanguage$pandac$IRNode* reusedLeft2350;
    org$pandalanguage$pandac$ClassDecl* cl2367;
    panda$collections$ListView* parameters2369;
    org$pandalanguage$pandac$Symbol* methods2371;
    org$pandalanguage$pandac$Type* type2375;
    panda$collections$Array* types2376;
    org$pandalanguage$pandac$MethodDecl* m2380;
    panda$collections$Iterator* m$Iter2385;
    org$pandalanguage$pandac$MethodDecl* m2397;
    panda$collections$Array* children2408;
    panda$collections$Array* children2437;
    panda$collections$Array* children2453;
    org$pandalanguage$pandac$Type* resultType2476;
    org$pandalanguage$pandac$IRNode* result2480;
    org$pandalanguage$pandac$IRNode* resolved2483;
    org$pandalanguage$pandac$IRNode* target2489;
    left2224 = p_rawLeft;
    right2225 = p_rawRight;
    panda$core$Bit $tmp2226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2224->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2226.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2227 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2225);
        right2225 = $tmp2227;
        if (((panda$core$Bit) { right2225 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2228 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2224, right2225->type);
        if (((panda$core$Bit) { $tmp2228.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2229 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2224, right2225->type);
            left2224 = $tmp2229;
        }
        }
    }
    }
    panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2225->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2230 = $tmp2231.value;
    if (!$tmp2230) goto $l2232;
    panda$core$Int64$nullable $tmp2233 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2225, left2224->type);
    $tmp2230 = ((panda$core$Bit) { $tmp2233.nonnull }).value;
    $l2232:;
    panda$core$Bit $tmp2234 = { $tmp2230 };
    if ($tmp2234.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2235 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2225, left2224->type);
        right2225 = $tmp2235;
    }
    }
    panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2238 = $tmp2239.value;
    if ($tmp2238) goto $l2240;
    panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2238 = $tmp2241.value;
    $l2240:;
    panda$core$Bit $tmp2242 = { $tmp2238 };
    bool $tmp2237 = $tmp2242.value;
    if ($tmp2237) goto $l2243;
    panda$core$Bit $tmp2244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2237 = $tmp2244.value;
    $l2243:;
    panda$core$Bit $tmp2245 = { $tmp2237 };
    bool $tmp2236 = $tmp2245.value;
    if ($tmp2236) goto $l2246;
    panda$core$Bit $tmp2247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2236 = $tmp2247.value;
    $l2246:;
    panda$core$Bit $tmp2248 = { $tmp2236 };
    if ($tmp2248.value) {
    {
        panda$core$Bit $tmp2251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2250 = $tmp2251.value;
        if ($tmp2250) goto $l2252;
        panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2250 = $tmp2253.value;
        $l2252:;
        panda$core$Bit $tmp2254 = { $tmp2250 };
        if ($tmp2254.value) {
        {
            kind2249 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2249 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2224->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2255.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2257 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2225);
            resolved2256 = $tmp2257;
            if (((panda$core$Bit) { resolved2256 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2259 = (panda$collections$Array*) malloc(40);
            $tmp2259->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2259->refCount.value = 1;
            panda$collections$Array$init($tmp2259);
            children2258 = $tmp2259;
            panda$collections$Array$add$panda$collections$Array$T(children2258, ((panda$core$Object*) resolved2256));
            org$pandalanguage$pandac$IRNode* $tmp2261 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2261->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2261->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2263 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2261, kind2249, p_offset, $tmp2263, ((panda$collections$ListView*) children2258));
            return $tmp2261;
        }
        }
        panda$core$Bit $tmp2264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2225->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2264.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2266 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2224);
            resolved2265 = $tmp2266;
            if (((panda$core$Bit) { resolved2265 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2268 = (panda$collections$Array*) malloc(40);
            $tmp2268->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2268->refCount.value = 1;
            panda$collections$Array$init($tmp2268);
            children2267 = $tmp2268;
            panda$collections$Array$add$panda$collections$Array$T(children2267, ((panda$core$Object*) resolved2265));
            org$pandalanguage$pandac$IRNode* $tmp2270 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2270->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2270->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2272 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2270, kind2249, p_offset, $tmp2272, ((panda$collections$ListView*) children2267));
            return $tmp2270;
        }
        }
    }
    }
    panda$core$Bit $tmp2274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2273 = $tmp2274.value;
    if ($tmp2273) goto $l2275;
    panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2273 = $tmp2276.value;
    $l2275:;
    panda$core$Bit $tmp2277 = { $tmp2273 };
    if ($tmp2277.value) {
    {
        panda$core$Bit $tmp2278 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2224->type);
        if ($tmp2278.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2280 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2224->type);
            cl2279 = $tmp2280;
            if (((panda$core$Bit) { cl2279 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2281 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2279);
            if ($tmp2281.value) {
            {
                panda$core$String* $tmp2283 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2282, $tmp2283);
                panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, &$s2285);
                panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2286, ((panda$core$Object*) left2224->type));
                panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
                panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2290, ((panda$core$Object*) right2225->type));
                panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, &$s2292);
                panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, $tmp2293);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2294);
            }
            }
        }
        }
        panda$core$Bit $tmp2295 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2225->type);
        if ($tmp2295.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2297 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2225->type);
            cl2296 = $tmp2297;
            if (((panda$core$Bit) { cl2296 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2298 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2296);
            if ($tmp2298.value) {
            {
                panda$core$String* $tmp2300 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2299, $tmp2300);
                panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2302);
                panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2303, ((panda$core$Object*) left2224->type));
                panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, &$s2305);
                panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2307, ((panda$core$Object*) right2225->type));
                panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2309);
                panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, $tmp2310);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2311);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2313 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2314 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2224, $tmp2313);
        finalLeft2312 = $tmp2314;
        if (((panda$core$Bit) { finalLeft2312 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2316 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2317 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2225, $tmp2316);
        finalRight2315 = $tmp2317;
        if (((panda$core$Bit) { finalRight2315 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2319 = (panda$collections$Array*) malloc(40);
        $tmp2319->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2319->refCount.value = 1;
        panda$collections$Array$init($tmp2319);
        children2318 = $tmp2319;
        panda$collections$Array$add$panda$collections$Array$T(children2318, ((panda$core$Object*) finalLeft2312));
        panda$collections$Array$add$panda$collections$Array$T(children2318, ((panda$core$Object*) finalRight2315));
        org$pandalanguage$pandac$IRNode* $tmp2321 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2321->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2321->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2323 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2321, ((panda$core$Int64) { 1023 }), p_offset, $tmp2323, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2318));
        return $tmp2321;
    }
    }
    panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2324.value) {
    {
        panda$core$Bit $tmp2325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2224->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2325.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2326 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2224, p_op, right2225);
            return $tmp2326;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2327 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2224);
        left2224 = $tmp2327;
        if (((panda$core$Bit) { left2224 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2328 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2225, left2224->type);
        right2225 = $tmp2328;
        if (((panda$core$Bit) { right2225 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2329 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2224);
        panda$core$Bit $tmp2330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2329);
        if ($tmp2330.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2224->offset, &$s2331);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2333 = (panda$collections$Array*) malloc(40);
        $tmp2333->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2333->refCount.value = 1;
        panda$collections$Array$init($tmp2333);
        children2332 = $tmp2333;
        panda$collections$Array$add$panda$collections$Array$T(children2332, ((panda$core$Object*) left2224));
        panda$collections$Array$add$panda$collections$Array$T(children2332, ((panda$core$Object*) right2225));
        org$pandalanguage$pandac$IRNode* $tmp2335 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2335->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2335->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2335, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2332));
        return $tmp2335;
    }
    }
    panda$core$Bit $tmp2337 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2337.value) {
    {
        panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2224->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2338.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2339 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2224, p_op, right2225);
            return $tmp2339;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2340 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2224);
        left2224 = $tmp2340;
        if (((panda$core$Bit) { left2224 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2341 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2224);
        panda$core$Bit $tmp2342 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2341);
        if ($tmp2342.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2224->offset, &$s2343);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2345 = (panda$collections$Array*) malloc(40);
        $tmp2345->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2345->refCount.value = 1;
        panda$collections$Array$init($tmp2345);
        children2344 = $tmp2345;
        panda$collections$Array$add$panda$collections$Array$T(children2344, ((panda$core$Object*) left2224));
        panda$core$UInt64 $tmp2347 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2347;
        org$pandalanguage$pandac$IRNode* $tmp2348 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2348->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2348->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2348, ((panda$core$Int64) { 1027 }), left2224->offset, left2224->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2344));
        left2224 = $tmp2348;
        org$pandalanguage$pandac$IRNode* $tmp2351 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2351->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2351->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2351, ((panda$core$Int64) { 1028 }), left2224->offset, left2224->type, self->reusedValueCount);
        reusedLeft2350 = $tmp2351;
        panda$core$Int64 $tmp2353 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2354 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, reusedLeft2350, $tmp2353, right2225);
        right2225 = $tmp2354;
        if (((panda$core$Bit) { right2225 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2356 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2224->type);
        bool $tmp2355 = $tmp2356.value;
        if (!$tmp2355) goto $l2357;
        panda$core$Bit $tmp2358 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2224->type, right2225->type);
        $tmp2355 = $tmp2358.value;
        $l2357:;
        panda$core$Bit $tmp2359 = { $tmp2355 };
        if ($tmp2359.value) {
        {
            panda$collections$Array* $tmp2361 = (panda$collections$Array*) malloc(40);
            $tmp2361->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2361->refCount.value = 1;
            panda$collections$Array$init($tmp2361);
            org$pandalanguage$pandac$IRNode* $tmp2363 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2225, &$s2360, ((panda$collections$ListView*) $tmp2361), left2224->type);
            right2225 = $tmp2363;
            if (((panda$core$Bit) { right2225 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2364 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2224, ((panda$core$Int64) { 73 }), right2225);
        return $tmp2364;
    }
    }
    panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2365.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2366 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2224);
        left2224 = $tmp2366;
        if (((panda$core$Bit) { left2224 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2368 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2224->type);
        cl2367 = $tmp2368;
        if (((panda$core$Bit) { cl2367 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2370 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2224->type);
        parameters2369 = $tmp2370;
        org$pandalanguage$pandac$SymbolTable* $tmp2372 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2367);
        org$pandalanguage$pandac$Symbol* $tmp2374 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2372, &$s2373);
        methods2371 = $tmp2374;
        if (((panda$core$Bit) { methods2371 != NULL }).value) {
        {
            panda$collections$Array* $tmp2377 = (panda$collections$Array*) malloc(40);
            $tmp2377->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2377->refCount.value = 1;
            panda$collections$Array$init($tmp2377);
            types2376 = $tmp2377;
            panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2371->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2379.value) {
            {
                m2380 = ((org$pandalanguage$pandac$MethodDecl*) methods2371);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2380);
                org$pandalanguage$pandac$MethodRef* $tmp2381 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2381->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2381->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2381, m2380, parameters2369);
                org$pandalanguage$pandac$Type* $tmp2383 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2381);
                panda$collections$Array$add$panda$collections$Array$T(types2376, ((panda$core$Object*) $tmp2383));
            }
            }
            else {
            {
                panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2371->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2384.value);
                {
                    ITable* $tmp2386 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2371)->methods)->$class->itable;
                    while ($tmp2386->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2386 = $tmp2386->next;
                    }
                    $fn2388 $tmp2387 = $tmp2386->methods[0];
                    panda$collections$Iterator* $tmp2389 = $tmp2387(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2371)->methods));
                    m$Iter2385 = $tmp2389;
                    $l2390:;
                    ITable* $tmp2392 = m$Iter2385->$class->itable;
                    while ($tmp2392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2392 = $tmp2392->next;
                    }
                    $fn2394 $tmp2393 = $tmp2392->methods[0];
                    panda$core$Bit $tmp2395 = $tmp2393(m$Iter2385);
                    panda$core$Bit $tmp2396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2395);
                    if (!$tmp2396.value) goto $l2391;
                    {
                        ITable* $tmp2398 = m$Iter2385->$class->itable;
                        while ($tmp2398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2398 = $tmp2398->next;
                        }
                        $fn2400 $tmp2399 = $tmp2398->methods[1];
                        panda$core$Object* $tmp2401 = $tmp2399(m$Iter2385);
                        m2397 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2401);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2397);
                        org$pandalanguage$pandac$MethodRef* $tmp2402 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2402->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2402->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2402, m2397, parameters2369);
                        org$pandalanguage$pandac$Type* $tmp2404 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2402);
                        panda$collections$Array$add$panda$collections$Array$T(types2376, ((panda$core$Object*) $tmp2404));
                    }
                    goto $l2390;
                    $l2391:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2405 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp2405->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2405->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2405, ((panda$collections$ListView*) types2376));
            type2375 = $tmp2405;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2407 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2375 = $tmp2407;
        }
        }
        panda$collections$Array* $tmp2409 = (panda$collections$Array*) malloc(40);
        $tmp2409->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2409->refCount.value = 1;
        panda$collections$Array$init($tmp2409);
        children2408 = $tmp2409;
        panda$collections$Array$add$panda$collections$Array$T(children2408, ((panda$core$Object*) left2224));
        panda$collections$Array$add$panda$collections$Array$T(children2408, ((panda$core$Object*) right2225));
        org$pandalanguage$pandac$IRNode* $tmp2411 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2411->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2411->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2411, ((panda$core$Int64) { 1040 }), p_offset, type2375, ((panda$collections$ListView*) children2408));
        return $tmp2411;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2413 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2414 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2224->type, $tmp2413);
    if ($tmp2414.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2416 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2417 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2225->type, $tmp2416);
        bool $tmp2415 = $tmp2417.value;
        if (!$tmp2415) goto $l2418;
        panda$core$Bit $tmp2423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2422 = $tmp2423.value;
        if ($tmp2422) goto $l2424;
        panda$core$Bit $tmp2425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2422 = $tmp2425.value;
        $l2424:;
        panda$core$Bit $tmp2426 = { $tmp2422 };
        bool $tmp2421 = $tmp2426.value;
        if ($tmp2421) goto $l2427;
        panda$core$Bit $tmp2428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2421 = $tmp2428.value;
        $l2427:;
        panda$core$Bit $tmp2429 = { $tmp2421 };
        bool $tmp2420 = $tmp2429.value;
        if ($tmp2420) goto $l2430;
        panda$core$Bit $tmp2431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2420 = $tmp2431.value;
        $l2430:;
        panda$core$Bit $tmp2432 = { $tmp2420 };
        bool $tmp2419 = $tmp2432.value;
        if ($tmp2419) goto $l2433;
        panda$core$Bit $tmp2434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2419 = $tmp2434.value;
        $l2433:;
        panda$core$Bit $tmp2435 = { $tmp2419 };
        $tmp2415 = $tmp2435.value;
        $l2418:;
        panda$core$Bit $tmp2436 = { $tmp2415 };
        if ($tmp2436.value) {
        {
            panda$collections$Array* $tmp2438 = (panda$collections$Array*) malloc(40);
            $tmp2438->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2438->refCount.value = 1;
            panda$collections$Array$init($tmp2438);
            children2437 = $tmp2438;
            panda$collections$Array$add$panda$collections$Array$T(children2437, ((panda$core$Object*) left2224));
            panda$collections$Array$add$panda$collections$Array$T(children2437, ((panda$core$Object*) right2225));
            org$pandalanguage$pandac$IRNode* $tmp2440 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2440->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2440->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2440, ((panda$core$Int64) { 1023 }), p_offset, left2224->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2437));
            return $tmp2440;
        }
        }
        panda$core$String* $tmp2443 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2442, $tmp2443);
        panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2444, &$s2445);
        panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2446, ((panda$core$Object*) left2224->type));
        panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2447, &$s2448);
        panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2449, ((panda$core$Object*) right2225->type));
        panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, &$s2451);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2452);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2454 = (panda$collections$Array*) malloc(40);
    $tmp2454->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2454->refCount.value = 1;
    panda$collections$Array$init($tmp2454);
    children2453 = $tmp2454;
    panda$core$Bit $tmp2458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2224->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2457 = $tmp2458.value;
    if ($tmp2457) goto $l2459;
    panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2224->kind, ((panda$core$Int64) { 1032 }));
    $tmp2457 = $tmp2460.value;
    $l2459:;
    panda$core$Bit $tmp2461 = { $tmp2457 };
    bool $tmp2456 = $tmp2461.value;
    if (!$tmp2456) goto $l2462;
    panda$core$Bit $tmp2464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2225->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2463 = $tmp2464.value;
    if ($tmp2463) goto $l2465;
    panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2225->kind, ((panda$core$Int64) { 1032 }));
    $tmp2463 = $tmp2466.value;
    $l2465:;
    panda$core$Bit $tmp2467 = { $tmp2463 };
    $tmp2456 = $tmp2467.value;
    $l2462:;
    panda$core$Bit $tmp2468 = { $tmp2456 };
    if ($tmp2468.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2469 = org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2224, p_op, right2225);
        return $tmp2469;
    }
    }
    panda$core$Bit $tmp2471 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2224->type);
    bool $tmp2470 = $tmp2471.value;
    if (!$tmp2470) goto $l2472;
    panda$core$Int64$nullable $tmp2473 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2225, left2224->type);
    $tmp2470 = ((panda$core$Bit) { $tmp2473.nonnull }).value;
    $l2472:;
    panda$core$Bit $tmp2474 = { $tmp2470 };
    if ($tmp2474.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2475 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2225, left2224->type);
        right2225 = $tmp2475;
        PANDA_ASSERT(((panda$core$Bit) { right2225 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2453, ((panda$core$Object*) left2224));
        panda$collections$Array$add$panda$collections$Array$T(children2453, ((panda$core$Object*) right2225));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2477 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2476 = $tmp2477;
            }
            break;
            default:
            {
                resultType2476 = left2224->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2478 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2478->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2478->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2478, ((panda$core$Int64) { 1023 }), p_offset, resultType2476, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2453));
        return $tmp2478;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2453, ((panda$core$Object*) right2225));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2481 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2482 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2224, $tmp2481, ((panda$collections$ListView*) children2453));
    result2480 = $tmp2482;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2480 == NULL }).value) {
    {
        panda$collections$Array$clear(children2453);
        panda$collections$Array$add$panda$collections$Array$T(children2453, ((panda$core$Object*) left2224));
        org$pandalanguage$pandac$IRNode* $tmp2484 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2225);
        resolved2483 = $tmp2484;
        bool $tmp2485 = ((panda$core$Bit) { resolved2483 != NULL }).value;
        if (!$tmp2485) goto $l2486;
        panda$core$Bit $tmp2487 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2483->type);
        $tmp2485 = $tmp2487.value;
        $l2486:;
        panda$core$Bit $tmp2488 = { $tmp2485 };
        if ($tmp2488.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2453, ((panda$core$Object*) resolved2483));
            org$pandalanguage$pandac$IRNode* $tmp2490 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2490->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2490->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2492 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2490, ((panda$core$Int64) { 1001 }), resolved2483->offset, $tmp2492, resolved2483->type);
            target2489 = $tmp2490;
            panda$core$String* $tmp2493 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2494 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2489, $tmp2493, ((panda$collections$ListView*) children2453));
            result2480 = $tmp2494;
        }
        }
    }
    }
    return result2480;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2495;
    org$pandalanguage$pandac$IRNode* right2498;
    panda$core$Object* $tmp2496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2497 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2496));
    left2495 = $tmp2497;
    if (((panda$core$Bit) { left2495 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2500 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2499));
    right2498 = $tmp2500;
    if (((panda$core$Bit) { right2498 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2501 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->offset, left2495, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2498);
    return $tmp2501;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2508;
    panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 22 }));
    if ($tmp2502.value) {
    {
        panda$core$Object* $tmp2503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$collections$ListView* $tmp2504 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2503));
        return $tmp2504;
    }
    }
    panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2505.value) {
    {
        panda$core$Int64 $tmp2506 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
        panda$core$Bit $tmp2507 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2506, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp2507.value);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2508, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp2509 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2508);
        return ((panda$collections$ListView*) $tmp2509);
    }
    }
    else {
    {
        panda$collections$Array* $tmp2510 = (panda$collections$Array*) malloc(40);
        $tmp2510->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2510->refCount.value = 1;
        panda$collections$Array$init($tmp2510);
        return ((panda$collections$ListView*) $tmp2510);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    org$pandalanguage$pandac$Type* type2514;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2512.value) {
        {
            panda$collections$ListView* $tmp2513 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2513;
        }
        }
        panda$core$Bit $tmp2515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2515.value) {
        {
            panda$core$Object* $tmp2516 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->type->subtypes, ((panda$core$Int64) { 0 }));
            type2514 = ((org$pandalanguage$pandac$Type*) $tmp2516);
        }
        }
        else {
        {
            type2514 = p_target->type;
        }
        }
        panda$collections$ListView* $tmp2517 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, type2514);
        return $tmp2517;
    }
    }
    panda$collections$Array* $tmp2518 = (panda$collections$Array*) malloc(40);
    $tmp2518->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2518->refCount.value = 1;
    panda$collections$Array$init($tmp2518);
    return ((panda$collections$ListView*) $tmp2518);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name2521;
    org$pandalanguage$pandac$ClassDecl* cl2523;
    org$pandalanguage$pandac$Symbol* s2525;
    org$pandalanguage$pandac$MethodDecl* m2528;
    panda$collections$Iterator* test$Iter2533;
    org$pandalanguage$pandac$MethodDecl* test2545;
    org$pandalanguage$pandac$MethodRef* ref2557;
    panda$collections$Array* children2561;
    org$pandalanguage$pandac$IRNode* methodRef2564;
    panda$collections$Array* args2570;
    panda$collections$Array* children2579;
    panda$collections$Array* children2589;
    org$pandalanguage$pandac$IRNode* coerced2598;
    panda$collections$Array* children2601;
    panda$core$Bit $tmp2520 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2520.value) {
    {
        panda$core$String* $tmp2522 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2521 = $tmp2522;
        org$pandalanguage$pandac$ClassDecl* $tmp2524 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2523 = $tmp2524;
        if (((panda$core$Bit) { cl2523 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2526 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2523);
        org$pandalanguage$pandac$Symbol* $tmp2527 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2526, name2521);
        s2525 = $tmp2527;
        if (((panda$core$Bit) { s2525 != NULL }).value) {
        {
            m2528 = NULL;
            switch (s2525->kind.value) {
                case 204:
                {
                    m2528 = ((org$pandalanguage$pandac$MethodDecl*) s2525);
                    panda$core$Int64 $tmp2529 = panda$collections$Array$get_count$R$panda$core$Int64(m2528->parameters);
                    panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2529, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2530.value);
                    panda$core$Bit $tmp2531 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2528->annotations);
                    panda$core$Bit $tmp2532 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2531);
                    PANDA_ASSERT($tmp2532.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2534 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2525)->methods)->$class->itable;
                        while ($tmp2534->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2534 = $tmp2534->next;
                        }
                        $fn2536 $tmp2535 = $tmp2534->methods[0];
                        panda$collections$Iterator* $tmp2537 = $tmp2535(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2525)->methods));
                        test$Iter2533 = $tmp2537;
                        $l2538:;
                        ITable* $tmp2540 = test$Iter2533->$class->itable;
                        while ($tmp2540->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2540 = $tmp2540->next;
                        }
                        $fn2542 $tmp2541 = $tmp2540->methods[0];
                        panda$core$Bit $tmp2543 = $tmp2541(test$Iter2533);
                        panda$core$Bit $tmp2544 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2543);
                        if (!$tmp2544.value) goto $l2539;
                        {
                            ITable* $tmp2546 = test$Iter2533->$class->itable;
                            while ($tmp2546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2546 = $tmp2546->next;
                            }
                            $fn2548 $tmp2547 = $tmp2546->methods[1];
                            panda$core$Object* $tmp2549 = $tmp2547(test$Iter2533);
                            test2545 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2549);
                            panda$core$Bit $tmp2551 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2545->annotations);
                            panda$core$Bit $tmp2552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2551);
                            bool $tmp2550 = $tmp2552.value;
                            if (!$tmp2550) goto $l2553;
                            panda$core$Int64 $tmp2554 = panda$collections$Array$get_count$R$panda$core$Int64(test2545->parameters);
                            panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2554, ((panda$core$Int64) { 0 }));
                            $tmp2550 = $tmp2555.value;
                            $l2553:;
                            panda$core$Bit $tmp2556 = { $tmp2550 };
                            if ($tmp2556.value) {
                            {
                                m2528 = test2545;
                                goto $l2539;
                            }
                            }
                        }
                        goto $l2538;
                        $l2539:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2528 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2528);
                org$pandalanguage$pandac$MethodRef* $tmp2558 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2558->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2558->refCount.value = 1;
                panda$collections$ListView* $tmp2560 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2558, m2528, $tmp2560);
                ref2557 = $tmp2558;
                panda$collections$Array* $tmp2562 = (panda$collections$Array*) malloc(40);
                $tmp2562->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2562->refCount.value = 1;
                panda$collections$Array$init($tmp2562);
                children2561 = $tmp2562;
                panda$collections$Array$add$panda$collections$Array$T(children2561, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2565 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2565->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2565->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2567 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp2567->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2567->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2567, &$s2569, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2565, ((panda$core$Int64) { 1002 }), p_offset, $tmp2567, ((panda$core$Object*) ref2557), ((panda$collections$ListView*) children2561));
                methodRef2564 = $tmp2565;
                panda$collections$Array* $tmp2571 = (panda$collections$Array*) malloc(40);
                $tmp2571->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2571->refCount.value = 1;
                panda$collections$Array$init($tmp2571);
                args2570 = $tmp2571;
                org$pandalanguage$pandac$IRNode* $tmp2573 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2564, ((panda$collections$ListView*) args2570));
                return $tmp2573;
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
                    org$pandalanguage$pandac$IRNode* $tmp2574 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2574->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2574->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2574, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2574;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2576 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2576->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2576, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2576;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2578 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2578.value) {
                    {
                        panda$collections$Array* $tmp2580 = (panda$collections$Array*) malloc(40);
                        $tmp2580->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2580->refCount.value = 1;
                        panda$collections$Array$init($tmp2580);
                        children2579 = $tmp2580;
                        panda$collections$Array$add$panda$collections$Array$T(children2579, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2582 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp2582->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2582->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2582, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2579));
                        return $tmp2582;
                    }
                    }
                }
            }
            panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2584, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2587);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2588 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2588.value) {
            {
                panda$collections$Array* $tmp2590 = (panda$collections$Array*) malloc(40);
                $tmp2590->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2590->refCount.value = 1;
                panda$collections$Array$init($tmp2590);
                children2589 = $tmp2590;
                panda$collections$Array$add$panda$collections$Array$T(children2589, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2592 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2592->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2592->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2592, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2589));
                return $tmp2592;
            }
            }
            else {
            {
                panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2594, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, &$s2596);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2597);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2599 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2600 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2599);
            coerced2598 = $tmp2600;
            if (((panda$core$Bit) { coerced2598 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2602 = (panda$collections$Array*) malloc(40);
            $tmp2602->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2602->refCount.value = 1;
            panda$collections$Array$init($tmp2602);
            children2601 = $tmp2602;
            panda$collections$Array$add$panda$collections$Array$T(children2601, ((panda$core$Object*) coerced2598));
            org$pandalanguage$pandac$IRNode* $tmp2604 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2604->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2604->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2604, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2601));
            return $tmp2604;
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
    org$pandalanguage$pandac$IRNode* base2609;
    panda$core$Bit $tmp2606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2606.value);
    panda$core$Int64 $tmp2607 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2607, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2608.value);
    panda$core$Object* $tmp2610 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2611 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2610));
    base2609 = $tmp2611;
    if (((panda$core$Bit) { base2609 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2612 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2609, p_p->offset);
    return $tmp2612;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2614;
    panda$collections$Array* args2617;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2620;
    org$pandalanguage$pandac$IRNode* arg2640;
    panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2613.value);
    panda$core$Object* $tmp2615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2616 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2615));
    m2614 = $tmp2616;
    if (((panda$core$Bit) { m2614 != NULL }).value) {
    {
        panda$collections$Array* $tmp2618 = (panda$collections$Array*) malloc(40);
        $tmp2618->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2618->refCount.value = 1;
        panda$collections$Array$init($tmp2618);
        args2617 = $tmp2618;
        panda$core$Int64 $tmp2621 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2620, ((panda$core$Int64) { 1 }), $tmp2621, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp2623 = $tmp2620.start.value;
        panda$core$Int64 i2622 = { $tmp2623 };
        int64_t $tmp2625 = $tmp2620.end.value;
        int64_t $tmp2626 = $tmp2620.step.value;
        bool $tmp2627 = $tmp2620.inclusive.value;
        bool $tmp2634 = $tmp2626 > 0;
        if ($tmp2634) goto $l2632; else goto $l2633;
        $l2632:;
        if ($tmp2627) goto $l2635; else goto $l2636;
        $l2635:;
        if ($tmp2623 <= $tmp2625) goto $l2628; else goto $l2630;
        $l2636:;
        if ($tmp2623 < $tmp2625) goto $l2628; else goto $l2630;
        $l2633:;
        if ($tmp2627) goto $l2637; else goto $l2638;
        $l2637:;
        if ($tmp2623 >= $tmp2625) goto $l2628; else goto $l2630;
        $l2638:;
        if ($tmp2623 > $tmp2625) goto $l2628; else goto $l2630;
        $l2628:;
        {
            panda$core$Object* $tmp2641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2622);
            org$pandalanguage$pandac$IRNode* $tmp2642 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2641));
            arg2640 = $tmp2642;
            if (((panda$core$Bit) { arg2640 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2617, ((panda$core$Object*) arg2640));
        }
        $l2631:;
        if ($tmp2634) goto $l2644; else goto $l2645;
        $l2644:;
        int64_t $tmp2646 = $tmp2625 - i2622.value;
        if ($tmp2627) goto $l2647; else goto $l2648;
        $l2647:;
        if ($tmp2646 >= $tmp2626) goto $l2643; else goto $l2630;
        $l2648:;
        if ($tmp2646 > $tmp2626) goto $l2643; else goto $l2630;
        $l2645:;
        int64_t $tmp2650 = i2622.value - $tmp2625;
        if ($tmp2627) goto $l2651; else goto $l2652;
        $l2651:;
        if ($tmp2650 >= -$tmp2626) goto $l2643; else goto $l2630;
        $l2652:;
        if ($tmp2650 > -$tmp2626) goto $l2643; else goto $l2630;
        $l2643:;
        i2622.value += $tmp2626;
        goto $l2628;
        $l2630:;
        org$pandalanguage$pandac$IRNode* $tmp2654 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2614, ((panda$collections$ListView*) args2617));
        return $tmp2654;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2658;
    org$pandalanguage$pandac$ClassDecl* cl2667;
    panda$core$String* name2669;
    org$pandalanguage$pandac$ClassDecl* cl2677;
    org$pandalanguage$pandac$Symbol* s2689;
    panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2655.value);
    panda$core$Int64 $tmp2656 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2656, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2657.value);
    panda$core$Object* $tmp2659 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2660 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2659));
    base2658 = $tmp2660;
    if (((panda$core$Bit) { base2658 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2662 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2658->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2661 = $tmp2662.value;
    if (!$tmp2661) goto $l2663;
    panda$core$Bit $tmp2664 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2658->kind, ((panda$core$Int64) { 1024 }));
    $tmp2661 = $tmp2664.value;
    $l2663:;
    panda$core$Bit $tmp2665 = { $tmp2661 };
    if ($tmp2665.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2666 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2658);
        base2658 = $tmp2666;
    }
    }
    if (((panda$core$Bit) { base2658 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2658->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2668 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2658->payload));
            cl2667 = $tmp2668;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2670, base2658->payload);
            panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2672);
            panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2673, p_d->payload);
            panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, &$s2675);
            name2669 = $tmp2676;
            org$pandalanguage$pandac$ClassDecl* $tmp2678 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2669);
            cl2677 = $tmp2678;
            if (((panda$core$Bit) { cl2677 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2679 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2679->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2679->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2681 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2682 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2677);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2679, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp2681, $tmp2682);
                return $tmp2679;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2683 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2683->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2683->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2685 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2683, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp2685, name2669);
            return $tmp2683;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2686 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2687 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2686)->rawSuper);
            cl2667 = $tmp2687;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2688 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2658->type);
            cl2667 = $tmp2688;
        }
    }
    if (((panda$core$Bit) { cl2667 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2690 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2667);
    org$pandalanguage$pandac$Symbol* $tmp2691 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2690, ((panda$core$String*) p_d->payload));
    s2689 = $tmp2691;
    if (((panda$core$Bit) { s2689 == NULL }).value) {
    {
        panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2692, ((panda$core$Object*) base2658->type));
        panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, &$s2694);
        panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2696, p_d->payload);
        panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
        panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, $tmp2699);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_d->offset, $tmp2700);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2701 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2667);
    org$pandalanguage$pandac$IRNode* $tmp2702 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->offset, base2658, s2689, $tmp2701);
    return $tmp2702;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2704;
    panda$core$Bit $tmp2703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2703.value);
    org$pandalanguage$pandac$Symbol* $tmp2705 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2704 = $tmp2705;
    if (((panda$core$Bit) { s2704 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2706 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2704 = ((org$pandalanguage$pandac$Symbol*) $tmp2706);
    }
    }
    if (((panda$core$Bit) { s2704 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2707 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->offset, NULL, s2704, self->symbolTable);
        return $tmp2707;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2708 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2708->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2708->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2710 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2708, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp2710, ((panda$core$String*) p_i->payload));
    return $tmp2708;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$IRNode* $tmp2711 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2711->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2711->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2713 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp2714 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp2715 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp2714);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2711, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp2713, $tmp2715);
    return $tmp2711;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2723;
    org$pandalanguage$pandac$IRNode* end2731;
    org$pandalanguage$pandac$IRNode* step2739;
    panda$collections$Array* children2749;
    panda$core$Bit $tmp2717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp2716 = $tmp2717.value;
    if ($tmp2716) goto $l2718;
    panda$core$Bit $tmp2719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp2716 = $tmp2719.value;
    $l2718:;
    panda$core$Bit $tmp2720 = { $tmp2716 };
    PANDA_ASSERT($tmp2720.value);
    panda$core$Int64 $tmp2721 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2721, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2722.value);
    panda$core$Object* $tmp2724 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2724)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2725.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2726 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2726->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2726->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2728 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2726, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2728);
        start2723 = $tmp2726;
    }
    }
    else {
    {
        panda$core$Object* $tmp2729 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2730 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2729));
        start2723 = $tmp2730;
        if (((panda$core$Bit) { start2723 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2732 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2732)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2733.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2734 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2734->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2734->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2736 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2734, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2736);
        end2731 = $tmp2734;
    }
    }
    else {
    {
        panda$core$Object* $tmp2737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp2738 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2737));
        end2731 = $tmp2738;
        if (((panda$core$Bit) { end2731 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2740 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2740)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2741.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2742 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2742->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2742->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2744 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2742, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp2744, ((panda$core$UInt64) { 1 }));
        step2739 = $tmp2742;
    }
    }
    else {
    {
        panda$core$Object* $tmp2745 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2746 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2745));
        org$pandalanguage$pandac$Type* $tmp2747 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2748 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2746, $tmp2747);
        step2739 = $tmp2748;
        if (((panda$core$Bit) { step2739 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp2750 = (panda$collections$Array*) malloc(40);
    $tmp2750->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2750->refCount.value = 1;
    panda$collections$Array$init($tmp2750);
    children2749 = $tmp2750;
    panda$collections$Array$add$panda$collections$Array$T(children2749, ((panda$core$Object*) start2723));
    panda$collections$Array$add$panda$collections$Array$T(children2749, ((panda$core$Object*) end2731));
    panda$collections$Array$add$panda$collections$Array$T(children2749, ((panda$core$Object*) step2739));
    org$pandalanguage$pandac$IRNode* $tmp2752 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2752->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2752->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2754 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2754->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2754->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2754, &$s2756, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp2757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2752, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp2754, ((panda$core$Object*) wrap_panda$core$Bit($tmp2757)), ((panda$collections$ListView*) children2749));
    return $tmp2752;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp2758 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2758->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2758->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2760 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2758, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp2760, ((panda$core$String*) p_s->payload));
    return $tmp2758;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type2765;
    org$pandalanguage$pandac$ClassDecl* cl2766;
    panda$collections$Array* subtypes2773;
    panda$core$MutableString* name2777;
    panda$core$String* separator2781;
    panda$collections$Iterator* p$Iter2783;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p2795;
    panda$collections$Array* pType2800;
    panda$core$String* pName2803;
    panda$core$Bit $tmp2761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp2761.value);
    panda$core$Object* $tmp2762 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2763 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2762)->annotations);
    if ($tmp2763.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2764);
        return NULL;
    }
    }
    panda$core$Object* $tmp2767 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2766 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2767);
    ITable* $tmp2768 = ((panda$collections$CollectionView*) cl2766->parameters)->$class->itable;
    while ($tmp2768->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2768 = $tmp2768->next;
    }
    $fn2770 $tmp2769 = $tmp2768->methods[0];
    panda$core$Int64 $tmp2771 = $tmp2769(((panda$collections$CollectionView*) cl2766->parameters));
    panda$core$Bit $tmp2772 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2771, ((panda$core$Int64) { 0 }));
    if ($tmp2772.value) {
    {
        panda$collections$Array* $tmp2774 = (panda$collections$Array*) malloc(40);
        $tmp2774->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2774->refCount.value = 1;
        panda$collections$Array$init($tmp2774);
        subtypes2773 = $tmp2774;
        org$pandalanguage$pandac$Type* $tmp2776 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2766);
        panda$collections$Array$add$panda$collections$Array$T(subtypes2773, ((panda$core$Object*) $tmp2776));
        panda$core$MutableString* $tmp2778 = (panda$core$MutableString*) malloc(40);
        $tmp2778->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp2778->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp2778, ((org$pandalanguage$pandac$Symbol*) cl2766)->name);
        name2777 = $tmp2778;
        panda$core$MutableString$append$panda$core$String(name2777, &$s2780);
        separator2781 = &$s2782;
        {
            ITable* $tmp2784 = ((panda$collections$Iterable*) cl2766->parameters)->$class->itable;
            while ($tmp2784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2784 = $tmp2784->next;
            }
            $fn2786 $tmp2785 = $tmp2784->methods[0];
            panda$collections$Iterator* $tmp2787 = $tmp2785(((panda$collections$Iterable*) cl2766->parameters));
            p$Iter2783 = $tmp2787;
            $l2788:;
            ITable* $tmp2790 = p$Iter2783->$class->itable;
            while ($tmp2790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2790 = $tmp2790->next;
            }
            $fn2792 $tmp2791 = $tmp2790->methods[0];
            panda$core$Bit $tmp2793 = $tmp2791(p$Iter2783);
            panda$core$Bit $tmp2794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2793);
            if (!$tmp2794.value) goto $l2789;
            {
                ITable* $tmp2796 = p$Iter2783->$class->itable;
                while ($tmp2796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2796 = $tmp2796->next;
                }
                $fn2798 $tmp2797 = $tmp2796->methods[1];
                panda$core$Object* $tmp2799 = $tmp2797(p$Iter2783);
                p2795 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp2799);
                panda$collections$Array* $tmp2801 = (panda$collections$Array*) malloc(40);
                $tmp2801->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2801->refCount.value = 1;
                panda$collections$Array$init($tmp2801);
                pType2800 = $tmp2801;
                panda$collections$Array$add$panda$collections$Array$T(pType2800, ((panda$core$Object*) p2795->bound));
                panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2804, ((org$pandalanguage$pandac$Symbol*) cl2766)->name);
                panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
                panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, ((org$pandalanguage$pandac$Symbol*) p2795)->name);
                panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
                pName2803 = $tmp2810;
                panda$core$MutableString$append$panda$core$String(name2777, separator2781);
                panda$core$MutableString$append$panda$core$String(name2777, pName2803);
                org$pandalanguage$pandac$Type* $tmp2811 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp2811->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2811->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2811, pName2803, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p2795)->offset, ((panda$collections$ListView*) pType2800), ((panda$core$Bit) { true }));
                panda$collections$Array$add$panda$collections$Array$T(subtypes2773, ((panda$core$Object*) $tmp2811));
                separator2781 = &$s2813;
            }
            goto $l2788;
            $l2789:;
        }
        panda$core$MutableString$append$panda$core$String(name2777, &$s2814);
        org$pandalanguage$pandac$Type* $tmp2815 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp2815->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp2815->refCount.value = 1;
        panda$core$String* $tmp2817 = panda$core$MutableString$convert$R$panda$core$String(name2777);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2815, $tmp2817, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes2773), ((panda$core$Bit) { true }));
        type2765 = $tmp2815;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2818 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2766);
        type2765 = $tmp2818;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2819 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2819->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2819->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2819, ((panda$core$Int64) { 1025 }), p_s->offset, type2765);
    return $tmp2819;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl2825;
    panda$core$Bit $tmp2821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp2821.value);
    panda$core$Object* $tmp2822 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2823 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2822)->annotations);
    if ($tmp2823.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2824);
        return NULL;
    }
    }
    panda$core$Object* $tmp2826 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2825 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2826);
    PANDA_ASSERT(cl2825->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp2827 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2827->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2827->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2827, ((panda$core$Int64) { 1024 }), p_s->offset, cl2825->rawSuper);
    return $tmp2827;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value2832;
    org$pandalanguage$pandac$Type* type2835;
    panda$core$Bit $tmp2829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp2829.value);
    panda$core$Int64 $tmp2830 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp2831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2830, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2831.value);
    panda$core$Object* $tmp2833 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2834 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2833));
    value2832 = $tmp2834;
    if (((panda$core$Bit) { value2832 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2836 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp2837 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp2836));
    org$pandalanguage$pandac$Type* $tmp2838 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp2837);
    type2835 = $tmp2838;
    panda$core$Int64$nullable $tmp2839 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value2832, type2835);
    if (((panda$core$Bit) { $tmp2839.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2840 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value2832, type2835);
        return $tmp2840;
    }
    }
    panda$core$Bit $tmp2841 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value2832, type2835);
    if ($tmp2841.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2842 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value2832, p_c->offset, ((panda$core$Bit) { true }), type2835);
        return $tmp2842;
    }
    }
    else {
    {
        panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2843, ((panda$core$Object*) value2832->type));
        panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, &$s2845);
        panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2847, ((panda$core$Object*) type2835));
        panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, &$s2849);
        panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2846, $tmp2850);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp2851);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp2852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp2852.value);
    org$pandalanguage$pandac$IRNode* $tmp2853 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2853->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2853->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2855 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2853, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp2855);
    return $tmp2853;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp2856 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2856;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp2857 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2857->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2857->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2859 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2857, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp2859, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp2857;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp2860 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2860;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp2861 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2861;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp2862 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2862;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp2863 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2863->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2863->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2865 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2863, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp2865, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp2863;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp2866 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2866;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp2867 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2867;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp2868 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2868;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp2869 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2869;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp2870 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2870;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp2871 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2871;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp2872 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2872;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp2873 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp2873;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols2875;
    panda$collections$Array* result2878;
    panda$collections$Iterator* stmt$Iter2881;
    org$pandalanguage$pandac$ASTNode* stmt2893;
    org$pandalanguage$pandac$IRNode* compiled2898;
    panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp2874.value);
    org$pandalanguage$pandac$SymbolTable* $tmp2876 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp2876->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp2876->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp2876, self->symbolTable);
    symbols2875 = $tmp2876;
    self->symbolTable = symbols2875;
    panda$collections$Array* $tmp2879 = (panda$collections$Array*) malloc(40);
    $tmp2879->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2879->refCount.value = 1;
    panda$collections$Array$init($tmp2879);
    result2878 = $tmp2879;
    {
        ITable* $tmp2882 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp2882->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2882 = $tmp2882->next;
        }
        $fn2884 $tmp2883 = $tmp2882->methods[0];
        panda$collections$Iterator* $tmp2885 = $tmp2883(((panda$collections$Iterable*) p_b->children));
        stmt$Iter2881 = $tmp2885;
        $l2886:;
        ITable* $tmp2888 = stmt$Iter2881->$class->itable;
        while ($tmp2888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2888 = $tmp2888->next;
        }
        $fn2890 $tmp2889 = $tmp2888->methods[0];
        panda$core$Bit $tmp2891 = $tmp2889(stmt$Iter2881);
        panda$core$Bit $tmp2892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2891);
        if (!$tmp2892.value) goto $l2887;
        {
            ITable* $tmp2894 = stmt$Iter2881->$class->itable;
            while ($tmp2894->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2894 = $tmp2894->next;
            }
            $fn2896 $tmp2895 = $tmp2894->methods[1];
            panda$core$Object* $tmp2897 = $tmp2895(stmt$Iter2881);
            stmt2893 = ((org$pandalanguage$pandac$ASTNode*) $tmp2897);
            org$pandalanguage$pandac$IRNode* $tmp2899 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt2893);
            compiled2898 = $tmp2899;
            if (((panda$core$Bit) { compiled2898 == NULL }).value) {
            {
                panda$core$Object* $tmp2900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols2875->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp2900);
                return NULL;
            }
            }
            panda$core$Bit $tmp2901 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled2898->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp2901.value);
            panda$collections$Array$add$panda$collections$Array$T(result2878, ((panda$core$Object*) compiled2898));
        }
        goto $l2886;
        $l2887:;
    }
    panda$core$Object* $tmp2902 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols2875->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp2902);
    org$pandalanguage$pandac$IRNode* $tmp2903 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2903->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2903->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2903, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result2878));
    return $tmp2903;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test2913;
    org$pandalanguage$pandac$IRNode* ifTrue2918;
    panda$collections$Array* children2921;
    org$pandalanguage$pandac$IRNode* ifFalse2926;
    panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp2905.value);
    panda$core$Int64 $tmp2907 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2907, ((panda$core$Int64) { 2 }));
    bool $tmp2906 = $tmp2908.value;
    if ($tmp2906) goto $l2909;
    panda$core$Int64 $tmp2910 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2910, ((panda$core$Int64) { 3 }));
    $tmp2906 = $tmp2911.value;
    $l2909:;
    panda$core$Bit $tmp2912 = { $tmp2906 };
    PANDA_ASSERT($tmp2912.value);
    panda$core$Object* $tmp2914 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2915 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2914));
    org$pandalanguage$pandac$Type* $tmp2916 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp2917 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2915, $tmp2916);
    test2913 = $tmp2917;
    if (((panda$core$Bit) { test2913 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2919 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2920 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2919));
    ifTrue2918 = $tmp2920;
    panda$collections$Array* $tmp2922 = (panda$collections$Array*) malloc(40);
    $tmp2922->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2922->refCount.value = 1;
    panda$collections$Array$init($tmp2922);
    children2921 = $tmp2922;
    panda$collections$Array$add$panda$collections$Array$T(children2921, ((panda$core$Object*) test2913));
    panda$collections$Array$add$panda$collections$Array$T(children2921, ((panda$core$Object*) ifTrue2918));
    panda$core$Int64 $tmp2924 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2924, ((panda$core$Int64) { 3 }));
    if ($tmp2925.value) {
    {
        panda$core$Object* $tmp2927 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2928 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2927));
        ifFalse2926 = $tmp2928;
        if (((panda$core$Bit) { ifFalse2926 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children2921, ((panda$core$Object*) ifFalse2926));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2929 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2929->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2929->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2929, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children2921));
    return $tmp2929;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType2931;
    org$pandalanguage$pandac$IRNode* list2932;
    org$pandalanguage$pandac$Type* t2939;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target2953;
    org$pandalanguage$pandac$IRNode* body2955;
    panda$collections$Array* children2957;
    panda$core$Bit $tmp2934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp2933 = $tmp2934.value;
    if (!$tmp2933) goto $l2935;
    panda$core$Int64 $tmp2936 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp2937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2936, ((panda$core$Int64) { 1 }));
    $tmp2933 = $tmp2937.value;
    $l2935:;
    panda$core$Bit $tmp2938 = { $tmp2933 };
    if ($tmp2938.value) {
    {
        panda$core$Object* $tmp2940 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp2941 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp2940));
        org$pandalanguage$pandac$Type* $tmp2942 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp2941);
        t2939 = $tmp2942;
        org$pandalanguage$pandac$Type* $tmp2943 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t2939);
        org$pandalanguage$pandac$IRNode* $tmp2944 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp2943);
        list2932 = $tmp2944;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2945 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list2932 = $tmp2945;
    }
    }
    if (((panda$core$Bit) { list2932 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list2932->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2946.value) {
    {
        panda$core$Object* $tmp2947 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2932->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2947)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp2948.value);
        panda$core$Object* $tmp2949 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2932->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp2950 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp2949)->subtypes, ((panda$core$Int64) { 1 }));
        elementType2931 = ((org$pandalanguage$pandac$Type*) $tmp2950);
    }
    }
    else {
    {
        panda$core$Bit $tmp2951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list2932->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp2951.value);
        panda$core$Object* $tmp2952 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2932->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType2931 = ((org$pandalanguage$pandac$Type*) $tmp2952);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp2954 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType2931);
    target2953 = $tmp2954;
    if (((panda$core$Bit) { target2953 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target2953->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp2956 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body2955 = $tmp2956;
    if (((panda$core$Bit) { body2955 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp2958 = (panda$collections$Array*) malloc(40);
    $tmp2958->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2958->refCount.value = 1;
    panda$collections$Array$init($tmp2958);
    children2957 = $tmp2958;
    panda$collections$Array$add$panda$collections$Array$T(children2957, ((panda$core$Object*) target2953->target));
    panda$collections$Array$add$panda$collections$Array$T(children2957, ((panda$core$Object*) list2932));
    panda$collections$Array$add$panda$collections$Array$T(children2957, ((panda$core$Object*) body2955));
    org$pandalanguage$pandac$IRNode* $tmp2960 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2960->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2960, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children2957));
    return $tmp2960;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target2969;
    org$pandalanguage$pandac$Variable* targetVar2973;
    panda$collections$Array* subtypes2974;
    org$pandalanguage$pandac$Type* iterType2978;
    org$pandalanguage$pandac$Variable* iter2990;
    panda$collections$Array* statements2995;
    panda$collections$Array* declChildren2998;
    panda$collections$Array* varChildren3003;
    panda$collections$Array* whileChildren3010;
    org$pandalanguage$pandac$IRNode* done3013;
    org$pandalanguage$pandac$IRNode* notCall3020;
    panda$collections$Array* valueDeclChildren3025;
    org$pandalanguage$pandac$IRNode* next3030;
    panda$collections$Array* valueVarChildren3037;
    org$pandalanguage$pandac$IRNode* block3042;
    panda$collections$Array* blockChildren3044;
    panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp2962 = $tmp2963.value;
    if (!$tmp2962) goto $l2964;
    panda$core$Object* $tmp2965 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2966 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2967 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2965), $tmp2966);
    $tmp2962 = $tmp2967.value;
    $l2964:;
    panda$core$Bit $tmp2968 = { $tmp2962 };
    PANDA_ASSERT($tmp2968.value);
    panda$core$Object* $tmp2970 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp2971 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp2970));
    target2969 = $tmp2971;
    if (((panda$core$Bit) { target2969 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2969->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2972.value);
    targetVar2973 = ((org$pandalanguage$pandac$Variable*) target2969->target->payload);
    panda$collections$Array* $tmp2975 = (panda$collections$Array*) malloc(40);
    $tmp2975->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2975->refCount.value = 1;
    panda$collections$Array$init($tmp2975);
    subtypes2974 = $tmp2975;
    org$pandalanguage$pandac$Type* $tmp2977 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes2974, ((panda$core$Object*) $tmp2977));
    panda$collections$Array$add$panda$collections$Array$T(subtypes2974, ((panda$core$Object*) target2969->target->type));
    org$pandalanguage$pandac$Type* $tmp2979 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2979->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2979->refCount.value = 1;
    panda$core$Object* $tmp2982 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes2974, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2981, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp2982)));
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
    panda$core$Object* $tmp2986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes2974, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2985, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp2986)));
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2979, $tmp2989, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes2974), ((panda$core$Bit) { true }));
    iterType2978 = $tmp2979;
    org$pandalanguage$pandac$Variable* $tmp2991 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp2991->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp2991->refCount.value = 1;
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar2973)->name, &$s2993);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp2991, p_iterator->offset, ((panda$core$Int64) { 10001 }), $tmp2994, iterType2978);
    iter2990 = $tmp2991;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter2990));
    panda$collections$Array* $tmp2996 = (panda$collections$Array*) malloc(40);
    $tmp2996->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2996->refCount.value = 1;
    panda$collections$Array$init($tmp2996);
    statements2995 = $tmp2996;
    panda$collections$Array* $tmp2999 = (panda$collections$Array*) malloc(40);
    $tmp2999->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2999->refCount.value = 1;
    panda$collections$Array$init($tmp2999);
    declChildren2998 = $tmp2999;
    org$pandalanguage$pandac$IRNode* $tmp3001 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3001->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3001->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3001, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter2990->type, iter2990);
    panda$collections$Array$add$panda$collections$Array$T(declChildren2998, ((panda$core$Object*) $tmp3001));
    panda$collections$Array$add$panda$collections$Array$T(declChildren2998, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3004 = (panda$collections$Array*) malloc(40);
    $tmp3004->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3004->refCount.value = 1;
    panda$collections$Array$init($tmp3004);
    varChildren3003 = $tmp3004;
    org$pandalanguage$pandac$IRNode* $tmp3006 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3006->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3006->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3006, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter2990)->offset, ((panda$collections$ListView*) declChildren2998));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3003, ((panda$core$Object*) $tmp3006));
    org$pandalanguage$pandac$IRNode* $tmp3008 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3008->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3008->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3008, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter2990)->offset, ((panda$collections$ListView*) varChildren3003));
    panda$collections$Array$add$panda$collections$Array$T(statements2995, ((panda$core$Object*) $tmp3008));
    panda$collections$Array* $tmp3011 = (panda$collections$Array*) malloc(40);
    $tmp3011->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3011->refCount.value = 1;
    panda$collections$Array$init($tmp3011);
    whileChildren3010 = $tmp3011;
    org$pandalanguage$pandac$IRNode* $tmp3014 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3014->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3014->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3014, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter2990)->offset, iter2990->type, iter2990);
    panda$collections$Array* $tmp3017 = (panda$collections$Array*) malloc(40);
    $tmp3017->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3017->refCount.value = 1;
    panda$collections$Array$init($tmp3017);
    org$pandalanguage$pandac$IRNode* $tmp3019 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3014, &$s3016, ((panda$collections$ListView*) $tmp3017), NULL);
    done3013 = $tmp3019;
    if (((panda$core$Bit) { done3013 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3022 = (panda$collections$Array*) malloc(40);
    $tmp3022->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3022->refCount.value = 1;
    panda$collections$Array$init($tmp3022);
    org$pandalanguage$pandac$IRNode* $tmp3024 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3013, &$s3021, ((panda$collections$ListView*) $tmp3022), NULL);
    notCall3020 = $tmp3024;
    if (((panda$core$Bit) { notCall3020 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3010, ((panda$core$Object*) notCall3020));
    panda$collections$Array* $tmp3026 = (panda$collections$Array*) malloc(40);
    $tmp3026->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3026->refCount.value = 1;
    panda$collections$Array$init($tmp3026);
    valueDeclChildren3025 = $tmp3026;
    org$pandalanguage$pandac$IRNode* $tmp3028 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3028->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3028->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3028, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar2973->type, targetVar2973);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3025, ((panda$core$Object*) $tmp3028));
    org$pandalanguage$pandac$IRNode* $tmp3031 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3031->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3031->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3031, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter2990->type, iter2990);
    panda$collections$Array* $tmp3034 = (panda$collections$Array*) malloc(40);
    $tmp3034->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3034->refCount.value = 1;
    panda$collections$Array$init($tmp3034);
    org$pandalanguage$pandac$IRNode* $tmp3036 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3031, &$s3033, ((panda$collections$ListView*) $tmp3034), NULL);
    next3030 = $tmp3036;
    PANDA_ASSERT(((panda$core$Bit) { next3030 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3025, ((panda$core$Object*) next3030));
    panda$collections$Array* $tmp3038 = (panda$collections$Array*) malloc(40);
    $tmp3038->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3038->refCount.value = 1;
    panda$collections$Array$init($tmp3038);
    valueVarChildren3037 = $tmp3038;
    org$pandalanguage$pandac$IRNode* $tmp3040 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3040->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3040->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3040, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3025));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3037, ((panda$core$Object*) $tmp3040));
    org$pandalanguage$pandac$IRNode* $tmp3043 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3042 = $tmp3043;
    if (((panda$core$Bit) { block3042 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3045 = (panda$collections$Array*) malloc(40);
    $tmp3045->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3045->refCount.value = 1;
    panda$collections$Array$init($tmp3045);
    blockChildren3044 = $tmp3045;
    org$pandalanguage$pandac$IRNode* $tmp3047 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3047->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3047->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3047, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3037));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3044, ((panda$core$Object*) $tmp3047));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3044, ((panda$collections$CollectionView*) block3042->children));
    org$pandalanguage$pandac$IRNode* $tmp3049 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3049->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3049->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3049, ((panda$core$Int64) { 1000 }), block3042->offset, ((panda$collections$ListView*) blockChildren3044));
    block3042 = $tmp3049;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3010, ((panda$core$Object*) block3042));
    org$pandalanguage$pandac$IRNode* $tmp3051 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3051->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3051->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3051, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3010));
    panda$collections$Array$add$panda$collections$Array$T(statements2995, ((panda$core$Object*) $tmp3051));
    org$pandalanguage$pandac$IRNode* $tmp3053 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3053->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3053->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3053, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements2995));
    return $tmp3053;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3058;
    org$pandalanguage$pandac$SymbolTable* symbols3061;
    org$pandalanguage$pandac$IRNode* result3064;
    panda$core$Bit found3074;
    panda$collections$Iterator* intf$Iter3075;
    org$pandalanguage$pandac$Type* intf3088;
    org$pandalanguage$pandac$IRNode* iterator3100;
    org$pandalanguage$pandac$IRNode* iterable3112;
    org$pandalanguage$pandac$IRNode* iterator3114;
    panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3055.value);
    panda$core$Int64 $tmp3056 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3056, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3057.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3059 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3060 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3059));
    list3058 = $tmp3060;
    if (((panda$core$Bit) { list3058 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3062 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3062->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3062->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3062, self->symbolTable);
    symbols3061 = $tmp3062;
    self->symbolTable = symbols3061;
    panda$core$Bit $tmp3066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3058->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3065 = $tmp3066.value;
    if ($tmp3065) goto $l3067;
    panda$core$Bit $tmp3068 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3058->type);
    $tmp3065 = $tmp3068.value;
    $l3067:;
    panda$core$Bit $tmp3069 = { $tmp3065 };
    if ($tmp3069.value) {
    {
        panda$core$Object* $tmp3070 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3071 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3072 = org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3070), list3058, ((org$pandalanguage$pandac$ASTNode*) $tmp3071));
        result3064 = $tmp3072;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3073 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3058);
        list3058 = $tmp3073;
        if (((panda$core$Bit) { list3058 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3074 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3076 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3058->type);
            ITable* $tmp3077 = ((panda$collections$Iterable*) $tmp3076)->$class->itable;
            while ($tmp3077->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3077 = $tmp3077->next;
            }
            $fn3079 $tmp3078 = $tmp3077->methods[0];
            panda$collections$Iterator* $tmp3080 = $tmp3078(((panda$collections$Iterable*) $tmp3076));
            intf$Iter3075 = $tmp3080;
            $l3081:;
            ITable* $tmp3083 = intf$Iter3075->$class->itable;
            while ($tmp3083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3083 = $tmp3083->next;
            }
            $fn3085 $tmp3084 = $tmp3083->methods[0];
            panda$core$Bit $tmp3086 = $tmp3084(intf$Iter3075);
            panda$core$Bit $tmp3087 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3086);
            if (!$tmp3087.value) goto $l3082;
            {
                ITable* $tmp3089 = intf$Iter3075->$class->itable;
                while ($tmp3089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3089 = $tmp3089->next;
                }
                $fn3091 $tmp3090 = $tmp3089->methods[1];
                panda$core$Object* $tmp3092 = $tmp3090(intf$Iter3075);
                intf3088 = ((org$pandalanguage$pandac$Type*) $tmp3092);
                panda$core$Bit $tmp3094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3088->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3093 = $tmp3094.value;
                if (!$tmp3093) goto $l3095;
                panda$core$Object* $tmp3096 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3088->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3097 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3098 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3096), $tmp3097);
                $tmp3093 = $tmp3098.value;
                $l3095:;
                panda$core$Bit $tmp3099 = { $tmp3093 };
                if ($tmp3099.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3101 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3058, intf3088);
                    iterator3100 = $tmp3101;
                    panda$core$Object* $tmp3102 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3104 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3102), iterator3100, ((org$pandalanguage$pandac$ASTNode*) $tmp3103));
                    result3064 = $tmp3104;
                    found3074 = ((panda$core$Bit) { true });
                    goto $l3082;
                }
                }
                panda$core$Bit $tmp3106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3088->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3105 = $tmp3106.value;
                if (!$tmp3105) goto $l3107;
                panda$core$Object* $tmp3108 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3088->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3109 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3110 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3108), $tmp3109);
                $tmp3105 = $tmp3110.value;
                $l3107:;
                panda$core$Bit $tmp3111 = { $tmp3105 };
                if ($tmp3111.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3113 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3058, intf3088);
                    iterable3112 = $tmp3113;
                    panda$collections$Array* $tmp3116 = (panda$collections$Array*) malloc(40);
                    $tmp3116->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3116->refCount.value = 1;
                    panda$collections$Array$init($tmp3116);
                    org$pandalanguage$pandac$IRNode* $tmp3118 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3112, &$s3115, ((panda$collections$ListView*) $tmp3116));
                    iterator3114 = $tmp3118;
                    panda$core$Object* $tmp3119 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3120 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3121 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3119), iterator3114, ((org$pandalanguage$pandac$ASTNode*) $tmp3120));
                    result3064 = $tmp3121;
                    found3074 = ((panda$core$Bit) { true });
                    goto $l3082;
                }
                }
            }
            goto $l3081;
            $l3082:;
        }
        panda$core$Bit $tmp3122 = panda$core$Bit$$NOT$R$panda$core$Bit(found3074);
        if ($tmp3122.value) {
        {
            panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3123, ((panda$core$Object*) list3058->type));
            panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, &$s3125);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, list3058->offset, $tmp3126);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3061->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3127);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3064;
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
    panda$core$Char8 $match$1181954043;
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
            $match$1181954043 = ((panda$core$Char8) $tmp4045.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4046, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4047 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1181954043, $tmp4046);
            if ($tmp4047.value) {
            {
                panda$core$Int64 $tmp4048 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4022, ((panda$core$Int64) { 1 }));
                line4022 = $tmp4048;
                column4023 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4049, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4050 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1181954043, $tmp4049);
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

