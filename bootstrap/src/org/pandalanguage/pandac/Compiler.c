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

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn121)(panda$collections$MapView*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn275)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn318)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn324)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn330)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn337)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn343)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn349)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn398)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn404)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn420)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn426)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn432)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn450)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn456)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn462)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn513)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn519)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn525)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn534)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn556)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn579)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn585)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn591)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn599)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn605)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn611)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn622)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn628)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn634)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn667)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn673)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn679)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn726)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn732)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn738)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn751)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn757)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn763)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn777)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn783)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn789)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn804)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn810)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn816)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn830)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn836)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn842)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn855)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn861)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn867)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn921)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn927)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn933)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn940)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn946)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn952)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn970)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn976)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn982)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1075)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1168)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1196)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1202)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1208)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1332)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1338)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1344)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1472)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1478)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1484)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1532)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1538)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1544)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1587)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1593)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1599)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1648)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1675)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1702)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1719)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1731)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1794)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1817)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1894)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1913)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1919)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1925)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1954)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1960)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1966)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2004)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2010)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2016)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2039)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2045)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2051)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2561)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2716)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2722)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2728)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2945)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2973)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3080)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3086)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3092)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3252)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3258)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3264)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3374)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3380)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3405)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3411)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3417)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3495)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3501)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3507)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3680)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3686)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3692)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3800)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3812)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3824)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3830)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3836)(panda$collections$Iterator*);
typedef void (*$fn3869)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3872)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn3876)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3882)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3888)(panda$collections$Iterator*);
typedef void (*$fn3893)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3896)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3901)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn3905)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3911)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3917)(panda$collections$Iterator*);
typedef void (*$fn3921)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3930)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn3932)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn3938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3944)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3950)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3959)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3965)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3971)(panda$collections$Iterator*);
typedef panda$core$Char8$nullable (*$fn3998)(panda$io$InputStream*);
typedef void (*$fn4020)(panda$core$Object*);
typedef void (*$fn4036)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
    panda$core$Int64 $match$6223155;
    org$pandalanguage$pandac$ClassDecl* resolved157;
    org$pandalanguage$pandac$Symbol* s160;
    panda$core$Int64 $match$6536162;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp167;
    panda$collections$Array* subtypes169;
    panda$collections$Array* subtypes187;
    panda$collections$Array* subtypes198;
    panda$core$MutableString* name203;
    panda$core$String* separator208;
    panda$core$Range$LTpanda$core$Int64$GT $tmp210;
    org$pandalanguage$pandac$Type* resolved230;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    {
        $match$6223155 = p_type->typeKind;
        panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6223155, ((panda$core$Int64) { 10 }));
        if ($tmp156.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp158 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved157 = $tmp158;
            if (((panda$core$Bit) { resolved157 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp159 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved157);
                return $tmp159;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp161 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s160 = $tmp161;
            if (((panda$core$Bit) { s160 != NULL }).value) {
            {
                {
                    $match$6536162 = s160->kind;
                    panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6536162, ((panda$core$Int64) { 200 }));
                    if ($tmp163.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp164 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp164->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp164->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp164, ((org$pandalanguage$pandac$Alias*) s160)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$core$Bit) { true }));
                        return $tmp164;
                    }
                    }
                    else {
                    panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6536162, ((panda$core$Int64) { 203 }));
                    if ($tmp166.value) {
                    {
                        gp167 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s160);
                        org$pandalanguage$pandac$ClassDecl* $tmp168 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, gp167->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp168);
                        panda$collections$Array* $tmp170 = (panda$collections$Array*) malloc(40);
                        $tmp170->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp170->refCount.value = 1;
                        panda$collections$Array$init($tmp170);
                        subtypes169 = $tmp170;
                        panda$collections$Array$add$panda$collections$Array$T(subtypes169, ((panda$core$Object*) gp167->bound));
                        org$pandalanguage$pandac$Type* $tmp172 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp172->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp172->refCount.value = 1;
                        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(gp167->owner, &$s174);
                        panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, ((org$pandalanguage$pandac$Symbol*) gp167)->name);
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp172, $tmp176, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes169), ((panda$core$Bit) { true }));
                        return $tmp172;
                    }
                    }
                    else {
                    panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6536162, ((panda$core$Int64) { 207 }));
                    if ($tmp177.value) {
                    {
                        return ((org$pandalanguage$pandac$Type*) s160);
                    }
                    }
                    else {
                    panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6536162, ((panda$core$Int64) { 201 }));
                    if ($tmp178.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp179 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s160));
                        return $tmp179;
                    }
                    }
                    }
                    }
                    }
                }
            }
            }
            org$pandalanguage$pandac$Position* $tmp180 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset);
            panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s181, ((panda$core$Object*) p_type));
            panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp182, &$s183);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp180, $tmp184);
            org$pandalanguage$pandac$Type* $tmp185 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp185;
        }
        }
        else {
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6223155, ((panda$core$Int64) { 11 }));
        if ($tmp186.value) {
        {
            panda$collections$Array* $tmp188 = (panda$collections$Array*) malloc(40);
            $tmp188->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp188->refCount.value = 1;
            panda$collections$Array$init($tmp188);
            subtypes187 = $tmp188;
            panda$core$Object* $tmp190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp191 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp190));
            panda$collections$Array$add$panda$collections$Array$T(subtypes187, ((panda$core$Object*) $tmp191));
            org$pandalanguage$pandac$Type* $tmp192 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp192->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp192->refCount.value = 1;
            panda$core$Object* $tmp194 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes187, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp194))->name, &$s195);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp192, $tmp196, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes187), ((panda$core$Bit) { true }));
            return $tmp192;
        }
        }
        else {
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6223155, ((panda$core$Int64) { 21 }));
        if ($tmp197.value) {
        {
            panda$collections$Array* $tmp199 = (panda$collections$Array*) malloc(40);
            $tmp199->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp199->refCount.value = 1;
            panda$collections$Array$init($tmp199);
            subtypes198 = $tmp199;
            panda$core$Object* $tmp201 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp201));
            panda$collections$Array$add$panda$collections$Array$T(subtypes198, ((panda$core$Object*) $tmp202));
            panda$core$MutableString* $tmp204 = (panda$core$MutableString*) malloc(40);
            $tmp204->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp204->refCount.value = 1;
            panda$core$Object* $tmp206 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes198, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp204, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp206))->name);
            name203 = $tmp204;
            panda$core$MutableString$append$panda$core$String(name203, &$s207);
            separator208 = &$s209;
            panda$core$Int64 $tmp211 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp210, ((panda$core$Int64) { 1 }), $tmp211, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp213 = $tmp210.start.value;
            panda$core$Int64 i212 = { $tmp213 };
            int64_t $tmp215 = $tmp210.end.value;
            int64_t $tmp216 = $tmp210.step.value;
            bool $tmp217 = $tmp210.inclusive.value;
            bool $tmp224 = $tmp216 > 0;
            if ($tmp224) goto $l222; else goto $l223;
            $l222:;
            if ($tmp217) goto $l225; else goto $l226;
            $l225:;
            if ($tmp213 <= $tmp215) goto $l218; else goto $l220;
            $l226:;
            if ($tmp213 < $tmp215) goto $l218; else goto $l220;
            $l223:;
            if ($tmp217) goto $l227; else goto $l228;
            $l227:;
            if ($tmp213 >= $tmp215) goto $l218; else goto $l220;
            $l228:;
            if ($tmp213 > $tmp215) goto $l218; else goto $l220;
            $l218:;
            {
                panda$core$Object* $tmp231 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, i212);
                org$pandalanguage$pandac$Type* $tmp232 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp231));
                resolved230 = $tmp232;
                panda$collections$Array$add$panda$collections$Array$T(subtypes198, ((panda$core$Object*) resolved230));
                panda$core$MutableString$append$panda$core$String(name203, separator208);
                panda$core$MutableString$append$panda$core$String(name203, ((org$pandalanguage$pandac$Symbol*) resolved230)->name);
                separator208 = &$s233;
            }
            $l221:;
            if ($tmp224) goto $l235; else goto $l236;
            $l235:;
            int64_t $tmp237 = $tmp215 - i212.value;
            if ($tmp217) goto $l238; else goto $l239;
            $l238:;
            if ($tmp237 >= $tmp216) goto $l234; else goto $l220;
            $l239:;
            if ($tmp237 > $tmp216) goto $l234; else goto $l220;
            $l236:;
            int64_t $tmp241 = i212.value - $tmp215;
            if ($tmp217) goto $l242; else goto $l243;
            $l242:;
            if ($tmp241 >= -$tmp216) goto $l234; else goto $l220;
            $l243:;
            if ($tmp241 > -$tmp216) goto $l234; else goto $l220;
            $l234:;
            i212.value += $tmp216;
            goto $l218;
            $l220:;
            panda$core$MutableString$append$panda$core$String(name203, &$s245);
            org$pandalanguage$pandac$Type* $tmp246 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp246->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp246->refCount.value = 1;
            panda$core$String* $tmp248 = panda$core$MutableString$convert$R$panda$core$String(name203);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp246, $tmp248, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes198), ((panda$core$Bit) { true }));
            return $tmp246;
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old249;
    panda$collections$Iterator* m$Iter260;
    org$pandalanguage$pandac$MethodDecl* m272;
    panda$core$Range$LTpanda$core$Int64$GT $tmp282;
    panda$collections$Iterator* p$Iter315;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p327;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old249 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp250 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_cl->rawSuper);
        p_cl->rawSuper = $tmp250;
        panda$core$Bit $tmp252 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
        panda$core$Bit $tmp253 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp252);
        bool $tmp251 = $tmp253.value;
        if (!$tmp251) goto $l254;
        panda$core$Bit $tmp256 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s255);
        $tmp251 = $tmp256.value;
        $l254:;
        panda$core$Bit $tmp257 = { $tmp251 };
        if ($tmp257.value) {
        {
            panda$core$Int64 $tmp258 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp259 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp258);
            p_cl->annotations->flags = $tmp259;
            {
                ITable* $tmp261 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp261 = $tmp261->next;
                }
                $fn263 $tmp262 = $tmp261->methods[0];
                panda$collections$Iterator* $tmp264 = $tmp262(((panda$collections$Iterable*) p_cl->methods));
                m$Iter260 = $tmp264;
                $l265:;
                ITable* $tmp267 = m$Iter260->$class->itable;
                while ($tmp267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp267 = $tmp267->next;
                }
                $fn269 $tmp268 = $tmp267->methods[0];
                panda$core$Bit $tmp270 = $tmp268(m$Iter260);
                panda$core$Bit $tmp271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp270);
                if (!$tmp271.value) goto $l266;
                {
                    ITable* $tmp273 = m$Iter260->$class->itable;
                    while ($tmp273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp273 = $tmp273->next;
                    }
                    $fn275 $tmp274 = $tmp273->methods[1];
                    panda$core$Object* $tmp276 = $tmp274(m$Iter260);
                    m272 = ((org$pandalanguage$pandac$MethodDecl*) $tmp276);
                    panda$core$Int64 $tmp277 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp278 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m272->annotations->flags, $tmp277);
                    m272->annotations->flags = $tmp278;
                    panda$core$Bit $tmp279 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m272->annotations, m272->body);
                    if ($tmp279.value) {
                    {
                        panda$core$Int64 $tmp280 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                        panda$core$Int64 $tmp281 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m272->annotations->flags, $tmp280);
                        m272->annotations->flags = $tmp281;
                    }
                    }
                }
                goto $l265;
                $l266:;
            }
        }
        }
    }
    }
    panda$core$Int64 $tmp283 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp282, ((panda$core$Int64) { 0 }), $tmp283, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp285 = $tmp282.start.value;
    panda$core$Int64 i284 = { $tmp285 };
    int64_t $tmp287 = $tmp282.end.value;
    int64_t $tmp288 = $tmp282.step.value;
    bool $tmp289 = $tmp282.inclusive.value;
    bool $tmp296 = $tmp288 > 0;
    if ($tmp296) goto $l294; else goto $l295;
    $l294:;
    if ($tmp289) goto $l297; else goto $l298;
    $l297:;
    if ($tmp285 <= $tmp287) goto $l290; else goto $l292;
    $l298:;
    if ($tmp285 < $tmp287) goto $l290; else goto $l292;
    $l295:;
    if ($tmp289) goto $l299; else goto $l300;
    $l299:;
    if ($tmp285 >= $tmp287) goto $l290; else goto $l292;
    $l300:;
    if ($tmp285 > $tmp287) goto $l290; else goto $l292;
    $l290:;
    {
        panda$core$Object* $tmp302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->rawInterfaces, i284);
        org$pandalanguage$pandac$Type* $tmp303 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp302));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->rawInterfaces, i284, ((panda$core$Object*) $tmp303));
    }
    $l293:;
    if ($tmp296) goto $l305; else goto $l306;
    $l305:;
    int64_t $tmp307 = $tmp287 - i284.value;
    if ($tmp289) goto $l308; else goto $l309;
    $l308:;
    if ($tmp307 >= $tmp288) goto $l304; else goto $l292;
    $l309:;
    if ($tmp307 > $tmp288) goto $l304; else goto $l292;
    $l306:;
    int64_t $tmp311 = i284.value - $tmp287;
    if ($tmp289) goto $l312; else goto $l313;
    $l312:;
    if ($tmp311 >= -$tmp288) goto $l304; else goto $l292;
    $l313:;
    if ($tmp311 > -$tmp288) goto $l304; else goto $l292;
    $l304:;
    i284.value += $tmp288;
    goto $l290;
    $l292:;
    {
        ITable* $tmp316 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp316->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp316 = $tmp316->next;
        }
        $fn318 $tmp317 = $tmp316->methods[0];
        panda$collections$Iterator* $tmp319 = $tmp317(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter315 = $tmp319;
        $l320:;
        ITable* $tmp322 = p$Iter315->$class->itable;
        while ($tmp322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp322 = $tmp322->next;
        }
        $fn324 $tmp323 = $tmp322->methods[0];
        panda$core$Bit $tmp325 = $tmp323(p$Iter315);
        panda$core$Bit $tmp326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp325);
        if (!$tmp326.value) goto $l321;
        {
            ITable* $tmp328 = p$Iter315->$class->itable;
            while ($tmp328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp328 = $tmp328->next;
            }
            $fn330 $tmp329 = $tmp328->methods[1];
            panda$core$Object* $tmp331 = $tmp329(p$Iter315);
            p327 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp331);
            org$pandalanguage$pandac$Type* $tmp332 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p327->bound);
            p327->bound = $tmp332;
        }
        goto $l320;
        $l321:;
    }
    self->symbolTable = old249;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old333;
    panda$collections$Iterator* p$Iter334;
    org$pandalanguage$pandac$MethodDecl$Parameter* p346;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old333 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp335 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp335->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp335 = $tmp335->next;
        }
        $fn337 $tmp336 = $tmp335->methods[0];
        panda$collections$Iterator* $tmp338 = $tmp336(((panda$collections$Iterable*) p_m->parameters));
        p$Iter334 = $tmp338;
        $l339:;
        ITable* $tmp341 = p$Iter334->$class->itable;
        while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp341 = $tmp341->next;
        }
        $fn343 $tmp342 = $tmp341->methods[0];
        panda$core$Bit $tmp344 = $tmp342(p$Iter334);
        panda$core$Bit $tmp345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp344);
        if (!$tmp345.value) goto $l340;
        {
            ITable* $tmp347 = p$Iter334->$class->itable;
            while ($tmp347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp347 = $tmp347->next;
            }
            $fn349 $tmp348 = $tmp347->methods[1];
            panda$core$Object* $tmp350 = $tmp348(p$Iter334);
            p346 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp350);
            org$pandalanguage$pandac$Type* $tmp351 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p346->type);
            p346->type = $tmp351;
        }
        goto $l339;
        $l340:;
    }
    org$pandalanguage$pandac$Type* $tmp352 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m->returnType);
    p_m->returnType = $tmp352;
    p_m->resolved = ((panda$core$Bit) { true });
    self->symbolTable = old333;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old353;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old353 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp354 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp355 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp354);
    if ($tmp355.value) {
    {
        org$pandalanguage$pandac$Type* $tmp356 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_f->type);
        p_f->type = $tmp356;
        if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp357 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
            org$pandalanguage$pandac$IRNode* $tmp358 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp357, p_f->type);
            p_f->value = $tmp358;
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old353;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s359);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old353;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp360 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp360;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old353;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp361 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp361;
    org$pandalanguage$pandac$IRNode* $tmp362 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp362;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    self->symbolTable = old353;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$11652363;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$11652363 = p_expr->kind;
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11652363, ((panda$core$Int64) { 1037 }));
        if ($tmp364.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s365);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11652363, ((panda$core$Int64) { 1039 }));
        if ($tmp366.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s367);
            panda$core$Object* $tmp368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp368)->payload)));
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11652363, ((panda$core$Int64) { 1024 }));
        if ($tmp369.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s370);
            return NULL;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp371 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp372 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp371);
            return $tmp372;
        }
        }
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp373 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp373) goto $l374;
    org$pandalanguage$pandac$Type* $tmp375 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp376 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp375);
    $tmp373 = ((panda$core$Bit) { $tmp376.nonnull }).value;
    $l374:;
    panda$core$Bit $tmp377 = { $tmp373 };
    return $tmp377;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result378;
    org$pandalanguage$pandac$ClassDecl* s386;
    panda$collections$Iterator* f$Iter389;
    org$pandalanguage$pandac$FieldDecl* f401;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp379 = (panda$collections$Array*) malloc(40);
    $tmp379->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp379->refCount.value = 1;
    panda$collections$Array$init($tmp379);
    result378 = $tmp379;
    panda$core$Bit $tmp382 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
    bool $tmp381 = $tmp383.value;
    if (!$tmp381) goto $l384;
    $tmp381 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l384:;
    panda$core$Bit $tmp385 = { $tmp381 };
    if ($tmp385.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp387 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s386 = $tmp387;
        if (((panda$core$Bit) { s386 != NULL }).value) {
        {
            panda$collections$ListView* $tmp388 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s386);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result378, ((panda$collections$CollectionView*) $tmp388));
        }
        }
    }
    }
    {
        ITable* $tmp390 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp390 = $tmp390->next;
        }
        $fn392 $tmp391 = $tmp390->methods[0];
        panda$collections$Iterator* $tmp393 = $tmp391(((panda$collections$Iterable*) p_cl->fields));
        f$Iter389 = $tmp393;
        $l394:;
        ITable* $tmp396 = f$Iter389->$class->itable;
        while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp396 = $tmp396->next;
        }
        $fn398 $tmp397 = $tmp396->methods[0];
        panda$core$Bit $tmp399 = $tmp397(f$Iter389);
        panda$core$Bit $tmp400 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp399);
        if (!$tmp400.value) goto $l395;
        {
            ITable* $tmp402 = f$Iter389->$class->itable;
            while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp402 = $tmp402->next;
            }
            $fn404 $tmp403 = $tmp402->methods[1];
            panda$core$Object* $tmp405 = $tmp403(f$Iter389);
            f401 = ((org$pandalanguage$pandac$FieldDecl*) $tmp405);
            panda$core$Bit $tmp406 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f401->annotations);
            panda$core$Bit $tmp407 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp406);
            if ($tmp407.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result378, ((panda$core$Object*) f401));
            }
            }
        }
        goto $l394;
        $l395:;
    }
    return ((panda$collections$ListView*) result378);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result408;
    panda$core$String* suffix410;
    panda$core$Bit found416;
    panda$collections$Iterator* dir$Iter417;
    panda$io$File* dir429;
    panda$io$File* f434;
    panda$core$Bit $tmp436;
    panda$core$Object* $tmp409 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result408 = ((org$pandalanguage$pandac$ClassDecl*) $tmp409);
    if (((panda$core$Bit) { result408 == NULL }).value) {
    {
        panda$core$String* $tmp413 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s411, &$s412);
        panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
        suffix410 = $tmp415;
        found416 = ((panda$core$Bit) { false });
        {
            ITable* $tmp418 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp418->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp418 = $tmp418->next;
            }
            $fn420 $tmp419 = $tmp418->methods[0];
            panda$collections$Iterator* $tmp421 = $tmp419(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter417 = $tmp421;
            $l422:;
            ITable* $tmp424 = dir$Iter417->$class->itable;
            while ($tmp424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp424 = $tmp424->next;
            }
            $fn426 $tmp425 = $tmp424->methods[0];
            panda$core$Bit $tmp427 = $tmp425(dir$Iter417);
            panda$core$Bit $tmp428 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp427);
            if (!$tmp428.value) goto $l423;
            {
                ITable* $tmp430 = dir$Iter417->$class->itable;
                while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp430 = $tmp430->next;
                }
                $fn432 $tmp431 = $tmp430->methods[1];
                panda$core$Object* $tmp433 = $tmp431(dir$Iter417);
                dir429 = ((panda$io$File*) $tmp433);
                panda$io$File* $tmp435 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir429, suffix410);
                f434 = $tmp435;
                panda$io$File$exists$R$panda$core$Bit(&$tmp436, f434);
                if ($tmp436.value) {
                {
                    found416 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f434);
                    panda$core$Object* $tmp437 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result408 = ((org$pandalanguage$pandac$ClassDecl*) $tmp437);
                }
                }
            }
            goto $l422;
            $l423:;
        }
    }
    }
    return result408;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result438;
    panda$core$String* suffix440;
    panda$core$Bit found446;
    panda$collections$Iterator* dir$Iter447;
    panda$io$File* dir459;
    panda$io$File* f464;
    panda$core$Bit $tmp466;
    panda$core$Int64 oldErrorCount467;
    panda$core$Object* $tmp439 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result438 = ((org$pandalanguage$pandac$ClassDecl*) $tmp439);
    if (((panda$core$Bit) { result438 == NULL }).value) {
    {
        panda$core$String* $tmp443 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s441, &$s442);
        panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
        suffix440 = $tmp445;
        found446 = ((panda$core$Bit) { false });
        {
            ITable* $tmp448 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp448 = $tmp448->next;
            }
            $fn450 $tmp449 = $tmp448->methods[0];
            panda$collections$Iterator* $tmp451 = $tmp449(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter447 = $tmp451;
            $l452:;
            ITable* $tmp454 = dir$Iter447->$class->itable;
            while ($tmp454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp454 = $tmp454->next;
            }
            $fn456 $tmp455 = $tmp454->methods[0];
            panda$core$Bit $tmp457 = $tmp455(dir$Iter447);
            panda$core$Bit $tmp458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp457);
            if (!$tmp458.value) goto $l453;
            {
                ITable* $tmp460 = dir$Iter447->$class->itable;
                while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp460 = $tmp460->next;
                }
                $fn462 $tmp461 = $tmp460->methods[1];
                panda$core$Object* $tmp463 = $tmp461(dir$Iter447);
                dir459 = ((panda$io$File*) $tmp463);
                panda$io$File* $tmp465 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir459, suffix440);
                f464 = $tmp465;
                panda$io$File$exists$R$panda$core$Bit(&$tmp466, f464);
                if ($tmp466.value) {
                {
                    found446 = ((panda$core$Bit) { true });
                    oldErrorCount467 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f464);
                    panda$core$Object* $tmp468 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result438 = ((org$pandalanguage$pandac$ClassDecl*) $tmp468);
                    bool $tmp469 = ((panda$core$Bit) { result438 == NULL }).value;
                    if (!$tmp469) goto $l470;
                    panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount467);
                    $tmp469 = $tmp471.value;
                    $l470:;
                    panda$core$Bit $tmp472 = { $tmp469 };
                    if ($tmp472.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp473 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp473->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp473->refCount.value = 1;
                        panda$core$String* $tmp475 = panda$io$File$name$R$panda$core$String(f464);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp473, $tmp475, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s476, ((panda$core$Object*) f464));
                        panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp477, &$s478);
                        panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, p_fullName);
                        panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s481);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp473, $tmp482);
                    }
                    }
                }
                }
            }
            goto $l452;
            $l453:;
        }
        panda$core$Bit $tmp483 = panda$core$Bit$$NOT$R$panda$core$Bit(found446);
        if ($tmp483.value) {
        {
            panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s484, suffix440);
            panda$core$String* $tmp487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s486);
            panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp487, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s489);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp490);
        }
        }
    }
    }
    return result438;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type491;
    org$pandalanguage$pandac$ClassDecl* result497;
    org$pandalanguage$pandac$Annotations* annotations499;
    org$pandalanguage$pandac$Type* supertype505;
    panda$collections$Array* interfaces507;
    panda$collections$Iterator* intf$Iter510;
    org$pandalanguage$pandac$Type* intf522;
    panda$collections$HashMap* aliases528;
    panda$core$Range$LTpanda$core$Int64$GT $tmp531;
    panda$collections$Iterator* m$Iter576;
    org$pandalanguage$pandac$MethodDecl* m588;
    panda$collections$Array* parameters593;
    panda$collections$Iterator* p$Iter596;
    org$pandalanguage$pandac$MethodDecl$Parameter* p608;
    org$pandalanguage$pandac$MethodDecl* clone616;
    panda$collections$Iterator* f$Iter619;
    org$pandalanguage$pandac$FieldDecl* f631;
    org$pandalanguage$pandac$FieldDecl* clone636;
    org$pandalanguage$pandac$Type* $tmp492 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_rawType);
    type491 = $tmp492;
    panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type491->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp493.value) {
    {
        panda$core$Object* $tmp494 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type491->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp495 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp494));
        return $tmp495;
    }
    }
    panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type491->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp496.value) {
    {
        return p_cl;
    }
    }
    panda$core$Object* $tmp498 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type491)->name));
    result497 = ((org$pandalanguage$pandac$ClassDecl*) $tmp498);
    if (((panda$core$Bit) { result497 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp500 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp500->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp500->refCount.value = 1;
        panda$core$Int64 $tmp502 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp503 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp502);
        panda$core$Int64 $tmp504 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp503);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp500, $tmp504);
        annotations499 = $tmp500;
        org$pandalanguage$pandac$Type* $tmp506 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type491, p_cl->rawSuper);
        supertype505 = $tmp506;
        panda$collections$Array* $tmp508 = (panda$collections$Array*) malloc(40);
        $tmp508->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp508->refCount.value = 1;
        panda$collections$Array$init($tmp508);
        interfaces507 = $tmp508;
        {
            ITable* $tmp511 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp511->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp511 = $tmp511->next;
            }
            $fn513 $tmp512 = $tmp511->methods[0];
            panda$collections$Iterator* $tmp514 = $tmp512(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter510 = $tmp514;
            $l515:;
            ITable* $tmp517 = intf$Iter510->$class->itable;
            while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp517 = $tmp517->next;
            }
            $fn519 $tmp518 = $tmp517->methods[0];
            panda$core$Bit $tmp520 = $tmp518(intf$Iter510);
            panda$core$Bit $tmp521 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp520);
            if (!$tmp521.value) goto $l516;
            {
                ITable* $tmp523 = intf$Iter510->$class->itable;
                while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp523 = $tmp523->next;
                }
                $fn525 $tmp524 = $tmp523->methods[1];
                panda$core$Object* $tmp526 = $tmp524(intf$Iter510);
                intf522 = ((org$pandalanguage$pandac$Type*) $tmp526);
                org$pandalanguage$pandac$Type* $tmp527 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type491, intf522);
                panda$collections$Array$add$panda$collections$Array$T(interfaces507, ((panda$core$Object*) $tmp527));
            }
            goto $l515;
            $l516:;
        }
        panda$collections$HashMap* $tmp529 = (panda$collections$HashMap*) malloc(56);
        $tmp529->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp529->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp529, p_cl->aliases);
        aliases528 = $tmp529;
        ITable* $tmp532 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp532->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp532 = $tmp532->next;
        }
        $fn534 $tmp533 = $tmp532->methods[0];
        panda$core$Int64 $tmp535 = $tmp533(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp531, ((panda$core$Int64) { 0 }), $tmp535, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp537 = $tmp531.start.value;
        panda$core$Int64 i536 = { $tmp537 };
        int64_t $tmp539 = $tmp531.end.value;
        int64_t $tmp540 = $tmp531.step.value;
        bool $tmp541 = $tmp531.inclusive.value;
        bool $tmp548 = $tmp540 > 0;
        if ($tmp548) goto $l546; else goto $l547;
        $l546:;
        if ($tmp541) goto $l549; else goto $l550;
        $l549:;
        if ($tmp537 <= $tmp539) goto $l542; else goto $l544;
        $l550:;
        if ($tmp537 < $tmp539) goto $l542; else goto $l544;
        $l547:;
        if ($tmp541) goto $l551; else goto $l552;
        $l551:;
        if ($tmp537 >= $tmp539) goto $l542; else goto $l544;
        $l552:;
        if ($tmp537 > $tmp539) goto $l542; else goto $l544;
        $l542:;
        {
            ITable* $tmp554 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp554->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp554 = $tmp554->next;
            }
            $fn556 $tmp555 = $tmp554->methods[0];
            panda$core$Object* $tmp557 = $tmp555(((panda$collections$ListView*) p_cl->parameters), i536);
            panda$core$Int64 $tmp558 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i536, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type491->subtypes, $tmp558);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases528, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp557))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp559))->name));
        }
        $l545:;
        if ($tmp548) goto $l561; else goto $l562;
        $l561:;
        int64_t $tmp563 = $tmp539 - i536.value;
        if ($tmp541) goto $l564; else goto $l565;
        $l564:;
        if ($tmp563 >= $tmp540) goto $l560; else goto $l544;
        $l565:;
        if ($tmp563 > $tmp540) goto $l560; else goto $l544;
        $l562:;
        int64_t $tmp567 = i536.value - $tmp539;
        if ($tmp541) goto $l568; else goto $l569;
        $l568:;
        if ($tmp567 >= -$tmp540) goto $l560; else goto $l544;
        $l569:;
        if ($tmp567 > -$tmp540) goto $l560; else goto $l544;
        $l560:;
        i536.value += $tmp540;
        goto $l542;
        $l544:;
        org$pandalanguage$pandac$ClassDecl* $tmp571 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
        $tmp571->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp571->refCount.value = 1;
        panda$collections$Array* $tmp573 = (panda$collections$Array*) malloc(40);
        $tmp573->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp573->refCount.value = 1;
        panda$collections$Array$init($tmp573);
        panda$core$Object* $tmp575 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp571, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, ((panda$collections$MapView*) aliases528), p_cl->doccomment, annotations499, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type491)->name, supertype505, interfaces507, $tmp573, ((org$pandalanguage$pandac$SymbolTable*) $tmp575));
        result497 = $tmp571;
        result497->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp577 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp577 = $tmp577->next;
            }
            $fn579 $tmp578 = $tmp577->methods[0];
            panda$collections$Iterator* $tmp580 = $tmp578(((panda$collections$Iterable*) p_cl->methods));
            m$Iter576 = $tmp580;
            $l581:;
            ITable* $tmp583 = m$Iter576->$class->itable;
            while ($tmp583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp583 = $tmp583->next;
            }
            $fn585 $tmp584 = $tmp583->methods[0];
            panda$core$Bit $tmp586 = $tmp584(m$Iter576);
            panda$core$Bit $tmp587 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp586);
            if (!$tmp587.value) goto $l582;
            {
                ITable* $tmp589 = m$Iter576->$class->itable;
                while ($tmp589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp589 = $tmp589->next;
                }
                $fn591 $tmp590 = $tmp589->methods[1];
                panda$core$Object* $tmp592 = $tmp590(m$Iter576);
                m588 = ((org$pandalanguage$pandac$MethodDecl*) $tmp592);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m588);
                panda$collections$Array* $tmp594 = (panda$collections$Array*) malloc(40);
                $tmp594->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp594->refCount.value = 1;
                panda$collections$Array$init($tmp594);
                parameters593 = $tmp594;
                {
                    ITable* $tmp597 = ((panda$collections$Iterable*) m588->parameters)->$class->itable;
                    while ($tmp597->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp597 = $tmp597->next;
                    }
                    $fn599 $tmp598 = $tmp597->methods[0];
                    panda$collections$Iterator* $tmp600 = $tmp598(((panda$collections$Iterable*) m588->parameters));
                    p$Iter596 = $tmp600;
                    $l601:;
                    ITable* $tmp603 = p$Iter596->$class->itable;
                    while ($tmp603->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp603 = $tmp603->next;
                    }
                    $fn605 $tmp604 = $tmp603->methods[0];
                    panda$core$Bit $tmp606 = $tmp604(p$Iter596);
                    panda$core$Bit $tmp607 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp606);
                    if (!$tmp607.value) goto $l602;
                    {
                        ITable* $tmp609 = p$Iter596->$class->itable;
                        while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp609 = $tmp609->next;
                        }
                        $fn611 $tmp610 = $tmp609->methods[1];
                        panda$core$Object* $tmp612 = $tmp610(p$Iter596);
                        p608 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp612);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp613 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp613->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp613->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp615 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type491, p608->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp613, p608->name, $tmp615);
                        panda$collections$Array$add$panda$collections$Array$T(parameters593, ((panda$core$Object*) $tmp613));
                    }
                    goto $l601;
                    $l602:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp617 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
                $tmp617->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp617->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp617, result497, ((org$pandalanguage$pandac$Symbol*) m588)->offset, m588->doccomment, m588->annotations, m588->methodKind, ((org$pandalanguage$pandac$Symbol*) m588)->name, parameters593, m588->returnType, m588->body);
                clone616 = $tmp617;
                panda$collections$Array$add$panda$collections$Array$T(result497->methods, ((panda$core$Object*) clone616));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result497->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone616));
            }
            goto $l581;
            $l582:;
        }
        {
            ITable* $tmp620 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp620 = $tmp620->next;
            }
            $fn622 $tmp621 = $tmp620->methods[0];
            panda$collections$Iterator* $tmp623 = $tmp621(((panda$collections$Iterable*) p_cl->fields));
            f$Iter619 = $tmp623;
            $l624:;
            ITable* $tmp626 = f$Iter619->$class->itable;
            while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp626 = $tmp626->next;
            }
            $fn628 $tmp627 = $tmp626->methods[0];
            panda$core$Bit $tmp629 = $tmp627(f$Iter619);
            panda$core$Bit $tmp630 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp629);
            if (!$tmp630.value) goto $l625;
            {
                ITable* $tmp632 = f$Iter619->$class->itable;
                while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp632 = $tmp632->next;
                }
                $fn634 $tmp633 = $tmp632->methods[1];
                panda$core$Object* $tmp635 = $tmp633(f$Iter619);
                f631 = ((org$pandalanguage$pandac$FieldDecl*) $tmp635);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f631);
                org$pandalanguage$pandac$FieldDecl* $tmp637 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
                $tmp637->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp637->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp639 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type491, f631->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp637, result497, ((org$pandalanguage$pandac$Symbol*) f631)->offset, f631->doccomment, f631->annotations, f631->fieldKind, ((org$pandalanguage$pandac$Symbol*) f631)->name, $tmp639, f631->rawValue);
                clone636 = $tmp637;
                panda$collections$Array$add$panda$collections$Array$T(result497->fields, ((panda$core$Object*) clone636));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result497->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone636));
            }
            goto $l624;
            $l625:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result497)->name), ((panda$core$Object*) result497));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result497));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result497;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result640;
    panda$core$Int64 $match$16866641;
    {
        $match$16866641 = p_type->typeKind;
        panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16866641, ((panda$core$Int64) { 10 }));
        if ($tmp642.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp643 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result640 = $tmp643;
        }
        }
        else {
        panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16866641, ((panda$core$Int64) { 11 }));
        bool $tmp645 = $tmp646.value;
        if ($tmp645) goto $l647;
        panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16866641, ((panda$core$Int64) { 21 }));
        $tmp645 = $tmp648.value;
        $l647:;
        panda$core$Bit $tmp649 = { $tmp645 };
        bool $tmp644 = $tmp649.value;
        if ($tmp644) goto $l650;
        panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16866641, ((panda$core$Int64) { 22 }));
        $tmp644 = $tmp651.value;
        $l650:;
        panda$core$Bit $tmp652 = { $tmp644 };
        if ($tmp652.value) {
        {
            panda$core$Object* $tmp653 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp654 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp653));
            result640 = $tmp654;
        }
        }
        else {
        {
        }
        }
        }
    }
    panda$core$Bit $tmp655 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result640->annotations);
    if ($tmp655.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp656 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result640, p_type);
        result640 = $tmp656;
    }
    }
    return result640;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl657;
    panda$collections$Set* result659;
    panda$collections$Iterator* intf$Iter664;
    org$pandalanguage$pandac$Type* intf676;
    org$pandalanguage$pandac$ClassDecl* $tmp658 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl657 = $tmp658;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl657);
    panda$collections$Set* $tmp660 = (panda$collections$Set*) malloc(24);
    $tmp660->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp660->refCount.value = 1;
    panda$collections$Set$init($tmp660);
    result659 = $tmp660;
    if (((panda$core$Bit) { cl657->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp662 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl657->rawSuper);
        panda$collections$Set* $tmp663 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp662);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result659, ((panda$collections$CollectionView*) $tmp663));
    }
    }
    {
        ITable* $tmp665 = ((panda$collections$Iterable*) cl657->rawInterfaces)->$class->itable;
        while ($tmp665->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp665 = $tmp665->next;
        }
        $fn667 $tmp666 = $tmp665->methods[0];
        panda$collections$Iterator* $tmp668 = $tmp666(((panda$collections$Iterable*) cl657->rawInterfaces));
        intf$Iter664 = $tmp668;
        $l669:;
        ITable* $tmp671 = intf$Iter664->$class->itable;
        while ($tmp671->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp671 = $tmp671->next;
        }
        $fn673 $tmp672 = $tmp671->methods[0];
        panda$core$Bit $tmp674 = $tmp672(intf$Iter664);
        panda$core$Bit $tmp675 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp674);
        if (!$tmp675.value) goto $l670;
        {
            ITable* $tmp677 = intf$Iter664->$class->itable;
            while ($tmp677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp677 = $tmp677->next;
            }
            $fn679 $tmp678 = $tmp677->methods[1];
            panda$core$Object* $tmp680 = $tmp678(intf$Iter664);
            intf676 = ((org$pandalanguage$pandac$Type*) $tmp680);
            org$pandalanguage$pandac$Type* $tmp681 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf676);
            panda$collections$Set* $tmp682 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp681);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result659, ((panda$collections$CollectionView*) $tmp682));
        }
        goto $l669;
        $l670:;
    }
    panda$core$Bit $tmp683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl657->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp683.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result659, ((panda$collections$Key*) p_t));
    }
    }
    return result659;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp687;
    panda$core$Int64 $tmp684 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp685 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp686 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp684, $tmp685);
    if ($tmp686.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp688 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp687, ((panda$core$Int64) { 0 }), $tmp688, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp690 = $tmp687.start.value;
    panda$core$Int64 i689 = { $tmp690 };
    int64_t $tmp692 = $tmp687.end.value;
    int64_t $tmp693 = $tmp687.step.value;
    bool $tmp694 = $tmp687.inclusive.value;
    bool $tmp701 = $tmp693 > 0;
    if ($tmp701) goto $l699; else goto $l700;
    $l699:;
    if ($tmp694) goto $l702; else goto $l703;
    $l702:;
    if ($tmp690 <= $tmp692) goto $l695; else goto $l697;
    $l703:;
    if ($tmp690 < $tmp692) goto $l695; else goto $l697;
    $l700:;
    if ($tmp694) goto $l704; else goto $l705;
    $l704:;
    if ($tmp690 >= $tmp692) goto $l695; else goto $l697;
    $l705:;
    if ($tmp690 > $tmp692) goto $l695; else goto $l697;
    $l695:;
    {
        panda$core$Object* $tmp707 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t1->subtypes, i689);
        panda$core$Object* $tmp708 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t2->subtypes, i689);
        panda$core$Bit $tmp709 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp707), ((org$pandalanguage$pandac$Type*) $tmp708));
        if ($tmp709.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l698:;
    if ($tmp701) goto $l711; else goto $l712;
    $l711:;
    int64_t $tmp713 = $tmp692 - i689.value;
    if ($tmp694) goto $l714; else goto $l715;
    $l714:;
    if ($tmp713 >= $tmp693) goto $l710; else goto $l697;
    $l715:;
    if ($tmp713 > $tmp693) goto $l710; else goto $l697;
    $l712:;
    int64_t $tmp717 = i689.value - $tmp692;
    if ($tmp694) goto $l718; else goto $l719;
    $l718:;
    if ($tmp717 >= -$tmp693) goto $l710; else goto $l697;
    $l719:;
    if ($tmp717 > -$tmp693) goto $l710; else goto $l697;
    $l710:;
    i689.value += $tmp693;
    goto $l695;
    $l697:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl721;
    panda$collections$Iterator* test$Iter723;
    org$pandalanguage$pandac$MethodDecl* test735;
    panda$collections$Iterator* raw$Iter748;
    org$pandalanguage$pandac$Type* raw760;
    org$pandalanguage$pandac$MethodDecl* result765;
    org$pandalanguage$pandac$ClassDecl* $tmp722 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl721 = $tmp722;
    {
        ITable* $tmp724 = ((panda$collections$Iterable*) cl721->methods)->$class->itable;
        while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp724 = $tmp724->next;
        }
        $fn726 $tmp725 = $tmp724->methods[0];
        panda$collections$Iterator* $tmp727 = $tmp725(((panda$collections$Iterable*) cl721->methods));
        test$Iter723 = $tmp727;
        $l728:;
        ITable* $tmp730 = test$Iter723->$class->itable;
        while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp730 = $tmp730->next;
        }
        $fn732 $tmp731 = $tmp730->methods[0];
        panda$core$Bit $tmp733 = $tmp731(test$Iter723);
        panda$core$Bit $tmp734 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp733);
        if (!$tmp734.value) goto $l729;
        {
            ITable* $tmp736 = test$Iter723->$class->itable;
            while ($tmp736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp736 = $tmp736->next;
            }
            $fn738 $tmp737 = $tmp736->methods[1];
            panda$core$Object* $tmp739 = $tmp737(test$Iter723);
            test735 = ((org$pandalanguage$pandac$MethodDecl*) $tmp739);
            panda$core$Bit $tmp740 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test735)->name, p_name);
            if ($tmp740.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test735);
                org$pandalanguage$pandac$Type* $tmp741 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test735);
                org$pandalanguage$pandac$Type* $tmp742 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp741);
                panda$core$Bit $tmp743 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp742, p_methodType);
                if ($tmp743.value) {
                {
                    return test735;
                }
                }
            }
            }
        }
        goto $l728;
        $l729:;
    }
    bool $tmp744 = p_checkInterfaces.value;
    if ($tmp744) goto $l745;
    panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl721->classKind, ((panda$core$Int64) { 5012 }));
    $tmp744 = $tmp746.value;
    $l745:;
    panda$core$Bit $tmp747 = { $tmp744 };
    if ($tmp747.value) {
    {
        {
            ITable* $tmp749 = ((panda$collections$Iterable*) cl721->rawInterfaces)->$class->itable;
            while ($tmp749->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp749 = $tmp749->next;
            }
            $fn751 $tmp750 = $tmp749->methods[0];
            panda$collections$Iterator* $tmp752 = $tmp750(((panda$collections$Iterable*) cl721->rawInterfaces));
            raw$Iter748 = $tmp752;
            $l753:;
            ITable* $tmp755 = raw$Iter748->$class->itable;
            while ($tmp755->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp755 = $tmp755->next;
            }
            $fn757 $tmp756 = $tmp755->methods[0];
            panda$core$Bit $tmp758 = $tmp756(raw$Iter748);
            panda$core$Bit $tmp759 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp758);
            if (!$tmp759.value) goto $l754;
            {
                ITable* $tmp761 = raw$Iter748->$class->itable;
                while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp761 = $tmp761->next;
                }
                $fn763 $tmp762 = $tmp761->methods[1];
                panda$core$Object* $tmp764 = $tmp762(raw$Iter748);
                raw760 = ((org$pandalanguage$pandac$Type*) $tmp764);
                org$pandalanguage$pandac$Type* $tmp766 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw760);
                org$pandalanguage$pandac$MethodDecl* $tmp767 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp766, p_name, p_methodType, p_checkInterfaces);
                result765 = $tmp767;
                if (((panda$core$Bit) { result765 != NULL }).value) {
                {
                    return result765;
                }
                }
            }
            goto $l753;
            $l754:;
        }
    }
    }
    if (((panda$core$Bit) { cl721->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp768 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl721->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp769 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp768, p_name, p_methodType, p_checkInterfaces);
        return $tmp769;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType770;
    org$pandalanguage$pandac$Type* owner772;
    panda$collections$Iterator* raw$Iter774;
    org$pandalanguage$pandac$Type* raw786;
    org$pandalanguage$pandac$MethodDecl* result791;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp771 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType770 = $tmp771;
    org$pandalanguage$pandac$Type* $tmp773 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner772 = $tmp773;
    {
        ITable* $tmp775 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp775 = $tmp775->next;
        }
        $fn777 $tmp776 = $tmp775->methods[0];
        panda$collections$Iterator* $tmp778 = $tmp776(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter774 = $tmp778;
        $l779:;
        ITable* $tmp781 = raw$Iter774->$class->itable;
        while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp781 = $tmp781->next;
        }
        $fn783 $tmp782 = $tmp781->methods[0];
        panda$core$Bit $tmp784 = $tmp782(raw$Iter774);
        panda$core$Bit $tmp785 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp784);
        if (!$tmp785.value) goto $l780;
        {
            ITable* $tmp787 = raw$Iter774->$class->itable;
            while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp787 = $tmp787->next;
            }
            $fn789 $tmp788 = $tmp787->methods[1];
            panda$core$Object* $tmp790 = $tmp788(raw$Iter774);
            raw786 = ((org$pandalanguage$pandac$Type*) $tmp790);
            org$pandalanguage$pandac$Type* $tmp792 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner772, raw786);
            org$pandalanguage$pandac$MethodDecl* $tmp793 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp792, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType770, ((panda$core$Bit) { true }));
            result791 = $tmp793;
            if (((panda$core$Bit) { result791 != NULL }).value) {
            {
                return result791;
            }
            }
        }
        goto $l779;
        $l780:;
    }
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp794 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner772, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp795 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp794, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType770, ((panda$core$Bit) { true }));
        return $tmp795;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass796;
    panda$collections$Array* result798;
    panda$collections$Iterator* m$Iter801;
    org$pandalanguage$pandac$MethodDecl* m813;
    org$pandalanguage$pandac$MethodDecl* found818;
    org$pandalanguage$pandac$ClassDecl* $tmp797 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass796 = $tmp797;
    panda$collections$Array* $tmp799 = (panda$collections$Array*) malloc(40);
    $tmp799->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp799->refCount.value = 1;
    panda$collections$Array$init($tmp799);
    result798 = $tmp799;
    {
        ITable* $tmp802 = ((panda$collections$Iterable*) intfClass796->methods)->$class->itable;
        while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp802 = $tmp802->next;
        }
        $fn804 $tmp803 = $tmp802->methods[0];
        panda$collections$Iterator* $tmp805 = $tmp803(((panda$collections$Iterable*) intfClass796->methods));
        m$Iter801 = $tmp805;
        $l806:;
        ITable* $tmp808 = m$Iter801->$class->itable;
        while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp808 = $tmp808->next;
        }
        $fn810 $tmp809 = $tmp808->methods[0];
        panda$core$Bit $tmp811 = $tmp809(m$Iter801);
        panda$core$Bit $tmp812 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp811);
        if (!$tmp812.value) goto $l807;
        {
            ITable* $tmp814 = m$Iter801->$class->itable;
            while ($tmp814->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp814 = $tmp814->next;
            }
            $fn816 $tmp815 = $tmp814->methods[1];
            panda$core$Object* $tmp817 = $tmp815(m$Iter801);
            m813 = ((org$pandalanguage$pandac$MethodDecl*) $tmp817);
            org$pandalanguage$pandac$Type* $tmp819 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp820 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m813);
            org$pandalanguage$pandac$Type* $tmp821 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp820);
            org$pandalanguage$pandac$MethodDecl* $tmp822 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp819, ((org$pandalanguage$pandac$Symbol*) m813)->name, $tmp821, ((panda$core$Bit) { false }));
            found818 = $tmp822;
            panda$collections$Array$add$panda$collections$Array$T(result798, ((panda$core$Object*) found818));
        }
        goto $l806;
        $l807:;
    }
    return ((panda$collections$ListView*) result798);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl824;
    panda$collections$Iterator* rawIntf$Iter827;
    org$pandalanguage$pandac$Type* rawIntf839;
    org$pandalanguage$pandac$ClassDecl* intf844;
    panda$core$Bit $tmp823 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp823.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp825 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl824 = $tmp825;
            if (((panda$core$Bit) { superCl824 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp826 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl824);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp826));
            }
            }
        }
        }
        {
            ITable* $tmp828 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp828->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp828 = $tmp828->next;
            }
            $fn830 $tmp829 = $tmp828->methods[0];
            panda$collections$Iterator* $tmp831 = $tmp829(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter827 = $tmp831;
            $l832:;
            ITable* $tmp834 = rawIntf$Iter827->$class->itable;
            while ($tmp834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp834 = $tmp834->next;
            }
            $fn836 $tmp835 = $tmp834->methods[0];
            panda$core$Bit $tmp837 = $tmp835(rawIntf$Iter827);
            panda$core$Bit $tmp838 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp837);
            if (!$tmp838.value) goto $l833;
            {
                ITable* $tmp840 = rawIntf$Iter827->$class->itable;
                while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp840 = $tmp840->next;
                }
                $fn842 $tmp841 = $tmp840->methods[1];
                panda$core$Object* $tmp843 = $tmp841(rawIntf$Iter827);
                rawIntf839 = ((org$pandalanguage$pandac$Type*) $tmp843);
                org$pandalanguage$pandac$ClassDecl* $tmp845 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf839);
                intf844 = $tmp845;
                if (((panda$core$Bit) { intf844 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp846 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf844);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp846));
                }
                }
            }
            goto $l832;
            $l833:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl849;
    panda$collections$Iterator* derived$Iter852;
    org$pandalanguage$pandac$MethodDecl* derived864;
    panda$core$Bit found874;
    panda$core$Range$LTpanda$core$Int64$GT $tmp875;
    org$pandalanguage$pandac$MethodDecl* base895;
    panda$core$Int64 $tmp847 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp847, ((panda$core$Int64) { 0 }));
    if ($tmp848.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl849 = $tmp850;
            if (((panda$core$Bit) { superCl849 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp851 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl849);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp851));
        }
        }
        {
            ITable* $tmp853 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp853->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp853 = $tmp853->next;
            }
            $fn855 $tmp854 = $tmp853->methods[0];
            panda$collections$Iterator* $tmp856 = $tmp854(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter852 = $tmp856;
            $l857:;
            ITable* $tmp859 = derived$Iter852->$class->itable;
            while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp859 = $tmp859->next;
            }
            $fn861 $tmp860 = $tmp859->methods[0];
            panda$core$Bit $tmp862 = $tmp860(derived$Iter852);
            panda$core$Bit $tmp863 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp862);
            if (!$tmp863.value) goto $l858;
            {
                ITable* $tmp865 = derived$Iter852->$class->itable;
                while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp865 = $tmp865->next;
                }
                $fn867 $tmp866 = $tmp865->methods[1];
                panda$core$Object* $tmp868 = $tmp866(derived$Iter852);
                derived864 = ((org$pandalanguage$pandac$MethodDecl*) $tmp868);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived864);
                panda$core$Bit $tmp870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived864->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp869 = $tmp870.value;
                if ($tmp869) goto $l871;
                panda$core$Bit $tmp872 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived864->annotations);
                $tmp869 = $tmp872.value;
                $l871:;
                panda$core$Bit $tmp873 = { $tmp869 };
                if ($tmp873.value) {
                {
                    goto $l857;
                }
                }
                found874 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp876 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp875, ((panda$core$Int64) { 0 }), $tmp876, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp878 = $tmp875.start.value;
                panda$core$Int64 i877 = { $tmp878 };
                int64_t $tmp880 = $tmp875.end.value;
                int64_t $tmp881 = $tmp875.step.value;
                bool $tmp882 = $tmp875.inclusive.value;
                bool $tmp889 = $tmp881 > 0;
                if ($tmp889) goto $l887; else goto $l888;
                $l887:;
                if ($tmp882) goto $l890; else goto $l891;
                $l890:;
                if ($tmp878 <= $tmp880) goto $l883; else goto $l885;
                $l891:;
                if ($tmp878 < $tmp880) goto $l883; else goto $l885;
                $l888:;
                if ($tmp882) goto $l892; else goto $l893;
                $l892:;
                if ($tmp878 >= $tmp880) goto $l883; else goto $l885;
                $l893:;
                if ($tmp878 > $tmp880) goto $l883; else goto $l885;
                $l883:;
                {
                    panda$core$Object* $tmp896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i877);
                    base895 = ((org$pandalanguage$pandac$MethodDecl*) $tmp896);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base895);
                    panda$core$Bit $tmp897 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived864, base895);
                    if ($tmp897.value) {
                    {
                        found874 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i877, ((panda$core$Object*) derived864));
                        goto $l885;
                    }
                    }
                }
                $l886:;
                if ($tmp889) goto $l899; else goto $l900;
                $l899:;
                int64_t $tmp901 = $tmp880 - i877.value;
                if ($tmp882) goto $l902; else goto $l903;
                $l902:;
                if ($tmp901 >= $tmp881) goto $l898; else goto $l885;
                $l903:;
                if ($tmp901 > $tmp881) goto $l898; else goto $l885;
                $l900:;
                int64_t $tmp905 = i877.value - $tmp880;
                if ($tmp882) goto $l906; else goto $l907;
                $l906:;
                if ($tmp905 >= -$tmp881) goto $l898; else goto $l885;
                $l907:;
                if ($tmp905 > -$tmp881) goto $l898; else goto $l885;
                $l898:;
                i877.value += $tmp881;
                goto $l883;
                $l885:;
                panda$core$Bit $tmp909 = panda$core$Bit$$NOT$R$panda$core$Bit(found874);
                if ($tmp909.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived864));
                }
                }
            }
            goto $l857;
            $l858:;
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
    panda$collections$Array* methods910;
    org$pandalanguage$pandac$Symbol* s913;
    panda$collections$Iterator* m$Iter918;
    org$pandalanguage$pandac$MethodDecl* m930;
    panda$collections$Iterator* p$Iter937;
    org$pandalanguage$pandac$SymbolTable* p949;
    panda$collections$Array* children954;
    panda$collections$Array* types964;
    panda$collections$Iterator* m$Iter967;
    org$pandalanguage$pandac$MethodRef* m979;
    panda$collections$Array* $tmp911 = (panda$collections$Array*) malloc(40);
    $tmp911->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp911->refCount.value = 1;
    panda$collections$Array$init($tmp911);
    methods910 = $tmp911;
    org$pandalanguage$pandac$Symbol* $tmp914 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s913 = $tmp914;
    panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s913->kind, ((panda$core$Int64) { 204 }));
    if ($tmp915.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s913));
        org$pandalanguage$pandac$MethodRef* $tmp916 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp916->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp916->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp916, ((org$pandalanguage$pandac$MethodDecl*) s913), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods910, ((panda$core$Object*) $tmp916));
    }
    }
    else {
    {
        {
            ITable* $tmp919 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s913)->methods)->$class->itable;
            while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp919 = $tmp919->next;
            }
            $fn921 $tmp920 = $tmp919->methods[0];
            panda$collections$Iterator* $tmp922 = $tmp920(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s913)->methods));
            m$Iter918 = $tmp922;
            $l923:;
            ITable* $tmp925 = m$Iter918->$class->itable;
            while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp925 = $tmp925->next;
            }
            $fn927 $tmp926 = $tmp925->methods[0];
            panda$core$Bit $tmp928 = $tmp926(m$Iter918);
            panda$core$Bit $tmp929 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp928);
            if (!$tmp929.value) goto $l924;
            {
                ITable* $tmp931 = m$Iter918->$class->itable;
                while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp931 = $tmp931->next;
                }
                $fn933 $tmp932 = $tmp931->methods[1];
                panda$core$Object* $tmp934 = $tmp932(m$Iter918);
                m930 = ((org$pandalanguage$pandac$MethodDecl*) $tmp934);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m930);
                org$pandalanguage$pandac$MethodRef* $tmp935 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp935->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp935->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp935, m930, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods910, ((panda$core$Object*) $tmp935));
            }
            goto $l923;
            $l924:;
        }
    }
    }
    {
        ITable* $tmp938 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp938 = $tmp938->next;
        }
        $fn940 $tmp939 = $tmp938->methods[0];
        panda$collections$Iterator* $tmp941 = $tmp939(((panda$collections$Iterable*) p_st->parents));
        p$Iter937 = $tmp941;
        $l942:;
        ITable* $tmp944 = p$Iter937->$class->itable;
        while ($tmp944->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp944 = $tmp944->next;
        }
        $fn946 $tmp945 = $tmp944->methods[0];
        panda$core$Bit $tmp947 = $tmp945(p$Iter937);
        panda$core$Bit $tmp948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp947);
        if (!$tmp948.value) goto $l943;
        {
            ITable* $tmp950 = p$Iter937->$class->itable;
            while ($tmp950->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp950 = $tmp950->next;
            }
            $fn952 $tmp951 = $tmp950->methods[1];
            panda$core$Object* $tmp953 = $tmp951(p$Iter937);
            p949 = ((org$pandalanguage$pandac$SymbolTable*) $tmp953);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p949, p_name, methods910, p_types);
        }
        goto $l942;
        $l943:;
    }
    panda$collections$Array* $tmp955 = (panda$collections$Array*) malloc(40);
    $tmp955->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp955->refCount.value = 1;
    panda$collections$Array$init($tmp955);
    children954 = $tmp955;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children954, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp957 = panda$collections$Array$get_count$R$panda$core$Int64(methods910);
    panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp957, ((panda$core$Int64) { 1 }));
    if ($tmp958.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp959 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp959->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp959->refCount.value = 1;
        panda$core$Object* $tmp961 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods910, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp962 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp961));
        panda$core$Object* $tmp963 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods910, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp959, ((panda$core$Int64) { 1002 }), p_offset, $tmp962, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp963)), ((panda$collections$ListView*) children954));
        return $tmp959;
    }
    }
    else {
    {
        panda$collections$Array* $tmp965 = (panda$collections$Array*) malloc(40);
        $tmp965->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp965->refCount.value = 1;
        panda$collections$Array$init($tmp965);
        types964 = $tmp965;
        {
            ITable* $tmp968 = ((panda$collections$Iterable*) methods910)->$class->itable;
            while ($tmp968->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp968 = $tmp968->next;
            }
            $fn970 $tmp969 = $tmp968->methods[0];
            panda$collections$Iterator* $tmp971 = $tmp969(((panda$collections$Iterable*) methods910));
            m$Iter967 = $tmp971;
            $l972:;
            ITable* $tmp974 = m$Iter967->$class->itable;
            while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp974 = $tmp974->next;
            }
            $fn976 $tmp975 = $tmp974->methods[0];
            panda$core$Bit $tmp977 = $tmp975(m$Iter967);
            panda$core$Bit $tmp978 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp977);
            if (!$tmp978.value) goto $l973;
            {
                ITable* $tmp980 = m$Iter967->$class->itable;
                while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp980 = $tmp980->next;
                }
                $fn982 $tmp981 = $tmp980->methods[1];
                panda$core$Object* $tmp983 = $tmp981(m$Iter967);
                m979 = ((org$pandalanguage$pandac$MethodRef*) $tmp983);
                org$pandalanguage$pandac$Type* $tmp984 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m979);
                panda$collections$Array$add$panda$collections$Array$T(types964, ((panda$core$Object*) $tmp984));
            }
            goto $l972;
            $l973:;
        }
        org$pandalanguage$pandac$IRNode* $tmp985 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp985->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp985->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp987 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp987->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp987->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp987, ((panda$collections$ListView*) types964));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp985, ((panda$core$Int64) { 1003 }), p_offset, $tmp987, ((panda$core$Object*) methods910), ((panda$collections$ListView*) children954));
        return $tmp985;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    panda$core$Int64 $match$23811989;
    org$pandalanguage$pandac$ClassDecl* cl991;
    org$pandalanguage$pandac$FieldDecl* f1013;
    panda$collections$Array* children1016;
    org$pandalanguage$pandac$Type* effectiveType1021;
    org$pandalanguage$pandac$IRNode* result1026;
    {
        $match$23811989 = p_s->kind;
        panda$core$Bit $tmp990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23811989, ((panda$core$Int64) { 200 }));
        if ($tmp990.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp992 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl991 = $tmp992;
            if (((panda$core$Bit) { cl991 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp993 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp993->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp993->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp995 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp996 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl991);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp993, ((panda$core$Int64) { 1001 }), p_offset, $tmp995, $tmp996);
                return $tmp993;
            }
            }
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23811989, ((panda$core$Int64) { 201 }));
        if ($tmp997.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp998 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp998->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp998->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1000 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1001 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp998, ((panda$core$Int64) { 1001 }), p_offset, $tmp1000, $tmp1001);
            return $tmp998;
        }
        }
        else {
        panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23811989, ((panda$core$Int64) { 204 }));
        bool $tmp1002 = $tmp1003.value;
        if ($tmp1002) goto $l1004;
        panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23811989, ((panda$core$Int64) { 205 }));
        $tmp1002 = $tmp1005.value;
        $l1004:;
        panda$core$Bit $tmp1006 = { $tmp1002 };
        if ($tmp1006.value) {
        {
            panda$collections$ListView* $tmp1007 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1008 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_offset, $tmp1007);
            return $tmp1008;
        }
        }
        else {
        panda$core$Bit $tmp1009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23811989, ((panda$core$Int64) { 208 }));
        if ($tmp1009.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1010 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1010->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1010, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1010;
        }
        }
        else {
        panda$core$Bit $tmp1012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23811989, ((panda$core$Int64) { 202 }));
        if ($tmp1012.value) {
        {
            f1013 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1013);
            org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1015 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1013->type, $tmp1014);
            if ($tmp1015.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1017 = (panda$collections$Array*) malloc(40);
            $tmp1017->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1017->refCount.value = 1;
            panda$collections$Array$init($tmp1017);
            children1016 = $tmp1017;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1019.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, &$s1020);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1022 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1013->type);
                effectiveType1021 = $tmp1022;
                panda$core$Bit $tmp1023 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1013->annotations);
                if ($tmp1023.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1016, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1013->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1025 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1024);
                    panda$collections$Array$add$panda$collections$Array$T(children1016, ((panda$core$Object*) $tmp1025));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1027 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1027->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1027->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1027, ((panda$core$Int64) { 1026 }), p_offset, f1013->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1016));
                result1026 = $tmp1027;
                panda$core$Bit $tmp1029 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1021, result1026->type);
                if ($tmp1029.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1030 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1026, p_offset, ((panda$core$Bit) { false }), effectiveType1021);
                    result1026 = $tmp1030;
                }
                }
                return result1026;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1031 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1031->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1031->refCount.value = 1;
                panda$core$Object* $tmp1033 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1034 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1033));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1031, ((panda$core$Int64) { 1025 }), p_offset, $tmp1034);
                panda$collections$Array$add$panda$collections$Array$T(children1016, ((panda$core$Object*) $tmp1031));
                org$pandalanguage$pandac$IRNode* $tmp1035 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1035->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1035->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1035, ((panda$core$Int64) { 1026 }), p_offset, f1013->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1016));
                return $tmp1035;
            }
            }
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_context, org$pandalanguage$pandac$Type* p_raw) {
    panda$core$Int64 $match$261751037;
    panda$collections$HashMap* typeMap1043;
    org$pandalanguage$pandac$Type* base1046;
    org$pandalanguage$pandac$ClassDecl* cl1048;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1050;
    {
        $match$261751037 = p_context->typeKind;
        panda$core$Bit $tmp1038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261751037, ((panda$core$Int64) { 10 }));
        if ($tmp1038.value) {
        {
            return p_raw;
        }
        }
        else {
        panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261751037, ((panda$core$Int64) { 11 }));
        if ($tmp1039.value) {
        {
            panda$core$Object* $tmp1040 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1041 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1040), p_raw);
            return $tmp1041;
        }
        }
        else {
        panda$core$Bit $tmp1042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261751037, ((panda$core$Int64) { 21 }));
        if ($tmp1042.value) {
        {
            panda$collections$HashMap* $tmp1044 = (panda$collections$HashMap*) malloc(56);
            $tmp1044->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1044->refCount.value = 1;
            panda$collections$HashMap$init($tmp1044);
            typeMap1043 = $tmp1044;
            panda$core$Object* $tmp1047 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1046 = ((org$pandalanguage$pandac$Type*) $tmp1047);
            org$pandalanguage$pandac$ClassDecl* $tmp1049 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1046)->name);
            cl1048 = $tmp1049;
            panda$core$Int64 $tmp1051 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1050, ((panda$core$Int64) { 1 }), $tmp1051, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1053 = $tmp1050.start.value;
            panda$core$Int64 i1052 = { $tmp1053 };
            int64_t $tmp1055 = $tmp1050.end.value;
            int64_t $tmp1056 = $tmp1050.step.value;
            bool $tmp1057 = $tmp1050.inclusive.value;
            bool $tmp1064 = $tmp1056 > 0;
            if ($tmp1064) goto $l1062; else goto $l1063;
            $l1062:;
            if ($tmp1057) goto $l1065; else goto $l1066;
            $l1065:;
            if ($tmp1053 <= $tmp1055) goto $l1058; else goto $l1060;
            $l1066:;
            if ($tmp1053 < $tmp1055) goto $l1058; else goto $l1060;
            $l1063:;
            if ($tmp1057) goto $l1067; else goto $l1068;
            $l1067:;
            if ($tmp1053 >= $tmp1055) goto $l1058; else goto $l1060;
            $l1068:;
            if ($tmp1053 > $tmp1055) goto $l1058; else goto $l1060;
            $l1058:;
            {
                panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1048)->name, &$s1070);
                panda$core$Int64 $tmp1072 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1052, ((panda$core$Int64) { 1 }));
                ITable* $tmp1073 = ((panda$collections$ListView*) cl1048->parameters)->$class->itable;
                while ($tmp1073->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1073 = $tmp1073->next;
                }
                $fn1075 $tmp1074 = $tmp1073->methods[0];
                panda$core$Object* $tmp1076 = $tmp1074(((panda$collections$ListView*) cl1048->parameters), $tmp1072);
                panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1076))->name);
                panda$core$Object* $tmp1078 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, i1052);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1043, ((panda$collections$Key*) $tmp1077), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1078)));
            }
            $l1061:;
            if ($tmp1064) goto $l1080; else goto $l1081;
            $l1080:;
            int64_t $tmp1082 = $tmp1055 - i1052.value;
            if ($tmp1057) goto $l1083; else goto $l1084;
            $l1083:;
            if ($tmp1082 >= $tmp1056) goto $l1079; else goto $l1060;
            $l1084:;
            if ($tmp1082 > $tmp1056) goto $l1079; else goto $l1060;
            $l1081:;
            int64_t $tmp1086 = i1052.value - $tmp1055;
            if ($tmp1057) goto $l1087; else goto $l1088;
            $l1087:;
            if ($tmp1086 >= -$tmp1056) goto $l1079; else goto $l1060;
            $l1088:;
            if ($tmp1086 > -$tmp1056) goto $l1079; else goto $l1060;
            $l1079:;
            i1052.value += $tmp1056;
            goto $l1058;
            $l1060:;
            org$pandalanguage$pandac$Type* $tmp1090 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1043);
            return $tmp1090;
        }
        }
        else {
        panda$core$Bit $tmp1091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261751037, ((panda$core$Int64) { 22 }));
        if ($tmp1091.value) {
        {
            return p_raw;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp1092 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1093 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1092);
    if ($tmp1093.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1094 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1094;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1095 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1096 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1095);
    if ($tmp1096.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1097 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1097;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$273681098;
    panda$collections$Array* args1108;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1109;
    org$pandalanguage$pandac$IRNode* c1111;
    {
        $match$273681098 = p_expr->kind;
        panda$core$Bit $tmp1099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$273681098, ((panda$core$Int64) { 1031 }));
        if ($tmp1099.value) {
        {
            panda$core$Object* $tmp1100 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1101 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1100)->type);
            panda$core$Object* $tmp1102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1103 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1102)->type);
            org$pandalanguage$pandac$Type* $tmp1104 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1101, $tmp1103);
            org$pandalanguage$pandac$Type* $tmp1105 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1104);
            org$pandalanguage$pandac$Type* $tmp1106 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1105);
            return $tmp1106;
        }
        }
        else {
        panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$273681098, ((panda$core$Int64) { 1040 }));
        if ($tmp1107.value) {
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1109, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1110 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1109);
            args1108 = $tmp1110;
            panda$core$Object* $tmp1112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1114 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1112), &$s1113, ((panda$collections$ListView*) args1108));
            c1111 = $tmp1114;
            if (((panda$core$Bit) { c1111 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1115 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1115;
            }
            }
            return c1111->type;
        }
        }
        }
    }
    org$pandalanguage$pandac$Type* $tmp1116 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1116;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1127;
    panda$core$Int64 $match$286171131;
    panda$core$Int64$nullable result1133;
    panda$core$Int64 $match$292401147;
    panda$core$Int64$nullable best1152;
    panda$collections$Iterator* t$Iter1153;
    org$pandalanguage$pandac$Type* t1165;
    panda$core$Int64$nullable cost1170;
    org$pandalanguage$pandac$ClassDecl* cl1186;
    panda$core$Int64$nullable cost1188;
    panda$collections$Iterator* intf$Iter1193;
    org$pandalanguage$pandac$Type* intf1205;
    panda$core$Int64$nullable cost1210;
    panda$core$Bit $tmp1117 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1117.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1118 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1119 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1118);
    if ($tmp1119.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1120.value) {
    {
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1121.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1122 = $tmp1123.value;
    if (!$tmp1122) goto $l1124;
    panda$core$Bit $tmp1125 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1122 = $tmp1125.value;
    $l1124:;
    panda$core$Bit $tmp1126 = { $tmp1122 };
    if ($tmp1126.value) {
    {
        panda$core$Object* $tmp1128 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1129 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1128), p_target);
        result1127 = $tmp1129;
        if (((panda$core$Bit) { !result1127.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1130 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1127.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1130, true });
    }
    }
    {
        $match$286171131 = p_target->typeKind;
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286171131, ((panda$core$Int64) { 11 }));
        if ($tmp1132.value) {
        {
            panda$core$Object* $tmp1134 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1135 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1134));
            result1133 = $tmp1135;
            if (((panda$core$Bit) { !result1133.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1136 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1133.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1136, true });
        }
        }
        else {
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286171131, ((panda$core$Int64) { 22 }));
        if ($tmp1137.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286171131, ((panda$core$Int64) { 12 }));
        bool $tmp1138 = $tmp1139.value;
        if ($tmp1138) goto $l1140;
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286171131, ((panda$core$Int64) { 13 }));
        $tmp1138 = $tmp1141.value;
        $l1140:;
        panda$core$Bit $tmp1142 = { $tmp1138 };
        if ($tmp1142.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286171131, ((panda$core$Int64) { 10 }));
        if ($tmp1143.value) {
        {
            panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1144.value) {
            {
                panda$core$Object* $tmp1145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1146 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1145), p_target);
                return $tmp1146;
            }
            }
        }
        }
        }
        }
        }
    }
    {
        $match$292401147 = p_type->typeKind;
        panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292401147, ((panda$core$Int64) { 19 }));
        if ($tmp1148.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1149 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1150 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1149, p_target);
            return $tmp1150;
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292401147, ((panda$core$Int64) { 17 }));
        if ($tmp1151.value) {
        {
            best1152 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1154 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1154 = $tmp1154->next;
                }
                $fn1156 $tmp1155 = $tmp1154->methods[0];
                panda$collections$Iterator* $tmp1157 = $tmp1155(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1153 = $tmp1157;
                $l1158:;
                ITable* $tmp1160 = t$Iter1153->$class->itable;
                while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1160 = $tmp1160->next;
                }
                $fn1162 $tmp1161 = $tmp1160->methods[0];
                panda$core$Bit $tmp1163 = $tmp1161(t$Iter1153);
                panda$core$Bit $tmp1164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1163);
                if (!$tmp1164.value) goto $l1159;
                {
                    ITable* $tmp1166 = t$Iter1153->$class->itable;
                    while ($tmp1166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1166 = $tmp1166->next;
                    }
                    $fn1168 $tmp1167 = $tmp1166->methods[1];
                    panda$core$Object* $tmp1169 = $tmp1167(t$Iter1153);
                    t1165 = ((org$pandalanguage$pandac$Type*) $tmp1169);
                    panda$core$Int64$nullable $tmp1171 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1165, p_target);
                    cost1170 = $tmp1171;
                    bool $tmp1172 = ((panda$core$Bit) { cost1170.nonnull }).value;
                    if (!$tmp1172) goto $l1173;
                    bool $tmp1174 = ((panda$core$Bit) { !best1152.nonnull }).value;
                    if ($tmp1174) goto $l1175;
                    panda$core$Bit $tmp1176 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1170.value), ((panda$core$Int64) best1152.value));
                    $tmp1174 = $tmp1176.value;
                    $l1175:;
                    panda$core$Bit $tmp1177 = { $tmp1174 };
                    $tmp1172 = $tmp1177.value;
                    $l1173:;
                    panda$core$Bit $tmp1178 = { $tmp1172 };
                    if ($tmp1178.value) {
                    {
                        best1152 = cost1170;
                    }
                    }
                }
                goto $l1158;
                $l1159:;
            }
            return best1152;
        }
        }
        else {
        panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292401147, ((panda$core$Int64) { 22 }));
        if ($tmp1179.value) {
        {
            panda$core$Object* $tmp1180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1181 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1180), p_target);
            return $tmp1181;
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1182 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1183 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1182);
    if ($tmp1183.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1184 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1185 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1184);
    if ($tmp1185.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1187 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1186 = $tmp1187;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1186);
    if (((panda$core$Bit) { cl1186->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1189 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1186->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1190 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1189);
        panda$core$Int64$nullable $tmp1191 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1190, p_target);
        cost1188 = $tmp1191;
        if (((panda$core$Bit) { cost1188.nonnull }).value) {
        {
            panda$core$Int64 $tmp1192 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1188.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1192, true });
        }
        }
    }
    }
    {
        ITable* $tmp1194 = ((panda$collections$Iterable*) cl1186->rawInterfaces)->$class->itable;
        while ($tmp1194->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1194 = $tmp1194->next;
        }
        $fn1196 $tmp1195 = $tmp1194->methods[0];
        panda$collections$Iterator* $tmp1197 = $tmp1195(((panda$collections$Iterable*) cl1186->rawInterfaces));
        intf$Iter1193 = $tmp1197;
        $l1198:;
        ITable* $tmp1200 = intf$Iter1193->$class->itable;
        while ($tmp1200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1200 = $tmp1200->next;
        }
        $fn1202 $tmp1201 = $tmp1200->methods[0];
        panda$core$Bit $tmp1203 = $tmp1201(intf$Iter1193);
        panda$core$Bit $tmp1204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1203);
        if (!$tmp1204.value) goto $l1199;
        {
            ITable* $tmp1206 = intf$Iter1193->$class->itable;
            while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1206 = $tmp1206->next;
            }
            $fn1208 $tmp1207 = $tmp1206->methods[1];
            panda$core$Object* $tmp1209 = $tmp1207(intf$Iter1193);
            intf1205 = ((org$pandalanguage$pandac$Type*) $tmp1209);
            org$pandalanguage$pandac$Type* $tmp1211 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1205);
            org$pandalanguage$pandac$Type* $tmp1212 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1211);
            panda$core$Int64$nullable $tmp1213 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1212, p_target);
            cost1210 = $tmp1213;
            if (((panda$core$Bit) { cost1210.nonnull }).value) {
            {
                panda$core$Int64 $tmp1214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1210.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1214, true });
            }
            }
        }
        goto $l1198;
        $l1199:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1216 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1215 = $tmp1216.value;
    if (!$tmp1215) goto $l1217;
    panda$core$Bit $tmp1218 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1215 = $tmp1218.value;
    $l1217:;
    panda$core$Bit $tmp1219 = { $tmp1215 };
    if ($tmp1219.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1221 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1220 = $tmp1221.value;
    if (!$tmp1220) goto $l1222;
    panda$core$Bit $tmp1223 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1220 = $tmp1223.value;
    $l1222:;
    panda$core$Bit $tmp1224 = { $tmp1220 };
    if ($tmp1224.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1226 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1225 = $tmp1226.value;
    if (!$tmp1225) goto $l1227;
    panda$core$Bit $tmp1228 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1225 = $tmp1228.value;
    $l1227:;
    panda$core$Bit $tmp1229 = { $tmp1225 };
    if ($tmp1229.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1230 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1230.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1231 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1231.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1232 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1232.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 $match$311701234;
    panda$core$Int64$nullable cost1237;
    panda$core$Int64 $match$317641245;
    panda$core$Int64$nullable cost11312;
    panda$core$Int64$nullable cost21316;
    org$pandalanguage$pandac$ClassDecl* targetClass1327;
    panda$collections$Iterator* m$Iter1329;
    org$pandalanguage$pandac$MethodDecl* m1341;
    panda$core$Int64$nullable cost1347;
    panda$core$Bit $tmp1233 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1233.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    {
        $match$311701234 = p_target->typeKind;
        panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$311701234, ((panda$core$Int64) { 11 }));
        if ($tmp1235.value) {
        {
            panda$core$Bit $tmp1236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1236.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1238 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1239 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1238));
            cost1237 = $tmp1239;
            if (((panda$core$Bit) { !cost1237.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1240.value) {
            {
                return cost1237;
            }
            }
            panda$core$Int64 $tmp1241 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1237.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1241, true });
        }
        }
        else {
        panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$311701234, ((panda$core$Int64) { 22 }));
        if ($tmp1242.value) {
        {
            panda$core$Object* $tmp1243 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1244 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1243));
            return $tmp1244;
        }
        }
        }
    }
    {
        $match$317641245 = p_expr->kind;
        panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317641245, ((panda$core$Int64) { 1011 }));
        if ($tmp1246.value) {
        {
            panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1247.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1248 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1248.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1249 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1250 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1249, p_target);
                return $tmp1250;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317641245, ((panda$core$Int64) { 1004 }));
        if ($tmp1251.value) {
        {
            panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1253 = $tmp1254.value;
            if (!$tmp1253) goto $l1255;
            panda$core$Int64 $tmp1256 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1257 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1256);
            panda$core$Int64 $tmp1258 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1259 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1257, $tmp1258);
            $tmp1253 = $tmp1259.value;
            $l1255:;
            panda$core$Bit $tmp1260 = { $tmp1253 };
            bool $tmp1252 = $tmp1260.value;
            if ($tmp1252) goto $l1261;
            panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1262 = $tmp1263.value;
            if (!$tmp1262) goto $l1264;
            panda$core$Int64 $tmp1265 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1266 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1267 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1265, $tmp1266);
            $tmp1262 = $tmp1267.value;
            $l1264:;
            panda$core$Bit $tmp1268 = { $tmp1262 };
            $tmp1252 = $tmp1268.value;
            $l1261:;
            panda$core$Bit $tmp1269 = { $tmp1252 };
            if ($tmp1269.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1270 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1270);
            if ($tmp1271.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1272 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1273 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1272, p_target);
                return $tmp1273;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317641245, ((panda$core$Int64) { 1032 }));
        if ($tmp1274.value) {
        {
            panda$core$Bit $tmp1277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1276 = $tmp1277.value;
            if (!$tmp1276) goto $l1278;
            panda$core$Int64 $tmp1279 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1280 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1279);
            panda$core$Int64 $tmp1281 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1280);
            panda$core$Int64 $tmp1282 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1283 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1281, $tmp1282);
            $tmp1276 = $tmp1283.value;
            $l1278:;
            panda$core$Bit $tmp1284 = { $tmp1276 };
            bool $tmp1275 = $tmp1284.value;
            if ($tmp1275) goto $l1285;
            panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1286 = $tmp1287.value;
            if (!$tmp1286) goto $l1288;
            panda$core$Int64 $tmp1289 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1290 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1289);
            panda$core$Int64 $tmp1291 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1290);
            panda$core$Int64 $tmp1292 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1293 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1291, $tmp1292);
            $tmp1286 = $tmp1293.value;
            $l1288:;
            panda$core$Bit $tmp1294 = { $tmp1286 };
            $tmp1275 = $tmp1294.value;
            $l1285:;
            panda$core$Bit $tmp1295 = { $tmp1275 };
            if ($tmp1295.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1296 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1296);
            if ($tmp1297.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1298 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1299 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1298, p_target);
                return $tmp1299;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317641245, ((panda$core$Int64) { 1031 }));
        if ($tmp1300.value) {
        {
            panda$core$Bit $tmp1301 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1301.value) {
            {
                panda$core$Object* $tmp1303 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1303)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1302 = $tmp1304.value;
                if (!$tmp1302) goto $l1305;
                panda$core$Object* $tmp1306 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1306)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1302 = $tmp1307.value;
                $l1305:;
                panda$core$Bit $tmp1308 = { $tmp1302 };
                if ($tmp1308.value) {
                {
                    panda$core$Object* $tmp1309 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1310 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1309));
                    panda$core$Bit $tmp1311 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1310);
                    if ($tmp1311.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Object* $tmp1313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1314 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1315 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1313), ((org$pandalanguage$pandac$Type*) $tmp1314));
                cost11312 = $tmp1315;
                if (((panda$core$Bit) { !cost11312.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1319 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1317), ((org$pandalanguage$pandac$Type*) $tmp1318));
                cost21316 = $tmp1319;
                if (((panda$core$Bit) { !cost21316.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1320 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11312.value), ((panda$core$Int64) cost21316.value));
                return ((panda$core$Int64$nullable) { $tmp1320, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1321 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1322 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1321, p_target);
            return $tmp1322;
        }
        }
        else {
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317641245, ((panda$core$Int64) { 1040 }));
        if ($tmp1323.value) {
        {
            panda$core$Int64$nullable $tmp1324 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1324;
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1325 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1325);
    if ($tmp1326.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1328 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1327 = $tmp1328;
    if (((panda$core$Bit) { targetClass1327 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1330 = ((panda$collections$Iterable*) targetClass1327->methods)->$class->itable;
        while ($tmp1330->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1330 = $tmp1330->next;
        }
        $fn1332 $tmp1331 = $tmp1330->methods[0];
        panda$collections$Iterator* $tmp1333 = $tmp1331(((panda$collections$Iterable*) targetClass1327->methods));
        m$Iter1329 = $tmp1333;
        $l1334:;
        ITable* $tmp1336 = m$Iter1329->$class->itable;
        while ($tmp1336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1336 = $tmp1336->next;
        }
        $fn1338 $tmp1337 = $tmp1336->methods[0];
        panda$core$Bit $tmp1339 = $tmp1337(m$Iter1329);
        panda$core$Bit $tmp1340 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1339);
        if (!$tmp1340.value) goto $l1335;
        {
            ITable* $tmp1342 = m$Iter1329->$class->itable;
            while ($tmp1342->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1342 = $tmp1342->next;
            }
            $fn1344 $tmp1343 = $tmp1342->methods[1];
            panda$core$Object* $tmp1345 = $tmp1343(m$Iter1329);
            m1341 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1345);
            panda$core$Bit $tmp1346 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1341->annotations);
            if ($tmp1346.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1341);
                panda$core$Object* $tmp1348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1341->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1349 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1348)->type);
                cost1347 = $tmp1349;
                if (((panda$core$Bit) { cost1347.nonnull }).value) {
                {
                    return cost1347;
                }
                }
            }
            }
        }
        goto $l1334;
        $l1335:;
    }
    panda$core$Int64$nullable $tmp1350 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1350;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1359;
    org$pandalanguage$pandac$IRNode* intermediate1364;
    panda$core$Int64 $match$358201368;
    org$pandalanguage$pandac$IRNode* coerced1394;
    org$pandalanguage$pandac$IRNode* coerced1416;
    org$pandalanguage$pandac$IRNode* varType1431;
    org$pandalanguage$pandac$Type* param1437;
    org$pandalanguage$pandac$IRNode* start1439;
    org$pandalanguage$pandac$IRNode* end1442;
    panda$collections$Array* args1445;
    org$pandalanguage$pandac$IRNode* target1452;
    panda$collections$ListView* methods1460;
    panda$collections$Array* args1462;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1463;
    panda$collections$Array* best1465;
    panda$core$Int64$nullable bestCost1468;
    panda$collections$Iterator* m$Iter1469;
    org$pandalanguage$pandac$MethodRef* m1481;
    panda$core$Int64$nullable cost1486;
    org$pandalanguage$pandac$IRNode* callTarget1492;
    org$pandalanguage$pandac$IRNode* result1498;
    panda$collections$Array* args1503;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1504;
    panda$collections$Array* children1516;
    org$pandalanguage$pandac$IRNode* intermediate1522;
    org$pandalanguage$pandac$ClassDecl* cl1527;
    panda$collections$Iterator* m$Iter1529;
    org$pandalanguage$pandac$MethodDecl* m1541;
    org$pandalanguage$pandac$IRNode* type1549;
    panda$collections$Array* args1554;
    panda$collections$Array* children1558;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1351 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1351.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1352 = $tmp1353.value;
    if (!$tmp1352) goto $l1354;
    panda$core$Bit $tmp1355 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1352 = $tmp1355.value;
    $l1354:;
    panda$core$Bit $tmp1356 = { $tmp1352 };
    if ($tmp1356.value) {
    {
        panda$core$Object* $tmp1357 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1358 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1357), p_target);
        if ($tmp1358.value) {
        {
            panda$collections$Array* $tmp1360 = (panda$collections$Array*) malloc(40);
            $tmp1360->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1360->refCount.value = 1;
            panda$collections$Array$init($tmp1360);
            children1359 = $tmp1360;
            panda$collections$Array$add$panda$collections$Array$T(children1359, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1362 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1362->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1362->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1362, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1359));
            return $tmp1362;
        }
        }
        panda$core$Object* $tmp1365 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1366 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1365));
        intermediate1364 = $tmp1366;
        org$pandalanguage$pandac$IRNode* $tmp1367 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1364, p_target);
        return $tmp1367;
    }
    }
    {
        $match$358201368 = p_expr->kind;
        panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358201368, ((panda$core$Int64) { 1004 }));
        if ($tmp1369.value) {
        {
            panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1370 = $tmp1371.value;
            if (!$tmp1370) goto $l1372;
            panda$core$Int64 $tmp1373 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1374 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1375 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1373, $tmp1374);
            $tmp1370 = $tmp1375.value;
            $l1372:;
            panda$core$Bit $tmp1376 = { $tmp1370 };
            if ($tmp1376.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1377 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1377->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1377->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1377, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1377;
            }
            }
            else {
            panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1379 = $tmp1380.value;
            if (!$tmp1379) goto $l1381;
            panda$core$Int64 $tmp1382 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1383 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1384 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1382, $tmp1383);
            $tmp1379 = $tmp1384.value;
            $l1381:;
            panda$core$Bit $tmp1385 = { $tmp1379 };
            if ($tmp1385.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1386 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1386->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1386->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1386, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1386;
            }
            }
            }
            panda$core$Bit $tmp1389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1388 = $tmp1389.value;
            if (!$tmp1388) goto $l1390;
            panda$core$Bit $tmp1391 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1391);
            $tmp1388 = $tmp1392.value;
            $l1390:;
            panda$core$Bit $tmp1393 = { $tmp1388 };
            if ($tmp1393.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1395 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1396 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1395);
                coerced1394 = $tmp1396;
                if (((panda$core$Bit) { coerced1394 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1397 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1394, p_target);
                return $tmp1397;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358201368, ((panda$core$Int64) { 1032 }));
        if ($tmp1398.value) {
        {
            panda$core$Bit $tmp1400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1399 = $tmp1400.value;
            if (!$tmp1399) goto $l1401;
            panda$core$Int64 $tmp1402 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1403 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1402);
            panda$core$Int64 $tmp1404 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1403);
            panda$core$Int64 $tmp1405 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1406 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1404, $tmp1405);
            $tmp1399 = $tmp1406.value;
            $l1401:;
            panda$core$Bit $tmp1407 = { $tmp1399 };
            if ($tmp1407.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1408 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1408->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1408->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1408, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1408;
            }
            }
            panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1410 = $tmp1411.value;
            if (!$tmp1410) goto $l1412;
            panda$core$Bit $tmp1413 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1413);
            $tmp1410 = $tmp1414.value;
            $l1412:;
            panda$core$Bit $tmp1415 = { $tmp1410 };
            if ($tmp1415.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1418 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1417);
                coerced1416 = $tmp1418;
                if (((panda$core$Bit) { coerced1416 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1419 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1416, p_target);
                return $tmp1419;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358201368, ((panda$core$Int64) { 1011 }));
        if ($tmp1420.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1421 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1422 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1421);
            if ($tmp1422.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1423 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1423->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1423->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1423, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1423;
            }
            }
            panda$core$Bit $tmp1426 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1425 = $tmp1426.value;
            if (!$tmp1425) goto $l1427;
            org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1429 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1428);
            $tmp1425 = $tmp1429.value;
            $l1427:;
            panda$core$Bit $tmp1430 = { $tmp1425 };
            if ($tmp1430.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1432 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1433 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1432);
                varType1431 = $tmp1433;
                if (((panda$core$Bit) { varType1431 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1434 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1431, p_target);
                    return $tmp1434;
                }
                }
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358201368, ((panda$core$Int64) { 1031 }));
        if ($tmp1435.value) {
        {
            panda$core$Bit $tmp1436 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1436.value) {
            {
                panda$core$Object* $tmp1438 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1437 = ((org$pandalanguage$pandac$Type*) $tmp1438);
                panda$core$Object* $tmp1440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1441 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1440), param1437);
                start1439 = $tmp1441;
                if (((panda$core$Bit) { start1439 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1444 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1443), param1437);
                end1442 = $tmp1444;
                if (((panda$core$Bit) { end1442 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1446 = (panda$collections$Array*) malloc(40);
                $tmp1446->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1446->refCount.value = 1;
                panda$collections$Array$init($tmp1446);
                args1445 = $tmp1446;
                panda$collections$Array$add$panda$collections$Array$T(args1445, ((panda$core$Object*) start1439));
                panda$collections$Array$add$panda$collections$Array$T(args1445, ((panda$core$Object*) end1442));
                panda$core$Object* $tmp1448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1445, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1448)));
                org$pandalanguage$pandac$IRNode* $tmp1449 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1449->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1449->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1451 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1449, ((panda$core$Int64) { 1011 }), p_expr->offset, $tmp1451, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1445, ((panda$core$Object*) $tmp1449));
                org$pandalanguage$pandac$IRNode* $tmp1453 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1453->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1455 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1453, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1455, p_target);
                target1452 = $tmp1453;
                org$pandalanguage$pandac$IRNode* $tmp1456 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1452, ((panda$collections$ListView*) args1445));
                return $tmp1456;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1457 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1458 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1457, p_target);
                return $tmp1458;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358201368, ((panda$core$Int64) { 1039 }));
        if ($tmp1459.value) {
        {
            panda$core$Object* $tmp1461 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1460 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1461)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1463, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1464 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1463);
            args1462 = $tmp1464;
            panda$collections$Array* $tmp1466 = (panda$collections$Array*) malloc(40);
            $tmp1466->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1466->refCount.value = 1;
            panda$collections$Array$init($tmp1466);
            best1465 = $tmp1466;
            bestCost1468 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1470 = ((panda$collections$Iterable*) methods1460)->$class->itable;
                while ($tmp1470->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1470 = $tmp1470->next;
                }
                $fn1472 $tmp1471 = $tmp1470->methods[0];
                panda$collections$Iterator* $tmp1473 = $tmp1471(((panda$collections$Iterable*) methods1460));
                m$Iter1469 = $tmp1473;
                $l1474:;
                ITable* $tmp1476 = m$Iter1469->$class->itable;
                while ($tmp1476->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1476 = $tmp1476->next;
                }
                $fn1478 $tmp1477 = $tmp1476->methods[0];
                panda$core$Bit $tmp1479 = $tmp1477(m$Iter1469);
                panda$core$Bit $tmp1480 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1479);
                if (!$tmp1480.value) goto $l1475;
                {
                    ITable* $tmp1482 = m$Iter1469->$class->itable;
                    while ($tmp1482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1482 = $tmp1482->next;
                    }
                    $fn1484 $tmp1483 = $tmp1482->methods[1];
                    panda$core$Object* $tmp1485 = $tmp1483(m$Iter1469);
                    m1481 = ((org$pandalanguage$pandac$MethodRef*) $tmp1485);
                    panda$core$Int64$nullable $tmp1487 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1481, ((panda$collections$ListView*) args1462), p_target);
                    cost1486 = $tmp1487;
                    if (((panda$core$Bit) { !cost1486.nonnull }).value) {
                    {
                        goto $l1474;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1468.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1465, ((panda$core$Object*) m1481));
                        bestCost1468 = cost1486;
                        goto $l1474;
                    }
                    }
                    panda$core$Bit $tmp1488 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1486.value), ((panda$core$Int64) bestCost1468.value));
                    if ($tmp1488.value) {
                    {
                        panda$collections$Array$clear(best1465);
                        bestCost1468 = cost1486;
                    }
                    }
                    panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1486.value), ((panda$core$Int64) bestCost1468.value));
                    if ($tmp1489.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1465, ((panda$core$Object*) m1481));
                    }
                    }
                }
                goto $l1474;
                $l1475:;
            }
            panda$core$Int64 $tmp1490 = panda$collections$Array$get_count$R$panda$core$Int64(best1465);
            panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1490, ((panda$core$Int64) { 1 }));
            if ($tmp1491.value) {
            {
                panda$core$Object* $tmp1493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1494 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1493)->children);
                panda$core$Bit $tmp1495 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1494, ((panda$core$Int64) { 0 }));
                if ($tmp1495.value) {
                {
                    panda$core$Object* $tmp1496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1496)->children, ((panda$core$Int64) { 0 }));
                    callTarget1492 = ((org$pandalanguage$pandac$IRNode*) $tmp1497);
                }
                }
                else {
                {
                    callTarget1492 = NULL;
                }
                }
                panda$core$Object* $tmp1499 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1465, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1500 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->offset, callTarget1492, ((org$pandalanguage$pandac$MethodRef*) $tmp1499), ((panda$collections$ListView*) args1462));
                result1498 = $tmp1500;
                org$pandalanguage$pandac$IRNode* $tmp1501 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1498, p_target);
                return $tmp1501;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358201368, ((panda$core$Int64) { 1040 }));
        if ($tmp1502.value) {
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1504, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1505 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1504);
            args1503 = $tmp1505;
            panda$core$Object* $tmp1506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1508 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1506), &$s1507, ((panda$collections$ListView*) args1503), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1509 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1508, p_target);
            return $tmp1509;
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1510.value) {
    {
        panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1511.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1512 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1512->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1512->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1512, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1512;
        }
        }
        panda$core$Object* $tmp1514 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1515 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1514));
        if ($tmp1515.value) {
        {
            panda$collections$Array* $tmp1517 = (panda$collections$Array*) malloc(40);
            $tmp1517->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1517->refCount.value = 1;
            panda$collections$Array$init($tmp1517);
            children1516 = $tmp1517;
            panda$collections$Array$add$panda$collections$Array$T(children1516, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1519 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1519->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1519->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1519, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1516));
            return $tmp1519;
        }
        }
        panda$core$Bit $tmp1521 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1521.value) {
        {
            panda$core$Object* $tmp1523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1524 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1523));
            intermediate1522 = $tmp1524;
            org$pandalanguage$pandac$IRNode* $tmp1525 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1522, p_target);
            return $tmp1525;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1526 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1526.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1528 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1527 = $tmp1528;
        if (((panda$core$Bit) { cl1527 != NULL }).value) {
        {
            {
                ITable* $tmp1530 = ((panda$collections$Iterable*) cl1527->methods)->$class->itable;
                while ($tmp1530->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1530 = $tmp1530->next;
                }
                $fn1532 $tmp1531 = $tmp1530->methods[0];
                panda$collections$Iterator* $tmp1533 = $tmp1531(((panda$collections$Iterable*) cl1527->methods));
                m$Iter1529 = $tmp1533;
                $l1534:;
                ITable* $tmp1536 = m$Iter1529->$class->itable;
                while ($tmp1536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1536 = $tmp1536->next;
                }
                $fn1538 $tmp1537 = $tmp1536->methods[0];
                panda$core$Bit $tmp1539 = $tmp1537(m$Iter1529);
                panda$core$Bit $tmp1540 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1539);
                if (!$tmp1540.value) goto $l1535;
                {
                    ITable* $tmp1542 = m$Iter1529->$class->itable;
                    while ($tmp1542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1542 = $tmp1542->next;
                    }
                    $fn1544 $tmp1543 = $tmp1542->methods[1];
                    panda$core$Object* $tmp1545 = $tmp1543(m$Iter1529);
                    m1541 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1545);
                    panda$core$Bit $tmp1546 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1541->annotations);
                    if ($tmp1546.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1541);
                        panda$core$Object* $tmp1547 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1541->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1548 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1547)->type);
                        if (((panda$core$Bit) { $tmp1548.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1550 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1550->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1550->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1552 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1553 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1527);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1550, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1552, $tmp1553);
                            type1549 = $tmp1550;
                            panda$collections$Array* $tmp1555 = (panda$collections$Array*) malloc(40);
                            $tmp1555->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1555->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1555, ((panda$core$Int64) { 1 }));
                            args1554 = $tmp1555;
                            panda$collections$Array$add$panda$collections$Array$T(args1554, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1557 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1549, ((panda$collections$ListView*) args1554));
                            return $tmp1557;
                        }
                        }
                    }
                    }
                }
                goto $l1534;
                $l1535:;
            }
        }
        }
        panda$collections$Array* $tmp1559 = (panda$collections$Array*) malloc(40);
        $tmp1559->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1559->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1559, ((panda$core$Int64) { 1 }));
        children1558 = $tmp1559;
        panda$collections$Array$add$panda$collections$Array$T(children1558, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1561 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1561->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1561->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1561, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1558));
        return $tmp1561;
    }
    }
    panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1563, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1564, &$s1565);
    panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1566, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, &$s1568);
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, $tmp1569);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1570;
    org$pandalanguage$pandac$IRNode* $tmp1571 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1570 = $tmp1571;
    return result1570;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Iterator* t$Iter1584;
    org$pandalanguage$pandac$Type* t1596;
    panda$core$Bit $tmp1573 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1572 = $tmp1573.value;
    if (!$tmp1572) goto $l1574;
    panda$core$Bit $tmp1575 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1572 = $tmp1575.value;
    $l1574:;
    panda$core$Bit $tmp1576 = { $tmp1572 };
    if ($tmp1576.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1577 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1577.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1579 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1578 = $tmp1579.value;
    if (!$tmp1578) goto $l1580;
    panda$core$Bit $tmp1581 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1578 = $tmp1581.value;
    $l1580:;
    panda$core$Bit $tmp1582 = { $tmp1578 };
    if ($tmp1582.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 17 }));
    if ($tmp1583.value) {
    {
        {
            ITable* $tmp1585 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
            while ($tmp1585->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1585 = $tmp1585->next;
            }
            $fn1587 $tmp1586 = $tmp1585->methods[0];
            panda$collections$Iterator* $tmp1588 = $tmp1586(((panda$collections$Iterable*) p_type->subtypes));
            t$Iter1584 = $tmp1588;
            $l1589:;
            ITable* $tmp1591 = t$Iter1584->$class->itable;
            while ($tmp1591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1591 = $tmp1591->next;
            }
            $fn1593 $tmp1592 = $tmp1591->methods[0];
            panda$core$Bit $tmp1594 = $tmp1592(t$Iter1584);
            panda$core$Bit $tmp1595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1594);
            if (!$tmp1595.value) goto $l1590;
            {
                ITable* $tmp1597 = t$Iter1584->$class->itable;
                while ($tmp1597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1597 = $tmp1597->next;
                }
                $fn1599 $tmp1598 = $tmp1597->methods[1];
                panda$core$Object* $tmp1600 = $tmp1598(t$Iter1584);
                t1596 = ((org$pandalanguage$pandac$Type*) $tmp1600);
                panda$core$Int64$nullable $tmp1601 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1596, p_target);
                if (((panda$core$Bit) { $tmp1601.nonnull }).value) {
                {
                    return ((panda$core$Bit) { true });
                }
                }
            }
            goto $l1589;
            $l1590:;
        }
    }
    }
    panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1602.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1603 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1603.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable $tmp1604 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1604.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1605 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    return $tmp1605;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 $match$441221621;
    panda$collections$Array* children1640;
    panda$core$Bit $tmp1606 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1606.value) {
    {
        return p_node;
    }
    }
    bool $tmp1607 = p_isExplicit.value;
    if (!$tmp1607) goto $l1608;
    panda$core$Bit $tmp1609 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1610 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1609);
    $tmp1607 = $tmp1610.value;
    $l1608:;
    panda$core$Bit $tmp1611 = { $tmp1607 };
    if ($tmp1611.value) {
    {
        panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1612, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, &$s1614);
        panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1616, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1617, &$s1618);
        panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, $tmp1619);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1620);
    }
    }
    {
        $match$441221621 = p_node->kind;
        panda$core$Bit $tmp1626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441221621, ((panda$core$Int64) { 1004 }));
        bool $tmp1625 = $tmp1626.value;
        if ($tmp1625) goto $l1627;
        panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441221621, ((panda$core$Int64) { 1032 }));
        $tmp1625 = $tmp1628.value;
        $l1627:;
        panda$core$Bit $tmp1629 = { $tmp1625 };
        bool $tmp1624 = $tmp1629.value;
        if ($tmp1624) goto $l1630;
        panda$core$Bit $tmp1631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441221621, ((panda$core$Int64) { 1011 }));
        $tmp1624 = $tmp1631.value;
        $l1630:;
        panda$core$Bit $tmp1632 = { $tmp1624 };
        bool $tmp1623 = $tmp1632.value;
        if ($tmp1623) goto $l1633;
        panda$core$Bit $tmp1634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441221621, ((panda$core$Int64) { 1039 }));
        $tmp1623 = $tmp1634.value;
        $l1633:;
        panda$core$Bit $tmp1635 = { $tmp1623 };
        bool $tmp1622 = $tmp1635.value;
        if ($tmp1622) goto $l1636;
        panda$core$Bit $tmp1637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441221621, ((panda$core$Int64) { 1040 }));
        $tmp1622 = $tmp1637.value;
        $l1636:;
        panda$core$Bit $tmp1638 = { $tmp1622 };
        if ($tmp1638.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1639 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1639;
        }
        }
    }
    panda$collections$Array* $tmp1641 = (panda$collections$Array*) malloc(40);
    $tmp1641->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1641->refCount.value = 1;
    panda$collections$Array$init($tmp1641);
    children1640 = $tmp1641;
    panda$collections$Array$add$panda$collections$Array$T(children1640, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1643 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1643->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1643->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1643, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1640));
    return $tmp1643;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1651;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1652;
    panda$core$Int64$nullable cost1672;
    panda$core$Int64$nullable cost1691;
    panda$core$Int64 $tmp1645 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1646 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1646->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1646 = $tmp1646->next;
    }
    $fn1648 $tmp1647 = $tmp1646->methods[0];
    panda$core$Int64 $tmp1649 = $tmp1647(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1650 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1645, $tmp1649);
    if ($tmp1650.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1651 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1653 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1652, ((panda$core$Int64) { 0 }), $tmp1653, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1655 = $tmp1652.start.value;
    panda$core$Int64 i1654 = { $tmp1655 };
    int64_t $tmp1657 = $tmp1652.end.value;
    int64_t $tmp1658 = $tmp1652.step.value;
    bool $tmp1659 = $tmp1652.inclusive.value;
    bool $tmp1666 = $tmp1658 > 0;
    if ($tmp1666) goto $l1664; else goto $l1665;
    $l1664:;
    if ($tmp1659) goto $l1667; else goto $l1668;
    $l1667:;
    if ($tmp1655 <= $tmp1657) goto $l1660; else goto $l1662;
    $l1668:;
    if ($tmp1655 < $tmp1657) goto $l1660; else goto $l1662;
    $l1665:;
    if ($tmp1659) goto $l1669; else goto $l1670;
    $l1669:;
    if ($tmp1655 >= $tmp1657) goto $l1660; else goto $l1662;
    $l1670:;
    if ($tmp1655 > $tmp1657) goto $l1660; else goto $l1662;
    $l1660:;
    {
        ITable* $tmp1673 = p_args->$class->itable;
        while ($tmp1673->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1673 = $tmp1673->next;
        }
        $fn1675 $tmp1674 = $tmp1673->methods[0];
        panda$core$Object* $tmp1676 = $tmp1674(p_args, i1654);
        org$pandalanguage$pandac$Type* $tmp1677 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1654);
        panda$core$Int64$nullable $tmp1678 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1676), $tmp1677);
        cost1672 = $tmp1678;
        if (((panda$core$Bit) { !cost1672.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1679 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1651, ((panda$core$Int64) cost1672.value));
        result1651 = $tmp1679;
    }
    $l1663:;
    if ($tmp1666) goto $l1681; else goto $l1682;
    $l1681:;
    int64_t $tmp1683 = $tmp1657 - i1654.value;
    if ($tmp1659) goto $l1684; else goto $l1685;
    $l1684:;
    if ($tmp1683 >= $tmp1658) goto $l1680; else goto $l1662;
    $l1685:;
    if ($tmp1683 > $tmp1658) goto $l1680; else goto $l1662;
    $l1682:;
    int64_t $tmp1687 = i1654.value - $tmp1657;
    if ($tmp1659) goto $l1688; else goto $l1689;
    $l1688:;
    if ($tmp1687 >= -$tmp1658) goto $l1680; else goto $l1662;
    $l1689:;
    if ($tmp1687 > -$tmp1658) goto $l1680; else goto $l1662;
    $l1680:;
    i1654.value += $tmp1658;
    goto $l1660;
    $l1662:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1692 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1693 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1692, p_expectedReturn);
        cost1691 = $tmp1693;
        if (((panda$core$Bit) { !cost1691.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1694 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1651, ((panda$core$Int64) cost1691.value));
        result1651 = $tmp1694;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1697 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1698 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1697);
    bool $tmp1696 = $tmp1698.value;
    if (!$tmp1696) goto $l1699;
    ITable* $tmp1700 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1700->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1700 = $tmp1700->next;
    }
    $fn1702 $tmp1701 = $tmp1700->methods[0];
    panda$core$Int64 $tmp1703 = $tmp1701(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1703, ((panda$core$Int64) { 1 }));
    $tmp1696 = $tmp1704.value;
    $l1699:;
    panda$core$Bit $tmp1705 = { $tmp1696 };
    bool $tmp1695 = $tmp1705.value;
    if (!$tmp1695) goto $l1706;
    panda$core$Object* $tmp1707 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1708 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1709 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1707)->type, $tmp1708);
    $tmp1695 = $tmp1709.value;
    $l1706:;
    panda$core$Bit $tmp1710 = { $tmp1695 };
    if ($tmp1710.value) {
    {
        panda$core$Int64 $tmp1711 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1651, ((panda$core$Int64) { 1 }));
        result1651 = $tmp1711;
    }
    }
    return ((panda$core$Int64$nullable) { result1651, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1712;
    panda$core$Int64$nullable best1715;
    panda$collections$Iterator* m$Iter1716;
    org$pandalanguage$pandac$MethodRef* m1728;
    panda$core$Int64$nullable cost1733;
    panda$collections$Array* $tmp1713 = (panda$collections$Array*) malloc(40);
    $tmp1713->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1713->refCount.value = 1;
    panda$collections$Array$init($tmp1713);
    result1712 = $tmp1713;
    best1715 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1717 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1717->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1717 = $tmp1717->next;
        }
        $fn1719 $tmp1718 = $tmp1717->methods[0];
        panda$collections$Iterator* $tmp1720 = $tmp1718(((panda$collections$Iterable*) p_methods));
        m$Iter1716 = $tmp1720;
        $l1721:;
        ITable* $tmp1723 = m$Iter1716->$class->itable;
        while ($tmp1723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1723 = $tmp1723->next;
        }
        $fn1725 $tmp1724 = $tmp1723->methods[0];
        panda$core$Bit $tmp1726 = $tmp1724(m$Iter1716);
        panda$core$Bit $tmp1727 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1726);
        if (!$tmp1727.value) goto $l1722;
        {
            ITable* $tmp1729 = m$Iter1716->$class->itable;
            while ($tmp1729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1729 = $tmp1729->next;
            }
            $fn1731 $tmp1730 = $tmp1729->methods[1];
            panda$core$Object* $tmp1732 = $tmp1730(m$Iter1716);
            m1728 = ((org$pandalanguage$pandac$MethodRef*) $tmp1732);
            panda$core$Int64$nullable $tmp1734 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1728, p_args, p_expectedReturn);
            cost1733 = $tmp1734;
            if (((panda$core$Bit) { !cost1733.nonnull }).value) {
            {
                goto $l1721;
            }
            }
            bool $tmp1735 = ((panda$core$Bit) { !best1715.nonnull }).value;
            if ($tmp1735) goto $l1736;
            panda$core$Bit $tmp1737 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1733.value), ((panda$core$Int64) best1715.value));
            $tmp1735 = $tmp1737.value;
            $l1736:;
            panda$core$Bit $tmp1738 = { $tmp1735 };
            if ($tmp1738.value) {
            {
                panda$collections$Array$clear(result1712);
                best1715 = cost1733;
            }
            }
            panda$core$Bit $tmp1739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1733.value), ((panda$core$Int64) best1715.value));
            if ($tmp1739.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1712, ((panda$core$Object*) m1728));
            }
            }
        }
        goto $l1721;
        $l1722:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1712));
    return best1715;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs1740;
    org$pandalanguage$pandac$IRNode* selfNode1776;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1791;
    org$pandalanguage$pandac$IRNode* coerced1814;
    org$pandalanguage$pandac$IRNode* result1834;
    panda$collections$Array* $tmp1741 = (panda$collections$Array*) malloc(40);
    $tmp1741->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1741->refCount.value = 1;
    panda$collections$Array$init($tmp1741);
    finalArgs1740 = $tmp1741;
    bool $tmp1744 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1744) goto $l1745;
    panda$core$Bit $tmp1746 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1744 = $tmp1746.value;
    $l1745:;
    panda$core$Bit $tmp1747 = { $tmp1744 };
    bool $tmp1743 = $tmp1747.value;
    if (!$tmp1743) goto $l1748;
    panda$core$Bit $tmp1749 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1750 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1749);
    $tmp1743 = $tmp1750.value;
    $l1748:;
    panda$core$Bit $tmp1751 = { $tmp1743 };
    if ($tmp1751.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1752 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1753 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp1752);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1740, ((panda$core$Object*) $tmp1753));
    }
    }
    panda$core$Bit $tmp1754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1754.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1755 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1755)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1756.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1757 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1757->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1757->refCount.value = 1;
                panda$core$Object* $tmp1759 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1760 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1759));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1757, ((panda$core$Int64) { 1025 }), p_offset, $tmp1760);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1740, ((panda$core$Object*) $tmp1757));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1761);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1764 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1763 = $tmp1764.value;
        if (!$tmp1763) goto $l1765;
        panda$core$Bit $tmp1766 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1763 = $tmp1766.value;
        $l1765:;
        panda$core$Bit $tmp1767 = { $tmp1763 };
        bool $tmp1762 = $tmp1767.value;
        if (!$tmp1762) goto $l1768;
        panda$core$Bit $tmp1769 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1762 = $tmp1769.value;
        $l1768:;
        panda$core$Bit $tmp1770 = { $tmp1762 };
        if ($tmp1770.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1771);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1773 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1772 = $tmp1773.value;
    if (!$tmp1772) goto $l1774;
    $tmp1772 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1774:;
    panda$core$Bit $tmp1775 = { $tmp1772 };
    if ($tmp1775.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1777 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1777->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1777->refCount.value = 1;
        panda$core$Object* $tmp1779 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1780 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1779));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1777, ((panda$core$Int64) { 1025 }), p_offset, $tmp1780);
        selfNode1776 = $tmp1777;
        org$pandalanguage$pandac$Type* $tmp1781 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1782 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1776, $tmp1781);
        selfNode1776 = $tmp1782;
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1740, ((panda$core$Object*) selfNode1776));
        panda$core$Object* $tmp1783 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1784 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1783));
        panda$core$Bit $tmp1785 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1784);
        if ($tmp1785.value) {
        {
            panda$core$String* $tmp1787 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1786, $tmp1787);
            panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1789);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1790);
        }
        }
    }
    }
    }
    ITable* $tmp1792 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1792->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1792 = $tmp1792->next;
    }
    $fn1794 $tmp1793 = $tmp1792->methods[0];
    panda$core$Int64 $tmp1795 = $tmp1793(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1791, ((panda$core$Int64) { 0 }), $tmp1795, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1797 = $tmp1791.start.value;
    panda$core$Int64 i1796 = { $tmp1797 };
    int64_t $tmp1799 = $tmp1791.end.value;
    int64_t $tmp1800 = $tmp1791.step.value;
    bool $tmp1801 = $tmp1791.inclusive.value;
    bool $tmp1808 = $tmp1800 > 0;
    if ($tmp1808) goto $l1806; else goto $l1807;
    $l1806:;
    if ($tmp1801) goto $l1809; else goto $l1810;
    $l1809:;
    if ($tmp1797 <= $tmp1799) goto $l1802; else goto $l1804;
    $l1810:;
    if ($tmp1797 < $tmp1799) goto $l1802; else goto $l1804;
    $l1807:;
    if ($tmp1801) goto $l1811; else goto $l1812;
    $l1811:;
    if ($tmp1797 >= $tmp1799) goto $l1802; else goto $l1804;
    $l1812:;
    if ($tmp1797 > $tmp1799) goto $l1802; else goto $l1804;
    $l1802:;
    {
        ITable* $tmp1815 = p_args->$class->itable;
        while ($tmp1815->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1815 = $tmp1815->next;
        }
        $fn1817 $tmp1816 = $tmp1815->methods[0];
        panda$core$Object* $tmp1818 = $tmp1816(p_args, i1796);
        org$pandalanguage$pandac$Type* $tmp1819 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1796);
        org$pandalanguage$pandac$IRNode* $tmp1820 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1818), $tmp1819);
        coerced1814 = $tmp1820;
        if (((panda$core$Bit) { coerced1814 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp1821 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1796);
        org$pandalanguage$pandac$IRNode* $tmp1822 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced1814, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1821)->type);
        coerced1814 = $tmp1822;
        if (((panda$core$Bit) { coerced1814 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1740, ((panda$core$Object*) coerced1814));
    }
    $l1805:;
    if ($tmp1808) goto $l1824; else goto $l1825;
    $l1824:;
    int64_t $tmp1826 = $tmp1799 - i1796.value;
    if ($tmp1801) goto $l1827; else goto $l1828;
    $l1827:;
    if ($tmp1826 >= $tmp1800) goto $l1823; else goto $l1804;
    $l1828:;
    if ($tmp1826 > $tmp1800) goto $l1823; else goto $l1804;
    $l1825:;
    int64_t $tmp1830 = i1796.value - $tmp1799;
    if ($tmp1801) goto $l1831; else goto $l1832;
    $l1831:;
    if ($tmp1830 >= -$tmp1800) goto $l1823; else goto $l1804;
    $l1832:;
    if ($tmp1830 > -$tmp1800) goto $l1823; else goto $l1804;
    $l1823:;
    i1796.value += $tmp1800;
    goto $l1802;
    $l1804:;
    panda$core$Bit $tmp1836 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s1835);
    if ($tmp1836.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1837 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1837->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1837->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1839 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1837, ((panda$core$Int64) { 1005 }), p_offset, $tmp1839, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1740));
        result1834 = $tmp1837;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp1840 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1840->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1840->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1840, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1740));
        result1834 = $tmp1840;
        org$pandalanguage$pandac$Type* $tmp1842 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1843 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1834, p_offset, ((panda$core$Bit) { false }), $tmp1842);
        result1834 = $tmp1843;
    }
    }
    return result1834;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1844 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp1844;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved1845;
    org$pandalanguage$pandac$ClassDecl* cl1847;
    org$pandalanguage$pandac$Symbol* s1851;
    org$pandalanguage$pandac$IRNode* ref1873;
    org$pandalanguage$pandac$IRNode* $tmp1846 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved1845 = $tmp1846;
    if (((panda$core$Bit) { resolved1845 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved1845->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp1848.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1849 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved1845->payload));
        cl1847 = $tmp1849;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved1845->type);
        cl1847 = $tmp1850;
    }
    }
    if (((panda$core$Bit) { cl1847 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1852 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1847);
    org$pandalanguage$pandac$Symbol* $tmp1853 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1852, p_name);
    s1851 = $tmp1853;
    if (((panda$core$Bit) { s1851 == NULL }).value) {
    {
        panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1854, ((org$pandalanguage$pandac$Symbol*) cl1847)->name);
        panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
        panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, p_name);
        panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1860);
        return NULL;
    }
    }
    panda$core$Bit $tmp1862 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1851->kind, ((panda$core$Int64) { 204 }));
    bool $tmp1861 = $tmp1862.value;
    if (!$tmp1861) goto $l1863;
    panda$core$Bit $tmp1864 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1851->kind, ((panda$core$Int64) { 205 }));
    $tmp1861 = $tmp1864.value;
    $l1863:;
    panda$core$Bit $tmp1865 = { $tmp1861 };
    if ($tmp1865.value) {
    {
        panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1866, ((org$pandalanguage$pandac$Symbol*) cl1847)->name);
        panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, &$s1868);
        panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1869, p_name);
        panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1870, &$s1871);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1872);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1874 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1847);
    org$pandalanguage$pandac$IRNode* $tmp1875 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->offset, p_target, s1851, $tmp1874);
    ref1873 = $tmp1875;
    if (((panda$core$Bit) { ref1873 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1876 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref1873, p_args, p_expectedType);
    return $tmp1876;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1877 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp1877;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    panda$core$Int64 $match$498561878;
    org$pandalanguage$pandac$IRNode* target1880;
    panda$collections$Array* methods1886;
    org$pandalanguage$pandac$MethodDecl* first1891;
    panda$core$MutableString* msg1896;
    panda$core$String* separator1908;
    panda$collections$Iterator* a$Iter1910;
    org$pandalanguage$pandac$IRNode* a1922;
    org$pandalanguage$pandac$IRNode* target1936;
    panda$collections$Array* children1942;
    panda$collections$Array* types1948;
    panda$collections$Iterator* m$Iter1951;
    org$pandalanguage$pandac$MethodRef* m1963;
    org$pandalanguage$pandac$IRNode* target1974;
    org$pandalanguage$pandac$IRNode* initCall1977;
    panda$collections$Array* children1981;
    org$pandalanguage$pandac$IRNode* resolved1986;
    {
        $match$498561878 = p_m->kind;
        panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$498561878, ((panda$core$Int64) { 1002 }));
        if ($tmp1879.value) {
        {
            panda$core$Int64 $tmp1881 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp1882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1881, ((panda$core$Int64) { 0 }));
            if ($tmp1882.value) {
            {
                target1880 = NULL;
            }
            }
            else {
            {
                panda$core$Object* $tmp1883 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target1880 = ((org$pandalanguage$pandac$IRNode*) $tmp1883);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1884 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1880, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp1884;
        }
        }
        else {
        panda$core$Bit $tmp1885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$498561878, ((panda$core$Int64) { 1003 }));
        if ($tmp1885.value) {
        {
            panda$collections$Array* $tmp1887 = (panda$collections$Array*) malloc(40);
            $tmp1887->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1887->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp1887, ((panda$collections$ListView*) p_m->payload));
            methods1886 = $tmp1887;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods1886, p_args, p_expectedType);
            panda$core$Int64 $tmp1889 = panda$collections$Array$get_count$R$panda$core$Int64(methods1886);
            panda$core$Bit $tmp1890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1889, ((panda$core$Int64) { 0 }));
            if ($tmp1890.value) {
            {
                ITable* $tmp1892 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp1892->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1892 = $tmp1892->next;
                }
                $fn1894 $tmp1893 = $tmp1892->methods[0];
                panda$core$Object* $tmp1895 = $tmp1893(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first1891 = ((org$pandalanguage$pandac$MethodRef*) $tmp1895)->value;
                panda$core$MutableString* $tmp1897 = (panda$core$MutableString*) malloc(40);
                $tmp1897->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp1897->refCount.value = 1;
                panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1899, ((org$pandalanguage$pandac$Symbol*) first1891->owner)->name);
                panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1900, &$s1901);
                panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1903, ((org$pandalanguage$pandac$Symbol*) first1891)->name);
                panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1904, &$s1905);
                panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, $tmp1906);
                panda$core$MutableString$init$panda$core$String($tmp1897, $tmp1907);
                msg1896 = $tmp1897;
                separator1908 = &$s1909;
                {
                    ITable* $tmp1911 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp1911->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1911 = $tmp1911->next;
                    }
                    $fn1913 $tmp1912 = $tmp1911->methods[0];
                    panda$collections$Iterator* $tmp1914 = $tmp1912(((panda$collections$Iterable*) p_args));
                    a$Iter1910 = $tmp1914;
                    $l1915:;
                    ITable* $tmp1917 = a$Iter1910->$class->itable;
                    while ($tmp1917->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1917 = $tmp1917->next;
                    }
                    $fn1919 $tmp1918 = $tmp1917->methods[0];
                    panda$core$Bit $tmp1920 = $tmp1918(a$Iter1910);
                    panda$core$Bit $tmp1921 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1920);
                    if (!$tmp1921.value) goto $l1916;
                    {
                        ITable* $tmp1923 = a$Iter1910->$class->itable;
                        while ($tmp1923->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1923 = $tmp1923->next;
                        }
                        $fn1925 $tmp1924 = $tmp1923->methods[1];
                        panda$core$Object* $tmp1926 = $tmp1924(a$Iter1910);
                        a1922 = ((org$pandalanguage$pandac$IRNode*) $tmp1926);
                        panda$core$MutableString$append$panda$core$String(msg1896, separator1908);
                        panda$core$MutableString$append$panda$core$Object(msg1896, ((panda$core$Object*) a1922->type));
                        separator1908 = &$s1927;
                    }
                    goto $l1915;
                    $l1916:;
                }
                panda$core$MutableString$append$panda$core$String(msg1896, &$s1928);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1929, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, &$s1931);
                    panda$core$MutableString$append$panda$core$String(msg1896, $tmp1932);
                }
                }
                panda$core$String* $tmp1933 = panda$core$MutableString$convert$R$panda$core$String(msg1896);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_m->offset, $tmp1933);
                return NULL;
            }
            }
            panda$core$Int64 $tmp1934 = panda$collections$Array$get_count$R$panda$core$Int64(methods1886);
            panda$core$Bit $tmp1935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1934, ((panda$core$Int64) { 1 }));
            if ($tmp1935.value) {
            {
                panda$core$Int64 $tmp1937 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp1938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1937, ((panda$core$Int64) { 1 }));
                if ($tmp1938.value) {
                {
                    panda$core$Object* $tmp1939 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target1936 = ((org$pandalanguage$pandac$IRNode*) $tmp1939);
                }
                }
                else {
                {
                    target1936 = NULL;
                }
                }
                panda$core$Object* $tmp1940 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1886, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1941 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1936, ((org$pandalanguage$pandac$MethodRef*) $tmp1940), p_args);
                return $tmp1941;
            }
            }
            panda$collections$Array* $tmp1943 = (panda$collections$Array*) malloc(40);
            $tmp1943->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1943->refCount.value = 1;
            panda$collections$Array$init($tmp1943);
            children1942 = $tmp1943;
            org$pandalanguage$pandac$IRNode* $tmp1945 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1945->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1947 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1945, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp1947, ((panda$core$Object*) methods1886), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children1942, ((panda$core$Object*) $tmp1945));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children1942, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp1949 = (panda$collections$Array*) malloc(40);
            $tmp1949->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1949->refCount.value = 1;
            panda$collections$Array$init($tmp1949);
            types1948 = $tmp1949;
            {
                ITable* $tmp1952 = ((panda$collections$Iterable*) methods1886)->$class->itable;
                while ($tmp1952->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1952 = $tmp1952->next;
                }
                $fn1954 $tmp1953 = $tmp1952->methods[0];
                panda$collections$Iterator* $tmp1955 = $tmp1953(((panda$collections$Iterable*) methods1886));
                m$Iter1951 = $tmp1955;
                $l1956:;
                ITable* $tmp1958 = m$Iter1951->$class->itable;
                while ($tmp1958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1958 = $tmp1958->next;
                }
                $fn1960 $tmp1959 = $tmp1958->methods[0];
                panda$core$Bit $tmp1961 = $tmp1959(m$Iter1951);
                panda$core$Bit $tmp1962 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1961);
                if (!$tmp1962.value) goto $l1957;
                {
                    ITable* $tmp1964 = m$Iter1951->$class->itable;
                    while ($tmp1964->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1964 = $tmp1964->next;
                    }
                    $fn1966 $tmp1965 = $tmp1964->methods[1];
                    panda$core$Object* $tmp1967 = $tmp1965(m$Iter1951);
                    m1963 = ((org$pandalanguage$pandac$MethodRef*) $tmp1967);
                    org$pandalanguage$pandac$Type* $tmp1968 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1963);
                    panda$collections$Array$add$panda$collections$Array$T(types1948, ((panda$core$Object*) $tmp1968));
                }
                goto $l1956;
                $l1957:;
            }
            org$pandalanguage$pandac$IRNode* $tmp1969 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1969->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1969->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1971 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp1971->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp1971->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1971, ((panda$collections$ListView*) types1948));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1969, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp1971, ((panda$collections$ListView*) children1942));
            return $tmp1969;
        }
        }
        else {
        panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$498561878, ((panda$core$Int64) { 1001 }));
        if ($tmp1973.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1975 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1975->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1975->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1975, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target1974 = $tmp1975;
            org$pandalanguage$pandac$IRNode* $tmp1979 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1974, &$s1978, p_args);
            org$pandalanguage$pandac$IRNode* $tmp1980 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1979);
            initCall1977 = $tmp1980;
            if (((panda$core$Bit) { initCall1977 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1982 = (panda$collections$Array*) malloc(40);
            $tmp1982->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1982->refCount.value = 1;
            panda$collections$Array$init($tmp1982);
            children1981 = $tmp1982;
            panda$collections$Array$add$panda$collections$Array$T(children1981, ((panda$core$Object*) initCall1977));
            org$pandalanguage$pandac$IRNode* $tmp1984 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1984->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1984->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1984, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children1981));
            return $tmp1984;
        }
        }
        else {
        {
            org$pandalanguage$pandac$IRNode* $tmp1987 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved1986 = $tmp1987;
            if (((panda$core$Bit) { resolved1986 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1988, ((panda$core$Object*) resolved1986->type));
            panda$core$String* $tmp1991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1989, &$s1990);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, resolved1986->offset, $tmp1991);
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes1992;
    panda$core$MutableString* typeName1995;
    panda$core$String* separator1999;
    panda$collections$Iterator* p$Iter2001;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2013;
    panda$core$Int64 kind2019;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp1993 = (panda$collections$Array*) malloc(40);
    $tmp1993->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1993->refCount.value = 1;
    panda$collections$Array$init($tmp1993);
    subtypes1992 = $tmp1993;
    panda$core$MutableString* $tmp1996 = (panda$core$MutableString*) malloc(40);
    $tmp1996->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1996->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1996, &$s1998);
    typeName1995 = $tmp1996;
    separator1999 = &$s2000;
    {
        ITable* $tmp2002 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2002->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2002 = $tmp2002->next;
        }
        $fn2004 $tmp2003 = $tmp2002->methods[0];
        panda$collections$Iterator* $tmp2005 = $tmp2003(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2001 = $tmp2005;
        $l2006:;
        ITable* $tmp2008 = p$Iter2001->$class->itable;
        while ($tmp2008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2008 = $tmp2008->next;
        }
        $fn2010 $tmp2009 = $tmp2008->methods[0];
        panda$core$Bit $tmp2011 = $tmp2009(p$Iter2001);
        panda$core$Bit $tmp2012 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2011);
        if (!$tmp2012.value) goto $l2007;
        {
            ITable* $tmp2014 = p$Iter2001->$class->itable;
            while ($tmp2014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2014 = $tmp2014->next;
            }
            $fn2016 $tmp2015 = $tmp2014->methods[1];
            panda$core$Object* $tmp2017 = $tmp2015(p$Iter2001);
            p2013 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2017);
            panda$core$MutableString$append$panda$core$String(typeName1995, separator1999);
            panda$core$MutableString$append$panda$core$String(typeName1995, ((org$pandalanguage$pandac$Symbol*) p2013->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes1992, ((panda$core$Object*) p2013->type));
            separator1999 = &$s2018;
        }
        goto $l2006;
        $l2007:;
    }
    panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2020.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1995, &$s2021);
        kind2019 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName1995, &$s2022);
        kind2019 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes1992, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2023 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2024 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2023);
    if ($tmp2024.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1995, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName1995, &$s2025);
    org$pandalanguage$pandac$Type* $tmp2026 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2026->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2026->refCount.value = 1;
    panda$core$String* $tmp2028 = panda$core$MutableString$convert$R$panda$core$String(typeName1995);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2026, $tmp2028, kind2019, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes1992), ((panda$core$Bit) { true }));
    return $tmp2026;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2029;
    panda$core$MutableString* typeName2032;
    panda$collections$Iterator* p$Iter2036;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2048;
    panda$core$Int64 kind2054;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2030 = (panda$collections$Array*) malloc(40);
    $tmp2030->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2030->refCount.value = 1;
    panda$collections$Array$init($tmp2030);
    subtypes2029 = $tmp2030;
    panda$core$MutableString* $tmp2033 = (panda$core$MutableString*) malloc(40);
    $tmp2033->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2033->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2033, &$s2035);
    typeName2032 = $tmp2033;
    panda$core$MutableString$append$panda$core$String(typeName2032, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2029, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2037 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2037->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2037 = $tmp2037->next;
        }
        $fn2039 $tmp2038 = $tmp2037->methods[0];
        panda$collections$Iterator* $tmp2040 = $tmp2038(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2036 = $tmp2040;
        $l2041:;
        ITable* $tmp2043 = p$Iter2036->$class->itable;
        while ($tmp2043->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2043 = $tmp2043->next;
        }
        $fn2045 $tmp2044 = $tmp2043->methods[0];
        panda$core$Bit $tmp2046 = $tmp2044(p$Iter2036);
        panda$core$Bit $tmp2047 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2046);
        if (!$tmp2047.value) goto $l2042;
        {
            ITable* $tmp2049 = p$Iter2036->$class->itable;
            while ($tmp2049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2049 = $tmp2049->next;
            }
            $fn2051 $tmp2050 = $tmp2049->methods[1];
            panda$core$Object* $tmp2052 = $tmp2050(p$Iter2036);
            p2048 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2052);
            panda$core$MutableString$append$panda$core$String(typeName2032, &$s2053);
            panda$core$MutableString$append$panda$core$String(typeName2032, ((org$pandalanguage$pandac$Symbol*) p2048->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2029, ((panda$core$Object*) p2048->type));
        }
        goto $l2041;
        $l2042:;
    }
    panda$core$Bit $tmp2055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2055.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2032, &$s2056);
        kind2054 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2032, &$s2057);
        kind2054 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2029, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2058 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2059 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2058);
    if ($tmp2059.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2032, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2032, &$s2060);
    org$pandalanguage$pandac$Type* $tmp2061 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2061->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2061->refCount.value = 1;
    panda$core$String* $tmp2063 = panda$core$MutableString$convert$R$panda$core$String(typeName2032);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2061, $tmp2063, kind2054, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2029), ((panda$core$Bit) { true }));
    return $tmp2061;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2064;
    org$pandalanguage$pandac$MethodDecl* $tmp2065 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2064 = $tmp2065;
    if (((panda$core$Bit) { inherited2064 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2066 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2066;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2067 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2064);
    return $tmp2067;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2068 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2069 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2068);
    return $tmp2069;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2070;
    org$pandalanguage$pandac$MethodDecl* $tmp2071 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2070 = $tmp2071;
    if (((panda$core$Bit) { inherited2070 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2072 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2072;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2073 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2070, p_selfType);
    return $tmp2073;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    panda$core$Int64 $match$553172074;
    {
        $match$553172074 = p_op;
        panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 51 }));
        if ($tmp2075.value) {
        {
            return &$s2076;
        }
        }
        else {
        panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 52 }));
        if ($tmp2077.value) {
        {
            return &$s2078;
        }
        }
        else {
        panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 53 }));
        if ($tmp2079.value) {
        {
            return &$s2080;
        }
        }
        else {
        panda$core$Bit $tmp2081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 54 }));
        if ($tmp2081.value) {
        {
            return &$s2082;
        }
        }
        else {
        panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 55 }));
        if ($tmp2083.value) {
        {
            return &$s2084;
        }
        }
        else {
        panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 56 }));
        if ($tmp2085.value) {
        {
            return &$s2086;
        }
        }
        else {
        panda$core$Bit $tmp2087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 57 }));
        if ($tmp2087.value) {
        {
            return &$s2088;
        }
        }
        else {
        panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 58 }));
        if ($tmp2089.value) {
        {
            return &$s2090;
        }
        }
        else {
        panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 59 }));
        if ($tmp2091.value) {
        {
            return &$s2092;
        }
        }
        else {
        panda$core$Bit $tmp2093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 63 }));
        if ($tmp2093.value) {
        {
            return &$s2094;
        }
        }
        else {
        panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 62 }));
        if ($tmp2095.value) {
        {
            return &$s2096;
        }
        }
        else {
        panda$core$Bit $tmp2097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 65 }));
        if ($tmp2097.value) {
        {
            return &$s2098;
        }
        }
        else {
        panda$core$Bit $tmp2099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 64 }));
        if ($tmp2099.value) {
        {
            return &$s2100;
        }
        }
        else {
        panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 68 }));
        if ($tmp2101.value) {
        {
            return &$s2102;
        }
        }
        else {
        panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 69 }));
        if ($tmp2103.value) {
        {
            return &$s2104;
        }
        }
        else {
        panda$core$Bit $tmp2105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 66 }));
        if ($tmp2105.value) {
        {
            return &$s2106;
        }
        }
        else {
        panda$core$Bit $tmp2107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 67 }));
        if ($tmp2107.value) {
        {
            return &$s2108;
        }
        }
        else {
        panda$core$Bit $tmp2109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 70 }));
        if ($tmp2109.value) {
        {
            return &$s2110;
        }
        }
        else {
        panda$core$Bit $tmp2111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 71 }));
        if ($tmp2111.value) {
        {
            return &$s2112;
        }
        }
        else {
        panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 49 }));
        if ($tmp2113.value) {
        {
            return &$s2114;
        }
        }
        else {
        panda$core$Bit $tmp2115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 50 }));
        if ($tmp2115.value) {
        {
            return &$s2116;
        }
        }
        else {
        panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 72 }));
        if ($tmp2117.value) {
        {
            return &$s2118;
        }
        }
        else {
        panda$core$Bit $tmp2119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 1 }));
        if ($tmp2119.value) {
        {
            return &$s2120;
        }
        }
        else {
        panda$core$Bit $tmp2121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 101 }));
        if ($tmp2121.value) {
        {
            return &$s2122;
        }
        }
        else {
        panda$core$Bit $tmp2123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 73 }));
        if ($tmp2123.value) {
        {
            return &$s2124;
        }
        }
        else {
        panda$core$Bit $tmp2125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 60 }));
        if ($tmp2125.value) {
        {
            return &$s2126;
        }
        }
        else {
        panda$core$Bit $tmp2127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553172074, ((panda$core$Int64) { 61 }));
        if ($tmp2127.value) {
        {
            return &$s2128;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 p_op) {
    panda$core$Int64 $match$567332129;
    {
        $match$567332129 = p_op;
        panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 74 }));
        bool $tmp2143 = $tmp2144.value;
        if ($tmp2143) goto $l2145;
        panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 75 }));
        $tmp2143 = $tmp2146.value;
        $l2145:;
        panda$core$Bit $tmp2147 = { $tmp2143 };
        bool $tmp2142 = $tmp2147.value;
        if ($tmp2142) goto $l2148;
        panda$core$Bit $tmp2149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 76 }));
        $tmp2142 = $tmp2149.value;
        $l2148:;
        panda$core$Bit $tmp2150 = { $tmp2142 };
        bool $tmp2141 = $tmp2150.value;
        if ($tmp2141) goto $l2151;
        panda$core$Bit $tmp2152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 77 }));
        $tmp2141 = $tmp2152.value;
        $l2151:;
        panda$core$Bit $tmp2153 = { $tmp2141 };
        bool $tmp2140 = $tmp2153.value;
        if ($tmp2140) goto $l2154;
        panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 79 }));
        $tmp2140 = $tmp2155.value;
        $l2154:;
        panda$core$Bit $tmp2156 = { $tmp2140 };
        bool $tmp2139 = $tmp2156.value;
        if ($tmp2139) goto $l2157;
        panda$core$Bit $tmp2158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 78 }));
        $tmp2139 = $tmp2158.value;
        $l2157:;
        panda$core$Bit $tmp2159 = { $tmp2139 };
        bool $tmp2138 = $tmp2159.value;
        if ($tmp2138) goto $l2160;
        panda$core$Bit $tmp2161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 80 }));
        $tmp2138 = $tmp2161.value;
        $l2160:;
        panda$core$Bit $tmp2162 = { $tmp2138 };
        bool $tmp2137 = $tmp2162.value;
        if ($tmp2137) goto $l2163;
        panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 81 }));
        $tmp2137 = $tmp2164.value;
        $l2163:;
        panda$core$Bit $tmp2165 = { $tmp2137 };
        bool $tmp2136 = $tmp2165.value;
        if ($tmp2136) goto $l2166;
        panda$core$Bit $tmp2167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 82 }));
        $tmp2136 = $tmp2167.value;
        $l2166:;
        panda$core$Bit $tmp2168 = { $tmp2136 };
        bool $tmp2135 = $tmp2168.value;
        if ($tmp2135) goto $l2169;
        panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 83 }));
        $tmp2135 = $tmp2170.value;
        $l2169:;
        panda$core$Bit $tmp2171 = { $tmp2135 };
        bool $tmp2134 = $tmp2171.value;
        if ($tmp2134) goto $l2172;
        panda$core$Bit $tmp2173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 84 }));
        $tmp2134 = $tmp2173.value;
        $l2172:;
        panda$core$Bit $tmp2174 = { $tmp2134 };
        bool $tmp2133 = $tmp2174.value;
        if ($tmp2133) goto $l2175;
        panda$core$Bit $tmp2176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 85 }));
        $tmp2133 = $tmp2176.value;
        $l2175:;
        panda$core$Bit $tmp2177 = { $tmp2133 };
        bool $tmp2132 = $tmp2177.value;
        if ($tmp2132) goto $l2178;
        panda$core$Bit $tmp2179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 86 }));
        $tmp2132 = $tmp2179.value;
        $l2178:;
        panda$core$Bit $tmp2180 = { $tmp2132 };
        bool $tmp2131 = $tmp2180.value;
        if ($tmp2131) goto $l2181;
        panda$core$Bit $tmp2182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 87 }));
        $tmp2131 = $tmp2182.value;
        $l2181:;
        panda$core$Bit $tmp2183 = { $tmp2131 };
        bool $tmp2130 = $tmp2183.value;
        if ($tmp2130) goto $l2184;
        panda$core$Bit $tmp2185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567332129, ((panda$core$Int64) { 88 }));
        $tmp2130 = $tmp2185.value;
        $l2184:;
        panda$core$Bit $tmp2186 = { $tmp2130 };
        if ($tmp2186.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 p_op) {
    panda$core$Int64 $match$573062187;
    {
        $match$573062187 = p_op;
        panda$core$Bit $tmp2188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 74 }));
        if ($tmp2188.value) {
        {
            return ((panda$core$Int64) { 51 });
        }
        }
        else {
        panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 75 }));
        if ($tmp2189.value) {
        {
            return ((panda$core$Int64) { 52 });
        }
        }
        else {
        panda$core$Bit $tmp2190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 76 }));
        if ($tmp2190.value) {
        {
            return ((panda$core$Int64) { 53 });
        }
        }
        else {
        panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 77 }));
        if ($tmp2191.value) {
        {
            return ((panda$core$Int64) { 54 });
        }
        }
        else {
        panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 79 }));
        if ($tmp2192.value) {
        {
            return ((panda$core$Int64) { 55 });
        }
        }
        else {
        panda$core$Bit $tmp2193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 78 }));
        if ($tmp2193.value) {
        {
            return ((panda$core$Int64) { 56 });
        }
        }
        else {
        panda$core$Bit $tmp2194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 80 }));
        if ($tmp2194.value) {
        {
            return ((panda$core$Int64) { 57 });
        }
        }
        else {
        panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 81 }));
        if ($tmp2195.value) {
        {
            return ((panda$core$Int64) { 68 });
        }
        }
        else {
        panda$core$Bit $tmp2196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 82 }));
        if ($tmp2196.value) {
        {
            return ((panda$core$Int64) { 69 });
        }
        }
        else {
        panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 83 }));
        if ($tmp2197.value) {
        {
            return ((panda$core$Int64) { 66 });
        }
        }
        else {
        panda$core$Bit $tmp2198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 84 }));
        if ($tmp2198.value) {
        {
            return ((panda$core$Int64) { 67 });
        }
        }
        else {
        panda$core$Bit $tmp2199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 85 }));
        if ($tmp2199.value) {
        {
            return ((panda$core$Int64) { 70 });
        }
        }
        else {
        panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 86 }));
        if ($tmp2200.value) {
        {
            return ((panda$core$Int64) { 71 });
        }
        }
        else {
        panda$core$Bit $tmp2201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 87 }));
        if ($tmp2201.value) {
        {
            return ((panda$core$Int64) { 72 });
        }
        }
        else {
        panda$core$Bit $tmp2202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573062187, ((panda$core$Int64) { 88 }));
        if ($tmp2202.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$584302203;
    {
        $match$584302203 = p_expr->kind;
        panda$core$Bit $tmp2204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584302203, ((panda$core$Int64) { 1009 }));
        if ($tmp2204.value) {
        {
            panda$core$Bit $tmp2205 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2205.value) {
            {
                panda$core$Object* $tmp2206 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2207 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2206));
                return $tmp2207;
            }
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp2209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584302203, ((panda$core$Int64) { 1026 }));
        bool $tmp2208 = $tmp2209.value;
        if ($tmp2208) goto $l2210;
        panda$core$Bit $tmp2211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584302203, ((panda$core$Int64) { 1016 }));
        $tmp2208 = $tmp2211.value;
        $l2210:;
        panda$core$Bit $tmp2212 = { $tmp2208 };
        if ($tmp2212.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp2213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584302203, ((panda$core$Int64) { 1027 }));
        if ($tmp2213.value) {
        {
            panda$core$Object* $tmp2214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2215 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2214));
            return $tmp2215;
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2231;
    panda$core$Int64 r2233;
    panda$core$Int64 $match$596082235;
    panda$core$Bit $tmp2218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2217 = $tmp2218.value;
    if ($tmp2217) goto $l2219;
    panda$core$UInt64 $tmp2221 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2222 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2221);
    bool $tmp2220 = $tmp2222.value;
    if (!$tmp2220) goto $l2223;
    panda$core$Bit $tmp2224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2220 = $tmp2224.value;
    $l2223:;
    panda$core$Bit $tmp2225 = { $tmp2220 };
    $tmp2217 = $tmp2225.value;
    $l2219:;
    panda$core$Bit $tmp2226 = { $tmp2217 };
    bool $tmp2216 = $tmp2226.value;
    if ($tmp2216) goto $l2227;
    panda$core$UInt64 $tmp2228 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2229 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2228);
    $tmp2216 = $tmp2229.value;
    $l2227:;
    panda$core$Bit $tmp2230 = { $tmp2216 };
    if ($tmp2230.value) {
    {
        panda$core$Int64 $tmp2232 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2231 = $tmp2232;
        panda$core$Int64 $tmp2234 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2233 = $tmp2234;
        {
            $match$596082235 = p_op;
            panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 51 }));
            if ($tmp2236.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2237 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2237->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2237->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2239 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2240 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2241 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2240);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2237, ((panda$core$Int64) { 1004 }), p_offset, $tmp2239, $tmp2241);
                return $tmp2237;
            }
            }
            else {
            panda$core$Bit $tmp2242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 52 }));
            if ($tmp2242.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2243 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2243->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2243->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2245 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2246 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2247 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2246);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2243, ((panda$core$Int64) { 1004 }), p_offset, $tmp2245, $tmp2247);
                return $tmp2243;
            }
            }
            else {
            panda$core$Bit $tmp2248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 53 }));
            if ($tmp2248.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2249 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2249->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2249->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2251 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2252 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2253 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2252);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2249, ((panda$core$Int64) { 1004 }), p_offset, $tmp2251, $tmp2253);
                return $tmp2249;
            }
            }
            else {
            panda$core$Bit $tmp2254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 55 }));
            if ($tmp2254.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2255 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2255->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2255->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2257 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2258 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2259 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2258);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2255, ((panda$core$Int64) { 1004 }), p_offset, $tmp2257, $tmp2259);
                return $tmp2255;
            }
            }
            else {
            panda$core$Bit $tmp2260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 56 }));
            if ($tmp2260.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2261 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2261->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2261->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2263 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2264 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2265 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2264);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2261, ((panda$core$Int64) { 1004 }), p_offset, $tmp2263, $tmp2265);
                return $tmp2261;
            }
            }
            else {
            panda$core$Bit $tmp2266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 58 }));
            if ($tmp2266.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2267 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2267->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2269 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2231, r2233);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2267, ((panda$core$Int64) { 1011 }), p_offset, $tmp2269, $tmp2270);
                return $tmp2267;
            }
            }
            else {
            panda$core$Bit $tmp2271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 59 }));
            if ($tmp2271.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2272 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2272->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2272->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2274 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2275 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2231, r2233);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2272, ((panda$core$Int64) { 1011 }), p_offset, $tmp2274, $tmp2275);
                return $tmp2272;
            }
            }
            else {
            panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 62 }));
            if ($tmp2276.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2277 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2277->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2277->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2279 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2280 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2231, r2233);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2277, ((panda$core$Int64) { 1011 }), p_offset, $tmp2279, $tmp2280);
                return $tmp2277;
            }
            }
            else {
            panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 63 }));
            if ($tmp2281.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2282 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2282->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2282->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2284 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2285 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2231, r2233);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2282, ((panda$core$Int64) { 1011 }), p_offset, $tmp2284, $tmp2285);
                return $tmp2282;
            }
            }
            else {
            panda$core$Bit $tmp2286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 64 }));
            if ($tmp2286.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2287 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2287->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2287->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2289 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2290 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2231, r2233);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2287, ((panda$core$Int64) { 1011 }), p_offset, $tmp2289, $tmp2290);
                return $tmp2287;
            }
            }
            else {
            panda$core$Bit $tmp2291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 65 }));
            if ($tmp2291.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2292 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2292->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2292->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2294 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2295 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2231, r2233);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2292, ((panda$core$Int64) { 1011 }), p_offset, $tmp2294, $tmp2295);
                return $tmp2292;
            }
            }
            else {
            panda$core$Bit $tmp2296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 67 }));
            if ($tmp2296.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2297 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2297->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2297->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2299 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2300 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2301 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2300);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2297, ((panda$core$Int64) { 1004 }), p_offset, $tmp2299, $tmp2301);
                return $tmp2297;
            }
            }
            else {
            panda$core$Bit $tmp2302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 69 }));
            if ($tmp2302.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2303 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2303->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2305 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2306 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2307 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2306);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2303, ((panda$core$Int64) { 1004 }), p_offset, $tmp2305, $tmp2307);
                return $tmp2303;
            }
            }
            else {
            panda$core$Bit $tmp2308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 71 }));
            if ($tmp2308.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2309 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2309->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2309->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2311 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2312 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2313 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2312);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2309, ((panda$core$Int64) { 1004 }), p_offset, $tmp2311, $tmp2313);
                return $tmp2309;
            }
            }
            else {
            panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 72 }));
            if ($tmp2314.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2315 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2315->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2315->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2317 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2318 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2319 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2318);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2315, ((panda$core$Int64) { 1004 }), p_offset, $tmp2317, $tmp2319);
                return $tmp2315;
            }
            }
            else {
            panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596082235, ((panda$core$Int64) { 1 }));
            if ($tmp2320.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2321 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2321->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2321->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2323 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2324 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2231, r2233);
                panda$core$UInt64 $tmp2325 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2324);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2321, ((panda$core$Int64) { 1004 }), p_offset, $tmp2323, $tmp2325);
                return $tmp2321;
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s2326);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2327.value) {
    {
        panda$core$Object* $tmp2328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2328);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2330;
    org$pandalanguage$pandac$IRNode* resolved2337;
    panda$collections$Array* children2340;
    panda$core$UInt64 baseId2346;
    org$pandalanguage$pandac$IRNode* base2347;
    panda$core$UInt64 indexId2354;
    org$pandalanguage$pandac$IRNode* index2355;
    org$pandalanguage$pandac$IRNode* baseRef2360;
    org$pandalanguage$pandac$IRNode* indexRef2363;
    org$pandalanguage$pandac$IRNode* rhsIndex2366;
    org$pandalanguage$pandac$IRNode* value2368;
    panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2329.value) {
    {
        panda$collections$Array* $tmp2331 = (panda$collections$Array*) malloc(40);
        $tmp2331->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2331->refCount.value = 1;
        panda$collections$Array$init($tmp2331);
        args2330 = $tmp2331;
        panda$core$Object* $tmp2333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2330, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2333)));
        panda$collections$Array$add$panda$collections$Array$T(args2330, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2336 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2334), &$s2335, ((panda$collections$ListView*) args2330));
        return $tmp2336;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2338 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2337 = $tmp2338;
    if (((panda$core$Bit) { resolved2337 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2339 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2337);
    resolved2337 = $tmp2339;
    panda$collections$Array* $tmp2341 = (panda$collections$Array*) malloc(40);
    $tmp2341->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2341->refCount.value = 1;
    panda$collections$Array$init($tmp2341);
    children2340 = $tmp2341;
    panda$core$Object* $tmp2343 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2337->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2344 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2343));
    panda$collections$Array$add$panda$collections$Array$T(children2340, ((panda$core$Object*) $tmp2344));
    panda$core$UInt64 $tmp2345 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2345;
    baseId2346 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2348 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2348->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2348->refCount.value = 1;
    panda$core$Object* $tmp2350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2340, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2340, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2348, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2350)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2351)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2346)), ((panda$collections$ListView*) children2340));
    base2347 = $tmp2348;
    panda$collections$Array$clear(children2340);
    panda$core$Object* $tmp2352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2337->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2340, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2352)));
    panda$core$UInt64 $tmp2353 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2353;
    indexId2354 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2356 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2356->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2356->refCount.value = 1;
    panda$core$Object* $tmp2358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2340, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2359 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2340, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2356, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2358)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2359)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2354)), ((panda$collections$ListView*) children2340));
    index2355 = $tmp2356;
    org$pandalanguage$pandac$IRNode* $tmp2361 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2361->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2361->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2361, ((panda$core$Int64) { 1028 }), base2347->offset, base2347->type, baseId2346);
    baseRef2360 = $tmp2361;
    org$pandalanguage$pandac$IRNode* $tmp2364 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2364->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2364, ((panda$core$Int64) { 1028 }), index2355->offset, index2355->type, indexId2354);
    indexRef2363 = $tmp2364;
    org$pandalanguage$pandac$IRNode* $tmp2367 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, baseRef2360, ((panda$core$Int64) { 101 }), indexRef2363);
    rhsIndex2366 = $tmp2367;
    if (((panda$core$Bit) { rhsIndex2366 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2369 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2370 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, rhsIndex2366, $tmp2369, p_right);
    value2368 = $tmp2370;
    if (((panda$core$Bit) { value2368 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2373 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2366->type);
    bool $tmp2372 = $tmp2373.value;
    if (!$tmp2372) goto $l2374;
    panda$core$Bit $tmp2375 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2372 = $tmp2375.value;
    $l2374:;
    panda$core$Bit $tmp2376 = { $tmp2372 };
    bool $tmp2371 = $tmp2376.value;
    if (!$tmp2371) goto $l2377;
    panda$core$Bit $tmp2378 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2366->type, value2368->type);
    $tmp2371 = $tmp2378.value;
    $l2377:;
    panda$core$Bit $tmp2379 = { $tmp2371 };
    if ($tmp2379.value) {
    {
        panda$collections$Array* $tmp2381 = (panda$collections$Array*) malloc(40);
        $tmp2381->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2381->refCount.value = 1;
        panda$collections$Array$init($tmp2381);
        org$pandalanguage$pandac$IRNode* $tmp2383 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2368, &$s2380, ((panda$collections$ListView*) $tmp2381), resolved2337->type);
        value2368 = $tmp2383;
        if (((panda$core$Bit) { value2368 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2340);
    panda$collections$Array$add$panda$collections$Array$T(children2340, ((panda$core$Object*) index2355));
    panda$collections$Array$add$panda$collections$Array$T(children2340, ((panda$core$Object*) value2368));
    org$pandalanguage$pandac$IRNode* $tmp2385 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2347, &$s2384, ((panda$collections$ListView*) children2340));
    return $tmp2385;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2386;
    org$pandalanguage$pandac$IRNode* right2387;
    panda$core$Int64 kind2411;
    org$pandalanguage$pandac$IRNode* resolved2418;
    panda$collections$Array* children2420;
    org$pandalanguage$pandac$IRNode* resolved2427;
    panda$collections$Array* children2429;
    org$pandalanguage$pandac$ClassDecl* cl2441;
    org$pandalanguage$pandac$ClassDecl* cl2458;
    org$pandalanguage$pandac$IRNode* finalLeft2474;
    org$pandalanguage$pandac$IRNode* finalRight2477;
    panda$collections$Array* children2480;
    panda$collections$Array* children2494;
    panda$collections$Array* children2506;
    org$pandalanguage$pandac$IRNode* reusedLeft2512;
    org$pandalanguage$pandac$ClassDecl* cl2529;
    panda$collections$ListView* parameters2531;
    org$pandalanguage$pandac$Symbol* methods2533;
    org$pandalanguage$pandac$Type* type2537;
    panda$collections$Array* types2538;
    org$pandalanguage$pandac$MethodDecl* m2542;
    panda$collections$Iterator* m$Iter2546;
    org$pandalanguage$pandac$MethodDecl* m2558;
    panda$collections$Array* children2569;
    panda$collections$Array* children2598;
    panda$collections$Array* children2614;
    org$pandalanguage$pandac$Type* resultType2637;
    panda$core$Int64 $match$727542638;
    org$pandalanguage$pandac$IRNode* result2663;
    org$pandalanguage$pandac$IRNode* resolved2666;
    org$pandalanguage$pandac$IRNode* target2672;
    left2386 = p_rawLeft;
    right2387 = p_rawRight;
    panda$core$Bit $tmp2388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2386->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2388.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2389 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2387);
        right2387 = $tmp2389;
        if (((panda$core$Bit) { right2387 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2390 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2386, right2387->type);
        if (((panda$core$Bit) { $tmp2390.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2391 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2386, right2387->type);
            left2386 = $tmp2391;
        }
        }
    }
    }
    panda$core$Bit $tmp2393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2387->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2392 = $tmp2393.value;
    if (!$tmp2392) goto $l2394;
    panda$core$Int64$nullable $tmp2395 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2387, left2386->type);
    $tmp2392 = ((panda$core$Bit) { $tmp2395.nonnull }).value;
    $l2394:;
    panda$core$Bit $tmp2396 = { $tmp2392 };
    if ($tmp2396.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2397 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2387, left2386->type);
        right2387 = $tmp2397;
    }
    }
    panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2400 = $tmp2401.value;
    if ($tmp2400) goto $l2402;
    panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2400 = $tmp2403.value;
    $l2402:;
    panda$core$Bit $tmp2404 = { $tmp2400 };
    bool $tmp2399 = $tmp2404.value;
    if ($tmp2399) goto $l2405;
    panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2399 = $tmp2406.value;
    $l2405:;
    panda$core$Bit $tmp2407 = { $tmp2399 };
    bool $tmp2398 = $tmp2407.value;
    if ($tmp2398) goto $l2408;
    panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2398 = $tmp2409.value;
    $l2408:;
    panda$core$Bit $tmp2410 = { $tmp2398 };
    if ($tmp2410.value) {
    {
        panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2412 = $tmp2413.value;
        if ($tmp2412) goto $l2414;
        panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2412 = $tmp2415.value;
        $l2414:;
        panda$core$Bit $tmp2416 = { $tmp2412 };
        if ($tmp2416.value) {
        {
            kind2411 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2411 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2386->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2417.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2419 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2387);
            resolved2418 = $tmp2419;
            if (((panda$core$Bit) { resolved2418 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2421 = (panda$collections$Array*) malloc(40);
            $tmp2421->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2421->refCount.value = 1;
            panda$collections$Array$init($tmp2421);
            children2420 = $tmp2421;
            panda$collections$Array$add$panda$collections$Array$T(children2420, ((panda$core$Object*) resolved2418));
            org$pandalanguage$pandac$IRNode* $tmp2423 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2423->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2423->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2425 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2423, kind2411, p_offset, $tmp2425, ((panda$collections$ListView*) children2420));
            return $tmp2423;
        }
        }
        panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2387->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2426.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2428 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2386);
            resolved2427 = $tmp2428;
            if (((panda$core$Bit) { resolved2427 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2430 = (panda$collections$Array*) malloc(40);
            $tmp2430->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2430->refCount.value = 1;
            panda$collections$Array$init($tmp2430);
            children2429 = $tmp2430;
            panda$collections$Array$add$panda$collections$Array$T(children2429, ((panda$core$Object*) resolved2427));
            org$pandalanguage$pandac$IRNode* $tmp2432 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2432->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2432->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2434 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2432, kind2411, p_offset, $tmp2434, ((panda$collections$ListView*) children2429));
            return $tmp2432;
        }
        }
    }
    }
    panda$core$Bit $tmp2436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2435 = $tmp2436.value;
    if ($tmp2435) goto $l2437;
    panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2435 = $tmp2438.value;
    $l2437:;
    panda$core$Bit $tmp2439 = { $tmp2435 };
    if ($tmp2439.value) {
    {
        panda$core$Bit $tmp2440 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2386->type);
        if ($tmp2440.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2442 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2386->type);
            cl2441 = $tmp2442;
            if (((panda$core$Bit) { cl2441 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2443 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2441);
            if ($tmp2443.value) {
            {
                panda$core$String* $tmp2445 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2444, $tmp2445);
                panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2446, &$s2447);
                panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2448, ((panda$core$Object*) left2386->type));
                panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2449, &$s2450);
                panda$core$String* $tmp2453 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2452, ((panda$core$Object*) right2387->type));
                panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, &$s2454);
                panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2451, $tmp2455);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2456);
            }
            }
        }
        }
        panda$core$Bit $tmp2457 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2387->type);
        if ($tmp2457.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2459 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2387->type);
            cl2458 = $tmp2459;
            if (((panda$core$Bit) { cl2458 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2460 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2458);
            if ($tmp2460.value) {
            {
                panda$core$String* $tmp2462 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2461, $tmp2462);
                panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, &$s2464);
                panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2465, ((panda$core$Object*) left2386->type));
                panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
                panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2469, ((panda$core$Object*) right2387->type));
                panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
                panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, $tmp2472);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2473);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2475 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2476 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2386, $tmp2475);
        finalLeft2474 = $tmp2476;
        if (((panda$core$Bit) { finalLeft2474 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2478 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2479 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2387, $tmp2478);
        finalRight2477 = $tmp2479;
        if (((panda$core$Bit) { finalRight2477 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2481 = (panda$collections$Array*) malloc(40);
        $tmp2481->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2481->refCount.value = 1;
        panda$collections$Array$init($tmp2481);
        children2480 = $tmp2481;
        panda$collections$Array$add$panda$collections$Array$T(children2480, ((panda$core$Object*) finalLeft2474));
        panda$collections$Array$add$panda$collections$Array$T(children2480, ((panda$core$Object*) finalRight2477));
        org$pandalanguage$pandac$IRNode* $tmp2483 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2483->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2485 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2483, ((panda$core$Int64) { 1023 }), p_offset, $tmp2485, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2480));
        return $tmp2483;
    }
    }
    panda$core$Bit $tmp2486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2486.value) {
    {
        panda$core$Bit $tmp2487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2386->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2487.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2488 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2386, p_op, right2387);
            return $tmp2488;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2489 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2386);
        left2386 = $tmp2489;
        if (((panda$core$Bit) { left2386 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2490 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2387, left2386->type);
        right2387 = $tmp2490;
        if (((panda$core$Bit) { right2387 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2491 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2386);
        panda$core$Bit $tmp2492 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2491);
        if ($tmp2492.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2386->offset, &$s2493);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2495 = (panda$collections$Array*) malloc(40);
        $tmp2495->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2495->refCount.value = 1;
        panda$collections$Array$init($tmp2495);
        children2494 = $tmp2495;
        panda$collections$Array$add$panda$collections$Array$T(children2494, ((panda$core$Object*) left2386));
        panda$collections$Array$add$panda$collections$Array$T(children2494, ((panda$core$Object*) right2387));
        org$pandalanguage$pandac$IRNode* $tmp2497 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2497->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2497->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2497, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2494));
        return $tmp2497;
    }
    }
    panda$core$Bit $tmp2499 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2499.value) {
    {
        panda$core$Bit $tmp2500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2386->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2500.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2501 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2386, p_op, right2387);
            return $tmp2501;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2502 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2386);
        left2386 = $tmp2502;
        if (((panda$core$Bit) { left2386 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2503 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2386);
        panda$core$Bit $tmp2504 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2503);
        if ($tmp2504.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2386->offset, &$s2505);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2507 = (panda$collections$Array*) malloc(40);
        $tmp2507->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2507->refCount.value = 1;
        panda$collections$Array$init($tmp2507);
        children2506 = $tmp2507;
        panda$collections$Array$add$panda$collections$Array$T(children2506, ((panda$core$Object*) left2386));
        panda$core$UInt64 $tmp2509 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2509;
        org$pandalanguage$pandac$IRNode* $tmp2510 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2510->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2510->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2510, ((panda$core$Int64) { 1027 }), left2386->offset, left2386->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2506));
        left2386 = $tmp2510;
        org$pandalanguage$pandac$IRNode* $tmp2513 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2513->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2513->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2513, ((panda$core$Int64) { 1028 }), left2386->offset, left2386->type, self->reusedValueCount);
        reusedLeft2512 = $tmp2513;
        panda$core$Int64 $tmp2515 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2516 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, reusedLeft2512, $tmp2515, right2387);
        right2387 = $tmp2516;
        if (((panda$core$Bit) { right2387 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2518 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2386->type);
        bool $tmp2517 = $tmp2518.value;
        if (!$tmp2517) goto $l2519;
        panda$core$Bit $tmp2520 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2386->type, right2387->type);
        $tmp2517 = $tmp2520.value;
        $l2519:;
        panda$core$Bit $tmp2521 = { $tmp2517 };
        if ($tmp2521.value) {
        {
            panda$collections$Array* $tmp2523 = (panda$collections$Array*) malloc(40);
            $tmp2523->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2523->refCount.value = 1;
            panda$collections$Array$init($tmp2523);
            org$pandalanguage$pandac$IRNode* $tmp2525 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2387, &$s2522, ((panda$collections$ListView*) $tmp2523), left2386->type);
            right2387 = $tmp2525;
            if (((panda$core$Bit) { right2387 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2526 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2386, ((panda$core$Int64) { 73 }), right2387);
        return $tmp2526;
    }
    }
    panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2527.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2528 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2386);
        left2386 = $tmp2528;
        if (((panda$core$Bit) { left2386 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2530 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2386->type);
        cl2529 = $tmp2530;
        if (((panda$core$Bit) { cl2529 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2532 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2386->type);
        parameters2531 = $tmp2532;
        org$pandalanguage$pandac$SymbolTable* $tmp2534 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2529);
        org$pandalanguage$pandac$Symbol* $tmp2536 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2534, &$s2535);
        methods2533 = $tmp2536;
        if (((panda$core$Bit) { methods2533 != NULL }).value) {
        {
            panda$collections$Array* $tmp2539 = (panda$collections$Array*) malloc(40);
            $tmp2539->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2539->refCount.value = 1;
            panda$collections$Array$init($tmp2539);
            types2538 = $tmp2539;
            panda$core$Bit $tmp2541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2533->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2541.value) {
            {
                m2542 = ((org$pandalanguage$pandac$MethodDecl*) methods2533);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2542);
                org$pandalanguage$pandac$MethodRef* $tmp2543 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2543->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2543->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2543, m2542, parameters2531);
                org$pandalanguage$pandac$Type* $tmp2545 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2543);
                panda$collections$Array$add$panda$collections$Array$T(types2538, ((panda$core$Object*) $tmp2545));
            }
            }
            else {
            {
                {
                    ITable* $tmp2547 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2533)->methods)->$class->itable;
                    while ($tmp2547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2547 = $tmp2547->next;
                    }
                    $fn2549 $tmp2548 = $tmp2547->methods[0];
                    panda$collections$Iterator* $tmp2550 = $tmp2548(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2533)->methods));
                    m$Iter2546 = $tmp2550;
                    $l2551:;
                    ITable* $tmp2553 = m$Iter2546->$class->itable;
                    while ($tmp2553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2553 = $tmp2553->next;
                    }
                    $fn2555 $tmp2554 = $tmp2553->methods[0];
                    panda$core$Bit $tmp2556 = $tmp2554(m$Iter2546);
                    panda$core$Bit $tmp2557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2556);
                    if (!$tmp2557.value) goto $l2552;
                    {
                        ITable* $tmp2559 = m$Iter2546->$class->itable;
                        while ($tmp2559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2559 = $tmp2559->next;
                        }
                        $fn2561 $tmp2560 = $tmp2559->methods[1];
                        panda$core$Object* $tmp2562 = $tmp2560(m$Iter2546);
                        m2558 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2562);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2558);
                        org$pandalanguage$pandac$MethodRef* $tmp2563 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2563->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2563->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2563, m2558, parameters2531);
                        org$pandalanguage$pandac$Type* $tmp2565 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2563);
                        panda$collections$Array$add$panda$collections$Array$T(types2538, ((panda$core$Object*) $tmp2565));
                    }
                    goto $l2551;
                    $l2552:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2566 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp2566->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2566->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2566, ((panda$collections$ListView*) types2538));
            type2537 = $tmp2566;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2568 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2537 = $tmp2568;
        }
        }
        panda$collections$Array* $tmp2570 = (panda$collections$Array*) malloc(40);
        $tmp2570->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2570->refCount.value = 1;
        panda$collections$Array$init($tmp2570);
        children2569 = $tmp2570;
        panda$collections$Array$add$panda$collections$Array$T(children2569, ((panda$core$Object*) left2386));
        panda$collections$Array$add$panda$collections$Array$T(children2569, ((panda$core$Object*) right2387));
        org$pandalanguage$pandac$IRNode* $tmp2572 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2572->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2572->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2572, ((panda$core$Int64) { 1040 }), p_offset, type2537, ((panda$collections$ListView*) children2569));
        return $tmp2572;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2574 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2575 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2386->type, $tmp2574);
    if ($tmp2575.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2577 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2578 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2387->type, $tmp2577);
        bool $tmp2576 = $tmp2578.value;
        if (!$tmp2576) goto $l2579;
        panda$core$Bit $tmp2584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2583 = $tmp2584.value;
        if ($tmp2583) goto $l2585;
        panda$core$Bit $tmp2586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2583 = $tmp2586.value;
        $l2585:;
        panda$core$Bit $tmp2587 = { $tmp2583 };
        bool $tmp2582 = $tmp2587.value;
        if ($tmp2582) goto $l2588;
        panda$core$Bit $tmp2589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2582 = $tmp2589.value;
        $l2588:;
        panda$core$Bit $tmp2590 = { $tmp2582 };
        bool $tmp2581 = $tmp2590.value;
        if ($tmp2581) goto $l2591;
        panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2581 = $tmp2592.value;
        $l2591:;
        panda$core$Bit $tmp2593 = { $tmp2581 };
        bool $tmp2580 = $tmp2593.value;
        if ($tmp2580) goto $l2594;
        panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2580 = $tmp2595.value;
        $l2594:;
        panda$core$Bit $tmp2596 = { $tmp2580 };
        $tmp2576 = $tmp2596.value;
        $l2579:;
        panda$core$Bit $tmp2597 = { $tmp2576 };
        if ($tmp2597.value) {
        {
            panda$collections$Array* $tmp2599 = (panda$collections$Array*) malloc(40);
            $tmp2599->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2599->refCount.value = 1;
            panda$collections$Array$init($tmp2599);
            children2598 = $tmp2599;
            panda$collections$Array$add$panda$collections$Array$T(children2598, ((panda$core$Object*) left2386));
            panda$collections$Array$add$panda$collections$Array$T(children2598, ((panda$core$Object*) right2387));
            org$pandalanguage$pandac$IRNode* $tmp2601 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2601->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2601, ((panda$core$Int64) { 1023 }), p_offset, left2386->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2598));
            return $tmp2601;
        }
        }
        panda$core$String* $tmp2604 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2603, $tmp2604);
        panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, &$s2606);
        panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2607, ((panda$core$Object*) left2386->type));
        panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, &$s2609);
        panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2610, ((panda$core$Object*) right2387->type));
        panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2612);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2613);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2615 = (panda$collections$Array*) malloc(40);
    $tmp2615->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2615->refCount.value = 1;
    panda$collections$Array$init($tmp2615);
    children2614 = $tmp2615;
    panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2386->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2618 = $tmp2619.value;
    if ($tmp2618) goto $l2620;
    panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2386->kind, ((panda$core$Int64) { 1032 }));
    $tmp2618 = $tmp2621.value;
    $l2620:;
    panda$core$Bit $tmp2622 = { $tmp2618 };
    bool $tmp2617 = $tmp2622.value;
    if (!$tmp2617) goto $l2623;
    panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2387->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2624 = $tmp2625.value;
    if ($tmp2624) goto $l2626;
    panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2387->kind, ((panda$core$Int64) { 1032 }));
    $tmp2624 = $tmp2627.value;
    $l2626:;
    panda$core$Bit $tmp2628 = { $tmp2624 };
    $tmp2617 = $tmp2628.value;
    $l2623:;
    panda$core$Bit $tmp2629 = { $tmp2617 };
    if ($tmp2629.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2630 = org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2386, p_op, right2387);
        return $tmp2630;
    }
    }
    panda$core$Bit $tmp2632 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2386->type);
    bool $tmp2631 = $tmp2632.value;
    if (!$tmp2631) goto $l2633;
    panda$core$Int64$nullable $tmp2634 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2387, left2386->type);
    $tmp2631 = ((panda$core$Bit) { $tmp2634.nonnull }).value;
    $l2633:;
    panda$core$Bit $tmp2635 = { $tmp2631 };
    if ($tmp2635.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2636 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2387, left2386->type);
        right2387 = $tmp2636;
        panda$collections$Array$add$panda$collections$Array$T(children2614, ((panda$core$Object*) left2386));
        panda$collections$Array$add$panda$collections$Array$T(children2614, ((panda$core$Object*) right2387));
        {
            $match$727542638 = p_op;
            panda$core$Bit $tmp2644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727542638, ((panda$core$Int64) { 58 }));
            bool $tmp2643 = $tmp2644.value;
            if ($tmp2643) goto $l2645;
            panda$core$Bit $tmp2646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727542638, ((panda$core$Int64) { 59 }));
            $tmp2643 = $tmp2646.value;
            $l2645:;
            panda$core$Bit $tmp2647 = { $tmp2643 };
            bool $tmp2642 = $tmp2647.value;
            if ($tmp2642) goto $l2648;
            panda$core$Bit $tmp2649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727542638, ((panda$core$Int64) { 63 }));
            $tmp2642 = $tmp2649.value;
            $l2648:;
            panda$core$Bit $tmp2650 = { $tmp2642 };
            bool $tmp2641 = $tmp2650.value;
            if ($tmp2641) goto $l2651;
            panda$core$Bit $tmp2652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727542638, ((panda$core$Int64) { 65 }));
            $tmp2641 = $tmp2652.value;
            $l2651:;
            panda$core$Bit $tmp2653 = { $tmp2641 };
            bool $tmp2640 = $tmp2653.value;
            if ($tmp2640) goto $l2654;
            panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727542638, ((panda$core$Int64) { 62 }));
            $tmp2640 = $tmp2655.value;
            $l2654:;
            panda$core$Bit $tmp2656 = { $tmp2640 };
            bool $tmp2639 = $tmp2656.value;
            if ($tmp2639) goto $l2657;
            panda$core$Bit $tmp2658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727542638, ((panda$core$Int64) { 64 }));
            $tmp2639 = $tmp2658.value;
            $l2657:;
            panda$core$Bit $tmp2659 = { $tmp2639 };
            if ($tmp2659.value) {
            {
                org$pandalanguage$pandac$Type* $tmp2660 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2637 = $tmp2660;
            }
            }
            else {
            {
                resultType2637 = left2386->type;
            }
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2661 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2661->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2661->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2661, ((panda$core$Int64) { 1023 }), p_offset, resultType2637, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2614));
        return $tmp2661;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2614, ((panda$core$Object*) right2387));
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2664 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2665 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2386, $tmp2664, ((panda$collections$ListView*) children2614));
    result2663 = $tmp2665;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2663 == NULL }).value) {
    {
        panda$collections$Array$clear(children2614);
        panda$collections$Array$add$panda$collections$Array$T(children2614, ((panda$core$Object*) left2386));
        org$pandalanguage$pandac$IRNode* $tmp2667 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2387);
        resolved2666 = $tmp2667;
        bool $tmp2668 = ((panda$core$Bit) { resolved2666 != NULL }).value;
        if (!$tmp2668) goto $l2669;
        panda$core$Bit $tmp2670 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2666->type);
        $tmp2668 = $tmp2670.value;
        $l2669:;
        panda$core$Bit $tmp2671 = { $tmp2668 };
        if ($tmp2671.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2614, ((panda$core$Object*) resolved2666));
            org$pandalanguage$pandac$IRNode* $tmp2673 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2673->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2673->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2675 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2673, ((panda$core$Int64) { 1001 }), resolved2666->offset, $tmp2675, resolved2666->type);
            target2672 = $tmp2673;
            panda$core$String* $tmp2676 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2677 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2672, $tmp2676, ((panda$collections$ListView*) children2614));
            result2663 = $tmp2677;
        }
        }
    }
    }
    return result2663;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2678;
    org$pandalanguage$pandac$IRNode* right2681;
    panda$core$Object* $tmp2679 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2680 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2679));
    left2678 = $tmp2680;
    if (((panda$core$Bit) { left2678 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2682 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2683 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2682));
    right2681 = $tmp2683;
    if (((panda$core$Bit) { right2681 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2684 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->offset, left2678, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2681);
    return $tmp2684;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2689;
    panda$core$Bit $tmp2685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 22 }));
    if ($tmp2685.value) {
    {
        panda$core$Object* $tmp2686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$collections$ListView* $tmp2687 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2686));
        return $tmp2687;
    }
    }
    panda$core$Bit $tmp2688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2688.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2689, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp2690 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2689);
        return ((panda$collections$ListView*) $tmp2690);
    }
    }
    else {
    {
        panda$collections$Array* $tmp2691 = (panda$collections$Array*) malloc(40);
        $tmp2691->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2691->refCount.value = 1;
        panda$collections$Array$init($tmp2691);
        return ((panda$collections$ListView*) $tmp2691);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    org$pandalanguage$pandac$Type* type2695;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2693.value) {
        {
            panda$collections$ListView* $tmp2694 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2694;
        }
        }
        panda$core$Bit $tmp2696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2696.value) {
        {
            panda$core$Object* $tmp2697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->type->subtypes, ((panda$core$Int64) { 0 }));
            type2695 = ((org$pandalanguage$pandac$Type*) $tmp2697);
        }
        }
        else {
        {
            type2695 = p_target->type;
        }
        }
        panda$collections$ListView* $tmp2698 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, type2695);
        return $tmp2698;
    }
    }
    panda$collections$Array* $tmp2699 = (panda$collections$Array*) malloc(40);
    $tmp2699->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2699->refCount.value = 1;
    panda$collections$Array$init($tmp2699);
    return ((panda$collections$ListView*) $tmp2699);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name2702;
    org$pandalanguage$pandac$ClassDecl* cl2704;
    org$pandalanguage$pandac$Symbol* s2706;
    org$pandalanguage$pandac$MethodDecl* m2709;
    panda$core$Int64 $match$754322710;
    panda$collections$Iterator* test$Iter2713;
    org$pandalanguage$pandac$MethodDecl* test2725;
    org$pandalanguage$pandac$MethodRef* ref2737;
    panda$collections$Array* children2741;
    org$pandalanguage$pandac$IRNode* methodRef2744;
    panda$collections$Array* args2750;
    panda$core$Int64 $match$766582754;
    panda$core$Int64 $match$767182756;
    panda$collections$Array* children2764;
    panda$collections$Array* children2775;
    org$pandalanguage$pandac$IRNode* coerced2785;
    panda$collections$Array* children2788;
    panda$core$Bit $tmp2701 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2701.value) {
    {
        panda$core$String* $tmp2703 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2702 = $tmp2703;
        org$pandalanguage$pandac$ClassDecl* $tmp2705 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2704 = $tmp2705;
        if (((panda$core$Bit) { cl2704 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2707 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2704);
        org$pandalanguage$pandac$Symbol* $tmp2708 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2707, name2702);
        s2706 = $tmp2708;
        if (((panda$core$Bit) { s2706 != NULL }).value) {
        {
            m2709 = NULL;
            {
                $match$754322710 = s2706->kind;
                panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$754322710, ((panda$core$Int64) { 204 }));
                if ($tmp2711.value) {
                {
                    m2709 = ((org$pandalanguage$pandac$MethodDecl*) s2706);
                }
                }
                else {
                panda$core$Bit $tmp2712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$754322710, ((panda$core$Int64) { 205 }));
                if ($tmp2712.value) {
                {
                    {
                        ITable* $tmp2714 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2706)->methods)->$class->itable;
                        while ($tmp2714->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2714 = $tmp2714->next;
                        }
                        $fn2716 $tmp2715 = $tmp2714->methods[0];
                        panda$collections$Iterator* $tmp2717 = $tmp2715(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2706)->methods));
                        test$Iter2713 = $tmp2717;
                        $l2718:;
                        ITable* $tmp2720 = test$Iter2713->$class->itable;
                        while ($tmp2720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2720 = $tmp2720->next;
                        }
                        $fn2722 $tmp2721 = $tmp2720->methods[0];
                        panda$core$Bit $tmp2723 = $tmp2721(test$Iter2713);
                        panda$core$Bit $tmp2724 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2723);
                        if (!$tmp2724.value) goto $l2719;
                        {
                            ITable* $tmp2726 = test$Iter2713->$class->itable;
                            while ($tmp2726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2726 = $tmp2726->next;
                            }
                            $fn2728 $tmp2727 = $tmp2726->methods[1];
                            panda$core$Object* $tmp2729 = $tmp2727(test$Iter2713);
                            test2725 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2729);
                            panda$core$Bit $tmp2731 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2725->annotations);
                            panda$core$Bit $tmp2732 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2731);
                            bool $tmp2730 = $tmp2732.value;
                            if (!$tmp2730) goto $l2733;
                            panda$core$Int64 $tmp2734 = panda$collections$Array$get_count$R$panda$core$Int64(test2725->parameters);
                            panda$core$Bit $tmp2735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2734, ((panda$core$Int64) { 0 }));
                            $tmp2730 = $tmp2735.value;
                            $l2733:;
                            panda$core$Bit $tmp2736 = { $tmp2730 };
                            if ($tmp2736.value) {
                            {
                                m2709 = test2725;
                                goto $l2719;
                            }
                            }
                        }
                        goto $l2718;
                        $l2719:;
                    }
                }
                }
                else {
                {
                }
                }
                }
            }
            if (((panda$core$Bit) { m2709 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2709);
                org$pandalanguage$pandac$MethodRef* $tmp2738 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2738->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2738->refCount.value = 1;
                panda$collections$ListView* $tmp2740 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2738, m2709, $tmp2740);
                ref2737 = $tmp2738;
                panda$collections$Array* $tmp2742 = (panda$collections$Array*) malloc(40);
                $tmp2742->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2742->refCount.value = 1;
                panda$collections$Array$init($tmp2742);
                children2741 = $tmp2742;
                panda$collections$Array$add$panda$collections$Array$T(children2741, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2745 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2745->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2747 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp2747->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2747->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2747, &$s2749, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2745, ((panda$core$Int64) { 1002 }), p_offset, $tmp2747, ((panda$core$Object*) ref2737), ((panda$collections$ListView*) children2741));
                methodRef2744 = $tmp2745;
                panda$collections$Array* $tmp2751 = (panda$collections$Array*) malloc(40);
                $tmp2751->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2751->refCount.value = 1;
                panda$collections$Array$init($tmp2751);
                args2750 = $tmp2751;
                org$pandalanguage$pandac$IRNode* $tmp2753 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2744, ((panda$collections$ListView*) args2750));
                return $tmp2753;
            }
            }
        }
        }
    }
    }
    {
        $match$766582754 = p_op;
        panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$766582754, ((panda$core$Int64) { 52 }));
        if ($tmp2755.value) {
        {
            {
                $match$767182756 = p_base->kind;
                panda$core$Bit $tmp2757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767182756, ((panda$core$Int64) { 1004 }));
                if ($tmp2757.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp2758 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2758->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2758->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2758, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2758;
                }
                }
                else {
                panda$core$Bit $tmp2760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767182756, ((panda$core$Int64) { 1032 }));
                if ($tmp2760.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp2761 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2761->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2761->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2761, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2761;
                }
                }
                else {
                {
                    panda$core$Bit $tmp2763 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2763.value) {
                    {
                        panda$collections$Array* $tmp2765 = (panda$collections$Array*) malloc(40);
                        $tmp2765->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2765->refCount.value = 1;
                        panda$collections$Array$init($tmp2765);
                        children2764 = $tmp2765;
                        panda$collections$Array$add$panda$collections$Array$T(children2764, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2767 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp2767->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2767->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2767, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2764));
                        return $tmp2767;
                    }
                    }
                }
                }
                }
            }
            panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2769, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, &$s2771);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2772);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp2773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$766582754, ((panda$core$Int64) { 50 }));
        if ($tmp2773.value) {
        {
            panda$core$Bit $tmp2774 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2774.value) {
            {
                panda$collections$Array* $tmp2776 = (panda$collections$Array*) malloc(40);
                $tmp2776->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2776->refCount.value = 1;
                panda$collections$Array$init($tmp2776);
                children2775 = $tmp2776;
                panda$collections$Array$add$panda$collections$Array$T(children2775, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2778 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2778->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2778->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2778, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2775));
                return $tmp2778;
            }
            }
            else {
            {
                panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2780, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2783);
                return NULL;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$766582754, ((panda$core$Int64) { 49 }));
        if ($tmp2784.value) {
        {
            org$pandalanguage$pandac$Type* $tmp2786 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2787 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2786);
            coerced2785 = $tmp2787;
            if (((panda$core$Bit) { coerced2785 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2789 = (panda$collections$Array*) malloc(40);
            $tmp2789->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2789->refCount.value = 1;
            panda$collections$Array$init($tmp2789);
            children2788 = $tmp2789;
            panda$collections$Array$add$panda$collections$Array$T(children2788, ((panda$core$Object*) coerced2785));
            org$pandalanguage$pandac$IRNode* $tmp2791 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2791->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2791->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2791, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2788));
            return $tmp2791;
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_p) {
    org$pandalanguage$pandac$IRNode* base2793;
    panda$core$Object* $tmp2794 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2795 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2794));
    base2793 = $tmp2795;
    if (((panda$core$Bit) { base2793 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2796 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2793, p_p->offset);
    return $tmp2796;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2797;
    panda$collections$Array* args2800;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2803;
    org$pandalanguage$pandac$IRNode* arg2823;
    panda$core$Object* $tmp2798 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2799 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2798));
    m2797 = $tmp2799;
    if (((panda$core$Bit) { m2797 != NULL }).value) {
    {
        panda$collections$Array* $tmp2801 = (panda$collections$Array*) malloc(40);
        $tmp2801->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2801->refCount.value = 1;
        panda$collections$Array$init($tmp2801);
        args2800 = $tmp2801;
        panda$core$Int64 $tmp2804 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2803, ((panda$core$Int64) { 1 }), $tmp2804, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp2806 = $tmp2803.start.value;
        panda$core$Int64 i2805 = { $tmp2806 };
        int64_t $tmp2808 = $tmp2803.end.value;
        int64_t $tmp2809 = $tmp2803.step.value;
        bool $tmp2810 = $tmp2803.inclusive.value;
        bool $tmp2817 = $tmp2809 > 0;
        if ($tmp2817) goto $l2815; else goto $l2816;
        $l2815:;
        if ($tmp2810) goto $l2818; else goto $l2819;
        $l2818:;
        if ($tmp2806 <= $tmp2808) goto $l2811; else goto $l2813;
        $l2819:;
        if ($tmp2806 < $tmp2808) goto $l2811; else goto $l2813;
        $l2816:;
        if ($tmp2810) goto $l2820; else goto $l2821;
        $l2820:;
        if ($tmp2806 >= $tmp2808) goto $l2811; else goto $l2813;
        $l2821:;
        if ($tmp2806 > $tmp2808) goto $l2811; else goto $l2813;
        $l2811:;
        {
            panda$core$Object* $tmp2824 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2805);
            org$pandalanguage$pandac$IRNode* $tmp2825 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2824));
            arg2823 = $tmp2825;
            if (((panda$core$Bit) { arg2823 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2800, ((panda$core$Object*) arg2823));
        }
        $l2814:;
        if ($tmp2817) goto $l2827; else goto $l2828;
        $l2827:;
        int64_t $tmp2829 = $tmp2808 - i2805.value;
        if ($tmp2810) goto $l2830; else goto $l2831;
        $l2830:;
        if ($tmp2829 >= $tmp2809) goto $l2826; else goto $l2813;
        $l2831:;
        if ($tmp2829 > $tmp2809) goto $l2826; else goto $l2813;
        $l2828:;
        int64_t $tmp2833 = i2805.value - $tmp2808;
        if ($tmp2810) goto $l2834; else goto $l2835;
        $l2834:;
        if ($tmp2833 >= -$tmp2809) goto $l2826; else goto $l2813;
        $l2835:;
        if ($tmp2833 > -$tmp2809) goto $l2826; else goto $l2813;
        $l2826:;
        i2805.value += $tmp2809;
        goto $l2811;
        $l2813:;
        org$pandalanguage$pandac$IRNode* $tmp2837 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2797, ((panda$collections$ListView*) args2800));
        return $tmp2837;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2838;
    org$pandalanguage$pandac$ClassDecl* cl2847;
    panda$core$Int64 $match$798532848;
    panda$core$String* name2852;
    org$pandalanguage$pandac$ClassDecl* cl2860;
    org$pandalanguage$pandac$Symbol* s2873;
    panda$core$Object* $tmp2839 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2840 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2839));
    base2838 = $tmp2840;
    if (((panda$core$Bit) { base2838 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2842 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2838->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2841 = $tmp2842.value;
    if (!$tmp2841) goto $l2843;
    panda$core$Bit $tmp2844 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2838->kind, ((panda$core$Int64) { 1024 }));
    $tmp2841 = $tmp2844.value;
    $l2843:;
    panda$core$Bit $tmp2845 = { $tmp2841 };
    if ($tmp2845.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2846 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2838);
        base2838 = $tmp2846;
    }
    }
    if (((panda$core$Bit) { base2838 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$798532848 = base2838->kind;
        panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798532848, ((panda$core$Int64) { 1001 }));
        if ($tmp2849.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2838->payload));
            cl2847 = $tmp2850;
        }
        }
        else {
        panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798532848, ((panda$core$Int64) { 1037 }));
        if ($tmp2851.value) {
        {
            panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2853, base2838->payload);
            panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
            panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2856, p_d->payload);
            panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, &$s2858);
            name2852 = $tmp2859;
            org$pandalanguage$pandac$ClassDecl* $tmp2861 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2852);
            cl2860 = $tmp2861;
            if (((panda$core$Bit) { cl2860 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2862 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2862->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2862->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2864 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2865 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2860);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2862, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp2864, $tmp2865);
                return $tmp2862;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2866 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2866->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2866->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2868 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2866, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp2868, name2852);
            return $tmp2866;
        }
        }
        else {
        panda$core$Bit $tmp2869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798532848, ((panda$core$Int64) { 1024 }));
        if ($tmp2869.value) {
        {
            panda$core$Object* $tmp2870 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2871 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2870)->rawSuper);
            cl2847 = $tmp2871;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2872 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2838->type);
            cl2847 = $tmp2872;
        }
        }
        }
        }
    }
    if (((panda$core$Bit) { cl2847 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2874 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2847);
    org$pandalanguage$pandac$Symbol* $tmp2875 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2874, ((panda$core$String*) p_d->payload));
    s2873 = $tmp2875;
    if (((panda$core$Bit) { s2873 == NULL }).value) {
    {
        panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2876, ((panda$core$Object*) base2838->type));
        panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, &$s2878);
        panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2880, p_d->payload);
        panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, &$s2882);
        panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, $tmp2883);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_d->offset, $tmp2884);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2885 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2847);
    org$pandalanguage$pandac$IRNode* $tmp2886 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->offset, base2838, s2873, $tmp2885);
    return $tmp2886;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2887;
    org$pandalanguage$pandac$Symbol* $tmp2888 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2887 = $tmp2888;
    if (((panda$core$Bit) { s2887 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2889 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2887 = ((org$pandalanguage$pandac$Symbol*) $tmp2889);
    }
    }
    if (((panda$core$Bit) { s2887 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2890 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->offset, NULL, s2887, self->symbolTable);
        return $tmp2890;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2891 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2891->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2891->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2893 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2891, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp2893, ((panda$core$String*) p_i->payload));
    return $tmp2891;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$IRNode* $tmp2894 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2894->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2894->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2896 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp2897 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp2898 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp2897);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2894, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp2896, $tmp2898);
    return $tmp2894;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2899;
    org$pandalanguage$pandac$IRNode* end2907;
    org$pandalanguage$pandac$IRNode* step2915;
    panda$collections$Array* children2925;
    panda$core$Object* $tmp2900 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2900)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2901.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2902 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2902->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2904 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2902, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2904);
        start2899 = $tmp2902;
    }
    }
    else {
    {
        panda$core$Object* $tmp2905 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2906 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2905));
        start2899 = $tmp2906;
        if (((panda$core$Bit) { start2899 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2908 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2908)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2909.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2910 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2910->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2910->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2912 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2910, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2912);
        end2907 = $tmp2910;
    }
    }
    else {
    {
        panda$core$Object* $tmp2913 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp2914 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2913));
        end2907 = $tmp2914;
        if (((panda$core$Bit) { end2907 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2916 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2916)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2917.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2918 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2918->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2918->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2920 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2918, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp2920, ((panda$core$UInt64) { 1 }));
        step2915 = $tmp2918;
    }
    }
    else {
    {
        panda$core$Object* $tmp2921 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2922 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2921));
        org$pandalanguage$pandac$Type* $tmp2923 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2924 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2922, $tmp2923);
        step2915 = $tmp2924;
        if (((panda$core$Bit) { step2915 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp2926 = (panda$collections$Array*) malloc(40);
    $tmp2926->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2926->refCount.value = 1;
    panda$collections$Array$init($tmp2926);
    children2925 = $tmp2926;
    panda$collections$Array$add$panda$collections$Array$T(children2925, ((panda$core$Object*) start2899));
    panda$collections$Array$add$panda$collections$Array$T(children2925, ((panda$core$Object*) end2907));
    panda$collections$Array$add$panda$collections$Array$T(children2925, ((panda$core$Object*) step2915));
    org$pandalanguage$pandac$IRNode* $tmp2928 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2928->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2928->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2930 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2930->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2930->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2930, &$s2932, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2928, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp2930, ((panda$core$Object*) wrap_panda$core$Bit($tmp2933)), ((panda$collections$ListView*) children2925));
    return $tmp2928;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp2934 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2934->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2936 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2934, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp2936, ((panda$core$String*) p_s->payload));
    return $tmp2934;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type2940;
    org$pandalanguage$pandac$ClassDecl* cl2941;
    panda$collections$Array* subtypes2948;
    panda$core$MutableString* name2952;
    panda$core$String* separator2956;
    panda$collections$Iterator* p$Iter2958;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p2970;
    panda$collections$Array* pType2975;
    panda$core$String* pName2978;
    panda$core$Object* $tmp2937 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2938 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2937)->annotations);
    if ($tmp2938.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2939);
        return NULL;
    }
    }
    panda$core$Object* $tmp2942 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2941 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2942);
    ITable* $tmp2943 = ((panda$collections$CollectionView*) cl2941->parameters)->$class->itable;
    while ($tmp2943->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2943 = $tmp2943->next;
    }
    $fn2945 $tmp2944 = $tmp2943->methods[0];
    panda$core$Int64 $tmp2946 = $tmp2944(((panda$collections$CollectionView*) cl2941->parameters));
    panda$core$Bit $tmp2947 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2946, ((panda$core$Int64) { 0 }));
    if ($tmp2947.value) {
    {
        panda$collections$Array* $tmp2949 = (panda$collections$Array*) malloc(40);
        $tmp2949->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2949->refCount.value = 1;
        panda$collections$Array$init($tmp2949);
        subtypes2948 = $tmp2949;
        org$pandalanguage$pandac$Type* $tmp2951 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2941);
        panda$collections$Array$add$panda$collections$Array$T(subtypes2948, ((panda$core$Object*) $tmp2951));
        panda$core$MutableString* $tmp2953 = (panda$core$MutableString*) malloc(40);
        $tmp2953->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp2953->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp2953, ((org$pandalanguage$pandac$Symbol*) cl2941)->name);
        name2952 = $tmp2953;
        panda$core$MutableString$append$panda$core$String(name2952, &$s2955);
        separator2956 = &$s2957;
        {
            ITable* $tmp2959 = ((panda$collections$Iterable*) cl2941->parameters)->$class->itable;
            while ($tmp2959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2959 = $tmp2959->next;
            }
            $fn2961 $tmp2960 = $tmp2959->methods[0];
            panda$collections$Iterator* $tmp2962 = $tmp2960(((panda$collections$Iterable*) cl2941->parameters));
            p$Iter2958 = $tmp2962;
            $l2963:;
            ITable* $tmp2965 = p$Iter2958->$class->itable;
            while ($tmp2965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2965 = $tmp2965->next;
            }
            $fn2967 $tmp2966 = $tmp2965->methods[0];
            panda$core$Bit $tmp2968 = $tmp2966(p$Iter2958);
            panda$core$Bit $tmp2969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2968);
            if (!$tmp2969.value) goto $l2964;
            {
                ITable* $tmp2971 = p$Iter2958->$class->itable;
                while ($tmp2971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2971 = $tmp2971->next;
                }
                $fn2973 $tmp2972 = $tmp2971->methods[1];
                panda$core$Object* $tmp2974 = $tmp2972(p$Iter2958);
                p2970 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp2974);
                panda$collections$Array* $tmp2976 = (panda$collections$Array*) malloc(40);
                $tmp2976->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2976->refCount.value = 1;
                panda$collections$Array$init($tmp2976);
                pType2975 = $tmp2976;
                panda$collections$Array$add$panda$collections$Array$T(pType2975, ((panda$core$Object*) p2970->bound));
                panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2979, ((org$pandalanguage$pandac$Symbol*) cl2941)->name);
                panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2981);
                panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, ((org$pandalanguage$pandac$Symbol*) p2970)->name);
                panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
                pName2978 = $tmp2985;
                panda$core$MutableString$append$panda$core$String(name2952, separator2956);
                panda$core$MutableString$append$panda$core$String(name2952, pName2978);
                org$pandalanguage$pandac$Type* $tmp2986 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp2986->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2986->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2986, pName2978, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p2970)->offset, ((panda$collections$ListView*) pType2975), ((panda$core$Bit) { true }));
                panda$collections$Array$add$panda$collections$Array$T(subtypes2948, ((panda$core$Object*) $tmp2986));
                separator2956 = &$s2988;
            }
            goto $l2963;
            $l2964:;
        }
        panda$core$MutableString$append$panda$core$String(name2952, &$s2989);
        org$pandalanguage$pandac$Type* $tmp2990 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp2990->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp2990->refCount.value = 1;
        panda$core$String* $tmp2992 = panda$core$MutableString$convert$R$panda$core$String(name2952);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2990, $tmp2992, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes2948), ((panda$core$Bit) { true }));
        type2940 = $tmp2990;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2993 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2941);
        type2940 = $tmp2993;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2994 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2994->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2994->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2994, ((panda$core$Int64) { 1025 }), p_s->offset, type2940);
    return $tmp2994;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl2999;
    panda$core$Object* $tmp2996 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2997 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2996)->annotations);
    if ($tmp2997.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2998);
        return NULL;
    }
    }
    panda$core$Object* $tmp3000 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2999 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3000);
    org$pandalanguage$pandac$IRNode* $tmp3001 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3001->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3001->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3001, ((panda$core$Int64) { 1024 }), p_s->offset, cl2999->rawSuper);
    return $tmp3001;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3003;
    org$pandalanguage$pandac$Type* type3006;
    panda$core$Object* $tmp3004 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3005 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3004));
    value3003 = $tmp3005;
    if (((panda$core$Bit) { value3003 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3007 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3008 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3007));
    org$pandalanguage$pandac$Type* $tmp3009 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp3008);
    type3006 = $tmp3009;
    panda$core$Int64$nullable $tmp3010 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3003, type3006);
    if (((panda$core$Bit) { $tmp3010.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3011 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3003, type3006);
        return $tmp3011;
    }
    }
    panda$core$Bit $tmp3012 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3003, type3006);
    if ($tmp3012.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3013 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3003, p_c->offset, ((panda$core$Bit) { true }), type3006);
        return $tmp3013;
    }
    }
    else {
    {
        panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3014, ((panda$core$Object*) value3003->type));
        panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, &$s3016);
        panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3018, ((panda$core$Object*) type3006));
        panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3020);
        panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, $tmp3021);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3022);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    org$pandalanguage$pandac$IRNode* $tmp3023 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3023->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3023->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3025 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3023, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp3025);
    return $tmp3023;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    panda$core$Int64 $match$856723026;
    {
        $match$856723026 = p_e->kind;
        panda$core$Bit $tmp3027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 103 }));
        if ($tmp3027.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3028 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3028;
        }
        }
        else {
        panda$core$Bit $tmp3029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 116 }));
        if ($tmp3029.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3030 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3030->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3030->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3032 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3030, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp3032, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3030;
        }
        }
        else {
        panda$core$Bit $tmp3033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 107 }));
        if ($tmp3033.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3034 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3034;
        }
        }
        else {
        panda$core$Bit $tmp3035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 108 }));
        if ($tmp3035.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3036 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3036;
        }
        }
        else {
        panda$core$Bit $tmp3037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 106 }));
        if ($tmp3037.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3038 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3038;
        }
        }
        else {
        panda$core$Bit $tmp3039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 102 }));
        if ($tmp3039.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3040 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3040->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3040->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3042 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3040, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp3042, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3040;
        }
        }
        else {
        panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 112 }));
        if ($tmp3043.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3044 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3044;
        }
        }
        else {
        panda$core$Bit $tmp3046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 104 }));
        bool $tmp3045 = $tmp3046.value;
        if ($tmp3045) goto $l3047;
        panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 105 }));
        $tmp3045 = $tmp3048.value;
        $l3047:;
        panda$core$Bit $tmp3049 = { $tmp3045 };
        if ($tmp3049.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3050 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3050;
        }
        }
        else {
        panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 113 }));
        if ($tmp3051.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3052 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3052;
        }
        }
        else {
        panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 109 }));
        bool $tmp3054 = $tmp3055.value;
        if ($tmp3054) goto $l3056;
        panda$core$Bit $tmp3057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 154 }));
        $tmp3054 = $tmp3057.value;
        $l3056:;
        panda$core$Bit $tmp3058 = { $tmp3054 };
        bool $tmp3053 = $tmp3058.value;
        if ($tmp3053) goto $l3059;
        panda$core$Bit $tmp3060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 110 }));
        $tmp3053 = $tmp3060.value;
        $l3059:;
        panda$core$Bit $tmp3061 = { $tmp3053 };
        if ($tmp3061.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3062 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3062;
        }
        }
        else {
        panda$core$Bit $tmp3063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 114 }));
        if ($tmp3063.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3064 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3064;
        }
        }
        else {
        panda$core$Bit $tmp3065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 115 }));
        if ($tmp3065.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3066 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3066;
        }
        }
        else {
        panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 111 }));
        if ($tmp3067.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3068 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3068;
        }
        }
        else {
        panda$core$Bit $tmp3069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856723026, ((panda$core$Int64) { 117 }));
        if ($tmp3069.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3070 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3070;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3071;
    panda$collections$Array* result3074;
    panda$collections$Iterator* stmt$Iter3077;
    org$pandalanguage$pandac$ASTNode* stmt3089;
    org$pandalanguage$pandac$IRNode* compiled3094;
    org$pandalanguage$pandac$SymbolTable* $tmp3072 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3072->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3072->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3072, self->symbolTable);
    symbols3071 = $tmp3072;
    self->symbolTable = symbols3071;
    panda$collections$Array* $tmp3075 = (panda$collections$Array*) malloc(40);
    $tmp3075->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3075->refCount.value = 1;
    panda$collections$Array$init($tmp3075);
    result3074 = $tmp3075;
    {
        ITable* $tmp3078 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3078->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3078 = $tmp3078->next;
        }
        $fn3080 $tmp3079 = $tmp3078->methods[0];
        panda$collections$Iterator* $tmp3081 = $tmp3079(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3077 = $tmp3081;
        $l3082:;
        ITable* $tmp3084 = stmt$Iter3077->$class->itable;
        while ($tmp3084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3084 = $tmp3084->next;
        }
        $fn3086 $tmp3085 = $tmp3084->methods[0];
        panda$core$Bit $tmp3087 = $tmp3085(stmt$Iter3077);
        panda$core$Bit $tmp3088 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3087);
        if (!$tmp3088.value) goto $l3083;
        {
            ITable* $tmp3090 = stmt$Iter3077->$class->itable;
            while ($tmp3090->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3090 = $tmp3090->next;
            }
            $fn3092 $tmp3091 = $tmp3090->methods[1];
            panda$core$Object* $tmp3093 = $tmp3091(stmt$Iter3077);
            stmt3089 = ((org$pandalanguage$pandac$ASTNode*) $tmp3093);
            org$pandalanguage$pandac$IRNode* $tmp3095 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3089);
            compiled3094 = $tmp3095;
            if (((panda$core$Bit) { compiled3094 == NULL }).value) {
            {
                panda$core$Object* $tmp3096 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3071->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3096);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3074, ((panda$core$Object*) compiled3094));
        }
        goto $l3082;
        $l3083:;
    }
    panda$core$Object* $tmp3097 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3071->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3097);
    org$pandalanguage$pandac$IRNode* $tmp3098 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3098->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3098->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3098, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result3074));
    return $tmp3098;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3100;
    org$pandalanguage$pandac$IRNode* ifTrue3105;
    panda$collections$Array* children3108;
    org$pandalanguage$pandac$IRNode* ifFalse3113;
    panda$core$Object* $tmp3101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3102 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3101));
    org$pandalanguage$pandac$Type* $tmp3103 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3104 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3102, $tmp3103);
    test3100 = $tmp3104;
    if (((panda$core$Bit) { test3100 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3106 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3107 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3106));
    ifTrue3105 = $tmp3107;
    panda$collections$Array* $tmp3109 = (panda$collections$Array*) malloc(40);
    $tmp3109->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3109->refCount.value = 1;
    panda$collections$Array$init($tmp3109);
    children3108 = $tmp3109;
    panda$collections$Array$add$panda$collections$Array$T(children3108, ((panda$core$Object*) test3100));
    panda$collections$Array$add$panda$collections$Array$T(children3108, ((panda$core$Object*) ifTrue3105));
    panda$core$Int64 $tmp3111 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3111, ((panda$core$Int64) { 3 }));
    if ($tmp3112.value) {
    {
        panda$core$Object* $tmp3114 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3115 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3114));
        ifFalse3113 = $tmp3115;
        if (((panda$core$Bit) { ifFalse3113 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3108, ((panda$core$Object*) ifFalse3113));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3116 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3116->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3116->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3116, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children3108));
    return $tmp3116;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3118;
    org$pandalanguage$pandac$IRNode* list3119;
    org$pandalanguage$pandac$Type* t3126;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3137;
    org$pandalanguage$pandac$IRNode* body3139;
    panda$collections$Array* children3141;
    panda$core$Bit $tmp3121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3120 = $tmp3121.value;
    if (!$tmp3120) goto $l3122;
    panda$core$Int64 $tmp3123 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3123, ((panda$core$Int64) { 1 }));
    $tmp3120 = $tmp3124.value;
    $l3122:;
    panda$core$Bit $tmp3125 = { $tmp3120 };
    if ($tmp3125.value) {
    {
        panda$core$Object* $tmp3127 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3128 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3127));
        org$pandalanguage$pandac$Type* $tmp3129 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp3128);
        t3126 = $tmp3129;
        org$pandalanguage$pandac$Type* $tmp3130 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3126);
        org$pandalanguage$pandac$IRNode* $tmp3131 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3130);
        list3119 = $tmp3131;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3132 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3119 = $tmp3132;
    }
    }
    if (((panda$core$Bit) { list3119 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3119->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3133.value) {
    {
        panda$core$Object* $tmp3134 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3119->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3135 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp3134)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3118 = ((org$pandalanguage$pandac$Type*) $tmp3135);
    }
    }
    else {
    {
        panda$core$Object* $tmp3136 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3119->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3118 = ((org$pandalanguage$pandac$Type*) $tmp3136);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3138 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, NULL, elementType3118);
    target3137 = $tmp3138;
    if (((panda$core$Bit) { target3137 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3140 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3139 = $tmp3140;
    if (((panda$core$Bit) { body3139 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3142 = (panda$collections$Array*) malloc(40);
    $tmp3142->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3142->refCount.value = 1;
    panda$collections$Array$init($tmp3142);
    children3141 = $tmp3142;
    panda$collections$Array$add$panda$collections$Array$T(children3141, ((panda$core$Object*) target3137->target));
    panda$collections$Array$add$panda$collections$Array$T(children3141, ((panda$core$Object*) list3119));
    panda$collections$Array$add$panda$collections$Array$T(children3141, ((panda$core$Object*) body3139));
    org$pandalanguage$pandac$IRNode* $tmp3144 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3144->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3144->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3144, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3141));
    return $tmp3144;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3146;
    org$pandalanguage$pandac$Variable* targetVar3149;
    panda$collections$Array* subtypes3150;
    org$pandalanguage$pandac$Type* iterType3154;
    org$pandalanguage$pandac$Variable* iter3166;
    panda$collections$Array* statements3171;
    panda$collections$Array* declChildren3174;
    panda$collections$Array* varChildren3179;
    panda$collections$Array* whileChildren3186;
    org$pandalanguage$pandac$IRNode* done3189;
    org$pandalanguage$pandac$IRNode* notCall3196;
    panda$collections$Array* valueDeclChildren3201;
    org$pandalanguage$pandac$IRNode* next3206;
    panda$collections$Array* valueVarChildren3213;
    org$pandalanguage$pandac$IRNode* block3218;
    panda$collections$Array* blockChildren3220;
    panda$core$Object* $tmp3147 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3148 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, NULL, ((org$pandalanguage$pandac$Type*) $tmp3147));
    target3146 = $tmp3148;
    if (((panda$core$Bit) { target3146 == NULL }).value) {
    {
        return NULL;
    }
    }
    targetVar3149 = ((org$pandalanguage$pandac$Variable*) target3146->target->payload);
    panda$collections$Array* $tmp3151 = (panda$collections$Array*) malloc(40);
    $tmp3151->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3151->refCount.value = 1;
    panda$collections$Array$init($tmp3151);
    subtypes3150 = $tmp3151;
    org$pandalanguage$pandac$Type* $tmp3153 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3150, ((panda$core$Object*) $tmp3153));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3150, ((panda$core$Object*) target3146->target->type));
    org$pandalanguage$pandac$Type* $tmp3155 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp3155->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3155->refCount.value = 1;
    panda$core$Object* $tmp3158 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3150, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3157, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3158)));
    panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
    panda$core$Object* $tmp3162 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3150, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3161, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3162)));
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3155, $tmp3165, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes3150), ((panda$core$Bit) { true }));
    iterType3154 = $tmp3155;
    org$pandalanguage$pandac$Variable* $tmp3167 = (org$pandalanguage$pandac$Variable*) malloc(56);
    $tmp3167->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3167->refCount.value = 1;
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3149)->name, &$s3169);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3167, p_iterator->offset, $tmp3170, iterType3154);
    iter3166 = $tmp3167;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3166));
    panda$collections$Array* $tmp3172 = (panda$collections$Array*) malloc(40);
    $tmp3172->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3172->refCount.value = 1;
    panda$collections$Array$init($tmp3172);
    statements3171 = $tmp3172;
    panda$collections$Array* $tmp3175 = (panda$collections$Array*) malloc(40);
    $tmp3175->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3175->refCount.value = 1;
    panda$collections$Array$init($tmp3175);
    declChildren3174 = $tmp3175;
    org$pandalanguage$pandac$IRNode* $tmp3177 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3177->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3177->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3177, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3166->type, iter3166);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3174, ((panda$core$Object*) $tmp3177));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3174, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3180 = (panda$collections$Array*) malloc(40);
    $tmp3180->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3180->refCount.value = 1;
    panda$collections$Array$init($tmp3180);
    varChildren3179 = $tmp3180;
    org$pandalanguage$pandac$IRNode* $tmp3182 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3182->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3182->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3182, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3166)->offset, ((panda$collections$ListView*) declChildren3174));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3179, ((panda$core$Object*) $tmp3182));
    org$pandalanguage$pandac$IRNode* $tmp3184 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3184->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3184->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3184, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3166)->offset, ((panda$collections$ListView*) varChildren3179));
    panda$collections$Array$add$panda$collections$Array$T(statements3171, ((panda$core$Object*) $tmp3184));
    panda$collections$Array* $tmp3187 = (panda$collections$Array*) malloc(40);
    $tmp3187->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3187->refCount.value = 1;
    panda$collections$Array$init($tmp3187);
    whileChildren3186 = $tmp3187;
    org$pandalanguage$pandac$IRNode* $tmp3190 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3190->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3190->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3190, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3166)->offset, iter3166->type, iter3166);
    panda$collections$Array* $tmp3193 = (panda$collections$Array*) malloc(40);
    $tmp3193->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3193->refCount.value = 1;
    panda$collections$Array$init($tmp3193);
    org$pandalanguage$pandac$IRNode* $tmp3195 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3190, &$s3192, ((panda$collections$ListView*) $tmp3193), NULL);
    done3189 = $tmp3195;
    if (((panda$core$Bit) { done3189 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3198 = (panda$collections$Array*) malloc(40);
    $tmp3198->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3198->refCount.value = 1;
    panda$collections$Array$init($tmp3198);
    org$pandalanguage$pandac$IRNode* $tmp3200 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3189, &$s3197, ((panda$collections$ListView*) $tmp3198), NULL);
    notCall3196 = $tmp3200;
    if (((panda$core$Bit) { notCall3196 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3186, ((panda$core$Object*) notCall3196));
    panda$collections$Array* $tmp3202 = (panda$collections$Array*) malloc(40);
    $tmp3202->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3202->refCount.value = 1;
    panda$collections$Array$init($tmp3202);
    valueDeclChildren3201 = $tmp3202;
    org$pandalanguage$pandac$IRNode* $tmp3204 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3204->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3204->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3204, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar3149->type, targetVar3149);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3201, ((panda$core$Object*) $tmp3204));
    org$pandalanguage$pandac$IRNode* $tmp3207 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3207->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3207->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3207, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3166->type, iter3166);
    panda$collections$Array* $tmp3210 = (panda$collections$Array*) malloc(40);
    $tmp3210->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3210->refCount.value = 1;
    panda$collections$Array$init($tmp3210);
    org$pandalanguage$pandac$IRNode* $tmp3212 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3207, &$s3209, ((panda$collections$ListView*) $tmp3210), NULL);
    next3206 = $tmp3212;
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3201, ((panda$core$Object*) next3206));
    panda$collections$Array* $tmp3214 = (panda$collections$Array*) malloc(40);
    $tmp3214->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3214->refCount.value = 1;
    panda$collections$Array$init($tmp3214);
    valueVarChildren3213 = $tmp3214;
    org$pandalanguage$pandac$IRNode* $tmp3216 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3216->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3216->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3216, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3201));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3213, ((panda$core$Object*) $tmp3216));
    org$pandalanguage$pandac$IRNode* $tmp3219 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3218 = $tmp3219;
    if (((panda$core$Bit) { block3218 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3221 = (panda$collections$Array*) malloc(40);
    $tmp3221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3221->refCount.value = 1;
    panda$collections$Array$init($tmp3221);
    blockChildren3220 = $tmp3221;
    org$pandalanguage$pandac$IRNode* $tmp3223 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3223->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3223->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3223, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3213));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3220, ((panda$core$Object*) $tmp3223));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3220, ((panda$collections$CollectionView*) block3218->children));
    org$pandalanguage$pandac$IRNode* $tmp3225 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3225->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3225, ((panda$core$Int64) { 1000 }), block3218->offset, ((panda$collections$ListView*) blockChildren3220));
    block3218 = $tmp3225;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3186, ((panda$core$Object*) block3218));
    org$pandalanguage$pandac$IRNode* $tmp3227 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3227->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3227, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3186));
    panda$collections$Array$add$panda$collections$Array$T(statements3171, ((panda$core$Object*) $tmp3227));
    org$pandalanguage$pandac$IRNode* $tmp3229 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3229->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3229, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3171));
    return $tmp3229;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3231;
    org$pandalanguage$pandac$SymbolTable* symbols3234;
    org$pandalanguage$pandac$IRNode* result3237;
    panda$core$Bit found3247;
    panda$collections$Iterator* intf$Iter3248;
    org$pandalanguage$pandac$Type* intf3261;
    org$pandalanguage$pandac$IRNode* iterator3273;
    org$pandalanguage$pandac$IRNode* iterable3285;
    org$pandalanguage$pandac$IRNode* iterator3287;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3232 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3233 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3232));
    list3231 = $tmp3233;
    if (((panda$core$Bit) { list3231 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3235 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3235->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3235->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3235, self->symbolTable);
    symbols3234 = $tmp3235;
    self->symbolTable = symbols3234;
    panda$core$Bit $tmp3239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3231->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3238 = $tmp3239.value;
    if ($tmp3238) goto $l3240;
    panda$core$Bit $tmp3241 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3231->type);
    $tmp3238 = $tmp3241.value;
    $l3240:;
    panda$core$Bit $tmp3242 = { $tmp3238 };
    if ($tmp3242.value) {
    {
        panda$core$Object* $tmp3243 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3244 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3245 = org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3243), list3231, ((org$pandalanguage$pandac$ASTNode*) $tmp3244));
        result3237 = $tmp3245;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3246 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3231);
        list3231 = $tmp3246;
        if (((panda$core$Bit) { list3231 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3247 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3249 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3231->type);
            ITable* $tmp3250 = ((panda$collections$Iterable*) $tmp3249)->$class->itable;
            while ($tmp3250->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3250 = $tmp3250->next;
            }
            $fn3252 $tmp3251 = $tmp3250->methods[0];
            panda$collections$Iterator* $tmp3253 = $tmp3251(((panda$collections$Iterable*) $tmp3249));
            intf$Iter3248 = $tmp3253;
            $l3254:;
            ITable* $tmp3256 = intf$Iter3248->$class->itable;
            while ($tmp3256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3256 = $tmp3256->next;
            }
            $fn3258 $tmp3257 = $tmp3256->methods[0];
            panda$core$Bit $tmp3259 = $tmp3257(intf$Iter3248);
            panda$core$Bit $tmp3260 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3259);
            if (!$tmp3260.value) goto $l3255;
            {
                ITable* $tmp3262 = intf$Iter3248->$class->itable;
                while ($tmp3262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3262 = $tmp3262->next;
                }
                $fn3264 $tmp3263 = $tmp3262->methods[1];
                panda$core$Object* $tmp3265 = $tmp3263(intf$Iter3248);
                intf3261 = ((org$pandalanguage$pandac$Type*) $tmp3265);
                panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3261->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3266 = $tmp3267.value;
                if (!$tmp3266) goto $l3268;
                panda$core$Object* $tmp3269 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3261->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3270 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3271 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3269), $tmp3270);
                $tmp3266 = $tmp3271.value;
                $l3268:;
                panda$core$Bit $tmp3272 = { $tmp3266 };
                if ($tmp3272.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3274 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3231, intf3261);
                    iterator3273 = $tmp3274;
                    panda$core$Object* $tmp3275 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3277 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3275), iterator3273, ((org$pandalanguage$pandac$ASTNode*) $tmp3276));
                    result3237 = $tmp3277;
                    found3247 = ((panda$core$Bit) { true });
                    goto $l3255;
                }
                }
                panda$core$Bit $tmp3279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3261->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3278 = $tmp3279.value;
                if (!$tmp3278) goto $l3280;
                panda$core$Object* $tmp3281 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3261->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3282 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3283 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3281), $tmp3282);
                $tmp3278 = $tmp3283.value;
                $l3280:;
                panda$core$Bit $tmp3284 = { $tmp3278 };
                if ($tmp3284.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3286 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3231, intf3261);
                    iterable3285 = $tmp3286;
                    panda$collections$Array* $tmp3289 = (panda$collections$Array*) malloc(40);
                    $tmp3289->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3289->refCount.value = 1;
                    panda$collections$Array$init($tmp3289);
                    org$pandalanguage$pandac$IRNode* $tmp3291 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3285, &$s3288, ((panda$collections$ListView*) $tmp3289));
                    iterator3287 = $tmp3291;
                    panda$core$Object* $tmp3292 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3293 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3294 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3292), iterator3287, ((org$pandalanguage$pandac$ASTNode*) $tmp3293));
                    result3237 = $tmp3294;
                    found3247 = ((panda$core$Bit) { true });
                    goto $l3255;
                }
                }
            }
            goto $l3254;
            $l3255:;
        }
    }
    }
    panda$core$Object* $tmp3295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3234->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3295);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3237;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3296;
    org$pandalanguage$pandac$IRNode* stmt3301;
    panda$collections$Array* children3304;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3297 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3298 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3297));
    org$pandalanguage$pandac$Type* $tmp3299 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3300 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3298, $tmp3299);
    test3296 = $tmp3300;
    if (((panda$core$Bit) { test3296 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3303 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3302));
    stmt3301 = $tmp3303;
    if (((panda$core$Bit) { stmt3301 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3305 = (panda$collections$Array*) malloc(40);
    $tmp3305->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3305->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3305, ((panda$core$Int64) { 2 }));
    children3304 = $tmp3305;
    panda$collections$Array$add$panda$collections$Array$T(children3304, ((panda$core$Object*) test3296));
    panda$collections$Array$add$panda$collections$Array$T(children3304, ((panda$core$Object*) stmt3301));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3307 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3307->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3307->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3307, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3304));
    return $tmp3307;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3309;
    org$pandalanguage$pandac$IRNode* test3312;
    panda$collections$Array* children3317;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3310 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3311 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3310));
    stmt3309 = $tmp3311;
    if (((panda$core$Bit) { stmt3309 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3313 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3314 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3313));
    org$pandalanguage$pandac$Type* $tmp3315 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3316 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3314, $tmp3315);
    test3312 = $tmp3316;
    if (((panda$core$Bit) { test3312 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3318 = (panda$collections$Array*) malloc(40);
    $tmp3318->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3318->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3318, ((panda$core$Int64) { 2 }));
    children3317 = $tmp3318;
    panda$collections$Array$add$panda$collections$Array$T(children3317, ((panda$core$Object*) stmt3309));
    panda$collections$Array$add$panda$collections$Array$T(children3317, ((panda$core$Object*) test3312));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3320 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3320->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3320->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3320, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3317));
    return $tmp3320;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3322;
    panda$collections$Array* children3325;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3324 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3323));
    stmt3322 = $tmp3324;
    if (((panda$core$Bit) { stmt3322 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3326 = (panda$collections$Array*) malloc(40);
    $tmp3326->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3326->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3326, ((panda$core$Int64) { 1 }));
    children3325 = $tmp3326;
    panda$collections$Array$add$panda$collections$Array$T(children3325, ((panda$core$Object*) stmt3322));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3328 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3328->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3328->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3328, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3325));
    return $tmp3328;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3330;
    panda$core$Int64 $match$970373331;
    org$pandalanguage$pandac$Type* type3333;
    org$pandalanguage$pandac$Variable* v3343;
    value3330 = p_rawValue;
    {
        $match$970373331 = p_t->kind;
        panda$core$Bit $tmp3332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$970373331, ((panda$core$Int64) { 106 }));
        if ($tmp3332.value) {
        {
            panda$core$Int64 $tmp3334 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3334, ((panda$core$Int64) { 1 }));
            if ($tmp3335.value) {
            {
                panda$core$Object* $tmp3336 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3337 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3336));
                org$pandalanguage$pandac$Type* $tmp3338 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp3337);
                type3333 = $tmp3338;
            }
            }
            else {
            if (((panda$core$Bit) { value3330 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3339 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3330);
                value3330 = $tmp3339;
                if (((panda$core$Bit) { value3330 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3340 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3330);
                type3333 = $tmp3340;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3333 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_t->offset, &$s3341);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3330 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3342 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3330, type3333);
                value3330 = $tmp3342;
                if (((panda$core$Bit) { value3330 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3344 = (org$pandalanguage$pandac$Variable*) malloc(56);
            $tmp3344->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3344->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3344, p_t->offset, ((panda$core$String*) p_t->payload), type3333);
            v3343 = $tmp3344;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3343));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3346 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3346->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3346->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3348 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3348->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3348->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3348, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3343)->offset, v3343->type, v3343);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3346, $tmp3348, value3330);
            return $tmp3346;
        }
        }
        else {
        panda$core$Bit $tmp3350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$970373331, ((panda$core$Int64) { 153 }));
        if ($tmp3350.value) {
        {
        }
        }
        else {
        {
        }
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* value3351;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3356;
    panda$collections$Array* children3359;
    panda$core$Int64 $tmp3352 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3352, ((panda$core$Int64) { 2 }));
    if ($tmp3353.value) {
    {
        panda$core$Object* $tmp3354 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3355 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3354));
        value3351 = $tmp3355;
        if (((panda$core$Bit) { value3351 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3351 = NULL;
    }
    }
    panda$core$Object* $tmp3357 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3358 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3357), value3351, NULL);
    target3356 = $tmp3358;
    if (((panda$core$Bit) { target3356 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3360 = (panda$collections$Array*) malloc(40);
    $tmp3360->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3360->refCount.value = 1;
    panda$collections$Array$init($tmp3360);
    children3359 = $tmp3360;
    panda$collections$Array$add$panda$collections$Array$T(children3359, ((panda$core$Object*) target3356->target));
    if (((panda$core$Bit) { target3356->value != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3359, ((panda$core$Object*) target3356->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3362 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3362->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3362->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3362, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children3359));
    return $tmp3362;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3364;
    panda$collections$Iterator* label$Iter3365;
    panda$core$String* label3377;
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3364 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3366 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3366 = $tmp3366->next;
            }
            $fn3368 $tmp3367 = $tmp3366->methods[0];
            panda$collections$Iterator* $tmp3369 = $tmp3367(((panda$collections$Iterable*) self->loops));
            label$Iter3365 = $tmp3369;
            $l3370:;
            ITable* $tmp3372 = label$Iter3365->$class->itable;
            while ($tmp3372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3372 = $tmp3372->next;
            }
            $fn3374 $tmp3373 = $tmp3372->methods[0];
            panda$core$Bit $tmp3375 = $tmp3373(label$Iter3365);
            panda$core$Bit $tmp3376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3375);
            if (!$tmp3376.value) goto $l3371;
            {
                ITable* $tmp3378 = label$Iter3365->$class->itable;
                while ($tmp3378->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3378 = $tmp3378->next;
                }
                $fn3380 $tmp3379 = $tmp3378->methods[1];
                panda$core$Object* $tmp3381 = $tmp3379(label$Iter3365);
                label3377 = ((panda$core$String*) $tmp3381);
                bool $tmp3382 = ((panda$core$Bit) { label3377 != NULL }).value;
                if (!$tmp3382) goto $l3383;
                panda$core$Bit $tmp3384 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3377, ((panda$core$String*) p_b->payload));
                $tmp3382 = $tmp3384.value;
                $l3383:;
                panda$core$Bit $tmp3385 = { $tmp3382 };
                if ($tmp3385.value) {
                {
                    found3364 = ((panda$core$Bit) { true });
                    goto $l3371;
                }
                }
            }
            goto $l3370;
            $l3371:;
        }
        panda$core$Bit $tmp3386 = panda$core$Bit$$NOT$R$panda$core$Bit(found3364);
        if ($tmp3386.value) {
        {
            panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3387, p_b->payload);
            panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
            panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3391, p_b->payload);
            panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, &$s3393);
            panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, $tmp3394);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, $tmp3395);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3396 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3396, ((panda$core$Int64) { 0 }));
    if ($tmp3397.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, &$s3398);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3399 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3399->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3399->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3399, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp3399;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3401;
    panda$collections$Iterator* label$Iter3402;
    panda$core$String* label3414;
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3401 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3403 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3403->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3403 = $tmp3403->next;
            }
            $fn3405 $tmp3404 = $tmp3403->methods[0];
            panda$collections$Iterator* $tmp3406 = $tmp3404(((panda$collections$Iterable*) self->loops));
            label$Iter3402 = $tmp3406;
            $l3407:;
            ITable* $tmp3409 = label$Iter3402->$class->itable;
            while ($tmp3409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3409 = $tmp3409->next;
            }
            $fn3411 $tmp3410 = $tmp3409->methods[0];
            panda$core$Bit $tmp3412 = $tmp3410(label$Iter3402);
            panda$core$Bit $tmp3413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3412);
            if (!$tmp3413.value) goto $l3408;
            {
                ITable* $tmp3415 = label$Iter3402->$class->itable;
                while ($tmp3415->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3415 = $tmp3415->next;
                }
                $fn3417 $tmp3416 = $tmp3415->methods[1];
                panda$core$Object* $tmp3418 = $tmp3416(label$Iter3402);
                label3414 = ((panda$core$String*) $tmp3418);
                bool $tmp3419 = ((panda$core$Bit) { label3414 != NULL }).value;
                if (!$tmp3419) goto $l3420;
                panda$core$Bit $tmp3421 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3414, ((panda$core$String*) p_c->payload));
                $tmp3419 = $tmp3421.value;
                $l3420:;
                panda$core$Bit $tmp3422 = { $tmp3419 };
                if ($tmp3422.value) {
                {
                    found3401 = ((panda$core$Bit) { true });
                    goto $l3408;
                }
                }
            }
            goto $l3407;
            $l3408:;
        }
        panda$core$Bit $tmp3423 = panda$core$Bit$$NOT$R$panda$core$Bit(found3401);
        if ($tmp3423.value) {
        {
            panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3424, p_c->payload);
            panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, &$s3426);
            panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3428, p_c->payload);
            panda$core$String* $tmp3431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3429, &$s3430);
            panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, $tmp3431);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3432);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3433 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3433, ((panda$core$Int64) { 0 }));
    if ($tmp3434.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, &$s3435);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3436 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3436->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3436->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3436, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp3436;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3444;
    panda$collections$Array* children3449;
    panda$core$Int64 $tmp3438 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3438, ((panda$core$Int64) { 1 }));
    if ($tmp3439.value) {
    {
        panda$core$Object* $tmp3440 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3441 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3442 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3440)->returnType, $tmp3441);
        if ($tmp3442.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3443);
            return NULL;
        }
        }
        panda$core$Object* $tmp3445 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3446 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3445));
        panda$core$Object* $tmp3447 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3448 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3446, ((org$pandalanguage$pandac$MethodDecl*) $tmp3447)->returnType);
        value3444 = $tmp3448;
        if (((panda$core$Bit) { value3444 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3450 = (panda$collections$Array*) malloc(40);
        $tmp3450->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3450->refCount.value = 1;
        panda$collections$Array$init($tmp3450);
        children3449 = $tmp3450;
        panda$collections$Array$add$panda$collections$Array$T(children3449, ((panda$core$Object*) value3444));
        org$pandalanguage$pandac$IRNode* $tmp3452 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3452->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3452->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3452, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children3449));
        return $tmp3452;
    }
    }
    panda$core$Object* $tmp3454 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3455 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3456 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3454)->returnType, $tmp3455);
    if ($tmp3456.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3457);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3458 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3458->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3458->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp3458, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp3458;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3460;
    org$pandalanguage$pandac$ClassDecl* bit3465;
    org$pandalanguage$pandac$Symbol* value3468;
    panda$collections$Array* fieldChildren3471;
    panda$collections$Array* children3477;
    org$pandalanguage$pandac$IRNode* msg3482;
    panda$core$Object* $tmp3461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3462 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3461));
    test3460 = $tmp3462;
    if (((panda$core$Bit) { test3460 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3463 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3464 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3460, $tmp3463);
    test3460 = $tmp3464;
    if (((panda$core$Bit) { test3460 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3466 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3467 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3466);
    bit3465 = $tmp3467;
    org$pandalanguage$pandac$Symbol* $tmp3470 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3465->symbolTable, &$s3469);
    value3468 = $tmp3470;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3468));
    panda$collections$Array* $tmp3472 = (panda$collections$Array*) malloc(40);
    $tmp3472->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3472->refCount.value = 1;
    panda$collections$Array$init($tmp3472);
    fieldChildren3471 = $tmp3472;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3471, ((panda$core$Object*) test3460));
    org$pandalanguage$pandac$IRNode* $tmp3474 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3474->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3474->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3476 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3474, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp3476, ((panda$core$Object*) value3468), ((panda$collections$ListView*) fieldChildren3471));
    test3460 = $tmp3474;
    panda$collections$Array* $tmp3478 = (panda$collections$Array*) malloc(40);
    $tmp3478->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3478->refCount.value = 1;
    panda$collections$Array$init($tmp3478);
    children3477 = $tmp3478;
    panda$collections$Array$add$panda$collections$Array$T(children3477, ((panda$core$Object*) test3460));
    panda$core$Int64 $tmp3480 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3480, ((panda$core$Int64) { 2 }));
    if ($tmp3481.value) {
    {
        panda$core$Object* $tmp3483 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3484 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3483));
        msg3482 = $tmp3484;
        if (((panda$core$Bit) { msg3482 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3485 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3486 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3482, $tmp3485);
        msg3482 = $tmp3486;
        if (((panda$core$Bit) { msg3482 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3477, ((panda$core$Object*) msg3482));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3487 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3487->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3487->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3487, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children3477));
    return $tmp3487;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$collections$Array* decls3489;
    panda$collections$Iterator* astDecl$Iter3492;
    org$pandalanguage$pandac$ASTNode* astDecl3504;
    org$pandalanguage$pandac$IRNode* decl3509;
    panda$core$Int64 kind3511;
    panda$core$Int64 $match$1032823512;
    panda$collections$Array* $tmp3490 = (panda$collections$Array*) malloc(40);
    $tmp3490->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3490->refCount.value = 1;
    panda$collections$Array$init($tmp3490);
    decls3489 = $tmp3490;
    {
        ITable* $tmp3493 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3493->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3493 = $tmp3493->next;
        }
        $fn3495 $tmp3494 = $tmp3493->methods[0];
        panda$collections$Iterator* $tmp3496 = $tmp3494(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3492 = $tmp3496;
        $l3497:;
        ITable* $tmp3499 = astDecl$Iter3492->$class->itable;
        while ($tmp3499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3499 = $tmp3499->next;
        }
        $fn3501 $tmp3500 = $tmp3499->methods[0];
        panda$core$Bit $tmp3502 = $tmp3500(astDecl$Iter3492);
        panda$core$Bit $tmp3503 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3502);
        if (!$tmp3503.value) goto $l3498;
        {
            ITable* $tmp3505 = astDecl$Iter3492->$class->itable;
            while ($tmp3505->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3505 = $tmp3505->next;
            }
            $fn3507 $tmp3506 = $tmp3505->methods[1];
            panda$core$Object* $tmp3508 = $tmp3506(astDecl$Iter3492);
            astDecl3504 = ((org$pandalanguage$pandac$ASTNode*) $tmp3508);
            org$pandalanguage$pandac$IRNode* $tmp3510 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3504);
            decl3509 = $tmp3510;
            if (((panda$core$Bit) { decl3509 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3489, ((panda$core$Object*) decl3509));
        }
        goto $l3497;
        $l3498:;
    }
    {
        $match$1032823512 = p_v->kind;
        panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032823512, ((panda$core$Int64) { 130 }));
        if ($tmp3513.value) {
        {
            kind3511 = ((panda$core$Int64) { 1017 });
        }
        }
        else {
        panda$core$Bit $tmp3514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032823512, ((panda$core$Int64) { 131 }));
        if ($tmp3514.value) {
        {
            kind3511 = ((panda$core$Int64) { 1018 });
        }
        }
        else {
        panda$core$Bit $tmp3515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032823512, ((panda$core$Int64) { 133 }));
        if ($tmp3515.value) {
        {
            kind3511 = ((panda$core$Int64) { 1020 });
        }
        }
        else {
        panda$core$Bit $tmp3516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032823512, ((panda$core$Int64) { 132 }));
        if ($tmp3516.value) {
        {
            kind3511 = ((panda$core$Int64) { 1019 });
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
    org$pandalanguage$pandac$IRNode* $tmp3517 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3517->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3517->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3517, kind3511, p_v->offset, ((panda$collections$ListView*) decls3489));
    return $tmp3517;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3519;
    panda$collections$Array* callChildren3522;
    org$pandalanguage$pandac$IRNode* testValue3525;
    org$pandalanguage$pandac$IRNode* $tmp3520 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3520->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3520->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3520, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target3519 = $tmp3520;
    panda$collections$Array* $tmp3523 = (panda$collections$Array*) malloc(40);
    $tmp3523->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3523->refCount.value = 1;
    panda$collections$Array$init($tmp3523);
    callChildren3522 = $tmp3523;
    org$pandalanguage$pandac$IRNode* $tmp3526 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3525 = $tmp3526;
    if (((panda$core$Bit) { testValue3525 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3522, ((panda$core$Object*) testValue3525));
    org$pandalanguage$pandac$IRNode* $tmp3528 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3519, &$s3527, ((panda$collections$ListView*) callChildren3522));
    return $tmp3528;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3529;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3533;
    org$pandalanguage$pandac$IRNode* nextTest3554;
    panda$collections$Array* callChildren3558;
    panda$collections$Array* statements3576;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3579;
    org$pandalanguage$pandac$IRNode* statement3599;
    panda$collections$Array* children3614;
    panda$core$Object* $tmp3530 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3531 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3530)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3532 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3531));
    test3529 = $tmp3532;
    if (((panda$core$Bit) { test3529 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3534 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3535 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3534)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3533, ((panda$core$Int64) { 1 }), $tmp3535, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3537 = $tmp3533.start.value;
    panda$core$Int64 i3536 = { $tmp3537 };
    int64_t $tmp3539 = $tmp3533.end.value;
    int64_t $tmp3540 = $tmp3533.step.value;
    bool $tmp3541 = $tmp3533.inclusive.value;
    bool $tmp3548 = $tmp3540 > 0;
    if ($tmp3548) goto $l3546; else goto $l3547;
    $l3546:;
    if ($tmp3541) goto $l3549; else goto $l3550;
    $l3549:;
    if ($tmp3537 <= $tmp3539) goto $l3542; else goto $l3544;
    $l3550:;
    if ($tmp3537 < $tmp3539) goto $l3542; else goto $l3544;
    $l3547:;
    if ($tmp3541) goto $l3551; else goto $l3552;
    $l3551:;
    if ($tmp3537 >= $tmp3539) goto $l3542; else goto $l3544;
    $l3552:;
    if ($tmp3537 > $tmp3539) goto $l3542; else goto $l3544;
    $l3542:;
    {
        panda$core$Object* $tmp3555 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3556 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3555)->children, i3536);
        org$pandalanguage$pandac$IRNode* $tmp3557 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3556));
        nextTest3554 = $tmp3557;
        if (((panda$core$Bit) { nextTest3554 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3559 = (panda$collections$Array*) malloc(40);
        $tmp3559->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3559->refCount.value = 1;
        panda$collections$Array$init($tmp3559);
        callChildren3558 = $tmp3559;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3558, ((panda$core$Object*) nextTest3554));
        org$pandalanguage$pandac$IRNode* $tmp3562 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3529, &$s3561, ((panda$collections$ListView*) callChildren3558));
        test3529 = $tmp3562;
        if (((panda$core$Bit) { test3529 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3545:;
    if ($tmp3548) goto $l3564; else goto $l3565;
    $l3564:;
    int64_t $tmp3566 = $tmp3539 - i3536.value;
    if ($tmp3541) goto $l3567; else goto $l3568;
    $l3567:;
    if ($tmp3566 >= $tmp3540) goto $l3563; else goto $l3544;
    $l3568:;
    if ($tmp3566 > $tmp3540) goto $l3563; else goto $l3544;
    $l3565:;
    int64_t $tmp3570 = i3536.value - $tmp3539;
    if ($tmp3541) goto $l3571; else goto $l3572;
    $l3571:;
    if ($tmp3570 >= -$tmp3540) goto $l3563; else goto $l3544;
    $l3572:;
    if ($tmp3570 > -$tmp3540) goto $l3563; else goto $l3544;
    $l3563:;
    i3536.value += $tmp3540;
    goto $l3542;
    $l3544:;
    org$pandalanguage$pandac$SymbolTable* $tmp3574 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3574->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3574->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3574, self->symbolTable);
    self->symbolTable = $tmp3574;
    panda$collections$Array* $tmp3577 = (panda$collections$Array*) malloc(40);
    $tmp3577->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3577->refCount.value = 1;
    panda$collections$Array$init($tmp3577);
    statements3576 = $tmp3577;
    panda$core$Int64 $tmp3580 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3579, ((panda$core$Int64) { 1 }), $tmp3580, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3582 = $tmp3579.start.value;
    panda$core$Int64 i3581 = { $tmp3582 };
    int64_t $tmp3584 = $tmp3579.end.value;
    int64_t $tmp3585 = $tmp3579.step.value;
    bool $tmp3586 = $tmp3579.inclusive.value;
    bool $tmp3593 = $tmp3585 > 0;
    if ($tmp3593) goto $l3591; else goto $l3592;
    $l3591:;
    if ($tmp3586) goto $l3594; else goto $l3595;
    $l3594:;
    if ($tmp3582 <= $tmp3584) goto $l3587; else goto $l3589;
    $l3595:;
    if ($tmp3582 < $tmp3584) goto $l3587; else goto $l3589;
    $l3592:;
    if ($tmp3586) goto $l3596; else goto $l3597;
    $l3596:;
    if ($tmp3582 >= $tmp3584) goto $l3587; else goto $l3589;
    $l3597:;
    if ($tmp3582 > $tmp3584) goto $l3587; else goto $l3589;
    $l3587:;
    {
        panda$core$Object* $tmp3600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3581);
        org$pandalanguage$pandac$IRNode* $tmp3601 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3600));
        statement3599 = $tmp3601;
        if (((panda$core$Bit) { statement3599 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3576, ((panda$core$Object*) statement3599));
    }
    $l3590:;
    if ($tmp3593) goto $l3603; else goto $l3604;
    $l3603:;
    int64_t $tmp3605 = $tmp3584 - i3581.value;
    if ($tmp3586) goto $l3606; else goto $l3607;
    $l3606:;
    if ($tmp3605 >= $tmp3585) goto $l3602; else goto $l3589;
    $l3607:;
    if ($tmp3605 > $tmp3585) goto $l3602; else goto $l3589;
    $l3604:;
    int64_t $tmp3609 = i3581.value - $tmp3584;
    if ($tmp3586) goto $l3610; else goto $l3611;
    $l3610:;
    if ($tmp3609 >= -$tmp3585) goto $l3602; else goto $l3589;
    $l3611:;
    if ($tmp3609 > -$tmp3585) goto $l3602; else goto $l3589;
    $l3602:;
    i3581.value += $tmp3585;
    goto $l3587;
    $l3589:;
    panda$core$Object* $tmp3613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3613);
    panda$collections$Array* $tmp3615 = (panda$collections$Array*) malloc(40);
    $tmp3615->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3615->refCount.value = 1;
    panda$collections$Array$init($tmp3615);
    children3614 = $tmp3615;
    panda$collections$Array$add$panda$collections$Array$T(children3614, ((panda$core$Object*) test3529));
    org$pandalanguage$pandac$IRNode* $tmp3617 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3617->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3617->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3617, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3576));
    panda$collections$Array$add$panda$collections$Array$T(children3614, ((panda$core$Object*) $tmp3617));
    org$pandalanguage$pandac$IRNode* $tmp3619 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3619->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3619->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3619, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children3614));
    return $tmp3619;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value3621;
    panda$collections$Array* children3625;
    org$pandalanguage$pandac$Variable* valueVar3628;
    panda$collections$Array* declChildren3635;
    panda$collections$Array* varChildren3640;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3647;
    org$pandalanguage$pandac$ASTNode* c3667;
    panda$core$Int64 $match$1063773669;
    org$pandalanguage$pandac$IRNode* w3671;
    panda$collections$Array* statements3674;
    panda$collections$Iterator* astStatement$Iter3677;
    org$pandalanguage$pandac$ASTNode* astStatement3689;
    org$pandalanguage$pandac$IRNode* stmt3694;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3709;
    panda$core$Object* $tmp3622 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3623 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3622));
    org$pandalanguage$pandac$IRNode* $tmp3624 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3623);
    value3621 = $tmp3624;
    if (((panda$core$Bit) { value3621 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3626 = (panda$collections$Array*) malloc(40);
    $tmp3626->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3626->refCount.value = 1;
    panda$collections$Array$init($tmp3626);
    children3625 = $tmp3626;
    org$pandalanguage$pandac$Variable* $tmp3629 = (org$pandalanguage$pandac$Variable*) malloc(56);
    $tmp3629->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3629->refCount.value = 1;
    panda$core$String* $tmp3632 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3631, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3632, &$s3633);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3629, p_m->offset, $tmp3634, value3621->type);
    valueVar3628 = $tmp3629;
    panda$collections$Array* $tmp3636 = (panda$collections$Array*) malloc(40);
    $tmp3636->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3636->refCount.value = 1;
    panda$collections$Array$init($tmp3636);
    declChildren3635 = $tmp3636;
    org$pandalanguage$pandac$IRNode* $tmp3638 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3638->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3638->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3638, ((panda$core$Int64) { 1016 }), value3621->offset, valueVar3628->type, valueVar3628);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3635, ((panda$core$Object*) $tmp3638));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3635, ((panda$core$Object*) value3621));
    panda$collections$Array* $tmp3641 = (panda$collections$Array*) malloc(40);
    $tmp3641->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3641->refCount.value = 1;
    panda$collections$Array$init($tmp3641);
    varChildren3640 = $tmp3641;
    org$pandalanguage$pandac$IRNode* $tmp3643 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3643->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3643->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3643, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3628)->offset, ((panda$collections$ListView*) declChildren3635));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3640, ((panda$core$Object*) $tmp3643));
    org$pandalanguage$pandac$IRNode* $tmp3645 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3645->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3645->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3645, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3628)->offset, ((panda$collections$ListView*) varChildren3640));
    panda$collections$Array$add$panda$collections$Array$T(children3625, ((panda$core$Object*) $tmp3645));
    panda$core$Int64 $tmp3648 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3647, ((panda$core$Int64) { 1 }), $tmp3648, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3650 = $tmp3647.start.value;
    panda$core$Int64 i3649 = { $tmp3650 };
    int64_t $tmp3652 = $tmp3647.end.value;
    int64_t $tmp3653 = $tmp3647.step.value;
    bool $tmp3654 = $tmp3647.inclusive.value;
    bool $tmp3661 = $tmp3653 > 0;
    if ($tmp3661) goto $l3659; else goto $l3660;
    $l3659:;
    if ($tmp3654) goto $l3662; else goto $l3663;
    $l3662:;
    if ($tmp3650 <= $tmp3652) goto $l3655; else goto $l3657;
    $l3663:;
    if ($tmp3650 < $tmp3652) goto $l3655; else goto $l3657;
    $l3660:;
    if ($tmp3654) goto $l3664; else goto $l3665;
    $l3664:;
    if ($tmp3650 >= $tmp3652) goto $l3655; else goto $l3657;
    $l3665:;
    if ($tmp3650 > $tmp3652) goto $l3655; else goto $l3657;
    $l3655:;
    {
        panda$core$Object* $tmp3668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3649);
        c3667 = ((org$pandalanguage$pandac$ASTNode*) $tmp3668);
        {
            $match$1063773669 = c3667->kind;
            panda$core$Bit $tmp3670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1063773669, ((panda$core$Int64) { 124 }));
            if ($tmp3670.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3672 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3628, c3667);
                w3671 = $tmp3672;
                if (((panda$core$Bit) { w3671 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3625, ((panda$core$Object*) w3671));
            }
            }
            else {
            panda$core$Bit $tmp3673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1063773669, ((panda$core$Int64) { 127 }));
            if ($tmp3673.value) {
            {
                panda$collections$Array* $tmp3675 = (panda$collections$Array*) malloc(40);
                $tmp3675->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3675->refCount.value = 1;
                panda$collections$Array$init($tmp3675);
                statements3674 = $tmp3675;
                {
                    ITable* $tmp3678 = ((panda$collections$Iterable*) c3667->children)->$class->itable;
                    while ($tmp3678->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3678 = $tmp3678->next;
                    }
                    $fn3680 $tmp3679 = $tmp3678->methods[0];
                    panda$collections$Iterator* $tmp3681 = $tmp3679(((panda$collections$Iterable*) c3667->children));
                    astStatement$Iter3677 = $tmp3681;
                    $l3682:;
                    ITable* $tmp3684 = astStatement$Iter3677->$class->itable;
                    while ($tmp3684->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3684 = $tmp3684->next;
                    }
                    $fn3686 $tmp3685 = $tmp3684->methods[0];
                    panda$core$Bit $tmp3687 = $tmp3685(astStatement$Iter3677);
                    panda$core$Bit $tmp3688 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3687);
                    if (!$tmp3688.value) goto $l3683;
                    {
                        ITable* $tmp3690 = astStatement$Iter3677->$class->itable;
                        while ($tmp3690->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3690 = $tmp3690->next;
                        }
                        $fn3692 $tmp3691 = $tmp3690->methods[1];
                        panda$core$Object* $tmp3693 = $tmp3691(astStatement$Iter3677);
                        astStatement3689 = ((org$pandalanguage$pandac$ASTNode*) $tmp3693);
                        org$pandalanguage$pandac$IRNode* $tmp3695 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3689);
                        stmt3694 = $tmp3695;
                        if (((panda$core$Bit) { stmt3694 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3674, ((panda$core$Object*) stmt3694));
                    }
                    goto $l3682;
                    $l3683:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3696 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3696->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3696->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3696, ((panda$core$Int64) { 1000 }), c3667->offset, ((panda$collections$ListView*) statements3674));
                panda$collections$Array$add$panda$collections$Array$T(children3625, ((panda$core$Object*) $tmp3696));
            }
            }
            else {
            {
            }
            }
            }
        }
    }
    $l3658:;
    if ($tmp3661) goto $l3699; else goto $l3700;
    $l3699:;
    int64_t $tmp3701 = $tmp3652 - i3649.value;
    if ($tmp3654) goto $l3702; else goto $l3703;
    $l3702:;
    if ($tmp3701 >= $tmp3653) goto $l3698; else goto $l3657;
    $l3703:;
    if ($tmp3701 > $tmp3653) goto $l3698; else goto $l3657;
    $l3700:;
    int64_t $tmp3705 = i3649.value - $tmp3652;
    if ($tmp3654) goto $l3706; else goto $l3707;
    $l3706:;
    if ($tmp3705 >= -$tmp3653) goto $l3698; else goto $l3657;
    $l3707:;
    if ($tmp3705 > -$tmp3653) goto $l3698; else goto $l3657;
    $l3698:;
    i3649.value += $tmp3653;
    goto $l3655;
    $l3657:;
    panda$core$Int64 $tmp3710 = panda$collections$Array$get_count$R$panda$core$Int64(children3625);
    panda$core$Int64 $tmp3711 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3710, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3709, $tmp3711, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3713 = $tmp3709.start.value;
    panda$core$Int64 i3712 = { $tmp3713 };
    int64_t $tmp3715 = $tmp3709.end.value;
    int64_t $tmp3716 = $tmp3709.step.value;
    bool $tmp3717 = $tmp3709.inclusive.value;
    bool $tmp3724 = $tmp3716 > 0;
    if ($tmp3724) goto $l3722; else goto $l3723;
    $l3722:;
    if ($tmp3717) goto $l3725; else goto $l3726;
    $l3725:;
    if ($tmp3713 <= $tmp3715) goto $l3718; else goto $l3720;
    $l3726:;
    if ($tmp3713 < $tmp3715) goto $l3718; else goto $l3720;
    $l3723:;
    if ($tmp3717) goto $l3727; else goto $l3728;
    $l3727:;
    if ($tmp3713 >= $tmp3715) goto $l3718; else goto $l3720;
    $l3728:;
    if ($tmp3713 > $tmp3715) goto $l3718; else goto $l3720;
    $l3718:;
    {
        panda$core$Int64 $tmp3730 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3712, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3625, $tmp3730);
        panda$core$Object* $tmp3732 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3625, i3712);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3731)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3732)));
        panda$core$Int64 $tmp3733 = panda$collections$Array$get_count$R$panda$core$Int64(children3625);
        panda$core$Int64 $tmp3734 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3733, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3625, $tmp3734);
    }
    $l3721:;
    if ($tmp3724) goto $l3736; else goto $l3737;
    $l3736:;
    int64_t $tmp3738 = $tmp3715 - i3712.value;
    if ($tmp3717) goto $l3739; else goto $l3740;
    $l3739:;
    if ($tmp3738 >= $tmp3716) goto $l3735; else goto $l3720;
    $l3740:;
    if ($tmp3738 > $tmp3716) goto $l3735; else goto $l3720;
    $l3737:;
    int64_t $tmp3742 = i3712.value - $tmp3715;
    if ($tmp3717) goto $l3743; else goto $l3744;
    $l3743:;
    if ($tmp3742 >= -$tmp3716) goto $l3735; else goto $l3720;
    $l3744:;
    if ($tmp3742 > -$tmp3716) goto $l3735; else goto $l3720;
    $l3735:;
    i3712.value += $tmp3716;
    goto $l3718;
    $l3720:;
    org$pandalanguage$pandac$IRNode* $tmp3746 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3746->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3746->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3746, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children3625));
    return $tmp3746;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    panda$core$Int64 $match$1075933748;
    {
        $match$1075933748 = p_s->kind;
        panda$core$Bit $tmp3749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 123 }));
        if ($tmp3749.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3750 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3750;
        }
        }
        else {
        panda$core$Bit $tmp3751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 103 }));
        if ($tmp3751.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3752 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp3753 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3752);
            return $tmp3753;
        }
        }
        else {
        panda$core$Bit $tmp3754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 126 }));
        if ($tmp3754.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3755 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3755;
        }
        }
        else {
        panda$core$Bit $tmp3756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 107 }));
        if ($tmp3756.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3757 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp3758 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3757);
            org$pandalanguage$pandac$IRNode* $tmp3759 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, $tmp3758);
            return $tmp3759;
        }
        }
        else {
        panda$core$Bit $tmp3760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 118 }));
        if ($tmp3760.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3761 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3761;
        }
        }
        else {
        panda$core$Bit $tmp3762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 119 }));
        if ($tmp3762.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3763 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3763;
        }
        }
        else {
        panda$core$Bit $tmp3764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 121 }));
        if ($tmp3764.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3765 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3765;
        }
        }
        else {
        panda$core$Bit $tmp3766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 120 }));
        if ($tmp3766.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3767 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3767;
        }
        }
        else {
        panda$core$Bit $tmp3768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 122 }));
        if ($tmp3768.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3769 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3769;
        }
        }
        else {
        panda$core$Bit $tmp3770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 125 }));
        if ($tmp3770.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3771 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3771;
        }
        }
        else {
        panda$core$Bit $tmp3772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 134 }));
        if ($tmp3772.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3773 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3773;
        }
        }
        else {
        panda$core$Bit $tmp3774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 135 }));
        if ($tmp3774.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3775 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3775;
        }
        }
        else {
        panda$core$Bit $tmp3776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 136 }));
        if ($tmp3776.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3777 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3777;
        }
        }
        else {
        panda$core$Bit $tmp3781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 130 }));
        bool $tmp3780 = $tmp3781.value;
        if ($tmp3780) goto $l3782;
        panda$core$Bit $tmp3783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 131 }));
        $tmp3780 = $tmp3783.value;
        $l3782:;
        panda$core$Bit $tmp3784 = { $tmp3780 };
        bool $tmp3779 = $tmp3784.value;
        if ($tmp3779) goto $l3785;
        panda$core$Bit $tmp3786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 132 }));
        $tmp3779 = $tmp3786.value;
        $l3785:;
        panda$core$Bit $tmp3787 = { $tmp3779 };
        bool $tmp3778 = $tmp3787.value;
        if ($tmp3778) goto $l3788;
        panda$core$Bit $tmp3789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075933748, ((panda$core$Int64) { 133 }));
        $tmp3778 = $tmp3789.value;
        $l3788:;
        panda$core$Bit $tmp3790 = { $tmp3778 };
        if ($tmp3790.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3791 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3791;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old3792;
    org$pandalanguage$pandac$SymbolTable* symbols3794;
    panda$collections$Iterator* p$Iter3797;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3809;
    panda$collections$Array* fieldInitializers3816;
    panda$collections$Iterator* f$Iter3820;
    org$pandalanguage$pandac$FieldDecl* f3833;
    panda$collections$Array* children3843;
    org$pandalanguage$pandac$IRNode* fieldRef3850;
    org$pandalanguage$pandac$IRNode* compiled3855;
    panda$collections$Array* children3859;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old3792 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp3793 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp3793;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$SymbolTable* $tmp3795 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3795->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3795->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3795, self->symbolTable);
    symbols3794 = $tmp3795;
    {
        ITable* $tmp3798 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3798->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3798 = $tmp3798->next;
        }
        $fn3800 $tmp3799 = $tmp3798->methods[0];
        panda$collections$Iterator* $tmp3801 = $tmp3799(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3797 = $tmp3801;
        $l3802:;
        ITable* $tmp3804 = p$Iter3797->$class->itable;
        while ($tmp3804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3804 = $tmp3804->next;
        }
        $fn3806 $tmp3805 = $tmp3804->methods[0];
        panda$core$Bit $tmp3807 = $tmp3805(p$Iter3797);
        panda$core$Bit $tmp3808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3807);
        if (!$tmp3808.value) goto $l3803;
        {
            ITable* $tmp3810 = p$Iter3797->$class->itable;
            while ($tmp3810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3810 = $tmp3810->next;
            }
            $fn3812 $tmp3811 = $tmp3810->methods[1];
            panda$core$Object* $tmp3813 = $tmp3811(p$Iter3797);
            p3809 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3813);
            org$pandalanguage$pandac$Variable* $tmp3814 = (org$pandalanguage$pandac$Variable*) malloc(56);
            $tmp3814->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3814->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp3814, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, p3809->name, p3809->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols3794, ((org$pandalanguage$pandac$Symbol*) $tmp3814));
        }
        goto $l3802;
        $l3803:;
    }
    self->symbolTable = symbols3794;
    panda$collections$Array* $tmp3817 = (panda$collections$Array*) malloc(40);
    $tmp3817->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3817->refCount.value = 1;
    panda$collections$Array$init($tmp3817);
    fieldInitializers3816 = $tmp3817;
    panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp3819.value) {
    {
        {
            panda$core$Object* $tmp3821 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp3822 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3821)->fields)->$class->itable;
            while ($tmp3822->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3822 = $tmp3822->next;
            }
            $fn3824 $tmp3823 = $tmp3822->methods[0];
            panda$collections$Iterator* $tmp3825 = $tmp3823(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3821)->fields));
            f$Iter3820 = $tmp3825;
            $l3826:;
            ITable* $tmp3828 = f$Iter3820->$class->itable;
            while ($tmp3828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3828 = $tmp3828->next;
            }
            $fn3830 $tmp3829 = $tmp3828->methods[0];
            panda$core$Bit $tmp3831 = $tmp3829(f$Iter3820);
            panda$core$Bit $tmp3832 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3831);
            if (!$tmp3832.value) goto $l3827;
            {
                ITable* $tmp3834 = f$Iter3820->$class->itable;
                while ($tmp3834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3834 = $tmp3834->next;
                }
                $fn3836 $tmp3835 = $tmp3834->methods[1];
                panda$core$Object* $tmp3837 = $tmp3835(f$Iter3820);
                f3833 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3837);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f3833);
                panda$core$Bit $tmp3839 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f3833->annotations);
                panda$core$Bit $tmp3840 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3839);
                bool $tmp3838 = $tmp3840.value;
                if (!$tmp3838) goto $l3841;
                $tmp3838 = ((panda$core$Bit) { f3833->value != NULL }).value;
                $l3841:;
                panda$core$Bit $tmp3842 = { $tmp3838 };
                if ($tmp3842.value) {
                {
                    panda$collections$Array* $tmp3844 = (panda$collections$Array*) malloc(40);
                    $tmp3844->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3844->refCount.value = 1;
                    panda$collections$Array$init($tmp3844);
                    children3843 = $tmp3844;
                    org$pandalanguage$pandac$IRNode* $tmp3846 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3846->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3846->refCount.value = 1;
                    panda$core$Object* $tmp3848 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp3849 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp3848));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3846, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp3849);
                    panda$collections$Array$add$panda$collections$Array$T(children3843, ((panda$core$Object*) $tmp3846));
                    org$pandalanguage$pandac$IRNode* $tmp3851 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3851->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3851->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3851, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f3833->type, ((panda$core$Object*) f3833), ((panda$collections$ListView*) children3843));
                    fieldRef3850 = $tmp3851;
                    panda$collections$Array$clear(children3843);
                    panda$collections$Array$add$panda$collections$Array$T(children3843, ((panda$core$Object*) fieldRef3850));
                    panda$collections$Array$add$panda$collections$Array$T(children3843, ((panda$core$Object*) f3833->value));
                    org$pandalanguage$pandac$IRNode* $tmp3853 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3853->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3853->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3853, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f3833)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children3843));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers3816, ((panda$core$Object*) $tmp3853));
                }
                }
            }
            goto $l3826;
            $l3827:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3856 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled3855 = $tmp3856;
    if (((panda$core$Bit) { compiled3855 != NULL }).value) {
    {
        panda$core$Int64 $tmp3857 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers3816);
        panda$core$Bit $tmp3858 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3857, ((panda$core$Int64) { 0 }));
        if ($tmp3858.value) {
        {
            panda$collections$Array* $tmp3860 = (panda$collections$Array*) malloc(40);
            $tmp3860->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3860->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp3860, ((panda$collections$ListView*) fieldInitializers3816));
            children3859 = $tmp3860;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children3859, ((panda$collections$CollectionView*) compiled3855->children));
            org$pandalanguage$pandac$IRNode* $tmp3862 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3862->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3862->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3862, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children3859));
            compiled3855 = $tmp3862;
        }
        }
    }
    }
    self->symbolTable = old3792;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp3864 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp3864.value) {
    {
        p_m->compiledBody = compiled3855;
    }
    }
    return compiled3855;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled3865;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3866 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled3865 = $tmp3866;
        if (((panda$core$Bit) { compiled3865 != NULL }).value) {
        {
            ITable* $tmp3867 = self->codeGenerator->$class->itable;
            while ($tmp3867->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp3867 = $tmp3867->next;
            }
            $fn3869 $tmp3868 = $tmp3867->methods[3];
            $tmp3868(self->codeGenerator, p_m, compiled3865);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp3870 = self->codeGenerator->$class->itable;
        while ($tmp3870->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3870 = $tmp3870->next;
        }
        $fn3872 $tmp3871 = $tmp3870->methods[2];
        $tmp3871(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter3873;
    org$pandalanguage$pandac$ClassDecl* inner3885;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp3874 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp3874->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3874 = $tmp3874->next;
        }
        $fn3876 $tmp3875 = $tmp3874->methods[0];
        panda$collections$Iterator* $tmp3877 = $tmp3875(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter3873 = $tmp3877;
        $l3878:;
        ITable* $tmp3880 = inner$Iter3873->$class->itable;
        while ($tmp3880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3880 = $tmp3880->next;
        }
        $fn3882 $tmp3881 = $tmp3880->methods[0];
        panda$core$Bit $tmp3883 = $tmp3881(inner$Iter3873);
        panda$core$Bit $tmp3884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3883);
        if (!$tmp3884.value) goto $l3879;
        {
            ITable* $tmp3886 = inner$Iter3873->$class->itable;
            while ($tmp3886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3886 = $tmp3886->next;
            }
            $fn3888 $tmp3887 = $tmp3886->methods[1];
            panda$core$Object* $tmp3889 = $tmp3887(inner$Iter3873);
            inner3885 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3889);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner3885);
        }
        goto $l3878;
        $l3879:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old3897;
    panda$collections$Iterator* m$Iter3902;
    org$pandalanguage$pandac$MethodDecl* m3914;
    org$pandalanguage$pandac$ClassDecl* next3924;
    self->compiling = p_cl;
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp3890 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp3890.value) {
    {
        ITable* $tmp3891 = self->codeGenerator->$class->itable;
        while ($tmp3891->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3891 = $tmp3891->next;
        }
        $fn3893 $tmp3892 = $tmp3891->methods[1];
        $tmp3892(self->codeGenerator, p_cl);
        ITable* $tmp3894 = self->codeGenerator->$class->itable;
        while ($tmp3894->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3894 = $tmp3894->next;
        }
        $fn3896 $tmp3895 = $tmp3894->methods[4];
        $tmp3895(self->codeGenerator, p_cl);
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    old3897 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp3898 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp3898;
    ITable* $tmp3899 = self->codeGenerator->$class->itable;
    while ($tmp3899->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp3899 = $tmp3899->next;
    }
    $fn3901 $tmp3900 = $tmp3899->methods[1];
    $tmp3900(self->codeGenerator, p_cl);
    {
        ITable* $tmp3903 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp3903->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3903 = $tmp3903->next;
        }
        $fn3905 $tmp3904 = $tmp3903->methods[0];
        panda$collections$Iterator* $tmp3906 = $tmp3904(((panda$collections$Iterable*) p_cl->methods));
        m$Iter3902 = $tmp3906;
        $l3907:;
        ITable* $tmp3909 = m$Iter3902->$class->itable;
        while ($tmp3909->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3909 = $tmp3909->next;
        }
        $fn3911 $tmp3910 = $tmp3909->methods[0];
        panda$core$Bit $tmp3912 = $tmp3910(m$Iter3902);
        panda$core$Bit $tmp3913 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3912);
        if (!$tmp3913.value) goto $l3908;
        {
            ITable* $tmp3915 = m$Iter3902->$class->itable;
            while ($tmp3915->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3915 = $tmp3915->next;
            }
            $fn3917 $tmp3916 = $tmp3915->methods[1];
            panda$core$Object* $tmp3918 = $tmp3916(m$Iter3902);
            m3914 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3918);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m3914);
        }
        goto $l3907;
        $l3908:;
    }
    ITable* $tmp3919 = self->codeGenerator->$class->itable;
    while ($tmp3919->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp3919 = $tmp3919->next;
    }
    $fn3921 $tmp3920 = $tmp3919->methods[4];
    $tmp3920(self->codeGenerator, p_cl);
    self->symbolTable = old3897;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp3922 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp3923 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3922, ((panda$core$Int64) { 0 }));
    if ($tmp3923.value) {
    {
        panda$core$Object* $tmp3925 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next3924 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3925);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next3924);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result3926;
    org$pandalanguage$pandac$ASTNode* parsed3931;
    panda$collections$Iterator* cl$Iter3935;
    org$pandalanguage$pandac$ClassDecl* cl3947;
    panda$core$Object* $tmp3927 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result3926 = ((panda$collections$ListView*) $tmp3927);
    if (((panda$core$Bit) { result3926 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp3928 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp3929 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn3930) self->parser->$class->vtable[2])(self->parser, $tmp3928, $tmp3929);
        org$pandalanguage$pandac$ASTNode* $tmp3933 = (($fn3932) self->parser->$class->vtable[68])(self->parser);
        parsed3931 = $tmp3933;
        if (((panda$core$Bit) { parsed3931 != NULL }).value) {
        {
            panda$collections$ListView* $tmp3934 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed3931);
            result3926 = $tmp3934;
            {
                ITable* $tmp3936 = ((panda$collections$Iterable*) result3926)->$class->itable;
                while ($tmp3936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp3936 = $tmp3936->next;
                }
                $fn3938 $tmp3937 = $tmp3936->methods[0];
                panda$collections$Iterator* $tmp3939 = $tmp3937(((panda$collections$Iterable*) result3926));
                cl$Iter3935 = $tmp3939;
                $l3940:;
                ITable* $tmp3942 = cl$Iter3935->$class->itable;
                while ($tmp3942->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3942 = $tmp3942->next;
                }
                $fn3944 $tmp3943 = $tmp3942->methods[0];
                panda$core$Bit $tmp3945 = $tmp3943(cl$Iter3935);
                panda$core$Bit $tmp3946 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3945);
                if (!$tmp3946.value) goto $l3941;
                {
                    ITable* $tmp3948 = cl$Iter3935->$class->itable;
                    while ($tmp3948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3948 = $tmp3948->next;
                    }
                    $fn3950 $tmp3949 = $tmp3948->methods[1];
                    panda$core$Object* $tmp3951 = $tmp3949(cl$Iter3935);
                    cl3947 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3951);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl3947)->name), ((panda$core$Object*) cl3947));
                }
                goto $l3940;
                $l3941:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp3952 = (panda$collections$Array*) malloc(40);
            $tmp3952->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3952->refCount.value = 1;
            panda$collections$Array$init($tmp3952);
            result3926 = ((panda$collections$ListView*) $tmp3952);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result3926));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return result3926;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes3954;
    panda$collections$Iterator* cl$Iter3956;
    org$pandalanguage$pandac$ClassDecl* cl3968;
    panda$collections$ListView* $tmp3955 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes3954 = $tmp3955;
    {
        ITable* $tmp3957 = ((panda$collections$Iterable*) classes3954)->$class->itable;
        while ($tmp3957->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3957 = $tmp3957->next;
        }
        $fn3959 $tmp3958 = $tmp3957->methods[0];
        panda$collections$Iterator* $tmp3960 = $tmp3958(((panda$collections$Iterable*) classes3954));
        cl$Iter3956 = $tmp3960;
        $l3961:;
        ITable* $tmp3963 = cl$Iter3956->$class->itable;
        while ($tmp3963->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3963 = $tmp3963->next;
        }
        $fn3965 $tmp3964 = $tmp3963->methods[0];
        panda$core$Bit $tmp3966 = $tmp3964(cl$Iter3956);
        panda$core$Bit $tmp3967 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3966);
        if (!$tmp3967.value) goto $l3962;
        {
            ITable* $tmp3969 = cl$Iter3956->$class->itable;
            while ($tmp3969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3969 = $tmp3969->next;
            }
            $fn3971 $tmp3970 = $tmp3969->methods[1];
            panda$core$Object* $tmp3972 = $tmp3970(cl$Iter3956);
            cl3968 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3972);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl3968);
        }
        goto $l3961;
        $l3962:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source3973;
    panda$core$Int64 line3976;
    panda$core$Int64 column3977;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3978;
    panda$core$Char8 $match$1129743997;
    panda$core$Char8 $tmp4000;
    panda$core$Char8 $tmp4003;
    panda$core$Object* $tmp3974 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$io$InputStream* $tmp3975 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp3974));
    source3973 = $tmp3975;
    line3976 = ((panda$core$Int64) { 1 });
    column3977 = ((panda$core$Int64) { 1 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3978, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3980 = $tmp3978.start.value;
    panda$core$Int64 i3979 = { $tmp3980 };
    int64_t $tmp3982 = $tmp3978.end.value;
    int64_t $tmp3983 = $tmp3978.step.value;
    bool $tmp3984 = $tmp3978.inclusive.value;
    bool $tmp3991 = $tmp3983 > 0;
    if ($tmp3991) goto $l3989; else goto $l3990;
    $l3989:;
    if ($tmp3984) goto $l3992; else goto $l3993;
    $l3992:;
    if ($tmp3980 <= $tmp3982) goto $l3985; else goto $l3987;
    $l3993:;
    if ($tmp3980 < $tmp3982) goto $l3985; else goto $l3987;
    $l3990:;
    if ($tmp3984) goto $l3994; else goto $l3995;
    $l3994:;
    if ($tmp3980 >= $tmp3982) goto $l3985; else goto $l3987;
    $l3995:;
    if ($tmp3980 > $tmp3982) goto $l3985; else goto $l3987;
    $l3985:;
    {
        {
            panda$core$Char8$nullable $tmp3999 = (($fn3998) source3973->$class->vtable[10])(source3973);
            $match$1129743997 = ((panda$core$Char8) $tmp3999.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4000, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4001 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1129743997, $tmp4000);
            if ($tmp4001.value) {
            {
                panda$core$Int64 $tmp4002 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line3976, ((panda$core$Int64) { 1 }));
                line3976 = $tmp4002;
                column3977 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4003, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4004 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1129743997, $tmp4003);
            if ($tmp4004.value) {
            {
                panda$core$Int64 $tmp4005 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column3977, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4006 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4005);
                panda$core$Int64 $tmp4007 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column3977, $tmp4006);
                column3977 = $tmp4007;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4008 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column3977, ((panda$core$Int64) { 1 }));
                column3977 = $tmp4008;
            }
            }
            }
        }
    }
    $l3988:;
    if ($tmp3991) goto $l4010; else goto $l4011;
    $l4010:;
    int64_t $tmp4012 = $tmp3982 - i3979.value;
    if ($tmp3984) goto $l4013; else goto $l4014;
    $l4013:;
    if ($tmp4012 >= $tmp3983) goto $l4009; else goto $l3987;
    $l4014:;
    if ($tmp4012 > $tmp3983) goto $l4009; else goto $l3987;
    $l4011:;
    int64_t $tmp4016 = i3979.value - $tmp3982;
    if ($tmp3984) goto $l4017; else goto $l4018;
    $l4017:;
    if ($tmp4016 >= -$tmp3983) goto $l4009; else goto $l3987;
    $l4018:;
    if ($tmp4016 > -$tmp3983) goto $l4009; else goto $l3987;
    $l4009:;
    i3979.value += $tmp3983;
    goto $l3985;
    $l3987:;
    (($fn4020) ((panda$core$Object*) source3973)->$class->vtable[1])(((panda$core$Object*) source3973));
    org$pandalanguage$pandac$Position* $tmp4021 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4021->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4021->refCount.value = 1;
    panda$core$Object* $tmp4023 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$core$String* $tmp4024 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4023));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4021, $tmp4024, line3976, column3977);
    return $tmp4021;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4025 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, p_offset);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4025, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4026 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4026;
        panda$core$String* $tmp4028 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4027, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4028, &$s4029);
        panda$core$String* $tmp4031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4030, p_msg);
        panda$core$String* $tmp4033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4031, &$s4032);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4033));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4034 = self->codeGenerator->$class->itable;
    while ($tmp4034->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4034 = $tmp4034->next;
    }
    $fn4036 $tmp4035 = $tmp4034->methods[5];
    $tmp4035(self->codeGenerator);
}

