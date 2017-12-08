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
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
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

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$genericParameterCount$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn121)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn162)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn297)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn303)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn309)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn353)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn359)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn365)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn378)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn384)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn424)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn430)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn436)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn452)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn458)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn464)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn482)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn488)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn494)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn561)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn570)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn592)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn615)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn621)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn627)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn635)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn641)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn647)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn658)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn664)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn670)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn692)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn704)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn753)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn765)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn778)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn784)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn790)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn804)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn810)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn816)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn831)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn837)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn843)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn857)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn863)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn869)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn882)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn888)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn894)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn949)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn955)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn961)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn968)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn974)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn980)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1000)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1006)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1012)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1097)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1201)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1207)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1213)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1331)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1337)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1343)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1471)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1477)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1483)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1530)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1536)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1542)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1632)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1659)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1686)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1703)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1709)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1715)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1727)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1784)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1807)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1883)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1902)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1908)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1914)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1945)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1951)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1957)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1994)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2000)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2006)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2029)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2035)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2041)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2431)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2437)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2443)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2579)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2585)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2591)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2814)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2830)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2836)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2842)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2944)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2950)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3145)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3275)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3281)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3287)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3313)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3319)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3325)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3429)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3435)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3441)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3609)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3615)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3621)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3699)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3705)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3711)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3772)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3778)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3784)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3848)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3854)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3860)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3899)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3905)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3911)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3923)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3929)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3935)(panda$collections$Iterator*);
typedef void (*$fn3968)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3971)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn3975)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3981)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3987)(panda$collections$Iterator*);
typedef void (*$fn3992)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3995)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4000)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4004)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4010)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4016)(panda$collections$Iterator*);
typedef void (*$fn4020)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4031)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4033)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4039)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4045)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4051)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4060)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4066)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4072)(panda$collections$Iterator*);
typedef panda$core$Char8$nullable (*$fn4099)(panda$io$InputStream*);
typedef void (*$fn4121)(panda$core$Object*);
typedef void (*$fn4137)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 1 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20", 12, 1 };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, 1 };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
panda$core$Int64 org$pandalanguage$pandac$Compiler$genericParameterCount$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    switch (p_type->typeKind.value) {
        case 21:
        {
            panda$core$Int64 $tmp155 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Int64 $tmp156 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp155, ((panda$core$Int64) { 1 }));
            return $tmp156;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp158 = org$pandalanguage$pandac$Compiler$genericParameterCount$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp157));
            return $tmp158;
        }
        break;
        default:
        {
            return ((panda$core$Int64) { 0 });
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expected159;
    panda$core$Int64 found164;
    panda$core$String* s167;
    ITable* $tmp160 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp160->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp160 = $tmp160->next;
    }
    $fn162 $tmp161 = $tmp160->methods[0];
    panda$core$Int64 $tmp163 = $tmp161(((panda$collections$CollectionView*) p_cl->parameters));
    expected159 = $tmp163;
    panda$core$Int64 $tmp165 = org$pandalanguage$pandac$Compiler$genericParameterCount$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_type);
    found164 = $tmp165;
    panda$core$Bit $tmp166 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expected159, found164);
    if ($tmp166.value) {
    {
        panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expected159, ((panda$core$Int64) { 1 }));
        if ($tmp168.value) {
        {
            s167 = &$s169;
        }
        }
        else {
        {
            s167 = &$s170;
        }
        }
        panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s171, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp172, &$s173);
        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp174, ((panda$core$Object*) wrap_panda$core$Int64(expected159)));
        panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
        panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, s167);
        panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s179);
        panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp180, ((panda$core$Object*) wrap_panda$core$Int64(found164)));
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp181);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved182;
    org$pandalanguage$pandac$Symbol* s187;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp191;
    panda$collections$Array* subtypes193;
    panda$collections$Array* subtypes209;
    org$pandalanguage$pandac$Type* sub212;
    panda$collections$Array* subtypes222;
    org$pandalanguage$pandac$Type* base225;
    panda$core$MutableString* name228;
    panda$core$String* separator233;
    panda$core$Range$LTpanda$core$Int64$GT $tmp235;
    org$pandalanguage$pandac$Type* resolved255;
    org$pandalanguage$pandac$Type* result271;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp183 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved182 = $tmp183;
            if (((panda$core$Bit) { resolved182 != NULL }).value) {
            {
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp184 = org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, resolved182, p_type);
                    panda$core$Bit $tmp185 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp184);
                    if ($tmp185.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved182);
                return $tmp186;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp188 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s187 = $tmp188;
            if (((panda$core$Bit) { s187 != NULL }).value) {
            {
                switch (s187->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp189 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp189->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp189->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp189, ((org$pandalanguage$pandac$Alias*) s187)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$core$Bit) { true }));
                        return $tmp189;
                    }
                    break;
                    case 203:
                    {
                        gp191 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s187);
                        org$pandalanguage$pandac$ClassDecl* $tmp192 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, gp191->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp192);
                        panda$collections$Array* $tmp194 = (panda$collections$Array*) malloc(40);
                        $tmp194->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp194->refCount.value = 1;
                        panda$collections$Array$init($tmp194);
                        subtypes193 = $tmp194;
                        panda$collections$Array$add$panda$collections$Array$T(subtypes193, ((panda$core$Object*) gp191->bound));
                        org$pandalanguage$pandac$Type* $tmp196 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp196->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp196->refCount.value = 1;
                        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(gp191->owner, &$s198);
                        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, ((org$pandalanguage$pandac$Symbol*) gp191)->name);
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp196, $tmp200, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes193), ((panda$core$Bit) { true }));
                        return $tmp196;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s187);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp201 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s187));
                        return $tmp201;
                    }
                    break;
                }
            }
            }
            org$pandalanguage$pandac$Position* $tmp202 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset);
            panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s203, ((panda$core$Object*) p_type));
            panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s205);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp202, $tmp206);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp207 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp207, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp208.value);
            panda$collections$Array* $tmp210 = (panda$collections$Array*) malloc(40);
            $tmp210->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp210->refCount.value = 1;
            panda$collections$Array$init($tmp210);
            subtypes209 = $tmp210;
            panda$core$Object* $tmp213 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp214 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp213));
            sub212 = $tmp214;
            if (((panda$core$Bit) { sub212 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes209, ((panda$core$Object*) sub212));
            org$pandalanguage$pandac$Type* $tmp215 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp215->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp215->refCount.value = 1;
            panda$core$Object* $tmp217 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes209, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp217))->name, &$s218);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp215, $tmp219, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes209), ((panda$core$Bit) { true }));
            return $tmp215;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp220 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp221 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp220, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp221.value);
            panda$collections$Array* $tmp223 = (panda$collections$Array*) malloc(40);
            $tmp223->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp223->refCount.value = 1;
            panda$collections$Array$init($tmp223);
            subtypes222 = $tmp223;
            panda$core$Object* $tmp226 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp227 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp226), ((panda$core$Bit) { false }));
            base225 = $tmp227;
            if (((panda$core$Bit) { base225 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes222, ((panda$core$Object*) base225));
            panda$core$MutableString* $tmp229 = (panda$core$MutableString*) malloc(40);
            $tmp229->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp229->refCount.value = 1;
            panda$core$Object* $tmp231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes222, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp229, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp231))->name);
            name228 = $tmp229;
            panda$core$MutableString$append$panda$core$String(name228, &$s232);
            separator233 = &$s234;
            panda$core$Int64 $tmp236 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp235, ((panda$core$Int64) { 1 }), $tmp236, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp238 = $tmp235.start.value;
            panda$core$Int64 i237 = { $tmp238 };
            int64_t $tmp240 = $tmp235.end.value;
            int64_t $tmp241 = $tmp235.step.value;
            bool $tmp242 = $tmp235.inclusive.value;
            bool $tmp249 = $tmp241 > 0;
            if ($tmp249) goto $l247; else goto $l248;
            $l247:;
            if ($tmp242) goto $l250; else goto $l251;
            $l250:;
            if ($tmp238 <= $tmp240) goto $l243; else goto $l245;
            $l251:;
            if ($tmp238 < $tmp240) goto $l243; else goto $l245;
            $l248:;
            if ($tmp242) goto $l252; else goto $l253;
            $l252:;
            if ($tmp238 >= $tmp240) goto $l243; else goto $l245;
            $l253:;
            if ($tmp238 > $tmp240) goto $l243; else goto $l245;
            $l243:;
            {
                panda$core$Object* $tmp256 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, i237);
                org$pandalanguage$pandac$Type* $tmp257 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp256));
                resolved255 = $tmp257;
                if (((panda$core$Bit) { resolved255 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes222, ((panda$core$Object*) resolved255));
                panda$core$MutableString$append$panda$core$String(name228, separator233);
                panda$core$MutableString$append$panda$core$String(name228, ((org$pandalanguage$pandac$Symbol*) resolved255)->name);
                separator233 = &$s258;
            }
            $l246:;
            if ($tmp249) goto $l260; else goto $l261;
            $l260:;
            int64_t $tmp262 = $tmp240 - i237.value;
            if ($tmp242) goto $l263; else goto $l264;
            $l263:;
            if ($tmp262 >= $tmp241) goto $l259; else goto $l245;
            $l264:;
            if ($tmp262 > $tmp241) goto $l259; else goto $l245;
            $l261:;
            int64_t $tmp266 = i237.value - $tmp240;
            if ($tmp242) goto $l267; else goto $l268;
            $l267:;
            if ($tmp266 >= -$tmp241) goto $l259; else goto $l245;
            $l268:;
            if ($tmp266 > -$tmp241) goto $l259; else goto $l245;
            $l259:;
            i237.value += $tmp241;
            goto $l243;
            $l245:;
            panda$core$MutableString$append$panda$core$String(name228, &$s270);
            org$pandalanguage$pandac$Type* $tmp272 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp272->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp272->refCount.value = 1;
            panda$core$String* $tmp274 = panda$core$MutableString$convert$R$panda$core$String(name228);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp272, $tmp274, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes222), ((panda$core$Bit) { true }));
            result271 = $tmp272;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp275 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(result271->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp276 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp275));
                panda$core$Bit $tmp277 = org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, $tmp276, result271);
                panda$core$Bit $tmp278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp277);
                if ($tmp278.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result271;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp279 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp279;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old280;
    panda$collections$Iterator* m$Iter294;
    org$pandalanguage$pandac$MethodDecl* m306;
    panda$core$Range$LTpanda$core$Int64$GT $tmp316;
    org$pandalanguage$pandac$Type* resolved336;
    panda$collections$Iterator* p$Iter350;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p362;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old280 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp281 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_cl->rawSuper);
        p_cl->rawSuper = $tmp281;
        bool $tmp283 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
        if (!$tmp283) goto $l284;
        panda$core$Bit $tmp285 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
        panda$core$Bit $tmp286 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp285);
        $tmp283 = $tmp286.value;
        $l284:;
        panda$core$Bit $tmp287 = { $tmp283 };
        bool $tmp282 = $tmp287.value;
        if (!$tmp282) goto $l288;
        panda$core$Bit $tmp290 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s289);
        $tmp282 = $tmp290.value;
        $l288:;
        panda$core$Bit $tmp291 = { $tmp282 };
        if ($tmp291.value) {
        {
            panda$core$Int64 $tmp292 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp293 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp292);
            p_cl->annotations->flags = $tmp293;
            {
                ITable* $tmp295 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp295 = $tmp295->next;
                }
                $fn297 $tmp296 = $tmp295->methods[0];
                panda$collections$Iterator* $tmp298 = $tmp296(((panda$collections$Iterable*) p_cl->methods));
                m$Iter294 = $tmp298;
                $l299:;
                ITable* $tmp301 = m$Iter294->$class->itable;
                while ($tmp301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp301 = $tmp301->next;
                }
                $fn303 $tmp302 = $tmp301->methods[0];
                panda$core$Bit $tmp304 = $tmp302(m$Iter294);
                panda$core$Bit $tmp305 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp304);
                if (!$tmp305.value) goto $l300;
                {
                    ITable* $tmp307 = m$Iter294->$class->itable;
                    while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp307 = $tmp307->next;
                    }
                    $fn309 $tmp308 = $tmp307->methods[1];
                    panda$core$Object* $tmp310 = $tmp308(m$Iter294);
                    m306 = ((org$pandalanguage$pandac$MethodDecl*) $tmp310);
                    panda$core$Int64 $tmp311 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp312 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m306->annotations->flags, $tmp311);
                    m306->annotations->flags = $tmp312;
                    panda$core$Bit $tmp313 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m306->annotations, m306->body);
                    if ($tmp313.value) {
                    {
                        panda$core$Int64 $tmp314 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                        panda$core$Int64 $tmp315 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m306->annotations->flags, $tmp314);
                        m306->annotations->flags = $tmp315;
                    }
                    }
                }
                goto $l299;
                $l300:;
            }
        }
        }
    }
    }
    panda$core$Int64 $tmp317 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp316, ((panda$core$Int64) { 0 }), $tmp317, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp319 = $tmp316.start.value;
    panda$core$Int64 i318 = { $tmp319 };
    int64_t $tmp321 = $tmp316.end.value;
    int64_t $tmp322 = $tmp316.step.value;
    bool $tmp323 = $tmp316.inclusive.value;
    bool $tmp330 = $tmp322 > 0;
    if ($tmp330) goto $l328; else goto $l329;
    $l328:;
    if ($tmp323) goto $l331; else goto $l332;
    $l331:;
    if ($tmp319 <= $tmp321) goto $l324; else goto $l326;
    $l332:;
    if ($tmp319 < $tmp321) goto $l324; else goto $l326;
    $l329:;
    if ($tmp323) goto $l333; else goto $l334;
    $l333:;
    if ($tmp319 >= $tmp321) goto $l324; else goto $l326;
    $l334:;
    if ($tmp319 > $tmp321) goto $l324; else goto $l326;
    $l324:;
    {
        panda$core$Object* $tmp337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->rawInterfaces, i318);
        org$pandalanguage$pandac$Type* $tmp338 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp337));
        resolved336 = $tmp338;
        if (((panda$core$Bit) { resolved336 != NULL }).value) {
        {
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->rawInterfaces, i318, ((panda$core$Object*) resolved336));
        }
        }
    }
    $l327:;
    if ($tmp330) goto $l340; else goto $l341;
    $l340:;
    int64_t $tmp342 = $tmp321 - i318.value;
    if ($tmp323) goto $l343; else goto $l344;
    $l343:;
    if ($tmp342 >= $tmp322) goto $l339; else goto $l326;
    $l344:;
    if ($tmp342 > $tmp322) goto $l339; else goto $l326;
    $l341:;
    int64_t $tmp346 = i318.value - $tmp321;
    if ($tmp323) goto $l347; else goto $l348;
    $l347:;
    if ($tmp346 >= -$tmp322) goto $l339; else goto $l326;
    $l348:;
    if ($tmp346 > -$tmp322) goto $l339; else goto $l326;
    $l339:;
    i318.value += $tmp322;
    goto $l324;
    $l326:;
    {
        ITable* $tmp351 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp351->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp351 = $tmp351->next;
        }
        $fn353 $tmp352 = $tmp351->methods[0];
        panda$collections$Iterator* $tmp354 = $tmp352(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter350 = $tmp354;
        $l355:;
        ITable* $tmp357 = p$Iter350->$class->itable;
        while ($tmp357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp357 = $tmp357->next;
        }
        $fn359 $tmp358 = $tmp357->methods[0];
        panda$core$Bit $tmp360 = $tmp358(p$Iter350);
        panda$core$Bit $tmp361 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp360);
        if (!$tmp361.value) goto $l356;
        {
            ITable* $tmp363 = p$Iter350->$class->itable;
            while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp363 = $tmp363->next;
            }
            $fn365 $tmp364 = $tmp363->methods[1];
            panda$core$Object* $tmp366 = $tmp364(p$Iter350);
            p362 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp366);
            org$pandalanguage$pandac$Type* $tmp367 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p362->bound);
            p362->bound = $tmp367;
        }
        goto $l355;
        $l356:;
    }
    self->symbolTable = old280;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old368;
    panda$collections$Iterator* p$Iter369;
    org$pandalanguage$pandac$MethodDecl$Parameter* p381;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old368 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp370 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp370 = $tmp370->next;
        }
        $fn372 $tmp371 = $tmp370->methods[0];
        panda$collections$Iterator* $tmp373 = $tmp371(((panda$collections$Iterable*) p_m->parameters));
        p$Iter369 = $tmp373;
        $l374:;
        ITable* $tmp376 = p$Iter369->$class->itable;
        while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp376 = $tmp376->next;
        }
        $fn378 $tmp377 = $tmp376->methods[0];
        panda$core$Bit $tmp379 = $tmp377(p$Iter369);
        panda$core$Bit $tmp380 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp379);
        if (!$tmp380.value) goto $l375;
        {
            ITable* $tmp382 = p$Iter369->$class->itable;
            while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp382 = $tmp382->next;
            }
            $fn384 $tmp383 = $tmp382->methods[1];
            panda$core$Object* $tmp385 = $tmp383(p$Iter369);
            p381 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp385);
            org$pandalanguage$pandac$Type* $tmp386 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p381->type);
            p381->type = $tmp386;
        }
        goto $l374;
        $l375:;
    }
    org$pandalanguage$pandac$Type* $tmp387 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp387;
    p_m->resolved = ((panda$core$Bit) { true });
    self->symbolTable = old368;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old388;
    org$pandalanguage$pandac$Type* resolved391;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old388 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp389 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp390 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp389);
    if ($tmp390.value) {
    {
        org$pandalanguage$pandac$Type* $tmp392 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved391 = $tmp392;
        if (((panda$core$Bit) { resolved391 != NULL }).value) {
        {
            p_f->type = resolved391;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp393 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp394 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp393, p_f->type);
                p_f->value = $tmp394;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old388;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s395);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old388;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp396 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp396;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old388;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp397 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp397;
    org$pandalanguage$pandac$IRNode* $tmp398 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp398;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    self->symbolTable = old388;
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
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s399);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s400);
            panda$core$Object* $tmp401 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp401)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s402);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp403 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp404 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp403);
            return $tmp404;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp405 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp405) goto $l406;
    org$pandalanguage$pandac$Type* $tmp407 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp408 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp407);
    $tmp405 = ((panda$core$Bit) { $tmp408.nonnull }).value;
    $l406:;
    panda$core$Bit $tmp409 = { $tmp405 };
    return $tmp409;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result410;
    org$pandalanguage$pandac$ClassDecl* s418;
    panda$collections$Iterator* f$Iter421;
    org$pandalanguage$pandac$FieldDecl* f433;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp411 = (panda$collections$Array*) malloc(40);
    $tmp411->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp411->refCount.value = 1;
    panda$collections$Array$init($tmp411);
    result410 = $tmp411;
    panda$core$Bit $tmp414 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp414);
    bool $tmp413 = $tmp415.value;
    if (!$tmp413) goto $l416;
    $tmp413 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l416:;
    panda$core$Bit $tmp417 = { $tmp413 };
    if ($tmp417.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp419 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s418 = $tmp419;
        if (((panda$core$Bit) { s418 != NULL }).value) {
        {
            panda$collections$ListView* $tmp420 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s418);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result410, ((panda$collections$CollectionView*) $tmp420));
        }
        }
    }
    }
    {
        ITable* $tmp422 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp422->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp422 = $tmp422->next;
        }
        $fn424 $tmp423 = $tmp422->methods[0];
        panda$collections$Iterator* $tmp425 = $tmp423(((panda$collections$Iterable*) p_cl->fields));
        f$Iter421 = $tmp425;
        $l426:;
        ITable* $tmp428 = f$Iter421->$class->itable;
        while ($tmp428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp428 = $tmp428->next;
        }
        $fn430 $tmp429 = $tmp428->methods[0];
        panda$core$Bit $tmp431 = $tmp429(f$Iter421);
        panda$core$Bit $tmp432 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp431);
        if (!$tmp432.value) goto $l427;
        {
            ITable* $tmp434 = f$Iter421->$class->itable;
            while ($tmp434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp434 = $tmp434->next;
            }
            $fn436 $tmp435 = $tmp434->methods[1];
            panda$core$Object* $tmp437 = $tmp435(f$Iter421);
            f433 = ((org$pandalanguage$pandac$FieldDecl*) $tmp437);
            panda$core$Bit $tmp438 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f433->annotations);
            panda$core$Bit $tmp439 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp438);
            if ($tmp439.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result410, ((panda$core$Object*) f433));
            }
            }
        }
        goto $l426;
        $l427:;
    }
    return ((panda$collections$ListView*) result410);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result440;
    panda$core$String* suffix442;
    panda$core$Bit found448;
    panda$collections$Iterator* dir$Iter449;
    panda$io$File* dir461;
    panda$io$File* f466;
    panda$core$Bit $tmp468;
    panda$core$Object* $tmp441 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result440 = ((org$pandalanguage$pandac$ClassDecl*) $tmp441);
    if (((panda$core$Bit) { result440 == NULL }).value) {
    {
        panda$core$String* $tmp445 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s443, &$s444);
        panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s446);
        suffix442 = $tmp447;
        found448 = ((panda$core$Bit) { false });
        {
            ITable* $tmp450 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp450->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp450 = $tmp450->next;
            }
            $fn452 $tmp451 = $tmp450->methods[0];
            panda$collections$Iterator* $tmp453 = $tmp451(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter449 = $tmp453;
            $l454:;
            ITable* $tmp456 = dir$Iter449->$class->itable;
            while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp456 = $tmp456->next;
            }
            $fn458 $tmp457 = $tmp456->methods[0];
            panda$core$Bit $tmp459 = $tmp457(dir$Iter449);
            panda$core$Bit $tmp460 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp459);
            if (!$tmp460.value) goto $l455;
            {
                ITable* $tmp462 = dir$Iter449->$class->itable;
                while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp462 = $tmp462->next;
                }
                $fn464 $tmp463 = $tmp462->methods[1];
                panda$core$Object* $tmp465 = $tmp463(dir$Iter449);
                dir461 = ((panda$io$File*) $tmp465);
                panda$io$File* $tmp467 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir461, suffix442);
                f466 = $tmp467;
                panda$io$File$exists$R$panda$core$Bit(&$tmp468, f466);
                if ($tmp468.value) {
                {
                    found448 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f466);
                    panda$core$Object* $tmp469 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result440 = ((org$pandalanguage$pandac$ClassDecl*) $tmp469);
                }
                }
            }
            goto $l454;
            $l455:;
        }
    }
    }
    return result440;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result470;
    panda$core$String* suffix472;
    panda$core$Bit found478;
    panda$collections$Iterator* dir$Iter479;
    panda$io$File* dir491;
    panda$io$File* f496;
    panda$core$Bit $tmp498;
    panda$core$Int64 oldErrorCount499;
    panda$core$Object* $tmp471 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result470 = ((org$pandalanguage$pandac$ClassDecl*) $tmp471);
    if (((panda$core$Bit) { result470 == NULL }).value) {
    {
        panda$core$String* $tmp475 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s473, &$s474);
        panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s476);
        suffix472 = $tmp477;
        found478 = ((panda$core$Bit) { false });
        {
            ITable* $tmp480 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp480->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp480 = $tmp480->next;
            }
            $fn482 $tmp481 = $tmp480->methods[0];
            panda$collections$Iterator* $tmp483 = $tmp481(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter479 = $tmp483;
            $l484:;
            ITable* $tmp486 = dir$Iter479->$class->itable;
            while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp486 = $tmp486->next;
            }
            $fn488 $tmp487 = $tmp486->methods[0];
            panda$core$Bit $tmp489 = $tmp487(dir$Iter479);
            panda$core$Bit $tmp490 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp489);
            if (!$tmp490.value) goto $l485;
            {
                ITable* $tmp492 = dir$Iter479->$class->itable;
                while ($tmp492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp492 = $tmp492->next;
                }
                $fn494 $tmp493 = $tmp492->methods[1];
                panda$core$Object* $tmp495 = $tmp493(dir$Iter479);
                dir491 = ((panda$io$File*) $tmp495);
                panda$io$File* $tmp497 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir491, suffix472);
                f496 = $tmp497;
                panda$io$File$exists$R$panda$core$Bit(&$tmp498, f496);
                if ($tmp498.value) {
                {
                    found478 = ((panda$core$Bit) { true });
                    oldErrorCount499 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f496);
                    panda$core$Object* $tmp500 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result470 = ((org$pandalanguage$pandac$ClassDecl*) $tmp500);
                    bool $tmp501 = ((panda$core$Bit) { result470 == NULL }).value;
                    if (!$tmp501) goto $l502;
                    panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount499);
                    $tmp501 = $tmp503.value;
                    $l502:;
                    panda$core$Bit $tmp504 = { $tmp501 };
                    if ($tmp504.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp505 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp505->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp505->refCount.value = 1;
                        panda$core$String* $tmp507 = panda$io$File$name$R$panda$core$String(f496);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp505, $tmp507, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s508, ((panda$core$Object*) f496));
                        panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s510);
                        panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, p_fullName);
                        panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, &$s513);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp505, $tmp514);
                    }
                    }
                }
                }
            }
            goto $l484;
            $l485:;
        }
        panda$core$Bit $tmp515 = panda$core$Bit$$NOT$R$panda$core$Bit(found478);
        if ($tmp515.value) {
        {
            panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s516, suffix472);
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s518);
            panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp519, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp520, &$s521);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp522);
        }
        }
    }
    }
    return result470;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type526;
    org$pandalanguage$pandac$ClassDecl* result533;
    org$pandalanguage$pandac$Annotations* annotations535;
    org$pandalanguage$pandac$Type* supertype541;
    panda$collections$Array* interfaces543;
    panda$collections$Iterator* intf$Iter546;
    org$pandalanguage$pandac$Type* intf558;
    panda$collections$HashMap* aliases564;
    panda$core$Range$LTpanda$core$Int64$GT $tmp567;
    panda$collections$Iterator* m$Iter612;
    org$pandalanguage$pandac$MethodDecl* m624;
    panda$collections$Array* parameters629;
    panda$collections$Iterator* p$Iter632;
    org$pandalanguage$pandac$MethodDecl$Parameter* p644;
    org$pandalanguage$pandac$MethodDecl* clone652;
    panda$collections$Iterator* f$Iter655;
    org$pandalanguage$pandac$FieldDecl* f667;
    org$pandalanguage$pandac$FieldDecl* clone672;
    panda$core$Bit $tmp524 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s523);
    panda$core$Bit $tmp525 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp524);
    PANDA_ASSERT($tmp525.value);
    org$pandalanguage$pandac$Type* $tmp527 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type526 = $tmp527;
    panda$core$Bit $tmp528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type526->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp528.value) {
    {
        panda$core$Object* $tmp529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type526->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp530 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp529));
        return $tmp530;
    }
    }
    panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type526->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp531.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type526->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp532.value);
    panda$core$Object* $tmp534 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type526)->name));
    result533 = ((org$pandalanguage$pandac$ClassDecl*) $tmp534);
    if (((panda$core$Bit) { result533 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp536 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp536->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp536->refCount.value = 1;
        panda$core$Int64 $tmp538 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp539 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp538);
        panda$core$Int64 $tmp540 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp539);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp536, $tmp540);
        annotations535 = $tmp536;
        org$pandalanguage$pandac$Type* $tmp542 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type526, p_cl->rawSuper);
        supertype541 = $tmp542;
        panda$collections$Array* $tmp544 = (panda$collections$Array*) malloc(40);
        $tmp544->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp544->refCount.value = 1;
        panda$collections$Array$init($tmp544);
        interfaces543 = $tmp544;
        {
            ITable* $tmp547 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp547 = $tmp547->next;
            }
            $fn549 $tmp548 = $tmp547->methods[0];
            panda$collections$Iterator* $tmp550 = $tmp548(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter546 = $tmp550;
            $l551:;
            ITable* $tmp553 = intf$Iter546->$class->itable;
            while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp553 = $tmp553->next;
            }
            $fn555 $tmp554 = $tmp553->methods[0];
            panda$core$Bit $tmp556 = $tmp554(intf$Iter546);
            panda$core$Bit $tmp557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp556);
            if (!$tmp557.value) goto $l552;
            {
                ITable* $tmp559 = intf$Iter546->$class->itable;
                while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp559 = $tmp559->next;
                }
                $fn561 $tmp560 = $tmp559->methods[1];
                panda$core$Object* $tmp562 = $tmp560(intf$Iter546);
                intf558 = ((org$pandalanguage$pandac$Type*) $tmp562);
                org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type526, intf558);
                panda$collections$Array$add$panda$collections$Array$T(interfaces543, ((panda$core$Object*) $tmp563));
            }
            goto $l551;
            $l552:;
        }
        panda$collections$HashMap* $tmp565 = (panda$collections$HashMap*) malloc(56);
        $tmp565->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp565->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp565, p_cl->aliases);
        aliases564 = $tmp565;
        ITable* $tmp568 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp568->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp568 = $tmp568->next;
        }
        $fn570 $tmp569 = $tmp568->methods[0];
        panda$core$Int64 $tmp571 = $tmp569(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp567, ((panda$core$Int64) { 0 }), $tmp571, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp573 = $tmp567.start.value;
        panda$core$Int64 i572 = { $tmp573 };
        int64_t $tmp575 = $tmp567.end.value;
        int64_t $tmp576 = $tmp567.step.value;
        bool $tmp577 = $tmp567.inclusive.value;
        bool $tmp584 = $tmp576 > 0;
        if ($tmp584) goto $l582; else goto $l583;
        $l582:;
        if ($tmp577) goto $l585; else goto $l586;
        $l585:;
        if ($tmp573 <= $tmp575) goto $l578; else goto $l580;
        $l586:;
        if ($tmp573 < $tmp575) goto $l578; else goto $l580;
        $l583:;
        if ($tmp577) goto $l587; else goto $l588;
        $l587:;
        if ($tmp573 >= $tmp575) goto $l578; else goto $l580;
        $l588:;
        if ($tmp573 > $tmp575) goto $l578; else goto $l580;
        $l578:;
        {
            ITable* $tmp590 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp590->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp590 = $tmp590->next;
            }
            $fn592 $tmp591 = $tmp590->methods[0];
            panda$core$Object* $tmp593 = $tmp591(((panda$collections$ListView*) p_cl->parameters), i572);
            panda$core$Int64 $tmp594 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i572, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp595 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type526->subtypes, $tmp594);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases564, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp593))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp595))->name));
        }
        $l581:;
        if ($tmp584) goto $l597; else goto $l598;
        $l597:;
        int64_t $tmp599 = $tmp575 - i572.value;
        if ($tmp577) goto $l600; else goto $l601;
        $l600:;
        if ($tmp599 >= $tmp576) goto $l596; else goto $l580;
        $l601:;
        if ($tmp599 > $tmp576) goto $l596; else goto $l580;
        $l598:;
        int64_t $tmp603 = i572.value - $tmp575;
        if ($tmp577) goto $l604; else goto $l605;
        $l604:;
        if ($tmp603 >= -$tmp576) goto $l596; else goto $l580;
        $l605:;
        if ($tmp603 > -$tmp576) goto $l596; else goto $l580;
        $l596:;
        i572.value += $tmp576;
        goto $l578;
        $l580:;
        org$pandalanguage$pandac$ClassDecl* $tmp607 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
        $tmp607->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp607->refCount.value = 1;
        panda$collections$Array* $tmp609 = (panda$collections$Array*) malloc(40);
        $tmp609->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp609->refCount.value = 1;
        panda$collections$Array$init($tmp609);
        panda$core$Object* $tmp611 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp607, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, ((panda$collections$MapView*) aliases564), p_cl->doccomment, annotations535, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type526)->name, supertype541, interfaces543, $tmp609, ((org$pandalanguage$pandac$SymbolTable*) $tmp611));
        result533 = $tmp607;
        result533->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp613 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp613->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp613 = $tmp613->next;
            }
            $fn615 $tmp614 = $tmp613->methods[0];
            panda$collections$Iterator* $tmp616 = $tmp614(((panda$collections$Iterable*) p_cl->methods));
            m$Iter612 = $tmp616;
            $l617:;
            ITable* $tmp619 = m$Iter612->$class->itable;
            while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp619 = $tmp619->next;
            }
            $fn621 $tmp620 = $tmp619->methods[0];
            panda$core$Bit $tmp622 = $tmp620(m$Iter612);
            panda$core$Bit $tmp623 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp622);
            if (!$tmp623.value) goto $l618;
            {
                ITable* $tmp625 = m$Iter612->$class->itable;
                while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp625 = $tmp625->next;
                }
                $fn627 $tmp626 = $tmp625->methods[1];
                panda$core$Object* $tmp628 = $tmp626(m$Iter612);
                m624 = ((org$pandalanguage$pandac$MethodDecl*) $tmp628);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m624);
                panda$collections$Array* $tmp630 = (panda$collections$Array*) malloc(40);
                $tmp630->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp630->refCount.value = 1;
                panda$collections$Array$init($tmp630);
                parameters629 = $tmp630;
                {
                    ITable* $tmp633 = ((panda$collections$Iterable*) m624->parameters)->$class->itable;
                    while ($tmp633->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp633 = $tmp633->next;
                    }
                    $fn635 $tmp634 = $tmp633->methods[0];
                    panda$collections$Iterator* $tmp636 = $tmp634(((panda$collections$Iterable*) m624->parameters));
                    p$Iter632 = $tmp636;
                    $l637:;
                    ITable* $tmp639 = p$Iter632->$class->itable;
                    while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp639 = $tmp639->next;
                    }
                    $fn641 $tmp640 = $tmp639->methods[0];
                    panda$core$Bit $tmp642 = $tmp640(p$Iter632);
                    panda$core$Bit $tmp643 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp642);
                    if (!$tmp643.value) goto $l638;
                    {
                        ITable* $tmp645 = p$Iter632->$class->itable;
                        while ($tmp645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp645 = $tmp645->next;
                        }
                        $fn647 $tmp646 = $tmp645->methods[1];
                        panda$core$Object* $tmp648 = $tmp646(p$Iter632);
                        p644 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp648);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp649 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp649->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp649->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp651 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type526, p644->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp649, p644->name, $tmp651);
                        panda$collections$Array$add$panda$collections$Array$T(parameters629, ((panda$core$Object*) $tmp649));
                    }
                    goto $l637;
                    $l638:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp653 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
                $tmp653->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp653->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp653, result533, ((org$pandalanguage$pandac$Symbol*) m624)->offset, m624->doccomment, m624->annotations, m624->methodKind, ((org$pandalanguage$pandac$Symbol*) m624)->name, parameters629, m624->returnType, m624->body);
                clone652 = $tmp653;
                panda$collections$Array$add$panda$collections$Array$T(result533->methods, ((panda$core$Object*) clone652));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result533->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone652));
            }
            goto $l617;
            $l618:;
        }
        {
            ITable* $tmp656 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp656 = $tmp656->next;
            }
            $fn658 $tmp657 = $tmp656->methods[0];
            panda$collections$Iterator* $tmp659 = $tmp657(((panda$collections$Iterable*) p_cl->fields));
            f$Iter655 = $tmp659;
            $l660:;
            ITable* $tmp662 = f$Iter655->$class->itable;
            while ($tmp662->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp662 = $tmp662->next;
            }
            $fn664 $tmp663 = $tmp662->methods[0];
            panda$core$Bit $tmp665 = $tmp663(f$Iter655);
            panda$core$Bit $tmp666 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp665);
            if (!$tmp666.value) goto $l661;
            {
                ITable* $tmp668 = f$Iter655->$class->itable;
                while ($tmp668->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp668 = $tmp668->next;
                }
                $fn670 $tmp669 = $tmp668->methods[1];
                panda$core$Object* $tmp671 = $tmp669(f$Iter655);
                f667 = ((org$pandalanguage$pandac$FieldDecl*) $tmp671);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f667);
                org$pandalanguage$pandac$FieldDecl* $tmp673 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
                $tmp673->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp673->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp675 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type526, f667->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp673, result533, ((org$pandalanguage$pandac$Symbol*) f667)->offset, f667->doccomment, f667->annotations, f667->fieldKind, ((org$pandalanguage$pandac$Symbol*) f667)->name, $tmp675, f667->rawValue);
                clone672 = $tmp673;
                panda$collections$Array$add$panda$collections$Array$T(result533->fields, ((panda$core$Object*) clone672));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result533->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone672));
            }
            goto $l660;
            $l661:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result533)->name), ((panda$core$Object*) result533));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result533));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result533;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result676;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp677 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result676 = $tmp677;
        }
        break;
        case 11:
        case 21:
        case 22:
        {
            panda$core$Object* $tmp678 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp679 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp678));
            result676 = $tmp679;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp680 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result676->annotations);
    if ($tmp680.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp681 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result676, p_type);
        result676 = $tmp681;
    }
    }
    return result676;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl682;
    panda$collections$Set* result684;
    panda$collections$Iterator* intf$Iter689;
    org$pandalanguage$pandac$Type* intf701;
    org$pandalanguage$pandac$ClassDecl* $tmp683 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl682 = $tmp683;
    PANDA_ASSERT(((panda$core$Bit) { cl682 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl682);
    panda$collections$Set* $tmp685 = (panda$collections$Set*) malloc(24);
    $tmp685->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp685->refCount.value = 1;
    panda$collections$Set$init($tmp685);
    result684 = $tmp685;
    if (((panda$core$Bit) { cl682->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp687 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl682->rawSuper);
        panda$collections$Set* $tmp688 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp687);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result684, ((panda$collections$CollectionView*) $tmp688));
    }
    }
    {
        ITable* $tmp690 = ((panda$collections$Iterable*) cl682->rawInterfaces)->$class->itable;
        while ($tmp690->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp690 = $tmp690->next;
        }
        $fn692 $tmp691 = $tmp690->methods[0];
        panda$collections$Iterator* $tmp693 = $tmp691(((panda$collections$Iterable*) cl682->rawInterfaces));
        intf$Iter689 = $tmp693;
        $l694:;
        ITable* $tmp696 = intf$Iter689->$class->itable;
        while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp696 = $tmp696->next;
        }
        $fn698 $tmp697 = $tmp696->methods[0];
        panda$core$Bit $tmp699 = $tmp697(intf$Iter689);
        panda$core$Bit $tmp700 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp699);
        if (!$tmp700.value) goto $l695;
        {
            ITable* $tmp702 = intf$Iter689->$class->itable;
            while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp702 = $tmp702->next;
            }
            $fn704 $tmp703 = $tmp702->methods[1];
            panda$core$Object* $tmp705 = $tmp703(intf$Iter689);
            intf701 = ((org$pandalanguage$pandac$Type*) $tmp705);
            org$pandalanguage$pandac$Type* $tmp706 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf701);
            panda$collections$Set* $tmp707 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp706);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result684, ((panda$collections$CollectionView*) $tmp707));
        }
        goto $l694;
        $l695:;
    }
    panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl682->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp708.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result684, ((panda$collections$Key*) p_t));
    }
    }
    return result684;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp714;
    panda$core$Bit $tmp709 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp709.value);
    panda$core$Bit $tmp710 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp710.value);
    panda$core$Int64 $tmp711 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp712 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp713 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp711, $tmp712);
    if ($tmp713.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp715 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp714, ((panda$core$Int64) { 0 }), $tmp715, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp717 = $tmp714.start.value;
    panda$core$Int64 i716 = { $tmp717 };
    int64_t $tmp719 = $tmp714.end.value;
    int64_t $tmp720 = $tmp714.step.value;
    bool $tmp721 = $tmp714.inclusive.value;
    bool $tmp728 = $tmp720 > 0;
    if ($tmp728) goto $l726; else goto $l727;
    $l726:;
    if ($tmp721) goto $l729; else goto $l730;
    $l729:;
    if ($tmp717 <= $tmp719) goto $l722; else goto $l724;
    $l730:;
    if ($tmp717 < $tmp719) goto $l722; else goto $l724;
    $l727:;
    if ($tmp721) goto $l731; else goto $l732;
    $l731:;
    if ($tmp717 >= $tmp719) goto $l722; else goto $l724;
    $l732:;
    if ($tmp717 > $tmp719) goto $l722; else goto $l724;
    $l722:;
    {
        panda$core$Object* $tmp734 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t1->subtypes, i716);
        panda$core$Object* $tmp735 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t2->subtypes, i716);
        panda$core$Bit $tmp736 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp734), ((org$pandalanguage$pandac$Type*) $tmp735));
        if ($tmp736.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l725:;
    if ($tmp728) goto $l738; else goto $l739;
    $l738:;
    int64_t $tmp740 = $tmp719 - i716.value;
    if ($tmp721) goto $l741; else goto $l742;
    $l741:;
    if ($tmp740 >= $tmp720) goto $l737; else goto $l724;
    $l742:;
    if ($tmp740 > $tmp720) goto $l737; else goto $l724;
    $l739:;
    int64_t $tmp744 = i716.value - $tmp719;
    if ($tmp721) goto $l745; else goto $l746;
    $l745:;
    if ($tmp744 >= -$tmp720) goto $l737; else goto $l724;
    $l746:;
    if ($tmp744 > -$tmp720) goto $l737; else goto $l724;
    $l737:;
    i716.value += $tmp720;
    goto $l722;
    $l724:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl748;
    panda$collections$Iterator* test$Iter750;
    org$pandalanguage$pandac$MethodDecl* test762;
    panda$collections$Iterator* raw$Iter775;
    org$pandalanguage$pandac$Type* raw787;
    org$pandalanguage$pandac$MethodDecl* result792;
    org$pandalanguage$pandac$ClassDecl* $tmp749 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl748 = $tmp749;
    PANDA_ASSERT(((panda$core$Bit) { cl748 != NULL }).value);
    {
        ITable* $tmp751 = ((panda$collections$Iterable*) cl748->methods)->$class->itable;
        while ($tmp751->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp751 = $tmp751->next;
        }
        $fn753 $tmp752 = $tmp751->methods[0];
        panda$collections$Iterator* $tmp754 = $tmp752(((panda$collections$Iterable*) cl748->methods));
        test$Iter750 = $tmp754;
        $l755:;
        ITable* $tmp757 = test$Iter750->$class->itable;
        while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp757 = $tmp757->next;
        }
        $fn759 $tmp758 = $tmp757->methods[0];
        panda$core$Bit $tmp760 = $tmp758(test$Iter750);
        panda$core$Bit $tmp761 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp760);
        if (!$tmp761.value) goto $l756;
        {
            ITable* $tmp763 = test$Iter750->$class->itable;
            while ($tmp763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp763 = $tmp763->next;
            }
            $fn765 $tmp764 = $tmp763->methods[1];
            panda$core$Object* $tmp766 = $tmp764(test$Iter750);
            test762 = ((org$pandalanguage$pandac$MethodDecl*) $tmp766);
            panda$core$Bit $tmp767 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test762)->name, p_name);
            if ($tmp767.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test762);
                org$pandalanguage$pandac$Type* $tmp768 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test762);
                org$pandalanguage$pandac$Type* $tmp769 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp768);
                panda$core$Bit $tmp770 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp769, p_methodType);
                if ($tmp770.value) {
                {
                    return test762;
                }
                }
            }
            }
        }
        goto $l755;
        $l756:;
    }
    bool $tmp771 = p_checkInterfaces.value;
    if ($tmp771) goto $l772;
    panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl748->classKind, ((panda$core$Int64) { 5012 }));
    $tmp771 = $tmp773.value;
    $l772:;
    panda$core$Bit $tmp774 = { $tmp771 };
    if ($tmp774.value) {
    {
        {
            ITable* $tmp776 = ((panda$collections$Iterable*) cl748->rawInterfaces)->$class->itable;
            while ($tmp776->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp776 = $tmp776->next;
            }
            $fn778 $tmp777 = $tmp776->methods[0];
            panda$collections$Iterator* $tmp779 = $tmp777(((panda$collections$Iterable*) cl748->rawInterfaces));
            raw$Iter775 = $tmp779;
            $l780:;
            ITable* $tmp782 = raw$Iter775->$class->itable;
            while ($tmp782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp782 = $tmp782->next;
            }
            $fn784 $tmp783 = $tmp782->methods[0];
            panda$core$Bit $tmp785 = $tmp783(raw$Iter775);
            panda$core$Bit $tmp786 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp785);
            if (!$tmp786.value) goto $l781;
            {
                ITable* $tmp788 = raw$Iter775->$class->itable;
                while ($tmp788->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp788 = $tmp788->next;
                }
                $fn790 $tmp789 = $tmp788->methods[1];
                panda$core$Object* $tmp791 = $tmp789(raw$Iter775);
                raw787 = ((org$pandalanguage$pandac$Type*) $tmp791);
                org$pandalanguage$pandac$Type* $tmp793 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw787);
                org$pandalanguage$pandac$MethodDecl* $tmp794 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp793, p_name, p_methodType, p_checkInterfaces);
                result792 = $tmp794;
                if (((panda$core$Bit) { result792 != NULL }).value) {
                {
                    return result792;
                }
                }
            }
            goto $l780;
            $l781:;
        }
    }
    }
    if (((panda$core$Bit) { cl748->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp795 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl748->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp796 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp795, p_name, p_methodType, p_checkInterfaces);
        return $tmp796;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType797;
    org$pandalanguage$pandac$Type* owner799;
    panda$collections$Iterator* raw$Iter801;
    org$pandalanguage$pandac$Type* raw813;
    org$pandalanguage$pandac$MethodDecl* result818;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp798 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType797 = $tmp798;
    org$pandalanguage$pandac$Type* $tmp800 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner799 = $tmp800;
    {
        ITable* $tmp802 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp802 = $tmp802->next;
        }
        $fn804 $tmp803 = $tmp802->methods[0];
        panda$collections$Iterator* $tmp805 = $tmp803(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter801 = $tmp805;
        $l806:;
        ITable* $tmp808 = raw$Iter801->$class->itable;
        while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp808 = $tmp808->next;
        }
        $fn810 $tmp809 = $tmp808->methods[0];
        panda$core$Bit $tmp811 = $tmp809(raw$Iter801);
        panda$core$Bit $tmp812 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp811);
        if (!$tmp812.value) goto $l807;
        {
            ITable* $tmp814 = raw$Iter801->$class->itable;
            while ($tmp814->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp814 = $tmp814->next;
            }
            $fn816 $tmp815 = $tmp814->methods[1];
            panda$core$Object* $tmp817 = $tmp815(raw$Iter801);
            raw813 = ((org$pandalanguage$pandac$Type*) $tmp817);
            org$pandalanguage$pandac$Type* $tmp819 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner799, raw813);
            org$pandalanguage$pandac$MethodDecl* $tmp820 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp819, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType797, ((panda$core$Bit) { true }));
            result818 = $tmp820;
            if (((panda$core$Bit) { result818 != NULL }).value) {
            {
                return result818;
            }
            }
        }
        goto $l806;
        $l807:;
    }
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp821 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner799, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp822 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp821, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType797, ((panda$core$Bit) { true }));
        return $tmp822;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass823;
    panda$collections$Array* result825;
    panda$collections$Iterator* m$Iter828;
    org$pandalanguage$pandac$MethodDecl* m840;
    org$pandalanguage$pandac$MethodDecl* found845;
    org$pandalanguage$pandac$ClassDecl* $tmp824 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass823 = $tmp824;
    PANDA_ASSERT(((panda$core$Bit) { intfClass823 != NULL }).value);
    panda$collections$Array* $tmp826 = (panda$collections$Array*) malloc(40);
    $tmp826->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp826->refCount.value = 1;
    panda$collections$Array$init($tmp826);
    result825 = $tmp826;
    {
        ITable* $tmp829 = ((panda$collections$Iterable*) intfClass823->methods)->$class->itable;
        while ($tmp829->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp829 = $tmp829->next;
        }
        $fn831 $tmp830 = $tmp829->methods[0];
        panda$collections$Iterator* $tmp832 = $tmp830(((panda$collections$Iterable*) intfClass823->methods));
        m$Iter828 = $tmp832;
        $l833:;
        ITable* $tmp835 = m$Iter828->$class->itable;
        while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp835 = $tmp835->next;
        }
        $fn837 $tmp836 = $tmp835->methods[0];
        panda$core$Bit $tmp838 = $tmp836(m$Iter828);
        panda$core$Bit $tmp839 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp838);
        if (!$tmp839.value) goto $l834;
        {
            ITable* $tmp841 = m$Iter828->$class->itable;
            while ($tmp841->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp841 = $tmp841->next;
            }
            $fn843 $tmp842 = $tmp841->methods[1];
            panda$core$Object* $tmp844 = $tmp842(m$Iter828);
            m840 = ((org$pandalanguage$pandac$MethodDecl*) $tmp844);
            org$pandalanguage$pandac$Type* $tmp846 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp847 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m840);
            org$pandalanguage$pandac$Type* $tmp848 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp847);
            org$pandalanguage$pandac$MethodDecl* $tmp849 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp846, ((org$pandalanguage$pandac$Symbol*) m840)->name, $tmp848, ((panda$core$Bit) { false }));
            found845 = $tmp849;
            PANDA_ASSERT(((panda$core$Bit) { found845 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result825, ((panda$core$Object*) found845));
        }
        goto $l833;
        $l834:;
    }
    return ((panda$collections$ListView*) result825);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl851;
    panda$collections$Iterator* rawIntf$Iter854;
    org$pandalanguage$pandac$Type* rawIntf866;
    org$pandalanguage$pandac$ClassDecl* intf871;
    panda$core$Bit $tmp850 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp850.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp852 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl851 = $tmp852;
            if (((panda$core$Bit) { superCl851 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp853 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl851);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp853));
            }
            }
        }
        }
        {
            ITable* $tmp855 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp855 = $tmp855->next;
            }
            $fn857 $tmp856 = $tmp855->methods[0];
            panda$collections$Iterator* $tmp858 = $tmp856(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter854 = $tmp858;
            $l859:;
            ITable* $tmp861 = rawIntf$Iter854->$class->itable;
            while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp861 = $tmp861->next;
            }
            $fn863 $tmp862 = $tmp861->methods[0];
            panda$core$Bit $tmp864 = $tmp862(rawIntf$Iter854);
            panda$core$Bit $tmp865 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp864);
            if (!$tmp865.value) goto $l860;
            {
                ITable* $tmp867 = rawIntf$Iter854->$class->itable;
                while ($tmp867->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp867 = $tmp867->next;
                }
                $fn869 $tmp868 = $tmp867->methods[1];
                panda$core$Object* $tmp870 = $tmp868(rawIntf$Iter854);
                rawIntf866 = ((org$pandalanguage$pandac$Type*) $tmp870);
                org$pandalanguage$pandac$ClassDecl* $tmp872 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf866);
                intf871 = $tmp872;
                if (((panda$core$Bit) { intf871 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp873 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf871);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp873));
                }
                }
            }
            goto $l859;
            $l860:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl876;
    panda$collections$Iterator* derived$Iter879;
    org$pandalanguage$pandac$MethodDecl* derived891;
    panda$core$Bit found901;
    panda$core$Range$LTpanda$core$Int64$GT $tmp902;
    org$pandalanguage$pandac$MethodDecl* base922;
    panda$core$Int64 $tmp874 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp874, ((panda$core$Int64) { 0 }));
    if ($tmp875.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp877 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl876 = $tmp877;
            if (((panda$core$Bit) { superCl876 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp878 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl876);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp878));
        }
        }
        {
            ITable* $tmp880 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp880->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp880 = $tmp880->next;
            }
            $fn882 $tmp881 = $tmp880->methods[0];
            panda$collections$Iterator* $tmp883 = $tmp881(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter879 = $tmp883;
            $l884:;
            ITable* $tmp886 = derived$Iter879->$class->itable;
            while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp886 = $tmp886->next;
            }
            $fn888 $tmp887 = $tmp886->methods[0];
            panda$core$Bit $tmp889 = $tmp887(derived$Iter879);
            panda$core$Bit $tmp890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp889);
            if (!$tmp890.value) goto $l885;
            {
                ITable* $tmp892 = derived$Iter879->$class->itable;
                while ($tmp892->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp892 = $tmp892->next;
                }
                $fn894 $tmp893 = $tmp892->methods[1];
                panda$core$Object* $tmp895 = $tmp893(derived$Iter879);
                derived891 = ((org$pandalanguage$pandac$MethodDecl*) $tmp895);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived891);
                panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived891->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp896 = $tmp897.value;
                if ($tmp896) goto $l898;
                panda$core$Bit $tmp899 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived891->annotations);
                $tmp896 = $tmp899.value;
                $l898:;
                panda$core$Bit $tmp900 = { $tmp896 };
                if ($tmp900.value) {
                {
                    goto $l884;
                }
                }
                found901 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp903 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp902, ((panda$core$Int64) { 0 }), $tmp903, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp905 = $tmp902.start.value;
                panda$core$Int64 i904 = { $tmp905 };
                int64_t $tmp907 = $tmp902.end.value;
                int64_t $tmp908 = $tmp902.step.value;
                bool $tmp909 = $tmp902.inclusive.value;
                bool $tmp916 = $tmp908 > 0;
                if ($tmp916) goto $l914; else goto $l915;
                $l914:;
                if ($tmp909) goto $l917; else goto $l918;
                $l917:;
                if ($tmp905 <= $tmp907) goto $l910; else goto $l912;
                $l918:;
                if ($tmp905 < $tmp907) goto $l910; else goto $l912;
                $l915:;
                if ($tmp909) goto $l919; else goto $l920;
                $l919:;
                if ($tmp905 >= $tmp907) goto $l910; else goto $l912;
                $l920:;
                if ($tmp905 > $tmp907) goto $l910; else goto $l912;
                $l910:;
                {
                    panda$core$Object* $tmp923 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i904);
                    base922 = ((org$pandalanguage$pandac$MethodDecl*) $tmp923);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base922);
                    panda$core$Bit $tmp924 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived891, base922);
                    if ($tmp924.value) {
                    {
                        found901 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i904, ((panda$core$Object*) derived891));
                        goto $l912;
                    }
                    }
                }
                $l913:;
                if ($tmp916) goto $l926; else goto $l927;
                $l926:;
                int64_t $tmp928 = $tmp907 - i904.value;
                if ($tmp909) goto $l929; else goto $l930;
                $l929:;
                if ($tmp928 >= $tmp908) goto $l925; else goto $l912;
                $l930:;
                if ($tmp928 > $tmp908) goto $l925; else goto $l912;
                $l927:;
                int64_t $tmp932 = i904.value - $tmp907;
                if ($tmp909) goto $l933; else goto $l934;
                $l933:;
                if ($tmp932 >= -$tmp908) goto $l925; else goto $l912;
                $l934:;
                if ($tmp932 > -$tmp908) goto $l925; else goto $l912;
                $l925:;
                i904.value += $tmp908;
                goto $l910;
                $l912:;
                panda$core$Bit $tmp936 = panda$core$Bit$$NOT$R$panda$core$Bit(found901);
                if ($tmp936.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived891));
                }
                }
            }
            goto $l884;
            $l885:;
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
    panda$collections$Array* methods937;
    org$pandalanguage$pandac$Symbol* s940;
    panda$collections$Iterator* m$Iter946;
    org$pandalanguage$pandac$MethodDecl* m958;
    panda$collections$Iterator* p$Iter965;
    org$pandalanguage$pandac$SymbolTable* p977;
    panda$collections$Array* children982;
    panda$collections$Array* types994;
    panda$collections$Iterator* m$Iter997;
    org$pandalanguage$pandac$MethodRef* m1009;
    panda$collections$Array* $tmp938 = (panda$collections$Array*) malloc(40);
    $tmp938->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp938->refCount.value = 1;
    panda$collections$Array$init($tmp938);
    methods937 = $tmp938;
    org$pandalanguage$pandac$Symbol* $tmp941 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s940 = $tmp941;
    PANDA_ASSERT(((panda$core$Bit) { s940 != NULL }).value);
    panda$core$Bit $tmp942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s940->kind, ((panda$core$Int64) { 204 }));
    if ($tmp942.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s940));
        org$pandalanguage$pandac$MethodRef* $tmp943 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp943->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp943->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp943, ((org$pandalanguage$pandac$MethodDecl*) s940), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods937, ((panda$core$Object*) $tmp943));
    }
    }
    else {
    {
        panda$core$Bit $tmp945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s940->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp945.value);
        {
            ITable* $tmp947 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s940)->methods)->$class->itable;
            while ($tmp947->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp947 = $tmp947->next;
            }
            $fn949 $tmp948 = $tmp947->methods[0];
            panda$collections$Iterator* $tmp950 = $tmp948(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s940)->methods));
            m$Iter946 = $tmp950;
            $l951:;
            ITable* $tmp953 = m$Iter946->$class->itable;
            while ($tmp953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp953 = $tmp953->next;
            }
            $fn955 $tmp954 = $tmp953->methods[0];
            panda$core$Bit $tmp956 = $tmp954(m$Iter946);
            panda$core$Bit $tmp957 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp956);
            if (!$tmp957.value) goto $l952;
            {
                ITable* $tmp959 = m$Iter946->$class->itable;
                while ($tmp959->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp959 = $tmp959->next;
                }
                $fn961 $tmp960 = $tmp959->methods[1];
                panda$core$Object* $tmp962 = $tmp960(m$Iter946);
                m958 = ((org$pandalanguage$pandac$MethodDecl*) $tmp962);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m958);
                org$pandalanguage$pandac$MethodRef* $tmp963 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp963->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp963->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp963, m958, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods937, ((panda$core$Object*) $tmp963));
            }
            goto $l951;
            $l952:;
        }
    }
    }
    {
        ITable* $tmp966 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp966->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp966 = $tmp966->next;
        }
        $fn968 $tmp967 = $tmp966->methods[0];
        panda$collections$Iterator* $tmp969 = $tmp967(((panda$collections$Iterable*) p_st->parents));
        p$Iter965 = $tmp969;
        $l970:;
        ITable* $tmp972 = p$Iter965->$class->itable;
        while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp972 = $tmp972->next;
        }
        $fn974 $tmp973 = $tmp972->methods[0];
        panda$core$Bit $tmp975 = $tmp973(p$Iter965);
        panda$core$Bit $tmp976 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp975);
        if (!$tmp976.value) goto $l971;
        {
            ITable* $tmp978 = p$Iter965->$class->itable;
            while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp978 = $tmp978->next;
            }
            $fn980 $tmp979 = $tmp978->methods[1];
            panda$core$Object* $tmp981 = $tmp979(p$Iter965);
            p977 = ((org$pandalanguage$pandac$SymbolTable*) $tmp981);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p977, p_name, methods937, p_types);
        }
        goto $l970;
        $l971:;
    }
    panda$collections$Array* $tmp983 = (panda$collections$Array*) malloc(40);
    $tmp983->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp983->refCount.value = 1;
    panda$collections$Array$init($tmp983);
    children982 = $tmp983;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp985 = panda$collections$Array$get_count$R$panda$core$Int64(methods937);
    panda$core$Bit $tmp986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp985, ((panda$core$Int64) { 1 }));
    if ($tmp986.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp987 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp987->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp987->refCount.value = 1;
        panda$core$Object* $tmp989 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods937, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp990 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp989));
        panda$core$Object* $tmp991 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods937, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp987, ((panda$core$Int64) { 1002 }), p_offset, $tmp990, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp991)), ((panda$collections$ListView*) children982));
        return $tmp987;
    }
    }
    else {
    {
        panda$core$Int64 $tmp992 = panda$collections$Array$get_count$R$panda$core$Int64(methods937);
        panda$core$Bit $tmp993 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp992, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp993.value);
        panda$collections$Array* $tmp995 = (panda$collections$Array*) malloc(40);
        $tmp995->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp995->refCount.value = 1;
        panda$collections$Array$init($tmp995);
        types994 = $tmp995;
        {
            ITable* $tmp998 = ((panda$collections$Iterable*) methods937)->$class->itable;
            while ($tmp998->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp998 = $tmp998->next;
            }
            $fn1000 $tmp999 = $tmp998->methods[0];
            panda$collections$Iterator* $tmp1001 = $tmp999(((panda$collections$Iterable*) methods937));
            m$Iter997 = $tmp1001;
            $l1002:;
            ITable* $tmp1004 = m$Iter997->$class->itable;
            while ($tmp1004->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1004 = $tmp1004->next;
            }
            $fn1006 $tmp1005 = $tmp1004->methods[0];
            panda$core$Bit $tmp1007 = $tmp1005(m$Iter997);
            panda$core$Bit $tmp1008 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1007);
            if (!$tmp1008.value) goto $l1003;
            {
                ITable* $tmp1010 = m$Iter997->$class->itable;
                while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1010 = $tmp1010->next;
                }
                $fn1012 $tmp1011 = $tmp1010->methods[1];
                panda$core$Object* $tmp1013 = $tmp1011(m$Iter997);
                m1009 = ((org$pandalanguage$pandac$MethodRef*) $tmp1013);
                org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1009);
                panda$collections$Array$add$panda$collections$Array$T(types994, ((panda$core$Object*) $tmp1014));
            }
            goto $l1002;
            $l1003:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1015 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1015->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1017 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp1017->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1017->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1017, ((panda$collections$ListView*) types994));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1015, ((panda$core$Int64) { 1003 }), p_offset, $tmp1017, ((panda$core$Object*) methods937), ((panda$collections$ListView*) children982));
        return $tmp1015;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1019;
    org$pandalanguage$pandac$FieldDecl* f1035;
    panda$collections$Array* children1038;
    org$pandalanguage$pandac$Type* effectiveType1043;
    org$pandalanguage$pandac$IRNode* result1048;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1020 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1019 = $tmp1020;
            if (((panda$core$Bit) { cl1019 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1021 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1019);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_offset, cl1019, $tmp1021);
                org$pandalanguage$pandac$IRNode* $tmp1022 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1022->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1022->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1025 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1019);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1022, ((panda$core$Int64) { 1001 }), p_offset, $tmp1024, $tmp1025);
                return $tmp1022;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1026 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_offset, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1026);
            org$pandalanguage$pandac$IRNode* $tmp1027 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1027->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1027->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1029 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1030 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1027, ((panda$core$Int64) { 1001 }), p_offset, $tmp1029, $tmp1030);
            return $tmp1027;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1031 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1032 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_offset, $tmp1031);
            return $tmp1032;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1033 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1033->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1033->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1033, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1033;
        }
        break;
        case 202:
        {
            f1035 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1035);
            org$pandalanguage$pandac$Type* $tmp1036 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1037 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1035->type, $tmp1036);
            if ($tmp1037.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1039 = (panda$collections$Array*) malloc(40);
            $tmp1039->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1039->refCount.value = 1;
            panda$collections$Array$init($tmp1039);
            children1038 = $tmp1039;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1041.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, &$s1042);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1044 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1035->type);
                effectiveType1043 = $tmp1044;
                panda$core$Bit $tmp1045 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1035->annotations);
                if ($tmp1045.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1038, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1046 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1035->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1047 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1046);
                    panda$collections$Array$add$panda$collections$Array$T(children1038, ((panda$core$Object*) $tmp1047));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1049 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1049->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1049->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1049, ((panda$core$Int64) { 1026 }), p_offset, f1035->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1038));
                result1048 = $tmp1049;
                panda$core$Bit $tmp1051 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1043, result1048->type);
                if ($tmp1051.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1052 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1048, p_offset, ((panda$core$Bit) { false }), effectiveType1043);
                    result1048 = $tmp1052;
                }
                }
                return result1048;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1053 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1053->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1053->refCount.value = 1;
                panda$core$Object* $tmp1055 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1056 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1055));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1053, ((panda$core$Int64) { 1025 }), p_offset, $tmp1056);
                panda$collections$Array$add$panda$collections$Array$T(children1038, ((panda$core$Object*) $tmp1053));
                org$pandalanguage$pandac$IRNode* $tmp1057 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1057->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1057->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1057, ((panda$core$Int64) { 1026 }), p_offset, f1035->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1038));
                return $tmp1057;
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
    panda$collections$HashMap* typeMap1065;
    org$pandalanguage$pandac$Type* base1068;
    org$pandalanguage$pandac$ClassDecl* cl1070;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1072;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1059 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1059, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1060.value);
            panda$core$Object* $tmp1061 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1062 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1061), p_raw);
            return $tmp1062;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1063 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1064 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1063, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1064.value);
            panda$collections$HashMap* $tmp1066 = (panda$collections$HashMap*) malloc(56);
            $tmp1066->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1066->refCount.value = 1;
            panda$collections$HashMap$init($tmp1066);
            typeMap1065 = $tmp1066;
            panda$core$Object* $tmp1069 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1068 = ((org$pandalanguage$pandac$Type*) $tmp1069);
            org$pandalanguage$pandac$ClassDecl* $tmp1071 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1068)->name);
            cl1070 = $tmp1071;
            PANDA_ASSERT(((panda$core$Bit) { cl1070 != NULL }).value);
            panda$core$Int64 $tmp1073 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1072, ((panda$core$Int64) { 1 }), $tmp1073, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
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
                panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1070)->name, &$s1092);
                panda$core$Int64 $tmp1094 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1074, ((panda$core$Int64) { 1 }));
                ITable* $tmp1095 = ((panda$collections$ListView*) cl1070->parameters)->$class->itable;
                while ($tmp1095->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1095 = $tmp1095->next;
                }
                $fn1097 $tmp1096 = $tmp1095->methods[0];
                panda$core$Object* $tmp1098 = $tmp1096(((panda$collections$ListView*) cl1070->parameters), $tmp1094);
                panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1093, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1098))->name);
                panda$core$Object* $tmp1100 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, i1074);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1065, ((panda$collections$Key*) $tmp1099), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1100)));
            }
            $l1083:;
            if ($tmp1086) goto $l1102; else goto $l1103;
            $l1102:;
            int64_t $tmp1104 = $tmp1077 - i1074.value;
            if ($tmp1079) goto $l1105; else goto $l1106;
            $l1105:;
            if ($tmp1104 >= $tmp1078) goto $l1101; else goto $l1082;
            $l1106:;
            if ($tmp1104 > $tmp1078) goto $l1101; else goto $l1082;
            $l1103:;
            int64_t $tmp1108 = i1074.value - $tmp1077;
            if ($tmp1079) goto $l1109; else goto $l1110;
            $l1109:;
            if ($tmp1108 >= -$tmp1078) goto $l1101; else goto $l1082;
            $l1110:;
            if ($tmp1108 > -$tmp1078) goto $l1101; else goto $l1082;
            $l1101:;
            i1074.value += $tmp1078;
            goto $l1080;
            $l1082:;
            org$pandalanguage$pandac$Type* $tmp1112 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1065);
            return $tmp1112;
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
    org$pandalanguage$pandac$Type* $tmp1113 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1114 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1113);
    if ($tmp1114.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1115 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1115;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1116 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1117 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1116);
    if ($tmp1117.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1118 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1118;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$collections$Array* args1126;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1127;
    org$pandalanguage$pandac$IRNode* c1129;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1120 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1119)->type);
            panda$core$Object* $tmp1121 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1122 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1121)->type);
            org$pandalanguage$pandac$Type* $tmp1123 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1120, $tmp1122);
            org$pandalanguage$pandac$Type* $tmp1124 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1123);
            org$pandalanguage$pandac$Type* $tmp1125 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1124);
            return $tmp1125;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1127, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1128 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1127);
            args1126 = $tmp1128;
            panda$core$Object* $tmp1130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1132 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1130), &$s1131, ((panda$collections$ListView*) args1126));
            c1129 = $tmp1132;
            if (((panda$core$Bit) { c1129 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1133 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1133;
            }
            }
            return c1129->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1134 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1134;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1145;
    panda$core$Int64$nullable result1149;
    panda$core$Int64$nullable best1158;
    panda$collections$Iterator* t$Iter1159;
    org$pandalanguage$pandac$Type* t1171;
    panda$core$Int64$nullable cost1176;
    org$pandalanguage$pandac$ClassDecl* cl1191;
    panda$core$Int64$nullable cost1193;
    panda$collections$Iterator* intf$Iter1198;
    org$pandalanguage$pandac$Type* intf1210;
    panda$core$Int64$nullable cost1215;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1135 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1135.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1136 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1137 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1136);
    if ($tmp1137.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1138.value) {
    {
        panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1139.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1140 = $tmp1141.value;
    if (!$tmp1140) goto $l1142;
    panda$core$Bit $tmp1143 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1140 = $tmp1143.value;
    $l1142:;
    panda$core$Bit $tmp1144 = { $tmp1140 };
    if ($tmp1144.value) {
    {
        panda$core$Object* $tmp1146 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1147 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1146), p_target);
        result1145 = $tmp1147;
        if (((panda$core$Bit) { !result1145.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1148 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1145.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1148, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1151 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1150));
            result1149 = $tmp1151;
            if (((panda$core$Bit) { !result1149.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1152 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1149.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1152, true });
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
            panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1153.value) {
            {
                panda$core$Object* $tmp1154 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1155 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1154), p_target);
                return $tmp1155;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1156 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1157 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1156, p_target);
            return $tmp1157;
        }
        break;
        case 17:
        {
            best1158 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1160 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1160 = $tmp1160->next;
                }
                $fn1162 $tmp1161 = $tmp1160->methods[0];
                panda$collections$Iterator* $tmp1163 = $tmp1161(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1159 = $tmp1163;
                $l1164:;
                ITable* $tmp1166 = t$Iter1159->$class->itable;
                while ($tmp1166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1166 = $tmp1166->next;
                }
                $fn1168 $tmp1167 = $tmp1166->methods[0];
                panda$core$Bit $tmp1169 = $tmp1167(t$Iter1159);
                panda$core$Bit $tmp1170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1169);
                if (!$tmp1170.value) goto $l1165;
                {
                    ITable* $tmp1172 = t$Iter1159->$class->itable;
                    while ($tmp1172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1172 = $tmp1172->next;
                    }
                    $fn1174 $tmp1173 = $tmp1172->methods[1];
                    panda$core$Object* $tmp1175 = $tmp1173(t$Iter1159);
                    t1171 = ((org$pandalanguage$pandac$Type*) $tmp1175);
                    panda$core$Int64$nullable $tmp1177 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1171, p_target);
                    cost1176 = $tmp1177;
                    bool $tmp1178 = ((panda$core$Bit) { cost1176.nonnull }).value;
                    if (!$tmp1178) goto $l1179;
                    bool $tmp1180 = ((panda$core$Bit) { !best1158.nonnull }).value;
                    if ($tmp1180) goto $l1181;
                    panda$core$Bit $tmp1182 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1176.value), ((panda$core$Int64) best1158.value));
                    $tmp1180 = $tmp1182.value;
                    $l1181:;
                    panda$core$Bit $tmp1183 = { $tmp1180 };
                    $tmp1178 = $tmp1183.value;
                    $l1179:;
                    panda$core$Bit $tmp1184 = { $tmp1178 };
                    if ($tmp1184.value) {
                    {
                        best1158 = cost1176;
                    }
                    }
                }
                goto $l1164;
                $l1165:;
            }
            return best1158;
        }
        break;
        case 22:
        {
            panda$core$Object* $tmp1185 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1186 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1185), p_target);
            return $tmp1186;
        }
        break;
    }
    panda$core$Bit $tmp1187 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1188 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1187);
    if ($tmp1188.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1189 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1190 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1189);
    if ($tmp1190.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1192 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1191 = $tmp1192;
    PANDA_ASSERT(((panda$core$Bit) { cl1191 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1191);
    if (((panda$core$Bit) { cl1191->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1194 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1191->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1195 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1194);
        panda$core$Int64$nullable $tmp1196 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1195, p_target);
        cost1193 = $tmp1196;
        if (((panda$core$Bit) { cost1193.nonnull }).value) {
        {
            panda$core$Int64 $tmp1197 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1193.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1197, true });
        }
        }
    }
    }
    {
        ITable* $tmp1199 = ((panda$collections$Iterable*) cl1191->rawInterfaces)->$class->itable;
        while ($tmp1199->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1199 = $tmp1199->next;
        }
        $fn1201 $tmp1200 = $tmp1199->methods[0];
        panda$collections$Iterator* $tmp1202 = $tmp1200(((panda$collections$Iterable*) cl1191->rawInterfaces));
        intf$Iter1198 = $tmp1202;
        $l1203:;
        ITable* $tmp1205 = intf$Iter1198->$class->itable;
        while ($tmp1205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1205 = $tmp1205->next;
        }
        $fn1207 $tmp1206 = $tmp1205->methods[0];
        panda$core$Bit $tmp1208 = $tmp1206(intf$Iter1198);
        panda$core$Bit $tmp1209 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1208);
        if (!$tmp1209.value) goto $l1204;
        {
            ITable* $tmp1211 = intf$Iter1198->$class->itable;
            while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1211 = $tmp1211->next;
            }
            $fn1213 $tmp1212 = $tmp1211->methods[1];
            panda$core$Object* $tmp1214 = $tmp1212(intf$Iter1198);
            intf1210 = ((org$pandalanguage$pandac$Type*) $tmp1214);
            org$pandalanguage$pandac$Type* $tmp1216 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1210);
            org$pandalanguage$pandac$Type* $tmp1217 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1216);
            panda$core$Int64$nullable $tmp1218 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1217, p_target);
            cost1215 = $tmp1218;
            if (((panda$core$Bit) { cost1215.nonnull }).value) {
            {
                panda$core$Int64 $tmp1219 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1215.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1219, true });
            }
            }
        }
        goto $l1203;
        $l1204:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1221 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1220 = $tmp1221.value;
    if (!$tmp1220) goto $l1222;
    panda$core$Bit $tmp1223 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1220 = $tmp1223.value;
    $l1222:;
    panda$core$Bit $tmp1224 = { $tmp1220 };
    if ($tmp1224.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1226 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1225 = $tmp1226.value;
    if (!$tmp1225) goto $l1227;
    panda$core$Bit $tmp1228 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1225 = $tmp1228.value;
    $l1227:;
    panda$core$Bit $tmp1229 = { $tmp1225 };
    if ($tmp1229.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1231 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1230 = $tmp1231.value;
    if (!$tmp1230) goto $l1232;
    panda$core$Bit $tmp1233 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1230 = $tmp1233.value;
    $l1232:;
    panda$core$Bit $tmp1234 = { $tmp1230 };
    if ($tmp1234.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1235 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1235.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1236 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1236.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1237 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1237.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1240;
    panda$core$Int64$nullable cost11312;
    panda$core$Int64$nullable cost21316;
    org$pandalanguage$pandac$ClassDecl* targetClass1326;
    panda$collections$Iterator* m$Iter1328;
    org$pandalanguage$pandac$MethodDecl* m1340;
    panda$core$Int64$nullable cost1349;
    panda$core$Bit $tmp1238 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1238.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1239.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1241 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1242 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1241));
            cost1240 = $tmp1242;
            if (((panda$core$Bit) { !cost1240.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1243.value) {
            {
                return cost1240;
            }
            }
            panda$core$Int64 $tmp1244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1240.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1244, true });
        }
        break;
        case 22:
        {
            panda$core$Object* $tmp1245 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1246 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1245));
            return $tmp1246;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
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
        break;
        case 1004:
        {
            panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1252 = $tmp1253.value;
            if (!$tmp1252) goto $l1254;
            panda$core$Int64 $tmp1255 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1256 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1255);
            panda$core$Int64 $tmp1257 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1258 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1256, $tmp1257);
            $tmp1252 = $tmp1258.value;
            $l1254:;
            panda$core$Bit $tmp1259 = { $tmp1252 };
            bool $tmp1251 = $tmp1259.value;
            if ($tmp1251) goto $l1260;
            panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1261 = $tmp1262.value;
            if (!$tmp1261) goto $l1263;
            panda$core$Int64 $tmp1264 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1265 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1266 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1264, $tmp1265);
            $tmp1261 = $tmp1266.value;
            $l1263:;
            panda$core$Bit $tmp1267 = { $tmp1261 };
            $tmp1251 = $tmp1267.value;
            $l1260:;
            panda$core$Bit $tmp1268 = { $tmp1251 };
            if ($tmp1268.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1269 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1270 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1269);
            if ($tmp1270.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1271 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1272 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1271, p_target);
                return $tmp1272;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1274 = $tmp1275.value;
            if (!$tmp1274) goto $l1276;
            panda$core$Int64 $tmp1277 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1278 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1277);
            panda$core$Int64 $tmp1279 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1278);
            panda$core$Int64 $tmp1280 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1281 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1279, $tmp1280);
            $tmp1274 = $tmp1281.value;
            $l1276:;
            panda$core$Bit $tmp1282 = { $tmp1274 };
            bool $tmp1273 = $tmp1282.value;
            if ($tmp1273) goto $l1283;
            panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1284 = $tmp1285.value;
            if (!$tmp1284) goto $l1286;
            panda$core$Int64 $tmp1287 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1288 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1287);
            panda$core$Int64 $tmp1289 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1288);
            panda$core$Int64 $tmp1290 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1291 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1289, $tmp1290);
            $tmp1284 = $tmp1291.value;
            $l1286:;
            panda$core$Bit $tmp1292 = { $tmp1284 };
            $tmp1273 = $tmp1292.value;
            $l1283:;
            panda$core$Bit $tmp1293 = { $tmp1273 };
            if ($tmp1293.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1294 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1294);
            if ($tmp1295.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1296 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1297 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1296, p_target);
                return $tmp1297;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1298 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1298.value) {
            {
                panda$core$Int64 $tmp1299 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1299, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp1300.value);
                panda$core$Object* $tmp1302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1302)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1301 = $tmp1303.value;
                if (!$tmp1301) goto $l1304;
                panda$core$Object* $tmp1305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1305)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1301 = $tmp1306.value;
                $l1304:;
                panda$core$Bit $tmp1307 = { $tmp1301 };
                if ($tmp1307.value) {
                {
                    panda$core$Object* $tmp1308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1309 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1308));
                    panda$core$Bit $tmp1310 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1309);
                    if ($tmp1310.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1311.value);
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
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1323 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1323;
        }
        break;
    }
    panda$core$Bit $tmp1324 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1325 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1324);
    if ($tmp1325.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1327 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1326 = $tmp1327;
    if (((panda$core$Bit) { targetClass1326 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1329 = ((panda$collections$Iterable*) targetClass1326->methods)->$class->itable;
        while ($tmp1329->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1329 = $tmp1329->next;
        }
        $fn1331 $tmp1330 = $tmp1329->methods[0];
        panda$collections$Iterator* $tmp1332 = $tmp1330(((panda$collections$Iterable*) targetClass1326->methods));
        m$Iter1328 = $tmp1332;
        $l1333:;
        ITable* $tmp1335 = m$Iter1328->$class->itable;
        while ($tmp1335->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1335 = $tmp1335->next;
        }
        $fn1337 $tmp1336 = $tmp1335->methods[0];
        panda$core$Bit $tmp1338 = $tmp1336(m$Iter1328);
        panda$core$Bit $tmp1339 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1338);
        if (!$tmp1339.value) goto $l1334;
        {
            ITable* $tmp1341 = m$Iter1328->$class->itable;
            while ($tmp1341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1341 = $tmp1341->next;
            }
            $fn1343 $tmp1342 = $tmp1341->methods[1];
            panda$core$Object* $tmp1344 = $tmp1342(m$Iter1328);
            m1340 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1344);
            panda$core$Bit $tmp1345 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1340->annotations);
            if ($tmp1345.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1340);
                panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1340->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1346.value);
                panda$core$Int64 $tmp1347 = panda$collections$Array$get_count$R$panda$core$Int64(m1340->parameters);
                panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1347, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1348.value);
                panda$core$Object* $tmp1350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1340->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1351 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1350)->type);
                cost1349 = $tmp1351;
                if (((panda$core$Bit) { cost1349.nonnull }).value) {
                {
                    return cost1349;
                }
                }
            }
            }
        }
        goto $l1333;
        $l1334:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1352 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1352;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1361;
    org$pandalanguage$pandac$IRNode* intermediate1366;
    org$pandalanguage$pandac$IRNode* coerced1394;
    org$pandalanguage$pandac$IRNode* coerced1415;
    org$pandalanguage$pandac$IRNode* varType1429;
    org$pandalanguage$pandac$Type* param1437;
    org$pandalanguage$pandac$IRNode* start1439;
    org$pandalanguage$pandac$IRNode* end1442;
    panda$collections$Array* args1445;
    org$pandalanguage$pandac$IRNode* target1452;
    panda$collections$ListView* methods1459;
    panda$collections$Array* args1461;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1462;
    panda$collections$Array* best1464;
    panda$core$Int64$nullable bestCost1467;
    panda$collections$Iterator* m$Iter1468;
    org$pandalanguage$pandac$MethodRef* m1480;
    panda$core$Int64$nullable cost1485;
    org$pandalanguage$pandac$IRNode* callTarget1491;
    org$pandalanguage$pandac$IRNode* result1497;
    panda$collections$Array* args1501;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1502;
    panda$collections$Array* children1514;
    org$pandalanguage$pandac$IRNode* intermediate1520;
    org$pandalanguage$pandac$ClassDecl* cl1525;
    panda$collections$Iterator* m$Iter1527;
    org$pandalanguage$pandac$MethodDecl* m1539;
    org$pandalanguage$pandac$IRNode* type1550;
    panda$collections$Array* args1555;
    panda$collections$Array* children1559;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1353 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1353.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1354 = $tmp1355.value;
    if (!$tmp1354) goto $l1356;
    panda$core$Bit $tmp1357 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1354 = $tmp1357.value;
    $l1356:;
    panda$core$Bit $tmp1358 = { $tmp1354 };
    if ($tmp1358.value) {
    {
        panda$core$Object* $tmp1359 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1360 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1359), p_target);
        if ($tmp1360.value) {
        {
            panda$collections$Array* $tmp1362 = (panda$collections$Array*) malloc(40);
            $tmp1362->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1362->refCount.value = 1;
            panda$collections$Array$init($tmp1362);
            children1361 = $tmp1362;
            panda$collections$Array$add$panda$collections$Array$T(children1361, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1364 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1364->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1364, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1361));
            return $tmp1364;
        }
        }
        panda$core$Object* $tmp1367 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1368 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1367));
        intermediate1366 = $tmp1368;
        org$pandalanguage$pandac$IRNode* $tmp1369 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1366, p_target);
        return $tmp1369;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
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
        break;
        case 1032:
        {
            panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1398 = $tmp1399.value;
            if (!$tmp1398) goto $l1400;
            panda$core$Int64 $tmp1401 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1402 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1401);
            panda$core$Int64 $tmp1403 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1402);
            panda$core$Int64 $tmp1404 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1405 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1403, $tmp1404);
            $tmp1398 = $tmp1405.value;
            $l1400:;
            panda$core$Bit $tmp1406 = { $tmp1398 };
            if ($tmp1406.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1407 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1407->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1407->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1407, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1407;
            }
            }
            panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1409 = $tmp1410.value;
            if (!$tmp1409) goto $l1411;
            panda$core$Bit $tmp1412 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1412);
            $tmp1409 = $tmp1413.value;
            $l1411:;
            panda$core$Bit $tmp1414 = { $tmp1409 };
            if ($tmp1414.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1417 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1416);
                coerced1415 = $tmp1417;
                if (((panda$core$Bit) { coerced1415 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1418 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1415, p_target);
                return $tmp1418;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1420 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1419);
            if ($tmp1420.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1421 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1421->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1421->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1421, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1421;
            }
            }
            panda$core$Bit $tmp1424 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1423 = $tmp1424.value;
            if (!$tmp1423) goto $l1425;
            org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1427 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1426);
            $tmp1423 = $tmp1427.value;
            $l1425:;
            panda$core$Bit $tmp1428 = { $tmp1423 };
            if ($tmp1428.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1431 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1430);
                varType1429 = $tmp1431;
                if (((panda$core$Bit) { varType1429 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1432 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1429, p_target);
                    return $tmp1432;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Int64 $tmp1433 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1433, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1434.value);
            panda$core$Bit $tmp1435 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1435.value) {
            {
                panda$core$Bit $tmp1436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1436.value);
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
        break;
        case 1039:
        {
            panda$core$Object* $tmp1460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1459 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1460)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1462, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1463 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1462);
            args1461 = $tmp1463;
            panda$collections$Array* $tmp1465 = (panda$collections$Array*) malloc(40);
            $tmp1465->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1465->refCount.value = 1;
            panda$collections$Array$init($tmp1465);
            best1464 = $tmp1465;
            bestCost1467 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1469 = ((panda$collections$Iterable*) methods1459)->$class->itable;
                while ($tmp1469->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1469 = $tmp1469->next;
                }
                $fn1471 $tmp1470 = $tmp1469->methods[0];
                panda$collections$Iterator* $tmp1472 = $tmp1470(((panda$collections$Iterable*) methods1459));
                m$Iter1468 = $tmp1472;
                $l1473:;
                ITable* $tmp1475 = m$Iter1468->$class->itable;
                while ($tmp1475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1475 = $tmp1475->next;
                }
                $fn1477 $tmp1476 = $tmp1475->methods[0];
                panda$core$Bit $tmp1478 = $tmp1476(m$Iter1468);
                panda$core$Bit $tmp1479 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1478);
                if (!$tmp1479.value) goto $l1474;
                {
                    ITable* $tmp1481 = m$Iter1468->$class->itable;
                    while ($tmp1481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1481 = $tmp1481->next;
                    }
                    $fn1483 $tmp1482 = $tmp1481->methods[1];
                    panda$core$Object* $tmp1484 = $tmp1482(m$Iter1468);
                    m1480 = ((org$pandalanguage$pandac$MethodRef*) $tmp1484);
                    panda$core$Int64$nullable $tmp1486 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1480, ((panda$collections$ListView*) args1461), p_target);
                    cost1485 = $tmp1486;
                    if (((panda$core$Bit) { !cost1485.nonnull }).value) {
                    {
                        goto $l1473;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1467.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1464, ((panda$core$Object*) m1480));
                        bestCost1467 = cost1485;
                        goto $l1473;
                    }
                    }
                    panda$core$Bit $tmp1487 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1485.value), ((panda$core$Int64) bestCost1467.value));
                    if ($tmp1487.value) {
                    {
                        panda$collections$Array$clear(best1464);
                        bestCost1467 = cost1485;
                    }
                    }
                    panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1485.value), ((panda$core$Int64) bestCost1467.value));
                    if ($tmp1488.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1464, ((panda$core$Object*) m1480));
                    }
                    }
                }
                goto $l1473;
                $l1474:;
            }
            panda$core$Int64 $tmp1489 = panda$collections$Array$get_count$R$panda$core$Int64(best1464);
            panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1489, ((panda$core$Int64) { 1 }));
            if ($tmp1490.value) {
            {
                panda$core$Object* $tmp1492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1493 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1492)->children);
                panda$core$Bit $tmp1494 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1493, ((panda$core$Int64) { 0 }));
                if ($tmp1494.value) {
                {
                    panda$core$Object* $tmp1495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1495)->children, ((panda$core$Int64) { 0 }));
                    callTarget1491 = ((org$pandalanguage$pandac$IRNode*) $tmp1496);
                }
                }
                else {
                {
                    callTarget1491 = NULL;
                }
                }
                panda$core$Object* $tmp1498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1464, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1499 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->offset, callTarget1491, ((org$pandalanguage$pandac$MethodRef*) $tmp1498), ((panda$collections$ListView*) args1461));
                result1497 = $tmp1499;
                org$pandalanguage$pandac$IRNode* $tmp1500 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1497, p_target);
                return $tmp1500;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1502, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1503 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1502);
            args1501 = $tmp1503;
            panda$core$Object* $tmp1504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1506 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1504), &$s1505, ((panda$collections$ListView*) args1501), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1507 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1506, p_target);
            return $tmp1507;
        }
        break;
    }
    panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1508.value) {
    {
        panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1509.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1510 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1510->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1510->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1510, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1510;
        }
        }
        panda$core$Object* $tmp1512 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1513 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1512));
        if ($tmp1513.value) {
        {
            panda$collections$Array* $tmp1515 = (panda$collections$Array*) malloc(40);
            $tmp1515->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1515->refCount.value = 1;
            panda$collections$Array$init($tmp1515);
            children1514 = $tmp1515;
            panda$collections$Array$add$panda$collections$Array$T(children1514, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1517 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1517->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1517->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1517, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1514));
            return $tmp1517;
        }
        }
        panda$core$Bit $tmp1519 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1519.value) {
        {
            panda$core$Object* $tmp1521 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1522 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1521));
            intermediate1520 = $tmp1522;
            org$pandalanguage$pandac$IRNode* $tmp1523 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1520, p_target);
            return $tmp1523;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1524 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1524.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1526 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1525 = $tmp1526;
        if (((panda$core$Bit) { cl1525 != NULL }).value) {
        {
            {
                ITable* $tmp1528 = ((panda$collections$Iterable*) cl1525->methods)->$class->itable;
                while ($tmp1528->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1528 = $tmp1528->next;
                }
                $fn1530 $tmp1529 = $tmp1528->methods[0];
                panda$collections$Iterator* $tmp1531 = $tmp1529(((panda$collections$Iterable*) cl1525->methods));
                m$Iter1527 = $tmp1531;
                $l1532:;
                ITable* $tmp1534 = m$Iter1527->$class->itable;
                while ($tmp1534->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1534 = $tmp1534->next;
                }
                $fn1536 $tmp1535 = $tmp1534->methods[0];
                panda$core$Bit $tmp1537 = $tmp1535(m$Iter1527);
                panda$core$Bit $tmp1538 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1537);
                if (!$tmp1538.value) goto $l1533;
                {
                    ITable* $tmp1540 = m$Iter1527->$class->itable;
                    while ($tmp1540->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1540 = $tmp1540->next;
                    }
                    $fn1542 $tmp1541 = $tmp1540->methods[1];
                    panda$core$Object* $tmp1543 = $tmp1541(m$Iter1527);
                    m1539 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1543);
                    panda$core$Bit $tmp1544 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1539->annotations);
                    if ($tmp1544.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1539);
                        panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1539->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1545.value);
                        panda$core$Int64 $tmp1546 = panda$collections$Array$get_count$R$panda$core$Int64(m1539->parameters);
                        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1546, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1547.value);
                        panda$core$Object* $tmp1548 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1539->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1549 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1548)->type);
                        if (((panda$core$Bit) { $tmp1549.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1551 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1551->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1551->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1553 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1525);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1551, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1553, $tmp1554);
                            type1550 = $tmp1551;
                            panda$collections$Array* $tmp1556 = (panda$collections$Array*) malloc(40);
                            $tmp1556->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1556->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1556, ((panda$core$Int64) { 1 }));
                            args1555 = $tmp1556;
                            panda$collections$Array$add$panda$collections$Array$T(args1555, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1558 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1550, ((panda$collections$ListView*) args1555));
                            return $tmp1558;
                        }
                        }
                    }
                    }
                }
                goto $l1532;
                $l1533:;
            }
        }
        }
        panda$collections$Array* $tmp1560 = (panda$collections$Array*) malloc(40);
        $tmp1560->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1560->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1560, ((panda$core$Int64) { 1 }));
        children1559 = $tmp1560;
        panda$collections$Array$add$panda$collections$Array$T(children1559, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1562 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1562->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1562->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1562, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1559));
        return $tmp1562;
    }
    }
    panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1564, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, &$s1566);
    panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1567, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, &$s1569);
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, $tmp1570);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1571;
    org$pandalanguage$pandac$IRNode* $tmp1572 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1571 = $tmp1572;
    bool $tmp1573 = ((panda$core$Bit) { result1571 == NULL }).value;
    if ($tmp1573) goto $l1574;
    panda$core$Bit $tmp1575 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1571->type, p_target);
    $tmp1573 = $tmp1575.value;
    $l1574:;
    panda$core$Bit $tmp1576 = { $tmp1573 };
    PANDA_ASSERT($tmp1576.value);
    return result1571;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1578 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1577 = $tmp1578.value;
    if (!$tmp1577) goto $l1579;
    panda$core$Bit $tmp1580 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1577 = $tmp1580.value;
    $l1579:;
    panda$core$Bit $tmp1581 = { $tmp1577 };
    if ($tmp1581.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1582 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1582.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1584 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1583 = $tmp1584.value;
    if (!$tmp1583) goto $l1585;
    panda$core$Bit $tmp1586 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1583 = $tmp1586.value;
    $l1585:;
    panda$core$Bit $tmp1587 = { $tmp1583 };
    if ($tmp1587.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1588.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1589 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1589.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1591;
    org$pandalanguage$pandac$IRNode* resolved1598;
    panda$core$Int64$nullable $tmp1590 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1590.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1592 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1591 = $tmp1592;
    panda$core$Bit $tmp1594 = panda$core$Bit$$NOT$R$panda$core$Bit(result1591);
    bool $tmp1593 = $tmp1594.value;
    if (!$tmp1593) goto $l1595;
    panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1593 = $tmp1596.value;
    $l1595:;
    panda$core$Bit $tmp1597 = { $tmp1593 };
    if ($tmp1597.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1599 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1598 = $tmp1599;
        if (((panda$core$Bit) { resolved1598 != NULL }).value) {
        {
            panda$core$Bit $tmp1600 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1598, p_target);
            result1591 = $tmp1600;
        }
        }
    }
    }
    return result1591;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1621;
    panda$collections$Array* children1624;
    panda$core$Bit $tmp1601 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1601.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1602 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1603 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1602);
    PANDA_ASSERT($tmp1603.value);
    bool $tmp1604 = p_isExplicit.value;
    if (!$tmp1604) goto $l1605;
    panda$core$Bit $tmp1606 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1607 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1606);
    $tmp1604 = $tmp1607.value;
    $l1605:;
    panda$core$Bit $tmp1608 = { $tmp1604 };
    if ($tmp1608.value) {
    {
        panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1609, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1611);
        panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1613, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1614, &$s1615);
        panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, $tmp1616);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1617);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1618 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1618;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1619 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1619.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1620 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1620;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1622 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1621 = $tmp1622;
            if (((panda$core$Bit) { resolved1621 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1623 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1621, p_offset, p_isExplicit, p_target);
                return $tmp1623;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1625 = (panda$collections$Array*) malloc(40);
    $tmp1625->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1625->refCount.value = 1;
    panda$collections$Array$init($tmp1625);
    children1624 = $tmp1625;
    panda$collections$Array$add$panda$collections$Array$T(children1624, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1627 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1627->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1627->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1627, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1624));
    return $tmp1627;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1635;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1636;
    panda$core$Int64$nullable cost1656;
    panda$core$Int64$nullable cost1675;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1629 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1630 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1630->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1630 = $tmp1630->next;
    }
    $fn1632 $tmp1631 = $tmp1630->methods[0];
    panda$core$Int64 $tmp1633 = $tmp1631(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1634 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1629, $tmp1633);
    if ($tmp1634.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1635 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1637 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1636, ((panda$core$Int64) { 0 }), $tmp1637, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1639 = $tmp1636.start.value;
    panda$core$Int64 i1638 = { $tmp1639 };
    int64_t $tmp1641 = $tmp1636.end.value;
    int64_t $tmp1642 = $tmp1636.step.value;
    bool $tmp1643 = $tmp1636.inclusive.value;
    bool $tmp1650 = $tmp1642 > 0;
    if ($tmp1650) goto $l1648; else goto $l1649;
    $l1648:;
    if ($tmp1643) goto $l1651; else goto $l1652;
    $l1651:;
    if ($tmp1639 <= $tmp1641) goto $l1644; else goto $l1646;
    $l1652:;
    if ($tmp1639 < $tmp1641) goto $l1644; else goto $l1646;
    $l1649:;
    if ($tmp1643) goto $l1653; else goto $l1654;
    $l1653:;
    if ($tmp1639 >= $tmp1641) goto $l1644; else goto $l1646;
    $l1654:;
    if ($tmp1639 > $tmp1641) goto $l1644; else goto $l1646;
    $l1644:;
    {
        ITable* $tmp1657 = p_args->$class->itable;
        while ($tmp1657->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1657 = $tmp1657->next;
        }
        $fn1659 $tmp1658 = $tmp1657->methods[0];
        panda$core$Object* $tmp1660 = $tmp1658(p_args, i1638);
        org$pandalanguage$pandac$Type* $tmp1661 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1638);
        panda$core$Int64$nullable $tmp1662 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1660), $tmp1661);
        cost1656 = $tmp1662;
        if (((panda$core$Bit) { !cost1656.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1663 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1635, ((panda$core$Int64) cost1656.value));
        result1635 = $tmp1663;
    }
    $l1647:;
    if ($tmp1650) goto $l1665; else goto $l1666;
    $l1665:;
    int64_t $tmp1667 = $tmp1641 - i1638.value;
    if ($tmp1643) goto $l1668; else goto $l1669;
    $l1668:;
    if ($tmp1667 >= $tmp1642) goto $l1664; else goto $l1646;
    $l1669:;
    if ($tmp1667 > $tmp1642) goto $l1664; else goto $l1646;
    $l1666:;
    int64_t $tmp1671 = i1638.value - $tmp1641;
    if ($tmp1643) goto $l1672; else goto $l1673;
    $l1672:;
    if ($tmp1671 >= -$tmp1642) goto $l1664; else goto $l1646;
    $l1673:;
    if ($tmp1671 > -$tmp1642) goto $l1664; else goto $l1646;
    $l1664:;
    i1638.value += $tmp1642;
    goto $l1644;
    $l1646:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1676 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1677 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1676, p_expectedReturn);
        cost1675 = $tmp1677;
        if (((panda$core$Bit) { !cost1675.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1678 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1635, ((panda$core$Int64) cost1675.value));
        result1635 = $tmp1678;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1681 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1682 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1681);
    bool $tmp1680 = $tmp1682.value;
    if (!$tmp1680) goto $l1683;
    ITable* $tmp1684 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1684->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1684 = $tmp1684->next;
    }
    $fn1686 $tmp1685 = $tmp1684->methods[0];
    panda$core$Int64 $tmp1687 = $tmp1685(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1687, ((panda$core$Int64) { 1 }));
    $tmp1680 = $tmp1688.value;
    $l1683:;
    panda$core$Bit $tmp1689 = { $tmp1680 };
    bool $tmp1679 = $tmp1689.value;
    if (!$tmp1679) goto $l1690;
    panda$core$Object* $tmp1691 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1692 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1693 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1691)->type, $tmp1692);
    $tmp1679 = $tmp1693.value;
    $l1690:;
    panda$core$Bit $tmp1694 = { $tmp1679 };
    if ($tmp1694.value) {
    {
        panda$core$Int64 $tmp1695 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1635, ((panda$core$Int64) { 1 }));
        result1635 = $tmp1695;
    }
    }
    return ((panda$core$Int64$nullable) { result1635, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1696;
    panda$core$Int64$nullable best1699;
    panda$collections$Iterator* m$Iter1700;
    org$pandalanguage$pandac$MethodRef* m1712;
    panda$core$Int64$nullable cost1717;
    panda$collections$Array* $tmp1697 = (panda$collections$Array*) malloc(40);
    $tmp1697->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1697->refCount.value = 1;
    panda$collections$Array$init($tmp1697);
    result1696 = $tmp1697;
    best1699 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1701 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1701->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1701 = $tmp1701->next;
        }
        $fn1703 $tmp1702 = $tmp1701->methods[0];
        panda$collections$Iterator* $tmp1704 = $tmp1702(((panda$collections$Iterable*) p_methods));
        m$Iter1700 = $tmp1704;
        $l1705:;
        ITable* $tmp1707 = m$Iter1700->$class->itable;
        while ($tmp1707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1707 = $tmp1707->next;
        }
        $fn1709 $tmp1708 = $tmp1707->methods[0];
        panda$core$Bit $tmp1710 = $tmp1708(m$Iter1700);
        panda$core$Bit $tmp1711 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1710);
        if (!$tmp1711.value) goto $l1706;
        {
            ITable* $tmp1713 = m$Iter1700->$class->itable;
            while ($tmp1713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1713 = $tmp1713->next;
            }
            $fn1715 $tmp1714 = $tmp1713->methods[1];
            panda$core$Object* $tmp1716 = $tmp1714(m$Iter1700);
            m1712 = ((org$pandalanguage$pandac$MethodRef*) $tmp1716);
            panda$core$Int64$nullable $tmp1718 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1712, p_args, p_expectedReturn);
            cost1717 = $tmp1718;
            if (((panda$core$Bit) { !cost1717.nonnull }).value) {
            {
                goto $l1705;
            }
            }
            bool $tmp1719 = ((panda$core$Bit) { !best1699.nonnull }).value;
            if ($tmp1719) goto $l1720;
            panda$core$Bit $tmp1721 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1717.value), ((panda$core$Int64) best1699.value));
            $tmp1719 = $tmp1721.value;
            $l1720:;
            panda$core$Bit $tmp1722 = { $tmp1719 };
            if ($tmp1722.value) {
            {
                panda$collections$Array$clear(result1696);
                best1699 = cost1717;
            }
            }
            panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1717.value), ((panda$core$Int64) best1699.value));
            if ($tmp1723.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1696, ((panda$core$Object*) m1712));
            }
            }
        }
        goto $l1705;
        $l1706:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1696));
    return best1699;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs1730;
    org$pandalanguage$pandac$IRNode* selfNode1766;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1781;
    org$pandalanguage$pandac$IRNode* coerced1804;
    org$pandalanguage$pandac$IRNode* result1824;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1724 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1725 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1725->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1725 = $tmp1725->next;
    }
    $fn1727 $tmp1726 = $tmp1725->methods[0];
    panda$core$Int64 $tmp1728 = $tmp1726(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1724, $tmp1728);
    PANDA_ASSERT($tmp1729.value);
    panda$collections$Array* $tmp1731 = (panda$collections$Array*) malloc(40);
    $tmp1731->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1731->refCount.value = 1;
    panda$collections$Array$init($tmp1731);
    finalArgs1730 = $tmp1731;
    bool $tmp1734 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1734) goto $l1735;
    panda$core$Bit $tmp1736 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1734 = $tmp1736.value;
    $l1735:;
    panda$core$Bit $tmp1737 = { $tmp1734 };
    bool $tmp1733 = $tmp1737.value;
    if (!$tmp1733) goto $l1738;
    panda$core$Bit $tmp1739 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1739);
    $tmp1733 = $tmp1740.value;
    $l1738:;
    panda$core$Bit $tmp1741 = { $tmp1733 };
    if ($tmp1741.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1742 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1743 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp1742);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1730, ((panda$core$Object*) $tmp1743));
    }
    }
    panda$core$Bit $tmp1744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1744.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1745 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1745)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1746.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1747 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1747->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1747->refCount.value = 1;
                panda$core$Object* $tmp1749 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1750 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1749));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1747, ((panda$core$Int64) { 1025 }), p_offset, $tmp1750);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1730, ((panda$core$Object*) $tmp1747));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1751);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1754 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1753 = $tmp1754.value;
        if (!$tmp1753) goto $l1755;
        panda$core$Bit $tmp1756 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1753 = $tmp1756.value;
        $l1755:;
        panda$core$Bit $tmp1757 = { $tmp1753 };
        bool $tmp1752 = $tmp1757.value;
        if (!$tmp1752) goto $l1758;
        panda$core$Bit $tmp1759 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1752 = $tmp1759.value;
        $l1758:;
        panda$core$Bit $tmp1760 = { $tmp1752 };
        if ($tmp1760.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1761);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1763 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1762 = $tmp1763.value;
    if (!$tmp1762) goto $l1764;
    $tmp1762 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1764:;
    panda$core$Bit $tmp1765 = { $tmp1762 };
    if ($tmp1765.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1767 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1767->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1767->refCount.value = 1;
        panda$core$Object* $tmp1769 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1770 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1769));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1767, ((panda$core$Int64) { 1025 }), p_offset, $tmp1770);
        selfNode1766 = $tmp1767;
        org$pandalanguage$pandac$Type* $tmp1771 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1772 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1766, $tmp1771);
        selfNode1766 = $tmp1772;
        PANDA_ASSERT(((panda$core$Bit) { selfNode1766 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1730, ((panda$core$Object*) selfNode1766));
        panda$core$Object* $tmp1773 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1774 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1773));
        panda$core$Bit $tmp1775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1774);
        if ($tmp1775.value) {
        {
            panda$core$String* $tmp1777 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1776, $tmp1777);
            panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1779);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1780);
        }
        }
    }
    }
    }
    ITable* $tmp1782 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1782->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1782 = $tmp1782->next;
    }
    $fn1784 $tmp1783 = $tmp1782->methods[0];
    panda$core$Int64 $tmp1785 = $tmp1783(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1781, ((panda$core$Int64) { 0 }), $tmp1785, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1787 = $tmp1781.start.value;
    panda$core$Int64 i1786 = { $tmp1787 };
    int64_t $tmp1789 = $tmp1781.end.value;
    int64_t $tmp1790 = $tmp1781.step.value;
    bool $tmp1791 = $tmp1781.inclusive.value;
    bool $tmp1798 = $tmp1790 > 0;
    if ($tmp1798) goto $l1796; else goto $l1797;
    $l1796:;
    if ($tmp1791) goto $l1799; else goto $l1800;
    $l1799:;
    if ($tmp1787 <= $tmp1789) goto $l1792; else goto $l1794;
    $l1800:;
    if ($tmp1787 < $tmp1789) goto $l1792; else goto $l1794;
    $l1797:;
    if ($tmp1791) goto $l1801; else goto $l1802;
    $l1801:;
    if ($tmp1787 >= $tmp1789) goto $l1792; else goto $l1794;
    $l1802:;
    if ($tmp1787 > $tmp1789) goto $l1792; else goto $l1794;
    $l1792:;
    {
        ITable* $tmp1805 = p_args->$class->itable;
        while ($tmp1805->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1805 = $tmp1805->next;
        }
        $fn1807 $tmp1806 = $tmp1805->methods[0];
        panda$core$Object* $tmp1808 = $tmp1806(p_args, i1786);
        org$pandalanguage$pandac$Type* $tmp1809 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1786);
        org$pandalanguage$pandac$IRNode* $tmp1810 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1808), $tmp1809);
        coerced1804 = $tmp1810;
        if (((panda$core$Bit) { coerced1804 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp1811 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1786);
        org$pandalanguage$pandac$IRNode* $tmp1812 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced1804, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1811)->type);
        coerced1804 = $tmp1812;
        if (((panda$core$Bit) { coerced1804 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1730, ((panda$core$Object*) coerced1804));
    }
    $l1795:;
    if ($tmp1798) goto $l1814; else goto $l1815;
    $l1814:;
    int64_t $tmp1816 = $tmp1789 - i1786.value;
    if ($tmp1791) goto $l1817; else goto $l1818;
    $l1817:;
    if ($tmp1816 >= $tmp1790) goto $l1813; else goto $l1794;
    $l1818:;
    if ($tmp1816 > $tmp1790) goto $l1813; else goto $l1794;
    $l1815:;
    int64_t $tmp1820 = i1786.value - $tmp1789;
    if ($tmp1791) goto $l1821; else goto $l1822;
    $l1821:;
    if ($tmp1820 >= -$tmp1790) goto $l1813; else goto $l1794;
    $l1822:;
    if ($tmp1820 > -$tmp1790) goto $l1813; else goto $l1794;
    $l1813:;
    i1786.value += $tmp1790;
    goto $l1792;
    $l1794:;
    panda$core$Bit $tmp1826 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s1825);
    if ($tmp1826.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1827 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1827->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1827->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1829 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1827, ((panda$core$Int64) { 1005 }), p_offset, $tmp1829, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1730));
        result1824 = $tmp1827;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp1830 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1830->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1830->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1830, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1730));
        result1824 = $tmp1830;
        org$pandalanguage$pandac$Type* $tmp1832 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1833 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1824, p_offset, ((panda$core$Bit) { false }), $tmp1832);
        result1824 = $tmp1833;
    }
    }
    return result1824;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1834 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp1834;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved1835;
    org$pandalanguage$pandac$ClassDecl* cl1837;
    org$pandalanguage$pandac$Symbol* s1841;
    org$pandalanguage$pandac$IRNode* ref1863;
    org$pandalanguage$pandac$IRNode* $tmp1836 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved1835 = $tmp1836;
    if (((panda$core$Bit) { resolved1835 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved1835->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp1838.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1839 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved1835->payload));
        cl1837 = $tmp1839;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1840 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved1835->type);
        cl1837 = $tmp1840;
    }
    }
    if (((panda$core$Bit) { cl1837 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1842 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1837);
    org$pandalanguage$pandac$Symbol* $tmp1843 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1842, p_name);
    s1841 = $tmp1843;
    if (((panda$core$Bit) { s1841 == NULL }).value) {
    {
        panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1844, ((org$pandalanguage$pandac$Symbol*) cl1837)->name);
        panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
        panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, p_name);
        panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, &$s1849);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1850);
        return NULL;
    }
    }
    panda$core$Bit $tmp1852 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1841->kind, ((panda$core$Int64) { 204 }));
    bool $tmp1851 = $tmp1852.value;
    if (!$tmp1851) goto $l1853;
    panda$core$Bit $tmp1854 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1841->kind, ((panda$core$Int64) { 205 }));
    $tmp1851 = $tmp1854.value;
    $l1853:;
    panda$core$Bit $tmp1855 = { $tmp1851 };
    if ($tmp1855.value) {
    {
        panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1856, ((org$pandalanguage$pandac$Symbol*) cl1837)->name);
        panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, &$s1858);
        panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, p_name);
        panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1861);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1862);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1864 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1837);
    org$pandalanguage$pandac$IRNode* $tmp1865 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->offset, p_target, s1841, $tmp1864);
    ref1863 = $tmp1865;
    if (((panda$core$Bit) { ref1863 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1866 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref1863, p_args, p_expectedType);
    return $tmp1866;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1867 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp1867;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target1868;
    panda$collections$Array* methods1875;
    org$pandalanguage$pandac$MethodDecl* first1880;
    panda$core$MutableString* msg1885;
    panda$core$String* separator1897;
    panda$collections$Iterator* a$Iter1899;
    org$pandalanguage$pandac$IRNode* a1911;
    org$pandalanguage$pandac$IRNode* target1925;
    panda$collections$Array* children1933;
    panda$collections$Array* types1939;
    panda$collections$Iterator* m$Iter1942;
    org$pandalanguage$pandac$MethodRef* m1954;
    org$pandalanguage$pandac$IRNode* target1964;
    org$pandalanguage$pandac$IRNode* initCall1967;
    panda$collections$Array* children1971;
    org$pandalanguage$pandac$IRNode* resolved1976;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp1869 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1869, ((panda$core$Int64) { 0 }));
            if ($tmp1870.value) {
            {
                target1868 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp1871 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp1872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1871, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1872.value);
                panda$core$Object* $tmp1873 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target1868 = ((org$pandalanguage$pandac$IRNode*) $tmp1873);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1874 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1868, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp1874;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp1876 = (panda$collections$Array*) malloc(40);
            $tmp1876->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1876->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp1876, ((panda$collections$ListView*) p_m->payload));
            methods1875 = $tmp1876;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods1875, p_args, p_expectedType);
            panda$core$Int64 $tmp1878 = panda$collections$Array$get_count$R$panda$core$Int64(methods1875);
            panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1878, ((panda$core$Int64) { 0 }));
            if ($tmp1879.value) {
            {
                ITable* $tmp1881 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp1881->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1881 = $tmp1881->next;
                }
                $fn1883 $tmp1882 = $tmp1881->methods[0];
                panda$core$Object* $tmp1884 = $tmp1882(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first1880 = ((org$pandalanguage$pandac$MethodRef*) $tmp1884)->value;
                panda$core$MutableString* $tmp1886 = (panda$core$MutableString*) malloc(40);
                $tmp1886->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp1886->refCount.value = 1;
                panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1888, ((org$pandalanguage$pandac$Symbol*) first1880->owner)->name);
                panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1890);
                panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1892, ((org$pandalanguage$pandac$Symbol*) first1880)->name);
                panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
                panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, $tmp1895);
                panda$core$MutableString$init$panda$core$String($tmp1886, $tmp1896);
                msg1885 = $tmp1886;
                separator1897 = &$s1898;
                {
                    ITable* $tmp1900 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp1900->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1900 = $tmp1900->next;
                    }
                    $fn1902 $tmp1901 = $tmp1900->methods[0];
                    panda$collections$Iterator* $tmp1903 = $tmp1901(((panda$collections$Iterable*) p_args));
                    a$Iter1899 = $tmp1903;
                    $l1904:;
                    ITable* $tmp1906 = a$Iter1899->$class->itable;
                    while ($tmp1906->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1906 = $tmp1906->next;
                    }
                    $fn1908 $tmp1907 = $tmp1906->methods[0];
                    panda$core$Bit $tmp1909 = $tmp1907(a$Iter1899);
                    panda$core$Bit $tmp1910 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1909);
                    if (!$tmp1910.value) goto $l1905;
                    {
                        ITable* $tmp1912 = a$Iter1899->$class->itable;
                        while ($tmp1912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1912 = $tmp1912->next;
                        }
                        $fn1914 $tmp1913 = $tmp1912->methods[1];
                        panda$core$Object* $tmp1915 = $tmp1913(a$Iter1899);
                        a1911 = ((org$pandalanguage$pandac$IRNode*) $tmp1915);
                        panda$core$MutableString$append$panda$core$String(msg1885, separator1897);
                        panda$core$MutableString$append$panda$core$Object(msg1885, ((panda$core$Object*) a1911->type));
                        separator1897 = &$s1916;
                    }
                    goto $l1904;
                    $l1905:;
                }
                panda$core$MutableString$append$panda$core$String(msg1885, &$s1917);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1918, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1919, &$s1920);
                    panda$core$MutableString$append$panda$core$String(msg1885, $tmp1921);
                }
                }
                panda$core$String* $tmp1922 = panda$core$MutableString$convert$R$panda$core$String(msg1885);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_m->offset, $tmp1922);
                return NULL;
            }
            }
            panda$core$Int64 $tmp1923 = panda$collections$Array$get_count$R$panda$core$Int64(methods1875);
            panda$core$Bit $tmp1924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1923, ((panda$core$Int64) { 1 }));
            if ($tmp1924.value) {
            {
                panda$core$Int64 $tmp1926 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1926, ((panda$core$Int64) { 1 }));
                if ($tmp1927.value) {
                {
                    panda$core$Object* $tmp1928 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target1925 = ((org$pandalanguage$pandac$IRNode*) $tmp1928);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp1929 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1929, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp1930.value);
                    target1925 = NULL;
                }
                }
                panda$core$Object* $tmp1931 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1875, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1932 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1925, ((org$pandalanguage$pandac$MethodRef*) $tmp1931), p_args);
                return $tmp1932;
            }
            }
            panda$collections$Array* $tmp1934 = (panda$collections$Array*) malloc(40);
            $tmp1934->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1934->refCount.value = 1;
            panda$collections$Array$init($tmp1934);
            children1933 = $tmp1934;
            org$pandalanguage$pandac$IRNode* $tmp1936 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1936->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1936->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1938 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1936, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp1938, ((panda$core$Object*) methods1875), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children1933, ((panda$core$Object*) $tmp1936));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children1933, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp1940 = (panda$collections$Array*) malloc(40);
            $tmp1940->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1940->refCount.value = 1;
            panda$collections$Array$init($tmp1940);
            types1939 = $tmp1940;
            {
                ITable* $tmp1943 = ((panda$collections$Iterable*) methods1875)->$class->itable;
                while ($tmp1943->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1943 = $tmp1943->next;
                }
                $fn1945 $tmp1944 = $tmp1943->methods[0];
                panda$collections$Iterator* $tmp1946 = $tmp1944(((panda$collections$Iterable*) methods1875));
                m$Iter1942 = $tmp1946;
                $l1947:;
                ITable* $tmp1949 = m$Iter1942->$class->itable;
                while ($tmp1949->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1949 = $tmp1949->next;
                }
                $fn1951 $tmp1950 = $tmp1949->methods[0];
                panda$core$Bit $tmp1952 = $tmp1950(m$Iter1942);
                panda$core$Bit $tmp1953 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1952);
                if (!$tmp1953.value) goto $l1948;
                {
                    ITable* $tmp1955 = m$Iter1942->$class->itable;
                    while ($tmp1955->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1955 = $tmp1955->next;
                    }
                    $fn1957 $tmp1956 = $tmp1955->methods[1];
                    panda$core$Object* $tmp1958 = $tmp1956(m$Iter1942);
                    m1954 = ((org$pandalanguage$pandac$MethodRef*) $tmp1958);
                    org$pandalanguage$pandac$Type* $tmp1959 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1954);
                    panda$collections$Array$add$panda$collections$Array$T(types1939, ((panda$core$Object*) $tmp1959));
                }
                goto $l1947;
                $l1948:;
            }
            org$pandalanguage$pandac$IRNode* $tmp1960 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1960->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1962 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp1962->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp1962->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1962, ((panda$collections$ListView*) types1939));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1960, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp1962, ((panda$collections$ListView*) children1933));
            return $tmp1960;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp1965 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1965->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1965->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1965, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target1964 = $tmp1965;
            org$pandalanguage$pandac$IRNode* $tmp1969 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1964, &$s1968, p_args);
            org$pandalanguage$pandac$IRNode* $tmp1970 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1969);
            initCall1967 = $tmp1970;
            if (((panda$core$Bit) { initCall1967 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1972 = (panda$collections$Array*) malloc(40);
            $tmp1972->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1972->refCount.value = 1;
            panda$collections$Array$init($tmp1972);
            children1971 = $tmp1972;
            panda$collections$Array$add$panda$collections$Array$T(children1971, ((panda$core$Object*) initCall1967));
            org$pandalanguage$pandac$IRNode* $tmp1974 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1974->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1974->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1974, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children1971));
            return $tmp1974;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp1977 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved1976 = $tmp1977;
            if (((panda$core$Bit) { resolved1976 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp1979 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1978, ((panda$core$Object*) resolved1976->type));
            panda$core$String* $tmp1981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1979, &$s1980);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, resolved1976->offset, $tmp1981);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes1982;
    panda$core$MutableString* typeName1985;
    panda$core$String* separator1989;
    panda$collections$Iterator* p$Iter1991;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2003;
    panda$core$Int64 kind2009;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp1983 = (panda$collections$Array*) malloc(40);
    $tmp1983->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1983->refCount.value = 1;
    panda$collections$Array$init($tmp1983);
    subtypes1982 = $tmp1983;
    panda$core$MutableString* $tmp1986 = (panda$core$MutableString*) malloc(40);
    $tmp1986->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1986->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1986, &$s1988);
    typeName1985 = $tmp1986;
    separator1989 = &$s1990;
    {
        ITable* $tmp1992 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1992->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1992 = $tmp1992->next;
        }
        $fn1994 $tmp1993 = $tmp1992->methods[0];
        panda$collections$Iterator* $tmp1995 = $tmp1993(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1991 = $tmp1995;
        $l1996:;
        ITable* $tmp1998 = p$Iter1991->$class->itable;
        while ($tmp1998->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1998 = $tmp1998->next;
        }
        $fn2000 $tmp1999 = $tmp1998->methods[0];
        panda$core$Bit $tmp2001 = $tmp1999(p$Iter1991);
        panda$core$Bit $tmp2002 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2001);
        if (!$tmp2002.value) goto $l1997;
        {
            ITable* $tmp2004 = p$Iter1991->$class->itable;
            while ($tmp2004->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2004 = $tmp2004->next;
            }
            $fn2006 $tmp2005 = $tmp2004->methods[1];
            panda$core$Object* $tmp2007 = $tmp2005(p$Iter1991);
            p2003 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2007);
            panda$core$MutableString$append$panda$core$String(typeName1985, separator1989);
            panda$core$MutableString$append$panda$core$String(typeName1985, ((org$pandalanguage$pandac$Symbol*) p2003->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes1982, ((panda$core$Object*) p2003->type));
            separator1989 = &$s2008;
        }
        goto $l1996;
        $l1997:;
    }
    panda$core$Bit $tmp2010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2010.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1985, &$s2011);
        kind2009 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName1985, &$s2012);
        kind2009 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes1982, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2013 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2014 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2013);
    if ($tmp2014.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName1985, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName1985, &$s2015);
    org$pandalanguage$pandac$Type* $tmp2016 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2016->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2016->refCount.value = 1;
    panda$core$String* $tmp2018 = panda$core$MutableString$convert$R$panda$core$String(typeName1985);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2016, $tmp2018, kind2009, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes1982), ((panda$core$Bit) { true }));
    return $tmp2016;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2019;
    panda$core$MutableString* typeName2022;
    panda$collections$Iterator* p$Iter2026;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2038;
    panda$core$Int64 kind2044;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2020 = (panda$collections$Array*) malloc(40);
    $tmp2020->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2020->refCount.value = 1;
    panda$collections$Array$init($tmp2020);
    subtypes2019 = $tmp2020;
    panda$core$MutableString* $tmp2023 = (panda$core$MutableString*) malloc(40);
    $tmp2023->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2023->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2023, &$s2025);
    typeName2022 = $tmp2023;
    panda$core$MutableString$append$panda$core$String(typeName2022, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2019, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2027 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2027->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2027 = $tmp2027->next;
        }
        $fn2029 $tmp2028 = $tmp2027->methods[0];
        panda$collections$Iterator* $tmp2030 = $tmp2028(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2026 = $tmp2030;
        $l2031:;
        ITable* $tmp2033 = p$Iter2026->$class->itable;
        while ($tmp2033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2033 = $tmp2033->next;
        }
        $fn2035 $tmp2034 = $tmp2033->methods[0];
        panda$core$Bit $tmp2036 = $tmp2034(p$Iter2026);
        panda$core$Bit $tmp2037 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2036);
        if (!$tmp2037.value) goto $l2032;
        {
            ITable* $tmp2039 = p$Iter2026->$class->itable;
            while ($tmp2039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2039 = $tmp2039->next;
            }
            $fn2041 $tmp2040 = $tmp2039->methods[1];
            panda$core$Object* $tmp2042 = $tmp2040(p$Iter2026);
            p2038 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2042);
            panda$core$MutableString$append$panda$core$String(typeName2022, &$s2043);
            panda$core$MutableString$append$panda$core$String(typeName2022, ((org$pandalanguage$pandac$Symbol*) p2038->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2019, ((panda$core$Object*) p2038->type));
        }
        goto $l2031;
        $l2032:;
    }
    panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2045.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2022, &$s2046);
        kind2044 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2022, &$s2047);
        kind2044 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2019, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2048 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2049 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2048);
    if ($tmp2049.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2022, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2022, &$s2050);
    org$pandalanguage$pandac$Type* $tmp2051 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2051->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2051->refCount.value = 1;
    panda$core$String* $tmp2053 = panda$core$MutableString$convert$R$panda$core$String(typeName2022);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2051, $tmp2053, kind2044, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2019), ((panda$core$Bit) { true }));
    return $tmp2051;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2054;
    org$pandalanguage$pandac$MethodDecl* $tmp2055 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2054 = $tmp2055;
    if (((panda$core$Bit) { inherited2054 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2056 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2056;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2057 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2054);
    return $tmp2057;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2058 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2059 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2058);
    return $tmp2059;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2060;
    org$pandalanguage$pandac$MethodDecl* $tmp2061 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2060 = $tmp2061;
    if (((panda$core$Bit) { inherited2060 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2062 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2062;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2063 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2060, p_selfType);
    return $tmp2063;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2064;
        }
        break;
        case 52:
        {
            return &$s2065;
        }
        break;
        case 53:
        {
            return &$s2066;
        }
        break;
        case 54:
        {
            return &$s2067;
        }
        break;
        case 55:
        {
            return &$s2068;
        }
        break;
        case 56:
        {
            return &$s2069;
        }
        break;
        case 57:
        {
            return &$s2070;
        }
        break;
        case 58:
        {
            return &$s2071;
        }
        break;
        case 59:
        {
            return &$s2072;
        }
        break;
        case 63:
        {
            return &$s2073;
        }
        break;
        case 62:
        {
            return &$s2074;
        }
        break;
        case 65:
        {
            return &$s2075;
        }
        break;
        case 64:
        {
            return &$s2076;
        }
        break;
        case 68:
        {
            return &$s2077;
        }
        break;
        case 69:
        {
            return &$s2078;
        }
        break;
        case 66:
        {
            return &$s2079;
        }
        break;
        case 67:
        {
            return &$s2080;
        }
        break;
        case 70:
        {
            return &$s2081;
        }
        break;
        case 71:
        {
            return &$s2082;
        }
        break;
        case 49:
        {
            return &$s2083;
        }
        break;
        case 50:
        {
            return &$s2084;
        }
        break;
        case 72:
        {
            return &$s2085;
        }
        break;
        case 1:
        {
            return &$s2086;
        }
        break;
        case 101:
        {
            return &$s2087;
        }
        break;
        case 73:
        {
            return &$s2088;
        }
        break;
        case 60:
        {
            return &$s2089;
        }
        break;
        case 61:
        {
            return &$s2090;
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
            panda$core$Int64 $tmp2091 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2091, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2092.value);
            panda$core$Bit $tmp2093 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2093.value) {
            {
                panda$core$Object* $tmp2094 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2095 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2094));
                return $tmp2095;
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
            panda$core$Object* $tmp2096 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2097 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2096));
            return $tmp2097;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2123;
    panda$core$Int64 r2125;
    panda$core$Bit $tmp2099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2098 = $tmp2099.value;
    if ($tmp2098) goto $l2100;
    panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2098 = $tmp2101.value;
    $l2100:;
    panda$core$Bit $tmp2102 = { $tmp2098 };
    PANDA_ASSERT($tmp2102.value);
    panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2103 = $tmp2104.value;
    if ($tmp2103) goto $l2105;
    panda$core$Bit $tmp2106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2103 = $tmp2106.value;
    $l2105:;
    panda$core$Bit $tmp2107 = { $tmp2103 };
    PANDA_ASSERT($tmp2107.value);
    panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2109 = $tmp2110.value;
    if ($tmp2109) goto $l2111;
    panda$core$UInt64 $tmp2113 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2114 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2113);
    bool $tmp2112 = $tmp2114.value;
    if (!$tmp2112) goto $l2115;
    panda$core$Bit $tmp2116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2112 = $tmp2116.value;
    $l2115:;
    panda$core$Bit $tmp2117 = { $tmp2112 };
    $tmp2109 = $tmp2117.value;
    $l2111:;
    panda$core$Bit $tmp2118 = { $tmp2109 };
    bool $tmp2108 = $tmp2118.value;
    if ($tmp2108) goto $l2119;
    panda$core$UInt64 $tmp2120 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2121 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2120);
    $tmp2108 = $tmp2121.value;
    $l2119:;
    panda$core$Bit $tmp2122 = { $tmp2108 };
    if ($tmp2122.value) {
    {
        panda$core$Int64 $tmp2124 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2123 = $tmp2124;
        panda$core$Int64 $tmp2126 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2125 = $tmp2126;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2127 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2127->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2127->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2129 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2130 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2131 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2130);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2127, ((panda$core$Int64) { 1004 }), p_offset, $tmp2129, $tmp2131);
                return $tmp2127;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2132 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2132->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2132->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2134 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2135 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2136 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2135);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2132, ((panda$core$Int64) { 1004 }), p_offset, $tmp2134, $tmp2136);
                return $tmp2132;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2137 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2137->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2137->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2139 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2140 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2141 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2140);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2137, ((panda$core$Int64) { 1004 }), p_offset, $tmp2139, $tmp2141);
                return $tmp2137;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2142 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2142->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2142->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2144 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2145 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2146 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2145);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2142, ((panda$core$Int64) { 1004 }), p_offset, $tmp2144, $tmp2146);
                return $tmp2142;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2147 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2147->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2147->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2149 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2150 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2151 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2150);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2147, ((panda$core$Int64) { 1004 }), p_offset, $tmp2149, $tmp2151);
                return $tmp2147;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2152 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2152->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2152->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2154 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2123, r2125);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2152, ((panda$core$Int64) { 1011 }), p_offset, $tmp2154, $tmp2155);
                return $tmp2152;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2156 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2156->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2156->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2158 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2159 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2123, r2125);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2156, ((panda$core$Int64) { 1011 }), p_offset, $tmp2158, $tmp2159);
                return $tmp2156;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2160 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2160->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2160->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2162 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2163 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2123, r2125);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2160, ((panda$core$Int64) { 1011 }), p_offset, $tmp2162, $tmp2163);
                return $tmp2160;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2164 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2164->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2164->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2166 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2167 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2123, r2125);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2164, ((panda$core$Int64) { 1011 }), p_offset, $tmp2166, $tmp2167);
                return $tmp2164;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2168 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2168->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2168->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2170 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2171 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2123, r2125);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2168, ((panda$core$Int64) { 1011 }), p_offset, $tmp2170, $tmp2171);
                return $tmp2168;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2172 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2172->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2172->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2174 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2175 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2123, r2125);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2172, ((panda$core$Int64) { 1011 }), p_offset, $tmp2174, $tmp2175);
                return $tmp2172;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2176 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2176->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2176->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2178 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2179 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2180 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2179);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2176, ((panda$core$Int64) { 1004 }), p_offset, $tmp2178, $tmp2180);
                return $tmp2176;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2181 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2181->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2181->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2183 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2184 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2185 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2184);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2181, ((panda$core$Int64) { 1004 }), p_offset, $tmp2183, $tmp2185);
                return $tmp2181;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2186 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2186->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2186->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2188 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2189 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2190 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2189);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2186, ((panda$core$Int64) { 1004 }), p_offset, $tmp2188, $tmp2190);
                return $tmp2186;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2191 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2191->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2191->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2193 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2194 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2195 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2194);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2191, ((panda$core$Int64) { 1004 }), p_offset, $tmp2193, $tmp2195);
                return $tmp2191;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2196 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2196->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2196->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2198 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2199 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2123, r2125);
                panda$core$UInt64 $tmp2200 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2199);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2196, ((panda$core$Int64) { 1004 }), p_offset, $tmp2198, $tmp2200);
                return $tmp2196;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s2201);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2202.value) {
    {
        panda$core$Object* $tmp2203 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2203);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2208;
    org$pandalanguage$pandac$IRNode* resolved2216;
    panda$collections$Array* children2221;
    panda$core$UInt64 baseId2227;
    org$pandalanguage$pandac$IRNode* base2228;
    panda$core$UInt64 indexId2235;
    org$pandalanguage$pandac$IRNode* index2236;
    org$pandalanguage$pandac$IRNode* baseRef2241;
    org$pandalanguage$pandac$IRNode* indexRef2244;
    org$pandalanguage$pandac$IRNode* rhsIndex2247;
    org$pandalanguage$pandac$IRNode* value2249;
    panda$core$Bit $tmp2204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2204.value);
    panda$core$Int64 $tmp2205 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2205, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2206.value);
    panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2207.value) {
    {
        panda$collections$Array* $tmp2209 = (panda$collections$Array*) malloc(40);
        $tmp2209->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2209->refCount.value = 1;
        panda$collections$Array$init($tmp2209);
        args2208 = $tmp2209;
        panda$core$Object* $tmp2211 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2208, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2211)));
        panda$collections$Array$add$panda$collections$Array$T(args2208, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2214 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2212), &$s2213, ((panda$collections$ListView*) args2208));
        return $tmp2214;
    }
    }
    panda$core$Bit $tmp2215 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2215.value);
    org$pandalanguage$pandac$IRNode* $tmp2217 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2216 = $tmp2217;
    if (((panda$core$Bit) { resolved2216 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2218 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2216);
    resolved2216 = $tmp2218;
    panda$core$Int64 $tmp2219 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2216->children);
    panda$core$Bit $tmp2220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2219, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2220.value);
    panda$collections$Array* $tmp2222 = (panda$collections$Array*) malloc(40);
    $tmp2222->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2222->refCount.value = 1;
    panda$collections$Array$init($tmp2222);
    children2221 = $tmp2222;
    panda$core$Object* $tmp2224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2216->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2225 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2224));
    panda$collections$Array$add$panda$collections$Array$T(children2221, ((panda$core$Object*) $tmp2225));
    panda$core$UInt64 $tmp2226 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2226;
    baseId2227 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2229 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2229->refCount.value = 1;
    panda$core$Object* $tmp2231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2221, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2221, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2229, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2231)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2232)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2227)), ((panda$collections$ListView*) children2221));
    base2228 = $tmp2229;
    panda$collections$Array$clear(children2221);
    panda$core$Object* $tmp2233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2216->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2221, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2233)));
    panda$core$UInt64 $tmp2234 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2234;
    indexId2235 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2237 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2237->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2237->refCount.value = 1;
    panda$core$Object* $tmp2239 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2221, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2240 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2221, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2237, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2239)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2240)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2235)), ((panda$collections$ListView*) children2221));
    index2236 = $tmp2237;
    org$pandalanguage$pandac$IRNode* $tmp2242 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2242->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2242->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2242, ((panda$core$Int64) { 1028 }), base2228->offset, base2228->type, baseId2227);
    baseRef2241 = $tmp2242;
    org$pandalanguage$pandac$IRNode* $tmp2245 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2245->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2245, ((panda$core$Int64) { 1028 }), index2236->offset, index2236->type, indexId2235);
    indexRef2244 = $tmp2245;
    org$pandalanguage$pandac$IRNode* $tmp2248 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, baseRef2241, ((panda$core$Int64) { 101 }), indexRef2244);
    rhsIndex2247 = $tmp2248;
    if (((panda$core$Bit) { rhsIndex2247 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2250 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2251 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, rhsIndex2247, $tmp2250, p_right);
    value2249 = $tmp2251;
    if (((panda$core$Bit) { value2249 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2254 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2247->type);
    bool $tmp2253 = $tmp2254.value;
    if (!$tmp2253) goto $l2255;
    panda$core$Bit $tmp2256 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2253 = $tmp2256.value;
    $l2255:;
    panda$core$Bit $tmp2257 = { $tmp2253 };
    bool $tmp2252 = $tmp2257.value;
    if (!$tmp2252) goto $l2258;
    panda$core$Bit $tmp2259 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2247->type, value2249->type);
    $tmp2252 = $tmp2259.value;
    $l2258:;
    panda$core$Bit $tmp2260 = { $tmp2252 };
    if ($tmp2260.value) {
    {
        panda$collections$Array* $tmp2262 = (panda$collections$Array*) malloc(40);
        $tmp2262->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2262->refCount.value = 1;
        panda$collections$Array$init($tmp2262);
        org$pandalanguage$pandac$IRNode* $tmp2264 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2249, &$s2261, ((panda$collections$ListView*) $tmp2262), resolved2216->type);
        value2249 = $tmp2264;
        if (((panda$core$Bit) { value2249 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2221);
    panda$collections$Array$add$panda$collections$Array$T(children2221, ((panda$core$Object*) index2236));
    panda$collections$Array$add$panda$collections$Array$T(children2221, ((panda$core$Object*) value2249));
    org$pandalanguage$pandac$IRNode* $tmp2266 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2228, &$s2265, ((panda$collections$ListView*) children2221));
    return $tmp2266;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2267;
    org$pandalanguage$pandac$IRNode* right2268;
    panda$core$Int64 kind2292;
    org$pandalanguage$pandac$IRNode* resolved2299;
    panda$collections$Array* children2301;
    org$pandalanguage$pandac$IRNode* resolved2308;
    panda$collections$Array* children2310;
    org$pandalanguage$pandac$ClassDecl* cl2322;
    org$pandalanguage$pandac$ClassDecl* cl2339;
    org$pandalanguage$pandac$IRNode* finalLeft2355;
    org$pandalanguage$pandac$IRNode* finalRight2358;
    panda$collections$Array* children2361;
    panda$collections$Array* children2375;
    panda$collections$Array* children2387;
    org$pandalanguage$pandac$IRNode* reusedLeft2393;
    org$pandalanguage$pandac$ClassDecl* cl2410;
    panda$collections$ListView* parameters2412;
    org$pandalanguage$pandac$Symbol* methods2414;
    org$pandalanguage$pandac$Type* type2418;
    panda$collections$Array* types2419;
    org$pandalanguage$pandac$MethodDecl* m2423;
    panda$collections$Iterator* m$Iter2428;
    org$pandalanguage$pandac$MethodDecl* m2440;
    panda$collections$Array* children2451;
    panda$collections$Array* children2480;
    panda$collections$Array* children2496;
    org$pandalanguage$pandac$Type* resultType2519;
    org$pandalanguage$pandac$IRNode* result2523;
    org$pandalanguage$pandac$IRNode* resolved2526;
    org$pandalanguage$pandac$IRNode* target2532;
    left2267 = p_rawLeft;
    right2268 = p_rawRight;
    panda$core$Bit $tmp2269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2267->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2269.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2270 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2268);
        right2268 = $tmp2270;
        if (((panda$core$Bit) { right2268 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2271 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2267, right2268->type);
        if (((panda$core$Bit) { $tmp2271.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2272 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2267, right2268->type);
            left2267 = $tmp2272;
        }
        }
    }
    }
    panda$core$Bit $tmp2274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2268->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2273 = $tmp2274.value;
    if (!$tmp2273) goto $l2275;
    panda$core$Int64$nullable $tmp2276 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2268, left2267->type);
    $tmp2273 = ((panda$core$Bit) { $tmp2276.nonnull }).value;
    $l2275:;
    panda$core$Bit $tmp2277 = { $tmp2273 };
    if ($tmp2277.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2278 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2268, left2267->type);
        right2268 = $tmp2278;
    }
    }
    panda$core$Bit $tmp2282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2281 = $tmp2282.value;
    if ($tmp2281) goto $l2283;
    panda$core$Bit $tmp2284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2281 = $tmp2284.value;
    $l2283:;
    panda$core$Bit $tmp2285 = { $tmp2281 };
    bool $tmp2280 = $tmp2285.value;
    if ($tmp2280) goto $l2286;
    panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2280 = $tmp2287.value;
    $l2286:;
    panda$core$Bit $tmp2288 = { $tmp2280 };
    bool $tmp2279 = $tmp2288.value;
    if ($tmp2279) goto $l2289;
    panda$core$Bit $tmp2290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2279 = $tmp2290.value;
    $l2289:;
    panda$core$Bit $tmp2291 = { $tmp2279 };
    if ($tmp2291.value) {
    {
        panda$core$Bit $tmp2294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2293 = $tmp2294.value;
        if ($tmp2293) goto $l2295;
        panda$core$Bit $tmp2296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2293 = $tmp2296.value;
        $l2295:;
        panda$core$Bit $tmp2297 = { $tmp2293 };
        if ($tmp2297.value) {
        {
            kind2292 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2292 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2267->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2298.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2300 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2268);
            resolved2299 = $tmp2300;
            if (((panda$core$Bit) { resolved2299 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2302 = (panda$collections$Array*) malloc(40);
            $tmp2302->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2302->refCount.value = 1;
            panda$collections$Array$init($tmp2302);
            children2301 = $tmp2302;
            panda$collections$Array$add$panda$collections$Array$T(children2301, ((panda$core$Object*) resolved2299));
            org$pandalanguage$pandac$IRNode* $tmp2304 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2304->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2304->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2306 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2304, kind2292, p_offset, $tmp2306, ((panda$collections$ListView*) children2301));
            return $tmp2304;
        }
        }
        panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2268->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2307.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2309 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2267);
            resolved2308 = $tmp2309;
            if (((panda$core$Bit) { resolved2308 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2311 = (panda$collections$Array*) malloc(40);
            $tmp2311->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2311->refCount.value = 1;
            panda$collections$Array$init($tmp2311);
            children2310 = $tmp2311;
            panda$collections$Array$add$panda$collections$Array$T(children2310, ((panda$core$Object*) resolved2308));
            org$pandalanguage$pandac$IRNode* $tmp2313 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2313->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2313->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2315 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2313, kind2292, p_offset, $tmp2315, ((panda$collections$ListView*) children2310));
            return $tmp2313;
        }
        }
    }
    }
    panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2316 = $tmp2317.value;
    if ($tmp2316) goto $l2318;
    panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2316 = $tmp2319.value;
    $l2318:;
    panda$core$Bit $tmp2320 = { $tmp2316 };
    if ($tmp2320.value) {
    {
        panda$core$Bit $tmp2321 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2267->type);
        if ($tmp2321.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2323 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2267->type);
            cl2322 = $tmp2323;
            if (((panda$core$Bit) { cl2322 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2324 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2322);
            if ($tmp2324.value) {
            {
                panda$core$String* $tmp2326 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2325, $tmp2326);
                panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2328);
                panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2329, ((panda$core$Object*) left2267->type));
                panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
                panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2333, ((panda$core$Object*) right2268->type));
                panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, &$s2335);
                panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, $tmp2336);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2337);
            }
            }
        }
        }
        panda$core$Bit $tmp2338 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2268->type);
        if ($tmp2338.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2340 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2268->type);
            cl2339 = $tmp2340;
            if (((panda$core$Bit) { cl2339 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2341 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2339);
            if ($tmp2341.value) {
            {
                panda$core$String* $tmp2343 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2342, $tmp2343);
                panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, &$s2345);
                panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2346, ((panda$core$Object*) left2267->type));
                panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, &$s2348);
                panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2350, ((panda$core$Object*) right2268->type));
                panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2351, &$s2352);
                panda$core$String* $tmp2354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, $tmp2353);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2354);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2356 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2357 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2267, $tmp2356);
        finalLeft2355 = $tmp2357;
        if (((panda$core$Bit) { finalLeft2355 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2359 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2360 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2268, $tmp2359);
        finalRight2358 = $tmp2360;
        if (((panda$core$Bit) { finalRight2358 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2362 = (panda$collections$Array*) malloc(40);
        $tmp2362->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2362->refCount.value = 1;
        panda$collections$Array$init($tmp2362);
        children2361 = $tmp2362;
        panda$collections$Array$add$panda$collections$Array$T(children2361, ((panda$core$Object*) finalLeft2355));
        panda$collections$Array$add$panda$collections$Array$T(children2361, ((panda$core$Object*) finalRight2358));
        org$pandalanguage$pandac$IRNode* $tmp2364 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2364->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2366 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2364, ((panda$core$Int64) { 1023 }), p_offset, $tmp2366, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2361));
        return $tmp2364;
    }
    }
    panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2367.value) {
    {
        panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2267->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2368.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2369 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2267, p_op, right2268);
            return $tmp2369;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2370 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2267);
        left2267 = $tmp2370;
        if (((panda$core$Bit) { left2267 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2371 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2268, left2267->type);
        right2268 = $tmp2371;
        if (((panda$core$Bit) { right2268 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2372 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2267);
        panda$core$Bit $tmp2373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2372);
        if ($tmp2373.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2267->offset, &$s2374);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2376 = (panda$collections$Array*) malloc(40);
        $tmp2376->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2376->refCount.value = 1;
        panda$collections$Array$init($tmp2376);
        children2375 = $tmp2376;
        panda$collections$Array$add$panda$collections$Array$T(children2375, ((panda$core$Object*) left2267));
        panda$collections$Array$add$panda$collections$Array$T(children2375, ((panda$core$Object*) right2268));
        org$pandalanguage$pandac$IRNode* $tmp2378 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2378->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2378->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2378, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2375));
        return $tmp2378;
    }
    }
    panda$core$Bit $tmp2380 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2380.value) {
    {
        panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2267->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2381.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2382 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2267, p_op, right2268);
            return $tmp2382;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2383 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2267);
        left2267 = $tmp2383;
        if (((panda$core$Bit) { left2267 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2384 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2267);
        panda$core$Bit $tmp2385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2384);
        if ($tmp2385.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2267->offset, &$s2386);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2388 = (panda$collections$Array*) malloc(40);
        $tmp2388->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2388->refCount.value = 1;
        panda$collections$Array$init($tmp2388);
        children2387 = $tmp2388;
        panda$collections$Array$add$panda$collections$Array$T(children2387, ((panda$core$Object*) left2267));
        panda$core$UInt64 $tmp2390 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2390;
        org$pandalanguage$pandac$IRNode* $tmp2391 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2391->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2391->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2391, ((panda$core$Int64) { 1027 }), left2267->offset, left2267->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2387));
        left2267 = $tmp2391;
        org$pandalanguage$pandac$IRNode* $tmp2394 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2394->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2394, ((panda$core$Int64) { 1028 }), left2267->offset, left2267->type, self->reusedValueCount);
        reusedLeft2393 = $tmp2394;
        panda$core$Int64 $tmp2396 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2397 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, reusedLeft2393, $tmp2396, right2268);
        right2268 = $tmp2397;
        if (((panda$core$Bit) { right2268 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2399 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2267->type);
        bool $tmp2398 = $tmp2399.value;
        if (!$tmp2398) goto $l2400;
        panda$core$Bit $tmp2401 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2267->type, right2268->type);
        $tmp2398 = $tmp2401.value;
        $l2400:;
        panda$core$Bit $tmp2402 = { $tmp2398 };
        if ($tmp2402.value) {
        {
            panda$collections$Array* $tmp2404 = (panda$collections$Array*) malloc(40);
            $tmp2404->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2404->refCount.value = 1;
            panda$collections$Array$init($tmp2404);
            org$pandalanguage$pandac$IRNode* $tmp2406 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2268, &$s2403, ((panda$collections$ListView*) $tmp2404), left2267->type);
            right2268 = $tmp2406;
            if (((panda$core$Bit) { right2268 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2407 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2267, ((panda$core$Int64) { 73 }), right2268);
        return $tmp2407;
    }
    }
    panda$core$Bit $tmp2408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2408.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2409 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2267);
        left2267 = $tmp2409;
        if (((panda$core$Bit) { left2267 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2411 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2267->type);
        cl2410 = $tmp2411;
        if (((panda$core$Bit) { cl2410 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2413 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2267->type);
        parameters2412 = $tmp2413;
        org$pandalanguage$pandac$SymbolTable* $tmp2415 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2410);
        org$pandalanguage$pandac$Symbol* $tmp2417 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2415, &$s2416);
        methods2414 = $tmp2417;
        if (((panda$core$Bit) { methods2414 != NULL }).value) {
        {
            panda$collections$Array* $tmp2420 = (panda$collections$Array*) malloc(40);
            $tmp2420->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2420->refCount.value = 1;
            panda$collections$Array$init($tmp2420);
            types2419 = $tmp2420;
            panda$core$Bit $tmp2422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2414->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2422.value) {
            {
                m2423 = ((org$pandalanguage$pandac$MethodDecl*) methods2414);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2423);
                org$pandalanguage$pandac$MethodRef* $tmp2424 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2424->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2424->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2424, m2423, parameters2412);
                org$pandalanguage$pandac$Type* $tmp2426 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2424);
                panda$collections$Array$add$panda$collections$Array$T(types2419, ((panda$core$Object*) $tmp2426));
            }
            }
            else {
            {
                panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2414->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2427.value);
                {
                    ITable* $tmp2429 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2414)->methods)->$class->itable;
                    while ($tmp2429->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2429 = $tmp2429->next;
                    }
                    $fn2431 $tmp2430 = $tmp2429->methods[0];
                    panda$collections$Iterator* $tmp2432 = $tmp2430(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2414)->methods));
                    m$Iter2428 = $tmp2432;
                    $l2433:;
                    ITable* $tmp2435 = m$Iter2428->$class->itable;
                    while ($tmp2435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2435 = $tmp2435->next;
                    }
                    $fn2437 $tmp2436 = $tmp2435->methods[0];
                    panda$core$Bit $tmp2438 = $tmp2436(m$Iter2428);
                    panda$core$Bit $tmp2439 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2438);
                    if (!$tmp2439.value) goto $l2434;
                    {
                        ITable* $tmp2441 = m$Iter2428->$class->itable;
                        while ($tmp2441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2441 = $tmp2441->next;
                        }
                        $fn2443 $tmp2442 = $tmp2441->methods[1];
                        panda$core$Object* $tmp2444 = $tmp2442(m$Iter2428);
                        m2440 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2444);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2440);
                        org$pandalanguage$pandac$MethodRef* $tmp2445 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2445->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2445->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2445, m2440, parameters2412);
                        org$pandalanguage$pandac$Type* $tmp2447 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2445);
                        panda$collections$Array$add$panda$collections$Array$T(types2419, ((panda$core$Object*) $tmp2447));
                    }
                    goto $l2433;
                    $l2434:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2448 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp2448->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2448->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2448, ((panda$collections$ListView*) types2419));
            type2418 = $tmp2448;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2418 = $tmp2450;
        }
        }
        panda$collections$Array* $tmp2452 = (panda$collections$Array*) malloc(40);
        $tmp2452->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2452->refCount.value = 1;
        panda$collections$Array$init($tmp2452);
        children2451 = $tmp2452;
        panda$collections$Array$add$panda$collections$Array$T(children2451, ((panda$core$Object*) left2267));
        panda$collections$Array$add$panda$collections$Array$T(children2451, ((panda$core$Object*) right2268));
        org$pandalanguage$pandac$IRNode* $tmp2454 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2454->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2454->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2454, ((panda$core$Int64) { 1040 }), p_offset, type2418, ((panda$collections$ListView*) children2451));
        return $tmp2454;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2456 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2457 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2267->type, $tmp2456);
    if ($tmp2457.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2459 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2460 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2268->type, $tmp2459);
        bool $tmp2458 = $tmp2460.value;
        if (!$tmp2458) goto $l2461;
        panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2465 = $tmp2466.value;
        if ($tmp2465) goto $l2467;
        panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2465 = $tmp2468.value;
        $l2467:;
        panda$core$Bit $tmp2469 = { $tmp2465 };
        bool $tmp2464 = $tmp2469.value;
        if ($tmp2464) goto $l2470;
        panda$core$Bit $tmp2471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2464 = $tmp2471.value;
        $l2470:;
        panda$core$Bit $tmp2472 = { $tmp2464 };
        bool $tmp2463 = $tmp2472.value;
        if ($tmp2463) goto $l2473;
        panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2463 = $tmp2474.value;
        $l2473:;
        panda$core$Bit $tmp2475 = { $tmp2463 };
        bool $tmp2462 = $tmp2475.value;
        if ($tmp2462) goto $l2476;
        panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2462 = $tmp2477.value;
        $l2476:;
        panda$core$Bit $tmp2478 = { $tmp2462 };
        $tmp2458 = $tmp2478.value;
        $l2461:;
        panda$core$Bit $tmp2479 = { $tmp2458 };
        if ($tmp2479.value) {
        {
            panda$collections$Array* $tmp2481 = (panda$collections$Array*) malloc(40);
            $tmp2481->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2481->refCount.value = 1;
            panda$collections$Array$init($tmp2481);
            children2480 = $tmp2481;
            panda$collections$Array$add$panda$collections$Array$T(children2480, ((panda$core$Object*) left2267));
            panda$collections$Array$add$panda$collections$Array$T(children2480, ((panda$core$Object*) right2268));
            org$pandalanguage$pandac$IRNode* $tmp2483 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2483->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2483, ((panda$core$Int64) { 1023 }), p_offset, left2267->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2480));
            return $tmp2483;
        }
        }
        panda$core$String* $tmp2486 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2485, $tmp2486);
        panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2487, &$s2488);
        panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2489, ((panda$core$Object*) left2267->type));
        panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2490, &$s2491);
        panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2492, ((panda$core$Object*) right2268->type));
        panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, &$s2494);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2495);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2497 = (panda$collections$Array*) malloc(40);
    $tmp2497->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2497->refCount.value = 1;
    panda$collections$Array$init($tmp2497);
    children2496 = $tmp2497;
    panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2267->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2500 = $tmp2501.value;
    if ($tmp2500) goto $l2502;
    panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2267->kind, ((panda$core$Int64) { 1032 }));
    $tmp2500 = $tmp2503.value;
    $l2502:;
    panda$core$Bit $tmp2504 = { $tmp2500 };
    bool $tmp2499 = $tmp2504.value;
    if (!$tmp2499) goto $l2505;
    panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2268->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2506 = $tmp2507.value;
    if ($tmp2506) goto $l2508;
    panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2268->kind, ((panda$core$Int64) { 1032 }));
    $tmp2506 = $tmp2509.value;
    $l2508:;
    panda$core$Bit $tmp2510 = { $tmp2506 };
    $tmp2499 = $tmp2510.value;
    $l2505:;
    panda$core$Bit $tmp2511 = { $tmp2499 };
    if ($tmp2511.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2512 = org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2267, p_op, right2268);
        return $tmp2512;
    }
    }
    panda$core$Bit $tmp2514 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2267->type);
    bool $tmp2513 = $tmp2514.value;
    if (!$tmp2513) goto $l2515;
    panda$core$Int64$nullable $tmp2516 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2268, left2267->type);
    $tmp2513 = ((panda$core$Bit) { $tmp2516.nonnull }).value;
    $l2515:;
    panda$core$Bit $tmp2517 = { $tmp2513 };
    if ($tmp2517.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2518 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2268, left2267->type);
        right2268 = $tmp2518;
        PANDA_ASSERT(((panda$core$Bit) { right2268 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2496, ((panda$core$Object*) left2267));
        panda$collections$Array$add$panda$collections$Array$T(children2496, ((panda$core$Object*) right2268));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2520 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2519 = $tmp2520;
            }
            break;
            default:
            {
                resultType2519 = left2267->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2521 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2521->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2521->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2521, ((panda$core$Int64) { 1023 }), p_offset, resultType2519, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2496));
        return $tmp2521;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2496, ((panda$core$Object*) right2268));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2524 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2525 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2267, $tmp2524, ((panda$collections$ListView*) children2496));
    result2523 = $tmp2525;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2523 == NULL }).value) {
    {
        panda$collections$Array$clear(children2496);
        panda$collections$Array$add$panda$collections$Array$T(children2496, ((panda$core$Object*) left2267));
        org$pandalanguage$pandac$IRNode* $tmp2527 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2268);
        resolved2526 = $tmp2527;
        bool $tmp2528 = ((panda$core$Bit) { resolved2526 != NULL }).value;
        if (!$tmp2528) goto $l2529;
        panda$core$Bit $tmp2530 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2526->type);
        $tmp2528 = $tmp2530.value;
        $l2529:;
        panda$core$Bit $tmp2531 = { $tmp2528 };
        if ($tmp2531.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2496, ((panda$core$Object*) resolved2526));
            org$pandalanguage$pandac$IRNode* $tmp2533 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2533->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2533->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2535 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2533, ((panda$core$Int64) { 1001 }), resolved2526->offset, $tmp2535, resolved2526->type);
            target2532 = $tmp2533;
            panda$core$String* $tmp2536 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2537 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2532, $tmp2536, ((panda$collections$ListView*) children2496));
            result2523 = $tmp2537;
        }
        }
    }
    }
    return result2523;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2538;
    org$pandalanguage$pandac$IRNode* right2541;
    panda$core$Object* $tmp2539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2540 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2539));
    left2538 = $tmp2540;
    if (((panda$core$Bit) { left2538 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2542 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2543 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2542));
    right2541 = $tmp2543;
    if (((panda$core$Bit) { right2541 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2544 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->offset, left2538, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2541);
    return $tmp2544;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2551;
    panda$core$Bit $tmp2545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 22 }));
    if ($tmp2545.value) {
    {
        panda$core$Object* $tmp2546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$collections$ListView* $tmp2547 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2546));
        return $tmp2547;
    }
    }
    panda$core$Bit $tmp2548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp2548.value) {
    {
        panda$core$Int64 $tmp2549 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
        panda$core$Bit $tmp2550 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2549, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp2550.value);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2551, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp2552 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2551);
        return ((panda$collections$ListView*) $tmp2552);
    }
    }
    else {
    {
        panda$collections$Array* $tmp2553 = (panda$collections$Array*) malloc(40);
        $tmp2553->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2553->refCount.value = 1;
        panda$collections$Array$init($tmp2553);
        return ((panda$collections$ListView*) $tmp2553);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    org$pandalanguage$pandac$Type* type2557;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2555.value) {
        {
            panda$collections$ListView* $tmp2556 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2556;
        }
        }
        panda$core$Bit $tmp2558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2558.value) {
        {
            panda$core$Object* $tmp2559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->type->subtypes, ((panda$core$Int64) { 0 }));
            type2557 = ((org$pandalanguage$pandac$Type*) $tmp2559);
        }
        }
        else {
        {
            type2557 = p_target->type;
        }
        }
        panda$collections$ListView* $tmp2560 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, type2557);
        return $tmp2560;
    }
    }
    panda$collections$Array* $tmp2561 = (panda$collections$Array*) malloc(40);
    $tmp2561->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2561->refCount.value = 1;
    panda$collections$Array$init($tmp2561);
    return ((panda$collections$ListView*) $tmp2561);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name2564;
    org$pandalanguage$pandac$ClassDecl* cl2566;
    org$pandalanguage$pandac$Symbol* s2568;
    org$pandalanguage$pandac$MethodDecl* m2571;
    panda$collections$Iterator* test$Iter2576;
    org$pandalanguage$pandac$MethodDecl* test2588;
    org$pandalanguage$pandac$MethodRef* ref2600;
    panda$collections$Array* children2604;
    org$pandalanguage$pandac$IRNode* methodRef2607;
    panda$collections$Array* args2613;
    panda$collections$Array* children2622;
    panda$collections$Array* children2632;
    org$pandalanguage$pandac$IRNode* coerced2641;
    panda$collections$Array* children2644;
    panda$core$Bit $tmp2563 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2563.value) {
    {
        panda$core$String* $tmp2565 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2564 = $tmp2565;
        org$pandalanguage$pandac$ClassDecl* $tmp2567 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2566 = $tmp2567;
        if (((panda$core$Bit) { cl2566 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2569 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2566);
        org$pandalanguage$pandac$Symbol* $tmp2570 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2569, name2564);
        s2568 = $tmp2570;
        if (((panda$core$Bit) { s2568 != NULL }).value) {
        {
            m2571 = NULL;
            switch (s2568->kind.value) {
                case 204:
                {
                    m2571 = ((org$pandalanguage$pandac$MethodDecl*) s2568);
                    panda$core$Int64 $tmp2572 = panda$collections$Array$get_count$R$panda$core$Int64(m2571->parameters);
                    panda$core$Bit $tmp2573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2572, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2573.value);
                    panda$core$Bit $tmp2574 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2571->annotations);
                    panda$core$Bit $tmp2575 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2574);
                    PANDA_ASSERT($tmp2575.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2577 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2568)->methods)->$class->itable;
                        while ($tmp2577->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2577 = $tmp2577->next;
                        }
                        $fn2579 $tmp2578 = $tmp2577->methods[0];
                        panda$collections$Iterator* $tmp2580 = $tmp2578(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2568)->methods));
                        test$Iter2576 = $tmp2580;
                        $l2581:;
                        ITable* $tmp2583 = test$Iter2576->$class->itable;
                        while ($tmp2583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2583 = $tmp2583->next;
                        }
                        $fn2585 $tmp2584 = $tmp2583->methods[0];
                        panda$core$Bit $tmp2586 = $tmp2584(test$Iter2576);
                        panda$core$Bit $tmp2587 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2586);
                        if (!$tmp2587.value) goto $l2582;
                        {
                            ITable* $tmp2589 = test$Iter2576->$class->itable;
                            while ($tmp2589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2589 = $tmp2589->next;
                            }
                            $fn2591 $tmp2590 = $tmp2589->methods[1];
                            panda$core$Object* $tmp2592 = $tmp2590(test$Iter2576);
                            test2588 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2592);
                            panda$core$Bit $tmp2594 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2588->annotations);
                            panda$core$Bit $tmp2595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2594);
                            bool $tmp2593 = $tmp2595.value;
                            if (!$tmp2593) goto $l2596;
                            panda$core$Int64 $tmp2597 = panda$collections$Array$get_count$R$panda$core$Int64(test2588->parameters);
                            panda$core$Bit $tmp2598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2597, ((panda$core$Int64) { 0 }));
                            $tmp2593 = $tmp2598.value;
                            $l2596:;
                            panda$core$Bit $tmp2599 = { $tmp2593 };
                            if ($tmp2599.value) {
                            {
                                m2571 = test2588;
                                goto $l2582;
                            }
                            }
                        }
                        goto $l2581;
                        $l2582:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2571 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2571);
                org$pandalanguage$pandac$MethodRef* $tmp2601 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2601->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2601->refCount.value = 1;
                panda$collections$ListView* $tmp2603 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2601, m2571, $tmp2603);
                ref2600 = $tmp2601;
                panda$collections$Array* $tmp2605 = (panda$collections$Array*) malloc(40);
                $tmp2605->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2605->refCount.value = 1;
                panda$collections$Array$init($tmp2605);
                children2604 = $tmp2605;
                panda$collections$Array$add$panda$collections$Array$T(children2604, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2608 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2608->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2608->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2610 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp2610->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2610->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2610, &$s2612, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2608, ((panda$core$Int64) { 1002 }), p_offset, $tmp2610, ((panda$core$Object*) ref2600), ((panda$collections$ListView*) children2604));
                methodRef2607 = $tmp2608;
                panda$collections$Array* $tmp2614 = (panda$collections$Array*) malloc(40);
                $tmp2614->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2614->refCount.value = 1;
                panda$collections$Array$init($tmp2614);
                args2613 = $tmp2614;
                org$pandalanguage$pandac$IRNode* $tmp2616 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2607, ((panda$collections$ListView*) args2613));
                return $tmp2616;
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
                    org$pandalanguage$pandac$IRNode* $tmp2617 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2617->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2617->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2617, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2617;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2619 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2619->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2619->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2619, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2619;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2621 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2621.value) {
                    {
                        panda$collections$Array* $tmp2623 = (panda$collections$Array*) malloc(40);
                        $tmp2623->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2623->refCount.value = 1;
                        panda$collections$Array$init($tmp2623);
                        children2622 = $tmp2623;
                        panda$collections$Array$add$panda$collections$Array$T(children2622, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2625 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp2625->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2625->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2625, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2622));
                        return $tmp2625;
                    }
                    }
                }
            }
            panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2627, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2630);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2631 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2631.value) {
            {
                panda$collections$Array* $tmp2633 = (panda$collections$Array*) malloc(40);
                $tmp2633->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2633->refCount.value = 1;
                panda$collections$Array$init($tmp2633);
                children2632 = $tmp2633;
                panda$collections$Array$add$panda$collections$Array$T(children2632, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2635 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2635->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2635->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2635, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2632));
                return $tmp2635;
            }
            }
            else {
            {
                panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2637, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, &$s2639);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2640);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2642 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2643 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2642);
            coerced2641 = $tmp2643;
            if (((panda$core$Bit) { coerced2641 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2645 = (panda$collections$Array*) malloc(40);
            $tmp2645->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2645->refCount.value = 1;
            panda$collections$Array$init($tmp2645);
            children2644 = $tmp2645;
            panda$collections$Array$add$panda$collections$Array$T(children2644, ((panda$core$Object*) coerced2641));
            org$pandalanguage$pandac$IRNode* $tmp2647 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2647->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2647->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2647, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2644));
            return $tmp2647;
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
    org$pandalanguage$pandac$IRNode* base2652;
    panda$core$Bit $tmp2649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2649.value);
    panda$core$Int64 $tmp2650 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2650, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2651.value);
    panda$core$Object* $tmp2653 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2654 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2653));
    base2652 = $tmp2654;
    if (((panda$core$Bit) { base2652 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2655 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2652, p_p->offset);
    return $tmp2655;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2657;
    panda$collections$Array* args2660;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2663;
    org$pandalanguage$pandac$IRNode* arg2683;
    panda$core$Bit $tmp2656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2656.value);
    panda$core$Object* $tmp2658 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2659 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2658));
    m2657 = $tmp2659;
    if (((panda$core$Bit) { m2657 != NULL }).value) {
    {
        panda$collections$Array* $tmp2661 = (panda$collections$Array*) malloc(40);
        $tmp2661->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2661->refCount.value = 1;
        panda$collections$Array$init($tmp2661);
        args2660 = $tmp2661;
        panda$core$Int64 $tmp2664 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2663, ((panda$core$Int64) { 1 }), $tmp2664, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp2666 = $tmp2663.start.value;
        panda$core$Int64 i2665 = { $tmp2666 };
        int64_t $tmp2668 = $tmp2663.end.value;
        int64_t $tmp2669 = $tmp2663.step.value;
        bool $tmp2670 = $tmp2663.inclusive.value;
        bool $tmp2677 = $tmp2669 > 0;
        if ($tmp2677) goto $l2675; else goto $l2676;
        $l2675:;
        if ($tmp2670) goto $l2678; else goto $l2679;
        $l2678:;
        if ($tmp2666 <= $tmp2668) goto $l2671; else goto $l2673;
        $l2679:;
        if ($tmp2666 < $tmp2668) goto $l2671; else goto $l2673;
        $l2676:;
        if ($tmp2670) goto $l2680; else goto $l2681;
        $l2680:;
        if ($tmp2666 >= $tmp2668) goto $l2671; else goto $l2673;
        $l2681:;
        if ($tmp2666 > $tmp2668) goto $l2671; else goto $l2673;
        $l2671:;
        {
            panda$core$Object* $tmp2684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2665);
            org$pandalanguage$pandac$IRNode* $tmp2685 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2684));
            arg2683 = $tmp2685;
            if (((panda$core$Bit) { arg2683 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2660, ((panda$core$Object*) arg2683));
        }
        $l2674:;
        if ($tmp2677) goto $l2687; else goto $l2688;
        $l2687:;
        int64_t $tmp2689 = $tmp2668 - i2665.value;
        if ($tmp2670) goto $l2690; else goto $l2691;
        $l2690:;
        if ($tmp2689 >= $tmp2669) goto $l2686; else goto $l2673;
        $l2691:;
        if ($tmp2689 > $tmp2669) goto $l2686; else goto $l2673;
        $l2688:;
        int64_t $tmp2693 = i2665.value - $tmp2668;
        if ($tmp2670) goto $l2694; else goto $l2695;
        $l2694:;
        if ($tmp2693 >= -$tmp2669) goto $l2686; else goto $l2673;
        $l2695:;
        if ($tmp2693 > -$tmp2669) goto $l2686; else goto $l2673;
        $l2686:;
        i2665.value += $tmp2669;
        goto $l2671;
        $l2673:;
        org$pandalanguage$pandac$IRNode* $tmp2697 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2657, ((panda$collections$ListView*) args2660));
        return $tmp2697;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2701;
    org$pandalanguage$pandac$ClassDecl* cl2710;
    panda$core$String* name2712;
    org$pandalanguage$pandac$ClassDecl* cl2720;
    org$pandalanguage$pandac$Symbol* s2732;
    panda$core$Bit $tmp2698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2698.value);
    panda$core$Int64 $tmp2699 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2699, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2700.value);
    panda$core$Object* $tmp2702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2703 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2702));
    base2701 = $tmp2703;
    if (((panda$core$Bit) { base2701 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2705 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2701->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2704 = $tmp2705.value;
    if (!$tmp2704) goto $l2706;
    panda$core$Bit $tmp2707 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2701->kind, ((panda$core$Int64) { 1024 }));
    $tmp2704 = $tmp2707.value;
    $l2706:;
    panda$core$Bit $tmp2708 = { $tmp2704 };
    if ($tmp2708.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2709 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2701);
        base2701 = $tmp2709;
    }
    }
    if (((panda$core$Bit) { base2701 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2701->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2711 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2701->payload));
            cl2710 = $tmp2711;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2713, base2701->payload);
            panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
            panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2716, p_d->payload);
            panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, &$s2718);
            name2712 = $tmp2719;
            org$pandalanguage$pandac$ClassDecl* $tmp2721 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2712);
            cl2720 = $tmp2721;
            if (((panda$core$Bit) { cl2720 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2722 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2722->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2722->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2724 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2725 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2720);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2722, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp2724, $tmp2725);
                return $tmp2722;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2726 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2726->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2726->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2728 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2726, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp2728, name2712);
            return $tmp2726;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2729 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2730 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2729)->rawSuper);
            cl2710 = $tmp2730;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2731 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2701->type);
            cl2710 = $tmp2731;
        }
    }
    if (((panda$core$Bit) { cl2710 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2733 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2710);
    org$pandalanguage$pandac$Symbol* $tmp2734 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2733, ((panda$core$String*) p_d->payload));
    s2732 = $tmp2734;
    if (((panda$core$Bit) { s2732 == NULL }).value) {
    {
        panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2735, ((panda$core$Object*) base2701->type));
        panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
        panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2739, p_d->payload);
        panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, &$s2741);
        panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, $tmp2742);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_d->offset, $tmp2743);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2744 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2710);
    org$pandalanguage$pandac$IRNode* $tmp2745 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->offset, base2701, s2732, $tmp2744);
    return $tmp2745;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2747;
    panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2746.value);
    org$pandalanguage$pandac$Symbol* $tmp2748 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2747 = $tmp2748;
    if (((panda$core$Bit) { s2747 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2749 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2747 = ((org$pandalanguage$pandac$Symbol*) $tmp2749);
    }
    }
    if (((panda$core$Bit) { s2747 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2750 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->offset, NULL, s2747, self->symbolTable);
        return $tmp2750;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2751 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2751->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2751->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2753 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2751, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp2753, ((panda$core$String*) p_i->payload));
    return $tmp2751;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved2754;
    org$pandalanguage$pandac$Type* $tmp2755 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp2756 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp2755);
    resolved2754 = $tmp2756;
    if (((panda$core$Bit) { resolved2754 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2757 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2757->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2757->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2759 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2757, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp2759, resolved2754);
    return $tmp2757;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2767;
    org$pandalanguage$pandac$IRNode* end2775;
    org$pandalanguage$pandac$IRNode* step2783;
    panda$collections$Array* children2793;
    panda$core$Bit $tmp2761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp2760 = $tmp2761.value;
    if ($tmp2760) goto $l2762;
    panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp2760 = $tmp2763.value;
    $l2762:;
    panda$core$Bit $tmp2764 = { $tmp2760 };
    PANDA_ASSERT($tmp2764.value);
    panda$core$Int64 $tmp2765 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp2766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2765, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2766.value);
    panda$core$Object* $tmp2768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2768)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2769.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2770 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2770->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2770->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2772 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2770, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2772);
        start2767 = $tmp2770;
    }
    }
    else {
    {
        panda$core$Object* $tmp2773 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2774 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2773));
        start2767 = $tmp2774;
        if (((panda$core$Bit) { start2767 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2776 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2776)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2777.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2778 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2778->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2778->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2780 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2778, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2780);
        end2775 = $tmp2778;
    }
    }
    else {
    {
        panda$core$Object* $tmp2781 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp2782 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2781));
        end2775 = $tmp2782;
        if (((panda$core$Bit) { end2775 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2784 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2784)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2785.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2786 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2786->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2786->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2788 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2786, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp2788, ((panda$core$UInt64) { 1 }));
        step2783 = $tmp2786;
    }
    }
    else {
    {
        panda$core$Object* $tmp2789 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2790 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2789));
        org$pandalanguage$pandac$Type* $tmp2791 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2792 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2790, $tmp2791);
        step2783 = $tmp2792;
        if (((panda$core$Bit) { step2783 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp2794 = (panda$collections$Array*) malloc(40);
    $tmp2794->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2794->refCount.value = 1;
    panda$collections$Array$init($tmp2794);
    children2793 = $tmp2794;
    panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) start2767));
    panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) end2775));
    panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) step2783));
    org$pandalanguage$pandac$IRNode* $tmp2796 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2796->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2798 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2798->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2798->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2798, &$s2800, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp2801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2796, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp2798, ((panda$core$Object*) wrap_panda$core$Bit($tmp2801)), ((panda$collections$ListView*) children2793));
    return $tmp2796;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp2802 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2802->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2802->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2804 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2802, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp2804, ((panda$core$String*) p_s->payload));
    return $tmp2802;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type2809;
    org$pandalanguage$pandac$ClassDecl* cl2810;
    panda$collections$Array* subtypes2817;
    panda$core$MutableString* name2821;
    panda$core$String* separator2825;
    panda$collections$Iterator* p$Iter2827;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p2839;
    panda$collections$Array* pType2844;
    panda$core$String* pName2847;
    panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp2805.value);
    panda$core$Object* $tmp2806 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2807 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2806)->annotations);
    if ($tmp2807.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2808);
        return NULL;
    }
    }
    panda$core$Object* $tmp2811 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2810 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2811);
    ITable* $tmp2812 = ((panda$collections$CollectionView*) cl2810->parameters)->$class->itable;
    while ($tmp2812->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2812 = $tmp2812->next;
    }
    $fn2814 $tmp2813 = $tmp2812->methods[0];
    panda$core$Int64 $tmp2815 = $tmp2813(((panda$collections$CollectionView*) cl2810->parameters));
    panda$core$Bit $tmp2816 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2815, ((panda$core$Int64) { 0 }));
    if ($tmp2816.value) {
    {
        panda$collections$Array* $tmp2818 = (panda$collections$Array*) malloc(40);
        $tmp2818->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2818->refCount.value = 1;
        panda$collections$Array$init($tmp2818);
        subtypes2817 = $tmp2818;
        org$pandalanguage$pandac$Type* $tmp2820 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2810);
        panda$collections$Array$add$panda$collections$Array$T(subtypes2817, ((panda$core$Object*) $tmp2820));
        panda$core$MutableString* $tmp2822 = (panda$core$MutableString*) malloc(40);
        $tmp2822->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp2822->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp2822, ((org$pandalanguage$pandac$Symbol*) cl2810)->name);
        name2821 = $tmp2822;
        panda$core$MutableString$append$panda$core$String(name2821, &$s2824);
        separator2825 = &$s2826;
        {
            ITable* $tmp2828 = ((panda$collections$Iterable*) cl2810->parameters)->$class->itable;
            while ($tmp2828->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2828 = $tmp2828->next;
            }
            $fn2830 $tmp2829 = $tmp2828->methods[0];
            panda$collections$Iterator* $tmp2831 = $tmp2829(((panda$collections$Iterable*) cl2810->parameters));
            p$Iter2827 = $tmp2831;
            $l2832:;
            ITable* $tmp2834 = p$Iter2827->$class->itable;
            while ($tmp2834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2834 = $tmp2834->next;
            }
            $fn2836 $tmp2835 = $tmp2834->methods[0];
            panda$core$Bit $tmp2837 = $tmp2835(p$Iter2827);
            panda$core$Bit $tmp2838 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2837);
            if (!$tmp2838.value) goto $l2833;
            {
                ITable* $tmp2840 = p$Iter2827->$class->itable;
                while ($tmp2840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2840 = $tmp2840->next;
                }
                $fn2842 $tmp2841 = $tmp2840->methods[1];
                panda$core$Object* $tmp2843 = $tmp2841(p$Iter2827);
                p2839 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp2843);
                panda$collections$Array* $tmp2845 = (panda$collections$Array*) malloc(40);
                $tmp2845->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2845->refCount.value = 1;
                panda$collections$Array$init($tmp2845);
                pType2844 = $tmp2845;
                panda$collections$Array$add$panda$collections$Array$T(pType2844, ((panda$core$Object*) p2839->bound));
                panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2848, ((org$pandalanguage$pandac$Symbol*) cl2810)->name);
                panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, &$s2850);
                panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, ((org$pandalanguage$pandac$Symbol*) p2839)->name);
                panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, &$s2853);
                pName2847 = $tmp2854;
                panda$core$MutableString$append$panda$core$String(name2821, separator2825);
                panda$core$MutableString$append$panda$core$String(name2821, pName2847);
                org$pandalanguage$pandac$Type* $tmp2855 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp2855->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2855->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2855, pName2847, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p2839)->offset, ((panda$collections$ListView*) pType2844), ((panda$core$Bit) { true }));
                panda$collections$Array$add$panda$collections$Array$T(subtypes2817, ((panda$core$Object*) $tmp2855));
                separator2825 = &$s2857;
            }
            goto $l2832;
            $l2833:;
        }
        panda$core$MutableString$append$panda$core$String(name2821, &$s2858);
        org$pandalanguage$pandac$Type* $tmp2859 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp2859->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp2859->refCount.value = 1;
        panda$core$String* $tmp2861 = panda$core$MutableString$convert$R$panda$core$String(name2821);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2859, $tmp2861, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes2817), ((panda$core$Bit) { true }));
        type2809 = $tmp2859;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2862 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2810);
        type2809 = $tmp2862;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2863 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2863->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2863->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2863, ((panda$core$Int64) { 1025 }), p_s->offset, type2809);
    return $tmp2863;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl2869;
    panda$core$Bit $tmp2865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp2865.value);
    panda$core$Object* $tmp2866 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2867 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2866)->annotations);
    if ($tmp2867.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2868);
        return NULL;
    }
    }
    panda$core$Object* $tmp2870 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2869 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2870);
    PANDA_ASSERT(cl2869->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp2871 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2871->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2871->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2871, ((panda$core$Int64) { 1024 }), p_s->offset, cl2869->rawSuper);
    return $tmp2871;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value2876;
    org$pandalanguage$pandac$Type* type2879;
    panda$core$Bit $tmp2873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp2873.value);
    panda$core$Int64 $tmp2874 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp2875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2874, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2875.value);
    panda$core$Object* $tmp2877 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2878 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2877));
    value2876 = $tmp2878;
    if (((panda$core$Bit) { value2876 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2880 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp2881 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp2880));
    org$pandalanguage$pandac$Type* $tmp2882 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp2881);
    type2879 = $tmp2882;
    if (((panda$core$Bit) { type2879 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp2883 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value2876, type2879);
    if (((panda$core$Bit) { $tmp2883.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2884 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value2876, type2879);
        return $tmp2884;
    }
    }
    panda$core$Bit $tmp2885 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value2876, type2879);
    if ($tmp2885.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2886 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value2876, p_c->offset, ((panda$core$Bit) { true }), type2879);
        return $tmp2886;
    }
    }
    else {
    {
        panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2887, ((panda$core$Object*) value2876->type));
        panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2888, &$s2889);
        panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2891, ((panda$core$Object*) type2879));
        panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, &$s2893);
        panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, $tmp2894);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp2895);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp2896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp2896.value);
    org$pandalanguage$pandac$IRNode* $tmp2897 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2897->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2897->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2899 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2897, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp2899);
    return $tmp2897;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result2904;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp2900 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2900;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp2901 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2901->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2903 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2901, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp2903, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp2901;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp2905 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result2904 = $tmp2905;
            bool $tmp2906 = ((panda$core$Bit) { result2904 != NULL }).value;
            if (!$tmp2906) goto $l2907;
            org$pandalanguage$pandac$Type* $tmp2908 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2909 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2904->type, $tmp2908);
            $tmp2906 = $tmp2909.value;
            $l2907:;
            panda$core$Bit $tmp2910 = { $tmp2906 };
            if ($tmp2910.value) {
            {
                panda$core$Bit $tmp2911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result2904->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp2911.value);
                panda$core$String* $tmp2912 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result2904->payload)->value);
                panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, result2904->offset, $tmp2914);
                return NULL;
            }
            }
            return result2904;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp2915 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2915;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp2916 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2916;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp2917 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2917->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2917->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2919 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2917, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp2919, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp2917;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp2920 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2920;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp2921 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2921;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp2922 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2922;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp2923 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2923;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp2924 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2924;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp2925 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2925;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp2926 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2926;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp2927 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp2927;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols2929;
    panda$collections$Array* result2932;
    panda$collections$Iterator* stmt$Iter2935;
    org$pandalanguage$pandac$ASTNode* stmt2947;
    org$pandalanguage$pandac$IRNode* compiled2952;
    panda$core$Bit $tmp2928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp2928.value);
    org$pandalanguage$pandac$SymbolTable* $tmp2930 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp2930->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp2930->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp2930, self->symbolTable);
    symbols2929 = $tmp2930;
    self->symbolTable = symbols2929;
    panda$collections$Array* $tmp2933 = (panda$collections$Array*) malloc(40);
    $tmp2933->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2933->refCount.value = 1;
    panda$collections$Array$init($tmp2933);
    result2932 = $tmp2933;
    {
        ITable* $tmp2936 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp2936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2936 = $tmp2936->next;
        }
        $fn2938 $tmp2937 = $tmp2936->methods[0];
        panda$collections$Iterator* $tmp2939 = $tmp2937(((panda$collections$Iterable*) p_b->children));
        stmt$Iter2935 = $tmp2939;
        $l2940:;
        ITable* $tmp2942 = stmt$Iter2935->$class->itable;
        while ($tmp2942->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2942 = $tmp2942->next;
        }
        $fn2944 $tmp2943 = $tmp2942->methods[0];
        panda$core$Bit $tmp2945 = $tmp2943(stmt$Iter2935);
        panda$core$Bit $tmp2946 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2945);
        if (!$tmp2946.value) goto $l2941;
        {
            ITable* $tmp2948 = stmt$Iter2935->$class->itable;
            while ($tmp2948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2948 = $tmp2948->next;
            }
            $fn2950 $tmp2949 = $tmp2948->methods[1];
            panda$core$Object* $tmp2951 = $tmp2949(stmt$Iter2935);
            stmt2947 = ((org$pandalanguage$pandac$ASTNode*) $tmp2951);
            org$pandalanguage$pandac$IRNode* $tmp2953 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt2947);
            compiled2952 = $tmp2953;
            if (((panda$core$Bit) { compiled2952 == NULL }).value) {
            {
                panda$core$Object* $tmp2954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols2929->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp2954);
                return NULL;
            }
            }
            panda$core$Bit $tmp2955 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled2952->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp2955.value);
            panda$collections$Array$add$panda$collections$Array$T(result2932, ((panda$core$Object*) compiled2952));
        }
        goto $l2940;
        $l2941:;
    }
    panda$core$Object* $tmp2956 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols2929->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp2956);
    org$pandalanguage$pandac$IRNode* $tmp2957 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2957->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2957->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2957, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result2932));
    return $tmp2957;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test2967;
    org$pandalanguage$pandac$IRNode* ifTrue2972;
    panda$collections$Array* children2975;
    org$pandalanguage$pandac$IRNode* ifFalse2980;
    panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp2959.value);
    panda$core$Int64 $tmp2961 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2961, ((panda$core$Int64) { 2 }));
    bool $tmp2960 = $tmp2962.value;
    if ($tmp2960) goto $l2963;
    panda$core$Int64 $tmp2964 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2964, ((panda$core$Int64) { 3 }));
    $tmp2960 = $tmp2965.value;
    $l2963:;
    panda$core$Bit $tmp2966 = { $tmp2960 };
    PANDA_ASSERT($tmp2966.value);
    panda$core$Object* $tmp2968 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2969 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2968));
    org$pandalanguage$pandac$Type* $tmp2970 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp2971 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2969, $tmp2970);
    test2967 = $tmp2971;
    if (((panda$core$Bit) { test2967 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2973 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2974 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2973));
    ifTrue2972 = $tmp2974;
    panda$collections$Array* $tmp2976 = (panda$collections$Array*) malloc(40);
    $tmp2976->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2976->refCount.value = 1;
    panda$collections$Array$init($tmp2976);
    children2975 = $tmp2976;
    panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) test2967));
    panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) ifTrue2972));
    panda$core$Int64 $tmp2978 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2978, ((panda$core$Int64) { 3 }));
    if ($tmp2979.value) {
    {
        panda$core$Object* $tmp2981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2982 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2981));
        ifFalse2980 = $tmp2982;
        if (((panda$core$Bit) { ifFalse2980 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) ifFalse2980));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2983 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2983->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2983->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2983, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children2975));
    return $tmp2983;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType2985;
    org$pandalanguage$pandac$IRNode* list2986;
    org$pandalanguage$pandac$Type* t2993;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3007;
    org$pandalanguage$pandac$IRNode* body3009;
    panda$collections$Array* children3011;
    panda$core$Bit $tmp2988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp2987 = $tmp2988.value;
    if (!$tmp2987) goto $l2989;
    panda$core$Int64 $tmp2990 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp2991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2990, ((panda$core$Int64) { 1 }));
    $tmp2987 = $tmp2991.value;
    $l2989:;
    panda$core$Bit $tmp2992 = { $tmp2987 };
    if ($tmp2992.value) {
    {
        panda$core$Object* $tmp2994 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp2995 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp2994));
        org$pandalanguage$pandac$Type* $tmp2996 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp2995);
        t2993 = $tmp2996;
        org$pandalanguage$pandac$Type* $tmp2997 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t2993);
        org$pandalanguage$pandac$IRNode* $tmp2998 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp2997);
        list2986 = $tmp2998;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2999 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list2986 = $tmp2999;
    }
    }
    if (((panda$core$Bit) { list2986 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list2986->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3000.value) {
    {
        panda$core$Object* $tmp3001 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2986->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3001)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3002.value);
        panda$core$Object* $tmp3003 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2986->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3004 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp3003)->subtypes, ((panda$core$Int64) { 1 }));
        elementType2985 = ((org$pandalanguage$pandac$Type*) $tmp3004);
    }
    }
    else {
    {
        panda$core$Bit $tmp3005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list2986->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3005.value);
        panda$core$Object* $tmp3006 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list2986->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType2985 = ((org$pandalanguage$pandac$Type*) $tmp3006);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3008 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType2985);
    target3007 = $tmp3008;
    if (((panda$core$Bit) { target3007 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3007->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3010 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3009 = $tmp3010;
    if (((panda$core$Bit) { body3009 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3012 = (panda$collections$Array*) malloc(40);
    $tmp3012->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3012->refCount.value = 1;
    panda$collections$Array$init($tmp3012);
    children3011 = $tmp3012;
    panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) target3007->target));
    panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) list2986));
    panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) body3009));
    org$pandalanguage$pandac$IRNode* $tmp3014 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3014->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3014->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3014, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3011));
    return $tmp3014;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3023;
    org$pandalanguage$pandac$Variable* targetVar3027;
    panda$collections$Array* subtypes3028;
    org$pandalanguage$pandac$Type* iterType3032;
    org$pandalanguage$pandac$Variable* iter3044;
    panda$collections$Array* statements3049;
    panda$collections$Array* declChildren3052;
    panda$collections$Array* varChildren3057;
    panda$collections$Array* whileChildren3064;
    org$pandalanguage$pandac$IRNode* done3067;
    org$pandalanguage$pandac$IRNode* notCall3074;
    panda$collections$Array* valueDeclChildren3079;
    org$pandalanguage$pandac$IRNode* next3084;
    panda$collections$Array* valueVarChildren3091;
    org$pandalanguage$pandac$IRNode* block3096;
    panda$collections$Array* blockChildren3098;
    panda$core$Bit $tmp3017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3016 = $tmp3017.value;
    if (!$tmp3016) goto $l3018;
    panda$core$Object* $tmp3019 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3020 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3021 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3019), $tmp3020);
    $tmp3016 = $tmp3021.value;
    $l3018:;
    panda$core$Bit $tmp3022 = { $tmp3016 };
    PANDA_ASSERT($tmp3022.value);
    panda$core$Object* $tmp3024 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3025 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3024));
    target3023 = $tmp3025;
    if (((panda$core$Bit) { target3023 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3023->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3026.value);
    targetVar3027 = ((org$pandalanguage$pandac$Variable*) target3023->target->payload);
    panda$collections$Array* $tmp3029 = (panda$collections$Array*) malloc(40);
    $tmp3029->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3029->refCount.value = 1;
    panda$collections$Array$init($tmp3029);
    subtypes3028 = $tmp3029;
    org$pandalanguage$pandac$Type* $tmp3031 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3028, ((panda$core$Object*) $tmp3031));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3028, ((panda$core$Object*) target3023->target->type));
    org$pandalanguage$pandac$Type* $tmp3033 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp3033->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3033->refCount.value = 1;
    panda$core$Object* $tmp3036 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3028, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3035, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3036)));
    panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, &$s3038);
    panda$core$Object* $tmp3040 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3028, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3039, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3040)));
    panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3033, $tmp3043, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes3028), ((panda$core$Bit) { true }));
    iterType3032 = $tmp3033;
    org$pandalanguage$pandac$Variable* $tmp3045 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3045->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3045->refCount.value = 1;
    panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3027)->name, &$s3047);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3045, p_iterator->offset, ((panda$core$Int64) { 10001 }), $tmp3048, iterType3032);
    iter3044 = $tmp3045;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3044));
    panda$collections$Array* $tmp3050 = (panda$collections$Array*) malloc(40);
    $tmp3050->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3050->refCount.value = 1;
    panda$collections$Array$init($tmp3050);
    statements3049 = $tmp3050;
    panda$collections$Array* $tmp3053 = (panda$collections$Array*) malloc(40);
    $tmp3053->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3053->refCount.value = 1;
    panda$collections$Array$init($tmp3053);
    declChildren3052 = $tmp3053;
    org$pandalanguage$pandac$IRNode* $tmp3055 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3055->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3055->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3055, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3044->type, iter3044);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3052, ((panda$core$Object*) $tmp3055));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3052, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3058 = (panda$collections$Array*) malloc(40);
    $tmp3058->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3058->refCount.value = 1;
    panda$collections$Array$init($tmp3058);
    varChildren3057 = $tmp3058;
    org$pandalanguage$pandac$IRNode* $tmp3060 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3060->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3060->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3060, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3044)->offset, ((panda$collections$ListView*) declChildren3052));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3057, ((panda$core$Object*) $tmp3060));
    org$pandalanguage$pandac$IRNode* $tmp3062 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3062->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3062->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3062, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3044)->offset, ((panda$collections$ListView*) varChildren3057));
    panda$collections$Array$add$panda$collections$Array$T(statements3049, ((panda$core$Object*) $tmp3062));
    panda$collections$Array* $tmp3065 = (panda$collections$Array*) malloc(40);
    $tmp3065->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3065->refCount.value = 1;
    panda$collections$Array$init($tmp3065);
    whileChildren3064 = $tmp3065;
    org$pandalanguage$pandac$IRNode* $tmp3068 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3068->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3068->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3068, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3044)->offset, iter3044->type, iter3044);
    panda$collections$Array* $tmp3071 = (panda$collections$Array*) malloc(40);
    $tmp3071->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3071->refCount.value = 1;
    panda$collections$Array$init($tmp3071);
    org$pandalanguage$pandac$IRNode* $tmp3073 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3068, &$s3070, ((panda$collections$ListView*) $tmp3071), NULL);
    done3067 = $tmp3073;
    if (((panda$core$Bit) { done3067 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3076 = (panda$collections$Array*) malloc(40);
    $tmp3076->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3076->refCount.value = 1;
    panda$collections$Array$init($tmp3076);
    org$pandalanguage$pandac$IRNode* $tmp3078 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3067, &$s3075, ((panda$collections$ListView*) $tmp3076), NULL);
    notCall3074 = $tmp3078;
    if (((panda$core$Bit) { notCall3074 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3064, ((panda$core$Object*) notCall3074));
    panda$collections$Array* $tmp3080 = (panda$collections$Array*) malloc(40);
    $tmp3080->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3080->refCount.value = 1;
    panda$collections$Array$init($tmp3080);
    valueDeclChildren3079 = $tmp3080;
    org$pandalanguage$pandac$IRNode* $tmp3082 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3082->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3082->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3082, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar3027->type, targetVar3027);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3079, ((panda$core$Object*) $tmp3082));
    org$pandalanguage$pandac$IRNode* $tmp3085 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3085->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3085->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3085, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3044->type, iter3044);
    panda$collections$Array* $tmp3088 = (panda$collections$Array*) malloc(40);
    $tmp3088->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3088->refCount.value = 1;
    panda$collections$Array$init($tmp3088);
    org$pandalanguage$pandac$IRNode* $tmp3090 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3085, &$s3087, ((panda$collections$ListView*) $tmp3088), NULL);
    next3084 = $tmp3090;
    PANDA_ASSERT(((panda$core$Bit) { next3084 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3079, ((panda$core$Object*) next3084));
    panda$collections$Array* $tmp3092 = (panda$collections$Array*) malloc(40);
    $tmp3092->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3092->refCount.value = 1;
    panda$collections$Array$init($tmp3092);
    valueVarChildren3091 = $tmp3092;
    org$pandalanguage$pandac$IRNode* $tmp3094 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3094->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3094->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3094, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3079));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3091, ((panda$core$Object*) $tmp3094));
    org$pandalanguage$pandac$IRNode* $tmp3097 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3096 = $tmp3097;
    if (((panda$core$Bit) { block3096 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3099 = (panda$collections$Array*) malloc(40);
    $tmp3099->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3099->refCount.value = 1;
    panda$collections$Array$init($tmp3099);
    blockChildren3098 = $tmp3099;
    org$pandalanguage$pandac$IRNode* $tmp3101 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3101->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3101->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3101, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3091));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3098, ((panda$core$Object*) $tmp3101));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3098, ((panda$collections$CollectionView*) block3096->children));
    org$pandalanguage$pandac$IRNode* $tmp3103 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3103->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3103->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3103, ((panda$core$Int64) { 1000 }), block3096->offset, ((panda$collections$ListView*) blockChildren3098));
    block3096 = $tmp3103;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3064, ((panda$core$Object*) block3096));
    org$pandalanguage$pandac$IRNode* $tmp3105 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3105->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3105, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3064));
    panda$collections$Array$add$panda$collections$Array$T(statements3049, ((panda$core$Object*) $tmp3105));
    org$pandalanguage$pandac$IRNode* $tmp3107 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3107->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3107->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3107, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3049));
    return $tmp3107;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3112;
    org$pandalanguage$pandac$SymbolTable* symbols3115;
    org$pandalanguage$pandac$IRNode* result3118;
    panda$core$Bit found3128;
    panda$collections$Iterator* intf$Iter3129;
    org$pandalanguage$pandac$Type* intf3142;
    org$pandalanguage$pandac$IRNode* iterator3154;
    org$pandalanguage$pandac$IRNode* iterable3166;
    org$pandalanguage$pandac$IRNode* iterator3168;
    panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3109.value);
    panda$core$Int64 $tmp3110 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3110, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3111.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3114 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3113));
    list3112 = $tmp3114;
    if (((panda$core$Bit) { list3112 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3116 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3116->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3116->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3116, self->symbolTable);
    symbols3115 = $tmp3116;
    self->symbolTable = symbols3115;
    panda$core$Bit $tmp3120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3112->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3119 = $tmp3120.value;
    if ($tmp3119) goto $l3121;
    panda$core$Bit $tmp3122 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3112->type);
    $tmp3119 = $tmp3122.value;
    $l3121:;
    panda$core$Bit $tmp3123 = { $tmp3119 };
    if ($tmp3123.value) {
    {
        panda$core$Object* $tmp3124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3125 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3126 = org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3124), list3112, ((org$pandalanguage$pandac$ASTNode*) $tmp3125));
        result3118 = $tmp3126;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3127 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3112);
        list3112 = $tmp3127;
        if (((panda$core$Bit) { list3112 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3128 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3130 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3112->type);
            ITable* $tmp3131 = ((panda$collections$Iterable*) $tmp3130)->$class->itable;
            while ($tmp3131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3131 = $tmp3131->next;
            }
            $fn3133 $tmp3132 = $tmp3131->methods[0];
            panda$collections$Iterator* $tmp3134 = $tmp3132(((panda$collections$Iterable*) $tmp3130));
            intf$Iter3129 = $tmp3134;
            $l3135:;
            ITable* $tmp3137 = intf$Iter3129->$class->itable;
            while ($tmp3137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3137 = $tmp3137->next;
            }
            $fn3139 $tmp3138 = $tmp3137->methods[0];
            panda$core$Bit $tmp3140 = $tmp3138(intf$Iter3129);
            panda$core$Bit $tmp3141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3140);
            if (!$tmp3141.value) goto $l3136;
            {
                ITable* $tmp3143 = intf$Iter3129->$class->itable;
                while ($tmp3143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3143 = $tmp3143->next;
                }
                $fn3145 $tmp3144 = $tmp3143->methods[1];
                panda$core$Object* $tmp3146 = $tmp3144(intf$Iter3129);
                intf3142 = ((org$pandalanguage$pandac$Type*) $tmp3146);
                panda$core$Bit $tmp3148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3142->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3147 = $tmp3148.value;
                if (!$tmp3147) goto $l3149;
                panda$core$Object* $tmp3150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3142->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3151 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3152 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3150), $tmp3151);
                $tmp3147 = $tmp3152.value;
                $l3149:;
                panda$core$Bit $tmp3153 = { $tmp3147 };
                if ($tmp3153.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3155 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3112, intf3142);
                    iterator3154 = $tmp3155;
                    panda$core$Object* $tmp3156 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3158 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3156), iterator3154, ((org$pandalanguage$pandac$ASTNode*) $tmp3157));
                    result3118 = $tmp3158;
                    found3128 = ((panda$core$Bit) { true });
                    goto $l3136;
                }
                }
                panda$core$Bit $tmp3160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3142->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3159 = $tmp3160.value;
                if (!$tmp3159) goto $l3161;
                panda$core$Object* $tmp3162 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3142->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3163 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3164 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3162), $tmp3163);
                $tmp3159 = $tmp3164.value;
                $l3161:;
                panda$core$Bit $tmp3165 = { $tmp3159 };
                if ($tmp3165.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3167 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3112, intf3142);
                    iterable3166 = $tmp3167;
                    panda$collections$Array* $tmp3170 = (panda$collections$Array*) malloc(40);
                    $tmp3170->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3170->refCount.value = 1;
                    panda$collections$Array$init($tmp3170);
                    org$pandalanguage$pandac$IRNode* $tmp3172 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3166, &$s3169, ((panda$collections$ListView*) $tmp3170));
                    iterator3168 = $tmp3172;
                    panda$core$Object* $tmp3173 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3175 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3173), iterator3168, ((org$pandalanguage$pandac$ASTNode*) $tmp3174));
                    result3118 = $tmp3175;
                    found3128 = ((panda$core$Bit) { true });
                    goto $l3136;
                }
                }
            }
            goto $l3135;
            $l3136:;
        }
        panda$core$Bit $tmp3176 = panda$core$Bit$$NOT$R$panda$core$Bit(found3128);
        if ($tmp3176.value) {
        {
            panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3177, ((panda$core$Object*) list3112->type));
            panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, &$s3179);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, list3112->offset, $tmp3180);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3115->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3181);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3118;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3185;
    org$pandalanguage$pandac$IRNode* stmt3190;
    panda$collections$Array* children3193;
    panda$core$Bit $tmp3182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3182.value);
    panda$core$Int64 $tmp3183 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3183, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3184.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3186 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3187 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3186));
    org$pandalanguage$pandac$Type* $tmp3188 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3189 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3187, $tmp3188);
    test3185 = $tmp3189;
    if (((panda$core$Bit) { test3185 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3191 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3192 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3191));
    stmt3190 = $tmp3192;
    if (((panda$core$Bit) { stmt3190 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3194 = (panda$collections$Array*) malloc(40);
    $tmp3194->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3194->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3194, ((panda$core$Int64) { 2 }));
    children3193 = $tmp3194;
    panda$collections$Array$add$panda$collections$Array$T(children3193, ((panda$core$Object*) test3185));
    panda$collections$Array$add$panda$collections$Array$T(children3193, ((panda$core$Object*) stmt3190));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3196 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3196->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3196->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3196, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3193));
    return $tmp3196;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3201;
    org$pandalanguage$pandac$IRNode* test3204;
    panda$collections$Array* children3209;
    panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3198.value);
    panda$core$Int64 $tmp3199 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3199, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3200.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3202 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3203 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3202));
    stmt3201 = $tmp3203;
    if (((panda$core$Bit) { stmt3201 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3206 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3205));
    org$pandalanguage$pandac$Type* $tmp3207 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3208 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3206, $tmp3207);
    test3204 = $tmp3208;
    if (((panda$core$Bit) { test3204 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3210 = (panda$collections$Array*) malloc(40);
    $tmp3210->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3210->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3210, ((panda$core$Int64) { 2 }));
    children3209 = $tmp3210;
    panda$collections$Array$add$panda$collections$Array$T(children3209, ((panda$core$Object*) stmt3201));
    panda$collections$Array$add$panda$collections$Array$T(children3209, ((panda$core$Object*) test3204));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3212 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3212->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3212->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3212, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3209));
    return $tmp3212;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3217;
    panda$collections$Array* children3220;
    panda$core$Bit $tmp3214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3214.value);
    panda$core$Int64 $tmp3215 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3215, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3216.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3218 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3219 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3218));
    stmt3217 = $tmp3219;
    if (((panda$core$Bit) { stmt3217 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3221 = (panda$collections$Array*) malloc(40);
    $tmp3221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3221->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3221, ((panda$core$Int64) { 1 }));
    children3220 = $tmp3221;
    panda$collections$Array$add$panda$collections$Array$T(children3220, ((panda$core$Object*) stmt3217));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3223 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3223->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3223->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3223, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3220));
    return $tmp3223;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3225;
    org$pandalanguage$pandac$Type* type3229;
    org$pandalanguage$pandac$Variable* v3240;
    value3225 = p_rawValue;
    bool $tmp3226 = ((panda$core$Bit) { value3225 == NULL }).value;
    if ($tmp3226) goto $l3227;
    $tmp3226 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3227:;
    panda$core$Bit $tmp3228 = { $tmp3226 };
    PANDA_ASSERT($tmp3228.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3230 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3230, ((panda$core$Int64) { 1 }));
            if ($tmp3231.value) {
            {
                panda$core$Object* $tmp3232 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3233 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3232));
                org$pandalanguage$pandac$Type* $tmp3234 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3233);
                type3229 = $tmp3234;
            }
            }
            else {
            if (((panda$core$Bit) { value3225 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3235 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3225);
                value3225 = $tmp3235;
                if (((panda$core$Bit) { value3225 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3236 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3225);
                type3229 = $tmp3236;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3229 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_t->offset, &$s3237);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3225 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3238 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3225, type3229);
                value3225 = $tmp3238;
                if (((panda$core$Bit) { value3225 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3239 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3225->type, type3229);
                PANDA_ASSERT($tmp3239.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3241 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp3241->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3241->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3241, p_t->offset, p_kind, ((panda$core$String*) p_t->payload), type3229);
            v3240 = $tmp3241;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3240));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3243 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3243->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3243->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3245 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3245->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3245, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3240)->offset, v3240->type, v3240);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3243, $tmp3245, value3225);
            return $tmp3243;
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
    org$pandalanguage$pandac$IRNode* value3255;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3260;
    panda$collections$Array* children3263;
    org$pandalanguage$pandac$Variable* v3267;
    panda$core$Bit $tmp3247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3247.value);
    panda$core$Int64 $tmp3249 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3249, ((panda$core$Int64) { 1 }));
    bool $tmp3248 = $tmp3250.value;
    if ($tmp3248) goto $l3251;
    panda$core$Int64 $tmp3252 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3252, ((panda$core$Int64) { 2 }));
    $tmp3248 = $tmp3253.value;
    $l3251:;
    panda$core$Bit $tmp3254 = { $tmp3248 };
    PANDA_ASSERT($tmp3254.value);
    panda$core$Int64 $tmp3256 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3256, ((panda$core$Int64) { 2 }));
    if ($tmp3257.value) {
    {
        panda$core$Object* $tmp3258 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3259 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3258));
        value3255 = $tmp3259;
        if (((panda$core$Bit) { value3255 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3255 = NULL;
    }
    }
    panda$core$Object* $tmp3261 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3262 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3261), p_varKind, value3255, NULL);
    target3260 = $tmp3262;
    if (((panda$core$Bit) { target3260 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3264 = (panda$collections$Array*) malloc(40);
    $tmp3264->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3264->refCount.value = 1;
    panda$collections$Array$init($tmp3264);
    children3263 = $tmp3264;
    panda$collections$Array$add$panda$collections$Array$T(children3263, ((panda$core$Object*) target3260->target));
    if (((panda$core$Bit) { target3260->value != NULL }).value) {
    {
        panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3260->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3266.value);
        v3267 = ((org$pandalanguage$pandac$Variable*) target3260->target->payload);
        v3267->initialValue = target3260->value;
        panda$collections$Array$add$panda$collections$Array$T(children3263, ((panda$core$Object*) target3260->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3268 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3268->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3268->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3268, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children3263));
    return $tmp3268;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3271;
    panda$collections$Iterator* label$Iter3272;
    panda$core$String* label3284;
    panda$core$Bit $tmp3270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3270.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3271 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3273 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3273->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3273 = $tmp3273->next;
            }
            $fn3275 $tmp3274 = $tmp3273->methods[0];
            panda$collections$Iterator* $tmp3276 = $tmp3274(((panda$collections$Iterable*) self->loops));
            label$Iter3272 = $tmp3276;
            $l3277:;
            ITable* $tmp3279 = label$Iter3272->$class->itable;
            while ($tmp3279->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3279 = $tmp3279->next;
            }
            $fn3281 $tmp3280 = $tmp3279->methods[0];
            panda$core$Bit $tmp3282 = $tmp3280(label$Iter3272);
            panda$core$Bit $tmp3283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3282);
            if (!$tmp3283.value) goto $l3278;
            {
                ITable* $tmp3285 = label$Iter3272->$class->itable;
                while ($tmp3285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3285 = $tmp3285->next;
                }
                $fn3287 $tmp3286 = $tmp3285->methods[1];
                panda$core$Object* $tmp3288 = $tmp3286(label$Iter3272);
                label3284 = ((panda$core$String*) $tmp3288);
                bool $tmp3289 = ((panda$core$Bit) { label3284 != NULL }).value;
                if (!$tmp3289) goto $l3290;
                panda$core$Bit $tmp3291 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3284, ((panda$core$String*) p_b->payload));
                $tmp3289 = $tmp3291.value;
                $l3290:;
                panda$core$Bit $tmp3292 = { $tmp3289 };
                if ($tmp3292.value) {
                {
                    found3271 = ((panda$core$Bit) { true });
                    goto $l3278;
                }
                }
            }
            goto $l3277;
            $l3278:;
        }
        panda$core$Bit $tmp3293 = panda$core$Bit$$NOT$R$panda$core$Bit(found3271);
        if ($tmp3293.value) {
        {
            panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3294, p_b->payload);
            panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
            panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3298, p_b->payload);
            panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, &$s3300);
            panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, $tmp3301);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, $tmp3302);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3303 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3303, ((panda$core$Int64) { 0 }));
    if ($tmp3304.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, &$s3305);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3306 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3306->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3306->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3306, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp3306;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3309;
    panda$collections$Iterator* label$Iter3310;
    panda$core$String* label3322;
    panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3308.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3309 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3311 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3311->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3311 = $tmp3311->next;
            }
            $fn3313 $tmp3312 = $tmp3311->methods[0];
            panda$collections$Iterator* $tmp3314 = $tmp3312(((panda$collections$Iterable*) self->loops));
            label$Iter3310 = $tmp3314;
            $l3315:;
            ITable* $tmp3317 = label$Iter3310->$class->itable;
            while ($tmp3317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3317 = $tmp3317->next;
            }
            $fn3319 $tmp3318 = $tmp3317->methods[0];
            panda$core$Bit $tmp3320 = $tmp3318(label$Iter3310);
            panda$core$Bit $tmp3321 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3320);
            if (!$tmp3321.value) goto $l3316;
            {
                ITable* $tmp3323 = label$Iter3310->$class->itable;
                while ($tmp3323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3323 = $tmp3323->next;
                }
                $fn3325 $tmp3324 = $tmp3323->methods[1];
                panda$core$Object* $tmp3326 = $tmp3324(label$Iter3310);
                label3322 = ((panda$core$String*) $tmp3326);
                bool $tmp3327 = ((panda$core$Bit) { label3322 != NULL }).value;
                if (!$tmp3327) goto $l3328;
                panda$core$Bit $tmp3329 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3322, ((panda$core$String*) p_c->payload));
                $tmp3327 = $tmp3329.value;
                $l3328:;
                panda$core$Bit $tmp3330 = { $tmp3327 };
                if ($tmp3330.value) {
                {
                    found3309 = ((panda$core$Bit) { true });
                    goto $l3316;
                }
                }
            }
            goto $l3315;
            $l3316:;
        }
        panda$core$Bit $tmp3331 = panda$core$Bit$$NOT$R$panda$core$Bit(found3309);
        if ($tmp3331.value) {
        {
            panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3332, p_c->payload);
            panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
            panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3336, p_c->payload);
            panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
            panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, $tmp3339);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3340);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3341 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3341, ((panda$core$Int64) { 0 }));
    if ($tmp3342.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, &$s3343);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3344 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3344->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3344->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3344, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp3344;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3353;
    panda$collections$Array* children3358;
    panda$core$Bit $tmp3346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3346.value);
    panda$core$Int64 $tmp3347 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3347, ((panda$core$Int64) { 1 }));
    if ($tmp3348.value) {
    {
        panda$core$Object* $tmp3349 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3350 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3351 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3349)->returnType, $tmp3350);
        if ($tmp3351.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3352);
            return NULL;
        }
        }
        panda$core$Object* $tmp3354 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3355 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3354));
        panda$core$Object* $tmp3356 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3357 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3355, ((org$pandalanguage$pandac$MethodDecl*) $tmp3356)->returnType);
        value3353 = $tmp3357;
        if (((panda$core$Bit) { value3353 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3359 = (panda$collections$Array*) malloc(40);
        $tmp3359->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3359->refCount.value = 1;
        panda$collections$Array$init($tmp3359);
        children3358 = $tmp3359;
        panda$collections$Array$add$panda$collections$Array$T(children3358, ((panda$core$Object*) value3353));
        org$pandalanguage$pandac$IRNode* $tmp3361 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3361->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3361->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3361, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children3358));
        return $tmp3361;
    }
    }
    panda$core$Int64 $tmp3363 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3363, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3364.value);
    panda$core$Object* $tmp3365 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3366 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3367 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3365)->returnType, $tmp3366);
    if ($tmp3367.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3368);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3369 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3369->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3369->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp3369, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp3369;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3379;
    org$pandalanguage$pandac$ClassDecl* bit3384;
    org$pandalanguage$pandac$Symbol* value3387;
    panda$collections$Array* fieldChildren3390;
    panda$collections$Array* children3396;
    org$pandalanguage$pandac$IRNode* msg3401;
    panda$core$Bit $tmp3371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3371.value);
    panda$core$Int64 $tmp3373 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3373, ((panda$core$Int64) { 1 }));
    bool $tmp3372 = $tmp3374.value;
    if ($tmp3372) goto $l3375;
    panda$core$Int64 $tmp3376 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3376, ((panda$core$Int64) { 2 }));
    $tmp3372 = $tmp3377.value;
    $l3375:;
    panda$core$Bit $tmp3378 = { $tmp3372 };
    PANDA_ASSERT($tmp3378.value);
    panda$core$Object* $tmp3380 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3381 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3380));
    test3379 = $tmp3381;
    if (((panda$core$Bit) { test3379 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3382 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3383 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3379, $tmp3382);
    test3379 = $tmp3383;
    if (((panda$core$Bit) { test3379 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3385 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3386 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3385);
    bit3384 = $tmp3386;
    PANDA_ASSERT(((panda$core$Bit) { bit3384 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3389 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3384->symbolTable, &$s3388);
    value3387 = $tmp3389;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3387));
    panda$collections$Array* $tmp3391 = (panda$collections$Array*) malloc(40);
    $tmp3391->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3391->refCount.value = 1;
    panda$collections$Array$init($tmp3391);
    fieldChildren3390 = $tmp3391;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3390, ((panda$core$Object*) test3379));
    org$pandalanguage$pandac$IRNode* $tmp3393 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3393->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3393->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3395 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3393, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp3395, ((panda$core$Object*) value3387), ((panda$collections$ListView*) fieldChildren3390));
    test3379 = $tmp3393;
    panda$collections$Array* $tmp3397 = (panda$collections$Array*) malloc(40);
    $tmp3397->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3397->refCount.value = 1;
    panda$collections$Array$init($tmp3397);
    children3396 = $tmp3397;
    panda$collections$Array$add$panda$collections$Array$T(children3396, ((panda$core$Object*) test3379));
    panda$core$Int64 $tmp3399 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3399, ((panda$core$Int64) { 2 }));
    if ($tmp3400.value) {
    {
        panda$core$Object* $tmp3402 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3403 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3402));
        msg3401 = $tmp3403;
        if (((panda$core$Bit) { msg3401 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3404 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3405 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3401, $tmp3404);
        msg3401 = $tmp3405;
        if (((panda$core$Bit) { msg3401 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3396, ((panda$core$Object*) msg3401));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3406 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3406->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3406->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3406, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children3396));
    return $tmp3406;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3421;
    panda$core$Int64 varKind3422;
    panda$collections$Array* decls3423;
    panda$collections$Iterator* astDecl$Iter3426;
    org$pandalanguage$pandac$ASTNode* astDecl3438;
    org$pandalanguage$pandac$IRNode* decl3443;
    panda$core$Bit $tmp3411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3410 = $tmp3411.value;
    if ($tmp3410) goto $l3412;
    panda$core$Bit $tmp3413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3410 = $tmp3413.value;
    $l3412:;
    panda$core$Bit $tmp3414 = { $tmp3410 };
    bool $tmp3409 = $tmp3414.value;
    if ($tmp3409) goto $l3415;
    panda$core$Bit $tmp3416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3409 = $tmp3416.value;
    $l3415:;
    panda$core$Bit $tmp3417 = { $tmp3409 };
    bool $tmp3408 = $tmp3417.value;
    if ($tmp3408) goto $l3418;
    panda$core$Bit $tmp3419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3408 = $tmp3419.value;
    $l3418:;
    panda$core$Bit $tmp3420 = { $tmp3408 };
    PANDA_ASSERT($tmp3420.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3421 = ((panda$core$Int64) { 1017 });
            varKind3422 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3421 = ((panda$core$Int64) { 1018 });
            varKind3422 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3421 = ((panda$core$Int64) { 1019 });
            varKind3422 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3421 = ((panda$core$Int64) { 1020 });
            varKind3422 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3424 = (panda$collections$Array*) malloc(40);
    $tmp3424->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3424->refCount.value = 1;
    panda$collections$Array$init($tmp3424);
    decls3423 = $tmp3424;
    {
        ITable* $tmp3427 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3427->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3427 = $tmp3427->next;
        }
        $fn3429 $tmp3428 = $tmp3427->methods[0];
        panda$collections$Iterator* $tmp3430 = $tmp3428(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3426 = $tmp3430;
        $l3431:;
        ITable* $tmp3433 = astDecl$Iter3426->$class->itable;
        while ($tmp3433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3433 = $tmp3433->next;
        }
        $fn3435 $tmp3434 = $tmp3433->methods[0];
        panda$core$Bit $tmp3436 = $tmp3434(astDecl$Iter3426);
        panda$core$Bit $tmp3437 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3436);
        if (!$tmp3437.value) goto $l3432;
        {
            ITable* $tmp3439 = astDecl$Iter3426->$class->itable;
            while ($tmp3439->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3439 = $tmp3439->next;
            }
            $fn3441 $tmp3440 = $tmp3439->methods[1];
            panda$core$Object* $tmp3442 = $tmp3440(astDecl$Iter3426);
            astDecl3438 = ((org$pandalanguage$pandac$ASTNode*) $tmp3442);
            org$pandalanguage$pandac$IRNode* $tmp3444 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3438, varKind3422);
            decl3443 = $tmp3444;
            if (((panda$core$Bit) { decl3443 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3423, ((panda$core$Object*) decl3443));
        }
        goto $l3431;
        $l3432:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3445 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3445->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3445->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3445, nodeKind3421, p_v->offset, ((panda$collections$ListView*) decls3423));
    return $tmp3445;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3447;
    panda$collections$Array* callChildren3450;
    org$pandalanguage$pandac$IRNode* testValue3453;
    org$pandalanguage$pandac$IRNode* $tmp3448 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3448->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3448, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target3447 = $tmp3448;
    panda$collections$Array* $tmp3451 = (panda$collections$Array*) malloc(40);
    $tmp3451->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3451->refCount.value = 1;
    panda$collections$Array$init($tmp3451);
    callChildren3450 = $tmp3451;
    org$pandalanguage$pandac$IRNode* $tmp3454 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3453 = $tmp3454;
    if (((panda$core$Bit) { testValue3453 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3450, ((panda$core$Object*) testValue3453));
    org$pandalanguage$pandac$IRNode* $tmp3456 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3447, &$s3455, ((panda$collections$ListView*) callChildren3450));
    return $tmp3456;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3465;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3469;
    org$pandalanguage$pandac$IRNode* nextTest3490;
    panda$collections$Array* callChildren3494;
    panda$collections$Array* statements3512;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3515;
    org$pandalanguage$pandac$IRNode* statement3535;
    panda$collections$Array* children3550;
    panda$core$Bit $tmp3457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3457.value);
    panda$core$Int64 $tmp3458 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3459 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3458, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3459.value);
    panda$core$Object* $tmp3460 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3460)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3461.value);
    panda$core$Object* $tmp3462 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3462)->children);
    panda$core$Bit $tmp3464 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3463, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3464.value);
    panda$core$Object* $tmp3466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3467 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3466)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3468 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3467));
    test3465 = $tmp3468;
    if (((panda$core$Bit) { test3465 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3470 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3471 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3470)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3469, ((panda$core$Int64) { 1 }), $tmp3471, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3473 = $tmp3469.start.value;
    panda$core$Int64 i3472 = { $tmp3473 };
    int64_t $tmp3475 = $tmp3469.end.value;
    int64_t $tmp3476 = $tmp3469.step.value;
    bool $tmp3477 = $tmp3469.inclusive.value;
    bool $tmp3484 = $tmp3476 > 0;
    if ($tmp3484) goto $l3482; else goto $l3483;
    $l3482:;
    if ($tmp3477) goto $l3485; else goto $l3486;
    $l3485:;
    if ($tmp3473 <= $tmp3475) goto $l3478; else goto $l3480;
    $l3486:;
    if ($tmp3473 < $tmp3475) goto $l3478; else goto $l3480;
    $l3483:;
    if ($tmp3477) goto $l3487; else goto $l3488;
    $l3487:;
    if ($tmp3473 >= $tmp3475) goto $l3478; else goto $l3480;
    $l3488:;
    if ($tmp3473 > $tmp3475) goto $l3478; else goto $l3480;
    $l3478:;
    {
        panda$core$Object* $tmp3491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3491)->children, i3472);
        org$pandalanguage$pandac$IRNode* $tmp3493 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3492));
        nextTest3490 = $tmp3493;
        if (((panda$core$Bit) { nextTest3490 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3495 = (panda$collections$Array*) malloc(40);
        $tmp3495->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3495->refCount.value = 1;
        panda$collections$Array$init($tmp3495);
        callChildren3494 = $tmp3495;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3494, ((panda$core$Object*) nextTest3490));
        org$pandalanguage$pandac$IRNode* $tmp3498 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3465, &$s3497, ((panda$collections$ListView*) callChildren3494));
        test3465 = $tmp3498;
        if (((panda$core$Bit) { test3465 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3481:;
    if ($tmp3484) goto $l3500; else goto $l3501;
    $l3500:;
    int64_t $tmp3502 = $tmp3475 - i3472.value;
    if ($tmp3477) goto $l3503; else goto $l3504;
    $l3503:;
    if ($tmp3502 >= $tmp3476) goto $l3499; else goto $l3480;
    $l3504:;
    if ($tmp3502 > $tmp3476) goto $l3499; else goto $l3480;
    $l3501:;
    int64_t $tmp3506 = i3472.value - $tmp3475;
    if ($tmp3477) goto $l3507; else goto $l3508;
    $l3507:;
    if ($tmp3506 >= -$tmp3476) goto $l3499; else goto $l3480;
    $l3508:;
    if ($tmp3506 > -$tmp3476) goto $l3499; else goto $l3480;
    $l3499:;
    i3472.value += $tmp3476;
    goto $l3478;
    $l3480:;
    org$pandalanguage$pandac$SymbolTable* $tmp3510 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3510->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3510->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3510, self->symbolTable);
    self->symbolTable = $tmp3510;
    panda$collections$Array* $tmp3513 = (panda$collections$Array*) malloc(40);
    $tmp3513->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3513->refCount.value = 1;
    panda$collections$Array$init($tmp3513);
    statements3512 = $tmp3513;
    panda$core$Int64 $tmp3516 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3515, ((panda$core$Int64) { 1 }), $tmp3516, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3518 = $tmp3515.start.value;
    panda$core$Int64 i3517 = { $tmp3518 };
    int64_t $tmp3520 = $tmp3515.end.value;
    int64_t $tmp3521 = $tmp3515.step.value;
    bool $tmp3522 = $tmp3515.inclusive.value;
    bool $tmp3529 = $tmp3521 > 0;
    if ($tmp3529) goto $l3527; else goto $l3528;
    $l3527:;
    if ($tmp3522) goto $l3530; else goto $l3531;
    $l3530:;
    if ($tmp3518 <= $tmp3520) goto $l3523; else goto $l3525;
    $l3531:;
    if ($tmp3518 < $tmp3520) goto $l3523; else goto $l3525;
    $l3528:;
    if ($tmp3522) goto $l3532; else goto $l3533;
    $l3532:;
    if ($tmp3518 >= $tmp3520) goto $l3523; else goto $l3525;
    $l3533:;
    if ($tmp3518 > $tmp3520) goto $l3523; else goto $l3525;
    $l3523:;
    {
        panda$core$Object* $tmp3536 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3517);
        org$pandalanguage$pandac$IRNode* $tmp3537 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3536));
        statement3535 = $tmp3537;
        if (((panda$core$Bit) { statement3535 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3512, ((panda$core$Object*) statement3535));
    }
    $l3526:;
    if ($tmp3529) goto $l3539; else goto $l3540;
    $l3539:;
    int64_t $tmp3541 = $tmp3520 - i3517.value;
    if ($tmp3522) goto $l3542; else goto $l3543;
    $l3542:;
    if ($tmp3541 >= $tmp3521) goto $l3538; else goto $l3525;
    $l3543:;
    if ($tmp3541 > $tmp3521) goto $l3538; else goto $l3525;
    $l3540:;
    int64_t $tmp3545 = i3517.value - $tmp3520;
    if ($tmp3522) goto $l3546; else goto $l3547;
    $l3546:;
    if ($tmp3545 >= -$tmp3521) goto $l3538; else goto $l3525;
    $l3547:;
    if ($tmp3545 > -$tmp3521) goto $l3538; else goto $l3525;
    $l3538:;
    i3517.value += $tmp3521;
    goto $l3523;
    $l3525:;
    panda$core$Object* $tmp3549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3549);
    panda$collections$Array* $tmp3551 = (panda$collections$Array*) malloc(40);
    $tmp3551->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3551->refCount.value = 1;
    panda$collections$Array$init($tmp3551);
    children3550 = $tmp3551;
    panda$collections$Array$add$panda$collections$Array$T(children3550, ((panda$core$Object*) test3465));
    org$pandalanguage$pandac$IRNode* $tmp3553 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3553->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3553->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3553, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3512));
    panda$collections$Array$add$panda$collections$Array$T(children3550, ((panda$core$Object*) $tmp3553));
    org$pandalanguage$pandac$IRNode* $tmp3555 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3555->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3555->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3555, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children3550));
    return $tmp3555;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3557;
    org$pandalanguage$pandac$Variable* valueVar3560;
    panda$collections$Array* declChildren3567;
    panda$collections$Array* varChildren3572;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3579;
    org$pandalanguage$pandac$ASTNode* c3599;
    org$pandalanguage$pandac$IRNode* w3601;
    panda$collections$Array* statements3603;
    panda$collections$Iterator* astStatement$Iter3606;
    org$pandalanguage$pandac$ASTNode* astStatement3618;
    org$pandalanguage$pandac$IRNode* stmt3623;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3638;
    panda$collections$Array* $tmp3558 = (panda$collections$Array*) malloc(40);
    $tmp3558->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3558->refCount.value = 1;
    panda$collections$Array$init($tmp3558);
    children3557 = $tmp3558;
    org$pandalanguage$pandac$Variable* $tmp3561 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3561->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3561->refCount.value = 1;
    panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3563, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3564, &$s3565);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3561, p_m->offset, ((panda$core$Int64) { 10001 }), $tmp3566, p_value->type);
    valueVar3560 = $tmp3561;
    panda$collections$Array* $tmp3568 = (panda$collections$Array*) malloc(40);
    $tmp3568->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3568->refCount.value = 1;
    panda$collections$Array$init($tmp3568);
    declChildren3567 = $tmp3568;
    org$pandalanguage$pandac$IRNode* $tmp3570 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3570->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3570, ((panda$core$Int64) { 1016 }), p_value->offset, valueVar3560->type, valueVar3560);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3567, ((panda$core$Object*) $tmp3570));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3567, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3573 = (panda$collections$Array*) malloc(40);
    $tmp3573->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3573->refCount.value = 1;
    panda$collections$Array$init($tmp3573);
    varChildren3572 = $tmp3573;
    org$pandalanguage$pandac$IRNode* $tmp3575 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3575->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3575->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3575, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3560)->offset, ((panda$collections$ListView*) declChildren3567));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3572, ((panda$core$Object*) $tmp3575));
    org$pandalanguage$pandac$IRNode* $tmp3577 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3577->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3577->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3577, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3560)->offset, ((panda$collections$ListView*) varChildren3572));
    panda$collections$Array$add$panda$collections$Array$T(children3557, ((panda$core$Object*) $tmp3577));
    panda$core$Int64 $tmp3580 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
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
        panda$core$Object* $tmp3600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3581);
        c3599 = ((org$pandalanguage$pandac$ASTNode*) $tmp3600);
        switch (c3599->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3602 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3560, c3599);
                w3601 = $tmp3602;
                if (((panda$core$Bit) { w3601 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3557, ((panda$core$Object*) w3601));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3604 = (panda$collections$Array*) malloc(40);
                $tmp3604->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3604->refCount.value = 1;
                panda$collections$Array$init($tmp3604);
                statements3603 = $tmp3604;
                {
                    ITable* $tmp3607 = ((panda$collections$Iterable*) c3599->children)->$class->itable;
                    while ($tmp3607->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3607 = $tmp3607->next;
                    }
                    $fn3609 $tmp3608 = $tmp3607->methods[0];
                    panda$collections$Iterator* $tmp3610 = $tmp3608(((panda$collections$Iterable*) c3599->children));
                    astStatement$Iter3606 = $tmp3610;
                    $l3611:;
                    ITable* $tmp3613 = astStatement$Iter3606->$class->itable;
                    while ($tmp3613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3613 = $tmp3613->next;
                    }
                    $fn3615 $tmp3614 = $tmp3613->methods[0];
                    panda$core$Bit $tmp3616 = $tmp3614(astStatement$Iter3606);
                    panda$core$Bit $tmp3617 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3616);
                    if (!$tmp3617.value) goto $l3612;
                    {
                        ITable* $tmp3619 = astStatement$Iter3606->$class->itable;
                        while ($tmp3619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3619 = $tmp3619->next;
                        }
                        $fn3621 $tmp3620 = $tmp3619->methods[1];
                        panda$core$Object* $tmp3622 = $tmp3620(astStatement$Iter3606);
                        astStatement3618 = ((org$pandalanguage$pandac$ASTNode*) $tmp3622);
                        org$pandalanguage$pandac$IRNode* $tmp3624 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3618);
                        stmt3623 = $tmp3624;
                        if (((panda$core$Bit) { stmt3623 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3603, ((panda$core$Object*) stmt3623));
                    }
                    goto $l3611;
                    $l3612:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3625 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3625->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3625->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3625, ((panda$core$Int64) { 1000 }), c3599->offset, ((panda$collections$ListView*) statements3603));
                panda$collections$Array$add$panda$collections$Array$T(children3557, ((panda$core$Object*) $tmp3625));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3590:;
    if ($tmp3593) goto $l3628; else goto $l3629;
    $l3628:;
    int64_t $tmp3630 = $tmp3584 - i3581.value;
    if ($tmp3586) goto $l3631; else goto $l3632;
    $l3631:;
    if ($tmp3630 >= $tmp3585) goto $l3627; else goto $l3589;
    $l3632:;
    if ($tmp3630 > $tmp3585) goto $l3627; else goto $l3589;
    $l3629:;
    int64_t $tmp3634 = i3581.value - $tmp3584;
    if ($tmp3586) goto $l3635; else goto $l3636;
    $l3635:;
    if ($tmp3634 >= -$tmp3585) goto $l3627; else goto $l3589;
    $l3636:;
    if ($tmp3634 > -$tmp3585) goto $l3627; else goto $l3589;
    $l3627:;
    i3581.value += $tmp3585;
    goto $l3587;
    $l3589:;
    panda$core$Int64 $tmp3639 = panda$collections$Array$get_count$R$panda$core$Int64(children3557);
    panda$core$Int64 $tmp3640 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3639, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3638, $tmp3640, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3642 = $tmp3638.start.value;
    panda$core$Int64 i3641 = { $tmp3642 };
    int64_t $tmp3644 = $tmp3638.end.value;
    int64_t $tmp3645 = $tmp3638.step.value;
    bool $tmp3646 = $tmp3638.inclusive.value;
    bool $tmp3653 = $tmp3645 > 0;
    if ($tmp3653) goto $l3651; else goto $l3652;
    $l3651:;
    if ($tmp3646) goto $l3654; else goto $l3655;
    $l3654:;
    if ($tmp3642 <= $tmp3644) goto $l3647; else goto $l3649;
    $l3655:;
    if ($tmp3642 < $tmp3644) goto $l3647; else goto $l3649;
    $l3652:;
    if ($tmp3646) goto $l3656; else goto $l3657;
    $l3656:;
    if ($tmp3642 >= $tmp3644) goto $l3647; else goto $l3649;
    $l3657:;
    if ($tmp3642 > $tmp3644) goto $l3647; else goto $l3649;
    $l3647:;
    {
        panda$core$Int64 $tmp3659 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3641, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3660 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3557, $tmp3659);
        panda$core$Bit $tmp3661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3660)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3661.value);
        panda$core$Int64 $tmp3662 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3641, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3557, $tmp3662);
        panda$core$Int64 $tmp3664 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3663)->children);
        panda$core$Bit $tmp3665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3664, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3665.value);
        panda$core$Int64 $tmp3666 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3641, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3667 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3557, $tmp3666);
        panda$core$Object* $tmp3668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3557, i3641);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3667)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3668)));
        panda$core$Int64 $tmp3669 = panda$collections$Array$get_count$R$panda$core$Int64(children3557);
        panda$core$Int64 $tmp3670 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3669, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3557, $tmp3670);
    }
    $l3650:;
    if ($tmp3653) goto $l3672; else goto $l3673;
    $l3672:;
    int64_t $tmp3674 = $tmp3644 - i3641.value;
    if ($tmp3646) goto $l3675; else goto $l3676;
    $l3675:;
    if ($tmp3674 >= $tmp3645) goto $l3671; else goto $l3649;
    $l3676:;
    if ($tmp3674 > $tmp3645) goto $l3671; else goto $l3649;
    $l3673:;
    int64_t $tmp3678 = i3641.value - $tmp3644;
    if ($tmp3646) goto $l3679; else goto $l3680;
    $l3679:;
    if ($tmp3678 >= -$tmp3645) goto $l3671; else goto $l3649;
    $l3680:;
    if ($tmp3678 > -$tmp3645) goto $l3671; else goto $l3649;
    $l3671:;
    i3641.value += $tmp3645;
    goto $l3647;
    $l3649:;
    org$pandalanguage$pandac$IRNode* $tmp3682 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3682->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3682->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3682, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children3557));
    return $tmp3682;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3692;
    panda$collections$Iterator* expr$Iter3695;
    org$pandalanguage$pandac$ASTNode* expr3708;
    org$pandalanguage$pandac$IRNode* compiled3713;
    panda$collections$Array* statements3718;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3721;
    org$pandalanguage$pandac$IRNode* statement3741;
    panda$core$Bit $tmp3684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3684.value);
    panda$core$Int64 $tmp3685 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3686 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3685, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3686.value);
    panda$core$Object* $tmp3687 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3687)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3688.value);
    panda$core$Object* $tmp3689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3690 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3689)->children);
    panda$core$Bit $tmp3691 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3690, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3691.value);
    panda$collections$Array* $tmp3693 = (panda$collections$Array*) malloc(40);
    $tmp3693->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3693->refCount.value = 1;
    panda$collections$Array$init($tmp3693);
    children3692 = $tmp3693;
    {
        panda$core$Object* $tmp3696 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3697 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3696)->children)->$class->itable;
        while ($tmp3697->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3697 = $tmp3697->next;
        }
        $fn3699 $tmp3698 = $tmp3697->methods[0];
        panda$collections$Iterator* $tmp3700 = $tmp3698(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3696)->children));
        expr$Iter3695 = $tmp3700;
        $l3701:;
        ITable* $tmp3703 = expr$Iter3695->$class->itable;
        while ($tmp3703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3703 = $tmp3703->next;
        }
        $fn3705 $tmp3704 = $tmp3703->methods[0];
        panda$core$Bit $tmp3706 = $tmp3704(expr$Iter3695);
        panda$core$Bit $tmp3707 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3706);
        if (!$tmp3707.value) goto $l3702;
        {
            ITable* $tmp3709 = expr$Iter3695->$class->itable;
            while ($tmp3709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3709 = $tmp3709->next;
            }
            $fn3711 $tmp3710 = $tmp3709->methods[1];
            panda$core$Object* $tmp3712 = $tmp3710(expr$Iter3695);
            expr3708 = ((org$pandalanguage$pandac$ASTNode*) $tmp3712);
            org$pandalanguage$pandac$IRNode* $tmp3714 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3708);
            org$pandalanguage$pandac$IRNode* $tmp3715 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3714, p_type);
            compiled3713 = $tmp3715;
            if (((panda$core$Bit) { compiled3713 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3692, ((panda$core$Object*) compiled3713));
        }
        goto $l3701;
        $l3702:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3716 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3716->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3716->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3716, self->symbolTable);
    self->symbolTable = $tmp3716;
    panda$collections$Array* $tmp3719 = (panda$collections$Array*) malloc(40);
    $tmp3719->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3719->refCount.value = 1;
    panda$collections$Array$init($tmp3719);
    statements3718 = $tmp3719;
    panda$core$Int64 $tmp3722 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3721, ((panda$core$Int64) { 1 }), $tmp3722, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3724 = $tmp3721.start.value;
    panda$core$Int64 i3723 = { $tmp3724 };
    int64_t $tmp3726 = $tmp3721.end.value;
    int64_t $tmp3727 = $tmp3721.step.value;
    bool $tmp3728 = $tmp3721.inclusive.value;
    bool $tmp3735 = $tmp3727 > 0;
    if ($tmp3735) goto $l3733; else goto $l3734;
    $l3733:;
    if ($tmp3728) goto $l3736; else goto $l3737;
    $l3736:;
    if ($tmp3724 <= $tmp3726) goto $l3729; else goto $l3731;
    $l3737:;
    if ($tmp3724 < $tmp3726) goto $l3729; else goto $l3731;
    $l3734:;
    if ($tmp3728) goto $l3738; else goto $l3739;
    $l3738:;
    if ($tmp3724 >= $tmp3726) goto $l3729; else goto $l3731;
    $l3739:;
    if ($tmp3724 > $tmp3726) goto $l3729; else goto $l3731;
    $l3729:;
    {
        panda$core$Object* $tmp3742 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3723);
        org$pandalanguage$pandac$IRNode* $tmp3743 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3742));
        statement3741 = $tmp3743;
        if (((panda$core$Bit) { statement3741 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3718, ((panda$core$Object*) statement3741));
    }
    $l3732:;
    if ($tmp3735) goto $l3745; else goto $l3746;
    $l3745:;
    int64_t $tmp3747 = $tmp3726 - i3723.value;
    if ($tmp3728) goto $l3748; else goto $l3749;
    $l3748:;
    if ($tmp3747 >= $tmp3727) goto $l3744; else goto $l3731;
    $l3749:;
    if ($tmp3747 > $tmp3727) goto $l3744; else goto $l3731;
    $l3746:;
    int64_t $tmp3751 = i3723.value - $tmp3726;
    if ($tmp3728) goto $l3752; else goto $l3753;
    $l3752:;
    if ($tmp3751 >= -$tmp3727) goto $l3744; else goto $l3731;
    $l3753:;
    if ($tmp3751 > -$tmp3727) goto $l3744; else goto $l3731;
    $l3744:;
    i3723.value += $tmp3727;
    goto $l3729;
    $l3731:;
    panda$core$Object* $tmp3755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3755);
    org$pandalanguage$pandac$IRNode* $tmp3756 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3756->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3756->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3756, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3718));
    panda$collections$Array$add$panda$collections$Array$T(children3692, ((panda$core$Object*) $tmp3756));
    org$pandalanguage$pandac$IRNode* $tmp3758 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3758->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3758->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3758, ((panda$core$Int64) { 1042 }), p_w->offset, ((panda$collections$ListView*) children3692));
    return $tmp3758;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3761;
    panda$collections$Array* statements3766;
    panda$collections$Iterator* s$Iter3769;
    org$pandalanguage$pandac$ASTNode* s3781;
    org$pandalanguage$pandac$IRNode* statement3786;
    panda$core$Bit $tmp3760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3760.value);
    panda$collections$Array* $tmp3762 = (panda$collections$Array*) malloc(40);
    $tmp3762->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3762->refCount.value = 1;
    panda$collections$Array$init($tmp3762);
    children3761 = $tmp3762;
    org$pandalanguage$pandac$SymbolTable* $tmp3764 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3764->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3764->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3764, self->symbolTable);
    self->symbolTable = $tmp3764;
    panda$collections$Array* $tmp3767 = (panda$collections$Array*) malloc(40);
    $tmp3767->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3767->refCount.value = 1;
    panda$collections$Array$init($tmp3767);
    statements3766 = $tmp3767;
    {
        ITable* $tmp3770 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp3770->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3770 = $tmp3770->next;
        }
        $fn3772 $tmp3771 = $tmp3770->methods[0];
        panda$collections$Iterator* $tmp3773 = $tmp3771(((panda$collections$Iterable*) p_o->children));
        s$Iter3769 = $tmp3773;
        $l3774:;
        ITable* $tmp3776 = s$Iter3769->$class->itable;
        while ($tmp3776->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3776 = $tmp3776->next;
        }
        $fn3778 $tmp3777 = $tmp3776->methods[0];
        panda$core$Bit $tmp3779 = $tmp3777(s$Iter3769);
        panda$core$Bit $tmp3780 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3779);
        if (!$tmp3780.value) goto $l3775;
        {
            ITable* $tmp3782 = s$Iter3769->$class->itable;
            while ($tmp3782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3782 = $tmp3782->next;
            }
            $fn3784 $tmp3783 = $tmp3782->methods[1];
            panda$core$Object* $tmp3785 = $tmp3783(s$Iter3769);
            s3781 = ((org$pandalanguage$pandac$ASTNode*) $tmp3785);
            org$pandalanguage$pandac$IRNode* $tmp3787 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s3781);
            statement3786 = $tmp3787;
            if (((panda$core$Bit) { statement3786 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements3766, ((panda$core$Object*) statement3786));
        }
        goto $l3774;
        $l3775:;
    }
    panda$core$Object* $tmp3788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3788);
    org$pandalanguage$pandac$IRNode* $tmp3789 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3789->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3789->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3789, ((panda$core$Int64) { 1000 }), p_o->offset, ((panda$collections$ListView*) statements3766));
    panda$collections$Array$add$panda$collections$Array$T(children3761, ((panda$core$Object*) $tmp3789));
    org$pandalanguage$pandac$IRNode* $tmp3791 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3791->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3791->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3791, ((panda$core$Int64) { 1043 }), p_o->offset, ((panda$collections$ListView*) children3761));
    return $tmp3791;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f3800;
    org$pandalanguage$pandac$Variable* v3809;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp3794 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp3793 = $tmp3794.value;
            if (!$tmp3793) goto $l3795;
            panda$core$Object* $tmp3796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3796)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp3798 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3797));
            $tmp3793 = $tmp3798.value;
            $l3795:;
            panda$core$Bit $tmp3799 = { $tmp3793 };
            return $tmp3799;
        }
        break;
        case 1026:
        {
            f3800 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f3800->resolved.value);
            panda$core$Bit $tmp3803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f3800->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp3802 = $tmp3803.value;
            if (!$tmp3802) goto $l3804;
            $tmp3802 = ((panda$core$Bit) { f3800->value != NULL }).value;
            $l3804:;
            panda$core$Bit $tmp3805 = { $tmp3802 };
            bool $tmp3801 = $tmp3805.value;
            if (!$tmp3801) goto $l3806;
            panda$core$Bit $tmp3807 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f3800->value);
            $tmp3801 = $tmp3807.value;
            $l3806:;
            panda$core$Bit $tmp3808 = { $tmp3801 };
            return $tmp3808;
        }
        break;
        case 1016:
        {
            v3809 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp3811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v3809->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp3810 = $tmp3811.value;
            if ($tmp3810) goto $l3812;
            panda$core$Bit $tmp3815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v3809->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp3814 = $tmp3815.value;
            if (!$tmp3814) goto $l3816;
            $tmp3814 = ((panda$core$Bit) { v3809->initialValue != NULL }).value;
            $l3816:;
            panda$core$Bit $tmp3817 = { $tmp3814 };
            bool $tmp3813 = $tmp3817.value;
            if (!$tmp3813) goto $l3818;
            panda$core$Bit $tmp3819 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v3809->initialValue);
            $tmp3813 = $tmp3819.value;
            $l3818:;
            panda$core$Bit $tmp3820 = { $tmp3813 };
            $tmp3810 = $tmp3820.value;
            $l3812:;
            panda$core$Bit $tmp3821 = { $tmp3810 };
            return $tmp3821;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f3826;
    org$pandalanguage$pandac$Variable* v3828;
    panda$core$Bit $tmp3822 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp3822.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp3823 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3824 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3823)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp3825 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp3824));
            return $tmp3825;
        }
        break;
        case 1026:
        {
            f3826 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp3827 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f3826->value);
            return $tmp3827;
        }
        break;
        case 1016:
        {
            v3828 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp3829 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v3828->initialValue);
            return $tmp3829;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value3833;
    panda$collections$Array* children3840;
    panda$collections$Iterator* rawWhen$Iter3843;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3844;
    org$pandalanguage$pandac$ASTNode* rawWhen3857;
    org$pandalanguage$pandac$IRNode* o3863;
    org$pandalanguage$pandac$IRNode* w3865;
    panda$core$Bit $tmp3830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp3830.value);
    panda$core$Int64 $tmp3831 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp3832 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3831, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3832.value);
    panda$core$Object* $tmp3834 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3835 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3834));
    org$pandalanguage$pandac$IRNode* $tmp3836 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3835);
    value3833 = $tmp3836;
    if (((panda$core$Bit) { value3833 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3837 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value3833->type);
    panda$core$Bit $tmp3838 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3837);
    if ($tmp3838.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3839 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value3833);
        return $tmp3839;
    }
    }
    panda$collections$Array* $tmp3841 = (panda$collections$Array*) malloc(40);
    $tmp3841->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3841->refCount.value = 1;
    panda$collections$Array$init($tmp3841);
    children3840 = $tmp3841;
    panda$collections$Array$add$panda$collections$Array$T(children3840, ((panda$core$Object*) value3833));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3844, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp3845 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp3844);
        ITable* $tmp3846 = ((panda$collections$Iterable*) $tmp3845)->$class->itable;
        while ($tmp3846->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3846 = $tmp3846->next;
        }
        $fn3848 $tmp3847 = $tmp3846->methods[0];
        panda$collections$Iterator* $tmp3849 = $tmp3847(((panda$collections$Iterable*) $tmp3845));
        rawWhen$Iter3843 = $tmp3849;
        $l3850:;
        ITable* $tmp3852 = rawWhen$Iter3843->$class->itable;
        while ($tmp3852->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3852 = $tmp3852->next;
        }
        $fn3854 $tmp3853 = $tmp3852->methods[0];
        panda$core$Bit $tmp3855 = $tmp3853(rawWhen$Iter3843);
        panda$core$Bit $tmp3856 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3855);
        if (!$tmp3856.value) goto $l3851;
        {
            ITable* $tmp3858 = rawWhen$Iter3843->$class->itable;
            while ($tmp3858->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3858 = $tmp3858->next;
            }
            $fn3860 $tmp3859 = $tmp3858->methods[1];
            panda$core$Object* $tmp3861 = $tmp3859(rawWhen$Iter3843);
            rawWhen3857 = ((org$pandalanguage$pandac$ASTNode*) $tmp3861);
            panda$core$Bit $tmp3862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen3857->kind, ((panda$core$Int64) { 127 }));
            if ($tmp3862.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3864 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen3857);
                o3863 = $tmp3864;
                if (((panda$core$Bit) { o3863 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3840, ((panda$core$Object*) o3863));
                goto $l3850;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3866 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value3833->type, rawWhen3857);
            w3865 = $tmp3866;
            if (((panda$core$Bit) { w3865 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp3867 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3865->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp3868 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3867));
            panda$core$Bit $tmp3869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3868);
            if ($tmp3869.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3870 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value3833);
                return $tmp3870;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3840, ((panda$core$Object*) w3865));
        }
        goto $l3850;
        $l3851:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3871 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3871->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3871->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3871, ((panda$core$Int64) { 1042 }), p_m->offset, ((panda$collections$ListView*) children3840));
    return $tmp3871;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result3886;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp3873 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3873;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3874 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp3875 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3874);
            return $tmp3875;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp3876 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3876;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp3877 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3877;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp3878 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3878;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp3879 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3879;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp3880 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3880;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp3881 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3881;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp3882 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3882;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp3883 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3883;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp3884 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3884;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp3885 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3885;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3887 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp3888 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3887);
            result3886 = $tmp3888;
            if (((panda$core$Bit) { result3886 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3889 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result3886);
                result3886 = $tmp3889;
            }
            }
            return result3886;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp3890 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3890;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old3891;
    org$pandalanguage$pandac$SymbolTable* symbols3893;
    panda$collections$Iterator* p$Iter3896;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3908;
    panda$collections$Array* fieldInitializers3915;
    panda$collections$Iterator* f$Iter3919;
    org$pandalanguage$pandac$FieldDecl* f3932;
    panda$collections$Array* children3942;
    org$pandalanguage$pandac$IRNode* fieldRef3949;
    org$pandalanguage$pandac$IRNode* compiled3954;
    panda$collections$Array* children3958;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old3891 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp3892 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp3892;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp3894 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3894->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3894->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3894, self->symbolTable);
    symbols3893 = $tmp3894;
    {
        ITable* $tmp3897 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3897->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3897 = $tmp3897->next;
        }
        $fn3899 $tmp3898 = $tmp3897->methods[0];
        panda$collections$Iterator* $tmp3900 = $tmp3898(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3896 = $tmp3900;
        $l3901:;
        ITable* $tmp3903 = p$Iter3896->$class->itable;
        while ($tmp3903->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3903 = $tmp3903->next;
        }
        $fn3905 $tmp3904 = $tmp3903->methods[0];
        panda$core$Bit $tmp3906 = $tmp3904(p$Iter3896);
        panda$core$Bit $tmp3907 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3906);
        if (!$tmp3907.value) goto $l3902;
        {
            ITable* $tmp3909 = p$Iter3896->$class->itable;
            while ($tmp3909->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3909 = $tmp3909->next;
            }
            $fn3911 $tmp3910 = $tmp3909->methods[1];
            panda$core$Object* $tmp3912 = $tmp3910(p$Iter3896);
            p3908 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3912);
            org$pandalanguage$pandac$Variable* $tmp3913 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp3913->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3913->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp3913, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$core$Int64) { 10001 }), p3908->name, p3908->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols3893, ((org$pandalanguage$pandac$Symbol*) $tmp3913));
        }
        goto $l3901;
        $l3902:;
    }
    self->symbolTable = symbols3893;
    panda$collections$Array* $tmp3916 = (panda$collections$Array*) malloc(40);
    $tmp3916->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3916->refCount.value = 1;
    panda$collections$Array$init($tmp3916);
    fieldInitializers3915 = $tmp3916;
    panda$core$Bit $tmp3918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp3918.value) {
    {
        {
            panda$core$Object* $tmp3920 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp3921 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3920)->fields)->$class->itable;
            while ($tmp3921->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3921 = $tmp3921->next;
            }
            $fn3923 $tmp3922 = $tmp3921->methods[0];
            panda$collections$Iterator* $tmp3924 = $tmp3922(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3920)->fields));
            f$Iter3919 = $tmp3924;
            $l3925:;
            ITable* $tmp3927 = f$Iter3919->$class->itable;
            while ($tmp3927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3927 = $tmp3927->next;
            }
            $fn3929 $tmp3928 = $tmp3927->methods[0];
            panda$core$Bit $tmp3930 = $tmp3928(f$Iter3919);
            panda$core$Bit $tmp3931 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3930);
            if (!$tmp3931.value) goto $l3926;
            {
                ITable* $tmp3933 = f$Iter3919->$class->itable;
                while ($tmp3933->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3933 = $tmp3933->next;
                }
                $fn3935 $tmp3934 = $tmp3933->methods[1];
                panda$core$Object* $tmp3936 = $tmp3934(f$Iter3919);
                f3932 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3936);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f3932);
                panda$core$Bit $tmp3938 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f3932->annotations);
                panda$core$Bit $tmp3939 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3938);
                bool $tmp3937 = $tmp3939.value;
                if (!$tmp3937) goto $l3940;
                $tmp3937 = ((panda$core$Bit) { f3932->value != NULL }).value;
                $l3940:;
                panda$core$Bit $tmp3941 = { $tmp3937 };
                if ($tmp3941.value) {
                {
                    panda$collections$Array* $tmp3943 = (panda$collections$Array*) malloc(40);
                    $tmp3943->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3943->refCount.value = 1;
                    panda$collections$Array$init($tmp3943);
                    children3942 = $tmp3943;
                    org$pandalanguage$pandac$IRNode* $tmp3945 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3945->refCount.value = 1;
                    panda$core$Object* $tmp3947 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp3948 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp3947));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3945, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp3948);
                    panda$collections$Array$add$panda$collections$Array$T(children3942, ((panda$core$Object*) $tmp3945));
                    org$pandalanguage$pandac$IRNode* $tmp3950 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3950->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3950->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3950, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f3932->type, ((panda$core$Object*) f3932), ((panda$collections$ListView*) children3942));
                    fieldRef3949 = $tmp3950;
                    panda$collections$Array$clear(children3942);
                    panda$collections$Array$add$panda$collections$Array$T(children3942, ((panda$core$Object*) fieldRef3949));
                    panda$collections$Array$add$panda$collections$Array$T(children3942, ((panda$core$Object*) f3932->value));
                    org$pandalanguage$pandac$IRNode* $tmp3952 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3952->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3952->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3952, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f3932)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children3942));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers3915, ((panda$core$Object*) $tmp3952));
                }
                }
            }
            goto $l3925;
            $l3926:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3955 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled3954 = $tmp3955;
    if (((panda$core$Bit) { compiled3954 != NULL }).value) {
    {
        panda$core$Int64 $tmp3956 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers3915);
        panda$core$Bit $tmp3957 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3956, ((panda$core$Int64) { 0 }));
        if ($tmp3957.value) {
        {
            panda$collections$Array* $tmp3959 = (panda$collections$Array*) malloc(40);
            $tmp3959->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3959->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp3959, ((panda$collections$ListView*) fieldInitializers3915));
            children3958 = $tmp3959;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children3958, ((panda$collections$CollectionView*) compiled3954->children));
            org$pandalanguage$pandac$IRNode* $tmp3961 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3961->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3961->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3961, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children3958));
            compiled3954 = $tmp3961;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols3893) }).value);
    self->symbolTable = old3891;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp3963 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp3963.value) {
    {
        p_m->compiledBody = compiled3954;
    }
    }
    return compiled3954;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled3964;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3965 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled3964 = $tmp3965;
        if (((panda$core$Bit) { compiled3964 != NULL }).value) {
        {
            ITable* $tmp3966 = self->codeGenerator->$class->itable;
            while ($tmp3966->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp3966 = $tmp3966->next;
            }
            $fn3968 $tmp3967 = $tmp3966->methods[3];
            $tmp3967(self->codeGenerator, p_m, compiled3964);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp3969 = self->codeGenerator->$class->itable;
        while ($tmp3969->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3969 = $tmp3969->next;
        }
        $fn3971 $tmp3970 = $tmp3969->methods[2];
        $tmp3970(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter3972;
    org$pandalanguage$pandac$ClassDecl* inner3984;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp3973 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp3973->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3973 = $tmp3973->next;
        }
        $fn3975 $tmp3974 = $tmp3973->methods[0];
        panda$collections$Iterator* $tmp3976 = $tmp3974(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter3972 = $tmp3976;
        $l3977:;
        ITable* $tmp3979 = inner$Iter3972->$class->itable;
        while ($tmp3979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3979 = $tmp3979->next;
        }
        $fn3981 $tmp3980 = $tmp3979->methods[0];
        panda$core$Bit $tmp3982 = $tmp3980(inner$Iter3972);
        panda$core$Bit $tmp3983 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3982);
        if (!$tmp3983.value) goto $l3978;
        {
            ITable* $tmp3985 = inner$Iter3972->$class->itable;
            while ($tmp3985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3985 = $tmp3985->next;
            }
            $fn3987 $tmp3986 = $tmp3985->methods[1];
            panda$core$Object* $tmp3988 = $tmp3986(inner$Iter3972);
            inner3984 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3988);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner3984);
        }
        goto $l3977;
        $l3978:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old3996;
    panda$collections$Iterator* m$Iter4001;
    org$pandalanguage$pandac$MethodDecl* m4013;
    org$pandalanguage$pandac$ClassDecl* next4023;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp3989 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp3989.value) {
    {
        ITable* $tmp3990 = self->codeGenerator->$class->itable;
        while ($tmp3990->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3990 = $tmp3990->next;
        }
        $fn3992 $tmp3991 = $tmp3990->methods[1];
        $tmp3991(self->codeGenerator, p_cl);
        ITable* $tmp3993 = self->codeGenerator->$class->itable;
        while ($tmp3993->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp3993 = $tmp3993->next;
        }
        $fn3995 $tmp3994 = $tmp3993->methods[4];
        $tmp3994(self->codeGenerator, p_cl);
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    old3996 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp3997 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp3997;
    ITable* $tmp3998 = self->codeGenerator->$class->itable;
    while ($tmp3998->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp3998 = $tmp3998->next;
    }
    $fn4000 $tmp3999 = $tmp3998->methods[1];
    $tmp3999(self->codeGenerator, p_cl);
    {
        ITable* $tmp4002 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4002->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4002 = $tmp4002->next;
        }
        $fn4004 $tmp4003 = $tmp4002->methods[0];
        panda$collections$Iterator* $tmp4005 = $tmp4003(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4001 = $tmp4005;
        $l4006:;
        ITable* $tmp4008 = m$Iter4001->$class->itable;
        while ($tmp4008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4008 = $tmp4008->next;
        }
        $fn4010 $tmp4009 = $tmp4008->methods[0];
        panda$core$Bit $tmp4011 = $tmp4009(m$Iter4001);
        panda$core$Bit $tmp4012 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4011);
        if (!$tmp4012.value) goto $l4007;
        {
            ITable* $tmp4014 = m$Iter4001->$class->itable;
            while ($tmp4014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4014 = $tmp4014->next;
            }
            $fn4016 $tmp4015 = $tmp4014->methods[1];
            panda$core$Object* $tmp4017 = $tmp4015(m$Iter4001);
            m4013 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4017);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4013);
        }
        goto $l4006;
        $l4007:;
    }
    ITable* $tmp4018 = self->codeGenerator->$class->itable;
    while ($tmp4018->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4018 = $tmp4018->next;
    }
    $fn4020 $tmp4019 = $tmp4018->methods[4];
    $tmp4019(self->codeGenerator, p_cl);
    self->symbolTable = old3996;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4021 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4022 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4021, ((panda$core$Int64) { 0 }));
    if ($tmp4022.value) {
    {
        panda$core$Object* $tmp4024 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4023 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4024);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4023);
    }
    }
    panda$core$Int64 $tmp4025 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4025, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4026.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4027;
    org$pandalanguage$pandac$ASTNode* parsed4032;
    panda$collections$Iterator* cl$Iter4036;
    org$pandalanguage$pandac$ClassDecl* cl4048;
    panda$core$Object* $tmp4028 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4027 = ((panda$collections$ListView*) $tmp4028);
    if (((panda$core$Bit) { result4027 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp4029 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4030 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4031) self->parser->$class->vtable[2])(self->parser, $tmp4029, $tmp4030);
        org$pandalanguage$pandac$ASTNode* $tmp4034 = (($fn4033) self->parser->$class->vtable[68])(self->parser);
        parsed4032 = $tmp4034;
        if (((panda$core$Bit) { parsed4032 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4035 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4032);
            result4027 = $tmp4035;
            {
                ITable* $tmp4037 = ((panda$collections$Iterable*) result4027)->$class->itable;
                while ($tmp4037->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4037 = $tmp4037->next;
                }
                $fn4039 $tmp4038 = $tmp4037->methods[0];
                panda$collections$Iterator* $tmp4040 = $tmp4038(((panda$collections$Iterable*) result4027));
                cl$Iter4036 = $tmp4040;
                $l4041:;
                ITable* $tmp4043 = cl$Iter4036->$class->itable;
                while ($tmp4043->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4043 = $tmp4043->next;
                }
                $fn4045 $tmp4044 = $tmp4043->methods[0];
                panda$core$Bit $tmp4046 = $tmp4044(cl$Iter4036);
                panda$core$Bit $tmp4047 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4046);
                if (!$tmp4047.value) goto $l4042;
                {
                    ITable* $tmp4049 = cl$Iter4036->$class->itable;
                    while ($tmp4049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4049 = $tmp4049->next;
                    }
                    $fn4051 $tmp4050 = $tmp4049->methods[1];
                    panda$core$Object* $tmp4052 = $tmp4050(cl$Iter4036);
                    cl4048 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4052);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4048)->name), ((panda$core$Object*) cl4048));
                }
                goto $l4041;
                $l4042:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4053 = (panda$collections$Array*) malloc(40);
            $tmp4053->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4053->refCount.value = 1;
            panda$collections$Array$init($tmp4053);
            result4027 = ((panda$collections$ListView*) $tmp4053);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4027));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return result4027;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4055;
    panda$collections$Iterator* cl$Iter4057;
    org$pandalanguage$pandac$ClassDecl* cl4069;
    panda$collections$ListView* $tmp4056 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4055 = $tmp4056;
    {
        ITable* $tmp4058 = ((panda$collections$Iterable*) classes4055)->$class->itable;
        while ($tmp4058->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4058 = $tmp4058->next;
        }
        $fn4060 $tmp4059 = $tmp4058->methods[0];
        panda$collections$Iterator* $tmp4061 = $tmp4059(((panda$collections$Iterable*) classes4055));
        cl$Iter4057 = $tmp4061;
        $l4062:;
        ITable* $tmp4064 = cl$Iter4057->$class->itable;
        while ($tmp4064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4064 = $tmp4064->next;
        }
        $fn4066 $tmp4065 = $tmp4064->methods[0];
        panda$core$Bit $tmp4067 = $tmp4065(cl$Iter4057);
        panda$core$Bit $tmp4068 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4067);
        if (!$tmp4068.value) goto $l4063;
        {
            ITable* $tmp4070 = cl$Iter4057->$class->itable;
            while ($tmp4070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4070 = $tmp4070->next;
            }
            $fn4072 $tmp4071 = $tmp4070->methods[1];
            panda$core$Object* $tmp4073 = $tmp4071(cl$Iter4057);
            cl4069 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4073);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4069);
        }
        goto $l4062;
        $l4063:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source4074;
    panda$core$Int64 line4077;
    panda$core$Int64 column4078;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4079;
    panda$core$Char8 $match$1209794098;
    panda$core$Char8 $tmp4101;
    panda$core$Char8 $tmp4104;
    panda$core$Object* $tmp4075 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$io$InputStream* $tmp4076 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp4075));
    source4074 = $tmp4076;
    line4077 = ((panda$core$Int64) { 1 });
    column4078 = ((panda$core$Int64) { 1 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4079, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4081 = $tmp4079.start.value;
    panda$core$Int64 i4080 = { $tmp4081 };
    int64_t $tmp4083 = $tmp4079.end.value;
    int64_t $tmp4084 = $tmp4079.step.value;
    bool $tmp4085 = $tmp4079.inclusive.value;
    bool $tmp4092 = $tmp4084 > 0;
    if ($tmp4092) goto $l4090; else goto $l4091;
    $l4090:;
    if ($tmp4085) goto $l4093; else goto $l4094;
    $l4093:;
    if ($tmp4081 <= $tmp4083) goto $l4086; else goto $l4088;
    $l4094:;
    if ($tmp4081 < $tmp4083) goto $l4086; else goto $l4088;
    $l4091:;
    if ($tmp4085) goto $l4095; else goto $l4096;
    $l4095:;
    if ($tmp4081 >= $tmp4083) goto $l4086; else goto $l4088;
    $l4096:;
    if ($tmp4081 > $tmp4083) goto $l4086; else goto $l4088;
    $l4086:;
    {
        {
            panda$core$Char8$nullable $tmp4100 = (($fn4099) source4074->$class->vtable[10])(source4074);
            $match$1209794098 = ((panda$core$Char8) $tmp4100.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4101, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4102 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1209794098, $tmp4101);
            if ($tmp4102.value) {
            {
                panda$core$Int64 $tmp4103 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4077, ((panda$core$Int64) { 1 }));
                line4077 = $tmp4103;
                column4078 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4104, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4105 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1209794098, $tmp4104);
            if ($tmp4105.value) {
            {
                panda$core$Int64 $tmp4106 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column4078, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4107 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4106);
                panda$core$Int64 $tmp4108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4078, $tmp4107);
                column4078 = $tmp4108;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4109 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4078, ((panda$core$Int64) { 1 }));
                column4078 = $tmp4109;
            }
            }
            }
        }
    }
    $l4089:;
    if ($tmp4092) goto $l4111; else goto $l4112;
    $l4111:;
    int64_t $tmp4113 = $tmp4083 - i4080.value;
    if ($tmp4085) goto $l4114; else goto $l4115;
    $l4114:;
    if ($tmp4113 >= $tmp4084) goto $l4110; else goto $l4088;
    $l4115:;
    if ($tmp4113 > $tmp4084) goto $l4110; else goto $l4088;
    $l4112:;
    int64_t $tmp4117 = i4080.value - $tmp4083;
    if ($tmp4085) goto $l4118; else goto $l4119;
    $l4118:;
    if ($tmp4117 >= -$tmp4084) goto $l4110; else goto $l4088;
    $l4119:;
    if ($tmp4117 > -$tmp4084) goto $l4110; else goto $l4088;
    $l4110:;
    i4080.value += $tmp4084;
    goto $l4086;
    $l4088:;
    (($fn4121) ((panda$core$Object*) source4074)->$class->vtable[1])(((panda$core$Object*) source4074));
    org$pandalanguage$pandac$Position* $tmp4122 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4122->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4122->refCount.value = 1;
    panda$core$Object* $tmp4124 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$core$String* $tmp4125 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4124));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4122, $tmp4125, line4077, column4078);
    return $tmp4122;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4126 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, p_offset);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4126, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4127 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4127;
        panda$core$String* $tmp4129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4128, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4129, &$s4130);
        panda$core$String* $tmp4132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4131, p_msg);
        panda$core$String* $tmp4134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4132, &$s4133);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4134));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4135 = self->codeGenerator->$class->itable;
    while ($tmp4135->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4135 = $tmp4135->next;
    }
    $fn4137 $tmp4136 = $tmp4135->methods[5];
    $tmp4136(self->codeGenerator);
}

