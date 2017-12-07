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
#include "panda/core/SpecializedRange.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/io/Console.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/io/InputStream.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef void (*$fn27)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn31)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn35)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn39)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn43)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn47)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn51)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn55)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn59)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn64)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn126)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Int64 (*$fn127)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn131)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn135)(panda$collections$MapView*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn137)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn140)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Int64 (*$fn142)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn146)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn150)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn155)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn157)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn162)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn166)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn169)(panda$collections$Stack*);
typedef void (*$fn171)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn172)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn174)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Symbol* (*$fn176)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn182)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn187)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn189)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn192)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn200)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn202)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn213)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Position* (*$fn215)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn221)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef panda$core$Object* (*$fn227)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn229)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn240)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn242)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn249)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn253)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn274)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn276)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn278)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn279)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn293)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn296)(panda$core$MutableString*);
typedef void (*$fn298)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn299)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn301)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn304)(org$pandalanguage$pandac$Annotations*);
typedef panda$collections$Iterator* (*$fn316)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn322)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn328)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn332)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Annotations*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn357)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn373)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn379)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn385)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn387)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn389)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn390)(panda$collections$Stack*);
typedef void (*$fn391)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn392)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn393)(panda$collections$Stack*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn398)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn404)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn410)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn412)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn414)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn416)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn417)(panda$collections$Stack*);
typedef void (*$fn418)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn419)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Bit (*$fn422)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn424)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn426)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn428)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn430)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn431)(panda$collections$Stack*);
typedef void (*$fn433)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn434)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn435)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$IRNode* (*$fn436)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn438)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn439)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn440)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn442)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn444)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn445)(panda$collections$Stack*);
typedef void (*$fn449)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn452)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn456)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn457)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn459)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn461)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64$nullable (*$fn465)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef void (*$fn468)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn473)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn479)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn481)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn486)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn492)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn498)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn500)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn504)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn516)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn522)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn528)(panda$collections$Iterator*);
typedef panda$collections$ListView* (*$fn533)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$core$Object* (*$fn534)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$Object* (*$fn537)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn561)(panda$collections$Iterator*);
typedef panda$collections$ListView* (*$fn567)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$core$Object* (*$fn568)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn584)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef void (*$fn593)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn595)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn598)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn600)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn604)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn606)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn614)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn622)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn628)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn634)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn636)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn644)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn666)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn669)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn671)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn691)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn697)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn703)(panda$collections$Iterator*);
typedef void (*$fn705)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn712)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn724)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn728)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef void (*$fn733)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn737)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn749)(panda$collections$Iterator*);
typedef void (*$fn751)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn755)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef void (*$fn757)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn758)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn759)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn763)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn774)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn776)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn778)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn780)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn783)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn785)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn789)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Set* (*$fn791)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn793)(panda$collections$Set*, panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn797)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn809)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn811)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Set* (*$fn813)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn815)(panda$collections$Set*, panda$collections$CollectionView*);
typedef void (*$fn817)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Int64 (*$fn818)(panda$collections$ImmutableArray*);
typedef panda$core$Int64 (*$fn820)(panda$collections$ImmutableArray*);
typedef panda$core$Int64 (*$fn824)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn844)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn846)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn848)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn862)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn867)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn873)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn879)(panda$collections$Iterator*);
typedef void (*$fn882)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn883)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn885)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn887)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn896)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn902)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn908)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn911)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn913)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$Type* (*$fn915)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn917)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef void (*$fn919)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn921)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn924)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn929)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn935)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn941)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn944)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn946)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$Type* (*$fn948)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn950)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn953)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn973)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn976)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn978)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn980)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn982)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef void (*$fn985)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn987)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn989)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn994)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1000)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1006)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1009)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn1011)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1015)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1016)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn1017)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1019)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1021)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1022)(panda$collections$Stack*);
typedef panda$collections$ListView* (*$fn1023)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn1028)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1034)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1040)(panda$collections$Iterator*);
typedef void (*$fn1042)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1046)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1072)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1073)(org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn1087)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1088)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Symbol* (*$fn1093)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn1096)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn1102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1114)(panda$collections$Iterator*);
typedef void (*$fn1116)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn1122)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1128)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1134)(panda$collections$Iterator*);
typedef void (*$fn1136)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$SymbolTable*, panda$core$String*, panda$collections$Array*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1145)(org$pandalanguage$pandac$MethodRef*);
typedef panda$collections$Iterator* (*$fn1154)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1166)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1168)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1177)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1182)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1188)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn1195)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1197)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$core$Int64, panda$collections$ListView*);
typedef void (*$fn1204)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Bit (*$fn1206)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1213)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1215)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1217)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$Type* (*$fn1219)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1221)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1226)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1228)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1232)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn1234)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn1241)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1243)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1250)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1253)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Int64 (*$fn1256)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1281)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1284)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn1286)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1298)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef panda$core$Bit (*$fn1302)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1306)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1312)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1315)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1317)(org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1319)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1329)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1332)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1334)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1337)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1347)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1349)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1355)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1357)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1368)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1370)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1375)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1388)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1394)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1397)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1407)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1409)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1411)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1414)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1418)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1420)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1422)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1424)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1426)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1444)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1447)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1449)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1451)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1472)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1478)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1480)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1485)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1487)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1492)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1495)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1503)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1505)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1513)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1515)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1520)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1523)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1525)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1534)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1536)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1546)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1548)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1553)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1556)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1558)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1561)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1570)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1572)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1577)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1579)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1583)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1585)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1588)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1590)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1593)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1595)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1599)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1604)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1610)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1616)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1618)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1620)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64$nullable (*$fn1623)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1625)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1627)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1634)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1636)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1644)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1646)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1648)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1655)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1657)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1666)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1668)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1677)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1682)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1684)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1686)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1694)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1696)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1705)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1710)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1712)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1714)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1718)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1723)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1727)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1731)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1733)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1735)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1738)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1741)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1745)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1749)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1762)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1764)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1766)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1781)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1787)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1793)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1796)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1810)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1812)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1820)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1822)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1828)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1830)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1839)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1841)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1843)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1845)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1848)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1853)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1859)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1865)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1867)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1869)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64$nullable (*$fn1871)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1877)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1882)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef void (*$fn1896)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1898)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1901)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1904)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1907)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1910)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1913)(org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1920)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1932)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1934)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1937)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1939)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1941)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1943)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1947)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1960)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1979)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1986)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Int64 (*$fn1990)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1995)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn2018)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn2020)(org$pandalanguage$pandac$MethodRef*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn2022)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2037)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Int64$nullable (*$fn2039)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2044)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2046)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn2051)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn2057)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2059)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2070)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2076)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2082)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn2085)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2101)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$Type* (*$fn2105)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2107)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn2110)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn2115)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn2117)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2120)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn2131)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn2133)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn2140)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn2142)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2144)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2146)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn2148)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn2150)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2154)(org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn2159)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn2163)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2186)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn2188)(org$pandalanguage$pandac$MethodRef*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn2190)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2193)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2211)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$Type* (*$fn2215)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2217)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2219)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2222)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2226)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2228)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn2231)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn2233)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn2242)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn2255)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn2257)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2259)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2261)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2263)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2271)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef panda$core$Int64$nullable (*$fn2277)(org$pandalanguage$pandac$Compiler*, panda$collections$Array*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn2283)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2302)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2308)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2314)(panda$collections$Iterator*);
typedef void (*$fn2316)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2317)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn2320)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2325)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2326)(panda$core$MutableString*);
typedef void (*$fn2328)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2336)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn2350)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2356)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2362)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn2364)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2376)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2378)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2386)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2392)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn2393)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn2406)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2412)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2418)(panda$collections$Iterator*);
typedef void (*$fn2420)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2421)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2426)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2428)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn2430)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2432)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2434)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2437)(panda$core$MutableString*);
typedef void (*$fn2439)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn2447)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2451)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2457)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2463)(panda$collections$Iterator*);
typedef void (*$fn2466)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2467)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2471)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2473)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn2475)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2477)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2479)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2482)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn2485)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2487)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2489)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2491)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2493)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn2496)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2498)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2500)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2635)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2644)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2757)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2767)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2770)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2772)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2778)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2802)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2806)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2810)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2813)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2817)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2823)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2826)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2831)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn2833)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2835)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn2840)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2843)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2866)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2876)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2889)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2892)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2894)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2909)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn2910)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2913)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2915)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2930)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2933)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2937)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2947)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2949)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2951)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2953)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2957)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2965)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2967)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2969)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2973)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2984)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2987)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2990)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2996)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2998)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3001)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3004)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn3007)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3010)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3013)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn3021)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn3024)(org$pandalanguage$pandac$MethodRef*);
typedef panda$collections$Iterator* (*$fn3029)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3035)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3041)(panda$collections$Iterator*);
typedef void (*$fn3043)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn3046)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Bit (*$fn3057)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn3061)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn3098)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3115)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn3118)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn3121)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3124)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3154)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3157)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn3161)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3169)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn3172)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3174)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3177)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3179)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3181)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3184)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$ListView* (*$fn3186)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ImmutableArray* (*$fn3190)(panda$collections$ImmutableArray*, panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT);
typedef panda$collections$ListView* (*$fn3195)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3199)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$ListView* (*$fn3201)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3205)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3210)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3213)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3215)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3224)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3236)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn3239)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3246)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn3250)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3264)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef panda$core$Bit (*$fn3275)(org$pandalanguage$pandac$Type*);
typedef void (*$fn3286)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn3288)(org$pandalanguage$pandac$Type*);
typedef void (*$fn3299)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3303)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3311)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3313)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3315)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64);
typedef panda$core$Object* (*$fn3318)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3320)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3326)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3347)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3349)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3362)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn3365)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3367)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3374)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3379)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3391)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3396)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn3402)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3404)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3406)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3409)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3411)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn3422)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3423)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3425)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3428)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3430)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3432)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$Type* (*$fn3440)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3442)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3445)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3451)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3453)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3456)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3462)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3464)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3467)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3473)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3475)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3478)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3492)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3494)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3497)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn3500)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn3504)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn3510)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3516)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3522)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3534)(panda$collections$Iterator*);
typedef void (*$fn3547)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn3548)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn3553)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn3556)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$Type* (*$fn3558)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn3562)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3564)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3567)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn3569)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3574)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3576)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3579)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3581)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3583)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn3585)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3587)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3589)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3591)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef void (*$fn3602)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3608)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3615)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3618)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3621)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3628)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3635)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3638)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3649)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3652)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3655)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3658)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3661)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn3672)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3678)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3684)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3687)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3694)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3696)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3699)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3702)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3704)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3709)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3713)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3715)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3724)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3729)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3731)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3733)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3736)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3738)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3741)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3743)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3745)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn3748)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3751)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3759)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn3761)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3785)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3810)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3816)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3829)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3837)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn3850)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3852)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3854)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3856)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3864)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3867)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3869)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3871)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3873)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Set* (*$fn3877)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn3881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3887)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3893)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3898)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3901)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3905)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3907)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3909)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3911)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3916)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3919)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3923)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3929)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn3931)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3933)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3935)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3938)(panda$collections$Stack*);
typedef void (*$fn3939)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3941)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3943)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3946)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3948)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3950)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3952)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3954)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3958)(panda$collections$Stack*);
typedef void (*$fn3961)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3963)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3965)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3967)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3969)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3971)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3974)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3976)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3980)(panda$collections$Stack*);
typedef void (*$fn3983)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3985)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3987)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3989)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3993)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn4000)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4003)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn4005)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4007)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4009)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4011)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4014)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4015)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4020)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Int64 (*$fn4027)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4030)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4032)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4035)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn4037)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn4048)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4054)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4060)(panda$collections$Iterator*);
typedef void (*$fn4076)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn4077)(panda$collections$Stack*);
typedef void (*$fn4081)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4088)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4094)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4100)(panda$collections$Iterator*);
typedef void (*$fn4116)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn4117)(panda$collections$Stack*);
typedef void (*$fn4121)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn4124)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4127)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn4130)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn4133)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn4135)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4137)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4139)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4141)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn4148)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn4151)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn4154)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn4158)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4160)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4163)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4167)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Symbol* (*$fn4171)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn4173)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Int64 (*$fn4183)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4187)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4189)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4192)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn4202)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4214)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4217)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4234)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4237)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn4240)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn4242)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4244)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4247)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn4249)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4270)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn4272)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4274)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4280)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Int64 (*$fn4299)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4320)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4322)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4344)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4346)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4348)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn4373)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4394)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4399)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn4408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4414)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4420)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4423)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4479)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4482)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4484)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4487)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4490)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4492)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4494)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4497)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4500)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4503)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4506)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4509)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4512)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4515)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4518)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4521)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4536)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn4538)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn4540)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4542)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4543)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4550)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4556)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4562)(panda$collections$Iterator*);
typedef void (*$fn4566)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn4572)(panda$collections$Stack*);
typedef panda$collections$Iterator* (*$fn4576)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4582)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4588)(panda$collections$Iterator*);
typedef void (*$fn4590)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Bit (*$fn4592)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn4602)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn4604)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4612)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4621)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4622)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn4623)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4626)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4630)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4631)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4634)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4638)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4650)(panda$collections$Iterator*);
typedef void (*$fn4652)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4653)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn4654)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn4658)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4661)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4662)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4663)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn4665)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4669)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4673)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4679)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4685)(panda$collections$Iterator*);
typedef void (*$fn4687)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4690)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4691)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4692)(panda$collections$Stack*);
typedef void (*$fn4697)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4699)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn4701)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4704)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4706)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$ListView* (*$fn4708)(org$pandalanguage$pandac$Scanner*, panda$io$File*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn4713)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4719)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4725)(panda$collections$Iterator*);
typedef void (*$fn4727)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn4730)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn4731)(panda$collections$Stack*);
typedef panda$collections$ListView* (*$fn4733)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$collections$Iterator* (*$fn4738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4744)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4750)(panda$collections$Iterator*);
typedef void (*$fn4752)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4754)(panda$collections$Stack*);
typedef panda$core$Char8$nullable (*$fn4779)(panda$io$InputStream*);
typedef void (*$fn4801)(panda$core$Object*);
typedef panda$core$Object* (*$fn4804)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Position* (*$fn4807)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn4809)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef void (*$fn4820)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12, 1 };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13, 1 };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13, 1 };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13, 1 };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14, 1 };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x70\x65\x63\x69\x61\x6C\x69\x7A\x65\x64\x52\x61\x6E\x67\x65", 27, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, 1 };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1 };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, 1 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, 1 };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, 1 };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s3415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s3515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s4013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s4080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s4107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s4109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s4120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s4132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s4153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s4170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s4236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s4279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s4356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s4358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
    (($fn27) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp24));
    org$pandalanguage$pandac$Type* $tmp28 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp28->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp28->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp28, &$s30, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    (($fn31) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp28));
    org$pandalanguage$pandac$Type* $tmp32 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp32->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp32->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp32, &$s34, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    (($fn35) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp32));
    org$pandalanguage$pandac$Type* $tmp36 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp36->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp36->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp36, &$s38, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    (($fn39) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp36));
    org$pandalanguage$pandac$Type* $tmp40 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp40->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp40->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp40, &$s42, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    (($fn43) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp40));
    org$pandalanguage$pandac$Type* $tmp44 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp44->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp44->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp44, &$s46, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    (($fn47) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp44));
    org$pandalanguage$pandac$Type* $tmp48 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp48->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp48->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp48, &$s50, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    (($fn51) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp48));
    org$pandalanguage$pandac$Type* $tmp52 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp52->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp52->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp52, &$s54, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    (($fn55) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp52));
    org$pandalanguage$pandac$Type* $tmp56 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp56->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp56->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp56, &$s58, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    (($fn59) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp56));
    org$pandalanguage$pandac$Alias* $tmp60 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp60->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp60->refCount.value = 1;
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp60, &$s62, &$s63, ((panda$core$Int64) { -1 }));
    (($fn64) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp60));
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
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s109);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s110);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s111);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s112);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s113);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s114);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s115);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s116);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s117);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s118);
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT $tmp121;
    org$pandalanguage$pandac$Alias* $tmp119 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp119->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp119->refCount.value = 1;
    panda$core$String$Index$nullable $tmp123 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s122);
    panda$core$String$Index $tmp124 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp123.value));
    panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp121, ((panda$core$String$Index$nullable) { $tmp124, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp125 = panda$core$String$$IDX$panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp121);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp119, $tmp125, p_name, ((panda$core$Int64) { -1 }));
    (($fn126) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp119));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$String* alias130;
    org$pandalanguage$pandac$ClassDecl* result139;
    panda$core$String$Index$nullable idx145;
    panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT $tmp152;
    org$pandalanguage$pandac$Symbol* rootAlias175;
    panda$core$Int64 $tmp128 = (($fn127) self->currentClass->$class->vtable[7])(self->currentClass);
    panda$core$Bit $tmp129 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp128, ((panda$core$Int64) { 0 }));
    if ($tmp129.value) {
    {
        panda$core$Object* $tmp132 = (($fn131) self->currentClass->$class->vtable[4])(self->currentClass);
        ITable* $tmp133 = ((org$pandalanguage$pandac$ClassDecl*) $tmp132)->aliases->$class->itable;
        while ($tmp133->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp133 = $tmp133->next;
        }
        $fn135 $tmp134 = $tmp133->methods[1];
        panda$core$Object* $tmp136 = $tmp134(((org$pandalanguage$pandac$ClassDecl*) $tmp132)->aliases, ((panda$core$Object*) p_name));
        alias130 = ((panda$core$String*) $tmp136);
        if (((panda$core$Bit) { alias130 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp138 = (($fn137) self->$class->vtable[11])(self, alias130);
            return $tmp138;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp141 = (($fn140) self->$class->vtable[11])(self, p_name);
    result139 = $tmp141;
    panda$core$Int64 $tmp143 = (($fn142) self->currentClass->$class->vtable[7])(self->currentClass);
    panda$core$Bit $tmp144 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp143, ((panda$core$Int64) { 0 }));
    if ($tmp144.value) {
    {
        if (((panda$core$Bit) { result139 == NULL }).value) {
        {
            panda$core$Object* $tmp147 = (($fn146) self->currentClass->$class->vtable[4])(self->currentClass);
            panda$core$String$Index$nullable $tmp149 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp147))->name, &$s148);
            idx145 = $tmp149;
            if (((panda$core$Bit) { idx145.nonnull }).value) {
            {
                panda$core$Object* $tmp151 = (($fn150) self->currentClass->$class->vtable[4])(self->currentClass);
                panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp152, ((panda$core$String$Index$nullable) { .nonnull = false }), idx145, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
                panda$core$String* $tmp153 = panda$core$String$$IDX$panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp151))->name, $tmp152);
                panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp156 = (($fn155) self->$class->vtable[11])(self, $tmp154);
                result139 = $tmp156;
            }
            }
        }
        }
        if (((panda$core$Bit) { result139 == NULL }).value) {
        {
            panda$core$Object* $tmp158 = (($fn157) self->currentClass->$class->vtable[4])(self->currentClass);
            panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp158))->name, &$s159);
            panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp163 = (($fn162) self->$class->vtable[11])(self, $tmp161);
            result139 = $tmp163;
        }
        }
        bool $tmp164 = ((panda$core$Bit) { result139 == NULL }).value;
        if (!$tmp164) goto $l165;
        panda$core$Object* $tmp167 = (($fn166) self->currentClass->$class->vtable[4])(self->currentClass);
        $tmp164 = ((panda$core$Bit) { ((org$pandalanguage$pandac$ClassDecl*) $tmp167)->owner != NULL }).value;
        $l165:;
        panda$core$Bit $tmp168 = { $tmp164 };
        if ($tmp168.value) {
        {
            panda$core$Object* $tmp170 = (($fn169) self->currentClass->$class->vtable[4])(self->currentClass);
            (($fn171) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp170)->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp173 = (($fn172) self->$class->vtable[3])(self, p_name);
            result139 = $tmp173;
            (($fn174) self->currentClass->$class->vtable[3])(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result139 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp177 = (($fn176) self->root->$class->vtable[6])(self->root, p_name);
        rootAlias175 = $tmp177;
        bool $tmp178 = ((panda$core$Bit) { rootAlias175 != NULL }).value;
        if (!$tmp178) goto $l179;
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias175->kind, ((panda$core$Int64) { 200 }));
        $tmp178 = $tmp180.value;
        $l179:;
        panda$core$Bit $tmp181 = { $tmp178 };
        if ($tmp181.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp183 = (($fn182) self->$class->vtable[11])(self, ((org$pandalanguage$pandac$Alias*) rootAlias175)->fullName);
            result139 = $tmp183;
        }
        }
    }
    }
    return result139;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 $match$6275184;
    org$pandalanguage$pandac$ClassDecl* resolved186;
    org$pandalanguage$pandac$Symbol* s191;
    panda$core$Int64 $match$6588194;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp199;
    panda$collections$Array* subtypes203;
    panda$collections$Array* subtypes224;
    panda$collections$Array* subtypes237;
    panda$core$MutableString* name244;
    panda$core$String* separator250;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp252;
    org$pandalanguage$pandac$Type* resolved273;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    {
        $match$6275184 = p_type->typeKind;
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6275184, ((panda$core$Int64) { 10 }));
        if ($tmp185.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp188 = (($fn187) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved186 = $tmp188;
            if (((panda$core$Bit) { resolved186 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp190 = (($fn189) resolved186->$class->vtable[3])(resolved186);
                return $tmp190;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp193 = (($fn192) self->symbolTable->$class->vtable[6])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s191 = $tmp193;
            if (((panda$core$Bit) { s191 != NULL }).value) {
            {
                {
                    $match$6588194 = s191->kind;
                    panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588194, ((panda$core$Int64) { 200 }));
                    if ($tmp195.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp196 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp196->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp196->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp196, ((org$pandalanguage$pandac$Alias*) s191)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$core$Bit) { true }));
                        return $tmp196;
                    }
                    }
                    else {
                    panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588194, ((panda$core$Int64) { 203 }));
                    if ($tmp198.value) {
                    {
                        gp199 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s191);
                        org$pandalanguage$pandac$ClassDecl* $tmp201 = (($fn200) self->$class->vtable[12])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, gp199->owner);
                        (($fn202) self->$class->vtable[5])(self, $tmp201);
                        panda$collections$Array* $tmp204 = (panda$collections$Array*) malloc(40);
                        $tmp204->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp204->refCount.value = 1;
                        panda$collections$Array$init($tmp204);
                        subtypes203 = $tmp204;
                        panda$collections$Array$add$panda$collections$Array$T(subtypes203, ((panda$core$Object*) gp199->bound));
                        org$pandalanguage$pandac$Type* $tmp206 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp206->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp206->refCount.value = 1;
                        panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(gp199->owner, &$s208);
                        panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, ((org$pandalanguage$pandac$Symbol*) gp199)->name);
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp206, $tmp210, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes203), ((panda$core$Bit) { true }));
                        return $tmp206;
                    }
                    }
                    else {
                    panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588194, ((panda$core$Int64) { 207 }));
                    if ($tmp211.value) {
                    {
                        return ((org$pandalanguage$pandac$Type*) s191);
                    }
                    }
                    else {
                    panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6588194, ((panda$core$Int64) { 201 }));
                    if ($tmp212.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp214 = (($fn213) ((org$pandalanguage$pandac$ClassDecl*) s191)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) s191));
                        return $tmp214;
                    }
                    }
                    }
                    }
                    }
                }
            }
            }
            org$pandalanguage$pandac$Position* $tmp216 = (($fn215) self->$class->vtable[95])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset);
            panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s217, ((panda$core$Object*) p_type));
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s219);
            (($fn221) self->$class->vtable[97])(self, $tmp216, $tmp220);
            org$pandalanguage$pandac$Type* $tmp222 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp222;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6275184, ((panda$core$Int64) { 11 }));
        if ($tmp223.value) {
        {
            panda$collections$Array* $tmp225 = (panda$collections$Array*) malloc(40);
            $tmp225->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp225->refCount.value = 1;
            panda$collections$Array$init($tmp225);
            subtypes224 = $tmp225;
            panda$core$Object* $tmp228 = (($fn227) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp230 = (($fn229) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp228));
            panda$collections$Array$add$panda$collections$Array$T(subtypes224, ((panda$core$Object*) $tmp230));
            org$pandalanguage$pandac$Type* $tmp231 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp231->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp231->refCount.value = 1;
            panda$core$Object* $tmp233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes224, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp233))->name, &$s234);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp231, $tmp235, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes224), ((panda$core$Bit) { true }));
            return $tmp231;
        }
        }
        else {
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6275184, ((panda$core$Int64) { 21 }));
        if ($tmp236.value) {
        {
            panda$collections$Array* $tmp238 = (panda$collections$Array*) malloc(40);
            $tmp238->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp238->refCount.value = 1;
            panda$collections$Array$init($tmp238);
            subtypes237 = $tmp238;
            panda$core$Object* $tmp241 = (($fn240) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp243 = (($fn242) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp241));
            panda$collections$Array$add$panda$collections$Array$T(subtypes237, ((panda$core$Object*) $tmp243));
            panda$core$MutableString* $tmp245 = (panda$core$MutableString*) malloc(40);
            $tmp245->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp245->refCount.value = 1;
            panda$core$Object* $tmp247 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes237, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp245, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp247))->name);
            name244 = $tmp245;
            (($fn249) name244->$class->vtable[3])(name244, &$s248);
            separator250 = &$s251;
            panda$core$Int64 $tmp254 = (($fn253) p_type->subtypes->$class->vtable[3])(p_type->subtypes);
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp252, ((panda$core$Int64) { 1 }), $tmp254, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp256 = $tmp252.start.value;
            panda$core$Int64 i255 = { $tmp256 };
            int64_t $tmp258 = $tmp252.end.value;
            int64_t $tmp259 = $tmp252.step.value;
            bool $tmp260 = $tmp252.inclusive.value;
            bool $tmp267 = $tmp259 > 0;
            if ($tmp267) goto $l265; else goto $l266;
            $l265:;
            if ($tmp260) goto $l268; else goto $l269;
            $l268:;
            if ($tmp256 <= $tmp258) goto $l261; else goto $l263;
            $l269:;
            if ($tmp256 < $tmp258) goto $l261; else goto $l263;
            $l266:;
            if ($tmp260) goto $l270; else goto $l271;
            $l270:;
            if ($tmp256 >= $tmp258) goto $l261; else goto $l263;
            $l271:;
            if ($tmp256 > $tmp258) goto $l261; else goto $l263;
            $l261:;
            {
                panda$core$Object* $tmp275 = (($fn274) p_type->subtypes->$class->vtable[2])(p_type->subtypes, i255);
                org$pandalanguage$pandac$Type* $tmp277 = (($fn276) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp275));
                resolved273 = $tmp277;
                panda$collections$Array$add$panda$collections$Array$T(subtypes237, ((panda$core$Object*) resolved273));
                (($fn278) name244->$class->vtable[3])(name244, separator250);
                (($fn279) name244->$class->vtable[3])(name244, ((org$pandalanguage$pandac$Symbol*) resolved273)->name);
                separator250 = &$s280;
            }
            $l264:;
            if ($tmp267) goto $l282; else goto $l283;
            $l282:;
            int64_t $tmp284 = $tmp258 - i255.value;
            if ($tmp260) goto $l285; else goto $l286;
            $l285:;
            if ($tmp284 >= $tmp259) goto $l281; else goto $l263;
            $l286:;
            if ($tmp284 > $tmp259) goto $l281; else goto $l263;
            $l283:;
            int64_t $tmp288 = i255.value - $tmp258;
            if ($tmp260) goto $l289; else goto $l290;
            $l289:;
            if ($tmp288 >= -$tmp259) goto $l281; else goto $l263;
            $l290:;
            if ($tmp288 > -$tmp259) goto $l281; else goto $l263;
            $l281:;
            i255.value += $tmp259;
            goto $l261;
            $l263:;
            (($fn293) name244->$class->vtable[3])(name244, &$s292);
            org$pandalanguage$pandac$Type* $tmp294 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp294->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp294->refCount.value = 1;
            panda$core$String* $tmp297 = (($fn296) name244->$class->vtable[0])(name244);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp294, $tmp297, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes237), ((panda$core$Bit) { true }));
            return $tmp294;
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
    org$pandalanguage$pandac$SymbolTable* old300;
    panda$collections$Iterator* m$Iter313;
    org$pandalanguage$pandac$MethodDecl* m325;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp336;
    panda$collections$Iterator* p$Iter370;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p382;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    (($fn298) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
    (($fn299) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
    old300 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp302 = (($fn301) self->$class->vtable[4])(self, p_cl->rawSuper);
        p_cl->rawSuper = $tmp302;
        panda$core$Bit $tmp305 = (($fn304) p_cl->annotations->$class->vtable[9])(p_cl->annotations);
        panda$core$Bit $tmp306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp305);
        bool $tmp303 = $tmp306.value;
        if (!$tmp303) goto $l307;
        panda$core$Bit $tmp309 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s308);
        $tmp303 = $tmp309.value;
        $l307:;
        panda$core$Bit $tmp310 = { $tmp303 };
        if ($tmp310.value) {
        {
            panda$core$Int64 $tmp311 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp312 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp311);
            p_cl->annotations->flags = $tmp312;
            {
                ITable* $tmp314 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp314 = $tmp314->next;
                }
                $fn316 $tmp315 = $tmp314->methods[0];
                panda$collections$Iterator* $tmp317 = $tmp315(((panda$collections$Iterable*) p_cl->methods));
                m$Iter313 = $tmp317;
                $l318:;
                ITable* $tmp320 = m$Iter313->$class->itable;
                while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp320 = $tmp320->next;
                }
                $fn322 $tmp321 = $tmp320->methods[0];
                panda$core$Bit $tmp323 = $tmp321(m$Iter313);
                panda$core$Bit $tmp324 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp323);
                if (!$tmp324.value) goto $l319;
                {
                    ITable* $tmp326 = m$Iter313->$class->itable;
                    while ($tmp326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp326 = $tmp326->next;
                    }
                    $fn328 $tmp327 = $tmp326->methods[1];
                    panda$core$Object* $tmp329 = $tmp327(m$Iter313);
                    m325 = ((org$pandalanguage$pandac$MethodDecl*) $tmp329);
                    panda$core$Int64 $tmp330 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp331 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m325->annotations->flags, $tmp330);
                    m325->annotations->flags = $tmp331;
                    panda$core$Bit $tmp333 = (($fn332) self->scanner->$class->vtable[7])(self->scanner, m325->annotations, m325->body);
                    if ($tmp333.value) {
                    {
                        panda$core$Int64 $tmp334 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                        panda$core$Int64 $tmp335 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m325->annotations->flags, $tmp334);
                        m325->annotations->flags = $tmp335;
                    }
                    }
                }
                goto $l318;
                $l319:;
            }
        }
        }
    }
    }
    panda$core$Int64 $tmp337 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp336, ((panda$core$Int64) { 0 }), $tmp337, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp339 = $tmp336.start.value;
    panda$core$Int64 i338 = { $tmp339 };
    int64_t $tmp341 = $tmp336.end.value;
    int64_t $tmp342 = $tmp336.step.value;
    bool $tmp343 = $tmp336.inclusive.value;
    bool $tmp350 = $tmp342 > 0;
    if ($tmp350) goto $l348; else goto $l349;
    $l348:;
    if ($tmp343) goto $l351; else goto $l352;
    $l351:;
    if ($tmp339 <= $tmp341) goto $l344; else goto $l346;
    $l352:;
    if ($tmp339 < $tmp341) goto $l344; else goto $l346;
    $l349:;
    if ($tmp343) goto $l353; else goto $l354;
    $l353:;
    if ($tmp339 >= $tmp341) goto $l344; else goto $l346;
    $l354:;
    if ($tmp339 > $tmp341) goto $l344; else goto $l346;
    $l344:;
    {
        panda$core$Object* $tmp356 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->rawInterfaces, i338);
        org$pandalanguage$pandac$Type* $tmp358 = (($fn357) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp356));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->rawInterfaces, i338, ((panda$core$Object*) $tmp358));
    }
    $l347:;
    if ($tmp350) goto $l360; else goto $l361;
    $l360:;
    int64_t $tmp362 = $tmp341 - i338.value;
    if ($tmp343) goto $l363; else goto $l364;
    $l363:;
    if ($tmp362 >= $tmp342) goto $l359; else goto $l346;
    $l364:;
    if ($tmp362 > $tmp342) goto $l359; else goto $l346;
    $l361:;
    int64_t $tmp366 = i338.value - $tmp341;
    if ($tmp343) goto $l367; else goto $l368;
    $l367:;
    if ($tmp366 >= -$tmp342) goto $l359; else goto $l346;
    $l368:;
    if ($tmp366 > -$tmp342) goto $l359; else goto $l346;
    $l359:;
    i338.value += $tmp342;
    goto $l344;
    $l346:;
    {
        ITable* $tmp371 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp371->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp371 = $tmp371->next;
        }
        $fn373 $tmp372 = $tmp371->methods[0];
        panda$collections$Iterator* $tmp374 = $tmp372(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter370 = $tmp374;
        $l375:;
        ITable* $tmp377 = p$Iter370->$class->itable;
        while ($tmp377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp377 = $tmp377->next;
        }
        $fn379 $tmp378 = $tmp377->methods[0];
        panda$core$Bit $tmp380 = $tmp378(p$Iter370);
        panda$core$Bit $tmp381 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp380);
        if (!$tmp381.value) goto $l376;
        {
            ITable* $tmp383 = p$Iter370->$class->itable;
            while ($tmp383->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp383 = $tmp383->next;
            }
            $fn385 $tmp384 = $tmp383->methods[1];
            panda$core$Object* $tmp386 = $tmp384(p$Iter370);
            p382 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp386);
            org$pandalanguage$pandac$Type* $tmp388 = (($fn387) self->$class->vtable[4])(self, p382->bound);
            p382->bound = $tmp388;
        }
        goto $l375;
        $l376:;
    }
    self->symbolTable = old300;
    (($fn389) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn390) self->currentFile->$class->vtable[3])(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old394;
    panda$collections$Iterator* p$Iter395;
    org$pandalanguage$pandac$MethodDecl$Parameter* p407;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    (($fn391) self->$class->vtable[5])(self, p_m->owner);
    (($fn392) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    (($fn393) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_m->owner));
    old394 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp396 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp396 = $tmp396->next;
        }
        $fn398 $tmp397 = $tmp396->methods[0];
        panda$collections$Iterator* $tmp399 = $tmp397(((panda$collections$Iterable*) p_m->parameters));
        p$Iter395 = $tmp399;
        $l400:;
        ITable* $tmp402 = p$Iter395->$class->itable;
        while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp402 = $tmp402->next;
        }
        $fn404 $tmp403 = $tmp402->methods[0];
        panda$core$Bit $tmp405 = $tmp403(p$Iter395);
        panda$core$Bit $tmp406 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp405);
        if (!$tmp406.value) goto $l401;
        {
            ITable* $tmp408 = p$Iter395->$class->itable;
            while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp408 = $tmp408->next;
            }
            $fn410 $tmp409 = $tmp408->methods[1];
            panda$core$Object* $tmp411 = $tmp409(p$Iter395);
            p407 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp411);
            org$pandalanguage$pandac$Type* $tmp413 = (($fn412) self->$class->vtable[4])(self, p407->type);
            p407->type = $tmp413;
        }
        goto $l400;
        $l401:;
    }
    org$pandalanguage$pandac$Type* $tmp415 = (($fn414) self->$class->vtable[4])(self, p_m->returnType);
    p_m->returnType = $tmp415;
    p_m->resolved = ((panda$core$Bit) { true });
    self->symbolTable = old394;
    (($fn416) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn417) self->currentFile->$class->vtable[3])(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old420;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    (($fn418) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    (($fn419) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_f->owner));
    old420 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp421 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp423 = (($fn422) p_f->type->$class->vtable[5])(p_f->type, ((panda$core$Object*) $tmp421));
    if ($tmp423.value) {
    {
        org$pandalanguage$pandac$Type* $tmp425 = (($fn424) self->$class->vtable[4])(self, p_f->type);
        p_f->type = $tmp425;
        if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp427 = (($fn426) self->$class->vtable[69])(self, p_f->rawValue);
            org$pandalanguage$pandac$IRNode* $tmp429 = (($fn428) self->$class->vtable[33])(self, $tmp427, p_f->type);
            p_f->value = $tmp429;
        }
        }
        (($fn430) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn431) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old420;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        (($fn433) self->$class->vtable[96])(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s432);
        (($fn434) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn435) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old420;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp437 = (($fn436) self->$class->vtable[69])(self, p_f->rawValue);
    p_f->value = $tmp437;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        (($fn438) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn439) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old420;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp441 = (($fn440) self->$class->vtable[27])(self, p_f->value);
    p_f->type = $tmp441;
    org$pandalanguage$pandac$IRNode* $tmp443 = (($fn442) self->$class->vtable[33])(self, p_f->value, p_f->type);
    p_f->value = $tmp443;
    (($fn444) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn445) self->currentFile->$class->vtable[3])(self->currentFile);
    self->symbolTable = old420;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$11704446;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$11704446 = p_expr->kind;
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11704446, ((panda$core$Int64) { 1037 }));
        if ($tmp447.value) {
        {
            (($fn449) self->$class->vtable[96])(self, p_expr->offset, &$s448);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11704446, ((panda$core$Int64) { 1039 }));
        if ($tmp450.value) {
        {
            (($fn452) self->$class->vtable[96])(self, p_expr->offset, &$s451);
            panda$core$Object* $tmp453 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp453)->payload)));
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11704446, ((panda$core$Int64) { 1024 }));
        if ($tmp454.value) {
        {
            (($fn456) self->$class->vtable[96])(self, p_expr->offset, &$s455);
            return NULL;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp458 = (($fn457) self->$class->vtable[27])(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp460 = (($fn459) self->$class->vtable[33])(self, p_expr, $tmp458);
            return $tmp460;
        }
        }
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn461) self->$class->vtable[5])(self, p_cl);
    bool $tmp462 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp462) goto $l463;
    org$pandalanguage$pandac$Type* $tmp464 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp466 = (($fn465) self->$class->vtable[28])(self, p_cl->rawSuper, $tmp464);
    $tmp462 = ((panda$core$Bit) { $tmp466.nonnull }).value;
    $l463:;
    panda$core$Bit $tmp467 = { $tmp462 };
    return $tmp467;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result469;
    org$pandalanguage$pandac$ClassDecl* s478;
    panda$collections$Iterator* f$Iter483;
    org$pandalanguage$pandac$FieldDecl* f495;
    (($fn468) self->$class->vtable[5])(self, p_cl);
    panda$collections$Array* $tmp470 = (panda$collections$Array*) malloc(40);
    $tmp470->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp470->refCount.value = 1;
    panda$collections$Array$init($tmp470);
    result469 = $tmp470;
    panda$core$Bit $tmp474 = (($fn473) self->$class->vtable[9])(self, p_cl);
    panda$core$Bit $tmp475 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp474);
    bool $tmp472 = $tmp475.value;
    if (!$tmp472) goto $l476;
    $tmp472 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l476:;
    panda$core$Bit $tmp477 = { $tmp472 };
    if ($tmp477.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp480 = (($fn479) self->$class->vtable[14])(self, p_cl->rawSuper);
        s478 = $tmp480;
        if (((panda$core$Bit) { s478 != NULL }).value) {
        {
            panda$collections$ListView* $tmp482 = (($fn481) self->$class->vtable[10])(self, s478);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result469, ((panda$collections$CollectionView*) $tmp482));
        }
        }
    }
    }
    {
        ITable* $tmp484 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp484->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp484 = $tmp484->next;
        }
        $fn486 $tmp485 = $tmp484->methods[0];
        panda$collections$Iterator* $tmp487 = $tmp485(((panda$collections$Iterable*) p_cl->fields));
        f$Iter483 = $tmp487;
        $l488:;
        ITable* $tmp490 = f$Iter483->$class->itable;
        while ($tmp490->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp490 = $tmp490->next;
        }
        $fn492 $tmp491 = $tmp490->methods[0];
        panda$core$Bit $tmp493 = $tmp491(f$Iter483);
        panda$core$Bit $tmp494 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp493);
        if (!$tmp494.value) goto $l489;
        {
            ITable* $tmp496 = f$Iter483->$class->itable;
            while ($tmp496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp496 = $tmp496->next;
            }
            $fn498 $tmp497 = $tmp496->methods[1];
            panda$core$Object* $tmp499 = $tmp497(f$Iter483);
            f495 = ((org$pandalanguage$pandac$FieldDecl*) $tmp499);
            panda$core$Bit $tmp501 = (($fn500) f495->annotations->$class->vtable[5])(f495->annotations);
            panda$core$Bit $tmp502 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp501);
            if ($tmp502.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result469, ((panda$core$Object*) f495));
            }
            }
        }
        goto $l488;
        $l489:;
    }
    return ((panda$collections$ListView*) result469);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result503;
    panda$core$String* suffix506;
    panda$core$Bit found512;
    panda$collections$Iterator* dir$Iter513;
    panda$io$File* dir525;
    panda$io$File* f530;
    panda$core$Bit $tmp532;
    panda$core$Object* $tmp505 = (($fn504) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
    result503 = ((org$pandalanguage$pandac$ClassDecl*) $tmp505);
    if (((panda$core$Bit) { result503 == NULL }).value) {
    {
        panda$core$String* $tmp509 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s507, &$s508);
        panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s510);
        suffix506 = $tmp511;
        found512 = ((panda$core$Bit) { false });
        {
            ITable* $tmp514 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp514->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp514 = $tmp514->next;
            }
            $fn516 $tmp515 = $tmp514->methods[0];
            panda$collections$Iterator* $tmp517 = $tmp515(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter513 = $tmp517;
            $l518:;
            ITable* $tmp520 = dir$Iter513->$class->itable;
            while ($tmp520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp520 = $tmp520->next;
            }
            $fn522 $tmp521 = $tmp520->methods[0];
            panda$core$Bit $tmp523 = $tmp521(dir$Iter513);
            panda$core$Bit $tmp524 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp523);
            if (!$tmp524.value) goto $l519;
            {
                ITable* $tmp526 = dir$Iter513->$class->itable;
                while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp526 = $tmp526->next;
                }
                $fn528 $tmp527 = $tmp526->methods[1];
                panda$core$Object* $tmp529 = $tmp527(dir$Iter513);
                dir525 = ((panda$io$File*) $tmp529);
                panda$io$File* $tmp531 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir525, suffix506);
                f530 = $tmp531;
                panda$io$File$exists$R$panda$core$Bit(&$tmp532, f530);
                if ($tmp532.value) {
                {
                    found512 = ((panda$core$Bit) { true });
                    (($fn533) self->$class->vtable[93])(self, f530);
                    panda$core$Object* $tmp535 = (($fn534) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
                    result503 = ((org$pandalanguage$pandac$ClassDecl*) $tmp535);
                }
                }
            }
            goto $l518;
            $l519:;
        }
    }
    }
    return result503;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result536;
    panda$core$String* suffix539;
    panda$core$Bit found545;
    panda$collections$Iterator* dir$Iter546;
    panda$io$File* dir558;
    panda$io$File* f563;
    panda$core$Bit $tmp565;
    panda$core$Int64 oldErrorCount566;
    panda$core$Object* $tmp538 = (($fn537) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
    result536 = ((org$pandalanguage$pandac$ClassDecl*) $tmp538);
    if (((panda$core$Bit) { result536 == NULL }).value) {
    {
        panda$core$String* $tmp542 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s540, &$s541);
        panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s543);
        suffix539 = $tmp544;
        found545 = ((panda$core$Bit) { false });
        {
            ITable* $tmp547 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp547 = $tmp547->next;
            }
            $fn549 $tmp548 = $tmp547->methods[0];
            panda$collections$Iterator* $tmp550 = $tmp548(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter546 = $tmp550;
            $l551:;
            ITable* $tmp553 = dir$Iter546->$class->itable;
            while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp553 = $tmp553->next;
            }
            $fn555 $tmp554 = $tmp553->methods[0];
            panda$core$Bit $tmp556 = $tmp554(dir$Iter546);
            panda$core$Bit $tmp557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp556);
            if (!$tmp557.value) goto $l552;
            {
                ITable* $tmp559 = dir$Iter546->$class->itable;
                while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp559 = $tmp559->next;
                }
                $fn561 $tmp560 = $tmp559->methods[1];
                panda$core$Object* $tmp562 = $tmp560(dir$Iter546);
                dir558 = ((panda$io$File*) $tmp562);
                panda$io$File* $tmp564 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir558, suffix539);
                f563 = $tmp564;
                panda$io$File$exists$R$panda$core$Bit(&$tmp565, f563);
                if ($tmp565.value) {
                {
                    found545 = ((panda$core$Bit) { true });
                    oldErrorCount566 = self->errorCount;
                    (($fn567) self->$class->vtable[93])(self, f563);
                    panda$core$Object* $tmp569 = (($fn568) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
                    result536 = ((org$pandalanguage$pandac$ClassDecl*) $tmp569);
                    bool $tmp570 = ((panda$core$Bit) { result536 == NULL }).value;
                    if (!$tmp570) goto $l571;
                    panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount566);
                    $tmp570 = $tmp572.value;
                    $l571:;
                    panda$core$Bit $tmp573 = { $tmp570 };
                    if ($tmp573.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp574 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp574->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp574->refCount.value = 1;
                        panda$core$String* $tmp576 = panda$io$File$name$R$panda$core$String(f563);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp574, $tmp576, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s577, ((panda$core$Object*) f563));
                        panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
                        panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, p_fullName);
                        panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s582);
                        (($fn584) self->$class->vtable[97])(self, $tmp574, $tmp583);
                    }
                    }
                }
                }
            }
            goto $l551;
            $l552:;
        }
        panda$core$Bit $tmp585 = panda$core$Bit$$NOT$R$panda$core$Bit(found545);
        if ($tmp585.value) {
        {
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s586, suffix539);
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp589, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s591);
            (($fn593) self->$class->vtable[96])(self, p_offset, $tmp592);
        }
        }
    }
    }
    return result536;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type594;
    org$pandalanguage$pandac$ClassDecl* result603;
    org$pandalanguage$pandac$Annotations* annotations607;
    org$pandalanguage$pandac$Type* supertype613;
    panda$collections$Array* interfaces616;
    panda$collections$Iterator* intf$Iter619;
    org$pandalanguage$pandac$Type* intf631;
    panda$collections$HashMap* aliases638;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp641;
    panda$collections$Iterator* m$Iter688;
    org$pandalanguage$pandac$MethodDecl* m700;
    panda$collections$Array* parameters706;
    panda$collections$Iterator* p$Iter709;
    org$pandalanguage$pandac$MethodDecl$Parameter* p721;
    org$pandalanguage$pandac$MethodDecl* clone730;
    panda$collections$Iterator* f$Iter734;
    org$pandalanguage$pandac$FieldDecl* f746;
    org$pandalanguage$pandac$FieldDecl* clone752;
    org$pandalanguage$pandac$Type* $tmp596 = (($fn595) self->$class->vtable[4])(self, p_rawType);
    type594 = $tmp596;
    panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type594->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp597.value) {
    {
        panda$core$Object* $tmp599 = (($fn598) type594->subtypes->$class->vtable[2])(type594->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp601 = (($fn600) self->$class->vtable[13])(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp599));
        return $tmp601;
    }
    }
    panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type594->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp602.value) {
    {
        return p_cl;
    }
    }
    panda$core$Object* $tmp605 = (($fn604) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type594)->name)));
    result603 = ((org$pandalanguage$pandac$ClassDecl*) $tmp605);
    if (((panda$core$Bit) { result603 == NULL }).value) {
    {
        (($fn606) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp608 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp608->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp608->refCount.value = 1;
        panda$core$Int64 $tmp610 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp611 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp610);
        panda$core$Int64 $tmp612 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp611);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp608, $tmp612);
        annotations607 = $tmp608;
        org$pandalanguage$pandac$Type* $tmp615 = (($fn614) self->$class->vtable[25])(self, type594, p_cl->rawSuper);
        supertype613 = $tmp615;
        panda$collections$Array* $tmp617 = (panda$collections$Array*) malloc(40);
        $tmp617->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp617->refCount.value = 1;
        panda$collections$Array$init($tmp617);
        interfaces616 = $tmp617;
        {
            ITable* $tmp620 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp620 = $tmp620->next;
            }
            $fn622 $tmp621 = $tmp620->methods[0];
            panda$collections$Iterator* $tmp623 = $tmp621(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter619 = $tmp623;
            $l624:;
            ITable* $tmp626 = intf$Iter619->$class->itable;
            while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp626 = $tmp626->next;
            }
            $fn628 $tmp627 = $tmp626->methods[0];
            panda$core$Bit $tmp629 = $tmp627(intf$Iter619);
            panda$core$Bit $tmp630 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp629);
            if (!$tmp630.value) goto $l625;
            {
                ITable* $tmp632 = intf$Iter619->$class->itable;
                while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp632 = $tmp632->next;
                }
                $fn634 $tmp633 = $tmp632->methods[1];
                panda$core$Object* $tmp635 = $tmp633(intf$Iter619);
                intf631 = ((org$pandalanguage$pandac$Type*) $tmp635);
                org$pandalanguage$pandac$Type* $tmp637 = (($fn636) self->$class->vtable[25])(self, type594, intf631);
                panda$collections$Array$add$panda$collections$Array$T(interfaces616, ((panda$core$Object*) $tmp637));
            }
            goto $l624;
            $l625:;
        }
        panda$collections$HashMap* $tmp639 = (panda$collections$HashMap*) malloc(56);
        $tmp639->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp639->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp639, p_cl->aliases);
        aliases638 = $tmp639;
        ITable* $tmp642 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp642->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp642 = $tmp642->next;
        }
        $fn644 $tmp643 = $tmp642->methods[0];
        panda$core$Int64 $tmp645 = $tmp643(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp641, ((panda$core$Int64) { 0 }), $tmp645, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp647 = $tmp641.start.value;
        panda$core$Int64 i646 = { $tmp647 };
        int64_t $tmp649 = $tmp641.end.value;
        int64_t $tmp650 = $tmp641.step.value;
        bool $tmp651 = $tmp641.inclusive.value;
        bool $tmp658 = $tmp650 > 0;
        if ($tmp658) goto $l656; else goto $l657;
        $l656:;
        if ($tmp651) goto $l659; else goto $l660;
        $l659:;
        if ($tmp647 <= $tmp649) goto $l652; else goto $l654;
        $l660:;
        if ($tmp647 < $tmp649) goto $l652; else goto $l654;
        $l657:;
        if ($tmp651) goto $l661; else goto $l662;
        $l661:;
        if ($tmp647 >= $tmp649) goto $l652; else goto $l654;
        $l662:;
        if ($tmp647 > $tmp649) goto $l652; else goto $l654;
        $l652:;
        {
            ITable* $tmp664 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp664->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp664 = $tmp664->next;
            }
            $fn666 $tmp665 = $tmp664->methods[0];
            panda$core$Object* $tmp667 = $tmp665(((panda$collections$ListView*) p_cl->parameters), i646);
            panda$core$Int64 $tmp668 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i646, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp670 = (($fn669) type594->subtypes->$class->vtable[2])(type594->subtypes, $tmp668);
            (($fn671) aliases638->$class->vtable[5])(aliases638, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp667))->name)), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp670))->name));
        }
        $l655:;
        if ($tmp658) goto $l673; else goto $l674;
        $l673:;
        int64_t $tmp675 = $tmp649 - i646.value;
        if ($tmp651) goto $l676; else goto $l677;
        $l676:;
        if ($tmp675 >= $tmp650) goto $l672; else goto $l654;
        $l677:;
        if ($tmp675 > $tmp650) goto $l672; else goto $l654;
        $l674:;
        int64_t $tmp679 = i646.value - $tmp649;
        if ($tmp651) goto $l680; else goto $l681;
        $l680:;
        if ($tmp679 >= -$tmp650) goto $l672; else goto $l654;
        $l681:;
        if ($tmp679 > -$tmp650) goto $l672; else goto $l654;
        $l672:;
        i646.value += $tmp650;
        goto $l652;
        $l654:;
        org$pandalanguage$pandac$ClassDecl* $tmp683 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
        $tmp683->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp683->refCount.value = 1;
        panda$collections$Array* $tmp685 = (panda$collections$Array*) malloc(40);
        $tmp685->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp685->refCount.value = 1;
        panda$collections$Array$init($tmp685);
        panda$core$Object* $tmp687 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp683, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, ((panda$collections$MapView*) aliases638), p_cl->doccomment, annotations607, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type594)->name, supertype613, interfaces616, $tmp685, ((org$pandalanguage$pandac$SymbolTable*) $tmp687));
        result603 = $tmp683;
        result603->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp689 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp689->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp689 = $tmp689->next;
            }
            $fn691 $tmp690 = $tmp689->methods[0];
            panda$collections$Iterator* $tmp692 = $tmp690(((panda$collections$Iterable*) p_cl->methods));
            m$Iter688 = $tmp692;
            $l693:;
            ITable* $tmp695 = m$Iter688->$class->itable;
            while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp695 = $tmp695->next;
            }
            $fn697 $tmp696 = $tmp695->methods[0];
            panda$core$Bit $tmp698 = $tmp696(m$Iter688);
            panda$core$Bit $tmp699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp698);
            if (!$tmp699.value) goto $l694;
            {
                ITable* $tmp701 = m$Iter688->$class->itable;
                while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp701 = $tmp701->next;
                }
                $fn703 $tmp702 = $tmp701->methods[1];
                panda$core$Object* $tmp704 = $tmp702(m$Iter688);
                m700 = ((org$pandalanguage$pandac$MethodDecl*) $tmp704);
                (($fn705) self->$class->vtable[6])(self, m700);
                panda$collections$Array* $tmp707 = (panda$collections$Array*) malloc(40);
                $tmp707->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp707->refCount.value = 1;
                panda$collections$Array$init($tmp707);
                parameters706 = $tmp707;
                {
                    ITable* $tmp710 = ((panda$collections$Iterable*) m700->parameters)->$class->itable;
                    while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp710 = $tmp710->next;
                    }
                    $fn712 $tmp711 = $tmp710->methods[0];
                    panda$collections$Iterator* $tmp713 = $tmp711(((panda$collections$Iterable*) m700->parameters));
                    p$Iter709 = $tmp713;
                    $l714:;
                    ITable* $tmp716 = p$Iter709->$class->itable;
                    while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp716 = $tmp716->next;
                    }
                    $fn718 $tmp717 = $tmp716->methods[0];
                    panda$core$Bit $tmp719 = $tmp717(p$Iter709);
                    panda$core$Bit $tmp720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp719);
                    if (!$tmp720.value) goto $l715;
                    {
                        ITable* $tmp722 = p$Iter709->$class->itable;
                        while ($tmp722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp722 = $tmp722->next;
                        }
                        $fn724 $tmp723 = $tmp722->methods[1];
                        panda$core$Object* $tmp725 = $tmp723(p$Iter709);
                        p721 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp725);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp726 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp726->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp726->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp729 = (($fn728) self->$class->vtable[25])(self, type594, p721->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp726, p721->name, $tmp729);
                        panda$collections$Array$add$panda$collections$Array$T(parameters706, ((panda$core$Object*) $tmp726));
                    }
                    goto $l714;
                    $l715:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp731 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
                $tmp731->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp731->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp731, result603, ((org$pandalanguage$pandac$Symbol*) m700)->offset, m700->doccomment, m700->annotations, m700->methodKind, ((org$pandalanguage$pandac$Symbol*) m700)->name, parameters706, m700->returnType, m700->body);
                clone730 = $tmp731;
                panda$collections$Array$add$panda$collections$Array$T(result603->methods, ((panda$core$Object*) clone730));
                (($fn733) result603->symbolTable->$class->vtable[2])(result603->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone730));
            }
            goto $l693;
            $l694:;
        }
        {
            ITable* $tmp735 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp735 = $tmp735->next;
            }
            $fn737 $tmp736 = $tmp735->methods[0];
            panda$collections$Iterator* $tmp738 = $tmp736(((panda$collections$Iterable*) p_cl->fields));
            f$Iter734 = $tmp738;
            $l739:;
            ITable* $tmp741 = f$Iter734->$class->itable;
            while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp741 = $tmp741->next;
            }
            $fn743 $tmp742 = $tmp741->methods[0];
            panda$core$Bit $tmp744 = $tmp742(f$Iter734);
            panda$core$Bit $tmp745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp744);
            if (!$tmp745.value) goto $l740;
            {
                ITable* $tmp747 = f$Iter734->$class->itable;
                while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp747 = $tmp747->next;
                }
                $fn749 $tmp748 = $tmp747->methods[1];
                panda$core$Object* $tmp750 = $tmp748(f$Iter734);
                f746 = ((org$pandalanguage$pandac$FieldDecl*) $tmp750);
                (($fn751) self->$class->vtable[7])(self, f746);
                org$pandalanguage$pandac$FieldDecl* $tmp753 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
                $tmp753->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp753->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp756 = (($fn755) self->$class->vtable[25])(self, type594, f746->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp753, result603, ((org$pandalanguage$pandac$Symbol*) f746)->offset, f746->doccomment, f746->annotations, f746->fieldKind, ((org$pandalanguage$pandac$Symbol*) f746)->name, $tmp756, f746->rawValue);
                clone752 = $tmp753;
                panda$collections$Array$add$panda$collections$Array$T(result603->fields, ((panda$core$Object*) clone752));
                (($fn757) result603->symbolTable->$class->vtable[2])(result603->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone752));
            }
            goto $l739;
            $l740:;
        }
        (($fn758) self->classes->$class->vtable[5])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result603)->name)), ((panda$core$Object*) result603));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result603));
        (($fn759) self->currentClass->$class->vtable[3])(self->currentClass);
    }
    }
    return result603;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result760;
    panda$core$Int64 $match$16918761;
    {
        $match$16918761 = p_type->typeKind;
        panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16918761, ((panda$core$Int64) { 10 }));
        if ($tmp762.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp764 = (($fn763) self->$class->vtable[12])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result760 = $tmp764;
        }
        }
        else {
        panda$core$Bit $tmp767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16918761, ((panda$core$Int64) { 11 }));
        bool $tmp766 = $tmp767.value;
        if ($tmp766) goto $l768;
        panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16918761, ((panda$core$Int64) { 21 }));
        $tmp766 = $tmp769.value;
        $l768:;
        panda$core$Bit $tmp770 = { $tmp766 };
        bool $tmp765 = $tmp770.value;
        if ($tmp765) goto $l771;
        panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16918761, ((panda$core$Int64) { 22 }));
        $tmp765 = $tmp772.value;
        $l771:;
        panda$core$Bit $tmp773 = { $tmp765 };
        if ($tmp773.value) {
        {
            panda$core$Object* $tmp775 = (($fn774) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp777 = (($fn776) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) $tmp775));
            result760 = $tmp777;
        }
        }
        else {
        {
        }
        }
        }
    }
    panda$core$Bit $tmp779 = (($fn778) result760->annotations->$class->vtable[12])(result760->annotations);
    if ($tmp779.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp781 = (($fn780) self->$class->vtable[13])(self, result760, p_type);
        result760 = $tmp781;
    }
    }
    return result760;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl782;
    panda$collections$Set* result786;
    panda$collections$Iterator* intf$Iter794;
    org$pandalanguage$pandac$Type* intf806;
    org$pandalanguage$pandac$ClassDecl* $tmp784 = (($fn783) self->$class->vtable[14])(self, p_t);
    cl782 = $tmp784;
    (($fn785) self->$class->vtable[5])(self, cl782);
    panda$collections$Set* $tmp787 = (panda$collections$Set*) malloc(24);
    $tmp787->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp787->refCount.value = 1;
    panda$collections$Set$init($tmp787);
    result786 = $tmp787;
    if (((panda$core$Bit) { cl782->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp790 = (($fn789) self->$class->vtable[25])(self, p_t, cl782->rawSuper);
        panda$collections$Set* $tmp792 = (($fn791) self->$class->vtable[15])(self, $tmp790);
        (($fn793) result786->$class->vtable[3])(result786, ((panda$collections$CollectionView*) $tmp792));
    }
    }
    {
        ITable* $tmp795 = ((panda$collections$Iterable*) cl782->rawInterfaces)->$class->itable;
        while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp795 = $tmp795->next;
        }
        $fn797 $tmp796 = $tmp795->methods[0];
        panda$collections$Iterator* $tmp798 = $tmp796(((panda$collections$Iterable*) cl782->rawInterfaces));
        intf$Iter794 = $tmp798;
        $l799:;
        ITable* $tmp801 = intf$Iter794->$class->itable;
        while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp801 = $tmp801->next;
        }
        $fn803 $tmp802 = $tmp801->methods[0];
        panda$core$Bit $tmp804 = $tmp802(intf$Iter794);
        panda$core$Bit $tmp805 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp804);
        if (!$tmp805.value) goto $l800;
        {
            ITable* $tmp807 = intf$Iter794->$class->itable;
            while ($tmp807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp807 = $tmp807->next;
            }
            $fn809 $tmp808 = $tmp807->methods[1];
            panda$core$Object* $tmp810 = $tmp808(intf$Iter794);
            intf806 = ((org$pandalanguage$pandac$Type*) $tmp810);
            org$pandalanguage$pandac$Type* $tmp812 = (($fn811) self->$class->vtable[25])(self, p_t, intf806);
            panda$collections$Set* $tmp814 = (($fn813) self->$class->vtable[15])(self, $tmp812);
            (($fn815) result786->$class->vtable[3])(result786, ((panda$collections$CollectionView*) $tmp814));
        }
        goto $l799;
        $l800:;
    }
    panda$core$Bit $tmp816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl782->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp816.value) {
    {
        (($fn817) result786->$class->vtable[2])(result786, ((panda$core$Object*) ((panda$collections$Key*) p_t)));
    }
    }
    return result786;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp823;
    panda$core$Int64 $tmp819 = (($fn818) p_t1->subtypes->$class->vtable[3])(p_t1->subtypes);
    panda$core$Int64 $tmp821 = (($fn820) p_t2->subtypes->$class->vtable[3])(p_t2->subtypes);
    panda$core$Bit $tmp822 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp819, $tmp821);
    if ($tmp822.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp825 = (($fn824) p_t1->subtypes->$class->vtable[3])(p_t1->subtypes);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp823, ((panda$core$Int64) { 0 }), $tmp825, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp827 = $tmp823.start.value;
    panda$core$Int64 i826 = { $tmp827 };
    int64_t $tmp829 = $tmp823.end.value;
    int64_t $tmp830 = $tmp823.step.value;
    bool $tmp831 = $tmp823.inclusive.value;
    bool $tmp838 = $tmp830 > 0;
    if ($tmp838) goto $l836; else goto $l837;
    $l836:;
    if ($tmp831) goto $l839; else goto $l840;
    $l839:;
    if ($tmp827 <= $tmp829) goto $l832; else goto $l834;
    $l840:;
    if ($tmp827 < $tmp829) goto $l832; else goto $l834;
    $l837:;
    if ($tmp831) goto $l841; else goto $l842;
    $l841:;
    if ($tmp827 >= $tmp829) goto $l832; else goto $l834;
    $l842:;
    if ($tmp827 > $tmp829) goto $l832; else goto $l834;
    $l832:;
    {
        panda$core$Object* $tmp845 = (($fn844) p_t1->subtypes->$class->vtable[2])(p_t1->subtypes, i826);
        panda$core$Object* $tmp847 = (($fn846) p_t2->subtypes->$class->vtable[2])(p_t2->subtypes, i826);
        panda$core$Bit $tmp849 = (($fn848) ((org$pandalanguage$pandac$Type*) $tmp845)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp845), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp847)));
        if ($tmp849.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l835:;
    if ($tmp838) goto $l851; else goto $l852;
    $l851:;
    int64_t $tmp853 = $tmp829 - i826.value;
    if ($tmp831) goto $l854; else goto $l855;
    $l854:;
    if ($tmp853 >= $tmp830) goto $l850; else goto $l834;
    $l855:;
    if ($tmp853 > $tmp830) goto $l850; else goto $l834;
    $l852:;
    int64_t $tmp857 = i826.value - $tmp829;
    if ($tmp831) goto $l858; else goto $l859;
    $l858:;
    if ($tmp857 >= -$tmp830) goto $l850; else goto $l834;
    $l859:;
    if ($tmp857 > -$tmp830) goto $l850; else goto $l834;
    $l850:;
    i826.value += $tmp830;
    goto $l832;
    $l834:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl861;
    panda$collections$Iterator* test$Iter864;
    org$pandalanguage$pandac$MethodDecl* test876;
    panda$collections$Iterator* raw$Iter893;
    org$pandalanguage$pandac$Type* raw905;
    org$pandalanguage$pandac$MethodDecl* result910;
    org$pandalanguage$pandac$ClassDecl* $tmp863 = (($fn862) self->$class->vtable[14])(self, p_owner);
    cl861 = $tmp863;
    {
        ITable* $tmp865 = ((panda$collections$Iterable*) cl861->methods)->$class->itable;
        while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp865 = $tmp865->next;
        }
        $fn867 $tmp866 = $tmp865->methods[0];
        panda$collections$Iterator* $tmp868 = $tmp866(((panda$collections$Iterable*) cl861->methods));
        test$Iter864 = $tmp868;
        $l869:;
        ITable* $tmp871 = test$Iter864->$class->itable;
        while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp871 = $tmp871->next;
        }
        $fn873 $tmp872 = $tmp871->methods[0];
        panda$core$Bit $tmp874 = $tmp872(test$Iter864);
        panda$core$Bit $tmp875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp874);
        if (!$tmp875.value) goto $l870;
        {
            ITable* $tmp877 = test$Iter864->$class->itable;
            while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp877 = $tmp877->next;
            }
            $fn879 $tmp878 = $tmp877->methods[1];
            panda$core$Object* $tmp880 = $tmp878(test$Iter864);
            test876 = ((org$pandalanguage$pandac$MethodDecl*) $tmp880);
            panda$core$Bit $tmp881 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test876)->name, p_name);
            if ($tmp881.value) {
            {
                (($fn882) self->$class->vtable[6])(self, test876);
                org$pandalanguage$pandac$Type* $tmp884 = (($fn883) self->$class->vtable[44])(self, test876);
                org$pandalanguage$pandac$Type* $tmp886 = (($fn885) self->$class->vtable[25])(self, p_owner, $tmp884);
                panda$core$Bit $tmp888 = (($fn887) self->$class->vtable[16])(self, $tmp886, p_methodType);
                if ($tmp888.value) {
                {
                    return test876;
                }
                }
            }
            }
        }
        goto $l869;
        $l870:;
    }
    bool $tmp889 = p_checkInterfaces.value;
    if ($tmp889) goto $l890;
    panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl861->classKind, ((panda$core$Int64) { 5012 }));
    $tmp889 = $tmp891.value;
    $l890:;
    panda$core$Bit $tmp892 = { $tmp889 };
    if ($tmp892.value) {
    {
        {
            ITable* $tmp894 = ((panda$collections$Iterable*) cl861->rawInterfaces)->$class->itable;
            while ($tmp894->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp894 = $tmp894->next;
            }
            $fn896 $tmp895 = $tmp894->methods[0];
            panda$collections$Iterator* $tmp897 = $tmp895(((panda$collections$Iterable*) cl861->rawInterfaces));
            raw$Iter893 = $tmp897;
            $l898:;
            ITable* $tmp900 = raw$Iter893->$class->itable;
            while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp900 = $tmp900->next;
            }
            $fn902 $tmp901 = $tmp900->methods[0];
            panda$core$Bit $tmp903 = $tmp901(raw$Iter893);
            panda$core$Bit $tmp904 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp903);
            if (!$tmp904.value) goto $l899;
            {
                ITable* $tmp906 = raw$Iter893->$class->itable;
                while ($tmp906->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp906 = $tmp906->next;
                }
                $fn908 $tmp907 = $tmp906->methods[1];
                panda$core$Object* $tmp909 = $tmp907(raw$Iter893);
                raw905 = ((org$pandalanguage$pandac$Type*) $tmp909);
                org$pandalanguage$pandac$Type* $tmp912 = (($fn911) self->$class->vtable[25])(self, p_owner, raw905);
                org$pandalanguage$pandac$MethodDecl* $tmp914 = (($fn913) self->$class->vtable[17])(self, $tmp912, p_name, p_methodType, p_checkInterfaces);
                result910 = $tmp914;
                if (((panda$core$Bit) { result910 != NULL }).value) {
                {
                    return result910;
                }
                }
            }
            goto $l898;
            $l899:;
        }
    }
    }
    if (((panda$core$Bit) { cl861->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp916 = (($fn915) self->$class->vtable[25])(self, p_owner, cl861->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp918 = (($fn917) self->$class->vtable[17])(self, $tmp916, p_name, p_methodType, p_checkInterfaces);
        return $tmp918;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType920;
    org$pandalanguage$pandac$Type* owner923;
    panda$collections$Iterator* raw$Iter926;
    org$pandalanguage$pandac$Type* raw938;
    org$pandalanguage$pandac$MethodDecl* result943;
    (($fn919) self->$class->vtable[6])(self, p_m);
    org$pandalanguage$pandac$Type* $tmp922 = (($fn921) self->$class->vtable[44])(self, p_m);
    methodType920 = $tmp922;
    org$pandalanguage$pandac$Type* $tmp925 = (($fn924) p_m->owner->$class->vtable[4])(p_m->owner);
    owner923 = $tmp925;
    {
        ITable* $tmp927 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp927 = $tmp927->next;
        }
        $fn929 $tmp928 = $tmp927->methods[0];
        panda$collections$Iterator* $tmp930 = $tmp928(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter926 = $tmp930;
        $l931:;
        ITable* $tmp933 = raw$Iter926->$class->itable;
        while ($tmp933->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp933 = $tmp933->next;
        }
        $fn935 $tmp934 = $tmp933->methods[0];
        panda$core$Bit $tmp936 = $tmp934(raw$Iter926);
        panda$core$Bit $tmp937 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp936);
        if (!$tmp937.value) goto $l932;
        {
            ITable* $tmp939 = raw$Iter926->$class->itable;
            while ($tmp939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp939 = $tmp939->next;
            }
            $fn941 $tmp940 = $tmp939->methods[1];
            panda$core$Object* $tmp942 = $tmp940(raw$Iter926);
            raw938 = ((org$pandalanguage$pandac$Type*) $tmp942);
            org$pandalanguage$pandac$Type* $tmp945 = (($fn944) self->$class->vtable[25])(self, owner923, raw938);
            org$pandalanguage$pandac$MethodDecl* $tmp947 = (($fn946) self->$class->vtable[17])(self, $tmp945, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType920, ((panda$core$Bit) { true }));
            result943 = $tmp947;
            if (((panda$core$Bit) { result943 != NULL }).value) {
            {
                return result943;
            }
            }
        }
        goto $l931;
        $l932:;
    }
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp949 = (($fn948) self->$class->vtable[25])(self, owner923, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp951 = (($fn950) self->$class->vtable[17])(self, $tmp949, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType920, ((panda$core$Bit) { true }));
        return $tmp951;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass952;
    panda$collections$Array* result955;
    panda$collections$Iterator* m$Iter958;
    org$pandalanguage$pandac$MethodDecl* m970;
    org$pandalanguage$pandac$MethodDecl* found975;
    org$pandalanguage$pandac$ClassDecl* $tmp954 = (($fn953) self->$class->vtable[14])(self, p_intf);
    intfClass952 = $tmp954;
    panda$collections$Array* $tmp956 = (panda$collections$Array*) malloc(40);
    $tmp956->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp956->refCount.value = 1;
    panda$collections$Array$init($tmp956);
    result955 = $tmp956;
    {
        ITable* $tmp959 = ((panda$collections$Iterable*) intfClass952->methods)->$class->itable;
        while ($tmp959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp959 = $tmp959->next;
        }
        $fn961 $tmp960 = $tmp959->methods[0];
        panda$collections$Iterator* $tmp962 = $tmp960(((panda$collections$Iterable*) intfClass952->methods));
        m$Iter958 = $tmp962;
        $l963:;
        ITable* $tmp965 = m$Iter958->$class->itable;
        while ($tmp965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp965 = $tmp965->next;
        }
        $fn967 $tmp966 = $tmp965->methods[0];
        panda$core$Bit $tmp968 = $tmp966(m$Iter958);
        panda$core$Bit $tmp969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp968);
        if (!$tmp969.value) goto $l964;
        {
            ITable* $tmp971 = m$Iter958->$class->itable;
            while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp971 = $tmp971->next;
            }
            $fn973 $tmp972 = $tmp971->methods[1];
            panda$core$Object* $tmp974 = $tmp972(m$Iter958);
            m970 = ((org$pandalanguage$pandac$MethodDecl*) $tmp974);
            org$pandalanguage$pandac$Type* $tmp977 = (($fn976) p_cl->$class->vtable[3])(p_cl);
            org$pandalanguage$pandac$Type* $tmp979 = (($fn978) self->$class->vtable[46])(self, m970);
            org$pandalanguage$pandac$Type* $tmp981 = (($fn980) self->$class->vtable[25])(self, p_intf, $tmp979);
            org$pandalanguage$pandac$MethodDecl* $tmp983 = (($fn982) self->$class->vtable[17])(self, $tmp977, ((org$pandalanguage$pandac$Symbol*) m970)->name, $tmp981, ((panda$core$Bit) { false }));
            found975 = $tmp983;
            panda$collections$Array$add$panda$collections$Array$T(result955, ((panda$core$Object*) found975));
        }
        goto $l963;
        $l964:;
    }
    return ((panda$collections$ListView*) result955);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl986;
    panda$collections$Iterator* rawIntf$Iter991;
    org$pandalanguage$pandac$Type* rawIntf1003;
    org$pandalanguage$pandac$ClassDecl* intf1008;
    panda$core$Bit $tmp984 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp984.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        (($fn985) self->$class->vtable[5])(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp988 = (($fn987) self->$class->vtable[14])(self, p_cl->rawSuper);
            superCl986 = $tmp988;
            if (((panda$core$Bit) { superCl986 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp990 = (($fn989) self->$class->vtable[20])(self, superCl986);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp990));
            }
            }
        }
        }
        {
            ITable* $tmp992 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp992->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp992 = $tmp992->next;
            }
            $fn994 $tmp993 = $tmp992->methods[0];
            panda$collections$Iterator* $tmp995 = $tmp993(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter991 = $tmp995;
            $l996:;
            ITable* $tmp998 = rawIntf$Iter991->$class->itable;
            while ($tmp998->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp998 = $tmp998->next;
            }
            $fn1000 $tmp999 = $tmp998->methods[0];
            panda$core$Bit $tmp1001 = $tmp999(rawIntf$Iter991);
            panda$core$Bit $tmp1002 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1001);
            if (!$tmp1002.value) goto $l997;
            {
                ITable* $tmp1004 = rawIntf$Iter991->$class->itable;
                while ($tmp1004->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1004 = $tmp1004->next;
                }
                $fn1006 $tmp1005 = $tmp1004->methods[1];
                panda$core$Object* $tmp1007 = $tmp1005(rawIntf$Iter991);
                rawIntf1003 = ((org$pandalanguage$pandac$Type*) $tmp1007);
                org$pandalanguage$pandac$ClassDecl* $tmp1010 = (($fn1009) self->$class->vtable[14])(self, rawIntf1003);
                intf1008 = $tmp1010;
                if (((panda$core$Bit) { intf1008 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1012 = (($fn1011) self->$class->vtable[20])(self, intf1008);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1012));
                }
                }
            }
            goto $l996;
            $l997:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1018;
    panda$collections$Iterator* derived$Iter1025;
    org$pandalanguage$pandac$MethodDecl* derived1037;
    panda$core$Bit found1049;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1050;
    org$pandalanguage$pandac$MethodDecl* base1070;
    panda$core$Int64 $tmp1013 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1013, ((panda$core$Int64) { 0 }));
    if ($tmp1014.value) {
    {
        (($fn1015) self->$class->vtable[5])(self, p_cl);
        (($fn1016) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
        (($fn1017) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1020 = (($fn1019) self->$class->vtable[14])(self, p_cl->rawSuper);
            superCl1018 = $tmp1020;
            if (((panda$core$Bit) { superCl1018 == NULL }).value) {
            {
                (($fn1021) self->currentClass->$class->vtable[3])(self->currentClass);
                (($fn1022) self->currentFile->$class->vtable[3])(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1024 = (($fn1023) self->$class->vtable[21])(self, superCl1018);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1024));
        }
        }
        {
            ITable* $tmp1026 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1026 = $tmp1026->next;
            }
            $fn1028 $tmp1027 = $tmp1026->methods[0];
            panda$collections$Iterator* $tmp1029 = $tmp1027(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1025 = $tmp1029;
            $l1030:;
            ITable* $tmp1032 = derived$Iter1025->$class->itable;
            while ($tmp1032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1032 = $tmp1032->next;
            }
            $fn1034 $tmp1033 = $tmp1032->methods[0];
            panda$core$Bit $tmp1035 = $tmp1033(derived$Iter1025);
            panda$core$Bit $tmp1036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1035);
            if (!$tmp1036.value) goto $l1031;
            {
                ITable* $tmp1038 = derived$Iter1025->$class->itable;
                while ($tmp1038->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1038 = $tmp1038->next;
                }
                $fn1040 $tmp1039 = $tmp1038->methods[1];
                panda$core$Object* $tmp1041 = $tmp1039(derived$Iter1025);
                derived1037 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1041);
                (($fn1042) self->$class->vtable[6])(self, derived1037);
                panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1037->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1043 = $tmp1044.value;
                if ($tmp1043) goto $l1045;
                panda$core$Bit $tmp1047 = (($fn1046) derived1037->annotations->$class->vtable[5])(derived1037->annotations);
                $tmp1043 = $tmp1047.value;
                $l1045:;
                panda$core$Bit $tmp1048 = { $tmp1043 };
                if ($tmp1048.value) {
                {
                    goto $l1030;
                }
                }
                found1049 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1051 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1050, ((panda$core$Int64) { 0 }), $tmp1051, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
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
                    panda$core$Object* $tmp1071 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1052);
                    base1070 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1071);
                    (($fn1072) self->$class->vtable[6])(self, base1070);
                    panda$core$Bit $tmp1074 = (($fn1073) derived1037->$class->vtable[5])(derived1037, base1070);
                    if ($tmp1074.value) {
                    {
                        found1049 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1052, ((panda$core$Object*) derived1037));
                        goto $l1060;
                    }
                    }
                }
                $l1061:;
                if ($tmp1064) goto $l1076; else goto $l1077;
                $l1076:;
                int64_t $tmp1078 = $tmp1055 - i1052.value;
                if ($tmp1057) goto $l1079; else goto $l1080;
                $l1079:;
                if ($tmp1078 >= $tmp1056) goto $l1075; else goto $l1060;
                $l1080:;
                if ($tmp1078 > $tmp1056) goto $l1075; else goto $l1060;
                $l1077:;
                int64_t $tmp1082 = i1052.value - $tmp1055;
                if ($tmp1057) goto $l1083; else goto $l1084;
                $l1083:;
                if ($tmp1082 >= -$tmp1056) goto $l1075; else goto $l1060;
                $l1084:;
                if ($tmp1082 > -$tmp1056) goto $l1075; else goto $l1060;
                $l1075:;
                i1052.value += $tmp1056;
                goto $l1058;
                $l1060:;
                panda$core$Bit $tmp1086 = panda$core$Bit$$NOT$R$panda$core$Bit(found1049);
                if ($tmp1086.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1037));
                }
                }
            }
            goto $l1030;
            $l1031:;
        }
        (($fn1087) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn1088) self->currentFile->$class->vtable[3])(self->currentFile);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$core$Int64 p_offset, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1089;
    org$pandalanguage$pandac$Symbol* s1092;
    panda$collections$Iterator* m$Iter1099;
    org$pandalanguage$pandac$MethodDecl* m1111;
    panda$collections$Iterator* p$Iter1119;
    org$pandalanguage$pandac$SymbolTable* p1131;
    panda$collections$Array* children1137;
    panda$collections$Array* types1148;
    panda$collections$Iterator* m$Iter1151;
    org$pandalanguage$pandac$MethodRef* m1163;
    panda$collections$Array* $tmp1090 = (panda$collections$Array*) malloc(40);
    $tmp1090->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1090->refCount.value = 1;
    panda$collections$Array$init($tmp1090);
    methods1089 = $tmp1090;
    org$pandalanguage$pandac$Symbol* $tmp1094 = (($fn1093) p_st->$class->vtable[6])(p_st, p_name);
    s1092 = $tmp1094;
    panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1092->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1095.value) {
    {
        (($fn1096) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$MethodDecl*) s1092));
        org$pandalanguage$pandac$MethodRef* $tmp1097 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1097->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1097->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1097, ((org$pandalanguage$pandac$MethodDecl*) s1092), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1089, ((panda$core$Object*) $tmp1097));
    }
    }
    else {
    {
        {
            ITable* $tmp1100 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1092)->methods)->$class->itable;
            while ($tmp1100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1100 = $tmp1100->next;
            }
            $fn1102 $tmp1101 = $tmp1100->methods[0];
            panda$collections$Iterator* $tmp1103 = $tmp1101(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1092)->methods));
            m$Iter1099 = $tmp1103;
            $l1104:;
            ITable* $tmp1106 = m$Iter1099->$class->itable;
            while ($tmp1106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1106 = $tmp1106->next;
            }
            $fn1108 $tmp1107 = $tmp1106->methods[0];
            panda$core$Bit $tmp1109 = $tmp1107(m$Iter1099);
            panda$core$Bit $tmp1110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1109);
            if (!$tmp1110.value) goto $l1105;
            {
                ITable* $tmp1112 = m$Iter1099->$class->itable;
                while ($tmp1112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1112 = $tmp1112->next;
                }
                $fn1114 $tmp1113 = $tmp1112->methods[1];
                panda$core$Object* $tmp1115 = $tmp1113(m$Iter1099);
                m1111 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1115);
                (($fn1116) self->$class->vtable[6])(self, m1111);
                org$pandalanguage$pandac$MethodRef* $tmp1117 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1117->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1117->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1117, m1111, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1089, ((panda$core$Object*) $tmp1117));
            }
            goto $l1104;
            $l1105:;
        }
    }
    }
    {
        ITable* $tmp1120 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1120->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1120 = $tmp1120->next;
        }
        $fn1122 $tmp1121 = $tmp1120->methods[0];
        panda$collections$Iterator* $tmp1123 = $tmp1121(((panda$collections$Iterable*) p_st->parents));
        p$Iter1119 = $tmp1123;
        $l1124:;
        ITable* $tmp1126 = p$Iter1119->$class->itable;
        while ($tmp1126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1126 = $tmp1126->next;
        }
        $fn1128 $tmp1127 = $tmp1126->methods[0];
        panda$core$Bit $tmp1129 = $tmp1127(p$Iter1119);
        panda$core$Bit $tmp1130 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1129);
        if (!$tmp1130.value) goto $l1125;
        {
            ITable* $tmp1132 = p$Iter1119->$class->itable;
            while ($tmp1132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1132 = $tmp1132->next;
            }
            $fn1134 $tmp1133 = $tmp1132->methods[1];
            panda$core$Object* $tmp1135 = $tmp1133(p$Iter1119);
            p1131 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1135);
            (($fn1136) self->$class->vtable[22])(self, p1131, p_name, methods1089, p_types);
        }
        goto $l1124;
        $l1125:;
    }
    panda$collections$Array* $tmp1138 = (panda$collections$Array*) malloc(40);
    $tmp1138->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1138->refCount.value = 1;
    panda$collections$Array$init($tmp1138);
    children1137 = $tmp1138;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1137, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1140 = panda$collections$Array$get_count$R$panda$core$Int64(methods1089);
    panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1140, ((panda$core$Int64) { 1 }));
    if ($tmp1141.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1142 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1142->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1142->refCount.value = 1;
        panda$core$Object* $tmp1144 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1089, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1146 = (($fn1145) ((org$pandalanguage$pandac$MethodRef*) $tmp1144)->$class->vtable[6])(((org$pandalanguage$pandac$MethodRef*) $tmp1144));
        panda$core$Object* $tmp1147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1089, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1142, ((panda$core$Int64) { 1002 }), p_offset, $tmp1146, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1147)), ((panda$collections$ListView*) children1137));
        return $tmp1142;
    }
    }
    else {
    {
        panda$collections$Array* $tmp1149 = (panda$collections$Array*) malloc(40);
        $tmp1149->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1149->refCount.value = 1;
        panda$collections$Array$init($tmp1149);
        types1148 = $tmp1149;
        {
            ITable* $tmp1152 = ((panda$collections$Iterable*) methods1089)->$class->itable;
            while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1152 = $tmp1152->next;
            }
            $fn1154 $tmp1153 = $tmp1152->methods[0];
            panda$collections$Iterator* $tmp1155 = $tmp1153(((panda$collections$Iterable*) methods1089));
            m$Iter1151 = $tmp1155;
            $l1156:;
            ITable* $tmp1158 = m$Iter1151->$class->itable;
            while ($tmp1158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1158 = $tmp1158->next;
            }
            $fn1160 $tmp1159 = $tmp1158->methods[0];
            panda$core$Bit $tmp1161 = $tmp1159(m$Iter1151);
            panda$core$Bit $tmp1162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1161);
            if (!$tmp1162.value) goto $l1157;
            {
                ITable* $tmp1164 = m$Iter1151->$class->itable;
                while ($tmp1164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1164 = $tmp1164->next;
                }
                $fn1166 $tmp1165 = $tmp1164->methods[1];
                panda$core$Object* $tmp1167 = $tmp1165(m$Iter1151);
                m1163 = ((org$pandalanguage$pandac$MethodRef*) $tmp1167);
                org$pandalanguage$pandac$Type* $tmp1169 = (($fn1168) m1163->$class->vtable[6])(m1163);
                panda$collections$Array$add$panda$collections$Array$T(types1148, ((panda$core$Object*) $tmp1169));
            }
            goto $l1156;
            $l1157:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1170 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1170->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1170->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1172 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp1172->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1172->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1172, ((panda$collections$ListView*) types1148));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1170, ((panda$core$Int64) { 1003 }), p_offset, $tmp1172, ((panda$core$Object*) methods1089), ((panda$collections$ListView*) children1137));
        return $tmp1170;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    panda$core$Int64 $match$238631174;
    org$pandalanguage$pandac$ClassDecl* cl1176;
    org$pandalanguage$pandac$FieldDecl* f1203;
    panda$collections$Array* children1208;
    org$pandalanguage$pandac$Type* effectiveType1214;
    org$pandalanguage$pandac$IRNode* result1223;
    {
        $match$238631174 = p_s->kind;
        panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238631174, ((panda$core$Int64) { 200 }));
        if ($tmp1175.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1178 = (($fn1177) self->$class->vtable[12])(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1176 = $tmp1178;
            if (((panda$core$Bit) { cl1176 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1179 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1179->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1179->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1181 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1183 = (($fn1182) cl1176->$class->vtable[3])(cl1176);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1179, ((panda$core$Int64) { 1001 }), p_offset, $tmp1181, $tmp1183);
                return $tmp1179;
            }
            }
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238631174, ((panda$core$Int64) { 201 }));
        if ($tmp1184.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1185 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1185->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1185->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1187 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1189 = (($fn1188) ((org$pandalanguage$pandac$ClassDecl*) p_s)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1185, ((panda$core$Int64) { 1001 }), p_offset, $tmp1187, $tmp1189);
            return $tmp1185;
        }
        }
        else {
        panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238631174, ((panda$core$Int64) { 204 }));
        bool $tmp1190 = $tmp1191.value;
        if ($tmp1190) goto $l1192;
        panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238631174, ((panda$core$Int64) { 205 }));
        $tmp1190 = $tmp1193.value;
        $l1192:;
        panda$core$Bit $tmp1194 = { $tmp1190 };
        if ($tmp1194.value) {
        {
            panda$collections$ListView* $tmp1196 = (($fn1195) self->$class->vtable[56])(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1198 = (($fn1197) self->$class->vtable[23])(self, p_st, p_target, p_s->name, p_offset, $tmp1196);
            return $tmp1198;
        }
        }
        else {
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238631174, ((panda$core$Int64) { 208 }));
        if ($tmp1199.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1200 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1200->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1200->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1200, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1200;
        }
        }
        else {
        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238631174, ((panda$core$Int64) { 202 }));
        if ($tmp1202.value) {
        {
            f1203 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            (($fn1204) self->$class->vtable[7])(self, f1203);
            org$pandalanguage$pandac$Type* $tmp1205 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1207 = (($fn1206) f1203->type->$class->vtable[4])(f1203->type, ((panda$core$Object*) $tmp1205));
            if ($tmp1207.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1209 = (panda$collections$Array*) malloc(40);
            $tmp1209->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1209->refCount.value = 1;
            panda$collections$Array$init($tmp1209);
            children1208 = $tmp1209;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1211.value) {
                {
                    (($fn1213) self->$class->vtable[96])(self, p_target->offset, &$s1212);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1216 = (($fn1215) self->$class->vtable[25])(self, p_target->type, f1203->type);
                effectiveType1214 = $tmp1216;
                panda$core$Bit $tmp1218 = (($fn1217) f1203->annotations->$class->vtable[5])(f1203->annotations);
                if ($tmp1218.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1208, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1220 = (($fn1219) f1203->owner->$class->vtable[3])(f1203->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1222 = (($fn1221) self->$class->vtable[33])(self, p_target, $tmp1220);
                    panda$collections$Array$add$panda$collections$Array$T(children1208, ((panda$core$Object*) $tmp1222));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1224 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1224->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1224->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1224, ((panda$core$Int64) { 1026 }), p_offset, f1203->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1208));
                result1223 = $tmp1224;
                panda$core$Bit $tmp1227 = (($fn1226) effectiveType1214->$class->vtable[5])(effectiveType1214, ((panda$core$Object*) result1223->type));
                if ($tmp1227.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1229 = (($fn1228) self->$class->vtable[36])(self, result1223, p_offset, ((panda$core$Bit) { false }), effectiveType1214);
                    result1223 = $tmp1229;
                }
                }
                return result1223;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1230 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1230->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1230->refCount.value = 1;
                panda$core$Object* $tmp1233 = (($fn1232) self->currentClass->$class->vtable[4])(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1235 = (($fn1234) ((org$pandalanguage$pandac$ClassDecl*) $tmp1233)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp1233));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1230, ((panda$core$Int64) { 1025 }), p_offset, $tmp1235);
                panda$collections$Array$add$panda$collections$Array$T(children1208, ((panda$core$Object*) $tmp1230));
                org$pandalanguage$pandac$IRNode* $tmp1236 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1236->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1236->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1236, ((panda$core$Int64) { 1026 }), p_offset, f1203->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1208));
                return $tmp1236;
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
    panda$core$Int64 $match$262271238;
    panda$collections$HashMap* typeMap1246;
    org$pandalanguage$pandac$Type* base1249;
    org$pandalanguage$pandac$ClassDecl* cl1252;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1255;
    {
        $match$262271238 = p_context->typeKind;
        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262271238, ((panda$core$Int64) { 10 }));
        if ($tmp1239.value) {
        {
            return p_raw;
        }
        }
        else {
        panda$core$Bit $tmp1240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262271238, ((panda$core$Int64) { 11 }));
        if ($tmp1240.value) {
        {
            panda$core$Object* $tmp1242 = (($fn1241) p_context->subtypes->$class->vtable[2])(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1244 = (($fn1243) self->$class->vtable[25])(self, ((org$pandalanguage$pandac$Type*) $tmp1242), p_raw);
            return $tmp1244;
        }
        }
        else {
        panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262271238, ((panda$core$Int64) { 21 }));
        if ($tmp1245.value) {
        {
            panda$collections$HashMap* $tmp1247 = (panda$collections$HashMap*) malloc(56);
            $tmp1247->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1247->refCount.value = 1;
            panda$collections$HashMap$init($tmp1247);
            typeMap1246 = $tmp1247;
            panda$core$Object* $tmp1251 = (($fn1250) p_context->subtypes->$class->vtable[2])(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1249 = ((org$pandalanguage$pandac$Type*) $tmp1251);
            org$pandalanguage$pandac$ClassDecl* $tmp1254 = (($fn1253) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$Symbol*) base1249)->name);
            cl1252 = $tmp1254;
            panda$core$Int64 $tmp1257 = (($fn1256) p_context->subtypes->$class->vtable[3])(p_context->subtypes);
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1255, ((panda$core$Int64) { 1 }), $tmp1257, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1259 = $tmp1255.start.value;
            panda$core$Int64 i1258 = { $tmp1259 };
            int64_t $tmp1261 = $tmp1255.end.value;
            int64_t $tmp1262 = $tmp1255.step.value;
            bool $tmp1263 = $tmp1255.inclusive.value;
            bool $tmp1270 = $tmp1262 > 0;
            if ($tmp1270) goto $l1268; else goto $l1269;
            $l1268:;
            if ($tmp1263) goto $l1271; else goto $l1272;
            $l1271:;
            if ($tmp1259 <= $tmp1261) goto $l1264; else goto $l1266;
            $l1272:;
            if ($tmp1259 < $tmp1261) goto $l1264; else goto $l1266;
            $l1269:;
            if ($tmp1263) goto $l1273; else goto $l1274;
            $l1273:;
            if ($tmp1259 >= $tmp1261) goto $l1264; else goto $l1266;
            $l1274:;
            if ($tmp1259 > $tmp1261) goto $l1264; else goto $l1266;
            $l1264:;
            {
                panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1252)->name, &$s1276);
                panda$core$Int64 $tmp1278 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1258, ((panda$core$Int64) { 1 }));
                ITable* $tmp1279 = ((panda$collections$ListView*) cl1252->parameters)->$class->itable;
                while ($tmp1279->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1279 = $tmp1279->next;
                }
                $fn1281 $tmp1280 = $tmp1279->methods[0];
                panda$core$Object* $tmp1282 = $tmp1280(((panda$collections$ListView*) cl1252->parameters), $tmp1278);
                panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1282))->name);
                panda$core$Object* $tmp1285 = (($fn1284) p_context->subtypes->$class->vtable[2])(p_context->subtypes, i1258);
                (($fn1286) typeMap1246->$class->vtable[5])(typeMap1246, ((panda$core$Object*) ((panda$collections$Key*) $tmp1283)), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1285)));
            }
            $l1267:;
            if ($tmp1270) goto $l1288; else goto $l1289;
            $l1288:;
            int64_t $tmp1290 = $tmp1261 - i1258.value;
            if ($tmp1263) goto $l1291; else goto $l1292;
            $l1291:;
            if ($tmp1290 >= $tmp1262) goto $l1287; else goto $l1266;
            $l1292:;
            if ($tmp1290 > $tmp1262) goto $l1287; else goto $l1266;
            $l1289:;
            int64_t $tmp1294 = i1258.value - $tmp1261;
            if ($tmp1263) goto $l1295; else goto $l1296;
            $l1295:;
            if ($tmp1294 >= -$tmp1262) goto $l1287; else goto $l1266;
            $l1296:;
            if ($tmp1294 > -$tmp1262) goto $l1287; else goto $l1266;
            $l1287:;
            i1258.value += $tmp1262;
            goto $l1264;
            $l1266:;
            org$pandalanguage$pandac$Type* $tmp1299 = (($fn1298) p_raw->$class->vtable[14])(p_raw, typeMap1246);
            return $tmp1299;
        }
        }
        else {
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$262271238, ((panda$core$Int64) { 22 }));
        if ($tmp1300.value) {
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
    org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1303 = (($fn1302) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1301));
    if ($tmp1303.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1304;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1307 = (($fn1306) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1305));
    if ($tmp1307.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1308 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1308;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$274201309;
    panda$collections$Array* args1323;
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT $tmp1324;
    org$pandalanguage$pandac$IRNode* c1326;
    {
        $match$274201309 = p_expr->kind;
        panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$274201309, ((panda$core$Int64) { 1031 }));
        if ($tmp1310.value) {
        {
            panda$core$Object* $tmp1311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1313 = (($fn1312) self->$class->vtable[26])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1311)->type);
            panda$core$Object* $tmp1314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1316 = (($fn1315) self->$class->vtable[26])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1314)->type);
            org$pandalanguage$pandac$Type* $tmp1318 = (($fn1317) $tmp1313->$class->vtable[13])($tmp1313, $tmp1316);
            org$pandalanguage$pandac$Type* $tmp1320 = (($fn1319) self->$class->vtable[26])(self, $tmp1318);
            org$pandalanguage$pandac$Type* $tmp1321 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1320);
            return $tmp1321;
        }
        }
        else {
        panda$core$Bit $tmp1322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$274201309, ((panda$core$Int64) { 1040 }));
        if ($tmp1322.value) {
        {
            panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1324, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1325 = panda$collections$Array$$IDX$panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1324);
            args1323 = $tmp1325;
            panda$core$Object* $tmp1327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1330 = (($fn1329) self->$class->vtable[40])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1327), &$s1328, ((panda$collections$ListView*) args1323));
            c1326 = $tmp1330;
            if (((panda$core$Bit) { c1326 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1331;
            }
            }
            return c1326->type;
        }
        }
        }
    }
    org$pandalanguage$pandac$Type* $tmp1333 = (($fn1332) self->$class->vtable[26])(self, p_expr->type);
    return $tmp1333;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1346;
    panda$core$Int64 $match$286691352;
    panda$core$Int64$nullable result1354;
    panda$core$Int64 $match$292921372;
    panda$core$Int64$nullable best1378;
    panda$collections$Iterator* t$Iter1379;
    org$pandalanguage$pandac$Type* t1391;
    panda$core$Int64$nullable cost1396;
    org$pandalanguage$pandac$ClassDecl* cl1417;
    panda$core$Int64$nullable cost1421;
    panda$collections$Iterator* intf$Iter1429;
    org$pandalanguage$pandac$Type* intf1441;
    panda$core$Int64$nullable cost1446;
    panda$core$Bit $tmp1335 = (($fn1334) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) p_target));
    if ($tmp1335.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1336 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1338 = (($fn1337) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1336));
    if ($tmp1338.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1339.value) {
    {
        panda$core$Bit $tmp1340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1340.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1341 = $tmp1342.value;
    if (!$tmp1341) goto $l1343;
    panda$core$Bit $tmp1344 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1341 = $tmp1344.value;
    $l1343:;
    panda$core$Bit $tmp1345 = { $tmp1341 };
    if ($tmp1345.value) {
    {
        panda$core$Object* $tmp1348 = (($fn1347) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1350 = (($fn1349) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Type*) $tmp1348), p_target);
        result1346 = $tmp1350;
        if (((panda$core$Bit) { !result1346.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1351 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1346.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1351, true });
    }
    }
    {
        $match$286691352 = p_target->typeKind;
        panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286691352, ((panda$core$Int64) { 11 }));
        if ($tmp1353.value) {
        {
            panda$core$Object* $tmp1356 = (($fn1355) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1358 = (($fn1357) self->$class->vtable[28])(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1356));
            result1354 = $tmp1358;
            if (((panda$core$Bit) { !result1354.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1359 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1354.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1359, true });
        }
        }
        else {
        panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286691352, ((panda$core$Int64) { 22 }));
        if ($tmp1360.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286691352, ((panda$core$Int64) { 12 }));
        bool $tmp1361 = $tmp1362.value;
        if ($tmp1361) goto $l1363;
        panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286691352, ((panda$core$Int64) { 13 }));
        $tmp1361 = $tmp1364.value;
        $l1363:;
        panda$core$Bit $tmp1365 = { $tmp1361 };
        if ($tmp1365.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286691352, ((panda$core$Int64) { 10 }));
        if ($tmp1366.value) {
        {
            panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1367.value) {
            {
                panda$core$Object* $tmp1369 = (($fn1368) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1371 = (($fn1370) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Type*) $tmp1369), p_target);
                return $tmp1371;
            }
            }
        }
        }
        }
        }
        }
    }
    {
        $match$292921372 = p_type->typeKind;
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292921372, ((panda$core$Int64) { 19 }));
        if ($tmp1373.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1374 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1376 = (($fn1375) self->$class->vtable[28])(self, $tmp1374, p_target);
            return $tmp1376;
        }
        }
        else {
        panda$core$Bit $tmp1377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292921372, ((panda$core$Int64) { 17 }));
        if ($tmp1377.value) {
        {
            best1378 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1380 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1380 = $tmp1380->next;
                }
                $fn1382 $tmp1381 = $tmp1380->methods[0];
                panda$collections$Iterator* $tmp1383 = $tmp1381(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1379 = $tmp1383;
                $l1384:;
                ITable* $tmp1386 = t$Iter1379->$class->itable;
                while ($tmp1386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1386 = $tmp1386->next;
                }
                $fn1388 $tmp1387 = $tmp1386->methods[0];
                panda$core$Bit $tmp1389 = $tmp1387(t$Iter1379);
                panda$core$Bit $tmp1390 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1389);
                if (!$tmp1390.value) goto $l1385;
                {
                    ITable* $tmp1392 = t$Iter1379->$class->itable;
                    while ($tmp1392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1392 = $tmp1392->next;
                    }
                    $fn1394 $tmp1393 = $tmp1392->methods[1];
                    panda$core$Object* $tmp1395 = $tmp1393(t$Iter1379);
                    t1391 = ((org$pandalanguage$pandac$Type*) $tmp1395);
                    panda$core$Int64$nullable $tmp1398 = (($fn1397) self->$class->vtable[28])(self, t1391, p_target);
                    cost1396 = $tmp1398;
                    bool $tmp1399 = ((panda$core$Bit) { cost1396.nonnull }).value;
                    if (!$tmp1399) goto $l1400;
                    bool $tmp1401 = ((panda$core$Bit) { !best1378.nonnull }).value;
                    if ($tmp1401) goto $l1402;
                    panda$core$Bit $tmp1403 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1396.value), ((panda$core$Int64) best1378.value));
                    $tmp1401 = $tmp1403.value;
                    $l1402:;
                    panda$core$Bit $tmp1404 = { $tmp1401 };
                    $tmp1399 = $tmp1404.value;
                    $l1400:;
                    panda$core$Bit $tmp1405 = { $tmp1399 };
                    if ($tmp1405.value) {
                    {
                        best1378 = cost1396;
                    }
                    }
                }
                goto $l1384;
                $l1385:;
            }
            return best1378;
        }
        }
        else {
        panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292921372, ((panda$core$Int64) { 22 }));
        if ($tmp1406.value) {
        {
            panda$core$Object* $tmp1408 = (($fn1407) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1410 = (($fn1409) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Type*) $tmp1408), p_target);
            return $tmp1410;
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1412 = (($fn1411) p_target->$class->vtable[8])(p_target);
    panda$core$Bit $tmp1413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1412);
    if ($tmp1413.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1415 = (($fn1414) p_type->$class->vtable[8])(p_type);
    panda$core$Bit $tmp1416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1415);
    if ($tmp1416.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1419 = (($fn1418) self->$class->vtable[14])(self, p_type);
    cl1417 = $tmp1419;
    (($fn1420) self->$class->vtable[5])(self, cl1417);
    if (((panda$core$Bit) { cl1417->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1423 = (($fn1422) self->$class->vtable[25])(self, p_type, cl1417->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1425 = (($fn1424) self->$class->vtable[25])(self, p_type, $tmp1423);
        panda$core$Int64$nullable $tmp1427 = (($fn1426) self->$class->vtable[28])(self, $tmp1425, p_target);
        cost1421 = $tmp1427;
        if (((panda$core$Bit) { cost1421.nonnull }).value) {
        {
            panda$core$Int64 $tmp1428 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1421.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1428, true });
        }
        }
    }
    }
    {
        ITable* $tmp1430 = ((panda$collections$Iterable*) cl1417->rawInterfaces)->$class->itable;
        while ($tmp1430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1430 = $tmp1430->next;
        }
        $fn1432 $tmp1431 = $tmp1430->methods[0];
        panda$collections$Iterator* $tmp1433 = $tmp1431(((panda$collections$Iterable*) cl1417->rawInterfaces));
        intf$Iter1429 = $tmp1433;
        $l1434:;
        ITable* $tmp1436 = intf$Iter1429->$class->itable;
        while ($tmp1436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1436 = $tmp1436->next;
        }
        $fn1438 $tmp1437 = $tmp1436->methods[0];
        panda$core$Bit $tmp1439 = $tmp1437(intf$Iter1429);
        panda$core$Bit $tmp1440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1439);
        if (!$tmp1440.value) goto $l1435;
        {
            ITable* $tmp1442 = intf$Iter1429->$class->itable;
            while ($tmp1442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1442 = $tmp1442->next;
            }
            $fn1444 $tmp1443 = $tmp1442->methods[1];
            panda$core$Object* $tmp1445 = $tmp1443(intf$Iter1429);
            intf1441 = ((org$pandalanguage$pandac$Type*) $tmp1445);
            org$pandalanguage$pandac$Type* $tmp1448 = (($fn1447) self->$class->vtable[25])(self, p_type, intf1441);
            org$pandalanguage$pandac$Type* $tmp1450 = (($fn1449) self->$class->vtable[25])(self, p_type, $tmp1448);
            panda$core$Int64$nullable $tmp1452 = (($fn1451) self->$class->vtable[28])(self, $tmp1450, p_target);
            cost1446 = $tmp1452;
            if (((panda$core$Bit) { cost1446.nonnull }).value) {
            {
                panda$core$Int64 $tmp1453 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1446.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1453, true });
            }
            }
        }
        goto $l1434;
        $l1435:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1455 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1454 = $tmp1455.value;
    if (!$tmp1454) goto $l1456;
    panda$core$Bit $tmp1457 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1454 = $tmp1457.value;
    $l1456:;
    panda$core$Bit $tmp1458 = { $tmp1454 };
    if ($tmp1458.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1460 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1459 = $tmp1460.value;
    if (!$tmp1459) goto $l1461;
    panda$core$Bit $tmp1462 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1459 = $tmp1462.value;
    $l1461:;
    panda$core$Bit $tmp1463 = { $tmp1459 };
    if ($tmp1463.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1465 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1464 = $tmp1465.value;
    if (!$tmp1464) goto $l1466;
    panda$core$Bit $tmp1467 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1464 = $tmp1467.value;
    $l1466:;
    panda$core$Bit $tmp1468 = { $tmp1464 };
    if ($tmp1468.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1469 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1469.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1470 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1470.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1471 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1471.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 $match$312221474;
    panda$core$Int64$nullable cost1477;
    panda$core$Int64 $match$318161489;
    panda$core$Int64$nullable cost11575;
    panda$core$Int64$nullable cost21581;
    org$pandalanguage$pandac$ClassDecl* targetClass1598;
    panda$collections$Iterator* m$Iter1601;
    org$pandalanguage$pandac$MethodDecl* m1613;
    panda$core$Int64$nullable cost1621;
    panda$core$Bit $tmp1473 = (($fn1472) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) p_target));
    if ($tmp1473.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    {
        $match$312221474 = p_target->typeKind;
        panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$312221474, ((panda$core$Int64) { 11 }));
        if ($tmp1475.value) {
        {
            panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1476.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1479 = (($fn1478) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1481 = (($fn1480) self->$class->vtable[31])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1479));
            cost1477 = $tmp1481;
            if (((panda$core$Bit) { !cost1477.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1482.value) {
            {
                return cost1477;
            }
            }
            panda$core$Int64 $tmp1483 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1477.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1483, true });
        }
        }
        else {
        panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$312221474, ((panda$core$Int64) { 22 }));
        if ($tmp1484.value) {
        {
            panda$core$Object* $tmp1486 = (($fn1485) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1488 = (($fn1487) self->$class->vtable[31])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1486));
            return $tmp1488;
        }
        }
        }
    }
    {
        $match$318161489 = p_expr->kind;
        panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$318161489, ((panda$core$Int64) { 1011 }));
        if ($tmp1490.value) {
        {
            panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1491.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1493 = (($fn1492) p_target->$class->vtable[8])(p_target);
            if ($tmp1493.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1494 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1496 = (($fn1495) self->$class->vtable[28])(self, $tmp1494, p_target);
                return $tmp1496;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$318161489, ((panda$core$Int64) { 1004 }));
        if ($tmp1497.value) {
        {
            panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1499 = $tmp1500.value;
            if (!$tmp1499) goto $l1501;
            panda$core$Int64 $tmp1502 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1504 = (($fn1503) self->$class->vtable[29])(self, $tmp1502);
            panda$core$Int64 $tmp1506 = (($fn1505) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1507 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1504, $tmp1506);
            $tmp1499 = $tmp1507.value;
            $l1501:;
            panda$core$Bit $tmp1508 = { $tmp1499 };
            bool $tmp1498 = $tmp1508.value;
            if ($tmp1498) goto $l1509;
            panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1510 = $tmp1511.value;
            if (!$tmp1510) goto $l1512;
            panda$core$Int64 $tmp1514 = (($fn1513) self->$class->vtable[30])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1516 = (($fn1515) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1517 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1514, $tmp1516);
            $tmp1510 = $tmp1517.value;
            $l1512:;
            panda$core$Bit $tmp1518 = { $tmp1510 };
            $tmp1498 = $tmp1518.value;
            $l1509:;
            panda$core$Bit $tmp1519 = { $tmp1498 };
            if ($tmp1519.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1521 = (($fn1520) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1521);
            if ($tmp1522.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1524 = (($fn1523) self->$class->vtable[27])(self, p_expr);
                panda$core$Int64$nullable $tmp1526 = (($fn1525) self->$class->vtable[28])(self, $tmp1524, p_target);
                return $tmp1526;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$318161489, ((panda$core$Int64) { 1032 }));
        if ($tmp1527.value) {
        {
            panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1529 = $tmp1530.value;
            if (!$tmp1529) goto $l1531;
            panda$core$Int64 $tmp1532 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1533 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1532);
            panda$core$Int64 $tmp1535 = (($fn1534) self->$class->vtable[29])(self, $tmp1533);
            panda$core$Int64 $tmp1537 = (($fn1536) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1538 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1535, $tmp1537);
            $tmp1529 = $tmp1538.value;
            $l1531:;
            panda$core$Bit $tmp1539 = { $tmp1529 };
            bool $tmp1528 = $tmp1539.value;
            if ($tmp1528) goto $l1540;
            panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1541 = $tmp1542.value;
            if (!$tmp1541) goto $l1543;
            panda$core$Int64 $tmp1544 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1545 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1544);
            panda$core$Int64 $tmp1547 = (($fn1546) self->$class->vtable[29])(self, $tmp1545);
            panda$core$Int64 $tmp1549 = (($fn1548) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1550 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1547, $tmp1549);
            $tmp1541 = $tmp1550.value;
            $l1543:;
            panda$core$Bit $tmp1551 = { $tmp1541 };
            $tmp1528 = $tmp1551.value;
            $l1540:;
            panda$core$Bit $tmp1552 = { $tmp1528 };
            if ($tmp1552.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1554 = (($fn1553) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1554);
            if ($tmp1555.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1557 = (($fn1556) self->$class->vtable[27])(self, p_expr);
                panda$core$Int64$nullable $tmp1559 = (($fn1558) self->$class->vtable[28])(self, $tmp1557, p_target);
                return $tmp1559;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$318161489, ((panda$core$Int64) { 1031 }));
        if ($tmp1560.value) {
        {
            panda$core$Bit $tmp1562 = (($fn1561) p_target->$class->vtable[11])(p_target);
            if ($tmp1562.value) {
            {
                panda$core$Object* $tmp1564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1564)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1563 = $tmp1565.value;
                if (!$tmp1563) goto $l1566;
                panda$core$Object* $tmp1567 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1567)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1563 = $tmp1568.value;
                $l1566:;
                panda$core$Bit $tmp1569 = { $tmp1563 };
                if ($tmp1569.value) {
                {
                    panda$core$Object* $tmp1571 = (($fn1570) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1573 = (($fn1572) ((org$pandalanguage$pandac$Type*) $tmp1571)->$class->vtable[6])(((org$pandalanguage$pandac$Type*) $tmp1571));
                    panda$core$Bit $tmp1574 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1573);
                    if ($tmp1574.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Object* $tmp1576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1578 = (($fn1577) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1580 = (($fn1579) self->$class->vtable[31])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1576), ((org$pandalanguage$pandac$Type*) $tmp1578));
                cost11575 = $tmp1580;
                if (((panda$core$Bit) { !cost11575.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1582 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1584 = (($fn1583) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1586 = (($fn1585) self->$class->vtable[31])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1582), ((org$pandalanguage$pandac$Type*) $tmp1584));
                cost21581 = $tmp1586;
                if (((panda$core$Bit) { !cost21581.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1587 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11575.value), ((panda$core$Int64) cost21581.value));
                return ((panda$core$Int64$nullable) { $tmp1587, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1589 = (($fn1588) self->$class->vtable[27])(self, p_expr);
            panda$core$Int64$nullable $tmp1591 = (($fn1590) self->$class->vtable[28])(self, $tmp1589, p_target);
            return $tmp1591;
        }
        }
        else {
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$318161489, ((panda$core$Int64) { 1040 }));
        if ($tmp1592.value) {
        {
            panda$core$Int64$nullable $tmp1594 = (($fn1593) self->$class->vtable[28])(self, p_expr->type, p_target);
            return $tmp1594;
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1596 = (($fn1595) p_target->$class->vtable[8])(p_target);
    panda$core$Bit $tmp1597 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1596);
    if ($tmp1597.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1600 = (($fn1599) self->$class->vtable[14])(self, p_target);
    targetClass1598 = $tmp1600;
    if (((panda$core$Bit) { targetClass1598 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1602 = ((panda$collections$Iterable*) targetClass1598->methods)->$class->itable;
        while ($tmp1602->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1602 = $tmp1602->next;
        }
        $fn1604 $tmp1603 = $tmp1602->methods[0];
        panda$collections$Iterator* $tmp1605 = $tmp1603(((panda$collections$Iterable*) targetClass1598->methods));
        m$Iter1601 = $tmp1605;
        $l1606:;
        ITable* $tmp1608 = m$Iter1601->$class->itable;
        while ($tmp1608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1608 = $tmp1608->next;
        }
        $fn1610 $tmp1609 = $tmp1608->methods[0];
        panda$core$Bit $tmp1611 = $tmp1609(m$Iter1601);
        panda$core$Bit $tmp1612 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1611);
        if (!$tmp1612.value) goto $l1607;
        {
            ITable* $tmp1614 = m$Iter1601->$class->itable;
            while ($tmp1614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1614 = $tmp1614->next;
            }
            $fn1616 $tmp1615 = $tmp1614->methods[1];
            panda$core$Object* $tmp1617 = $tmp1615(m$Iter1601);
            m1613 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1617);
            panda$core$Bit $tmp1619 = (($fn1618) m1613->annotations->$class->vtable[8])(m1613->annotations);
            if ($tmp1619.value) {
            {
                (($fn1620) self->$class->vtable[6])(self, m1613);
                panda$core$Object* $tmp1622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1613->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1624 = (($fn1623) self->$class->vtable[31])(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1622)->type);
                cost1621 = $tmp1624;
                if (((panda$core$Bit) { cost1621.nonnull }).value) {
                {
                    return cost1621;
                }
                }
            }
            }
        }
        goto $l1606;
        $l1607:;
    }
    panda$core$Int64$nullable $tmp1626 = (($fn1625) self->$class->vtable[28])(self, p_expr->type, p_target);
    return $tmp1626;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1638;
    org$pandalanguage$pandac$IRNode* intermediate1643;
    panda$core$Int64 $match$358721650;
    org$pandalanguage$pandac$IRNode* coerced1681;
    org$pandalanguage$pandac$IRNode* coerced1709;
    org$pandalanguage$pandac$IRNode* varType1730;
    org$pandalanguage$pandac$Type* param1740;
    org$pandalanguage$pandac$IRNode* start1743;
    org$pandalanguage$pandac$IRNode* end1747;
    panda$collections$Array* args1751;
    org$pandalanguage$pandac$IRNode* target1758;
    panda$collections$ListView* methods1769;
    panda$collections$Array* args1771;
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT $tmp1772;
    panda$collections$Array* best1774;
    panda$core$Int64$nullable bestCost1777;
    panda$collections$Iterator* m$Iter1778;
    org$pandalanguage$pandac$MethodRef* m1790;
    panda$core$Int64$nullable cost1795;
    org$pandalanguage$pandac$IRNode* callTarget1802;
    org$pandalanguage$pandac$IRNode* result1808;
    panda$collections$Array* args1815;
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT $tmp1816;
    panda$collections$Array* children1832;
    org$pandalanguage$pandac$IRNode* intermediate1838;
    org$pandalanguage$pandac$ClassDecl* cl1847;
    panda$collections$Iterator* m$Iter1850;
    org$pandalanguage$pandac$MethodDecl* m1862;
    org$pandalanguage$pandac$IRNode* type1873;
    panda$collections$Array* args1879;
    panda$collections$Array* children1884;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1628 = (($fn1627) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) p_target));
    if ($tmp1628.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1629 = $tmp1630.value;
    if (!$tmp1629) goto $l1631;
    panda$core$Bit $tmp1632 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1629 = $tmp1632.value;
    $l1631:;
    panda$core$Bit $tmp1633 = { $tmp1629 };
    if ($tmp1633.value) {
    {
        panda$core$Object* $tmp1635 = (($fn1634) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1637 = (($fn1636) ((org$pandalanguage$pandac$Type*) $tmp1635)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp1635), ((panda$core$Object*) p_target));
        if ($tmp1637.value) {
        {
            panda$collections$Array* $tmp1639 = (panda$collections$Array*) malloc(40);
            $tmp1639->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1639->refCount.value = 1;
            panda$collections$Array$init($tmp1639);
            children1638 = $tmp1639;
            panda$collections$Array$add$panda$collections$Array$T(children1638, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1641 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1641->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1641->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1641, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1638));
            return $tmp1641;
        }
        }
        panda$core$Object* $tmp1645 = (($fn1644) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1647 = (($fn1646) self->$class->vtable[33])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1645));
        intermediate1643 = $tmp1647;
        org$pandalanguage$pandac$IRNode* $tmp1649 = (($fn1648) self->$class->vtable[33])(self, intermediate1643, p_target);
        return $tmp1649;
    }
    }
    {
        $match$358721650 = p_expr->kind;
        panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358721650, ((panda$core$Int64) { 1004 }));
        if ($tmp1651.value) {
        {
            panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1652 = $tmp1653.value;
            if (!$tmp1652) goto $l1654;
            panda$core$Int64 $tmp1656 = (($fn1655) self->$class->vtable[30])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1658 = (($fn1657) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1659 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1656, $tmp1658);
            $tmp1652 = $tmp1659.value;
            $l1654:;
            panda$core$Bit $tmp1660 = { $tmp1652 };
            if ($tmp1660.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1661 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1661->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1661->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1661, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1661;
            }
            }
            else {
            panda$core$Bit $tmp1664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1663 = $tmp1664.value;
            if (!$tmp1663) goto $l1665;
            panda$core$Int64 $tmp1667 = (($fn1666) self->$class->vtable[30])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1669 = (($fn1668) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1670 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1667, $tmp1669);
            $tmp1663 = $tmp1670.value;
            $l1665:;
            panda$core$Bit $tmp1671 = { $tmp1663 };
            if ($tmp1671.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1672 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1672->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1672->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1672, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1672;
            }
            }
            }
            panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1674 = $tmp1675.value;
            if (!$tmp1674) goto $l1676;
            panda$core$Bit $tmp1678 = (($fn1677) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1679 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1678);
            $tmp1674 = $tmp1679.value;
            $l1676:;
            panda$core$Bit $tmp1680 = { $tmp1674 };
            if ($tmp1680.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1683 = (($fn1682) self->$class->vtable[27])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1685 = (($fn1684) self->$class->vtable[33])(self, p_expr, $tmp1683);
                coerced1681 = $tmp1685;
                if (((panda$core$Bit) { coerced1681 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1687 = (($fn1686) self->$class->vtable[33])(self, coerced1681, p_target);
                return $tmp1687;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358721650, ((panda$core$Int64) { 1032 }));
        if ($tmp1688.value) {
        {
            panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1689 = $tmp1690.value;
            if (!$tmp1689) goto $l1691;
            panda$core$Int64 $tmp1692 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1693 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1692);
            panda$core$Int64 $tmp1695 = (($fn1694) self->$class->vtable[29])(self, $tmp1693);
            panda$core$Int64 $tmp1697 = (($fn1696) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1698 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1695, $tmp1697);
            $tmp1689 = $tmp1698.value;
            $l1691:;
            panda$core$Bit $tmp1699 = { $tmp1689 };
            if ($tmp1699.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1700 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1700->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1700->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1700, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1700;
            }
            }
            panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1702 = $tmp1703.value;
            if (!$tmp1702) goto $l1704;
            panda$core$Bit $tmp1706 = (($fn1705) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1707 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1706);
            $tmp1702 = $tmp1707.value;
            $l1704:;
            panda$core$Bit $tmp1708 = { $tmp1702 };
            if ($tmp1708.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1711 = (($fn1710) self->$class->vtable[27])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1713 = (($fn1712) self->$class->vtable[33])(self, p_expr, $tmp1711);
                coerced1709 = $tmp1713;
                if (((panda$core$Bit) { coerced1709 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1715 = (($fn1714) self->$class->vtable[33])(self, coerced1709, p_target);
                return $tmp1715;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358721650, ((panda$core$Int64) { 1011 }));
        if ($tmp1716.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1717 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1719 = (($fn1718) p_target->$class->vtable[4])(p_target, ((panda$core$Object*) $tmp1717));
            if ($tmp1719.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1720 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1720->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1720->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1720, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1720;
            }
            }
            panda$core$Bit $tmp1724 = (($fn1723) p_target->$class->vtable[8])(p_target);
            bool $tmp1722 = $tmp1724.value;
            if (!$tmp1722) goto $l1725;
            org$pandalanguage$pandac$Type* $tmp1726 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1728 = (($fn1727) p_target->$class->vtable[5])(p_target, ((panda$core$Object*) $tmp1726));
            $tmp1722 = $tmp1728.value;
            $l1725:;
            panda$core$Bit $tmp1729 = { $tmp1722 };
            if ($tmp1729.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1732 = (($fn1731) self->$class->vtable[27])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1734 = (($fn1733) self->$class->vtable[33])(self, p_expr, $tmp1732);
                varType1730 = $tmp1734;
                if (((panda$core$Bit) { varType1730 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1736 = (($fn1735) self->$class->vtable[33])(self, varType1730, p_target);
                    return $tmp1736;
                }
                }
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358721650, ((panda$core$Int64) { 1031 }));
        if ($tmp1737.value) {
        {
            panda$core$Bit $tmp1739 = (($fn1738) p_target->$class->vtable[11])(p_target);
            if ($tmp1739.value) {
            {
                panda$core$Object* $tmp1742 = (($fn1741) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1740 = ((org$pandalanguage$pandac$Type*) $tmp1742);
                panda$core$Object* $tmp1744 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1746 = (($fn1745) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1744), param1740);
                start1743 = $tmp1746;
                if (((panda$core$Bit) { start1743 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1748 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1750 = (($fn1749) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1748), param1740);
                end1747 = $tmp1750;
                if (((panda$core$Bit) { end1747 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1752 = (panda$collections$Array*) malloc(40);
                $tmp1752->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1752->refCount.value = 1;
                panda$collections$Array$init($tmp1752);
                args1751 = $tmp1752;
                panda$collections$Array$add$panda$collections$Array$T(args1751, ((panda$core$Object*) start1743));
                panda$collections$Array$add$panda$collections$Array$T(args1751, ((panda$core$Object*) end1747));
                panda$core$Object* $tmp1754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1751, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1754)));
                org$pandalanguage$pandac$IRNode* $tmp1755 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1755->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1755->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1757 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1755, ((panda$core$Int64) { 1011 }), p_expr->offset, $tmp1757, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1751, ((panda$core$Object*) $tmp1755));
                org$pandalanguage$pandac$IRNode* $tmp1759 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1759->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1759->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1761 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1759, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1761, p_target);
                target1758 = $tmp1759;
                org$pandalanguage$pandac$IRNode* $tmp1763 = (($fn1762) self->$class->vtable[42])(self, target1758, ((panda$collections$ListView*) args1751));
                return $tmp1763;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1765 = (($fn1764) self->$class->vtable[8])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1767 = (($fn1766) self->$class->vtable[33])(self, $tmp1765, p_target);
                return $tmp1767;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358721650, ((panda$core$Int64) { 1039 }));
        if ($tmp1768.value) {
        {
            panda$core$Object* $tmp1770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1769 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1770)->payload);
            panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1772, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1773 = panda$collections$Array$$IDX$panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1772);
            args1771 = $tmp1773;
            panda$collections$Array* $tmp1775 = (panda$collections$Array*) malloc(40);
            $tmp1775->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1775->refCount.value = 1;
            panda$collections$Array$init($tmp1775);
            best1774 = $tmp1775;
            bestCost1777 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1779 = ((panda$collections$Iterable*) methods1769)->$class->itable;
                while ($tmp1779->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1779 = $tmp1779->next;
                }
                $fn1781 $tmp1780 = $tmp1779->methods[0];
                panda$collections$Iterator* $tmp1782 = $tmp1780(((panda$collections$Iterable*) methods1769));
                m$Iter1778 = $tmp1782;
                $l1783:;
                ITable* $tmp1785 = m$Iter1778->$class->itable;
                while ($tmp1785->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1785 = $tmp1785->next;
                }
                $fn1787 $tmp1786 = $tmp1785->methods[0];
                panda$core$Bit $tmp1788 = $tmp1786(m$Iter1778);
                panda$core$Bit $tmp1789 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1788);
                if (!$tmp1789.value) goto $l1784;
                {
                    ITable* $tmp1791 = m$Iter1778->$class->itable;
                    while ($tmp1791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1791 = $tmp1791->next;
                    }
                    $fn1793 $tmp1792 = $tmp1791->methods[1];
                    panda$core$Object* $tmp1794 = $tmp1792(m$Iter1778);
                    m1790 = ((org$pandalanguage$pandac$MethodRef*) $tmp1794);
                    panda$core$Int64$nullable $tmp1797 = (($fn1796) self->$class->vtable[37])(self, m1790, ((panda$collections$ListView*) args1771), p_target);
                    cost1795 = $tmp1797;
                    if (((panda$core$Bit) { !cost1795.nonnull }).value) {
                    {
                        goto $l1783;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1777.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1774, ((panda$core$Object*) m1790));
                        bestCost1777 = cost1795;
                        goto $l1783;
                    }
                    }
                    panda$core$Bit $tmp1798 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1795.value), ((panda$core$Int64) bestCost1777.value));
                    if ($tmp1798.value) {
                    {
                        panda$collections$Array$clear(best1774);
                        bestCost1777 = cost1795;
                    }
                    }
                    panda$core$Bit $tmp1799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1795.value), ((panda$core$Int64) bestCost1777.value));
                    if ($tmp1799.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1774, ((panda$core$Object*) m1790));
                    }
                    }
                }
                goto $l1783;
                $l1784:;
            }
            panda$core$Int64 $tmp1800 = panda$collections$Array$get_count$R$panda$core$Int64(best1774);
            panda$core$Bit $tmp1801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1800, ((panda$core$Int64) { 1 }));
            if ($tmp1801.value) {
            {
                panda$core$Object* $tmp1803 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1804 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1803)->children);
                panda$core$Bit $tmp1805 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1804, ((panda$core$Int64) { 0 }));
                if ($tmp1805.value) {
                {
                    panda$core$Object* $tmp1806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1807 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1806)->children, ((panda$core$Int64) { 0 }));
                    callTarget1802 = ((org$pandalanguage$pandac$IRNode*) $tmp1807);
                }
                }
                else {
                {
                    callTarget1802 = NULL;
                }
                }
                panda$core$Object* $tmp1809 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1774, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1811 = (($fn1810) self->$class->vtable[39])(self, p_expr->offset, callTarget1802, ((org$pandalanguage$pandac$MethodRef*) $tmp1809), ((panda$collections$ListView*) args1771));
                result1808 = $tmp1811;
                org$pandalanguage$pandac$IRNode* $tmp1813 = (($fn1812) self->$class->vtable[33])(self, result1808, p_target);
                return $tmp1813;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358721650, ((panda$core$Int64) { 1040 }));
        if ($tmp1814.value) {
        {
            panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1816, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1817 = panda$collections$Array$$IDX$panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1816);
            args1815 = $tmp1817;
            panda$core$Object* $tmp1818 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1821 = (($fn1820) self->$class->vtable[41])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1818), &$s1819, ((panda$collections$ListView*) args1815), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1823 = (($fn1822) self->$class->vtable[33])(self, $tmp1821, p_target);
            return $tmp1823;
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1824.value) {
    {
        panda$core$Bit $tmp1825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1825.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1826 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1826->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1826->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1826, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1826;
        }
        }
        panda$core$Object* $tmp1829 = (($fn1828) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1831 = (($fn1830) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1829)));
        if ($tmp1831.value) {
        {
            panda$collections$Array* $tmp1833 = (panda$collections$Array*) malloc(40);
            $tmp1833->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1833->refCount.value = 1;
            panda$collections$Array$init($tmp1833);
            children1832 = $tmp1833;
            panda$collections$Array$add$panda$collections$Array$T(children1832, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1835 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1835->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1835->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1835, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1832));
            return $tmp1835;
        }
        }
        panda$core$Bit $tmp1837 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1837.value) {
        {
            panda$core$Object* $tmp1840 = (($fn1839) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1842 = (($fn1841) self->$class->vtable[33])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1840));
            intermediate1838 = $tmp1842;
            org$pandalanguage$pandac$IRNode* $tmp1844 = (($fn1843) self->$class->vtable[33])(self, intermediate1838, p_target);
            return $tmp1844;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1846 = (($fn1845) self->$class->vtable[31])(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1846.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1849 = (($fn1848) self->$class->vtable[14])(self, p_target);
        cl1847 = $tmp1849;
        if (((panda$core$Bit) { cl1847 != NULL }).value) {
        {
            {
                ITable* $tmp1851 = ((panda$collections$Iterable*) cl1847->methods)->$class->itable;
                while ($tmp1851->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1851 = $tmp1851->next;
                }
                $fn1853 $tmp1852 = $tmp1851->methods[0];
                panda$collections$Iterator* $tmp1854 = $tmp1852(((panda$collections$Iterable*) cl1847->methods));
                m$Iter1850 = $tmp1854;
                $l1855:;
                ITable* $tmp1857 = m$Iter1850->$class->itable;
                while ($tmp1857->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1857 = $tmp1857->next;
                }
                $fn1859 $tmp1858 = $tmp1857->methods[0];
                panda$core$Bit $tmp1860 = $tmp1858(m$Iter1850);
                panda$core$Bit $tmp1861 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1860);
                if (!$tmp1861.value) goto $l1856;
                {
                    ITable* $tmp1863 = m$Iter1850->$class->itable;
                    while ($tmp1863->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1863 = $tmp1863->next;
                    }
                    $fn1865 $tmp1864 = $tmp1863->methods[1];
                    panda$core$Object* $tmp1866 = $tmp1864(m$Iter1850);
                    m1862 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1866);
                    panda$core$Bit $tmp1868 = (($fn1867) m1862->annotations->$class->vtable[8])(m1862->annotations);
                    if ($tmp1868.value) {
                    {
                        (($fn1869) self->$class->vtable[6])(self, m1862);
                        panda$core$Object* $tmp1870 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1862->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1872 = (($fn1871) self->$class->vtable[31])(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1870)->type);
                        if (((panda$core$Bit) { $tmp1872.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1874 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1874->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1874->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1876 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1878 = (($fn1877) cl1847->$class->vtable[3])(cl1847);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1874, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1876, $tmp1878);
                            type1873 = $tmp1874;
                            panda$collections$Array* $tmp1880 = (panda$collections$Array*) malloc(40);
                            $tmp1880->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1880->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1880, ((panda$core$Int64) { 1 }));
                            args1879 = $tmp1880;
                            panda$collections$Array$add$panda$collections$Array$T(args1879, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1883 = (($fn1882) self->$class->vtable[42])(self, type1873, ((panda$collections$ListView*) args1879));
                            return $tmp1883;
                        }
                        }
                    }
                    }
                }
                goto $l1855;
                $l1856:;
            }
        }
        }
        panda$collections$Array* $tmp1885 = (panda$collections$Array*) malloc(40);
        $tmp1885->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1885->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1885, ((panda$core$Int64) { 1 }));
        children1884 = $tmp1885;
        panda$collections$Array$add$panda$collections$Array$T(children1884, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1887 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1887->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1887->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1887, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1884));
        return $tmp1887;
    }
    }
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1889, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, &$s1891);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1892, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
    (($fn1896) self->$class->vtable[96])(self, p_expr->offset, $tmp1895);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1897;
    org$pandalanguage$pandac$IRNode* $tmp1899 = (($fn1898) self->$class->vtable[32])(self, p_expr, p_target);
    result1897 = $tmp1899;
    return result1897;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Iterator* t$Iter1917;
    org$pandalanguage$pandac$Type* t1929;
    panda$core$Bit $tmp1902 = (($fn1901) p_type->$class->vtable[10])(p_type);
    bool $tmp1900 = $tmp1902.value;
    if (!$tmp1900) goto $l1903;
    panda$core$Bit $tmp1905 = (($fn1904) p_target->$class->vtable[10])(p_target);
    $tmp1900 = $tmp1905.value;
    $l1903:;
    panda$core$Bit $tmp1906 = { $tmp1900 };
    if ($tmp1906.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1908 = (($fn1907) self->$class->vtable[28])(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1908.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1911 = (($fn1910) p_type->$class->vtable[7])(p_type);
    bool $tmp1909 = $tmp1911.value;
    if (!$tmp1909) goto $l1912;
    panda$core$Bit $tmp1914 = (($fn1913) p_target->$class->vtable[7])(p_target);
    $tmp1909 = $tmp1914.value;
    $l1912:;
    panda$core$Bit $tmp1915 = { $tmp1909 };
    if ($tmp1915.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 17 }));
    if ($tmp1916.value) {
    {
        {
            ITable* $tmp1918 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
            while ($tmp1918->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1918 = $tmp1918->next;
            }
            $fn1920 $tmp1919 = $tmp1918->methods[0];
            panda$collections$Iterator* $tmp1921 = $tmp1919(((panda$collections$Iterable*) p_type->subtypes));
            t$Iter1917 = $tmp1921;
            $l1922:;
            ITable* $tmp1924 = t$Iter1917->$class->itable;
            while ($tmp1924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1924 = $tmp1924->next;
            }
            $fn1926 $tmp1925 = $tmp1924->methods[0];
            panda$core$Bit $tmp1927 = $tmp1925(t$Iter1917);
            panda$core$Bit $tmp1928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1927);
            if (!$tmp1928.value) goto $l1923;
            {
                ITable* $tmp1930 = t$Iter1917->$class->itable;
                while ($tmp1930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1930 = $tmp1930->next;
                }
                $fn1932 $tmp1931 = $tmp1930->methods[1];
                panda$core$Object* $tmp1933 = $tmp1931(t$Iter1917);
                t1929 = ((org$pandalanguage$pandac$Type*) $tmp1933);
                panda$core$Int64$nullable $tmp1935 = (($fn1934) self->$class->vtable[28])(self, t1929, p_target);
                if (((panda$core$Bit) { $tmp1935.nonnull }).value) {
                {
                    return ((panda$core$Bit) { true });
                }
                }
            }
            goto $l1922;
            $l1923:;
        }
    }
    }
    panda$core$Bit $tmp1936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1936.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1938 = (($fn1937) self->$class->vtable[28])(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1938.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable $tmp1940 = (($fn1939) self->$class->vtable[31])(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1940.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1942 = (($fn1941) self->$class->vtable[34])(self, p_node->type, p_target);
    return $tmp1942;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 $match$441741961;
    panda$collections$Array* children1981;
    panda$core$Bit $tmp1944 = (($fn1943) p_node->type->$class->vtable[4])(p_node->type, ((panda$core$Object*) p_target));
    if ($tmp1944.value) {
    {
        return p_node;
    }
    }
    bool $tmp1945 = p_isExplicit.value;
    if (!$tmp1945) goto $l1946;
    panda$core$Bit $tmp1948 = (($fn1947) self->$class->vtable[35])(self, p_node, p_target);
    panda$core$Bit $tmp1949 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1948);
    $tmp1945 = $tmp1949.value;
    $l1946:;
    panda$core$Bit $tmp1950 = { $tmp1945 };
    if ($tmp1950.value) {
    {
        panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1951, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, &$s1953);
        panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1955, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
        panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, $tmp1958);
        (($fn1960) self->$class->vtable[96])(self, p_offset, $tmp1959);
    }
    }
    {
        $match$441741961 = p_node->kind;
        panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441741961, ((panda$core$Int64) { 1004 }));
        bool $tmp1965 = $tmp1966.value;
        if ($tmp1965) goto $l1967;
        panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441741961, ((panda$core$Int64) { 1032 }));
        $tmp1965 = $tmp1968.value;
        $l1967:;
        panda$core$Bit $tmp1969 = { $tmp1965 };
        bool $tmp1964 = $tmp1969.value;
        if ($tmp1964) goto $l1970;
        panda$core$Bit $tmp1971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441741961, ((panda$core$Int64) { 1011 }));
        $tmp1964 = $tmp1971.value;
        $l1970:;
        panda$core$Bit $tmp1972 = { $tmp1964 };
        bool $tmp1963 = $tmp1972.value;
        if ($tmp1963) goto $l1973;
        panda$core$Bit $tmp1974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441741961, ((panda$core$Int64) { 1039 }));
        $tmp1963 = $tmp1974.value;
        $l1973:;
        panda$core$Bit $tmp1975 = { $tmp1963 };
        bool $tmp1962 = $tmp1975.value;
        if ($tmp1962) goto $l1976;
        panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441741961, ((panda$core$Int64) { 1040 }));
        $tmp1962 = $tmp1977.value;
        $l1976:;
        panda$core$Bit $tmp1978 = { $tmp1962 };
        if ($tmp1978.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1980 = (($fn1979) self->$class->vtable[33])(self, p_node, p_target);
            return $tmp1980;
        }
        }
    }
    panda$collections$Array* $tmp1982 = (panda$collections$Array*) malloc(40);
    $tmp1982->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1982->refCount.value = 1;
    panda$collections$Array$init($tmp1982);
    children1981 = $tmp1982;
    panda$collections$Array$add$panda$collections$Array$T(children1981, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1984 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1984->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1984->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1984, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1981));
    return $tmp1984;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1993;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1994;
    panda$core$Int64$nullable cost2015;
    panda$core$Int64$nullable cost2036;
    panda$core$Int64 $tmp1987 = (($fn1986) p_m->$class->vtable[3])(p_m);
    ITable* $tmp1988 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1988->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1988 = $tmp1988->next;
    }
    $fn1990 $tmp1989 = $tmp1988->methods[0];
    panda$core$Int64 $tmp1991 = $tmp1989(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1992 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1987, $tmp1991);
    if ($tmp1992.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1993 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1996 = (($fn1995) p_m->$class->vtable[3])(p_m);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1994, ((panda$core$Int64) { 0 }), $tmp1996, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1998 = $tmp1994.start.value;
    panda$core$Int64 i1997 = { $tmp1998 };
    int64_t $tmp2000 = $tmp1994.end.value;
    int64_t $tmp2001 = $tmp1994.step.value;
    bool $tmp2002 = $tmp1994.inclusive.value;
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
        org$pandalanguage$pandac$Type* $tmp2021 = (($fn2020) p_m->$class->vtable[4])(p_m, i1997);
        panda$core$Int64$nullable $tmp2023 = (($fn2022) self->$class->vtable[31])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2019), $tmp2021);
        cost2015 = $tmp2023;
        if (((panda$core$Bit) { !cost2015.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2024 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1993, ((panda$core$Int64) cost2015.value));
        result1993 = $tmp2024;
    }
    $l2006:;
    if ($tmp2009) goto $l2026; else goto $l2027;
    $l2026:;
    int64_t $tmp2028 = $tmp2000 - i1997.value;
    if ($tmp2002) goto $l2029; else goto $l2030;
    $l2029:;
    if ($tmp2028 >= $tmp2001) goto $l2025; else goto $l2005;
    $l2030:;
    if ($tmp2028 > $tmp2001) goto $l2025; else goto $l2005;
    $l2027:;
    int64_t $tmp2032 = i1997.value - $tmp2000;
    if ($tmp2002) goto $l2033; else goto $l2034;
    $l2033:;
    if ($tmp2032 >= -$tmp2001) goto $l2025; else goto $l2005;
    $l2034:;
    if ($tmp2032 > -$tmp2001) goto $l2025; else goto $l2005;
    $l2025:;
    i1997.value += $tmp2001;
    goto $l2003;
    $l2005:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2038 = (($fn2037) p_m->$class->vtable[5])(p_m);
        panda$core$Int64$nullable $tmp2040 = (($fn2039) self->$class->vtable[28])(self, $tmp2038, p_expectedReturn);
        cost2036 = $tmp2040;
        if (((panda$core$Bit) { !cost2036.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2041 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1993, ((panda$core$Int64) cost2036.value));
        result1993 = $tmp2041;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2045 = (($fn2044) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
    panda$core$Bit $tmp2047 = (($fn2046) $tmp2045->$class->vtable[6])($tmp2045);
    bool $tmp2043 = $tmp2047.value;
    if (!$tmp2043) goto $l2048;
    ITable* $tmp2049 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2049->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2049 = $tmp2049->next;
    }
    $fn2051 $tmp2050 = $tmp2049->methods[0];
    panda$core$Int64 $tmp2052 = $tmp2050(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2052, ((panda$core$Int64) { 1 }));
    $tmp2043 = $tmp2053.value;
    $l2048:;
    panda$core$Bit $tmp2054 = { $tmp2043 };
    bool $tmp2042 = $tmp2054.value;
    if (!$tmp2042) goto $l2055;
    panda$core$Object* $tmp2056 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2058 = (($fn2057) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
    panda$core$Bit $tmp2060 = (($fn2059) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2056)->type->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2056)->type, ((panda$core$Object*) $tmp2058));
    $tmp2042 = $tmp2060.value;
    $l2055:;
    panda$core$Bit $tmp2061 = { $tmp2042 };
    if ($tmp2061.value) {
    {
        panda$core$Int64 $tmp2062 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1993, ((panda$core$Int64) { 1 }));
        result1993 = $tmp2062;
    }
    }
    return ((panda$core$Int64$nullable) { result1993, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2063;
    panda$core$Int64$nullable best2066;
    panda$collections$Iterator* m$Iter2067;
    org$pandalanguage$pandac$MethodRef* m2079;
    panda$core$Int64$nullable cost2084;
    panda$collections$Array* $tmp2064 = (panda$collections$Array*) malloc(40);
    $tmp2064->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2064->refCount.value = 1;
    panda$collections$Array$init($tmp2064);
    result2063 = $tmp2064;
    best2066 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2068 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2068->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2068 = $tmp2068->next;
        }
        $fn2070 $tmp2069 = $tmp2068->methods[0];
        panda$collections$Iterator* $tmp2071 = $tmp2069(((panda$collections$Iterable*) p_methods));
        m$Iter2067 = $tmp2071;
        $l2072:;
        ITable* $tmp2074 = m$Iter2067->$class->itable;
        while ($tmp2074->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2074 = $tmp2074->next;
        }
        $fn2076 $tmp2075 = $tmp2074->methods[0];
        panda$core$Bit $tmp2077 = $tmp2075(m$Iter2067);
        panda$core$Bit $tmp2078 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2077);
        if (!$tmp2078.value) goto $l2073;
        {
            ITable* $tmp2080 = m$Iter2067->$class->itable;
            while ($tmp2080->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2080 = $tmp2080->next;
            }
            $fn2082 $tmp2081 = $tmp2080->methods[1];
            panda$core$Object* $tmp2083 = $tmp2081(m$Iter2067);
            m2079 = ((org$pandalanguage$pandac$MethodRef*) $tmp2083);
            panda$core$Int64$nullable $tmp2086 = (($fn2085) self->$class->vtable[37])(self, m2079, p_args, p_expectedReturn);
            cost2084 = $tmp2086;
            if (((panda$core$Bit) { !cost2084.nonnull }).value) {
            {
                goto $l2072;
            }
            }
            bool $tmp2087 = ((panda$core$Bit) { !best2066.nonnull }).value;
            if ($tmp2087) goto $l2088;
            panda$core$Bit $tmp2089 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2084.value), ((panda$core$Int64) best2066.value));
            $tmp2087 = $tmp2089.value;
            $l2088:;
            panda$core$Bit $tmp2090 = { $tmp2087 };
            if ($tmp2090.value) {
            {
                panda$collections$Array$clear(result2063);
                best2066 = cost2084;
            }
            }
            panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2084.value), ((panda$core$Int64) best2066.value));
            if ($tmp2091.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2063, ((panda$core$Object*) m2079));
            }
            }
        }
        goto $l2072;
        $l2073:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2063));
    return best2066;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs2092;
    org$pandalanguage$pandac$IRNode* selfNode2137;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp2160;
    org$pandalanguage$pandac$IRNode* coerced2183;
    org$pandalanguage$pandac$IRNode* result2206;
    panda$collections$Array* $tmp2093 = (panda$collections$Array*) malloc(40);
    $tmp2093->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2093->refCount.value = 1;
    panda$collections$Array$init($tmp2093);
    finalArgs2092 = $tmp2093;
    bool $tmp2096 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2096) goto $l2097;
    panda$core$Bit $tmp2098 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2096 = $tmp2098.value;
    $l2097:;
    panda$core$Bit $tmp2099 = { $tmp2096 };
    bool $tmp2095 = $tmp2099.value;
    if (!$tmp2095) goto $l2100;
    panda$core$Bit $tmp2102 = (($fn2101) p_m->value->annotations->$class->vtable[5])(p_m->value->annotations);
    panda$core$Bit $tmp2103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2102);
    $tmp2095 = $tmp2103.value;
    $l2100:;
    panda$core$Bit $tmp2104 = { $tmp2095 };
    if ($tmp2104.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2106 = (($fn2105) p_m->$class->vtable[2])(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2108 = (($fn2107) self->$class->vtable[36])(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp2106);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2092, ((panda$core$Object*) $tmp2108));
    }
    }
    panda$core$Bit $tmp2109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2109.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2111 = (($fn2110) self->currentMethod->$class->vtable[4])(self->currentMethod);
            panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2111)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2112.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2113 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2113->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2113->refCount.value = 1;
                panda$core$Object* $tmp2116 = (($fn2115) self->currentClass->$class->vtable[4])(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2118 = (($fn2117) ((org$pandalanguage$pandac$ClassDecl*) $tmp2116)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp2116));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2113, ((panda$core$Int64) { 1025 }), p_offset, $tmp2118);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2092, ((panda$core$Object*) $tmp2113));
            }
            }
            else {
            {
                (($fn2120) self->$class->vtable[96])(self, p_offset, &$s2119);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2123 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2122 = $tmp2123.value;
        if (!$tmp2122) goto $l2124;
        panda$core$Bit $tmp2125 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2122 = $tmp2125.value;
        $l2124:;
        panda$core$Bit $tmp2126 = { $tmp2122 };
        bool $tmp2121 = $tmp2126.value;
        if (!$tmp2121) goto $l2127;
        panda$core$Bit $tmp2128 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2121 = $tmp2128.value;
        $l2127:;
        panda$core$Bit $tmp2129 = { $tmp2121 };
        if ($tmp2129.value) {
        {
            (($fn2131) self->$class->vtable[96])(self, p_offset, &$s2130);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2134 = (($fn2133) p_m->value->$class->vtable[4])(p_m->value);
    bool $tmp2132 = $tmp2134.value;
    if (!$tmp2132) goto $l2135;
    $tmp2132 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2135:;
    panda$core$Bit $tmp2136 = { $tmp2132 };
    if ($tmp2136.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2138 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2138->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2138->refCount.value = 1;
        panda$core$Object* $tmp2141 = (($fn2140) self->currentClass->$class->vtable[4])(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2143 = (($fn2142) ((org$pandalanguage$pandac$ClassDecl*) $tmp2141)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp2141));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2138, ((panda$core$Int64) { 1025 }), p_offset, $tmp2143);
        selfNode2137 = $tmp2138;
        org$pandalanguage$pandac$Type* $tmp2145 = (($fn2144) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2147 = (($fn2146) self->$class->vtable[33])(self, selfNode2137, $tmp2145);
        selfNode2137 = $tmp2147;
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2092, ((panda$core$Object*) selfNode2137));
        panda$core$Object* $tmp2149 = (($fn2148) self->currentMethod->$class->vtable[4])(self->currentMethod);
        panda$core$Bit $tmp2151 = (($fn2150) ((org$pandalanguage$pandac$MethodDecl*) $tmp2149)->$class->vtable[4])(((org$pandalanguage$pandac$MethodDecl*) $tmp2149));
        panda$core$Bit $tmp2152 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2151);
        if ($tmp2152.value) {
        {
            panda$core$String* $tmp2155 = (($fn2154) p_m->value->$class->vtable[6])(p_m->value);
            panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2153, $tmp2155);
            panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2157);
            (($fn2159) self->$class->vtable[96])(self, p_offset, $tmp2158);
        }
        }
    }
    }
    }
    ITable* $tmp2161 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2161->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2161 = $tmp2161->next;
    }
    $fn2163 $tmp2162 = $tmp2161->methods[0];
    panda$core$Int64 $tmp2164 = $tmp2162(((panda$collections$CollectionView*) p_args));
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2160, ((panda$core$Int64) { 0 }), $tmp2164, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2166 = $tmp2160.start.value;
    panda$core$Int64 i2165 = { $tmp2166 };
    int64_t $tmp2168 = $tmp2160.end.value;
    int64_t $tmp2169 = $tmp2160.step.value;
    bool $tmp2170 = $tmp2160.inclusive.value;
    bool $tmp2177 = $tmp2169 > 0;
    if ($tmp2177) goto $l2175; else goto $l2176;
    $l2175:;
    if ($tmp2170) goto $l2178; else goto $l2179;
    $l2178:;
    if ($tmp2166 <= $tmp2168) goto $l2171; else goto $l2173;
    $l2179:;
    if ($tmp2166 < $tmp2168) goto $l2171; else goto $l2173;
    $l2176:;
    if ($tmp2170) goto $l2180; else goto $l2181;
    $l2180:;
    if ($tmp2166 >= $tmp2168) goto $l2171; else goto $l2173;
    $l2181:;
    if ($tmp2166 > $tmp2168) goto $l2171; else goto $l2173;
    $l2171:;
    {
        ITable* $tmp2184 = p_args->$class->itable;
        while ($tmp2184->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2184 = $tmp2184->next;
        }
        $fn2186 $tmp2185 = $tmp2184->methods[0];
        panda$core$Object* $tmp2187 = $tmp2185(p_args, i2165);
        org$pandalanguage$pandac$Type* $tmp2189 = (($fn2188) p_m->$class->vtable[4])(p_m, i2165);
        org$pandalanguage$pandac$IRNode* $tmp2191 = (($fn2190) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2187), $tmp2189);
        coerced2183 = $tmp2191;
        if (((panda$core$Bit) { coerced2183 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2192 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2165);
        org$pandalanguage$pandac$IRNode* $tmp2194 = (($fn2193) self->$class->vtable[36])(self, coerced2183, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2192)->type);
        coerced2183 = $tmp2194;
        if (((panda$core$Bit) { coerced2183 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2092, ((panda$core$Object*) coerced2183));
    }
    $l2174:;
    if ($tmp2177) goto $l2196; else goto $l2197;
    $l2196:;
    int64_t $tmp2198 = $tmp2168 - i2165.value;
    if ($tmp2170) goto $l2199; else goto $l2200;
    $l2199:;
    if ($tmp2198 >= $tmp2169) goto $l2195; else goto $l2173;
    $l2200:;
    if ($tmp2198 > $tmp2169) goto $l2195; else goto $l2173;
    $l2197:;
    int64_t $tmp2202 = i2165.value - $tmp2168;
    if ($tmp2170) goto $l2203; else goto $l2204;
    $l2203:;
    if ($tmp2202 >= -$tmp2169) goto $l2195; else goto $l2173;
    $l2204:;
    if ($tmp2202 > -$tmp2169) goto $l2195; else goto $l2173;
    $l2195:;
    i2165.value += $tmp2169;
    goto $l2171;
    $l2173:;
    panda$core$Bit $tmp2208 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2207);
    if ($tmp2208.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2209 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2209->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2209->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2212 = (($fn2211) p_m->$class->vtable[5])(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2209, ((panda$core$Int64) { 1005 }), p_offset, $tmp2212, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2092));
        result2206 = $tmp2209;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2213 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2213->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2213->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2213, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2092));
        result2206 = $tmp2213;
        org$pandalanguage$pandac$Type* $tmp2216 = (($fn2215) p_m->$class->vtable[5])(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2218 = (($fn2217) self->$class->vtable[36])(self, result2206, p_offset, ((panda$core$Bit) { false }), $tmp2216);
        result2206 = $tmp2218;
    }
    }
    return result2206;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2220 = (($fn2219) self->$class->vtable[41])(self, p_target, p_name, p_args, NULL);
    return $tmp2220;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2221;
    org$pandalanguage$pandac$ClassDecl* cl2224;
    org$pandalanguage$pandac$Symbol* s2230;
    org$pandalanguage$pandac$IRNode* ref2256;
    org$pandalanguage$pandac$IRNode* $tmp2223 = (($fn2222) self->$class->vtable[8])(self, p_target);
    resolved2221 = $tmp2223;
    if (((panda$core$Bit) { resolved2221 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2221->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2225.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2227 = (($fn2226) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) resolved2221->payload));
        cl2224 = $tmp2227;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2229 = (($fn2228) self->$class->vtable[14])(self, resolved2221->type);
        cl2224 = $tmp2229;
    }
    }
    if (((panda$core$Bit) { cl2224 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2232 = (($fn2231) self->$class->vtable[20])(self, cl2224);
    org$pandalanguage$pandac$Symbol* $tmp2234 = (($fn2233) $tmp2232->$class->vtable[6])($tmp2232, p_name);
    s2230 = $tmp2234;
    if (((panda$core$Bit) { s2230 == NULL }).value) {
    {
        panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2235, ((org$pandalanguage$pandac$Symbol*) cl2224)->name);
        panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2237);
        panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, p_name);
        panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, &$s2240);
        (($fn2242) self->$class->vtable[96])(self, p_target->offset, $tmp2241);
        return NULL;
    }
    }
    panda$core$Bit $tmp2244 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2230->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2243 = $tmp2244.value;
    if (!$tmp2243) goto $l2245;
    panda$core$Bit $tmp2246 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2230->kind, ((panda$core$Int64) { 205 }));
    $tmp2243 = $tmp2246.value;
    $l2245:;
    panda$core$Bit $tmp2247 = { $tmp2243 };
    if ($tmp2247.value) {
    {
        panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2248, ((org$pandalanguage$pandac$Symbol*) cl2224)->name);
        panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
        panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, p_name);
        panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
        (($fn2255) self->$class->vtable[96])(self, p_target->offset, $tmp2254);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2258 = (($fn2257) self->$class->vtable[20])(self, cl2224);
    org$pandalanguage$pandac$IRNode* $tmp2260 = (($fn2259) self->$class->vtable[24])(self, p_target->offset, p_target, s2230, $tmp2258);
    ref2256 = $tmp2260;
    if (((panda$core$Bit) { ref2256 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2262 = (($fn2261) self->$class->vtable[43])(self, ref2256, p_args, p_expectedType);
    return $tmp2262;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2264 = (($fn2263) self->$class->vtable[43])(self, p_m, p_args, NULL);
    return $tmp2264;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    panda$core$Int64 $match$499082265;
    org$pandalanguage$pandac$IRNode* target2267;
    panda$collections$Array* methods2274;
    org$pandalanguage$pandac$MethodDecl* first2280;
    panda$core$MutableString* msg2285;
    panda$core$String* separator2297;
    panda$collections$Iterator* a$Iter2299;
    org$pandalanguage$pandac$IRNode* a2311;
    org$pandalanguage$pandac$IRNode* target2331;
    panda$collections$Array* children2338;
    panda$collections$Array* types2344;
    panda$collections$Iterator* m$Iter2347;
    org$pandalanguage$pandac$MethodRef* m2359;
    org$pandalanguage$pandac$IRNode* target2371;
    org$pandalanguage$pandac$IRNode* initCall2374;
    panda$collections$Array* children2380;
    org$pandalanguage$pandac$IRNode* resolved2385;
    {
        $match$499082265 = p_m->kind;
        panda$core$Bit $tmp2266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$499082265, ((panda$core$Int64) { 1002 }));
        if ($tmp2266.value) {
        {
            panda$core$Int64 $tmp2268 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2268, ((panda$core$Int64) { 0 }));
            if ($tmp2269.value) {
            {
                target2267 = NULL;
            }
            }
            else {
            {
                panda$core$Object* $tmp2270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2267 = ((org$pandalanguage$pandac$IRNode*) $tmp2270);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2272 = (($fn2271) self->$class->vtable[39])(self, p_m->offset, target2267, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2272;
        }
        }
        else {
        panda$core$Bit $tmp2273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$499082265, ((panda$core$Int64) { 1003 }));
        if ($tmp2273.value) {
        {
            panda$collections$Array* $tmp2275 = (panda$collections$Array*) malloc(40);
            $tmp2275->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2275->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2275, ((panda$collections$ListView*) p_m->payload));
            methods2274 = $tmp2275;
            (($fn2277) self->$class->vtable[38])(self, methods2274, p_args, p_expectedType);
            panda$core$Int64 $tmp2278 = panda$collections$Array$get_count$R$panda$core$Int64(methods2274);
            panda$core$Bit $tmp2279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2278, ((panda$core$Int64) { 0 }));
            if ($tmp2279.value) {
            {
                ITable* $tmp2281 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2281->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2281 = $tmp2281->next;
                }
                $fn2283 $tmp2282 = $tmp2281->methods[0];
                panda$core$Object* $tmp2284 = $tmp2282(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2280 = ((org$pandalanguage$pandac$MethodRef*) $tmp2284)->value;
                panda$core$MutableString* $tmp2286 = (panda$core$MutableString*) malloc(40);
                $tmp2286->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2286->refCount.value = 1;
                panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2288, ((org$pandalanguage$pandac$Symbol*) first2280->owner)->name);
                panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, &$s2290);
                panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2292, ((org$pandalanguage$pandac$Symbol*) first2280)->name);
                panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
                panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, $tmp2295);
                panda$core$MutableString$init$panda$core$String($tmp2286, $tmp2296);
                msg2285 = $tmp2286;
                separator2297 = &$s2298;
                {
                    ITable* $tmp2300 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2300->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2300 = $tmp2300->next;
                    }
                    $fn2302 $tmp2301 = $tmp2300->methods[0];
                    panda$collections$Iterator* $tmp2303 = $tmp2301(((panda$collections$Iterable*) p_args));
                    a$Iter2299 = $tmp2303;
                    $l2304:;
                    ITable* $tmp2306 = a$Iter2299->$class->itable;
                    while ($tmp2306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2306 = $tmp2306->next;
                    }
                    $fn2308 $tmp2307 = $tmp2306->methods[0];
                    panda$core$Bit $tmp2309 = $tmp2307(a$Iter2299);
                    panda$core$Bit $tmp2310 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2309);
                    if (!$tmp2310.value) goto $l2305;
                    {
                        ITable* $tmp2312 = a$Iter2299->$class->itable;
                        while ($tmp2312->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2312 = $tmp2312->next;
                        }
                        $fn2314 $tmp2313 = $tmp2312->methods[1];
                        panda$core$Object* $tmp2315 = $tmp2313(a$Iter2299);
                        a2311 = ((org$pandalanguage$pandac$IRNode*) $tmp2315);
                        (($fn2316) msg2285->$class->vtable[3])(msg2285, separator2297);
                        (($fn2317) msg2285->$class->vtable[5])(msg2285, ((panda$core$Object*) a2311->type));
                        separator2297 = &$s2318;
                    }
                    goto $l2304;
                    $l2305:;
                }
                (($fn2320) msg2285->$class->vtable[3])(msg2285, &$s2319);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2321, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, &$s2323);
                    (($fn2325) msg2285->$class->vtable[3])(msg2285, $tmp2324);
                }
                }
                panda$core$String* $tmp2327 = (($fn2326) msg2285->$class->vtable[0])(msg2285);
                (($fn2328) self->$class->vtable[96])(self, p_m->offset, $tmp2327);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2329 = panda$collections$Array$get_count$R$panda$core$Int64(methods2274);
            panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2329, ((panda$core$Int64) { 1 }));
            if ($tmp2330.value) {
            {
                panda$core$Int64 $tmp2332 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2332, ((panda$core$Int64) { 1 }));
                if ($tmp2333.value) {
                {
                    panda$core$Object* $tmp2334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2331 = ((org$pandalanguage$pandac$IRNode*) $tmp2334);
                }
                }
                else {
                {
                    target2331 = NULL;
                }
                }
                panda$core$Object* $tmp2335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2274, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2337 = (($fn2336) self->$class->vtable[39])(self, p_m->offset, target2331, ((org$pandalanguage$pandac$MethodRef*) $tmp2335), p_args);
                return $tmp2337;
            }
            }
            panda$collections$Array* $tmp2339 = (panda$collections$Array*) malloc(40);
            $tmp2339->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2339->refCount.value = 1;
            panda$collections$Array$init($tmp2339);
            children2338 = $tmp2339;
            org$pandalanguage$pandac$IRNode* $tmp2341 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2341->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2341->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2343 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2341, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp2343, ((panda$core$Object*) methods2274), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2338, ((panda$core$Object*) $tmp2341));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2338, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2345 = (panda$collections$Array*) malloc(40);
            $tmp2345->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2345->refCount.value = 1;
            panda$collections$Array$init($tmp2345);
            types2344 = $tmp2345;
            {
                ITable* $tmp2348 = ((panda$collections$Iterable*) methods2274)->$class->itable;
                while ($tmp2348->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2348 = $tmp2348->next;
                }
                $fn2350 $tmp2349 = $tmp2348->methods[0];
                panda$collections$Iterator* $tmp2351 = $tmp2349(((panda$collections$Iterable*) methods2274));
                m$Iter2347 = $tmp2351;
                $l2352:;
                ITable* $tmp2354 = m$Iter2347->$class->itable;
                while ($tmp2354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2354 = $tmp2354->next;
                }
                $fn2356 $tmp2355 = $tmp2354->methods[0];
                panda$core$Bit $tmp2357 = $tmp2355(m$Iter2347);
                panda$core$Bit $tmp2358 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2357);
                if (!$tmp2358.value) goto $l2353;
                {
                    ITable* $tmp2360 = m$Iter2347->$class->itable;
                    while ($tmp2360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2360 = $tmp2360->next;
                    }
                    $fn2362 $tmp2361 = $tmp2360->methods[1];
                    panda$core$Object* $tmp2363 = $tmp2361(m$Iter2347);
                    m2359 = ((org$pandalanguage$pandac$MethodRef*) $tmp2363);
                    org$pandalanguage$pandac$Type* $tmp2365 = (($fn2364) m2359->$class->vtable[5])(m2359);
                    panda$collections$Array$add$panda$collections$Array$T(types2344, ((panda$core$Object*) $tmp2365));
                }
                goto $l2352;
                $l2353:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2366 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2366->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2366->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2368 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp2368->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2368->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2368, ((panda$collections$ListView*) types2344));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2366, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp2368, ((panda$collections$ListView*) children2338));
            return $tmp2366;
        }
        }
        else {
        panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$499082265, ((panda$core$Int64) { 1001 }));
        if ($tmp2370.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2372 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2372->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2372->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2372, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2371 = $tmp2372;
            org$pandalanguage$pandac$IRNode* $tmp2377 = (($fn2376) self->$class->vtable[40])(self, target2371, &$s2375, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2379 = (($fn2378) self->$class->vtable[8])(self, $tmp2377);
            initCall2374 = $tmp2379;
            if (((panda$core$Bit) { initCall2374 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2381 = (panda$collections$Array*) malloc(40);
            $tmp2381->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2381->refCount.value = 1;
            panda$collections$Array$init($tmp2381);
            children2380 = $tmp2381;
            panda$collections$Array$add$panda$collections$Array$T(children2380, ((panda$core$Object*) initCall2374));
            org$pandalanguage$pandac$IRNode* $tmp2383 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2383->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2383->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2383, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2380));
            return $tmp2383;
        }
        }
        else {
        {
            org$pandalanguage$pandac$IRNode* $tmp2387 = (($fn2386) self->$class->vtable[8])(self, p_m);
            resolved2385 = $tmp2387;
            if (((panda$core$Bit) { resolved2385 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2388, ((panda$core$Object*) resolved2385->type));
            panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, &$s2390);
            (($fn2392) self->$class->vtable[96])(self, resolved2385->offset, $tmp2391);
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2394;
    panda$core$MutableString* typeName2397;
    panda$core$String* separator2401;
    panda$collections$Iterator* p$Iter2403;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2415;
    panda$core$Int64 kind2423;
    (($fn2393) self->$class->vtable[6])(self, p_m);
    panda$collections$Array* $tmp2395 = (panda$collections$Array*) malloc(40);
    $tmp2395->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2395->refCount.value = 1;
    panda$collections$Array$init($tmp2395);
    subtypes2394 = $tmp2395;
    panda$core$MutableString* $tmp2398 = (panda$core$MutableString*) malloc(40);
    $tmp2398->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2398->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2398, &$s2400);
    typeName2397 = $tmp2398;
    separator2401 = &$s2402;
    {
        ITable* $tmp2404 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2404->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2404 = $tmp2404->next;
        }
        $fn2406 $tmp2405 = $tmp2404->methods[0];
        panda$collections$Iterator* $tmp2407 = $tmp2405(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2403 = $tmp2407;
        $l2408:;
        ITable* $tmp2410 = p$Iter2403->$class->itable;
        while ($tmp2410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2410 = $tmp2410->next;
        }
        $fn2412 $tmp2411 = $tmp2410->methods[0];
        panda$core$Bit $tmp2413 = $tmp2411(p$Iter2403);
        panda$core$Bit $tmp2414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2413);
        if (!$tmp2414.value) goto $l2409;
        {
            ITable* $tmp2416 = p$Iter2403->$class->itable;
            while ($tmp2416->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2416 = $tmp2416->next;
            }
            $fn2418 $tmp2417 = $tmp2416->methods[1];
            panda$core$Object* $tmp2419 = $tmp2417(p$Iter2403);
            p2415 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2419);
            (($fn2420) typeName2397->$class->vtable[3])(typeName2397, separator2401);
            (($fn2421) typeName2397->$class->vtable[3])(typeName2397, ((org$pandalanguage$pandac$Symbol*) p2415->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2394, ((panda$core$Object*) p2415->type));
            separator2401 = &$s2422;
        }
        goto $l2408;
        $l2409:;
    }
    panda$core$Bit $tmp2424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2424.value) {
    {
        (($fn2426) typeName2397->$class->vtable[3])(typeName2397, &$s2425);
        kind2423 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        (($fn2428) typeName2397->$class->vtable[3])(typeName2397, &$s2427);
        kind2423 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2394, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2429 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2431 = (($fn2430) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp2429));
    if ($tmp2431.value) {
    {
        (($fn2432) typeName2397->$class->vtable[3])(typeName2397, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    (($fn2434) typeName2397->$class->vtable[3])(typeName2397, &$s2433);
    org$pandalanguage$pandac$Type* $tmp2435 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2435->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2435->refCount.value = 1;
    panda$core$String* $tmp2438 = (($fn2437) typeName2397->$class->vtable[0])(typeName2397);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2435, $tmp2438, kind2423, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2394), ((panda$core$Bit) { true }));
    return $tmp2435;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2440;
    panda$core$MutableString* typeName2443;
    panda$collections$Iterator* p$Iter2448;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2460;
    panda$core$Int64 kind2468;
    (($fn2439) self->$class->vtable[6])(self, p_m);
    panda$collections$Array* $tmp2441 = (panda$collections$Array*) malloc(40);
    $tmp2441->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2441->refCount.value = 1;
    panda$collections$Array$init($tmp2441);
    subtypes2440 = $tmp2441;
    panda$core$MutableString* $tmp2444 = (panda$core$MutableString*) malloc(40);
    $tmp2444->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2444->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2444, &$s2446);
    typeName2443 = $tmp2444;
    (($fn2447) typeName2443->$class->vtable[3])(typeName2443, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2440, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2449 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2449->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2449 = $tmp2449->next;
        }
        $fn2451 $tmp2450 = $tmp2449->methods[0];
        panda$collections$Iterator* $tmp2452 = $tmp2450(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2448 = $tmp2452;
        $l2453:;
        ITable* $tmp2455 = p$Iter2448->$class->itable;
        while ($tmp2455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2455 = $tmp2455->next;
        }
        $fn2457 $tmp2456 = $tmp2455->methods[0];
        panda$core$Bit $tmp2458 = $tmp2456(p$Iter2448);
        panda$core$Bit $tmp2459 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2458);
        if (!$tmp2459.value) goto $l2454;
        {
            ITable* $tmp2461 = p$Iter2448->$class->itable;
            while ($tmp2461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2461 = $tmp2461->next;
            }
            $fn2463 $tmp2462 = $tmp2461->methods[1];
            panda$core$Object* $tmp2464 = $tmp2462(p$Iter2448);
            p2460 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2464);
            (($fn2466) typeName2443->$class->vtable[3])(typeName2443, &$s2465);
            (($fn2467) typeName2443->$class->vtable[3])(typeName2443, ((org$pandalanguage$pandac$Symbol*) p2460->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2440, ((panda$core$Object*) p2460->type));
        }
        goto $l2453;
        $l2454:;
    }
    panda$core$Bit $tmp2469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2469.value) {
    {
        (($fn2471) typeName2443->$class->vtable[3])(typeName2443, &$s2470);
        kind2468 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        (($fn2473) typeName2443->$class->vtable[3])(typeName2443, &$s2472);
        kind2468 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2440, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2474 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2476 = (($fn2475) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp2474));
    if ($tmp2476.value) {
    {
        (($fn2477) typeName2443->$class->vtable[3])(typeName2443, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    (($fn2479) typeName2443->$class->vtable[3])(typeName2443, &$s2478);
    org$pandalanguage$pandac$Type* $tmp2480 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2480->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2480->refCount.value = 1;
    panda$core$String* $tmp2483 = (($fn2482) typeName2443->$class->vtable[0])(typeName2443);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2480, $tmp2483, kind2468, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2440), ((panda$core$Bit) { true }));
    return $tmp2480;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2484;
    org$pandalanguage$pandac$MethodDecl* $tmp2486 = (($fn2485) self->$class->vtable[18])(self, p_m);
    inherited2484 = $tmp2486;
    if (((panda$core$Bit) { inherited2484 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2488 = (($fn2487) self->$class->vtable[44])(self, p_m);
        return $tmp2488;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2490 = (($fn2489) self->$class->vtable[46])(self, inherited2484);
    return $tmp2490;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2492 = (($fn2491) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2494 = (($fn2493) self->$class->vtable[48])(self, p_m, $tmp2492);
    return $tmp2494;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2495;
    org$pandalanguage$pandac$MethodDecl* $tmp2497 = (($fn2496) self->$class->vtable[18])(self, p_m);
    inherited2495 = $tmp2497;
    if (((panda$core$Bit) { inherited2495 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2499 = (($fn2498) self->$class->vtable[45])(self, p_m, p_selfType);
        return $tmp2499;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2501 = (($fn2500) self->$class->vtable[48])(self, inherited2495, p_selfType);
    return $tmp2501;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    panda$core$Int64 $match$553692502;
    {
        $match$553692502 = p_op;
        panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 51 }));
        if ($tmp2503.value) {
        {
            return &$s2504;
        }
        }
        else {
        panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 52 }));
        if ($tmp2505.value) {
        {
            return &$s2506;
        }
        }
        else {
        panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 53 }));
        if ($tmp2507.value) {
        {
            return &$s2508;
        }
        }
        else {
        panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 54 }));
        if ($tmp2509.value) {
        {
            return &$s2510;
        }
        }
        else {
        panda$core$Bit $tmp2511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 55 }));
        if ($tmp2511.value) {
        {
            return &$s2512;
        }
        }
        else {
        panda$core$Bit $tmp2513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 56 }));
        if ($tmp2513.value) {
        {
            return &$s2514;
        }
        }
        else {
        panda$core$Bit $tmp2515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 57 }));
        if ($tmp2515.value) {
        {
            return &$s2516;
        }
        }
        else {
        panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 58 }));
        if ($tmp2517.value) {
        {
            return &$s2518;
        }
        }
        else {
        panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 59 }));
        if ($tmp2519.value) {
        {
            return &$s2520;
        }
        }
        else {
        panda$core$Bit $tmp2521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 63 }));
        if ($tmp2521.value) {
        {
            return &$s2522;
        }
        }
        else {
        panda$core$Bit $tmp2523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 62 }));
        if ($tmp2523.value) {
        {
            return &$s2524;
        }
        }
        else {
        panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 65 }));
        if ($tmp2525.value) {
        {
            return &$s2526;
        }
        }
        else {
        panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 64 }));
        if ($tmp2527.value) {
        {
            return &$s2528;
        }
        }
        else {
        panda$core$Bit $tmp2529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 68 }));
        if ($tmp2529.value) {
        {
            return &$s2530;
        }
        }
        else {
        panda$core$Bit $tmp2531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 69 }));
        if ($tmp2531.value) {
        {
            return &$s2532;
        }
        }
        else {
        panda$core$Bit $tmp2533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 66 }));
        if ($tmp2533.value) {
        {
            return &$s2534;
        }
        }
        else {
        panda$core$Bit $tmp2535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 67 }));
        if ($tmp2535.value) {
        {
            return &$s2536;
        }
        }
        else {
        panda$core$Bit $tmp2537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 70 }));
        if ($tmp2537.value) {
        {
            return &$s2538;
        }
        }
        else {
        panda$core$Bit $tmp2539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 71 }));
        if ($tmp2539.value) {
        {
            return &$s2540;
        }
        }
        else {
        panda$core$Bit $tmp2541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 49 }));
        if ($tmp2541.value) {
        {
            return &$s2542;
        }
        }
        else {
        panda$core$Bit $tmp2543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 50 }));
        if ($tmp2543.value) {
        {
            return &$s2544;
        }
        }
        else {
        panda$core$Bit $tmp2545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 72 }));
        if ($tmp2545.value) {
        {
            return &$s2546;
        }
        }
        else {
        panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 1 }));
        if ($tmp2547.value) {
        {
            return &$s2548;
        }
        }
        else {
        panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 101 }));
        if ($tmp2549.value) {
        {
            return &$s2550;
        }
        }
        else {
        panda$core$Bit $tmp2551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 73 }));
        if ($tmp2551.value) {
        {
            return &$s2552;
        }
        }
        else {
        panda$core$Bit $tmp2553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 60 }));
        if ($tmp2553.value) {
        {
            return &$s2554;
        }
        }
        else {
        panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553692502, ((panda$core$Int64) { 61 }));
        if ($tmp2555.value) {
        {
            return &$s2556;
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
    panda$core$Int64 $match$567852557;
    {
        $match$567852557 = p_op;
        panda$core$Bit $tmp2572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 74 }));
        bool $tmp2571 = $tmp2572.value;
        if ($tmp2571) goto $l2573;
        panda$core$Bit $tmp2574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 75 }));
        $tmp2571 = $tmp2574.value;
        $l2573:;
        panda$core$Bit $tmp2575 = { $tmp2571 };
        bool $tmp2570 = $tmp2575.value;
        if ($tmp2570) goto $l2576;
        panda$core$Bit $tmp2577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 76 }));
        $tmp2570 = $tmp2577.value;
        $l2576:;
        panda$core$Bit $tmp2578 = { $tmp2570 };
        bool $tmp2569 = $tmp2578.value;
        if ($tmp2569) goto $l2579;
        panda$core$Bit $tmp2580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 77 }));
        $tmp2569 = $tmp2580.value;
        $l2579:;
        panda$core$Bit $tmp2581 = { $tmp2569 };
        bool $tmp2568 = $tmp2581.value;
        if ($tmp2568) goto $l2582;
        panda$core$Bit $tmp2583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 79 }));
        $tmp2568 = $tmp2583.value;
        $l2582:;
        panda$core$Bit $tmp2584 = { $tmp2568 };
        bool $tmp2567 = $tmp2584.value;
        if ($tmp2567) goto $l2585;
        panda$core$Bit $tmp2586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 78 }));
        $tmp2567 = $tmp2586.value;
        $l2585:;
        panda$core$Bit $tmp2587 = { $tmp2567 };
        bool $tmp2566 = $tmp2587.value;
        if ($tmp2566) goto $l2588;
        panda$core$Bit $tmp2589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 80 }));
        $tmp2566 = $tmp2589.value;
        $l2588:;
        panda$core$Bit $tmp2590 = { $tmp2566 };
        bool $tmp2565 = $tmp2590.value;
        if ($tmp2565) goto $l2591;
        panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 81 }));
        $tmp2565 = $tmp2592.value;
        $l2591:;
        panda$core$Bit $tmp2593 = { $tmp2565 };
        bool $tmp2564 = $tmp2593.value;
        if ($tmp2564) goto $l2594;
        panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 82 }));
        $tmp2564 = $tmp2595.value;
        $l2594:;
        panda$core$Bit $tmp2596 = { $tmp2564 };
        bool $tmp2563 = $tmp2596.value;
        if ($tmp2563) goto $l2597;
        panda$core$Bit $tmp2598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 83 }));
        $tmp2563 = $tmp2598.value;
        $l2597:;
        panda$core$Bit $tmp2599 = { $tmp2563 };
        bool $tmp2562 = $tmp2599.value;
        if ($tmp2562) goto $l2600;
        panda$core$Bit $tmp2601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 84 }));
        $tmp2562 = $tmp2601.value;
        $l2600:;
        panda$core$Bit $tmp2602 = { $tmp2562 };
        bool $tmp2561 = $tmp2602.value;
        if ($tmp2561) goto $l2603;
        panda$core$Bit $tmp2604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 85 }));
        $tmp2561 = $tmp2604.value;
        $l2603:;
        panda$core$Bit $tmp2605 = { $tmp2561 };
        bool $tmp2560 = $tmp2605.value;
        if ($tmp2560) goto $l2606;
        panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 86 }));
        $tmp2560 = $tmp2607.value;
        $l2606:;
        panda$core$Bit $tmp2608 = { $tmp2560 };
        bool $tmp2559 = $tmp2608.value;
        if ($tmp2559) goto $l2609;
        panda$core$Bit $tmp2610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 87 }));
        $tmp2559 = $tmp2610.value;
        $l2609:;
        panda$core$Bit $tmp2611 = { $tmp2559 };
        bool $tmp2558 = $tmp2611.value;
        if ($tmp2558) goto $l2612;
        panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567852557, ((panda$core$Int64) { 88 }));
        $tmp2558 = $tmp2613.value;
        $l2612:;
        panda$core$Bit $tmp2614 = { $tmp2558 };
        if ($tmp2614.value) {
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
    panda$core$Int64 $match$573582615;
    {
        $match$573582615 = p_op;
        panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 74 }));
        if ($tmp2616.value) {
        {
            return ((panda$core$Int64) { 51 });
        }
        }
        else {
        panda$core$Bit $tmp2617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 75 }));
        if ($tmp2617.value) {
        {
            return ((panda$core$Int64) { 52 });
        }
        }
        else {
        panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 76 }));
        if ($tmp2618.value) {
        {
            return ((panda$core$Int64) { 53 });
        }
        }
        else {
        panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 77 }));
        if ($tmp2619.value) {
        {
            return ((panda$core$Int64) { 54 });
        }
        }
        else {
        panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 79 }));
        if ($tmp2620.value) {
        {
            return ((panda$core$Int64) { 55 });
        }
        }
        else {
        panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 78 }));
        if ($tmp2621.value) {
        {
            return ((panda$core$Int64) { 56 });
        }
        }
        else {
        panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 80 }));
        if ($tmp2622.value) {
        {
            return ((panda$core$Int64) { 57 });
        }
        }
        else {
        panda$core$Bit $tmp2623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 81 }));
        if ($tmp2623.value) {
        {
            return ((panda$core$Int64) { 68 });
        }
        }
        else {
        panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 82 }));
        if ($tmp2624.value) {
        {
            return ((panda$core$Int64) { 69 });
        }
        }
        else {
        panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 83 }));
        if ($tmp2625.value) {
        {
            return ((panda$core$Int64) { 66 });
        }
        }
        else {
        panda$core$Bit $tmp2626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 84 }));
        if ($tmp2626.value) {
        {
            return ((panda$core$Int64) { 67 });
        }
        }
        else {
        panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 85 }));
        if ($tmp2627.value) {
        {
            return ((panda$core$Int64) { 70 });
        }
        }
        else {
        panda$core$Bit $tmp2628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 86 }));
        if ($tmp2628.value) {
        {
            return ((panda$core$Int64) { 71 });
        }
        }
        else {
        panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 87 }));
        if ($tmp2629.value) {
        {
            return ((panda$core$Int64) { 72 });
        }
        }
        else {
        panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$573582615, ((panda$core$Int64) { 88 }));
        if ($tmp2630.value) {
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
    panda$core$Int64 $match$584822631;
    {
        $match$584822631 = p_expr->kind;
        panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584822631, ((panda$core$Int64) { 1009 }));
        if ($tmp2632.value) {
        {
            panda$core$Bit $tmp2633 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2633.value) {
            {
                panda$core$Object* $tmp2634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2636 = (($fn2635) self->$class->vtable[49])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2634));
                return $tmp2636;
            }
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp2638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584822631, ((panda$core$Int64) { 1026 }));
        bool $tmp2637 = $tmp2638.value;
        if ($tmp2637) goto $l2639;
        panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584822631, ((panda$core$Int64) { 1016 }));
        $tmp2637 = $tmp2640.value;
        $l2639:;
        panda$core$Bit $tmp2641 = { $tmp2637 };
        if ($tmp2641.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp2642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584822631, ((panda$core$Int64) { 1027 }));
        if ($tmp2642.value) {
        {
            panda$core$Object* $tmp2643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2645 = (($fn2644) self->$class->vtable[49])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2643));
            return $tmp2645;
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
    panda$core$Int64 l2661;
    panda$core$Int64 r2663;
    panda$core$Int64 $match$596602665;
    panda$core$Bit $tmp2648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2647 = $tmp2648.value;
    if ($tmp2647) goto $l2649;
    panda$core$UInt64 $tmp2651 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2652 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2651);
    bool $tmp2650 = $tmp2652.value;
    if (!$tmp2650) goto $l2653;
    panda$core$Bit $tmp2654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2650 = $tmp2654.value;
    $l2653:;
    panda$core$Bit $tmp2655 = { $tmp2650 };
    $tmp2647 = $tmp2655.value;
    $l2649:;
    panda$core$Bit $tmp2656 = { $tmp2647 };
    bool $tmp2646 = $tmp2656.value;
    if ($tmp2646) goto $l2657;
    panda$core$UInt64 $tmp2658 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2659 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2658);
    $tmp2646 = $tmp2659.value;
    $l2657:;
    panda$core$Bit $tmp2660 = { $tmp2646 };
    if ($tmp2660.value) {
    {
        panda$core$Int64 $tmp2662 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2661 = $tmp2662;
        panda$core$Int64 $tmp2664 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2663 = $tmp2664;
        {
            $match$596602665 = p_op;
            panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 51 }));
            if ($tmp2666.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2667 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2667->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2667->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2669 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2670 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2671 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2670);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2667, ((panda$core$Int64) { 1004 }), p_offset, $tmp2669, $tmp2671);
                return $tmp2667;
            }
            }
            else {
            panda$core$Bit $tmp2672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 52 }));
            if ($tmp2672.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2673 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2673->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2673->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2675 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2676 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2677 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2676);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2673, ((panda$core$Int64) { 1004 }), p_offset, $tmp2675, $tmp2677);
                return $tmp2673;
            }
            }
            else {
            panda$core$Bit $tmp2678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 53 }));
            if ($tmp2678.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2679 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2679->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2679->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2681 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2682 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2683 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2682);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2679, ((panda$core$Int64) { 1004 }), p_offset, $tmp2681, $tmp2683);
                return $tmp2679;
            }
            }
            else {
            panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 55 }));
            if ($tmp2684.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2685 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2685->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2685->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2687 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2688 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2689 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2688);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2685, ((panda$core$Int64) { 1004 }), p_offset, $tmp2687, $tmp2689);
                return $tmp2685;
            }
            }
            else {
            panda$core$Bit $tmp2690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 56 }));
            if ($tmp2690.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2691 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2691->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2693 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2694 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2695 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2694);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2691, ((panda$core$Int64) { 1004 }), p_offset, $tmp2693, $tmp2695);
                return $tmp2691;
            }
            }
            else {
            panda$core$Bit $tmp2696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 58 }));
            if ($tmp2696.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2697 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2697->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2697->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2699 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2661, r2663);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2697, ((panda$core$Int64) { 1011 }), p_offset, $tmp2699, $tmp2700);
                return $tmp2697;
            }
            }
            else {
            panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 59 }));
            if ($tmp2701.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2702 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2702->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2702->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2704 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2705 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2661, r2663);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2702, ((panda$core$Int64) { 1011 }), p_offset, $tmp2704, $tmp2705);
                return $tmp2702;
            }
            }
            else {
            panda$core$Bit $tmp2706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 62 }));
            if ($tmp2706.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2707 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2707->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2707->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2709 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2710 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2661, r2663);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2707, ((panda$core$Int64) { 1011 }), p_offset, $tmp2709, $tmp2710);
                return $tmp2707;
            }
            }
            else {
            panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 63 }));
            if ($tmp2711.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2712 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2712->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2712->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2714 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2715 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2661, r2663);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2712, ((panda$core$Int64) { 1011 }), p_offset, $tmp2714, $tmp2715);
                return $tmp2712;
            }
            }
            else {
            panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 64 }));
            if ($tmp2716.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2717 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2717->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2717->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2719 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2720 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2661, r2663);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2717, ((panda$core$Int64) { 1011 }), p_offset, $tmp2719, $tmp2720);
                return $tmp2717;
            }
            }
            else {
            panda$core$Bit $tmp2721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 65 }));
            if ($tmp2721.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2722 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2722->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2722->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2724 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2725 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2661, r2663);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2722, ((panda$core$Int64) { 1011 }), p_offset, $tmp2724, $tmp2725);
                return $tmp2722;
            }
            }
            else {
            panda$core$Bit $tmp2726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 67 }));
            if ($tmp2726.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2727 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2727->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2727->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2729 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2730 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2731 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2730);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2727, ((panda$core$Int64) { 1004 }), p_offset, $tmp2729, $tmp2731);
                return $tmp2727;
            }
            }
            else {
            panda$core$Bit $tmp2732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 69 }));
            if ($tmp2732.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2733 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2733->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2733->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2735 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2736 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2737 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2736);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2733, ((panda$core$Int64) { 1004 }), p_offset, $tmp2735, $tmp2737);
                return $tmp2733;
            }
            }
            else {
            panda$core$Bit $tmp2738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 71 }));
            if ($tmp2738.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2739 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2739->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2739->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2741 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2742 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2743 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2742);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2739, ((panda$core$Int64) { 1004 }), p_offset, $tmp2741, $tmp2743);
                return $tmp2739;
            }
            }
            else {
            panda$core$Bit $tmp2744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 72 }));
            if ($tmp2744.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2745 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2745->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2747 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2748 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2749 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2748);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2745, ((panda$core$Int64) { 1004 }), p_offset, $tmp2747, $tmp2749);
                return $tmp2745;
            }
            }
            else {
            panda$core$Bit $tmp2750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596602665, ((panda$core$Int64) { 1 }));
            if ($tmp2750.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2751 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2751->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2751->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2753 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2754 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2661, r2663);
                panda$core$UInt64 $tmp2755 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2754);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2751, ((panda$core$Int64) { 1004 }), p_offset, $tmp2753, $tmp2755);
                return $tmp2751;
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
    (($fn2757) self->$class->vtable[96])(self, p_offset, &$s2756);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2758.value) {
    {
        panda$core$Object* $tmp2759 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2759);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2761;
    org$pandalanguage$pandac$IRNode* resolved2769;
    panda$collections$Array* children2774;
    panda$core$UInt64 baseId2781;
    org$pandalanguage$pandac$IRNode* base2782;
    panda$core$UInt64 indexId2789;
    org$pandalanguage$pandac$IRNode* index2790;
    org$pandalanguage$pandac$IRNode* baseRef2795;
    org$pandalanguage$pandac$IRNode* indexRef2798;
    org$pandalanguage$pandac$IRNode* rhsIndex2801;
    org$pandalanguage$pandac$IRNode* value2804;
    panda$core$Bit $tmp2760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2760.value) {
    {
        panda$collections$Array* $tmp2762 = (panda$collections$Array*) malloc(40);
        $tmp2762->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2762->refCount.value = 1;
        panda$collections$Array$init($tmp2762);
        args2761 = $tmp2762;
        panda$core$Object* $tmp2764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2761, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2764)));
        panda$collections$Array$add$panda$collections$Array$T(args2761, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2765 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2768 = (($fn2767) self->$class->vtable[40])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2765), &$s2766, ((panda$collections$ListView*) args2761));
        return $tmp2768;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2771 = (($fn2770) self->$class->vtable[8])(self, p_left);
    resolved2769 = $tmp2771;
    if (((panda$core$Bit) { resolved2769 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2773 = (($fn2772) self->$class->vtable[51])(self, resolved2769);
    resolved2769 = $tmp2773;
    panda$collections$Array* $tmp2775 = (panda$collections$Array*) malloc(40);
    $tmp2775->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2775->refCount.value = 1;
    panda$collections$Array$init($tmp2775);
    children2774 = $tmp2775;
    panda$core$Object* $tmp2777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2769->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2779 = (($fn2778) self->$class->vtable[51])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2777));
    panda$collections$Array$add$panda$collections$Array$T(children2774, ((panda$core$Object*) $tmp2779));
    panda$core$UInt64 $tmp2780 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2780;
    baseId2781 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2783 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2783->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2783->refCount.value = 1;
    panda$core$Object* $tmp2785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2774, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2786 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2774, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2783, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2785)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2786)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2781)), ((panda$collections$ListView*) children2774));
    base2782 = $tmp2783;
    panda$collections$Array$clear(children2774);
    panda$core$Object* $tmp2787 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2769->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2774, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2787)));
    panda$core$UInt64 $tmp2788 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2788;
    indexId2789 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2791 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2791->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2791->refCount.value = 1;
    panda$core$Object* $tmp2793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2774, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2774, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2791, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2793)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2794)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2789)), ((panda$collections$ListView*) children2774));
    index2790 = $tmp2791;
    org$pandalanguage$pandac$IRNode* $tmp2796 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2796->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2796, ((panda$core$Int64) { 1028 }), base2782->offset, base2782->type, baseId2781);
    baseRef2795 = $tmp2796;
    org$pandalanguage$pandac$IRNode* $tmp2799 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2799->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2799->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2799, ((panda$core$Int64) { 1028 }), index2790->offset, index2790->type, indexId2789);
    indexRef2798 = $tmp2799;
    org$pandalanguage$pandac$IRNode* $tmp2803 = (($fn2802) self->$class->vtable[53])(self, p_offset, baseRef2795, ((panda$core$Int64) { 101 }), indexRef2798);
    rhsIndex2801 = $tmp2803;
    if (((panda$core$Bit) { rhsIndex2801 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2805 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2807 = (($fn2806) self->$class->vtable[53])(self, p_offset, rhsIndex2801, $tmp2805, p_right);
    value2804 = $tmp2807;
    if (((panda$core$Bit) { value2804 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2811 = (($fn2810) rhsIndex2801->type->$class->vtable[6])(rhsIndex2801->type);
    bool $tmp2809 = $tmp2811.value;
    if (!$tmp2809) goto $l2812;
    panda$core$Bit $tmp2814 = (($fn2813) p_right->type->$class->vtable[6])(p_right->type);
    $tmp2809 = $tmp2814.value;
    $l2812:;
    panda$core$Bit $tmp2815 = { $tmp2809 };
    bool $tmp2808 = $tmp2815.value;
    if (!$tmp2808) goto $l2816;
    panda$core$Bit $tmp2818 = (($fn2817) rhsIndex2801->type->$class->vtable[5])(rhsIndex2801->type, ((panda$core$Object*) value2804->type));
    $tmp2808 = $tmp2818.value;
    $l2816:;
    panda$core$Bit $tmp2819 = { $tmp2808 };
    if ($tmp2819.value) {
    {
        panda$collections$Array* $tmp2821 = (panda$collections$Array*) malloc(40);
        $tmp2821->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2821->refCount.value = 1;
        panda$collections$Array$init($tmp2821);
        org$pandalanguage$pandac$IRNode* $tmp2824 = (($fn2823) self->$class->vtable[41])(self, value2804, &$s2820, ((panda$collections$ListView*) $tmp2821), resolved2769->type);
        value2804 = $tmp2824;
        if (((panda$core$Bit) { value2804 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2774);
    panda$collections$Array$add$panda$collections$Array$T(children2774, ((panda$core$Object*) index2790));
    panda$collections$Array$add$panda$collections$Array$T(children2774, ((panda$core$Object*) value2804));
    org$pandalanguage$pandac$IRNode* $tmp2827 = (($fn2826) self->$class->vtable[40])(self, base2782, &$s2825, ((panda$collections$ListView*) children2774));
    return $tmp2827;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2828;
    org$pandalanguage$pandac$IRNode* right2829;
    panda$core$Int64 kind2858;
    org$pandalanguage$pandac$IRNode* resolved2865;
    panda$collections$Array* children2868;
    org$pandalanguage$pandac$IRNode* resolved2875;
    panda$collections$Array* children2878;
    org$pandalanguage$pandac$ClassDecl* cl2891;
    org$pandalanguage$pandac$ClassDecl* cl2912;
    org$pandalanguage$pandac$IRNode* finalLeft2931;
    org$pandalanguage$pandac$IRNode* finalRight2935;
    panda$collections$Array* children2939;
    panda$collections$Array* children2958;
    panda$collections$Array* children2974;
    org$pandalanguage$pandac$IRNode* reusedLeft2980;
    org$pandalanguage$pandac$ClassDecl* cl3003;
    panda$collections$ListView* parameters3006;
    org$pandalanguage$pandac$Symbol* methods3009;
    org$pandalanguage$pandac$Type* type3015;
    panda$collections$Array* types3016;
    org$pandalanguage$pandac$MethodDecl* m3020;
    panda$collections$Iterator* m$Iter3026;
    org$pandalanguage$pandac$MethodDecl* m3038;
    panda$collections$Array* children3051;
    panda$collections$Array* children3082;
    panda$collections$Array* children3099;
    org$pandalanguage$pandac$Type* resultType3126;
    panda$core$Int64 $match$728063127;
    org$pandalanguage$pandac$IRNode* result3152;
    org$pandalanguage$pandac$IRNode* resolved3156;
    org$pandalanguage$pandac$IRNode* target3164;
    left2828 = p_rawLeft;
    right2829 = p_rawRight;
    panda$core$Bit $tmp2830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2828->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2830.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2832 = (($fn2831) self->$class->vtable[8])(self, right2829);
        right2829 = $tmp2832;
        if (((panda$core$Bit) { right2829 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2834 = (($fn2833) self->$class->vtable[31])(self, left2828, right2829->type);
        if (((panda$core$Bit) { $tmp2834.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2836 = (($fn2835) self->$class->vtable[33])(self, left2828, right2829->type);
            left2828 = $tmp2836;
        }
        }
    }
    }
    panda$core$Bit $tmp2838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2829->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2837 = $tmp2838.value;
    if (!$tmp2837) goto $l2839;
    panda$core$Int64$nullable $tmp2841 = (($fn2840) self->$class->vtable[31])(self, right2829, left2828->type);
    $tmp2837 = ((panda$core$Bit) { $tmp2841.nonnull }).value;
    $l2839:;
    panda$core$Bit $tmp2842 = { $tmp2837 };
    if ($tmp2842.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2844 = (($fn2843) self->$class->vtable[33])(self, right2829, left2828->type);
        right2829 = $tmp2844;
    }
    }
    panda$core$Bit $tmp2848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2847 = $tmp2848.value;
    if ($tmp2847) goto $l2849;
    panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2847 = $tmp2850.value;
    $l2849:;
    panda$core$Bit $tmp2851 = { $tmp2847 };
    bool $tmp2846 = $tmp2851.value;
    if ($tmp2846) goto $l2852;
    panda$core$Bit $tmp2853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2846 = $tmp2853.value;
    $l2852:;
    panda$core$Bit $tmp2854 = { $tmp2846 };
    bool $tmp2845 = $tmp2854.value;
    if ($tmp2845) goto $l2855;
    panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2845 = $tmp2856.value;
    $l2855:;
    panda$core$Bit $tmp2857 = { $tmp2845 };
    if ($tmp2857.value) {
    {
        panda$core$Bit $tmp2860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2859 = $tmp2860.value;
        if ($tmp2859) goto $l2861;
        panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2859 = $tmp2862.value;
        $l2861:;
        panda$core$Bit $tmp2863 = { $tmp2859 };
        if ($tmp2863.value) {
        {
            kind2858 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2858 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2828->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2864.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2867 = (($fn2866) self->$class->vtable[8])(self, right2829);
            resolved2865 = $tmp2867;
            if (((panda$core$Bit) { resolved2865 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2869 = (panda$collections$Array*) malloc(40);
            $tmp2869->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2869->refCount.value = 1;
            panda$collections$Array$init($tmp2869);
            children2868 = $tmp2869;
            panda$collections$Array$add$panda$collections$Array$T(children2868, ((panda$core$Object*) resolved2865));
            org$pandalanguage$pandac$IRNode* $tmp2871 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2871->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2871->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2873 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2871, kind2858, p_offset, $tmp2873, ((panda$collections$ListView*) children2868));
            return $tmp2871;
        }
        }
        panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2829->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2874.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2877 = (($fn2876) self->$class->vtable[8])(self, left2828);
            resolved2875 = $tmp2877;
            if (((panda$core$Bit) { resolved2875 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2879 = (panda$collections$Array*) malloc(40);
            $tmp2879->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2879->refCount.value = 1;
            panda$collections$Array$init($tmp2879);
            children2878 = $tmp2879;
            panda$collections$Array$add$panda$collections$Array$T(children2878, ((panda$core$Object*) resolved2875));
            org$pandalanguage$pandac$IRNode* $tmp2881 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2881->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2883 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2881, kind2858, p_offset, $tmp2883, ((panda$collections$ListView*) children2878));
            return $tmp2881;
        }
        }
    }
    }
    panda$core$Bit $tmp2885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2884 = $tmp2885.value;
    if ($tmp2884) goto $l2886;
    panda$core$Bit $tmp2887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2884 = $tmp2887.value;
    $l2886:;
    panda$core$Bit $tmp2888 = { $tmp2884 };
    if ($tmp2888.value) {
    {
        panda$core$Bit $tmp2890 = (($fn2889) left2828->type->$class->vtable[8])(left2828->type);
        if ($tmp2890.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2893 = (($fn2892) self->$class->vtable[14])(self, left2828->type);
            cl2891 = $tmp2893;
            if (((panda$core$Bit) { cl2891 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2895 = (($fn2894) self->$class->vtable[9])(self, cl2891);
            if ($tmp2895.value) {
            {
                panda$core$String* $tmp2897 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2896, $tmp2897);
                panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, &$s2899);
                panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2900, ((panda$core$Object*) left2828->type));
                panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2902);
                panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2904, ((panda$core$Object*) right2829->type));
                panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
                panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, $tmp2907);
                (($fn2909) self->$class->vtable[96])(self, p_offset, $tmp2908);
            }
            }
        }
        }
        panda$core$Bit $tmp2911 = (($fn2910) right2829->type->$class->vtable[8])(right2829->type);
        if ($tmp2911.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2914 = (($fn2913) self->$class->vtable[14])(self, right2829->type);
            cl2912 = $tmp2914;
            if (((panda$core$Bit) { cl2912 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2916 = (($fn2915) self->$class->vtable[9])(self, cl2912);
            if ($tmp2916.value) {
            {
                panda$core$String* $tmp2918 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2917, $tmp2918);
                panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, &$s2920);
                panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2921, ((panda$core$Object*) left2828->type));
                panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
                panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2925, ((panda$core$Object*) right2829->type));
                panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, &$s2927);
                panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, $tmp2928);
                (($fn2930) self->$class->vtable[96])(self, p_offset, $tmp2929);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2932 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2934 = (($fn2933) self->$class->vtable[33])(self, left2828, $tmp2932);
        finalLeft2931 = $tmp2934;
        if (((panda$core$Bit) { finalLeft2931 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2936 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2938 = (($fn2937) self->$class->vtable[33])(self, right2829, $tmp2936);
        finalRight2935 = $tmp2938;
        if (((panda$core$Bit) { finalRight2935 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2940 = (panda$collections$Array*) malloc(40);
        $tmp2940->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2940->refCount.value = 1;
        panda$collections$Array$init($tmp2940);
        children2939 = $tmp2940;
        panda$collections$Array$add$panda$collections$Array$T(children2939, ((panda$core$Object*) finalLeft2931));
        panda$collections$Array$add$panda$collections$Array$T(children2939, ((panda$core$Object*) finalRight2935));
        org$pandalanguage$pandac$IRNode* $tmp2942 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2942->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2942->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2944 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2942, ((panda$core$Int64) { 1023 }), p_offset, $tmp2944, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2939));
        return $tmp2942;
    }
    }
    panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2945.value) {
    {
        panda$core$Bit $tmp2946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2828->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2946.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2948 = (($fn2947) self->$class->vtable[52])(self, p_offset, left2828, p_op, right2829);
            return $tmp2948;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2950 = (($fn2949) self->$class->vtable[8])(self, left2828);
        left2828 = $tmp2950;
        if (((panda$core$Bit) { left2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2952 = (($fn2951) self->$class->vtable[33])(self, right2829, left2828->type);
        right2829 = $tmp2952;
        if (((panda$core$Bit) { right2829 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2954 = (($fn2953) self->$class->vtable[49])(self, left2828);
        panda$core$Bit $tmp2955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2954);
        if ($tmp2955.value) {
        {
            (($fn2957) self->$class->vtable[96])(self, left2828->offset, &$s2956);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2959 = (panda$collections$Array*) malloc(40);
        $tmp2959->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2959->refCount.value = 1;
        panda$collections$Array$init($tmp2959);
        children2958 = $tmp2959;
        panda$collections$Array$add$panda$collections$Array$T(children2958, ((panda$core$Object*) left2828));
        panda$collections$Array$add$panda$collections$Array$T(children2958, ((panda$core$Object*) right2829));
        org$pandalanguage$pandac$IRNode* $tmp2961 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2961->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2961->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2961, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2958));
        return $tmp2961;
    }
    }
    panda$core$Bit $tmp2963 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2963.value) {
    {
        panda$core$Bit $tmp2964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2828->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2964.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2966 = (($fn2965) self->$class->vtable[52])(self, p_offset, left2828, p_op, right2829);
            return $tmp2966;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2968 = (($fn2967) self->$class->vtable[8])(self, left2828);
        left2828 = $tmp2968;
        if (((panda$core$Bit) { left2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2970 = (($fn2969) self->$class->vtable[49])(self, left2828);
        panda$core$Bit $tmp2971 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2970);
        if ($tmp2971.value) {
        {
            (($fn2973) self->$class->vtable[96])(self, left2828->offset, &$s2972);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2975 = (panda$collections$Array*) malloc(40);
        $tmp2975->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2975->refCount.value = 1;
        panda$collections$Array$init($tmp2975);
        children2974 = $tmp2975;
        panda$collections$Array$add$panda$collections$Array$T(children2974, ((panda$core$Object*) left2828));
        panda$core$UInt64 $tmp2977 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2977;
        org$pandalanguage$pandac$IRNode* $tmp2978 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2978->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2978->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2978, ((panda$core$Int64) { 1027 }), left2828->offset, left2828->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2974));
        left2828 = $tmp2978;
        org$pandalanguage$pandac$IRNode* $tmp2981 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2981->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2981->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2981, ((panda$core$Int64) { 1028 }), left2828->offset, left2828->type, self->reusedValueCount);
        reusedLeft2980 = $tmp2981;
        panda$core$Int64 $tmp2983 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2985 = (($fn2984) self->$class->vtable[53])(self, p_offset, reusedLeft2980, $tmp2983, right2829);
        right2829 = $tmp2985;
        if (((panda$core$Bit) { right2829 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2988 = (($fn2987) left2828->type->$class->vtable[6])(left2828->type);
        bool $tmp2986 = $tmp2988.value;
        if (!$tmp2986) goto $l2989;
        panda$core$Bit $tmp2991 = (($fn2990) left2828->type->$class->vtable[5])(left2828->type, ((panda$core$Object*) right2829->type));
        $tmp2986 = $tmp2991.value;
        $l2989:;
        panda$core$Bit $tmp2992 = { $tmp2986 };
        if ($tmp2992.value) {
        {
            panda$collections$Array* $tmp2994 = (panda$collections$Array*) malloc(40);
            $tmp2994->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2994->refCount.value = 1;
            panda$collections$Array$init($tmp2994);
            org$pandalanguage$pandac$IRNode* $tmp2997 = (($fn2996) self->$class->vtable[41])(self, right2829, &$s2993, ((panda$collections$ListView*) $tmp2994), left2828->type);
            right2829 = $tmp2997;
            if (((panda$core$Bit) { right2829 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2999 = (($fn2998) self->$class->vtable[53])(self, p_offset, left2828, ((panda$core$Int64) { 73 }), right2829);
        return $tmp2999;
    }
    }
    panda$core$Bit $tmp3000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp3000.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3002 = (($fn3001) self->$class->vtable[8])(self, left2828);
        left2828 = $tmp3002;
        if (((panda$core$Bit) { left2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp3005 = (($fn3004) self->$class->vtable[14])(self, left2828->type);
        cl3003 = $tmp3005;
        if (((panda$core$Bit) { cl3003 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp3008 = (($fn3007) self->$class->vtable[55])(self, left2828->type);
        parameters3006 = $tmp3008;
        org$pandalanguage$pandac$SymbolTable* $tmp3011 = (($fn3010) self->$class->vtable[20])(self, cl3003);
        org$pandalanguage$pandac$Symbol* $tmp3014 = (($fn3013) $tmp3011->$class->vtable[6])($tmp3011, &$s3012);
        methods3009 = $tmp3014;
        if (((panda$core$Bit) { methods3009 != NULL }).value) {
        {
            panda$collections$Array* $tmp3017 = (panda$collections$Array*) malloc(40);
            $tmp3017->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3017->refCount.value = 1;
            panda$collections$Array$init($tmp3017);
            types3016 = $tmp3017;
            panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3009->kind, ((panda$core$Int64) { 204 }));
            if ($tmp3019.value) {
            {
                m3020 = ((org$pandalanguage$pandac$MethodDecl*) methods3009);
                (($fn3021) self->$class->vtable[6])(self, m3020);
                org$pandalanguage$pandac$MethodRef* $tmp3022 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3022->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3022->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3022, m3020, parameters3006);
                org$pandalanguage$pandac$Type* $tmp3025 = (($fn3024) $tmp3022->$class->vtable[5])($tmp3022);
                panda$collections$Array$add$panda$collections$Array$T(types3016, ((panda$core$Object*) $tmp3025));
            }
            }
            else {
            {
                {
                    ITable* $tmp3027 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3009)->methods)->$class->itable;
                    while ($tmp3027->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3027 = $tmp3027->next;
                    }
                    $fn3029 $tmp3028 = $tmp3027->methods[0];
                    panda$collections$Iterator* $tmp3030 = $tmp3028(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3009)->methods));
                    m$Iter3026 = $tmp3030;
                    $l3031:;
                    ITable* $tmp3033 = m$Iter3026->$class->itable;
                    while ($tmp3033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3033 = $tmp3033->next;
                    }
                    $fn3035 $tmp3034 = $tmp3033->methods[0];
                    panda$core$Bit $tmp3036 = $tmp3034(m$Iter3026);
                    panda$core$Bit $tmp3037 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3036);
                    if (!$tmp3037.value) goto $l3032;
                    {
                        ITable* $tmp3039 = m$Iter3026->$class->itable;
                        while ($tmp3039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3039 = $tmp3039->next;
                        }
                        $fn3041 $tmp3040 = $tmp3039->methods[1];
                        panda$core$Object* $tmp3042 = $tmp3040(m$Iter3026);
                        m3038 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3042);
                        (($fn3043) self->$class->vtable[6])(self, m3038);
                        org$pandalanguage$pandac$MethodRef* $tmp3044 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp3044->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp3044->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3044, m3038, parameters3006);
                        org$pandalanguage$pandac$Type* $tmp3047 = (($fn3046) $tmp3044->$class->vtable[5])($tmp3044);
                        panda$collections$Array$add$panda$collections$Array$T(types3016, ((panda$core$Object*) $tmp3047));
                    }
                    goto $l3031;
                    $l3032:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp3048 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp3048->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3048->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3048, ((panda$collections$ListView*) types3016));
            type3015 = $tmp3048;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3050 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type3015 = $tmp3050;
        }
        }
        panda$collections$Array* $tmp3052 = (panda$collections$Array*) malloc(40);
        $tmp3052->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3052->refCount.value = 1;
        panda$collections$Array$init($tmp3052);
        children3051 = $tmp3052;
        panda$collections$Array$add$panda$collections$Array$T(children3051, ((panda$core$Object*) left2828));
        panda$collections$Array$add$panda$collections$Array$T(children3051, ((panda$core$Object*) right2829));
        org$pandalanguage$pandac$IRNode* $tmp3054 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3054->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3054->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3054, ((panda$core$Int64) { 1040 }), p_offset, type3015, ((panda$collections$ListView*) children3051));
        return $tmp3054;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3056 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3058 = (($fn3057) left2828->type->$class->vtable[4])(left2828->type, ((panda$core$Object*) $tmp3056));
    if ($tmp3058.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3060 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3062 = (($fn3061) right2829->type->$class->vtable[4])(right2829->type, ((panda$core$Object*) $tmp3060));
        bool $tmp3059 = $tmp3062.value;
        if (!$tmp3059) goto $l3063;
        panda$core$Bit $tmp3068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3067 = $tmp3068.value;
        if ($tmp3067) goto $l3069;
        panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3067 = $tmp3070.value;
        $l3069:;
        panda$core$Bit $tmp3071 = { $tmp3067 };
        bool $tmp3066 = $tmp3071.value;
        if ($tmp3066) goto $l3072;
        panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3066 = $tmp3073.value;
        $l3072:;
        panda$core$Bit $tmp3074 = { $tmp3066 };
        bool $tmp3065 = $tmp3074.value;
        if ($tmp3065) goto $l3075;
        panda$core$Bit $tmp3076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3065 = $tmp3076.value;
        $l3075:;
        panda$core$Bit $tmp3077 = { $tmp3065 };
        bool $tmp3064 = $tmp3077.value;
        if ($tmp3064) goto $l3078;
        panda$core$Bit $tmp3079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3064 = $tmp3079.value;
        $l3078:;
        panda$core$Bit $tmp3080 = { $tmp3064 };
        $tmp3059 = $tmp3080.value;
        $l3063:;
        panda$core$Bit $tmp3081 = { $tmp3059 };
        if ($tmp3081.value) {
        {
            panda$collections$Array* $tmp3083 = (panda$collections$Array*) malloc(40);
            $tmp3083->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3083->refCount.value = 1;
            panda$collections$Array$init($tmp3083);
            children3082 = $tmp3083;
            panda$collections$Array$add$panda$collections$Array$T(children3082, ((panda$core$Object*) left2828));
            panda$collections$Array$add$panda$collections$Array$T(children3082, ((panda$core$Object*) right2829));
            org$pandalanguage$pandac$IRNode* $tmp3085 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3085->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3085->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3085, ((panda$core$Int64) { 1023 }), p_offset, left2828->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3082));
            return $tmp3085;
        }
        }
        panda$core$String* $tmp3088 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3087, $tmp3088);
        panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3090);
        panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3091, ((panda$core$Object*) left2828->type));
        panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
        panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3094, ((panda$core$Object*) right2829->type));
        panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
        (($fn3098) self->$class->vtable[96])(self, p_offset, $tmp3097);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3100 = (panda$collections$Array*) malloc(40);
    $tmp3100->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3100->refCount.value = 1;
    panda$collections$Array$init($tmp3100);
    children3099 = $tmp3100;
    panda$core$Bit $tmp3104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2828->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3103 = $tmp3104.value;
    if ($tmp3103) goto $l3105;
    panda$core$Bit $tmp3106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2828->kind, ((panda$core$Int64) { 1032 }));
    $tmp3103 = $tmp3106.value;
    $l3105:;
    panda$core$Bit $tmp3107 = { $tmp3103 };
    bool $tmp3102 = $tmp3107.value;
    if (!$tmp3102) goto $l3108;
    panda$core$Bit $tmp3110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2829->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3109 = $tmp3110.value;
    if ($tmp3109) goto $l3111;
    panda$core$Bit $tmp3112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2829->kind, ((panda$core$Int64) { 1032 }));
    $tmp3109 = $tmp3112.value;
    $l3111:;
    panda$core$Bit $tmp3113 = { $tmp3109 };
    $tmp3102 = $tmp3113.value;
    $l3108:;
    panda$core$Bit $tmp3114 = { $tmp3102 };
    if ($tmp3114.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3116 = (($fn3115) self->$class->vtable[50])(self, p_offset, left2828, p_op, right2829);
        return $tmp3116;
    }
    }
    panda$core$Bit $tmp3119 = (($fn3118) left2828->type->$class->vtable[7])(left2828->type);
    bool $tmp3117 = $tmp3119.value;
    if (!$tmp3117) goto $l3120;
    panda$core$Int64$nullable $tmp3122 = (($fn3121) self->$class->vtable[31])(self, right2829, left2828->type);
    $tmp3117 = ((panda$core$Bit) { $tmp3122.nonnull }).value;
    $l3120:;
    panda$core$Bit $tmp3123 = { $tmp3117 };
    if ($tmp3123.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3125 = (($fn3124) self->$class->vtable[33])(self, right2829, left2828->type);
        right2829 = $tmp3125;
        panda$collections$Array$add$panda$collections$Array$T(children3099, ((panda$core$Object*) left2828));
        panda$collections$Array$add$panda$collections$Array$T(children3099, ((panda$core$Object*) right2829));
        {
            $match$728063127 = p_op;
            panda$core$Bit $tmp3133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728063127, ((panda$core$Int64) { 58 }));
            bool $tmp3132 = $tmp3133.value;
            if ($tmp3132) goto $l3134;
            panda$core$Bit $tmp3135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728063127, ((panda$core$Int64) { 59 }));
            $tmp3132 = $tmp3135.value;
            $l3134:;
            panda$core$Bit $tmp3136 = { $tmp3132 };
            bool $tmp3131 = $tmp3136.value;
            if ($tmp3131) goto $l3137;
            panda$core$Bit $tmp3138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728063127, ((panda$core$Int64) { 63 }));
            $tmp3131 = $tmp3138.value;
            $l3137:;
            panda$core$Bit $tmp3139 = { $tmp3131 };
            bool $tmp3130 = $tmp3139.value;
            if ($tmp3130) goto $l3140;
            panda$core$Bit $tmp3141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728063127, ((panda$core$Int64) { 65 }));
            $tmp3130 = $tmp3141.value;
            $l3140:;
            panda$core$Bit $tmp3142 = { $tmp3130 };
            bool $tmp3129 = $tmp3142.value;
            if ($tmp3129) goto $l3143;
            panda$core$Bit $tmp3144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728063127, ((panda$core$Int64) { 62 }));
            $tmp3129 = $tmp3144.value;
            $l3143:;
            panda$core$Bit $tmp3145 = { $tmp3129 };
            bool $tmp3128 = $tmp3145.value;
            if ($tmp3128) goto $l3146;
            panda$core$Bit $tmp3147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728063127, ((panda$core$Int64) { 64 }));
            $tmp3128 = $tmp3147.value;
            $l3146:;
            panda$core$Bit $tmp3148 = { $tmp3128 };
            if ($tmp3148.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3149 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3126 = $tmp3149;
            }
            }
            else {
            {
                resultType3126 = left2828->type;
            }
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3150 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3150->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3150->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3150, ((panda$core$Int64) { 1023 }), p_offset, resultType3126, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3099));
        return $tmp3150;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3099, ((panda$core$Object*) right2829));
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3153 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3155 = (($fn3154) self->$class->vtable[40])(self, left2828, $tmp3153, ((panda$collections$ListView*) children3099));
    result3152 = $tmp3155;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3152 == NULL }).value) {
    {
        panda$collections$Array$clear(children3099);
        panda$collections$Array$add$panda$collections$Array$T(children3099, ((panda$core$Object*) left2828));
        org$pandalanguage$pandac$IRNode* $tmp3158 = (($fn3157) self->$class->vtable[8])(self, right2829);
        resolved3156 = $tmp3158;
        bool $tmp3159 = ((panda$core$Bit) { resolved3156 != NULL }).value;
        if (!$tmp3159) goto $l3160;
        panda$core$Bit $tmp3162 = (($fn3161) resolved3156->type->$class->vtable[8])(resolved3156->type);
        $tmp3159 = $tmp3162.value;
        $l3160:;
        panda$core$Bit $tmp3163 = { $tmp3159 };
        if ($tmp3163.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3099, ((panda$core$Object*) resolved3156));
            org$pandalanguage$pandac$IRNode* $tmp3165 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3165->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3165->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3167 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3165, ((panda$core$Int64) { 1001 }), resolved3156->offset, $tmp3167, resolved3156->type);
            target3164 = $tmp3165;
            panda$core$String* $tmp3168 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3170 = (($fn3169) self->$class->vtable[40])(self, target3164, $tmp3168, ((panda$collections$ListView*) children3099));
            result3152 = $tmp3170;
        }
        }
    }
    }
    return result3152;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3171;
    org$pandalanguage$pandac$IRNode* right3176;
    panda$core$Object* $tmp3173 = (($fn3172) p_b->children->$class->vtable[2])(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3175 = (($fn3174) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3173));
    left3171 = $tmp3175;
    if (((panda$core$Bit) { left3171 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3178 = (($fn3177) p_b->children->$class->vtable[2])(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3180 = (($fn3179) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3178));
    right3176 = $tmp3180;
    if (((panda$core$Bit) { right3176 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3182 = (($fn3181) self->$class->vtable[53])(self, p_b->offset, left3171, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3176);
    return $tmp3182;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT $tmp3189;
    panda$core$Bit $tmp3183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 22 }));
    if ($tmp3183.value) {
    {
        panda$core$Object* $tmp3185 = (($fn3184) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$collections$ListView* $tmp3187 = (($fn3186) self->$class->vtable[55])(self, ((org$pandalanguage$pandac$Type*) $tmp3185));
        return $tmp3187;
    }
    }
    panda$core$Bit $tmp3188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp3188.value) {
    {
        panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3189, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp3191 = (($fn3190) p_type->subtypes->$class->vtable[8])(p_type->subtypes, $tmp3189);
        return ((panda$collections$ListView*) $tmp3191);
    }
    }
    else {
    {
        panda$collections$Array* $tmp3192 = (panda$collections$Array*) malloc(40);
        $tmp3192->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3192->refCount.value = 1;
        panda$collections$Array$init($tmp3192);
        return ((panda$collections$ListView*) $tmp3192);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    org$pandalanguage$pandac$Type* type3197;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3194.value) {
        {
            panda$collections$ListView* $tmp3196 = (($fn3195) self->$class->vtable[55])(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3196;
        }
        }
        panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3198.value) {
        {
            panda$core$Object* $tmp3200 = (($fn3199) p_target->type->subtypes->$class->vtable[2])(p_target->type->subtypes, ((panda$core$Int64) { 0 }));
            type3197 = ((org$pandalanguage$pandac$Type*) $tmp3200);
        }
        }
        else {
        {
            type3197 = p_target->type;
        }
        }
        panda$collections$ListView* $tmp3202 = (($fn3201) self->$class->vtable[55])(self, type3197);
        return $tmp3202;
    }
    }
    panda$collections$Array* $tmp3203 = (panda$collections$Array*) malloc(40);
    $tmp3203->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3203->refCount.value = 1;
    panda$collections$Array$init($tmp3203);
    return ((panda$collections$ListView*) $tmp3203);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name3207;
    org$pandalanguage$pandac$ClassDecl* cl3209;
    org$pandalanguage$pandac$Symbol* s3212;
    org$pandalanguage$pandac$MethodDecl* m3217;
    panda$core$Int64 $match$754843218;
    panda$collections$Iterator* test$Iter3221;
    org$pandalanguage$pandac$MethodDecl* test3233;
    org$pandalanguage$pandac$MethodRef* ref3247;
    panda$collections$Array* children3252;
    org$pandalanguage$pandac$IRNode* methodRef3255;
    panda$collections$Array* args3261;
    panda$core$Int64 $match$767103266;
    panda$core$Int64 $match$767703268;
    panda$collections$Array* children3277;
    panda$collections$Array* children3290;
    org$pandalanguage$pandac$IRNode* coerced3301;
    panda$collections$Array* children3305;
    panda$core$Bit $tmp3206 = (($fn3205) p_base->type->$class->vtable[8])(p_base->type);
    if ($tmp3206.value) {
    {
        panda$core$String* $tmp3208 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3207 = $tmp3208;
        org$pandalanguage$pandac$ClassDecl* $tmp3211 = (($fn3210) self->$class->vtable[14])(self, p_base->type);
        cl3209 = $tmp3211;
        if (((panda$core$Bit) { cl3209 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3214 = (($fn3213) self->$class->vtable[20])(self, cl3209);
        org$pandalanguage$pandac$Symbol* $tmp3216 = (($fn3215) $tmp3214->$class->vtable[6])($tmp3214, name3207);
        s3212 = $tmp3216;
        if (((panda$core$Bit) { s3212 != NULL }).value) {
        {
            m3217 = NULL;
            {
                $match$754843218 = s3212->kind;
                panda$core$Bit $tmp3219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$754843218, ((panda$core$Int64) { 204 }));
                if ($tmp3219.value) {
                {
                    m3217 = ((org$pandalanguage$pandac$MethodDecl*) s3212);
                }
                }
                else {
                panda$core$Bit $tmp3220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$754843218, ((panda$core$Int64) { 205 }));
                if ($tmp3220.value) {
                {
                    {
                        ITable* $tmp3222 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3212)->methods)->$class->itable;
                        while ($tmp3222->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3222 = $tmp3222->next;
                        }
                        $fn3224 $tmp3223 = $tmp3222->methods[0];
                        panda$collections$Iterator* $tmp3225 = $tmp3223(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3212)->methods));
                        test$Iter3221 = $tmp3225;
                        $l3226:;
                        ITable* $tmp3228 = test$Iter3221->$class->itable;
                        while ($tmp3228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3228 = $tmp3228->next;
                        }
                        $fn3230 $tmp3229 = $tmp3228->methods[0];
                        panda$core$Bit $tmp3231 = $tmp3229(test$Iter3221);
                        panda$core$Bit $tmp3232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3231);
                        if (!$tmp3232.value) goto $l3227;
                        {
                            ITable* $tmp3234 = test$Iter3221->$class->itable;
                            while ($tmp3234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3234 = $tmp3234->next;
                            }
                            $fn3236 $tmp3235 = $tmp3234->methods[1];
                            panda$core$Object* $tmp3237 = $tmp3235(test$Iter3221);
                            test3233 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3237);
                            panda$core$Bit $tmp3240 = (($fn3239) test3233->annotations->$class->vtable[5])(test3233->annotations);
                            panda$core$Bit $tmp3241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3240);
                            bool $tmp3238 = $tmp3241.value;
                            if (!$tmp3238) goto $l3242;
                            panda$core$Int64 $tmp3243 = panda$collections$Array$get_count$R$panda$core$Int64(test3233->parameters);
                            panda$core$Bit $tmp3244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3243, ((panda$core$Int64) { 0 }));
                            $tmp3238 = $tmp3244.value;
                            $l3242:;
                            panda$core$Bit $tmp3245 = { $tmp3238 };
                            if ($tmp3245.value) {
                            {
                                m3217 = test3233;
                                goto $l3227;
                            }
                            }
                        }
                        goto $l3226;
                        $l3227:;
                    }
                }
                }
                else {
                {
                }
                }
                }
            }
            if (((panda$core$Bit) { m3217 != NULL }).value) {
            {
                (($fn3246) self->$class->vtable[6])(self, m3217);
                org$pandalanguage$pandac$MethodRef* $tmp3248 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3248->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3248->refCount.value = 1;
                panda$collections$ListView* $tmp3251 = (($fn3250) self->$class->vtable[56])(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3248, m3217, $tmp3251);
                ref3247 = $tmp3248;
                panda$collections$Array* $tmp3253 = (panda$collections$Array*) malloc(40);
                $tmp3253->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3253->refCount.value = 1;
                panda$collections$Array$init($tmp3253);
                children3252 = $tmp3253;
                panda$collections$Array$add$panda$collections$Array$T(children3252, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3256 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3256->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3256->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3258 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp3258->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3258->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3258, &$s3260, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3256, ((panda$core$Int64) { 1002 }), p_offset, $tmp3258, ((panda$core$Object*) ref3247), ((panda$collections$ListView*) children3252));
                methodRef3255 = $tmp3256;
                panda$collections$Array* $tmp3262 = (panda$collections$Array*) malloc(40);
                $tmp3262->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3262->refCount.value = 1;
                panda$collections$Array$init($tmp3262);
                args3261 = $tmp3262;
                org$pandalanguage$pandac$IRNode* $tmp3265 = (($fn3264) self->$class->vtable[42])(self, methodRef3255, ((panda$collections$ListView*) args3261));
                return $tmp3265;
            }
            }
        }
        }
    }
    }
    {
        $match$767103266 = p_op;
        panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767103266, ((panda$core$Int64) { 52 }));
        if ($tmp3267.value) {
        {
            {
                $match$767703268 = p_base->kind;
                panda$core$Bit $tmp3269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767703268, ((panda$core$Int64) { 1004 }));
                if ($tmp3269.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3270 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3270->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3270->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3270, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3270;
                }
                }
                else {
                panda$core$Bit $tmp3272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767703268, ((panda$core$Int64) { 1032 }));
                if ($tmp3272.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3273 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3273->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3273->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3273, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3273;
                }
                }
                else {
                {
                    panda$core$Bit $tmp3276 = (($fn3275) p_base->type->$class->vtable[7])(p_base->type);
                    if ($tmp3276.value) {
                    {
                        panda$collections$Array* $tmp3278 = (panda$collections$Array*) malloc(40);
                        $tmp3278->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3278->refCount.value = 1;
                        panda$collections$Array$init($tmp3278);
                        children3277 = $tmp3278;
                        panda$collections$Array$add$panda$collections$Array$T(children3277, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3280 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp3280->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3280->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3280, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3277));
                        return $tmp3280;
                    }
                    }
                }
                }
                }
            }
            panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3282, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
            (($fn3286) self->$class->vtable[96])(self, p_base->offset, $tmp3285);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp3287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767103266, ((panda$core$Int64) { 50 }));
        if ($tmp3287.value) {
        {
            panda$core$Bit $tmp3289 = (($fn3288) p_base->type->$class->vtable[7])(p_base->type);
            if ($tmp3289.value) {
            {
                panda$collections$Array* $tmp3291 = (panda$collections$Array*) malloc(40);
                $tmp3291->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3291->refCount.value = 1;
                panda$collections$Array$init($tmp3291);
                children3290 = $tmp3291;
                panda$collections$Array$add$panda$collections$Array$T(children3290, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3293 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3293->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3293->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3293, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3290));
                return $tmp3293;
            }
            }
            else {
            {
                panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3295, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
                (($fn3299) self->$class->vtable[96])(self, p_base->offset, $tmp3298);
                return NULL;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767103266, ((panda$core$Int64) { 49 }));
        if ($tmp3300.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3302 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3304 = (($fn3303) self->$class->vtable[33])(self, p_base, $tmp3302);
            coerced3301 = $tmp3304;
            if (((panda$core$Bit) { coerced3301 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3306 = (panda$collections$Array*) malloc(40);
            $tmp3306->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3306->refCount.value = 1;
            panda$collections$Array$init($tmp3306);
            children3305 = $tmp3306;
            panda$collections$Array$add$panda$collections$Array$T(children3305, ((panda$core$Object*) coerced3301));
            org$pandalanguage$pandac$IRNode* $tmp3308 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3308->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3308->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3308, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3305));
            return $tmp3308;
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
    org$pandalanguage$pandac$IRNode* base3310;
    panda$core$Object* $tmp3312 = (($fn3311) p_p->children->$class->vtable[2])(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3314 = (($fn3313) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3312));
    base3310 = $tmp3314;
    if (((panda$core$Bit) { base3310 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3316 = (($fn3315) self->$class->vtable[57])(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3310, p_p->offset);
    return $tmp3316;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3317;
    panda$collections$Array* args3322;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp3325;
    org$pandalanguage$pandac$IRNode* arg3346;
    panda$core$Object* $tmp3319 = (($fn3318) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3321 = (($fn3320) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3319));
    m3317 = $tmp3321;
    if (((panda$core$Bit) { m3317 != NULL }).value) {
    {
        panda$collections$Array* $tmp3323 = (panda$collections$Array*) malloc(40);
        $tmp3323->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3323->refCount.value = 1;
        panda$collections$Array$init($tmp3323);
        args3322 = $tmp3323;
        panda$core$Int64 $tmp3327 = (($fn3326) p_c->children->$class->vtable[3])(p_c->children);
        panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3325, ((panda$core$Int64) { 1 }), $tmp3327, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3329 = $tmp3325.start.value;
        panda$core$Int64 i3328 = { $tmp3329 };
        int64_t $tmp3331 = $tmp3325.end.value;
        int64_t $tmp3332 = $tmp3325.step.value;
        bool $tmp3333 = $tmp3325.inclusive.value;
        bool $tmp3340 = $tmp3332 > 0;
        if ($tmp3340) goto $l3338; else goto $l3339;
        $l3338:;
        if ($tmp3333) goto $l3341; else goto $l3342;
        $l3341:;
        if ($tmp3329 <= $tmp3331) goto $l3334; else goto $l3336;
        $l3342:;
        if ($tmp3329 < $tmp3331) goto $l3334; else goto $l3336;
        $l3339:;
        if ($tmp3333) goto $l3343; else goto $l3344;
        $l3343:;
        if ($tmp3329 >= $tmp3331) goto $l3334; else goto $l3336;
        $l3344:;
        if ($tmp3329 > $tmp3331) goto $l3334; else goto $l3336;
        $l3334:;
        {
            panda$core$Object* $tmp3348 = (($fn3347) p_c->children->$class->vtable[2])(p_c->children, i3328);
            org$pandalanguage$pandac$IRNode* $tmp3350 = (($fn3349) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3348));
            arg3346 = $tmp3350;
            if (((panda$core$Bit) { arg3346 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3322, ((panda$core$Object*) arg3346));
        }
        $l3337:;
        if ($tmp3340) goto $l3352; else goto $l3353;
        $l3352:;
        int64_t $tmp3354 = $tmp3331 - i3328.value;
        if ($tmp3333) goto $l3355; else goto $l3356;
        $l3355:;
        if ($tmp3354 >= $tmp3332) goto $l3351; else goto $l3336;
        $l3356:;
        if ($tmp3354 > $tmp3332) goto $l3351; else goto $l3336;
        $l3353:;
        int64_t $tmp3358 = i3328.value - $tmp3331;
        if ($tmp3333) goto $l3359; else goto $l3360;
        $l3359:;
        if ($tmp3358 >= -$tmp3332) goto $l3351; else goto $l3336;
        $l3360:;
        if ($tmp3358 > -$tmp3332) goto $l3351; else goto $l3336;
        $l3351:;
        i3328.value += $tmp3332;
        goto $l3334;
        $l3336:;
        org$pandalanguage$pandac$IRNode* $tmp3363 = (($fn3362) self->$class->vtable[42])(self, m3317, ((panda$collections$ListView*) args3322));
        return $tmp3363;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3364;
    org$pandalanguage$pandac$ClassDecl* cl3376;
    panda$core$Int64 $match$799053377;
    panda$core$String* name3382;
    org$pandalanguage$pandac$ClassDecl* cl3390;
    org$pandalanguage$pandac$Symbol* s3408;
    panda$core$Object* $tmp3366 = (($fn3365) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3368 = (($fn3367) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3366));
    base3364 = $tmp3368;
    if (((panda$core$Bit) { base3364 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3370 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3364->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3369 = $tmp3370.value;
    if (!$tmp3369) goto $l3371;
    panda$core$Bit $tmp3372 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3364->kind, ((panda$core$Int64) { 1024 }));
    $tmp3369 = $tmp3372.value;
    $l3371:;
    panda$core$Bit $tmp3373 = { $tmp3369 };
    if ($tmp3373.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3375 = (($fn3374) self->$class->vtable[8])(self, base3364);
        base3364 = $tmp3375;
    }
    }
    if (((panda$core$Bit) { base3364 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$799053377 = base3364->kind;
        panda$core$Bit $tmp3378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$799053377, ((panda$core$Int64) { 1001 }));
        if ($tmp3378.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3380 = (($fn3379) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) base3364->payload));
            cl3376 = $tmp3380;
        }
        }
        else {
        panda$core$Bit $tmp3381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$799053377, ((panda$core$Int64) { 1037 }));
        if ($tmp3381.value) {
        {
            panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3383, base3364->payload);
            panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
            panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3386, p_d->payload);
            panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
            name3382 = $tmp3389;
            org$pandalanguage$pandac$ClassDecl* $tmp3392 = (($fn3391) self->$class->vtable[3])(self, name3382);
            cl3390 = $tmp3392;
            if (((panda$core$Bit) { cl3390 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3393 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3393->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3393->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3395 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3397 = (($fn3396) cl3390->$class->vtable[3])(cl3390);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3393, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp3395, $tmp3397);
                return $tmp3393;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3398 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3398->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3398->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3400 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3398, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp3400, name3382);
            return $tmp3398;
        }
        }
        else {
        panda$core$Bit $tmp3401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$799053377, ((panda$core$Int64) { 1024 }));
        if ($tmp3401.value) {
        {
            panda$core$Object* $tmp3403 = (($fn3402) self->currentClass->$class->vtable[4])(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3405 = (($fn3404) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3403)->rawSuper);
            cl3376 = $tmp3405;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3407 = (($fn3406) self->$class->vtable[14])(self, base3364->type);
            cl3376 = $tmp3407;
        }
        }
        }
        }
    }
    if (((panda$core$Bit) { cl3376 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3410 = (($fn3409) self->$class->vtable[20])(self, cl3376);
    org$pandalanguage$pandac$Symbol* $tmp3412 = (($fn3411) $tmp3410->$class->vtable[6])($tmp3410, ((panda$core$String*) p_d->payload));
    s3408 = $tmp3412;
    if (((panda$core$Bit) { s3408 == NULL }).value) {
    {
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3413, ((panda$core$Object*) base3364->type));
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3414, &$s3415);
        panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3417, p_d->payload);
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, &$s3419);
        panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, $tmp3420);
        (($fn3422) self->$class->vtable[96])(self, p_d->offset, $tmp3421);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3424 = (($fn3423) self->$class->vtable[20])(self, cl3376);
    org$pandalanguage$pandac$IRNode* $tmp3426 = (($fn3425) self->$class->vtable[24])(self, p_d->offset, base3364, s3408, $tmp3424);
    return $tmp3426;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3427;
    org$pandalanguage$pandac$Symbol* $tmp3429 = (($fn3428) self->symbolTable->$class->vtable[6])(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3427 = $tmp3429;
    if (((panda$core$Bit) { s3427 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3431 = (($fn3430) self->$class->vtable[3])(self, ((panda$core$String*) p_i->payload));
        s3427 = ((org$pandalanguage$pandac$Symbol*) $tmp3431);
    }
    }
    if (((panda$core$Bit) { s3427 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3433 = (($fn3432) self->$class->vtable[24])(self, p_i->offset, NULL, s3427, self->symbolTable);
        return $tmp3433;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3434 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3434->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3434->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3436 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3434, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp3436, ((panda$core$String*) p_i->payload));
    return $tmp3434;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$IRNode* $tmp3437 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3437->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3437->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3439 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp3441 = (($fn3440) self->scanner->$class->vtable[2])(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3443 = (($fn3442) self->$class->vtable[4])(self, $tmp3441);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3437, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp3439, $tmp3443);
    return $tmp3437;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3444;
    org$pandalanguage$pandac$IRNode* end3455;
    org$pandalanguage$pandac$IRNode* step3466;
    panda$collections$Array* children3480;
    panda$core$Object* $tmp3446 = (($fn3445) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3446)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3447.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3448 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3448->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3450 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3448, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp3450);
        start3444 = $tmp3448;
    }
    }
    else {
    {
        panda$core$Object* $tmp3452 = (($fn3451) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3454 = (($fn3453) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3452));
        start3444 = $tmp3454;
        if (((panda$core$Bit) { start3444 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3457 = (($fn3456) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3457)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3458.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3459 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3459->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3459->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3461 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3459, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp3461);
        end3455 = $tmp3459;
    }
    }
    else {
    {
        panda$core$Object* $tmp3463 = (($fn3462) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3465 = (($fn3464) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3463));
        end3455 = $tmp3465;
        if (((panda$core$Bit) { end3455 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3468 = (($fn3467) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3468)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3469.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3470 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3470->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3470->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3472 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3470, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp3472, ((panda$core$UInt64) { 1 }));
        step3466 = $tmp3470;
    }
    }
    else {
    {
        panda$core$Object* $tmp3474 = (($fn3473) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3476 = (($fn3475) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3474));
        org$pandalanguage$pandac$Type* $tmp3477 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3479 = (($fn3478) self->$class->vtable[33])(self, $tmp3476, $tmp3477);
        step3466 = $tmp3479;
        if (((panda$core$Bit) { step3466 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3481 = (panda$collections$Array*) malloc(40);
    $tmp3481->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3481->refCount.value = 1;
    panda$collections$Array$init($tmp3481);
    children3480 = $tmp3481;
    panda$collections$Array$add$panda$collections$Array$T(children3480, ((panda$core$Object*) start3444));
    panda$collections$Array$add$panda$collections$Array$T(children3480, ((panda$core$Object*) end3455));
    panda$collections$Array$add$panda$collections$Array$T(children3480, ((panda$core$Object*) step3466));
    org$pandalanguage$pandac$IRNode* $tmp3483 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3483->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3485 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp3485->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3485->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3485, &$s3487, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3483, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp3485, ((panda$core$Object*) wrap_panda$core$Bit($tmp3488)), ((panda$collections$ListView*) children3480));
    return $tmp3483;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3489 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3489->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3489->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3491 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3489, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp3491, ((panda$core$String*) p_s->payload));
    return $tmp3489;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3498;
    org$pandalanguage$pandac$ClassDecl* cl3499;
    panda$collections$Array* subtypes3507;
    panda$core$MutableString* name3512;
    panda$core$String* separator3517;
    panda$collections$Iterator* p$Iter3519;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3531;
    panda$collections$Array* pType3536;
    panda$core$String* pName3539;
    panda$core$Object* $tmp3493 = (($fn3492) self->currentMethod->$class->vtable[4])(self->currentMethod);
    panda$core$Bit $tmp3495 = (($fn3494) ((org$pandalanguage$pandac$MethodDecl*) $tmp3493)->annotations->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp3493)->annotations);
    if ($tmp3495.value) {
    {
        (($fn3497) self->$class->vtable[96])(self, p_s->offset, &$s3496);
        return NULL;
    }
    }
    panda$core$Object* $tmp3501 = (($fn3500) self->currentClass->$class->vtable[4])(self->currentClass);
    cl3499 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3501);
    ITable* $tmp3502 = ((panda$collections$CollectionView*) cl3499->parameters)->$class->itable;
    while ($tmp3502->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3502 = $tmp3502->next;
    }
    $fn3504 $tmp3503 = $tmp3502->methods[0];
    panda$core$Int64 $tmp3505 = $tmp3503(((panda$collections$CollectionView*) cl3499->parameters));
    panda$core$Bit $tmp3506 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3505, ((panda$core$Int64) { 0 }));
    if ($tmp3506.value) {
    {
        panda$collections$Array* $tmp3508 = (panda$collections$Array*) malloc(40);
        $tmp3508->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3508->refCount.value = 1;
        panda$collections$Array$init($tmp3508);
        subtypes3507 = $tmp3508;
        org$pandalanguage$pandac$Type* $tmp3511 = (($fn3510) cl3499->$class->vtable[3])(cl3499);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3507, ((panda$core$Object*) $tmp3511));
        panda$core$MutableString* $tmp3513 = (panda$core$MutableString*) malloc(40);
        $tmp3513->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3513->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3513, ((org$pandalanguage$pandac$Symbol*) cl3499)->name);
        name3512 = $tmp3513;
        (($fn3516) name3512->$class->vtable[3])(name3512, &$s3515);
        separator3517 = &$s3518;
        {
            ITable* $tmp3520 = ((panda$collections$Iterable*) cl3499->parameters)->$class->itable;
            while ($tmp3520->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3520 = $tmp3520->next;
            }
            $fn3522 $tmp3521 = $tmp3520->methods[0];
            panda$collections$Iterator* $tmp3523 = $tmp3521(((panda$collections$Iterable*) cl3499->parameters));
            p$Iter3519 = $tmp3523;
            $l3524:;
            ITable* $tmp3526 = p$Iter3519->$class->itable;
            while ($tmp3526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3526 = $tmp3526->next;
            }
            $fn3528 $tmp3527 = $tmp3526->methods[0];
            panda$core$Bit $tmp3529 = $tmp3527(p$Iter3519);
            panda$core$Bit $tmp3530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3529);
            if (!$tmp3530.value) goto $l3525;
            {
                ITable* $tmp3532 = p$Iter3519->$class->itable;
                while ($tmp3532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3532 = $tmp3532->next;
                }
                $fn3534 $tmp3533 = $tmp3532->methods[1];
                panda$core$Object* $tmp3535 = $tmp3533(p$Iter3519);
                p3531 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3535);
                panda$collections$Array* $tmp3537 = (panda$collections$Array*) malloc(40);
                $tmp3537->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3537->refCount.value = 1;
                panda$collections$Array$init($tmp3537);
                pType3536 = $tmp3537;
                panda$collections$Array$add$panda$collections$Array$T(pType3536, ((panda$core$Object*) p3531->bound));
                panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3540, ((org$pandalanguage$pandac$Symbol*) cl3499)->name);
                panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, &$s3542);
                panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3543, ((org$pandalanguage$pandac$Symbol*) p3531)->name);
                panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, &$s3545);
                pName3539 = $tmp3546;
                (($fn3547) name3512->$class->vtable[3])(name3512, separator3517);
                (($fn3548) name3512->$class->vtable[3])(name3512, pName3539);
                org$pandalanguage$pandac$Type* $tmp3549 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp3549->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3549->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3549, pName3539, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p3531)->offset, ((panda$collections$ListView*) pType3536), ((panda$core$Bit) { true }));
                panda$collections$Array$add$panda$collections$Array$T(subtypes3507, ((panda$core$Object*) $tmp3549));
                separator3517 = &$s3551;
            }
            goto $l3524;
            $l3525:;
        }
        (($fn3553) name3512->$class->vtable[3])(name3512, &$s3552);
        org$pandalanguage$pandac$Type* $tmp3554 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp3554->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3554->refCount.value = 1;
        panda$core$String* $tmp3557 = (($fn3556) name3512->$class->vtable[0])(name3512);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3554, $tmp3557, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes3507), ((panda$core$Bit) { true }));
        type3498 = $tmp3554;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3559 = (($fn3558) cl3499->$class->vtable[3])(cl3499);
        type3498 = $tmp3559;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3560 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3560->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3560->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3560, ((panda$core$Int64) { 1025 }), p_s->offset, type3498);
    return $tmp3560;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3568;
    panda$core$Object* $tmp3563 = (($fn3562) self->currentMethod->$class->vtable[4])(self->currentMethod);
    panda$core$Bit $tmp3565 = (($fn3564) ((org$pandalanguage$pandac$MethodDecl*) $tmp3563)->annotations->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp3563)->annotations);
    if ($tmp3565.value) {
    {
        (($fn3567) self->$class->vtable[96])(self, p_s->offset, &$s3566);
        return NULL;
    }
    }
    panda$core$Object* $tmp3570 = (($fn3569) self->currentClass->$class->vtable[4])(self->currentClass);
    cl3568 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3570);
    org$pandalanguage$pandac$IRNode* $tmp3571 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3571->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3571->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3571, ((panda$core$Int64) { 1024 }), p_s->offset, cl3568->rawSuper);
    return $tmp3571;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3573;
    org$pandalanguage$pandac$Type* type3578;
    panda$core$Object* $tmp3575 = (($fn3574) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3577 = (($fn3576) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3575));
    value3573 = $tmp3577;
    if (((panda$core$Bit) { value3573 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3580 = (($fn3579) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3582 = (($fn3581) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3580));
    org$pandalanguage$pandac$Type* $tmp3584 = (($fn3583) self->$class->vtable[4])(self, $tmp3582);
    type3578 = $tmp3584;
    panda$core$Int64$nullable $tmp3586 = (($fn3585) self->$class->vtable[31])(self, value3573, type3578);
    if (((panda$core$Bit) { $tmp3586.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3588 = (($fn3587) self->$class->vtable[33])(self, value3573, type3578);
        return $tmp3588;
    }
    }
    panda$core$Bit $tmp3590 = (($fn3589) self->$class->vtable[35])(self, value3573, type3578);
    if ($tmp3590.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3592 = (($fn3591) self->$class->vtable[36])(self, value3573, p_c->offset, ((panda$core$Bit) { true }), type3578);
        return $tmp3592;
    }
    }
    else {
    {
        panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3593, ((panda$core$Object*) value3573->type));
        panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, &$s3595);
        panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3597, ((panda$core$Object*) type3578));
        panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, &$s3599);
        panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3596, $tmp3600);
        (($fn3602) self->$class->vtable[96])(self, p_c->offset, $tmp3601);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    org$pandalanguage$pandac$IRNode* $tmp3603 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3603->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3603->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3605 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3603, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp3605);
    return $tmp3603;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    panda$core$Int64 $match$857243606;
    {
        $match$857243606 = p_e->kind;
        panda$core$Bit $tmp3607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 103 }));
        if ($tmp3607.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3609 = (($fn3608) self->$class->vtable[54])(self, p_e);
            return $tmp3609;
        }
        }
        else {
        panda$core$Bit $tmp3610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 116 }));
        if ($tmp3610.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3611 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3611->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3611->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3613 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3611, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp3613, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3611;
        }
        }
        else {
        panda$core$Bit $tmp3614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 107 }));
        if ($tmp3614.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3616 = (($fn3615) self->$class->vtable[59])(self, p_e);
            return $tmp3616;
        }
        }
        else {
        panda$core$Bit $tmp3617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 108 }));
        if ($tmp3617.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3619 = (($fn3618) self->$class->vtable[60])(self, p_e);
            return $tmp3619;
        }
        }
        else {
        panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 106 }));
        if ($tmp3620.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3622 = (($fn3621) self->$class->vtable[61])(self, p_e);
            return $tmp3622;
        }
        }
        else {
        panda$core$Bit $tmp3623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 102 }));
        if ($tmp3623.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3624 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3624->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3624->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3626 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3624, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp3626, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3624;
        }
        }
        else {
        panda$core$Bit $tmp3627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 112 }));
        if ($tmp3627.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3629 = (($fn3628) self->$class->vtable[58])(self, p_e);
            return $tmp3629;
        }
        }
        else {
        panda$core$Bit $tmp3631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 104 }));
        bool $tmp3630 = $tmp3631.value;
        if ($tmp3630) goto $l3632;
        panda$core$Bit $tmp3633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 105 }));
        $tmp3630 = $tmp3633.value;
        $l3632:;
        panda$core$Bit $tmp3634 = { $tmp3630 };
        if ($tmp3634.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3636 = (($fn3635) self->$class->vtable[63])(self, p_e);
            return $tmp3636;
        }
        }
        else {
        panda$core$Bit $tmp3637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 113 }));
        if ($tmp3637.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3639 = (($fn3638) self->$class->vtable[64])(self, p_e);
            return $tmp3639;
        }
        }
        else {
        panda$core$Bit $tmp3642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 109 }));
        bool $tmp3641 = $tmp3642.value;
        if ($tmp3641) goto $l3643;
        panda$core$Bit $tmp3644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 154 }));
        $tmp3641 = $tmp3644.value;
        $l3643:;
        panda$core$Bit $tmp3645 = { $tmp3641 };
        bool $tmp3640 = $tmp3645.value;
        if ($tmp3640) goto $l3646;
        panda$core$Bit $tmp3647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 110 }));
        $tmp3640 = $tmp3647.value;
        $l3646:;
        panda$core$Bit $tmp3648 = { $tmp3640 };
        if ($tmp3648.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3650 = (($fn3649) self->$class->vtable[62])(self, p_e);
            return $tmp3650;
        }
        }
        else {
        panda$core$Bit $tmp3651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 114 }));
        if ($tmp3651.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3653 = (($fn3652) self->$class->vtable[65])(self, p_e);
            return $tmp3653;
        }
        }
        else {
        panda$core$Bit $tmp3654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 115 }));
        if ($tmp3654.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3656 = (($fn3655) self->$class->vtable[66])(self, p_e);
            return $tmp3656;
        }
        }
        else {
        panda$core$Bit $tmp3657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 111 }));
        if ($tmp3657.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3659 = (($fn3658) self->$class->vtable[67])(self, p_e);
            return $tmp3659;
        }
        }
        else {
        panda$core$Bit $tmp3660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$857243606, ((panda$core$Int64) { 117 }));
        if ($tmp3660.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3662 = (($fn3661) self->$class->vtable[68])(self, p_e);
            return $tmp3662;
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
    org$pandalanguage$pandac$SymbolTable* symbols3663;
    panda$collections$Array* result3666;
    panda$collections$Iterator* stmt$Iter3669;
    org$pandalanguage$pandac$ASTNode* stmt3681;
    org$pandalanguage$pandac$IRNode* compiled3686;
    org$pandalanguage$pandac$SymbolTable* $tmp3664 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3664->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3664->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3664, self->symbolTable);
    symbols3663 = $tmp3664;
    self->symbolTable = symbols3663;
    panda$collections$Array* $tmp3667 = (panda$collections$Array*) malloc(40);
    $tmp3667->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3667->refCount.value = 1;
    panda$collections$Array$init($tmp3667);
    result3666 = $tmp3667;
    {
        ITable* $tmp3670 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3670->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3670 = $tmp3670->next;
        }
        $fn3672 $tmp3671 = $tmp3670->methods[0];
        panda$collections$Iterator* $tmp3673 = $tmp3671(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3669 = $tmp3673;
        $l3674:;
        ITable* $tmp3676 = stmt$Iter3669->$class->itable;
        while ($tmp3676->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3676 = $tmp3676->next;
        }
        $fn3678 $tmp3677 = $tmp3676->methods[0];
        panda$core$Bit $tmp3679 = $tmp3677(stmt$Iter3669);
        panda$core$Bit $tmp3680 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3679);
        if (!$tmp3680.value) goto $l3675;
        {
            ITable* $tmp3682 = stmt$Iter3669->$class->itable;
            while ($tmp3682->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3682 = $tmp3682->next;
            }
            $fn3684 $tmp3683 = $tmp3682->methods[1];
            panda$core$Object* $tmp3685 = $tmp3683(stmt$Iter3669);
            stmt3681 = ((org$pandalanguage$pandac$ASTNode*) $tmp3685);
            org$pandalanguage$pandac$IRNode* $tmp3688 = (($fn3687) self->$class->vtable[88])(self, stmt3681);
            compiled3686 = $tmp3688;
            if (((panda$core$Bit) { compiled3686 == NULL }).value) {
            {
                panda$core$Object* $tmp3689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3663->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3689);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3666, ((panda$core$Object*) compiled3686));
        }
        goto $l3674;
        $l3675:;
    }
    panda$core$Object* $tmp3690 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3663->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3690);
    org$pandalanguage$pandac$IRNode* $tmp3691 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3691->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3691, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result3666));
    return $tmp3691;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3693;
    org$pandalanguage$pandac$IRNode* ifTrue3701;
    panda$collections$Array* children3706;
    org$pandalanguage$pandac$IRNode* ifFalse3712;
    panda$core$Object* $tmp3695 = (($fn3694) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3697 = (($fn3696) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3695));
    org$pandalanguage$pandac$Type* $tmp3698 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3700 = (($fn3699) self->$class->vtable[33])(self, $tmp3697, $tmp3698);
    test3693 = $tmp3700;
    if (((panda$core$Bit) { test3693 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3703 = (($fn3702) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3705 = (($fn3704) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3703));
    ifTrue3701 = $tmp3705;
    panda$collections$Array* $tmp3707 = (panda$collections$Array*) malloc(40);
    $tmp3707->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3707->refCount.value = 1;
    panda$collections$Array$init($tmp3707);
    children3706 = $tmp3707;
    panda$collections$Array$add$panda$collections$Array$T(children3706, ((panda$core$Object*) test3693));
    panda$collections$Array$add$panda$collections$Array$T(children3706, ((panda$core$Object*) ifTrue3701));
    panda$core$Int64 $tmp3710 = (($fn3709) p_i->children->$class->vtable[3])(p_i->children);
    panda$core$Bit $tmp3711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3710, ((panda$core$Int64) { 3 }));
    if ($tmp3711.value) {
    {
        panda$core$Object* $tmp3714 = (($fn3713) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3716 = (($fn3715) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3714));
        ifFalse3712 = $tmp3716;
        if (((panda$core$Bit) { ifFalse3712 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3706, ((panda$core$Object*) ifFalse3712));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3717 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3717->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3717->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3717, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children3706));
    return $tmp3717;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3719;
    org$pandalanguage$pandac$IRNode* list3720;
    org$pandalanguage$pandac$Type* t3728;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3747;
    org$pandalanguage$pandac$IRNode* body3750;
    panda$collections$Array* children3753;
    panda$core$Bit $tmp3722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3721 = $tmp3722.value;
    if (!$tmp3721) goto $l3723;
    panda$core$Int64 $tmp3725 = (($fn3724) p_astTarget->children->$class->vtable[3])(p_astTarget->children);
    panda$core$Bit $tmp3726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3725, ((panda$core$Int64) { 1 }));
    $tmp3721 = $tmp3726.value;
    $l3723:;
    panda$core$Bit $tmp3727 = { $tmp3721 };
    if ($tmp3727.value) {
    {
        panda$core$Object* $tmp3730 = (($fn3729) p_astTarget->children->$class->vtable[2])(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3732 = (($fn3731) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3730));
        org$pandalanguage$pandac$Type* $tmp3734 = (($fn3733) self->$class->vtable[4])(self, $tmp3732);
        t3728 = $tmp3734;
        org$pandalanguage$pandac$Type* $tmp3735 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3728);
        org$pandalanguage$pandac$IRNode* $tmp3737 = (($fn3736) self->$class->vtable[33])(self, p_rawList, $tmp3735);
        list3720 = $tmp3737;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3739 = (($fn3738) self->$class->vtable[8])(self, p_rawList);
        list3720 = $tmp3739;
    }
    }
    if (((panda$core$Bit) { list3720 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3720->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3740.value) {
    {
        panda$core$Object* $tmp3742 = (($fn3741) list3720->type->subtypes->$class->vtable[2])(list3720->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3744 = (($fn3743) ((org$pandalanguage$pandac$Type*) $tmp3742)->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$Type*) $tmp3742)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3719 = ((org$pandalanguage$pandac$Type*) $tmp3744);
    }
    }
    else {
    {
        panda$core$Object* $tmp3746 = (($fn3745) list3720->type->subtypes->$class->vtable[2])(list3720->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3719 = ((org$pandalanguage$pandac$Type*) $tmp3746);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3749 = (($fn3748) self->$class->vtable[78])(self, p_astTarget, NULL, elementType3719);
    target3747 = $tmp3749;
    if (((panda$core$Bit) { target3747 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3752 = (($fn3751) self->$class->vtable[88])(self, p_body);
    body3750 = $tmp3752;
    if (((panda$core$Bit) { body3750 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3754 = (panda$collections$Array*) malloc(40);
    $tmp3754->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3754->refCount.value = 1;
    panda$collections$Array$init($tmp3754);
    children3753 = $tmp3754;
    panda$collections$Array$add$panda$collections$Array$T(children3753, ((panda$core$Object*) target3747->target));
    panda$collections$Array$add$panda$collections$Array$T(children3753, ((panda$core$Object*) list3720));
    panda$collections$Array$add$panda$collections$Array$T(children3753, ((panda$core$Object*) body3750));
    org$pandalanguage$pandac$IRNode* $tmp3756 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3756->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3756->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3756, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3753));
    return $tmp3756;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3758;
    org$pandalanguage$pandac$Variable* targetVar3763;
    panda$collections$Array* subtypes3764;
    org$pandalanguage$pandac$Type* iterType3768;
    org$pandalanguage$pandac$Variable* iter3780;
    panda$collections$Array* statements3786;
    panda$collections$Array* declChildren3789;
    panda$collections$Array* varChildren3794;
    panda$collections$Array* whileChildren3801;
    org$pandalanguage$pandac$IRNode* done3804;
    org$pandalanguage$pandac$IRNode* notCall3812;
    panda$collections$Array* valueDeclChildren3818;
    org$pandalanguage$pandac$IRNode* next3823;
    panda$collections$Array* valueVarChildren3831;
    org$pandalanguage$pandac$IRNode* block3836;
    panda$collections$Array* blockChildren3839;
    panda$core$Object* $tmp3760 = (($fn3759) p_iterator->type->subtypes->$class->vtable[2])(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3762 = (($fn3761) self->$class->vtable[78])(self, p_astTarget, NULL, ((org$pandalanguage$pandac$Type*) $tmp3760));
    target3758 = $tmp3762;
    if (((panda$core$Bit) { target3758 == NULL }).value) {
    {
        return NULL;
    }
    }
    targetVar3763 = ((org$pandalanguage$pandac$Variable*) target3758->target->payload);
    panda$collections$Array* $tmp3765 = (panda$collections$Array*) malloc(40);
    $tmp3765->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3765->refCount.value = 1;
    panda$collections$Array$init($tmp3765);
    subtypes3764 = $tmp3765;
    org$pandalanguage$pandac$Type* $tmp3767 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3764, ((panda$core$Object*) $tmp3767));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3764, ((panda$core$Object*) target3758->target->type));
    org$pandalanguage$pandac$Type* $tmp3769 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp3769->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3769->refCount.value = 1;
    panda$core$Object* $tmp3772 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3764, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3771, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3772)));
    panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, &$s3774);
    panda$core$Object* $tmp3776 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3764, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3777 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3775, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3776)));
    panda$core$String* $tmp3779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3777, &$s3778);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3769, $tmp3779, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes3764), ((panda$core$Bit) { true }));
    iterType3768 = $tmp3769;
    org$pandalanguage$pandac$Variable* $tmp3781 = (org$pandalanguage$pandac$Variable*) malloc(56);
    $tmp3781->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3781->refCount.value = 1;
    panda$core$String* $tmp3784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3763)->name, &$s3783);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3781, p_iterator->offset, $tmp3784, iterType3768);
    iter3780 = $tmp3781;
    (($fn3785) self->symbolTable->$class->vtable[2])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3780));
    panda$collections$Array* $tmp3787 = (panda$collections$Array*) malloc(40);
    $tmp3787->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3787->refCount.value = 1;
    panda$collections$Array$init($tmp3787);
    statements3786 = $tmp3787;
    panda$collections$Array* $tmp3790 = (panda$collections$Array*) malloc(40);
    $tmp3790->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3790->refCount.value = 1;
    panda$collections$Array$init($tmp3790);
    declChildren3789 = $tmp3790;
    org$pandalanguage$pandac$IRNode* $tmp3792 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3792->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3792->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3792, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3780->type, iter3780);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3789, ((panda$core$Object*) $tmp3792));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3789, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3795 = (panda$collections$Array*) malloc(40);
    $tmp3795->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3795->refCount.value = 1;
    panda$collections$Array$init($tmp3795);
    varChildren3794 = $tmp3795;
    org$pandalanguage$pandac$IRNode* $tmp3797 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3797->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3797, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3780)->offset, ((panda$collections$ListView*) declChildren3789));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3794, ((panda$core$Object*) $tmp3797));
    org$pandalanguage$pandac$IRNode* $tmp3799 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3799->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3799->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3799, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3780)->offset, ((panda$collections$ListView*) varChildren3794));
    panda$collections$Array$add$panda$collections$Array$T(statements3786, ((panda$core$Object*) $tmp3799));
    panda$collections$Array* $tmp3802 = (panda$collections$Array*) malloc(40);
    $tmp3802->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3802->refCount.value = 1;
    panda$collections$Array$init($tmp3802);
    whileChildren3801 = $tmp3802;
    org$pandalanguage$pandac$IRNode* $tmp3805 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3805->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3805->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3805, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3780)->offset, iter3780->type, iter3780);
    panda$collections$Array* $tmp3808 = (panda$collections$Array*) malloc(40);
    $tmp3808->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3808->refCount.value = 1;
    panda$collections$Array$init($tmp3808);
    org$pandalanguage$pandac$IRNode* $tmp3811 = (($fn3810) self->$class->vtable[41])(self, $tmp3805, &$s3807, ((panda$collections$ListView*) $tmp3808), NULL);
    done3804 = $tmp3811;
    if (((panda$core$Bit) { done3804 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3814 = (panda$collections$Array*) malloc(40);
    $tmp3814->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3814->refCount.value = 1;
    panda$collections$Array$init($tmp3814);
    org$pandalanguage$pandac$IRNode* $tmp3817 = (($fn3816) self->$class->vtable[41])(self, done3804, &$s3813, ((panda$collections$ListView*) $tmp3814), NULL);
    notCall3812 = $tmp3817;
    if (((panda$core$Bit) { notCall3812 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3801, ((panda$core$Object*) notCall3812));
    panda$collections$Array* $tmp3819 = (panda$collections$Array*) malloc(40);
    $tmp3819->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3819->refCount.value = 1;
    panda$collections$Array$init($tmp3819);
    valueDeclChildren3818 = $tmp3819;
    org$pandalanguage$pandac$IRNode* $tmp3821 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3821->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3821->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3821, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar3763->type, targetVar3763);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3818, ((panda$core$Object*) $tmp3821));
    org$pandalanguage$pandac$IRNode* $tmp3824 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3824->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3824->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3824, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3780->type, iter3780);
    panda$collections$Array* $tmp3827 = (panda$collections$Array*) malloc(40);
    $tmp3827->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3827->refCount.value = 1;
    panda$collections$Array$init($tmp3827);
    org$pandalanguage$pandac$IRNode* $tmp3830 = (($fn3829) self->$class->vtable[41])(self, $tmp3824, &$s3826, ((panda$collections$ListView*) $tmp3827), NULL);
    next3823 = $tmp3830;
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3818, ((panda$core$Object*) next3823));
    panda$collections$Array* $tmp3832 = (panda$collections$Array*) malloc(40);
    $tmp3832->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3832->refCount.value = 1;
    panda$collections$Array$init($tmp3832);
    valueVarChildren3831 = $tmp3832;
    org$pandalanguage$pandac$IRNode* $tmp3834 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3834->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3834->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3834, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3818));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3831, ((panda$core$Object*) $tmp3834));
    org$pandalanguage$pandac$IRNode* $tmp3838 = (($fn3837) self->$class->vtable[88])(self, p_body);
    block3836 = $tmp3838;
    if (((panda$core$Bit) { block3836 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3840 = (panda$collections$Array*) malloc(40);
    $tmp3840->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3840->refCount.value = 1;
    panda$collections$Array$init($tmp3840);
    blockChildren3839 = $tmp3840;
    org$pandalanguage$pandac$IRNode* $tmp3842 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3842->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3842->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3842, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3831));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3839, ((panda$core$Object*) $tmp3842));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3839, ((panda$collections$CollectionView*) block3836->children));
    org$pandalanguage$pandac$IRNode* $tmp3844 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3844->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3844->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3844, ((panda$core$Int64) { 1000 }), block3836->offset, ((panda$collections$ListView*) blockChildren3839));
    block3836 = $tmp3844;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3801, ((panda$core$Object*) block3836));
    org$pandalanguage$pandac$IRNode* $tmp3846 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3846->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3846->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3846, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3801));
    panda$collections$Array$add$panda$collections$Array$T(statements3786, ((panda$core$Object*) $tmp3846));
    org$pandalanguage$pandac$IRNode* $tmp3848 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3848->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3848->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3848, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3786));
    return $tmp3848;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3851;
    org$pandalanguage$pandac$SymbolTable* symbols3857;
    org$pandalanguage$pandac$IRNode* result3860;
    panda$core$Bit found3875;
    panda$collections$Iterator* intf$Iter3876;
    org$pandalanguage$pandac$Type* intf3890;
    org$pandalanguage$pandac$IRNode* iterator3904;
    org$pandalanguage$pandac$IRNode* iterable3922;
    org$pandalanguage$pandac$IRNode* iterator3925;
    (($fn3850) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3853 = (($fn3852) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3855 = (($fn3854) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3853));
    list3851 = $tmp3855;
    if (((panda$core$Bit) { list3851 == NULL }).value) {
    {
        (($fn3856) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3858 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3858->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3858->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3858, self->symbolTable);
    symbols3857 = $tmp3858;
    self->symbolTable = symbols3857;
    panda$core$Bit $tmp3862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3851->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3861 = $tmp3862.value;
    if ($tmp3861) goto $l3863;
    panda$core$Bit $tmp3865 = (($fn3864) list3851->type->$class->vtable[11])(list3851->type);
    $tmp3861 = $tmp3865.value;
    $l3863:;
    panda$core$Bit $tmp3866 = { $tmp3861 };
    if ($tmp3866.value) {
    {
        panda$core$Object* $tmp3868 = (($fn3867) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3870 = (($fn3869) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3872 = (($fn3871) self->$class->vtable[72])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3868), list3851, ((org$pandalanguage$pandac$ASTNode*) $tmp3870));
        result3860 = $tmp3872;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3874 = (($fn3873) self->$class->vtable[8])(self, list3851);
        list3851 = $tmp3874;
        if (((panda$core$Bit) { list3851 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3875 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3878 = (($fn3877) self->$class->vtable[15])(self, list3851->type);
            ITable* $tmp3879 = ((panda$collections$Iterable*) $tmp3878)->$class->itable;
            while ($tmp3879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3879 = $tmp3879->next;
            }
            $fn3881 $tmp3880 = $tmp3879->methods[0];
            panda$collections$Iterator* $tmp3882 = $tmp3880(((panda$collections$Iterable*) $tmp3878));
            intf$Iter3876 = $tmp3882;
            $l3883:;
            ITable* $tmp3885 = intf$Iter3876->$class->itable;
            while ($tmp3885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3885 = $tmp3885->next;
            }
            $fn3887 $tmp3886 = $tmp3885->methods[0];
            panda$core$Bit $tmp3888 = $tmp3886(intf$Iter3876);
            panda$core$Bit $tmp3889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3888);
            if (!$tmp3889.value) goto $l3884;
            {
                ITable* $tmp3891 = intf$Iter3876->$class->itable;
                while ($tmp3891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3891 = $tmp3891->next;
                }
                $fn3893 $tmp3892 = $tmp3891->methods[1];
                panda$core$Object* $tmp3894 = $tmp3892(intf$Iter3876);
                intf3890 = ((org$pandalanguage$pandac$Type*) $tmp3894);
                panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3890->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3895 = $tmp3896.value;
                if (!$tmp3895) goto $l3897;
                panda$core$Object* $tmp3899 = (($fn3898) intf3890->subtypes->$class->vtable[2])(intf3890->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3900 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3902 = (($fn3901) ((org$pandalanguage$pandac$Type*) $tmp3899)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp3899), ((panda$core$Object*) $tmp3900));
                $tmp3895 = $tmp3902.value;
                $l3897:;
                panda$core$Bit $tmp3903 = { $tmp3895 };
                if ($tmp3903.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3906 = (($fn3905) self->$class->vtable[33])(self, list3851, intf3890);
                    iterator3904 = $tmp3906;
                    panda$core$Object* $tmp3908 = (($fn3907) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3910 = (($fn3909) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3912 = (($fn3911) self->$class->vtable[73])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3908), iterator3904, ((org$pandalanguage$pandac$ASTNode*) $tmp3910));
                    result3860 = $tmp3912;
                    found3875 = ((panda$core$Bit) { true });
                    goto $l3884;
                }
                }
                panda$core$Bit $tmp3914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3890->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3913 = $tmp3914.value;
                if (!$tmp3913) goto $l3915;
                panda$core$Object* $tmp3917 = (($fn3916) intf3890->subtypes->$class->vtable[2])(intf3890->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3918 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3920 = (($fn3919) ((org$pandalanguage$pandac$Type*) $tmp3917)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp3917), ((panda$core$Object*) $tmp3918));
                $tmp3913 = $tmp3920.value;
                $l3915:;
                panda$core$Bit $tmp3921 = { $tmp3913 };
                if ($tmp3921.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3924 = (($fn3923) self->$class->vtable[33])(self, list3851, intf3890);
                    iterable3922 = $tmp3924;
                    panda$collections$Array* $tmp3927 = (panda$collections$Array*) malloc(40);
                    $tmp3927->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3927->refCount.value = 1;
                    panda$collections$Array$init($tmp3927);
                    org$pandalanguage$pandac$IRNode* $tmp3930 = (($fn3929) self->$class->vtable[40])(self, iterable3922, &$s3926, ((panda$collections$ListView*) $tmp3927));
                    iterator3925 = $tmp3930;
                    panda$core$Object* $tmp3932 = (($fn3931) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3934 = (($fn3933) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3936 = (($fn3935) self->$class->vtable[73])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3932), iterator3925, ((org$pandalanguage$pandac$ASTNode*) $tmp3934));
                    result3860 = $tmp3936;
                    found3875 = ((panda$core$Bit) { true });
                    goto $l3884;
                }
                }
            }
            goto $l3883;
            $l3884:;
        }
    }
    }
    panda$core$Object* $tmp3937 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3857->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3937);
    (($fn3938) self->loops->$class->vtable[3])(self->loops);
    return result3860;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3940;
    org$pandalanguage$pandac$IRNode* stmt3949;
    panda$collections$Array* children3955;
    (($fn3939) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3942 = (($fn3941) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3944 = (($fn3943) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3942));
    org$pandalanguage$pandac$Type* $tmp3945 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3947 = (($fn3946) self->$class->vtable[33])(self, $tmp3944, $tmp3945);
    test3940 = $tmp3947;
    if (((panda$core$Bit) { test3940 == NULL }).value) {
    {
        (($fn3948) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3951 = (($fn3950) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3953 = (($fn3952) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3951));
    stmt3949 = $tmp3953;
    if (((panda$core$Bit) { stmt3949 == NULL }).value) {
    {
        (($fn3954) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3956 = (panda$collections$Array*) malloc(40);
    $tmp3956->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3956->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3956, ((panda$core$Int64) { 2 }));
    children3955 = $tmp3956;
    panda$collections$Array$add$panda$collections$Array$T(children3955, ((panda$core$Object*) test3940));
    panda$collections$Array$add$panda$collections$Array$T(children3955, ((panda$core$Object*) stmt3949));
    (($fn3958) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3959 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3959->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3959->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3959, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3955));
    return $tmp3959;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3962;
    org$pandalanguage$pandac$IRNode* test3968;
    panda$collections$Array* children3977;
    (($fn3961) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3964 = (($fn3963) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3966 = (($fn3965) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3964));
    stmt3962 = $tmp3966;
    if (((panda$core$Bit) { stmt3962 == NULL }).value) {
    {
        (($fn3967) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3970 = (($fn3969) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3972 = (($fn3971) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3970));
    org$pandalanguage$pandac$Type* $tmp3973 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3975 = (($fn3974) self->$class->vtable[33])(self, $tmp3972, $tmp3973);
    test3968 = $tmp3975;
    if (((panda$core$Bit) { test3968 == NULL }).value) {
    {
        (($fn3976) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3978 = (panda$collections$Array*) malloc(40);
    $tmp3978->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3978->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3978, ((panda$core$Int64) { 2 }));
    children3977 = $tmp3978;
    panda$collections$Array$add$panda$collections$Array$T(children3977, ((panda$core$Object*) stmt3962));
    panda$collections$Array$add$panda$collections$Array$T(children3977, ((panda$core$Object*) test3968));
    (($fn3980) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3981 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3981->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3981->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3981, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3977));
    return $tmp3981;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3984;
    panda$collections$Array* children3990;
    (($fn3983) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3986 = (($fn3985) p_l->children->$class->vtable[2])(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3988 = (($fn3987) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3986));
    stmt3984 = $tmp3988;
    if (((panda$core$Bit) { stmt3984 == NULL }).value) {
    {
        (($fn3989) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3991 = (panda$collections$Array*) malloc(40);
    $tmp3991->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3991->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3991, ((panda$core$Int64) { 1 }));
    children3990 = $tmp3991;
    panda$collections$Array$add$panda$collections$Array$T(children3990, ((panda$core$Object*) stmt3984));
    (($fn3993) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3994 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3994->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3994->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3994, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3990));
    return $tmp3994;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3996;
    panda$core$Int64 $match$970893997;
    org$pandalanguage$pandac$Type* type3999;
    org$pandalanguage$pandac$Variable* v4017;
    value3996 = p_rawValue;
    {
        $match$970893997 = p_t->kind;
        panda$core$Bit $tmp3998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$970893997, ((panda$core$Int64) { 106 }));
        if ($tmp3998.value) {
        {
            panda$core$Int64 $tmp4001 = (($fn4000) p_t->children->$class->vtable[3])(p_t->children);
            panda$core$Bit $tmp4002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4001, ((panda$core$Int64) { 1 }));
            if ($tmp4002.value) {
            {
                panda$core$Object* $tmp4004 = (($fn4003) p_t->children->$class->vtable[2])(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4006 = (($fn4005) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp4004));
                org$pandalanguage$pandac$Type* $tmp4008 = (($fn4007) self->$class->vtable[4])(self, $tmp4006);
                type3999 = $tmp4008;
            }
            }
            else {
            if (((panda$core$Bit) { value3996 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4010 = (($fn4009) self->$class->vtable[8])(self, value3996);
                value3996 = $tmp4010;
                if (((panda$core$Bit) { value3996 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4012 = (($fn4011) self->$class->vtable[27])(self, value3996);
                type3999 = $tmp4012;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3999 = p_valueType;
            }
            }
            else {
            {
                (($fn4014) self->$class->vtable[96])(self, p_t->offset, &$s4013);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3996 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4016 = (($fn4015) self->$class->vtable[33])(self, value3996, type3999);
                value3996 = $tmp4016;
                if (((panda$core$Bit) { value3996 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4018 = (org$pandalanguage$pandac$Variable*) malloc(56);
            $tmp4018->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4018->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4018, p_t->offset, ((panda$core$String*) p_t->payload), type3999);
            v4017 = $tmp4018;
            (($fn4020) self->symbolTable->$class->vtable[2])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4017));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4021 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4021->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4021->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4023 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp4023->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4023->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4023, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4017)->offset, v4017->type, v4017);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4021, $tmp4023, value3996);
            return $tmp4021;
        }
        }
        else {
        panda$core$Bit $tmp4025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$970893997, ((panda$core$Int64) { 153 }));
        if ($tmp4025.value) {
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
    org$pandalanguage$pandac$IRNode* value4026;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4034;
    panda$collections$Array* children4039;
    panda$core$Int64 $tmp4028 = (($fn4027) p_d->children->$class->vtable[3])(p_d->children);
    panda$core$Bit $tmp4029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4028, ((panda$core$Int64) { 2 }));
    if ($tmp4029.value) {
    {
        panda$core$Object* $tmp4031 = (($fn4030) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4033 = (($fn4032) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4031));
        value4026 = $tmp4033;
        if (((panda$core$Bit) { value4026 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4026 = NULL;
    }
    }
    panda$core$Object* $tmp4036 = (($fn4035) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4038 = (($fn4037) self->$class->vtable[78])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4036), value4026, NULL);
    target4034 = $tmp4038;
    if (((panda$core$Bit) { target4034 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4040 = (panda$collections$Array*) malloc(40);
    $tmp4040->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4040->refCount.value = 1;
    panda$collections$Array$init($tmp4040);
    children4039 = $tmp4040;
    panda$collections$Array$add$panda$collections$Array$T(children4039, ((panda$core$Object*) target4034->target));
    if (((panda$core$Bit) { target4034->value != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children4039, ((panda$core$Object*) target4034->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4042 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4042->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4042->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4042, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children4039));
    return $tmp4042;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found4044;
    panda$collections$Iterator* label$Iter4045;
    panda$core$String* label4057;
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found4044 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4046 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4046->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4046 = $tmp4046->next;
            }
            $fn4048 $tmp4047 = $tmp4046->methods[0];
            panda$collections$Iterator* $tmp4049 = $tmp4047(((panda$collections$Iterable*) self->loops));
            label$Iter4045 = $tmp4049;
            $l4050:;
            ITable* $tmp4052 = label$Iter4045->$class->itable;
            while ($tmp4052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4052 = $tmp4052->next;
            }
            $fn4054 $tmp4053 = $tmp4052->methods[0];
            panda$core$Bit $tmp4055 = $tmp4053(label$Iter4045);
            panda$core$Bit $tmp4056 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4055);
            if (!$tmp4056.value) goto $l4051;
            {
                ITable* $tmp4058 = label$Iter4045->$class->itable;
                while ($tmp4058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4058 = $tmp4058->next;
                }
                $fn4060 $tmp4059 = $tmp4058->methods[1];
                panda$core$Object* $tmp4061 = $tmp4059(label$Iter4045);
                label4057 = ((panda$core$String*) $tmp4061);
                bool $tmp4062 = ((panda$core$Bit) { label4057 != NULL }).value;
                if (!$tmp4062) goto $l4063;
                panda$core$Bit $tmp4064 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4057, ((panda$core$String*) p_b->payload));
                $tmp4062 = $tmp4064.value;
                $l4063:;
                panda$core$Bit $tmp4065 = { $tmp4062 };
                if ($tmp4065.value) {
                {
                    found4044 = ((panda$core$Bit) { true });
                    goto $l4051;
                }
                }
            }
            goto $l4050;
            $l4051:;
        }
        panda$core$Bit $tmp4066 = panda$core$Bit$$NOT$R$panda$core$Bit(found4044);
        if ($tmp4066.value) {
        {
            panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4067, p_b->payload);
            panda$core$String* $tmp4070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, &$s4069);
            panda$core$String* $tmp4072 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4071, p_b->payload);
            panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4072, &$s4073);
            panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4070, $tmp4074);
            (($fn4076) self->$class->vtable[96])(self, p_b->offset, $tmp4075);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4078 = (($fn4077) self->loops->$class->vtable[7])(self->loops);
    panda$core$Bit $tmp4079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4078, ((panda$core$Int64) { 0 }));
    if ($tmp4079.value) {
    {
        (($fn4081) self->$class->vtable[96])(self, p_b->offset, &$s4080);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4082 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4082->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4082->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp4082, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp4082;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found4084;
    panda$collections$Iterator* label$Iter4085;
    panda$core$String* label4097;
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found4084 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4086 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4086->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4086 = $tmp4086->next;
            }
            $fn4088 $tmp4087 = $tmp4086->methods[0];
            panda$collections$Iterator* $tmp4089 = $tmp4087(((panda$collections$Iterable*) self->loops));
            label$Iter4085 = $tmp4089;
            $l4090:;
            ITable* $tmp4092 = label$Iter4085->$class->itable;
            while ($tmp4092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4092 = $tmp4092->next;
            }
            $fn4094 $tmp4093 = $tmp4092->methods[0];
            panda$core$Bit $tmp4095 = $tmp4093(label$Iter4085);
            panda$core$Bit $tmp4096 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4095);
            if (!$tmp4096.value) goto $l4091;
            {
                ITable* $tmp4098 = label$Iter4085->$class->itable;
                while ($tmp4098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4098 = $tmp4098->next;
                }
                $fn4100 $tmp4099 = $tmp4098->methods[1];
                panda$core$Object* $tmp4101 = $tmp4099(label$Iter4085);
                label4097 = ((panda$core$String*) $tmp4101);
                bool $tmp4102 = ((panda$core$Bit) { label4097 != NULL }).value;
                if (!$tmp4102) goto $l4103;
                panda$core$Bit $tmp4104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4097, ((panda$core$String*) p_c->payload));
                $tmp4102 = $tmp4104.value;
                $l4103:;
                panda$core$Bit $tmp4105 = { $tmp4102 };
                if ($tmp4105.value) {
                {
                    found4084 = ((panda$core$Bit) { true });
                    goto $l4091;
                }
                }
            }
            goto $l4090;
            $l4091:;
        }
        panda$core$Bit $tmp4106 = panda$core$Bit$$NOT$R$panda$core$Bit(found4084);
        if ($tmp4106.value) {
        {
            panda$core$String* $tmp4108 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4107, p_c->payload);
            panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4108, &$s4109);
            panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4111, p_c->payload);
            panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, &$s4113);
            panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, $tmp4114);
            (($fn4116) self->$class->vtable[96])(self, p_c->offset, $tmp4115);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4118 = (($fn4117) self->loops->$class->vtable[7])(self->loops);
    panda$core$Bit $tmp4119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4118, ((panda$core$Int64) { 0 }));
    if ($tmp4119.value) {
    {
        (($fn4121) self->$class->vtable[96])(self, p_c->offset, &$s4120);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4122 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4122->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4122->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp4122, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp4122;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4134;
    panda$collections$Array* children4143;
    panda$core$Int64 $tmp4125 = (($fn4124) p_r->children->$class->vtable[3])(p_r->children);
    panda$core$Bit $tmp4126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4125, ((panda$core$Int64) { 1 }));
    if ($tmp4126.value) {
    {
        panda$core$Object* $tmp4128 = (($fn4127) self->currentMethod->$class->vtable[4])(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4129 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4131 = (($fn4130) ((org$pandalanguage$pandac$MethodDecl*) $tmp4128)->returnType->$class->vtable[4])(((org$pandalanguage$pandac$MethodDecl*) $tmp4128)->returnType, ((panda$core$Object*) $tmp4129));
        if ($tmp4131.value) {
        {
            (($fn4133) self->$class->vtable[96])(self, p_r->offset, &$s4132);
            return NULL;
        }
        }
        panda$core$Object* $tmp4136 = (($fn4135) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4138 = (($fn4137) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4136));
        panda$core$Object* $tmp4140 = (($fn4139) self->currentMethod->$class->vtable[4])(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4142 = (($fn4141) self->$class->vtable[33])(self, $tmp4138, ((org$pandalanguage$pandac$MethodDecl*) $tmp4140)->returnType);
        value4134 = $tmp4142;
        if (((panda$core$Bit) { value4134 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4144 = (panda$collections$Array*) malloc(40);
        $tmp4144->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4144->refCount.value = 1;
        panda$collections$Array$init($tmp4144);
        children4143 = $tmp4144;
        panda$collections$Array$add$panda$collections$Array$T(children4143, ((panda$core$Object*) value4134));
        org$pandalanguage$pandac$IRNode* $tmp4146 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp4146->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4146->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4146, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children4143));
        return $tmp4146;
    }
    }
    panda$core$Object* $tmp4149 = (($fn4148) self->currentMethod->$class->vtable[4])(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4150 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4152 = (($fn4151) ((org$pandalanguage$pandac$MethodDecl*) $tmp4149)->returnType->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp4149)->returnType, ((panda$core$Object*) $tmp4150));
    if ($tmp4152.value) {
    {
        (($fn4154) self->$class->vtable[96])(self, p_r->offset, &$s4153);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4155 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4155->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4155->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp4155, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp4155;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4157;
    org$pandalanguage$pandac$ClassDecl* bit4165;
    org$pandalanguage$pandac$Symbol* value4169;
    panda$collections$Array* fieldChildren4174;
    panda$collections$Array* children4180;
    org$pandalanguage$pandac$IRNode* msg4186;
    panda$core$Object* $tmp4159 = (($fn4158) p_a->children->$class->vtable[2])(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4161 = (($fn4160) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4159));
    test4157 = $tmp4161;
    if (((panda$core$Bit) { test4157 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4162 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4164 = (($fn4163) self->$class->vtable[33])(self, test4157, $tmp4162);
    test4157 = $tmp4164;
    if (((panda$core$Bit) { test4157 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4166 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4168 = (($fn4167) self->$class->vtable[14])(self, $tmp4166);
    bit4165 = $tmp4168;
    org$pandalanguage$pandac$Symbol* $tmp4172 = (($fn4171) bit4165->symbolTable->$class->vtable[6])(bit4165->symbolTable, &$s4170);
    value4169 = $tmp4172;
    (($fn4173) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$FieldDecl*) value4169));
    panda$collections$Array* $tmp4175 = (panda$collections$Array*) malloc(40);
    $tmp4175->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4175->refCount.value = 1;
    panda$collections$Array$init($tmp4175);
    fieldChildren4174 = $tmp4175;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4174, ((panda$core$Object*) test4157));
    org$pandalanguage$pandac$IRNode* $tmp4177 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4177->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4177->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4179 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4177, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp4179, ((panda$core$Object*) value4169), ((panda$collections$ListView*) fieldChildren4174));
    test4157 = $tmp4177;
    panda$collections$Array* $tmp4181 = (panda$collections$Array*) malloc(40);
    $tmp4181->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4181->refCount.value = 1;
    panda$collections$Array$init($tmp4181);
    children4180 = $tmp4181;
    panda$collections$Array$add$panda$collections$Array$T(children4180, ((panda$core$Object*) test4157));
    panda$core$Int64 $tmp4184 = (($fn4183) p_a->children->$class->vtable[3])(p_a->children);
    panda$core$Bit $tmp4185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4184, ((panda$core$Int64) { 2 }));
    if ($tmp4185.value) {
    {
        panda$core$Object* $tmp4188 = (($fn4187) p_a->children->$class->vtable[2])(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4190 = (($fn4189) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4188));
        msg4186 = $tmp4190;
        if (((panda$core$Bit) { msg4186 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4191 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4193 = (($fn4192) self->$class->vtable[33])(self, msg4186, $tmp4191);
        msg4186 = $tmp4193;
        if (((panda$core$Bit) { msg4186 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4180, ((panda$core$Object*) msg4186));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4194 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4194->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4194->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4194, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children4180));
    return $tmp4194;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$collections$Array* decls4196;
    panda$collections$Iterator* astDecl$Iter4199;
    org$pandalanguage$pandac$ASTNode* astDecl4211;
    org$pandalanguage$pandac$IRNode* decl4216;
    panda$core$Int64 kind4219;
    panda$core$Int64 $match$1033344220;
    panda$collections$Array* $tmp4197 = (panda$collections$Array*) malloc(40);
    $tmp4197->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4197->refCount.value = 1;
    panda$collections$Array$init($tmp4197);
    decls4196 = $tmp4197;
    {
        ITable* $tmp4200 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4200->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4200 = $tmp4200->next;
        }
        $fn4202 $tmp4201 = $tmp4200->methods[0];
        panda$collections$Iterator* $tmp4203 = $tmp4201(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4199 = $tmp4203;
        $l4204:;
        ITable* $tmp4206 = astDecl$Iter4199->$class->itable;
        while ($tmp4206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4206 = $tmp4206->next;
        }
        $fn4208 $tmp4207 = $tmp4206->methods[0];
        panda$core$Bit $tmp4209 = $tmp4207(astDecl$Iter4199);
        panda$core$Bit $tmp4210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4209);
        if (!$tmp4210.value) goto $l4205;
        {
            ITable* $tmp4212 = astDecl$Iter4199->$class->itable;
            while ($tmp4212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4212 = $tmp4212->next;
            }
            $fn4214 $tmp4213 = $tmp4212->methods[1];
            panda$core$Object* $tmp4215 = $tmp4213(astDecl$Iter4199);
            astDecl4211 = ((org$pandalanguage$pandac$ASTNode*) $tmp4215);
            org$pandalanguage$pandac$IRNode* $tmp4218 = (($fn4217) self->$class->vtable[79])(self, astDecl4211);
            decl4216 = $tmp4218;
            if (((panda$core$Bit) { decl4216 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4196, ((panda$core$Object*) decl4216));
        }
        goto $l4204;
        $l4205:;
    }
    {
        $match$1033344220 = p_v->kind;
        panda$core$Bit $tmp4221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033344220, ((panda$core$Int64) { 130 }));
        if ($tmp4221.value) {
        {
            kind4219 = ((panda$core$Int64) { 1017 });
        }
        }
        else {
        panda$core$Bit $tmp4222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033344220, ((panda$core$Int64) { 131 }));
        if ($tmp4222.value) {
        {
            kind4219 = ((panda$core$Int64) { 1018 });
        }
        }
        else {
        panda$core$Bit $tmp4223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033344220, ((panda$core$Int64) { 133 }));
        if ($tmp4223.value) {
        {
            kind4219 = ((panda$core$Int64) { 1020 });
        }
        }
        else {
        panda$core$Bit $tmp4224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1033344220, ((panda$core$Int64) { 132 }));
        if ($tmp4224.value) {
        {
            kind4219 = ((panda$core$Int64) { 1019 });
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
    org$pandalanguage$pandac$IRNode* $tmp4225 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4225->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4225, kind4219, p_v->offset, ((panda$collections$ListView*) decls4196));
    return $tmp4225;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4227;
    panda$collections$Array* callChildren4230;
    org$pandalanguage$pandac$IRNode* testValue4233;
    org$pandalanguage$pandac$IRNode* $tmp4228 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4228->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4228->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4228, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target4227 = $tmp4228;
    panda$collections$Array* $tmp4231 = (panda$collections$Array*) malloc(40);
    $tmp4231->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4231->refCount.value = 1;
    panda$collections$Array$init($tmp4231);
    callChildren4230 = $tmp4231;
    org$pandalanguage$pandac$IRNode* $tmp4235 = (($fn4234) self->$class->vtable[69])(self, p_test);
    testValue4233 = $tmp4235;
    if (((panda$core$Bit) { testValue4233 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren4230, ((panda$core$Object*) testValue4233));
    org$pandalanguage$pandac$IRNode* $tmp4238 = (($fn4237) self->$class->vtable[40])(self, target4227, &$s4236, ((panda$collections$ListView*) callChildren4230));
    return $tmp4238;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4239;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp4246;
    org$pandalanguage$pandac$IRNode* nextTest4269;
    panda$collections$Array* callChildren4276;
    panda$collections$Array* statements4295;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp4298;
    org$pandalanguage$pandac$IRNode* statement4319;
    panda$collections$Array* children4336;
    panda$core$Object* $tmp4241 = (($fn4240) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4243 = (($fn4242) ((org$pandalanguage$pandac$ASTNode*) $tmp4241)->children->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp4241)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4245 = (($fn4244) self->$class->vtable[85])(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4243));
    test4239 = $tmp4245;
    if (((panda$core$Bit) { test4239 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4248 = (($fn4247) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4250 = (($fn4249) ((org$pandalanguage$pandac$ASTNode*) $tmp4248)->children->$class->vtable[3])(((org$pandalanguage$pandac$ASTNode*) $tmp4248)->children);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4246, ((panda$core$Int64) { 1 }), $tmp4250, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4252 = $tmp4246.start.value;
    panda$core$Int64 i4251 = { $tmp4252 };
    int64_t $tmp4254 = $tmp4246.end.value;
    int64_t $tmp4255 = $tmp4246.step.value;
    bool $tmp4256 = $tmp4246.inclusive.value;
    bool $tmp4263 = $tmp4255 > 0;
    if ($tmp4263) goto $l4261; else goto $l4262;
    $l4261:;
    if ($tmp4256) goto $l4264; else goto $l4265;
    $l4264:;
    if ($tmp4252 <= $tmp4254) goto $l4257; else goto $l4259;
    $l4265:;
    if ($tmp4252 < $tmp4254) goto $l4257; else goto $l4259;
    $l4262:;
    if ($tmp4256) goto $l4266; else goto $l4267;
    $l4266:;
    if ($tmp4252 >= $tmp4254) goto $l4257; else goto $l4259;
    $l4267:;
    if ($tmp4252 > $tmp4254) goto $l4257; else goto $l4259;
    $l4257:;
    {
        panda$core$Object* $tmp4271 = (($fn4270) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4273 = (($fn4272) ((org$pandalanguage$pandac$ASTNode*) $tmp4271)->children->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp4271)->children, i4251);
        org$pandalanguage$pandac$IRNode* $tmp4275 = (($fn4274) self->$class->vtable[85])(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4273));
        nextTest4269 = $tmp4275;
        if (((panda$core$Bit) { nextTest4269 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4277 = (panda$collections$Array*) malloc(40);
        $tmp4277->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4277->refCount.value = 1;
        panda$collections$Array$init($tmp4277);
        callChildren4276 = $tmp4277;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4276, ((panda$core$Object*) nextTest4269));
        org$pandalanguage$pandac$IRNode* $tmp4281 = (($fn4280) self->$class->vtable[40])(self, test4239, &$s4279, ((panda$collections$ListView*) callChildren4276));
        test4239 = $tmp4281;
        if (((panda$core$Bit) { test4239 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4260:;
    if ($tmp4263) goto $l4283; else goto $l4284;
    $l4283:;
    int64_t $tmp4285 = $tmp4254 - i4251.value;
    if ($tmp4256) goto $l4286; else goto $l4287;
    $l4286:;
    if ($tmp4285 >= $tmp4255) goto $l4282; else goto $l4259;
    $l4287:;
    if ($tmp4285 > $tmp4255) goto $l4282; else goto $l4259;
    $l4284:;
    int64_t $tmp4289 = i4251.value - $tmp4254;
    if ($tmp4256) goto $l4290; else goto $l4291;
    $l4290:;
    if ($tmp4289 >= -$tmp4255) goto $l4282; else goto $l4259;
    $l4291:;
    if ($tmp4289 > -$tmp4255) goto $l4282; else goto $l4259;
    $l4282:;
    i4251.value += $tmp4255;
    goto $l4257;
    $l4259:;
    org$pandalanguage$pandac$SymbolTable* $tmp4293 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4293->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4293->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4293, self->symbolTable);
    self->symbolTable = $tmp4293;
    panda$collections$Array* $tmp4296 = (panda$collections$Array*) malloc(40);
    $tmp4296->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4296->refCount.value = 1;
    panda$collections$Array$init($tmp4296);
    statements4295 = $tmp4296;
    panda$core$Int64 $tmp4300 = (($fn4299) p_w->children->$class->vtable[3])(p_w->children);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4298, ((panda$core$Int64) { 1 }), $tmp4300, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4302 = $tmp4298.start.value;
    panda$core$Int64 i4301 = { $tmp4302 };
    int64_t $tmp4304 = $tmp4298.end.value;
    int64_t $tmp4305 = $tmp4298.step.value;
    bool $tmp4306 = $tmp4298.inclusive.value;
    bool $tmp4313 = $tmp4305 > 0;
    if ($tmp4313) goto $l4311; else goto $l4312;
    $l4311:;
    if ($tmp4306) goto $l4314; else goto $l4315;
    $l4314:;
    if ($tmp4302 <= $tmp4304) goto $l4307; else goto $l4309;
    $l4315:;
    if ($tmp4302 < $tmp4304) goto $l4307; else goto $l4309;
    $l4312:;
    if ($tmp4306) goto $l4316; else goto $l4317;
    $l4316:;
    if ($tmp4302 >= $tmp4304) goto $l4307; else goto $l4309;
    $l4317:;
    if ($tmp4302 > $tmp4304) goto $l4307; else goto $l4309;
    $l4307:;
    {
        panda$core$Object* $tmp4321 = (($fn4320) p_w->children->$class->vtable[2])(p_w->children, i4301);
        org$pandalanguage$pandac$IRNode* $tmp4323 = (($fn4322) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4321));
        statement4319 = $tmp4323;
        if (((panda$core$Bit) { statement4319 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4295, ((panda$core$Object*) statement4319));
    }
    $l4310:;
    if ($tmp4313) goto $l4325; else goto $l4326;
    $l4325:;
    int64_t $tmp4327 = $tmp4304 - i4301.value;
    if ($tmp4306) goto $l4328; else goto $l4329;
    $l4328:;
    if ($tmp4327 >= $tmp4305) goto $l4324; else goto $l4309;
    $l4329:;
    if ($tmp4327 > $tmp4305) goto $l4324; else goto $l4309;
    $l4326:;
    int64_t $tmp4331 = i4301.value - $tmp4304;
    if ($tmp4306) goto $l4332; else goto $l4333;
    $l4332:;
    if ($tmp4331 >= -$tmp4305) goto $l4324; else goto $l4309;
    $l4333:;
    if ($tmp4331 > -$tmp4305) goto $l4324; else goto $l4309;
    $l4324:;
    i4301.value += $tmp4305;
    goto $l4307;
    $l4309:;
    panda$core$Object* $tmp4335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4335);
    panda$collections$Array* $tmp4337 = (panda$collections$Array*) malloc(40);
    $tmp4337->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4337->refCount.value = 1;
    panda$collections$Array$init($tmp4337);
    children4336 = $tmp4337;
    panda$collections$Array$add$panda$collections$Array$T(children4336, ((panda$core$Object*) test4239));
    org$pandalanguage$pandac$IRNode* $tmp4339 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4339->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4339->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4339, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements4295));
    panda$collections$Array$add$panda$collections$Array$T(children4336, ((panda$core$Object*) $tmp4339));
    org$pandalanguage$pandac$IRNode* $tmp4341 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4341->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4341->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4341, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children4336));
    return $tmp4341;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4343;
    panda$collections$Array* children4350;
    org$pandalanguage$pandac$Variable* valueVar4353;
    panda$collections$Array* declChildren4360;
    panda$collections$Array* varChildren4365;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp4372;
    org$pandalanguage$pandac$ASTNode* c4393;
    panda$core$Int64 $match$1064294396;
    org$pandalanguage$pandac$IRNode* w4398;
    panda$collections$Array* statements4402;
    panda$collections$Iterator* astStatement$Iter4405;
    org$pandalanguage$pandac$ASTNode* astStatement4417;
    org$pandalanguage$pandac$IRNode* stmt4422;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp4438;
    panda$core$Object* $tmp4345 = (($fn4344) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4347 = (($fn4346) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4345));
    org$pandalanguage$pandac$IRNode* $tmp4349 = (($fn4348) self->$class->vtable[8])(self, $tmp4347);
    value4343 = $tmp4349;
    if (((panda$core$Bit) { value4343 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4351 = (panda$collections$Array*) malloc(40);
    $tmp4351->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4351->refCount.value = 1;
    panda$collections$Array$init($tmp4351);
    children4350 = $tmp4351;
    org$pandalanguage$pandac$Variable* $tmp4354 = (org$pandalanguage$pandac$Variable*) malloc(56);
    $tmp4354->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4354->refCount.value = 1;
    panda$core$String* $tmp4357 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4356, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp4359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4357, &$s4358);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4354, p_m->offset, $tmp4359, value4343->type);
    valueVar4353 = $tmp4354;
    panda$collections$Array* $tmp4361 = (panda$collections$Array*) malloc(40);
    $tmp4361->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4361->refCount.value = 1;
    panda$collections$Array$init($tmp4361);
    declChildren4360 = $tmp4361;
    org$pandalanguage$pandac$IRNode* $tmp4363 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4363->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4363, ((panda$core$Int64) { 1016 }), value4343->offset, valueVar4353->type, valueVar4353);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4360, ((panda$core$Object*) $tmp4363));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4360, ((panda$core$Object*) value4343));
    panda$collections$Array* $tmp4366 = (panda$collections$Array*) malloc(40);
    $tmp4366->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4366->refCount.value = 1;
    panda$collections$Array$init($tmp4366);
    varChildren4365 = $tmp4366;
    org$pandalanguage$pandac$IRNode* $tmp4368 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4368->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4368->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4368, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4353)->offset, ((panda$collections$ListView*) declChildren4360));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4365, ((panda$core$Object*) $tmp4368));
    org$pandalanguage$pandac$IRNode* $tmp4370 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4370->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4370->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4370, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4353)->offset, ((panda$collections$ListView*) varChildren4365));
    panda$collections$Array$add$panda$collections$Array$T(children4350, ((panda$core$Object*) $tmp4370));
    panda$core$Int64 $tmp4374 = (($fn4373) p_m->children->$class->vtable[3])(p_m->children);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4372, ((panda$core$Int64) { 1 }), $tmp4374, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4376 = $tmp4372.start.value;
    panda$core$Int64 i4375 = { $tmp4376 };
    int64_t $tmp4378 = $tmp4372.end.value;
    int64_t $tmp4379 = $tmp4372.step.value;
    bool $tmp4380 = $tmp4372.inclusive.value;
    bool $tmp4387 = $tmp4379 > 0;
    if ($tmp4387) goto $l4385; else goto $l4386;
    $l4385:;
    if ($tmp4380) goto $l4388; else goto $l4389;
    $l4388:;
    if ($tmp4376 <= $tmp4378) goto $l4381; else goto $l4383;
    $l4389:;
    if ($tmp4376 < $tmp4378) goto $l4381; else goto $l4383;
    $l4386:;
    if ($tmp4380) goto $l4390; else goto $l4391;
    $l4390:;
    if ($tmp4376 >= $tmp4378) goto $l4381; else goto $l4383;
    $l4391:;
    if ($tmp4376 > $tmp4378) goto $l4381; else goto $l4383;
    $l4381:;
    {
        panda$core$Object* $tmp4395 = (($fn4394) p_m->children->$class->vtable[2])(p_m->children, i4375);
        c4393 = ((org$pandalanguage$pandac$ASTNode*) $tmp4395);
        {
            $match$1064294396 = c4393->kind;
            panda$core$Bit $tmp4397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064294396, ((panda$core$Int64) { 124 }));
            if ($tmp4397.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4400 = (($fn4399) self->$class->vtable[86])(self, valueVar4353, c4393);
                w4398 = $tmp4400;
                if (((panda$core$Bit) { w4398 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4350, ((panda$core$Object*) w4398));
            }
            }
            else {
            panda$core$Bit $tmp4401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064294396, ((panda$core$Int64) { 127 }));
            if ($tmp4401.value) {
            {
                panda$collections$Array* $tmp4403 = (panda$collections$Array*) malloc(40);
                $tmp4403->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4403->refCount.value = 1;
                panda$collections$Array$init($tmp4403);
                statements4402 = $tmp4403;
                {
                    ITable* $tmp4406 = ((panda$collections$Iterable*) c4393->children)->$class->itable;
                    while ($tmp4406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4406 = $tmp4406->next;
                    }
                    $fn4408 $tmp4407 = $tmp4406->methods[0];
                    panda$collections$Iterator* $tmp4409 = $tmp4407(((panda$collections$Iterable*) c4393->children));
                    astStatement$Iter4405 = $tmp4409;
                    $l4410:;
                    ITable* $tmp4412 = astStatement$Iter4405->$class->itable;
                    while ($tmp4412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4412 = $tmp4412->next;
                    }
                    $fn4414 $tmp4413 = $tmp4412->methods[0];
                    panda$core$Bit $tmp4415 = $tmp4413(astStatement$Iter4405);
                    panda$core$Bit $tmp4416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4415);
                    if (!$tmp4416.value) goto $l4411;
                    {
                        ITable* $tmp4418 = astStatement$Iter4405->$class->itable;
                        while ($tmp4418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4418 = $tmp4418->next;
                        }
                        $fn4420 $tmp4419 = $tmp4418->methods[1];
                        panda$core$Object* $tmp4421 = $tmp4419(astStatement$Iter4405);
                        astStatement4417 = ((org$pandalanguage$pandac$ASTNode*) $tmp4421);
                        org$pandalanguage$pandac$IRNode* $tmp4424 = (($fn4423) self->$class->vtable[88])(self, astStatement4417);
                        stmt4422 = $tmp4424;
                        if (((panda$core$Bit) { stmt4422 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4402, ((panda$core$Object*) stmt4422));
                    }
                    goto $l4410;
                    $l4411:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4425 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp4425->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4425->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4425, ((panda$core$Int64) { 1000 }), c4393->offset, ((panda$collections$ListView*) statements4402));
                panda$collections$Array$add$panda$collections$Array$T(children4350, ((panda$core$Object*) $tmp4425));
            }
            }
            else {
            {
            }
            }
            }
        }
    }
    $l4384:;
    if ($tmp4387) goto $l4428; else goto $l4429;
    $l4428:;
    int64_t $tmp4430 = $tmp4378 - i4375.value;
    if ($tmp4380) goto $l4431; else goto $l4432;
    $l4431:;
    if ($tmp4430 >= $tmp4379) goto $l4427; else goto $l4383;
    $l4432:;
    if ($tmp4430 > $tmp4379) goto $l4427; else goto $l4383;
    $l4429:;
    int64_t $tmp4434 = i4375.value - $tmp4378;
    if ($tmp4380) goto $l4435; else goto $l4436;
    $l4435:;
    if ($tmp4434 >= -$tmp4379) goto $l4427; else goto $l4383;
    $l4436:;
    if ($tmp4434 > -$tmp4379) goto $l4427; else goto $l4383;
    $l4427:;
    i4375.value += $tmp4379;
    goto $l4381;
    $l4383:;
    panda$core$Int64 $tmp4439 = panda$collections$Array$get_count$R$panda$core$Int64(children4350);
    panda$core$Int64 $tmp4440 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4439, ((panda$core$Int64) { 1 }));
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4438, $tmp4440, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4442 = $tmp4438.start.value;
    panda$core$Int64 i4441 = { $tmp4442 };
    int64_t $tmp4444 = $tmp4438.end.value;
    int64_t $tmp4445 = $tmp4438.step.value;
    bool $tmp4446 = $tmp4438.inclusive.value;
    bool $tmp4453 = $tmp4445 > 0;
    if ($tmp4453) goto $l4451; else goto $l4452;
    $l4451:;
    if ($tmp4446) goto $l4454; else goto $l4455;
    $l4454:;
    if ($tmp4442 <= $tmp4444) goto $l4447; else goto $l4449;
    $l4455:;
    if ($tmp4442 < $tmp4444) goto $l4447; else goto $l4449;
    $l4452:;
    if ($tmp4446) goto $l4456; else goto $l4457;
    $l4456:;
    if ($tmp4442 >= $tmp4444) goto $l4447; else goto $l4449;
    $l4457:;
    if ($tmp4442 > $tmp4444) goto $l4447; else goto $l4449;
    $l4447:;
    {
        panda$core$Int64 $tmp4459 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4441, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4350, $tmp4459);
        panda$core$Object* $tmp4461 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4350, i4441);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4460)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4461)));
        panda$core$Int64 $tmp4462 = panda$collections$Array$get_count$R$panda$core$Int64(children4350);
        panda$core$Int64 $tmp4463 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4462, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4350, $tmp4463);
    }
    $l4450:;
    if ($tmp4453) goto $l4465; else goto $l4466;
    $l4465:;
    int64_t $tmp4467 = $tmp4444 - i4441.value;
    if ($tmp4446) goto $l4468; else goto $l4469;
    $l4468:;
    if ($tmp4467 >= $tmp4445) goto $l4464; else goto $l4449;
    $l4469:;
    if ($tmp4467 > $tmp4445) goto $l4464; else goto $l4449;
    $l4466:;
    int64_t $tmp4471 = i4441.value - $tmp4444;
    if ($tmp4446) goto $l4472; else goto $l4473;
    $l4472:;
    if ($tmp4471 >= -$tmp4445) goto $l4464; else goto $l4449;
    $l4473:;
    if ($tmp4471 > -$tmp4445) goto $l4464; else goto $l4449;
    $l4464:;
    i4441.value += $tmp4445;
    goto $l4447;
    $l4449:;
    org$pandalanguage$pandac$IRNode* $tmp4475 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4475->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4475->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4475, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children4350));
    return $tmp4475;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    panda$core$Int64 $match$1076454477;
    {
        $match$1076454477 = p_s->kind;
        panda$core$Bit $tmp4478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 123 }));
        if ($tmp4478.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4480 = (($fn4479) self->$class->vtable[83])(self, p_s);
            return $tmp4480;
        }
        }
        else {
        panda$core$Bit $tmp4481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 103 }));
        if ($tmp4481.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4483 = (($fn4482) self->$class->vtable[54])(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4485 = (($fn4484) self->$class->vtable[8])(self, $tmp4483);
            return $tmp4485;
        }
        }
        else {
        panda$core$Bit $tmp4486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 126 }));
        if ($tmp4486.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4488 = (($fn4487) self->$class->vtable[70])(self, p_s);
            return $tmp4488;
        }
        }
        else {
        panda$core$Bit $tmp4489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 107 }));
        if ($tmp4489.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4491 = (($fn4490) self->$class->vtable[59])(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4493 = (($fn4492) self->$class->vtable[8])(self, $tmp4491);
            org$pandalanguage$pandac$IRNode* $tmp4495 = (($fn4494) self->$class->vtable[51])(self, $tmp4493);
            return $tmp4495;
        }
        }
        else {
        panda$core$Bit $tmp4496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 118 }));
        if ($tmp4496.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4498 = (($fn4497) self->$class->vtable[71])(self, p_s);
            return $tmp4498;
        }
        }
        else {
        panda$core$Bit $tmp4499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 119 }));
        if ($tmp4499.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4501 = (($fn4500) self->$class->vtable[74])(self, p_s);
            return $tmp4501;
        }
        }
        else {
        panda$core$Bit $tmp4502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 121 }));
        if ($tmp4502.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4504 = (($fn4503) self->$class->vtable[75])(self, p_s);
            return $tmp4504;
        }
        }
        else {
        panda$core$Bit $tmp4505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 120 }));
        if ($tmp4505.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4507 = (($fn4506) self->$class->vtable[76])(self, p_s);
            return $tmp4507;
        }
        }
        else {
        panda$core$Bit $tmp4508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 122 }));
        if ($tmp4508.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4510 = (($fn4509) self->$class->vtable[77])(self, p_s);
            return $tmp4510;
        }
        }
        else {
        panda$core$Bit $tmp4511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 125 }));
        if ($tmp4511.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4513 = (($fn4512) self->$class->vtable[87])(self, p_s);
            return $tmp4513;
        }
        }
        else {
        panda$core$Bit $tmp4514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 134 }));
        if ($tmp4514.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4516 = (($fn4515) self->$class->vtable[80])(self, p_s);
            return $tmp4516;
        }
        }
        else {
        panda$core$Bit $tmp4517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 135 }));
        if ($tmp4517.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4519 = (($fn4518) self->$class->vtable[81])(self, p_s);
            return $tmp4519;
        }
        }
        else {
        panda$core$Bit $tmp4520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 136 }));
        if ($tmp4520.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4522 = (($fn4521) self->$class->vtable[82])(self, p_s);
            return $tmp4522;
        }
        }
        else {
        panda$core$Bit $tmp4526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 130 }));
        bool $tmp4525 = $tmp4526.value;
        if ($tmp4525) goto $l4527;
        panda$core$Bit $tmp4528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 131 }));
        $tmp4525 = $tmp4528.value;
        $l4527:;
        panda$core$Bit $tmp4529 = { $tmp4525 };
        bool $tmp4524 = $tmp4529.value;
        if ($tmp4524) goto $l4530;
        panda$core$Bit $tmp4531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 132 }));
        $tmp4524 = $tmp4531.value;
        $l4530:;
        panda$core$Bit $tmp4532 = { $tmp4524 };
        bool $tmp4523 = $tmp4532.value;
        if ($tmp4523) goto $l4533;
        panda$core$Bit $tmp4534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1076454477, ((panda$core$Int64) { 133 }));
        $tmp4523 = $tmp4534.value;
        $l4533:;
        panda$core$Bit $tmp4535 = { $tmp4523 };
        if ($tmp4535.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4537 = (($fn4536) self->$class->vtable[84])(self, p_s);
            return $tmp4537;
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
    org$pandalanguage$pandac$SymbolTable* old4539;
    org$pandalanguage$pandac$SymbolTable* symbols4544;
    panda$collections$Iterator* p$Iter4547;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4559;
    panda$collections$Array* fieldInitializers4567;
    panda$collections$Iterator* f$Iter4571;
    org$pandalanguage$pandac$FieldDecl* f4585;
    panda$collections$Array* children4597;
    org$pandalanguage$pandac$IRNode* fieldRef4606;
    org$pandalanguage$pandac$IRNode* compiled4611;
    panda$collections$Array* children4616;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    (($fn4538) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4539 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4541 = (($fn4540) self->$class->vtable[20])(self, p_m->owner);
    self->symbolTable = $tmp4541;
    (($fn4542) self->currentMethod->$class->vtable[2])(self->currentMethod, ((panda$core$Object*) p_m));
    (($fn4543) self->$class->vtable[6])(self, p_m);
    org$pandalanguage$pandac$SymbolTable* $tmp4545 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4545->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4545->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4545, self->symbolTable);
    symbols4544 = $tmp4545;
    {
        ITable* $tmp4548 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4548->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4548 = $tmp4548->next;
        }
        $fn4550 $tmp4549 = $tmp4548->methods[0];
        panda$collections$Iterator* $tmp4551 = $tmp4549(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4547 = $tmp4551;
        $l4552:;
        ITable* $tmp4554 = p$Iter4547->$class->itable;
        while ($tmp4554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4554 = $tmp4554->next;
        }
        $fn4556 $tmp4555 = $tmp4554->methods[0];
        panda$core$Bit $tmp4557 = $tmp4555(p$Iter4547);
        panda$core$Bit $tmp4558 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4557);
        if (!$tmp4558.value) goto $l4553;
        {
            ITable* $tmp4560 = p$Iter4547->$class->itable;
            while ($tmp4560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4560 = $tmp4560->next;
            }
            $fn4562 $tmp4561 = $tmp4560->methods[1];
            panda$core$Object* $tmp4563 = $tmp4561(p$Iter4547);
            p4559 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4563);
            org$pandalanguage$pandac$Variable* $tmp4564 = (org$pandalanguage$pandac$Variable*) malloc(56);
            $tmp4564->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4564->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4564, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, p4559->name, p4559->type, ((panda$core$Int64) { 1820 }));
            (($fn4566) symbols4544->$class->vtable[2])(symbols4544, ((org$pandalanguage$pandac$Symbol*) $tmp4564));
        }
        goto $l4552;
        $l4553:;
    }
    self->symbolTable = symbols4544;
    panda$collections$Array* $tmp4568 = (panda$collections$Array*) malloc(40);
    $tmp4568->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4568->refCount.value = 1;
    panda$collections$Array$init($tmp4568);
    fieldInitializers4567 = $tmp4568;
    panda$core$Bit $tmp4570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4570.value) {
    {
        {
            panda$core$Object* $tmp4573 = (($fn4572) self->currentClass->$class->vtable[4])(self->currentClass);
            ITable* $tmp4574 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4573)->fields)->$class->itable;
            while ($tmp4574->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4574 = $tmp4574->next;
            }
            $fn4576 $tmp4575 = $tmp4574->methods[0];
            panda$collections$Iterator* $tmp4577 = $tmp4575(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4573)->fields));
            f$Iter4571 = $tmp4577;
            $l4578:;
            ITable* $tmp4580 = f$Iter4571->$class->itable;
            while ($tmp4580->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4580 = $tmp4580->next;
            }
            $fn4582 $tmp4581 = $tmp4580->methods[0];
            panda$core$Bit $tmp4583 = $tmp4581(f$Iter4571);
            panda$core$Bit $tmp4584 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4583);
            if (!$tmp4584.value) goto $l4579;
            {
                ITable* $tmp4586 = f$Iter4571->$class->itable;
                while ($tmp4586->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4586 = $tmp4586->next;
                }
                $fn4588 $tmp4587 = $tmp4586->methods[1];
                panda$core$Object* $tmp4589 = $tmp4587(f$Iter4571);
                f4585 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4589);
                (($fn4590) self->$class->vtable[7])(self, f4585);
                panda$core$Bit $tmp4593 = (($fn4592) f4585->annotations->$class->vtable[5])(f4585->annotations);
                panda$core$Bit $tmp4594 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4593);
                bool $tmp4591 = $tmp4594.value;
                if (!$tmp4591) goto $l4595;
                $tmp4591 = ((panda$core$Bit) { f4585->value != NULL }).value;
                $l4595:;
                panda$core$Bit $tmp4596 = { $tmp4591 };
                if ($tmp4596.value) {
                {
                    panda$collections$Array* $tmp4598 = (panda$collections$Array*) malloc(40);
                    $tmp4598->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4598->refCount.value = 1;
                    panda$collections$Array$init($tmp4598);
                    children4597 = $tmp4598;
                    org$pandalanguage$pandac$IRNode* $tmp4600 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4600->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4600->refCount.value = 1;
                    panda$core$Object* $tmp4603 = (($fn4602) self->currentClass->$class->vtable[4])(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4605 = (($fn4604) ((org$pandalanguage$pandac$ClassDecl*) $tmp4603)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp4603));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp4600, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp4605);
                    panda$collections$Array$add$panda$collections$Array$T(children4597, ((panda$core$Object*) $tmp4600));
                    org$pandalanguage$pandac$IRNode* $tmp4607 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4607->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4607->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4607, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f4585->type, ((panda$core$Object*) f4585), ((panda$collections$ListView*) children4597));
                    fieldRef4606 = $tmp4607;
                    panda$collections$Array$clear(children4597);
                    panda$collections$Array$add$panda$collections$Array$T(children4597, ((panda$core$Object*) fieldRef4606));
                    panda$collections$Array$add$panda$collections$Array$T(children4597, ((panda$core$Object*) f4585->value));
                    org$pandalanguage$pandac$IRNode* $tmp4609 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4609->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4609->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4609, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4585)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4597));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4567, ((panda$core$Object*) $tmp4609));
                }
                }
            }
            goto $l4578;
            $l4579:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4613 = (($fn4612) self->$class->vtable[70])(self, p_m->body);
    compiled4611 = $tmp4613;
    if (((panda$core$Bit) { compiled4611 != NULL }).value) {
    {
        panda$core$Int64 $tmp4614 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4567);
        panda$core$Bit $tmp4615 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4614, ((panda$core$Int64) { 0 }));
        if ($tmp4615.value) {
        {
            panda$collections$Array* $tmp4617 = (panda$collections$Array*) malloc(40);
            $tmp4617->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4617->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4617, ((panda$collections$ListView*) fieldInitializers4567));
            children4616 = $tmp4617;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4616, ((panda$collections$CollectionView*) compiled4611->children));
            org$pandalanguage$pandac$IRNode* $tmp4619 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp4619->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4619->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4619, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children4616));
            compiled4611 = $tmp4619;
        }
        }
    }
    }
    self->symbolTable = old4539;
    (($fn4621) self->currentMethod->$class->vtable[3])(self->currentMethod);
    (($fn4622) self->currentClass->$class->vtable[3])(self->currentClass);
    panda$core$Bit $tmp4624 = (($fn4623) p_m->annotations->$class->vtable[11])(p_m->annotations);
    if ($tmp4624.value) {
    {
        p_m->compiledBody = compiled4611;
    }
    }
    return compiled4611;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4625;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4627 = (($fn4626) self->$class->vtable[89])(self, p_m);
        compiled4625 = $tmp4627;
        if (((panda$core$Bit) { compiled4625 != NULL }).value) {
        {
            ITable* $tmp4628 = self->codeGenerator->$class->itable;
            while ($tmp4628->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4628 = $tmp4628->next;
            }
            $fn4630 $tmp4629 = $tmp4628->methods[3];
            $tmp4629(self->codeGenerator, p_m, compiled4625);
        }
        }
    }
    }
    else {
    {
        (($fn4631) self->$class->vtable[6])(self, p_m);
        ITable* $tmp4632 = self->codeGenerator->$class->itable;
        while ($tmp4632->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4632 = $tmp4632->next;
        }
        $fn4634 $tmp4633 = $tmp4632->methods[2];
        $tmp4633(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4635;
    org$pandalanguage$pandac$ClassDecl* inner4647;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4636 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4636->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4636 = $tmp4636->next;
        }
        $fn4638 $tmp4637 = $tmp4636->methods[0];
        panda$collections$Iterator* $tmp4639 = $tmp4637(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4635 = $tmp4639;
        $l4640:;
        ITable* $tmp4642 = inner$Iter4635->$class->itable;
        while ($tmp4642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4642 = $tmp4642->next;
        }
        $fn4644 $tmp4643 = $tmp4642->methods[0];
        panda$core$Bit $tmp4645 = $tmp4643(inner$Iter4635);
        panda$core$Bit $tmp4646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4645);
        if (!$tmp4646.value) goto $l4641;
        {
            ITable* $tmp4648 = inner$Iter4635->$class->itable;
            while ($tmp4648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4648 = $tmp4648->next;
            }
            $fn4650 $tmp4649 = $tmp4648->methods[1];
            panda$core$Object* $tmp4651 = $tmp4649(inner$Iter4635);
            inner4647 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4651);
            (($fn4652) self->$class->vtable[91])(self, inner4647);
        }
        goto $l4640;
        $l4641:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4664;
    panda$collections$Iterator* m$Iter4670;
    org$pandalanguage$pandac$MethodDecl* m4682;
    org$pandalanguage$pandac$ClassDecl* next4695;
    self->compiling = p_cl;
    (($fn4653) self->$class->vtable[91])(self, p_cl);
    panda$core$Bit $tmp4655 = (($fn4654) p_cl->annotations->$class->vtable[12])(p_cl->annotations);
    if ($tmp4655.value) {
    {
        ITable* $tmp4656 = self->codeGenerator->$class->itable;
        while ($tmp4656->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4656 = $tmp4656->next;
        }
        $fn4658 $tmp4657 = $tmp4656->methods[1];
        $tmp4657(self->codeGenerator, p_cl);
        ITable* $tmp4659 = self->codeGenerator->$class->itable;
        while ($tmp4659->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4659 = $tmp4659->next;
        }
        $fn4661 $tmp4660 = $tmp4659->methods[4];
        $tmp4660(self->codeGenerator, p_cl);
        return;
    }
    }
    (($fn4662) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
    (($fn4663) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
    old4664 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4666 = (($fn4665) self->$class->vtable[20])(self, p_cl);
    self->symbolTable = $tmp4666;
    ITable* $tmp4667 = self->codeGenerator->$class->itable;
    while ($tmp4667->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4667 = $tmp4667->next;
    }
    $fn4669 $tmp4668 = $tmp4667->methods[1];
    $tmp4668(self->codeGenerator, p_cl);
    {
        ITable* $tmp4671 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4671->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4671 = $tmp4671->next;
        }
        $fn4673 $tmp4672 = $tmp4671->methods[0];
        panda$collections$Iterator* $tmp4674 = $tmp4672(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4670 = $tmp4674;
        $l4675:;
        ITable* $tmp4677 = m$Iter4670->$class->itable;
        while ($tmp4677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4677 = $tmp4677->next;
        }
        $fn4679 $tmp4678 = $tmp4677->methods[0];
        panda$core$Bit $tmp4680 = $tmp4678(m$Iter4670);
        panda$core$Bit $tmp4681 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4680);
        if (!$tmp4681.value) goto $l4676;
        {
            ITable* $tmp4683 = m$Iter4670->$class->itable;
            while ($tmp4683->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4683 = $tmp4683->next;
            }
            $fn4685 $tmp4684 = $tmp4683->methods[1];
            panda$core$Object* $tmp4686 = $tmp4684(m$Iter4670);
            m4682 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4686);
            (($fn4687) self->$class->vtable[90])(self, m4682);
        }
        goto $l4675;
        $l4676:;
    }
    ITable* $tmp4688 = self->codeGenerator->$class->itable;
    while ($tmp4688->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4688 = $tmp4688->next;
    }
    $fn4690 $tmp4689 = $tmp4688->methods[4];
    $tmp4689(self->codeGenerator, p_cl);
    self->symbolTable = old4664;
    (($fn4691) self->currentFile->$class->vtable[3])(self->currentFile);
    (($fn4692) self->currentClass->$class->vtable[3])(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4693 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4694 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4693, ((panda$core$Int64) { 0 }));
    if ($tmp4694.value) {
    {
        panda$core$Object* $tmp4696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4695 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4696);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        (($fn4697) self->$class->vtable[92])(self, next4695);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4698;
    org$pandalanguage$pandac$ASTNode* parsed4705;
    panda$collections$Iterator* cl$Iter4710;
    org$pandalanguage$pandac$ClassDecl* cl4722;
    panda$core$Object* $tmp4700 = (($fn4699) self->scans->$class->vtable[3])(self->scans, ((panda$core$Object*) ((panda$collections$Key*) p_file)));
    result4698 = ((panda$collections$ListView*) $tmp4700);
    if (((panda$core$Bit) { result4698 == NULL }).value) {
    {
        (($fn4701) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp4702 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4703 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4704) self->parser->$class->vtable[2])(self->parser, $tmp4702, $tmp4703);
        org$pandalanguage$pandac$ASTNode* $tmp4707 = (($fn4706) self->parser->$class->vtable[68])(self->parser);
        parsed4705 = $tmp4707;
        if (((panda$core$Bit) { parsed4705 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4709 = (($fn4708) self->scanner->$class->vtable[12])(self->scanner, p_file, parsed4705);
            result4698 = $tmp4709;
            {
                ITable* $tmp4711 = ((panda$collections$Iterable*) result4698)->$class->itable;
                while ($tmp4711->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4711 = $tmp4711->next;
                }
                $fn4713 $tmp4712 = $tmp4711->methods[0];
                panda$collections$Iterator* $tmp4714 = $tmp4712(((panda$collections$Iterable*) result4698));
                cl$Iter4710 = $tmp4714;
                $l4715:;
                ITable* $tmp4717 = cl$Iter4710->$class->itable;
                while ($tmp4717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4717 = $tmp4717->next;
                }
                $fn4719 $tmp4718 = $tmp4717->methods[0];
                panda$core$Bit $tmp4720 = $tmp4718(cl$Iter4710);
                panda$core$Bit $tmp4721 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4720);
                if (!$tmp4721.value) goto $l4716;
                {
                    ITable* $tmp4723 = cl$Iter4710->$class->itable;
                    while ($tmp4723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4723 = $tmp4723->next;
                    }
                    $fn4725 $tmp4724 = $tmp4723->methods[1];
                    panda$core$Object* $tmp4726 = $tmp4724(cl$Iter4710);
                    cl4722 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4726);
                    (($fn4727) self->classes->$class->vtable[5])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4722)->name)), ((panda$core$Object*) cl4722));
                }
                goto $l4715;
                $l4716:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4728 = (panda$collections$Array*) malloc(40);
            $tmp4728->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4728->refCount.value = 1;
            panda$collections$Array$init($tmp4728);
            result4698 = ((panda$collections$ListView*) $tmp4728);
        }
        }
        (($fn4730) self->scans->$class->vtable[5])(self->scans, ((panda$core$Object*) ((panda$collections$Key*) p_file)), ((panda$core$Object*) result4698));
        (($fn4731) self->currentFile->$class->vtable[3])(self->currentFile);
    }
    }
    return result4698;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4732;
    panda$collections$Iterator* cl$Iter4735;
    org$pandalanguage$pandac$ClassDecl* cl4747;
    panda$collections$ListView* $tmp4734 = (($fn4733) self->$class->vtable[93])(self, p_file);
    classes4732 = $tmp4734;
    {
        ITable* $tmp4736 = ((panda$collections$Iterable*) classes4732)->$class->itable;
        while ($tmp4736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4736 = $tmp4736->next;
        }
        $fn4738 $tmp4737 = $tmp4736->methods[0];
        panda$collections$Iterator* $tmp4739 = $tmp4737(((panda$collections$Iterable*) classes4732));
        cl$Iter4735 = $tmp4739;
        $l4740:;
        ITable* $tmp4742 = cl$Iter4735->$class->itable;
        while ($tmp4742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4742 = $tmp4742->next;
        }
        $fn4744 $tmp4743 = $tmp4742->methods[0];
        panda$core$Bit $tmp4745 = $tmp4743(cl$Iter4735);
        panda$core$Bit $tmp4746 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4745);
        if (!$tmp4746.value) goto $l4741;
        {
            ITable* $tmp4748 = cl$Iter4735->$class->itable;
            while ($tmp4748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4748 = $tmp4748->next;
            }
            $fn4750 $tmp4749 = $tmp4748->methods[1];
            panda$core$Object* $tmp4751 = $tmp4749(cl$Iter4735);
            cl4747 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4751);
            (($fn4752) self->$class->vtable[92])(self, cl4747);
        }
        goto $l4740;
        $l4741:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source4753;
    panda$core$Int64 line4757;
    panda$core$Int64 column4758;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp4759;
    panda$core$Char8 $match$1130264778;
    panda$core$Char8 $tmp4781;
    panda$core$Char8 $tmp4784;
    panda$core$Object* $tmp4755 = (($fn4754) self->currentFile->$class->vtable[4])(self->currentFile);
    panda$io$InputStream* $tmp4756 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp4755));
    source4753 = $tmp4756;
    line4757 = ((panda$core$Int64) { 1 });
    column4758 = ((panda$core$Int64) { 1 });
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4759, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4761 = $tmp4759.start.value;
    panda$core$Int64 i4760 = { $tmp4761 };
    int64_t $tmp4763 = $tmp4759.end.value;
    int64_t $tmp4764 = $tmp4759.step.value;
    bool $tmp4765 = $tmp4759.inclusive.value;
    bool $tmp4772 = $tmp4764 > 0;
    if ($tmp4772) goto $l4770; else goto $l4771;
    $l4770:;
    if ($tmp4765) goto $l4773; else goto $l4774;
    $l4773:;
    if ($tmp4761 <= $tmp4763) goto $l4766; else goto $l4768;
    $l4774:;
    if ($tmp4761 < $tmp4763) goto $l4766; else goto $l4768;
    $l4771:;
    if ($tmp4765) goto $l4775; else goto $l4776;
    $l4775:;
    if ($tmp4761 >= $tmp4763) goto $l4766; else goto $l4768;
    $l4776:;
    if ($tmp4761 > $tmp4763) goto $l4766; else goto $l4768;
    $l4766:;
    {
        {
            panda$core$Char8$nullable $tmp4780 = (($fn4779) source4753->$class->vtable[10])(source4753);
            $match$1130264778 = ((panda$core$Char8) $tmp4780.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4781, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4782 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1130264778, $tmp4781);
            if ($tmp4782.value) {
            {
                panda$core$Int64 $tmp4783 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4757, ((panda$core$Int64) { 1 }));
                line4757 = $tmp4783;
                column4758 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4784, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4785 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1130264778, $tmp4784);
            if ($tmp4785.value) {
            {
                panda$core$Int64 $tmp4786 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column4758, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4787 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4786);
                panda$core$Int64 $tmp4788 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4758, $tmp4787);
                column4758 = $tmp4788;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4789 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4758, ((panda$core$Int64) { 1 }));
                column4758 = $tmp4789;
            }
            }
            }
        }
    }
    $l4769:;
    if ($tmp4772) goto $l4791; else goto $l4792;
    $l4791:;
    int64_t $tmp4793 = $tmp4763 - i4760.value;
    if ($tmp4765) goto $l4794; else goto $l4795;
    $l4794:;
    if ($tmp4793 >= $tmp4764) goto $l4790; else goto $l4768;
    $l4795:;
    if ($tmp4793 > $tmp4764) goto $l4790; else goto $l4768;
    $l4792:;
    int64_t $tmp4797 = i4760.value - $tmp4763;
    if ($tmp4765) goto $l4798; else goto $l4799;
    $l4798:;
    if ($tmp4797 >= -$tmp4764) goto $l4790; else goto $l4768;
    $l4799:;
    if ($tmp4797 > -$tmp4764) goto $l4790; else goto $l4768;
    $l4790:;
    i4760.value += $tmp4764;
    goto $l4766;
    $l4768:;
    (($fn4801) ((panda$core$Object*) source4753)->$class->vtable[1])(((panda$core$Object*) source4753));
    org$pandalanguage$pandac$Position* $tmp4802 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4802->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4802->refCount.value = 1;
    panda$core$Object* $tmp4805 = (($fn4804) self->currentFile->$class->vtable[4])(self->currentFile);
    panda$core$String* $tmp4806 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4805));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4802, $tmp4806, line4757, column4758);
    return $tmp4802;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4808 = (($fn4807) self->$class->vtable[95])(self, p_offset);
    (($fn4809) self->$class->vtable[97])(self, $tmp4808, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4810 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4810;
        panda$core$String* $tmp4812 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4811, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4812, &$s4813);
        panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, p_msg);
        panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4815, &$s4816);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4817));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4818 = self->codeGenerator->$class->itable;
    while ($tmp4818->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4818 = $tmp4818->next;
    }
    $fn4820 $tmp4819 = $tmp4818->methods[5];
    $tmp4819(self->codeGenerator);
}

