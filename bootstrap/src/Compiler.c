#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Stack.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/MapView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/io/Console.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/io/InputStream.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Immutable.h"


typedef void (*$fn21)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef void (*$fn25)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn29)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn33)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn37)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn41)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn45)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn49)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn53)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn57)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn62)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn123)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Int64 (*$fn124)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn128)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn132)(panda$collections$MapView*, panda$core$Object*);
struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String} };

typedef org$pandalanguage$pandac$ClassDecl* (*$fn134)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn137)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Int64 (*$fn139)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn143)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn147)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn152)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn154)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn159)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn163)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn166)(panda$collections$Stack*);
typedef void (*$fn168)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn169)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn171)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Symbol* (*$fn173)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn179)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn184)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn186)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn189)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn197)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn199)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn210)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Position* (*$fn212)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn218)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef panda$core$Object* (*$fn224)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn226)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn237)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn239)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn246)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn250)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn271)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn273)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn275)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn276)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn290)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn293)(panda$core$MutableString*);
typedef void (*$fn295)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn296)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn298)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn301)(org$pandalanguage$pandac$Annotations*);
typedef panda$collections$Iterator* (*$fn313)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn319)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn325)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn329)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Annotations*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn354)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn370)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn382)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn384)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn386)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn387)(panda$collections$Stack*);
typedef void (*$fn388)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn389)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn390)(panda$collections$Stack*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn395)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn401)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn407)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn409)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn411)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn413)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn414)(panda$collections$Stack*);
typedef void (*$fn415)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn416)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Bit (*$fn419)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn421)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn423)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn425)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn427)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn428)(panda$collections$Stack*);
typedef void (*$fn430)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn431)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn432)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$IRNode* (*$fn433)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn435)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn436)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn437)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn439)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn441)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn442)(panda$collections$Stack*);
typedef void (*$fn446)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn449)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn453)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn454)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn456)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn458)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64$nullable (*$fn462)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef void (*$fn465)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn470)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn476)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn478)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn483)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn489)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn495)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn497)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn501)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn513)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn519)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn525)(panda$collections$Iterator*);
typedef panda$collections$ListView* (*$fn530)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$core$Object* (*$fn531)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$Object* (*$fn534)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn546)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn552)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn558)(panda$collections$Iterator*);
typedef panda$collections$ListView* (*$fn564)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$core$Object* (*$fn565)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn581)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef void (*$fn590)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn593)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn604)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn606)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn609)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn611)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn615)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Set* (*$fn617)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn619)(panda$collections$Set*, panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn623)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn629)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn635)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn637)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Set* (*$fn639)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn641)(panda$collections$Set*, panda$collections$CollectionView*);
typedef void (*$fn643)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Int64 (*$fn644)(panda$collections$ImmutableArray*);
typedef panda$core$Int64 (*$fn646)(panda$collections$ImmutableArray*);
typedef panda$core$Int64 (*$fn650)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn670)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn672)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn674)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn688)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn699)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn705)(panda$collections$Iterator*);
typedef void (*$fn708)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn709)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn711)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn713)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn722)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn728)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn734)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn737)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn739)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$Type* (*$fn741)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn743)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef void (*$fn745)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn747)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn750)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn755)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn761)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn767)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn770)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn772)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$Type* (*$fn774)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn776)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn779)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn787)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn793)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn799)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn802)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn804)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn806)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn808)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef void (*$fn811)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn813)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn815)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn820)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn826)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn832)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn835)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn837)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn841)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn842)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn843)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn845)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn847)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn848)(panda$collections$Stack*);
typedef panda$collections$ListView* (*$fn849)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn854)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn860)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn866)(panda$collections$Iterator*);
typedef void (*$fn868)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn872)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn898)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn899)(org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn913)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn914)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Symbol* (*$fn919)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn922)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn928)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn934)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn940)(panda$collections$Iterator*);
typedef void (*$fn942)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn948)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn954)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn960)(panda$collections$Iterator*);
typedef void (*$fn962)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$SymbolTable*, panda$core$String*, panda$collections$Array*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn971)(org$pandalanguage$pandac$MethodRef*);
typedef panda$collections$Iterator* (*$fn980)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn992)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn994)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1003)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1008)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1014)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn1021)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1023)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$core$Int64, panda$collections$ListView*);
typedef void (*$fn1030)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Bit (*$fn1032)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1039)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1041)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1043)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$Type* (*$fn1045)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1047)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1052)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1054)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1058)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn1060)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn1067)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1069)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1076)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1079)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Int64 (*$fn1082)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1107)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1110)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn1112)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1124)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef panda$core$Bit (*$fn1128)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1132)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1139)(org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1141)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1151)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1154)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1156)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1159)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1169)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1171)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1177)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1179)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1190)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1192)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1197)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1216)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1219)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1229)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1231)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1233)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1236)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1240)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1242)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1244)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1246)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1248)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1254)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1260)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1266)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1269)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1271)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1273)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1294)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1300)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1302)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1307)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1309)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1314)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1317)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1325)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1327)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1335)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1337)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1342)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1345)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1347)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1356)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1358)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1368)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1370)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1375)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1378)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1380)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1383)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1392)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1394)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1399)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1401)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1405)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1407)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1410)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1412)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1415)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1417)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1421)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1426)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1432)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1438)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1440)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1442)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64$nullable (*$fn1445)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1447)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1449)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1456)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1458)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1466)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1468)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1470)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1477)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1479)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1488)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1490)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1499)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1504)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1506)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1508)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1516)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1518)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1527)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1532)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1534)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1536)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1540)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1545)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1549)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1553)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1555)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1557)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1560)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1563)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1567)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1571)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1584)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1586)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1588)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1603)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1609)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1615)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1618)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1632)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1634)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1642)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1644)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1650)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1652)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1661)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1663)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1665)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1667)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1670)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1675)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1681)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1687)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1689)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1691)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64$nullable (*$fn1693)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1699)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1704)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef void (*$fn1718)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1720)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1723)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1726)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1729)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1732)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1735)(org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1742)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1748)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1754)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1756)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1759)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1761)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1763)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1765)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1769)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1782)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1801)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1808)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Int64 (*$fn1812)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1817)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn1840)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1842)(org$pandalanguage$pandac$MethodRef*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1844)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1859)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Int64$nullable (*$fn1861)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1866)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn1868)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1873)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn1879)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn1881)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1892)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1898)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1904)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1907)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1923)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$Type* (*$fn1927)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1929)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1932)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1937)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn1939)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1942)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn1953)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn1955)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn1962)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn1964)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1966)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1968)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1970)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn1972)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1976)(org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1981)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn1985)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2008)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn2010)(org$pandalanguage$pandac$MethodRef*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn2012)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2015)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2033)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$Type* (*$fn2037)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2039)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2041)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2044)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2048)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2050)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn2053)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn2055)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn2064)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn2077)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn2079)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2081)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2083)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2085)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2093)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef panda$core$Int64$nullable (*$fn2099)(org$pandalanguage$pandac$Compiler*, panda$collections$Array*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn2105)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2131)(panda$collections$Iterator*);
typedef void (*$fn2133)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2134)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn2137)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2142)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2143)(panda$core$MutableString*);
typedef void (*$fn2145)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2153)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn2167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2179)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn2181)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2193)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2195)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2203)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2209)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn2210)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn2223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2235)(panda$collections$Iterator*);
typedef void (*$fn2237)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2238)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2243)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2245)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn2247)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2249)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2251)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2254)(panda$core$MutableString*);
typedef void (*$fn2256)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn2264)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2268)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2274)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2280)(panda$collections$Iterator*);
typedef void (*$fn2283)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2284)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2288)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2290)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn2292)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2294)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2296)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2299)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn2302)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2304)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2306)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2308)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2310)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn2313)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2315)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2317)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2452)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2461)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2574)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2584)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2587)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2589)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2595)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2619)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2623)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2627)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2630)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2634)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2640)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2643)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2648)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn2650)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2652)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn2657)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2660)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2683)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2693)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2706)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2709)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2711)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2726)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn2727)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2730)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2732)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2747)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2750)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2754)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2764)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2766)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2768)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2770)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2774)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2782)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2784)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2786)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2790)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2801)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2804)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2807)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2813)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2815)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2818)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2821)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn2824)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn2827)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn2830)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn2838)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2841)(org$pandalanguage$pandac$MethodRef*);
typedef panda$collections$Iterator* (*$fn2846)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2852)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2858)(panda$collections$Iterator*);
typedef void (*$fn2860)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2863)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Bit (*$fn2874)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn2878)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2915)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2932)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2935)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn2938)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2941)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2971)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2974)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2978)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2986)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn2989)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn2991)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn2994)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn2996)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2998)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3001)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$ListView* (*$fn3003)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ImmutableArray* (*$fn3007)(panda$collections$ImmutableArray*, panda$core$Range);
typedef panda$collections$ListView* (*$fn3012)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3016)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$ListView* (*$fn3018)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3022)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3027)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3030)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3032)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3041)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3047)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3053)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn3056)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3063)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn3067)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3081)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef panda$core$Bit (*$fn3092)(org$pandalanguage$pandac$Type*);
typedef void (*$fn3103)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn3105)(org$pandalanguage$pandac$Type*);
typedef void (*$fn3116)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3120)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3128)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3130)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3132)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64);
typedef panda$core$Object* (*$fn3135)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3137)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3143)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3164)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3166)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3179)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn3182)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3184)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3191)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3196)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3208)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3213)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn3219)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3221)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3223)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3226)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3228)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn3239)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3240)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3242)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3245)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3247)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3249)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$Type* (*$fn3257)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3259)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3262)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3268)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3270)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3273)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3279)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3281)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3284)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3290)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3292)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3295)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3309)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3311)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3314)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn3317)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn3321)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn3327)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3333)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3339)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3345)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3351)(panda$collections$Iterator*);
typedef void (*$fn3364)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn3365)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn3370)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn3373)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$Type* (*$fn3375)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn3379)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3381)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3384)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn3386)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3391)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3393)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3396)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3398)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3400)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn3402)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3404)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3406)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3408)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef void (*$fn3419)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3425)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3432)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3435)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3438)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3445)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3452)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3455)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3466)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3469)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3472)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3475)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3478)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn3489)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3495)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3501)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3504)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3511)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3513)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3516)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3519)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3521)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3526)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3530)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3532)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3541)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3546)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3548)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3550)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3553)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3555)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3558)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3560)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3562)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn3565)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3568)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3576)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn3578)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3602)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3627)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3633)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3646)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3654)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn3667)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3669)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3671)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3673)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3681)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3684)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3686)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3688)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3690)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Set* (*$fn3694)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn3698)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3704)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3710)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3715)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3718)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3722)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3724)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3726)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3728)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3733)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3736)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3740)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3746)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn3748)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3750)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3752)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3755)(panda$collections$Stack*);
typedef void (*$fn3756)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3758)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3760)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3763)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3765)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3767)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3769)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3771)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3775)(panda$collections$Stack*);
typedef void (*$fn3778)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3780)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3782)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3784)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3786)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3788)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3791)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3793)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3797)(panda$collections$Stack*);
typedef void (*$fn3800)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3802)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3804)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3806)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3810)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn3817)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3820)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3822)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3824)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3826)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3828)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3831)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3832)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3837)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Int64 (*$fn3844)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3847)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3849)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3852)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn3854)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn3865)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3871)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3877)(panda$collections$Iterator*);
typedef void (*$fn3893)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn3894)(panda$collections$Stack*);
typedef void (*$fn3898)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3905)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3911)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3917)(panda$collections$Iterator*);
typedef void (*$fn3933)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn3934)(panda$collections$Stack*);
typedef void (*$fn3938)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn3941)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3944)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3947)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn3950)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn3952)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3954)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3956)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3958)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3965)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3968)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn3971)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn3975)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3977)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3980)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3984)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3988)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn3990)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Int64 (*$fn4000)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4004)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4006)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4009)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn4019)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4025)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4031)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4034)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4051)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4054)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn4057)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn4059)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4061)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4064)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn4066)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4087)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn4089)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4091)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4097)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Int64 (*$fn4116)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4137)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4139)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4161)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4163)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4165)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn4190)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4211)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4216)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn4225)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4237)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4240)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4296)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4299)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4301)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4304)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4307)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4309)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4311)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4314)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4317)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4320)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4323)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4326)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4329)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4332)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4335)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4338)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4353)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn4355)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn4357)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4359)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4360)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4367)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4373)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4379)(panda$collections$Iterator*);
typedef void (*$fn4383)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn4389)(panda$collections$Stack*);
typedef panda$collections$Iterator* (*$fn4393)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4399)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4405)(panda$collections$Iterator*);
typedef void (*$fn4407)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Bit (*$fn4409)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn4419)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn4421)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4429)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4438)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4439)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn4440)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4443)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4447)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4448)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4451)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4455)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4461)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4467)(panda$collections$Iterator*);
typedef void (*$fn4469)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4470)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4471)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4472)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn4473)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4478)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4484)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4490)(panda$collections$Iterator*);
typedef void (*$fn4492)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4495)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4496)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4497)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4499)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn4501)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4504)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4506)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$ListView* (*$fn4508)(org$pandalanguage$pandac$Scanner*, panda$io$File*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn4513)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4519)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4525)(panda$collections$Iterator*);
typedef void (*$fn4527)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn4530)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn4531)(panda$collections$Stack*);
typedef panda$collections$ListView* (*$fn4533)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$collections$Iterator* (*$fn4538)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4544)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4550)(panda$collections$Iterator*);
typedef void (*$fn4552)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4554)(panda$collections$Stack*);
typedef panda$core$Char8$nullable (*$fn4579)(panda$io$InputStream*);
typedef void (*$fn4601)(panda$core$Object*);
typedef panda$core$Object* (*$fn4604)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Position* (*$fn4607)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn4609)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
org$pandalanguage$pandac$Compiler$Settings$class_type org$pandalanguage$pandac$Compiler$Settings$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$Compiler$CompileTargetResult$class_type org$pandalanguage$pandac$Compiler$CompileTargetResult$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11 };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12 };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13 };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13 };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13 };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14 };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14 };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13 };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26 };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1 };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16 };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36 };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18 };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21 };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49 };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1 };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6 };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1 };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6 };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15 };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28 };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14 };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21 };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49 };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2 };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2 };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10 };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14 };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15 };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36 };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46 };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22 };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7 };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32 };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17 };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22 };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2 };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19 };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4 };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15 };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17 };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4 };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1 };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1 };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1 };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1 };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2 };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1 };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1 };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2 };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1 };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2 };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2 };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1 };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2 };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1 };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2 };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1 };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2 };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1 };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2 };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2 };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2 };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2 };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2 };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2 };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3 };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25 };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4 };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7 };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4 };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21 };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3 };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21 };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3 };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32 };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32 };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7 };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2 };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s2907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21 };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4 };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8 };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30 };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30 };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7 };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31 };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18 };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44 };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1 };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45 };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15 };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24 };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13 };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s3588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1 };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5 };
static panda$core$String $s3624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8 };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1 };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4 };
static panda$core$String $s3743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8 };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42 };
static panda$core$String $s3884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7 };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33 };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2 };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29 };
static panda$core$String $s3924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10 };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33 };
static panda$core$String $s3928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2 };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32 };
static panda$core$String $s3949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55 };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23 };
static panda$core$String $s3987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5 };
static panda$core$String $s4053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1 };
static panda$core$String $s4096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1 };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7 };
static panda$core$String $s4175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s4613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9 };
static panda$core$String $s4616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) malloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->scans = $tmp1;
    panda$collections$HashMap* $tmp3 = (panda$collections$HashMap*) malloc(56);
    $tmp3->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp3->refCount.value = 1;
    panda$collections$HashMap$init($tmp3);
    self->classes = $tmp3;
    panda$collections$Stack* $tmp5 = (panda$collections$Stack*) malloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp5->refCount.value = 1;
    panda$collections$Stack$init($tmp5);
    self->currentFile = $tmp5;
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
    org$pandalanguage$pandac$Type* $tmp22 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp22->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp22->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp22, &$s24, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { 1 }), ((panda$core$Bit) { true }));
    (($fn25) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp22));
    org$pandalanguage$pandac$Type* $tmp26 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp26->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp26->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp26, &$s28, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    (($fn29) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp26));
    org$pandalanguage$pandac$Type* $tmp30 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp30->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp30->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp30, &$s32, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    (($fn33) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp30));
    org$pandalanguage$pandac$Type* $tmp34 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp34->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp34->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp34, &$s36, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    (($fn37) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp34));
    org$pandalanguage$pandac$Type* $tmp38 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp38->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp38->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp38, &$s40, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    (($fn41) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp38));
    org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp42->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp42, &$s44, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    (($fn45) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp42));
    org$pandalanguage$pandac$Type* $tmp46 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp46->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp46->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp46, &$s48, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    (($fn49) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp46));
    org$pandalanguage$pandac$Type* $tmp50 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp50->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp50->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp50, &$s52, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    (($fn53) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp50));
    org$pandalanguage$pandac$Type* $tmp54 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp54->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp54->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp54, &$s56, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    (($fn57) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp54));
    org$pandalanguage$pandac$Alias* $tmp58 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp58->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp58->refCount.value = 1;
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp58, &$s60, &$s61, ((panda$core$Int64) { -1 }));
    (($fn62) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp58));
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
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s109);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s110);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s111);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s112);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s113);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s114);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s115);
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range $tmp118;
    org$pandalanguage$pandac$Alias* $tmp116 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp116->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp116->refCount.value = 1;
    panda$core$String$Index$nullable $tmp120 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s119);
    panda$core$String$Index $tmp121 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp120.value));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp118, (((panda$core$String$Index$nullable) { $tmp121, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp121, true }).value))) : NULL), (((panda$core$String$Index$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp122 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp118);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp116, $tmp122, p_name, ((panda$core$Int64) { -1 }));
    (($fn123) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp116));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$String* alias127;
    org$pandalanguage$pandac$ClassDecl* result136;
    panda$core$String$Index$nullable idx142;
    panda$core$Range $tmp149;
    org$pandalanguage$pandac$Symbol* rootAlias172;
    panda$core$Int64 $tmp125 = (($fn124) self->currentClass->$class->vtable[7])(self->currentClass);
    panda$core$Bit $tmp126 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp125, ((panda$core$Int64) { 0 }));
    if ($tmp126.value) {
    {
        panda$core$Object* $tmp129 = (($fn128) self->currentClass->$class->vtable[4])(self->currentClass);
        ITable* $tmp130 = ((org$pandalanguage$pandac$ClassDecl*) $tmp129)->aliases->$class->itable;
        while ($tmp130->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp130 = $tmp130->next;
        }
        $fn132 $tmp131 = $tmp130->methods[1];
        panda$core$Object* $tmp133 = $tmp131(((org$pandalanguage$pandac$ClassDecl*) $tmp129)->aliases, ((panda$core$Object*) p_name));
        alias127 = ((panda$core$String*) $tmp133);
        if (((panda$core$Bit) { alias127 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp135 = (($fn134) self->$class->vtable[11])(self, alias127);
            return $tmp135;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp138 = (($fn137) self->$class->vtable[11])(self, p_name);
    result136 = $tmp138;
    panda$core$Int64 $tmp140 = (($fn139) self->currentClass->$class->vtable[7])(self->currentClass);
    panda$core$Bit $tmp141 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp140, ((panda$core$Int64) { 0 }));
    if ($tmp141.value) {
    {
        if (((panda$core$Bit) { result136 == NULL }).value) {
        {
            panda$core$Object* $tmp144 = (($fn143) self->currentClass->$class->vtable[4])(self->currentClass);
            panda$core$String$Index$nullable $tmp146 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp144))->name, &$s145);
            idx142 = $tmp146;
            if (((panda$core$Bit) { idx142.nonnull }).value) {
            {
                panda$core$Object* $tmp148 = (($fn147) self->currentClass->$class->vtable[4])(self->currentClass);
                panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp149, (((panda$core$String$Index$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { .nonnull = false }).value))) : NULL), (idx142.nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) idx142.value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
                panda$core$String* $tmp150 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp148))->name, $tmp149);
                panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp153 = (($fn152) self->$class->vtable[11])(self, $tmp151);
                result136 = $tmp153;
            }
            }
        }
        }
        if (((panda$core$Bit) { result136 == NULL }).value) {
        {
            panda$core$Object* $tmp155 = (($fn154) self->currentClass->$class->vtable[4])(self->currentClass);
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp155))->name, &$s156);
            panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp160 = (($fn159) self->$class->vtable[11])(self, $tmp158);
            result136 = $tmp160;
        }
        }
        bool $tmp161 = ((panda$core$Bit) { result136 == NULL }).value;
        if (!$tmp161) goto $l162;
        panda$core$Object* $tmp164 = (($fn163) self->currentClass->$class->vtable[4])(self->currentClass);
        $tmp161 = ((panda$core$Bit) { ((org$pandalanguage$pandac$ClassDecl*) $tmp164)->owner != NULL }).value;
        $l162:;
        panda$core$Bit $tmp165 = { $tmp161 };
        if ($tmp165.value) {
        {
            panda$core$Object* $tmp167 = (($fn166) self->currentClass->$class->vtable[4])(self->currentClass);
            (($fn168) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp167)->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp170 = (($fn169) self->$class->vtable[3])(self, p_name);
            result136 = $tmp170;
            (($fn171) self->currentClass->$class->vtable[3])(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result136 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp174 = (($fn173) self->root->$class->vtable[6])(self->root, p_name);
        rootAlias172 = $tmp174;
        bool $tmp175 = ((panda$core$Bit) { rootAlias172 != NULL }).value;
        if (!$tmp175) goto $l176;
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias172->kind, ((panda$core$Int64) { 200 }));
        $tmp175 = $tmp177.value;
        $l176:;
        panda$core$Bit $tmp178 = { $tmp175 };
        if ($tmp178.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp180 = (($fn179) self->$class->vtable[11])(self, ((org$pandalanguage$pandac$Alias*) rootAlias172)->fullName);
            result136 = $tmp180;
        }
        }
    }
    }
    return result136;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 $match$6083181;
    org$pandalanguage$pandac$ClassDecl* resolved183;
    org$pandalanguage$pandac$Symbol* s188;
    panda$core$Int64 $match$6396191;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp196;
    panda$collections$Array* subtypes200;
    panda$collections$Array* subtypes221;
    panda$collections$Array* subtypes234;
    panda$core$MutableString* name241;
    panda$core$String* separator247;
    panda$core$Range $tmp249;
    org$pandalanguage$pandac$Type* resolved270;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    {
        $match$6083181 = p_type->typeKind;
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6083181, ((panda$core$Int64) { 10 }));
        if ($tmp182.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp185 = (($fn184) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved183 = $tmp185;
            if (((panda$core$Bit) { resolved183 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp187 = (($fn186) resolved183->$class->vtable[3])(resolved183);
                return $tmp187;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp190 = (($fn189) self->symbolTable->$class->vtable[6])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s188 = $tmp190;
            if (((panda$core$Bit) { s188 != NULL }).value) {
            {
                {
                    $match$6396191 = s188->kind;
                    panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6396191, ((panda$core$Int64) { 200 }));
                    if ($tmp192.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp193 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp193->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp193->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp193, ((org$pandalanguage$pandac$Alias*) s188)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$core$Bit) { true }));
                        return $tmp193;
                    }
                    }
                    else {
                    panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6396191, ((panda$core$Int64) { 203 }));
                    if ($tmp195.value) {
                    {
                        gp196 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s188);
                        org$pandalanguage$pandac$ClassDecl* $tmp198 = (($fn197) self->$class->vtable[12])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, gp196->owner);
                        (($fn199) self->$class->vtable[5])(self, $tmp198);
                        panda$collections$Array* $tmp201 = (panda$collections$Array*) malloc(40);
                        $tmp201->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp201->refCount.value = 1;
                        panda$collections$Array$init($tmp201);
                        subtypes200 = $tmp201;
                        panda$collections$Array$add$panda$collections$Array$T(subtypes200, ((panda$core$Object*) gp196->bound));
                        org$pandalanguage$pandac$Type* $tmp203 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp203->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp203->refCount.value = 1;
                        panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(gp196->owner, &$s205);
                        panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, ((org$pandalanguage$pandac$Symbol*) gp196)->name);
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp203, $tmp207, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes200), ((panda$core$Bit) { true }));
                        return $tmp203;
                    }
                    }
                    else {
                    panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6396191, ((panda$core$Int64) { 207 }));
                    if ($tmp208.value) {
                    {
                        return ((org$pandalanguage$pandac$Type*) s188);
                    }
                    }
                    else {
                    panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6396191, ((panda$core$Int64) { 201 }));
                    if ($tmp209.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp211 = (($fn210) ((org$pandalanguage$pandac$ClassDecl*) s188)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) s188));
                        return $tmp211;
                    }
                    }
                    }
                    }
                    }
                }
            }
            }
            org$pandalanguage$pandac$Position* $tmp213 = (($fn212) self->$class->vtable[94])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset);
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s214, ((panda$core$Object*) p_type));
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp215, &$s216);
            (($fn218) self->$class->vtable[96])(self, $tmp213, $tmp217);
            org$pandalanguage$pandac$Type* $tmp219 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp219;
        }
        }
        else {
        panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6083181, ((panda$core$Int64) { 11 }));
        if ($tmp220.value) {
        {
            panda$collections$Array* $tmp222 = (panda$collections$Array*) malloc(40);
            $tmp222->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp222->refCount.value = 1;
            panda$collections$Array$init($tmp222);
            subtypes221 = $tmp222;
            panda$core$Object* $tmp225 = (($fn224) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp227 = (($fn226) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp225));
            panda$collections$Array$add$panda$collections$Array$T(subtypes221, ((panda$core$Object*) $tmp227));
            org$pandalanguage$pandac$Type* $tmp228 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp228->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp228->refCount.value = 1;
            panda$core$Object* $tmp230 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes221, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp230))->name, &$s231);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp228, $tmp232, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes221), ((panda$core$Bit) { true }));
            return $tmp228;
        }
        }
        else {
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6083181, ((panda$core$Int64) { 21 }));
        if ($tmp233.value) {
        {
            panda$collections$Array* $tmp235 = (panda$collections$Array*) malloc(40);
            $tmp235->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp235->refCount.value = 1;
            panda$collections$Array$init($tmp235);
            subtypes234 = $tmp235;
            panda$core$Object* $tmp238 = (($fn237) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp240 = (($fn239) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp238));
            panda$collections$Array$add$panda$collections$Array$T(subtypes234, ((panda$core$Object*) $tmp240));
            panda$core$MutableString* $tmp242 = (panda$core$MutableString*) malloc(40);
            $tmp242->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp242->refCount.value = 1;
            panda$core$Object* $tmp244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes234, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp242, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp244))->name);
            name241 = $tmp242;
            (($fn246) name241->$class->vtable[3])(name241, &$s245);
            separator247 = &$s248;
            panda$core$Int64 $tmp251 = (($fn250) p_type->subtypes->$class->vtable[3])(p_type->subtypes);
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp249, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp251)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp253 = ((panda$core$Int64$wrapper*) $tmp249.start)->value.value;
            panda$core$Int64 i252 = { $tmp253 };
            int64_t $tmp255 = ((panda$core$Int64$wrapper*) $tmp249.end)->value.value;
            int64_t $tmp256 = $tmp249.step.value;
            bool $tmp257 = $tmp249.inclusive.value;
            bool $tmp264 = $tmp256 > 0;
            if ($tmp264) goto $l262; else goto $l263;
            $l262:;
            if ($tmp257) goto $l265; else goto $l266;
            $l265:;
            if ($tmp253 <= $tmp255) goto $l258; else goto $l260;
            $l266:;
            if ($tmp253 < $tmp255) goto $l258; else goto $l260;
            $l263:;
            if ($tmp257) goto $l267; else goto $l268;
            $l267:;
            if ($tmp253 >= $tmp255) goto $l258; else goto $l260;
            $l268:;
            if ($tmp253 > $tmp255) goto $l258; else goto $l260;
            $l258:;
            {
                panda$core$Object* $tmp272 = (($fn271) p_type->subtypes->$class->vtable[2])(p_type->subtypes, i252);
                org$pandalanguage$pandac$Type* $tmp274 = (($fn273) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp272));
                resolved270 = $tmp274;
                panda$collections$Array$add$panda$collections$Array$T(subtypes234, ((panda$core$Object*) resolved270));
                (($fn275) name241->$class->vtable[3])(name241, separator247);
                (($fn276) name241->$class->vtable[3])(name241, ((org$pandalanguage$pandac$Symbol*) resolved270)->name);
                separator247 = &$s277;
            }
            $l261:;
            if ($tmp264) goto $l279; else goto $l280;
            $l279:;
            int64_t $tmp281 = $tmp255 - i252.value;
            if ($tmp257) goto $l282; else goto $l283;
            $l282:;
            if ($tmp281 >= $tmp256) goto $l278; else goto $l260;
            $l283:;
            if ($tmp281 > $tmp256) goto $l278; else goto $l260;
            $l280:;
            int64_t $tmp285 = i252.value - $tmp255;
            if ($tmp257) goto $l286; else goto $l287;
            $l286:;
            if ($tmp285 >= -$tmp256) goto $l278; else goto $l260;
            $l287:;
            if ($tmp285 > -$tmp256) goto $l278; else goto $l260;
            $l278:;
            i252.value += $tmp256;
            goto $l258;
            $l260:;
            (($fn290) name241->$class->vtable[3])(name241, &$s289);
            org$pandalanguage$pandac$Type* $tmp291 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp291->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp291->refCount.value = 1;
            panda$core$String* $tmp294 = (($fn293) name241->$class->vtable[0])(name241);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp291, $tmp294, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes234), ((panda$core$Bit) { true }));
            return $tmp291;
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
    org$pandalanguage$pandac$SymbolTable* old297;
    panda$collections$Iterator* m$Iter310;
    org$pandalanguage$pandac$MethodDecl* m322;
    panda$core$Range $tmp333;
    panda$collections$Iterator* p$Iter367;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p379;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    (($fn295) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
    (($fn296) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
    old297 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp299 = (($fn298) self->$class->vtable[4])(self, p_cl->rawSuper);
        p_cl->rawSuper = $tmp299;
        panda$core$Bit $tmp302 = (($fn301) p_cl->annotations->$class->vtable[9])(p_cl->annotations);
        panda$core$Bit $tmp303 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp302);
        bool $tmp300 = $tmp303.value;
        if (!$tmp300) goto $l304;
        panda$core$Bit $tmp306 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s305);
        $tmp300 = $tmp306.value;
        $l304:;
        panda$core$Bit $tmp307 = { $tmp300 };
        if ($tmp307.value) {
        {
            panda$core$Int64 $tmp308 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp309 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp308);
            p_cl->annotations->flags = $tmp309;
            {
                ITable* $tmp311 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp311->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp311 = $tmp311->next;
                }
                $fn313 $tmp312 = $tmp311->methods[0];
                panda$collections$Iterator* $tmp314 = $tmp312(((panda$collections$Iterable*) p_cl->methods));
                m$Iter310 = $tmp314;
                $l315:;
                ITable* $tmp317 = m$Iter310->$class->itable;
                while ($tmp317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp317 = $tmp317->next;
                }
                $fn319 $tmp318 = $tmp317->methods[0];
                panda$core$Bit $tmp320 = $tmp318(m$Iter310);
                panda$core$Bit $tmp321 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp320);
                if (!$tmp321.value) goto $l316;
                {
                    ITable* $tmp323 = m$Iter310->$class->itable;
                    while ($tmp323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp323 = $tmp323->next;
                    }
                    $fn325 $tmp324 = $tmp323->methods[1];
                    panda$core$Object* $tmp326 = $tmp324(m$Iter310);
                    m322 = ((org$pandalanguage$pandac$MethodDecl*) $tmp326);
                    panda$core$Int64 $tmp327 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp328 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m322->annotations->flags, $tmp327);
                    m322->annotations->flags = $tmp328;
                    panda$core$Bit $tmp330 = (($fn329) self->scanner->$class->vtable[7])(self->scanner, m322->annotations, m322->body);
                    if ($tmp330.value) {
                    {
                        panda$core$Int64 $tmp331 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                        panda$core$Int64 $tmp332 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m322->annotations->flags, $tmp331);
                        m322->annotations->flags = $tmp332;
                    }
                    }
                }
                goto $l315;
                $l316:;
            }
        }
        }
    }
    }
    panda$core$Int64 $tmp334 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp333, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp334)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp336 = ((panda$core$Int64$wrapper*) $tmp333.start)->value.value;
    panda$core$Int64 i335 = { $tmp336 };
    int64_t $tmp338 = ((panda$core$Int64$wrapper*) $tmp333.end)->value.value;
    int64_t $tmp339 = $tmp333.step.value;
    bool $tmp340 = $tmp333.inclusive.value;
    bool $tmp347 = $tmp339 > 0;
    if ($tmp347) goto $l345; else goto $l346;
    $l345:;
    if ($tmp340) goto $l348; else goto $l349;
    $l348:;
    if ($tmp336 <= $tmp338) goto $l341; else goto $l343;
    $l349:;
    if ($tmp336 < $tmp338) goto $l341; else goto $l343;
    $l346:;
    if ($tmp340) goto $l350; else goto $l351;
    $l350:;
    if ($tmp336 >= $tmp338) goto $l341; else goto $l343;
    $l351:;
    if ($tmp336 > $tmp338) goto $l341; else goto $l343;
    $l341:;
    {
        panda$core$Object* $tmp353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->rawInterfaces, i335);
        org$pandalanguage$pandac$Type* $tmp355 = (($fn354) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp353));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->rawInterfaces, i335, ((panda$core$Object*) $tmp355));
    }
    $l344:;
    if ($tmp347) goto $l357; else goto $l358;
    $l357:;
    int64_t $tmp359 = $tmp338 - i335.value;
    if ($tmp340) goto $l360; else goto $l361;
    $l360:;
    if ($tmp359 >= $tmp339) goto $l356; else goto $l343;
    $l361:;
    if ($tmp359 > $tmp339) goto $l356; else goto $l343;
    $l358:;
    int64_t $tmp363 = i335.value - $tmp338;
    if ($tmp340) goto $l364; else goto $l365;
    $l364:;
    if ($tmp363 >= -$tmp339) goto $l356; else goto $l343;
    $l365:;
    if ($tmp363 > -$tmp339) goto $l356; else goto $l343;
    $l356:;
    i335.value += $tmp339;
    goto $l341;
    $l343:;
    {
        ITable* $tmp368 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp368->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp368 = $tmp368->next;
        }
        $fn370 $tmp369 = $tmp368->methods[0];
        panda$collections$Iterator* $tmp371 = $tmp369(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter367 = $tmp371;
        $l372:;
        ITable* $tmp374 = p$Iter367->$class->itable;
        while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp374 = $tmp374->next;
        }
        $fn376 $tmp375 = $tmp374->methods[0];
        panda$core$Bit $tmp377 = $tmp375(p$Iter367);
        panda$core$Bit $tmp378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp377);
        if (!$tmp378.value) goto $l373;
        {
            ITable* $tmp380 = p$Iter367->$class->itable;
            while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp380 = $tmp380->next;
            }
            $fn382 $tmp381 = $tmp380->methods[1];
            panda$core$Object* $tmp383 = $tmp381(p$Iter367);
            p379 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp383);
            org$pandalanguage$pandac$Type* $tmp385 = (($fn384) self->$class->vtable[4])(self, p379->bound);
            p379->bound = $tmp385;
        }
        goto $l372;
        $l373:;
    }
    self->symbolTable = old297;
    (($fn386) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn387) self->currentFile->$class->vtable[3])(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old391;
    panda$collections$Iterator* p$Iter392;
    org$pandalanguage$pandac$MethodDecl$Parameter* p404;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    (($fn388) self->$class->vtable[5])(self, p_m->owner);
    (($fn389) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    (($fn390) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_m->owner));
    old391 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp393 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp393->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp393 = $tmp393->next;
        }
        $fn395 $tmp394 = $tmp393->methods[0];
        panda$collections$Iterator* $tmp396 = $tmp394(((panda$collections$Iterable*) p_m->parameters));
        p$Iter392 = $tmp396;
        $l397:;
        ITable* $tmp399 = p$Iter392->$class->itable;
        while ($tmp399->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp399 = $tmp399->next;
        }
        $fn401 $tmp400 = $tmp399->methods[0];
        panda$core$Bit $tmp402 = $tmp400(p$Iter392);
        panda$core$Bit $tmp403 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp402);
        if (!$tmp403.value) goto $l398;
        {
            ITable* $tmp405 = p$Iter392->$class->itable;
            while ($tmp405->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp405 = $tmp405->next;
            }
            $fn407 $tmp406 = $tmp405->methods[1];
            panda$core$Object* $tmp408 = $tmp406(p$Iter392);
            p404 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp408);
            org$pandalanguage$pandac$Type* $tmp410 = (($fn409) self->$class->vtable[4])(self, p404->type);
            p404->type = $tmp410;
        }
        goto $l397;
        $l398:;
    }
    org$pandalanguage$pandac$Type* $tmp412 = (($fn411) self->$class->vtable[4])(self, p_m->returnType);
    p_m->returnType = $tmp412;
    p_m->resolved = ((panda$core$Bit) { true });
    self->symbolTable = old391;
    (($fn413) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn414) self->currentFile->$class->vtable[3])(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old417;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    (($fn415) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    (($fn416) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_f->owner));
    old417 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp418 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp420 = (($fn419) p_f->type->$class->vtable[5])(p_f->type, ((panda$core$Object*) $tmp418));
    if ($tmp420.value) {
    {
        org$pandalanguage$pandac$Type* $tmp422 = (($fn421) self->$class->vtable[4])(self, p_f->type);
        p_f->type = $tmp422;
        if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp424 = (($fn423) self->$class->vtable[68])(self, p_f->rawValue);
            org$pandalanguage$pandac$IRNode* $tmp426 = (($fn425) self->$class->vtable[32])(self, $tmp424, p_f->type);
            p_f->value = $tmp426;
        }
        }
        (($fn427) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn428) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old417;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        (($fn430) self->$class->vtable[95])(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s429);
        (($fn431) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn432) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old417;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp434 = (($fn433) self->$class->vtable[68])(self, p_f->rawValue);
    p_f->value = $tmp434;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        (($fn435) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn436) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old417;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp438 = (($fn437) self->$class->vtable[26])(self, p_f->value);
    p_f->type = $tmp438;
    org$pandalanguage$pandac$IRNode* $tmp440 = (($fn439) self->$class->vtable[32])(self, p_f->value, p_f->type);
    p_f->value = $tmp440;
    (($fn441) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn442) self->currentFile->$class->vtable[3])(self->currentFile);
    self->symbolTable = old417;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$11512443;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$11512443 = p_expr->kind;
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11512443, ((panda$core$Int64) { 1037 }));
        if ($tmp444.value) {
        {
            (($fn446) self->$class->vtable[95])(self, p_expr->offset, &$s445);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11512443, ((panda$core$Int64) { 1039 }));
        if ($tmp447.value) {
        {
            (($fn449) self->$class->vtable[95])(self, p_expr->offset, &$s448);
            panda$core$Object* $tmp450 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp450)->payload)));
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11512443, ((panda$core$Int64) { 1024 }));
        if ($tmp451.value) {
        {
            (($fn453) self->$class->vtable[95])(self, p_expr->offset, &$s452);
            return NULL;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp455 = (($fn454) self->$class->vtable[26])(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp457 = (($fn456) self->$class->vtable[32])(self, p_expr, $tmp455);
            return $tmp457;
        }
        }
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn458) self->$class->vtable[5])(self, p_cl);
    bool $tmp459 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp459) goto $l460;
    org$pandalanguage$pandac$Type* $tmp461 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp463 = (($fn462) self->$class->vtable[27])(self, p_cl->rawSuper, $tmp461);
    $tmp459 = ((panda$core$Bit) { $tmp463.nonnull }).value;
    $l460:;
    panda$core$Bit $tmp464 = { $tmp459 };
    return $tmp464;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result466;
    org$pandalanguage$pandac$ClassDecl* s475;
    panda$collections$Iterator* f$Iter480;
    org$pandalanguage$pandac$FieldDecl* f492;
    (($fn465) self->$class->vtable[5])(self, p_cl);
    panda$collections$Array* $tmp467 = (panda$collections$Array*) malloc(40);
    $tmp467->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp467->refCount.value = 1;
    panda$collections$Array$init($tmp467);
    result466 = $tmp467;
    panda$core$Bit $tmp471 = (($fn470) self->$class->vtable[9])(self, p_cl);
    panda$core$Bit $tmp472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp471);
    bool $tmp469 = $tmp472.value;
    if (!$tmp469) goto $l473;
    $tmp469 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l473:;
    panda$core$Bit $tmp474 = { $tmp469 };
    if ($tmp474.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp477 = (($fn476) self->$class->vtable[13])(self, p_cl->rawSuper);
        s475 = $tmp477;
        if (((panda$core$Bit) { s475 != NULL }).value) {
        {
            panda$collections$ListView* $tmp479 = (($fn478) self->$class->vtable[10])(self, s475);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result466, ((panda$collections$CollectionView*) $tmp479));
        }
        }
    }
    }
    {
        ITable* $tmp481 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp481 = $tmp481->next;
        }
        $fn483 $tmp482 = $tmp481->methods[0];
        panda$collections$Iterator* $tmp484 = $tmp482(((panda$collections$Iterable*) p_cl->fields));
        f$Iter480 = $tmp484;
        $l485:;
        ITable* $tmp487 = f$Iter480->$class->itable;
        while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp487 = $tmp487->next;
        }
        $fn489 $tmp488 = $tmp487->methods[0];
        panda$core$Bit $tmp490 = $tmp488(f$Iter480);
        panda$core$Bit $tmp491 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp490);
        if (!$tmp491.value) goto $l486;
        {
            ITable* $tmp493 = f$Iter480->$class->itable;
            while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp493 = $tmp493->next;
            }
            $fn495 $tmp494 = $tmp493->methods[1];
            panda$core$Object* $tmp496 = $tmp494(f$Iter480);
            f492 = ((org$pandalanguage$pandac$FieldDecl*) $tmp496);
            panda$core$Bit $tmp498 = (($fn497) f492->annotations->$class->vtable[5])(f492->annotations);
            panda$core$Bit $tmp499 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp498);
            if ($tmp499.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result466, ((panda$core$Object*) f492));
            }
            }
        }
        goto $l485;
        $l486:;
    }
    return ((panda$collections$ListView*) result466);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result500;
    panda$core$String* suffix503;
    panda$core$Bit found509;
    panda$collections$Iterator* dir$Iter510;
    panda$io$File* dir522;
    panda$io$File* f527;
    panda$core$Bit $tmp529;
    panda$core$Object* $tmp502 = (($fn501) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
    result500 = ((org$pandalanguage$pandac$ClassDecl*) $tmp502);
    if (((panda$core$Bit) { result500 == NULL }).value) {
    {
        panda$core$String* $tmp506 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s504, &$s505);
        panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, &$s507);
        suffix503 = $tmp508;
        found509 = ((panda$core$Bit) { false });
        {
            ITable* $tmp511 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp511->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp511 = $tmp511->next;
            }
            $fn513 $tmp512 = $tmp511->methods[0];
            panda$collections$Iterator* $tmp514 = $tmp512(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter510 = $tmp514;
            $l515:;
            ITable* $tmp517 = dir$Iter510->$class->itable;
            while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp517 = $tmp517->next;
            }
            $fn519 $tmp518 = $tmp517->methods[0];
            panda$core$Bit $tmp520 = $tmp518(dir$Iter510);
            panda$core$Bit $tmp521 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp520);
            if (!$tmp521.value) goto $l516;
            {
                ITable* $tmp523 = dir$Iter510->$class->itable;
                while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp523 = $tmp523->next;
                }
                $fn525 $tmp524 = $tmp523->methods[1];
                panda$core$Object* $tmp526 = $tmp524(dir$Iter510);
                dir522 = ((panda$io$File*) $tmp526);
                panda$io$File* $tmp528 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir522, suffix503);
                f527 = $tmp528;
                panda$io$File$exists$R$panda$core$Bit(&$tmp529, f527);
                if ($tmp529.value) {
                {
                    found509 = ((panda$core$Bit) { true });
                    (($fn530) self->$class->vtable[92])(self, f527);
                    panda$core$Object* $tmp532 = (($fn531) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
                    result500 = ((org$pandalanguage$pandac$ClassDecl*) $tmp532);
                }
                }
            }
            goto $l515;
            $l516:;
        }
    }
    }
    return result500;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result533;
    panda$core$String* suffix536;
    panda$core$Bit found542;
    panda$collections$Iterator* dir$Iter543;
    panda$io$File* dir555;
    panda$io$File* f560;
    panda$core$Bit $tmp562;
    panda$core$Int64 oldErrorCount563;
    panda$core$Object* $tmp535 = (($fn534) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
    result533 = ((org$pandalanguage$pandac$ClassDecl*) $tmp535);
    if (((panda$core$Bit) { result533 == NULL }).value) {
    {
        panda$core$String* $tmp539 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s537, &$s538);
        panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp539, &$s540);
        suffix536 = $tmp541;
        found542 = ((panda$core$Bit) { false });
        {
            ITable* $tmp544 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp544->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp544 = $tmp544->next;
            }
            $fn546 $tmp545 = $tmp544->methods[0];
            panda$collections$Iterator* $tmp547 = $tmp545(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter543 = $tmp547;
            $l548:;
            ITable* $tmp550 = dir$Iter543->$class->itable;
            while ($tmp550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp550 = $tmp550->next;
            }
            $fn552 $tmp551 = $tmp550->methods[0];
            panda$core$Bit $tmp553 = $tmp551(dir$Iter543);
            panda$core$Bit $tmp554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp553);
            if (!$tmp554.value) goto $l549;
            {
                ITable* $tmp556 = dir$Iter543->$class->itable;
                while ($tmp556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp556 = $tmp556->next;
                }
                $fn558 $tmp557 = $tmp556->methods[1];
                panda$core$Object* $tmp559 = $tmp557(dir$Iter543);
                dir555 = ((panda$io$File*) $tmp559);
                panda$io$File* $tmp561 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir555, suffix536);
                f560 = $tmp561;
                panda$io$File$exists$R$panda$core$Bit(&$tmp562, f560);
                if ($tmp562.value) {
                {
                    found542 = ((panda$core$Bit) { true });
                    oldErrorCount563 = self->errorCount;
                    (($fn564) self->$class->vtable[92])(self, f560);
                    panda$core$Object* $tmp566 = (($fn565) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
                    result533 = ((org$pandalanguage$pandac$ClassDecl*) $tmp566);
                    bool $tmp567 = ((panda$core$Bit) { result533 == NULL }).value;
                    if (!$tmp567) goto $l568;
                    panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount563);
                    $tmp567 = $tmp569.value;
                    $l568:;
                    panda$core$Bit $tmp570 = { $tmp567 };
                    if ($tmp570.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp571 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp571->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp571->refCount.value = 1;
                        panda$core$String* $tmp573 = panda$io$File$name$R$panda$core$String(f560);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp571, $tmp573, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s574, ((panda$core$Object*) f560));
                        panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
                        panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, p_fullName);
                        panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
                        (($fn581) self->$class->vtable[96])(self, $tmp571, $tmp580);
                    }
                    }
                }
                }
            }
            goto $l548;
            $l549:;
        }
        panda$core$Bit $tmp582 = panda$core$Bit$$NOT$R$panda$core$Bit(found542);
        if ($tmp582.value) {
        {
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s583, suffix536);
            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s585);
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp586, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
            (($fn590) self->$class->vtable[95])(self, p_offset, $tmp589);
        }
        }
    }
    }
    return result533;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 $match$14338591;
    {
        $match$14338591 = p_type->typeKind;
        panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14338591, ((panda$core$Int64) { 10 }));
        if ($tmp592.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp594 = (($fn593) self->$class->vtable[12])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            return $tmp594;
        }
        }
        else {
        panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14338591, ((panda$core$Int64) { 11 }));
        bool $tmp596 = $tmp597.value;
        if ($tmp596) goto $l598;
        panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14338591, ((panda$core$Int64) { 21 }));
        $tmp596 = $tmp599.value;
        $l598:;
        panda$core$Bit $tmp600 = { $tmp596 };
        bool $tmp595 = $tmp600.value;
        if ($tmp595) goto $l601;
        panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14338591, ((panda$core$Int64) { 22 }));
        $tmp595 = $tmp602.value;
        $l601:;
        panda$core$Bit $tmp603 = { $tmp595 };
        if ($tmp603.value) {
        {
            panda$core$Object* $tmp605 = (($fn604) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp607 = (($fn606) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$Type*) $tmp605));
            return $tmp607;
        }
        }
        else {
        {
        }
        }
        }
    }
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl608;
    panda$collections$Set* result612;
    panda$collections$Iterator* intf$Iter620;
    org$pandalanguage$pandac$Type* intf632;
    org$pandalanguage$pandac$ClassDecl* $tmp610 = (($fn609) self->$class->vtable[13])(self, p_t);
    cl608 = $tmp610;
    (($fn611) self->$class->vtable[5])(self, cl608);
    panda$collections$Set* $tmp613 = (panda$collections$Set*) malloc(24);
    $tmp613->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp613->refCount.value = 1;
    panda$collections$Set$init($tmp613);
    result612 = $tmp613;
    if (((panda$core$Bit) { cl608->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp616 = (($fn615) self->$class->vtable[24])(self, p_t, cl608->rawSuper);
        panda$collections$Set* $tmp618 = (($fn617) self->$class->vtable[14])(self, $tmp616);
        (($fn619) result612->$class->vtable[3])(result612, ((panda$collections$CollectionView*) $tmp618));
    }
    }
    {
        ITable* $tmp621 = ((panda$collections$Iterable*) cl608->rawInterfaces)->$class->itable;
        while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp621 = $tmp621->next;
        }
        $fn623 $tmp622 = $tmp621->methods[0];
        panda$collections$Iterator* $tmp624 = $tmp622(((panda$collections$Iterable*) cl608->rawInterfaces));
        intf$Iter620 = $tmp624;
        $l625:;
        ITable* $tmp627 = intf$Iter620->$class->itable;
        while ($tmp627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp627 = $tmp627->next;
        }
        $fn629 $tmp628 = $tmp627->methods[0];
        panda$core$Bit $tmp630 = $tmp628(intf$Iter620);
        panda$core$Bit $tmp631 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp630);
        if (!$tmp631.value) goto $l626;
        {
            ITable* $tmp633 = intf$Iter620->$class->itable;
            while ($tmp633->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp633 = $tmp633->next;
            }
            $fn635 $tmp634 = $tmp633->methods[1];
            panda$core$Object* $tmp636 = $tmp634(intf$Iter620);
            intf632 = ((org$pandalanguage$pandac$Type*) $tmp636);
            org$pandalanguage$pandac$Type* $tmp638 = (($fn637) self->$class->vtable[24])(self, p_t, intf632);
            panda$collections$Set* $tmp640 = (($fn639) self->$class->vtable[14])(self, $tmp638);
            (($fn641) result612->$class->vtable[3])(result612, ((panda$collections$CollectionView*) $tmp640));
        }
        goto $l625;
        $l626:;
    }
    panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl608->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp642.value) {
    {
        (($fn643) result612->$class->vtable[2])(result612, ((panda$core$Object*) ((panda$collections$Key*) p_t)));
    }
    }
    return result612;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range $tmp649;
    panda$core$Int64 $tmp645 = (($fn644) p_t1->subtypes->$class->vtable[3])(p_t1->subtypes);
    panda$core$Int64 $tmp647 = (($fn646) p_t2->subtypes->$class->vtable[3])(p_t2->subtypes);
    panda$core$Bit $tmp648 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp645, $tmp647);
    if ($tmp648.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp651 = (($fn650) p_t1->subtypes->$class->vtable[3])(p_t1->subtypes);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp649, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp651)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp653 = ((panda$core$Int64$wrapper*) $tmp649.start)->value.value;
    panda$core$Int64 i652 = { $tmp653 };
    int64_t $tmp655 = ((panda$core$Int64$wrapper*) $tmp649.end)->value.value;
    int64_t $tmp656 = $tmp649.step.value;
    bool $tmp657 = $tmp649.inclusive.value;
    bool $tmp664 = $tmp656 > 0;
    if ($tmp664) goto $l662; else goto $l663;
    $l662:;
    if ($tmp657) goto $l665; else goto $l666;
    $l665:;
    if ($tmp653 <= $tmp655) goto $l658; else goto $l660;
    $l666:;
    if ($tmp653 < $tmp655) goto $l658; else goto $l660;
    $l663:;
    if ($tmp657) goto $l667; else goto $l668;
    $l667:;
    if ($tmp653 >= $tmp655) goto $l658; else goto $l660;
    $l668:;
    if ($tmp653 > $tmp655) goto $l658; else goto $l660;
    $l658:;
    {
        panda$core$Object* $tmp671 = (($fn670) p_t1->subtypes->$class->vtable[2])(p_t1->subtypes, i652);
        panda$core$Object* $tmp673 = (($fn672) p_t2->subtypes->$class->vtable[2])(p_t2->subtypes, i652);
        panda$core$Bit $tmp675 = (($fn674) ((org$pandalanguage$pandac$Type*) $tmp671)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp671), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp673)));
        if ($tmp675.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l661:;
    if ($tmp664) goto $l677; else goto $l678;
    $l677:;
    int64_t $tmp679 = $tmp655 - i652.value;
    if ($tmp657) goto $l680; else goto $l681;
    $l680:;
    if ($tmp679 >= $tmp656) goto $l676; else goto $l660;
    $l681:;
    if ($tmp679 > $tmp656) goto $l676; else goto $l660;
    $l678:;
    int64_t $tmp683 = i652.value - $tmp655;
    if ($tmp657) goto $l684; else goto $l685;
    $l684:;
    if ($tmp683 >= -$tmp656) goto $l676; else goto $l660;
    $l685:;
    if ($tmp683 > -$tmp656) goto $l676; else goto $l660;
    $l676:;
    i652.value += $tmp656;
    goto $l658;
    $l660:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl687;
    panda$collections$Iterator* test$Iter690;
    org$pandalanguage$pandac$MethodDecl* test702;
    panda$collections$Iterator* raw$Iter719;
    org$pandalanguage$pandac$Type* raw731;
    org$pandalanguage$pandac$MethodDecl* result736;
    org$pandalanguage$pandac$ClassDecl* $tmp689 = (($fn688) self->$class->vtable[13])(self, p_owner);
    cl687 = $tmp689;
    {
        ITable* $tmp691 = ((panda$collections$Iterable*) cl687->methods)->$class->itable;
        while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp691 = $tmp691->next;
        }
        $fn693 $tmp692 = $tmp691->methods[0];
        panda$collections$Iterator* $tmp694 = $tmp692(((panda$collections$Iterable*) cl687->methods));
        test$Iter690 = $tmp694;
        $l695:;
        ITable* $tmp697 = test$Iter690->$class->itable;
        while ($tmp697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp697 = $tmp697->next;
        }
        $fn699 $tmp698 = $tmp697->methods[0];
        panda$core$Bit $tmp700 = $tmp698(test$Iter690);
        panda$core$Bit $tmp701 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp700);
        if (!$tmp701.value) goto $l696;
        {
            ITable* $tmp703 = test$Iter690->$class->itable;
            while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp703 = $tmp703->next;
            }
            $fn705 $tmp704 = $tmp703->methods[1];
            panda$core$Object* $tmp706 = $tmp704(test$Iter690);
            test702 = ((org$pandalanguage$pandac$MethodDecl*) $tmp706);
            panda$core$Bit $tmp707 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test702)->name, p_name);
            if ($tmp707.value) {
            {
                (($fn708) self->$class->vtable[6])(self, test702);
                org$pandalanguage$pandac$Type* $tmp710 = (($fn709) self->$class->vtable[43])(self, test702);
                org$pandalanguage$pandac$Type* $tmp712 = (($fn711) self->$class->vtable[24])(self, p_owner, $tmp710);
                panda$core$Bit $tmp714 = (($fn713) self->$class->vtable[15])(self, $tmp712, p_methodType);
                if ($tmp714.value) {
                {
                    return test702;
                }
                }
            }
            }
        }
        goto $l695;
        $l696:;
    }
    bool $tmp715 = p_checkInterfaces.value;
    if ($tmp715) goto $l716;
    panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl687->classKind, ((panda$core$Int64) { 5012 }));
    $tmp715 = $tmp717.value;
    $l716:;
    panda$core$Bit $tmp718 = { $tmp715 };
    if ($tmp718.value) {
    {
        {
            ITable* $tmp720 = ((panda$collections$Iterable*) cl687->rawInterfaces)->$class->itable;
            while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp720 = $tmp720->next;
            }
            $fn722 $tmp721 = $tmp720->methods[0];
            panda$collections$Iterator* $tmp723 = $tmp721(((panda$collections$Iterable*) cl687->rawInterfaces));
            raw$Iter719 = $tmp723;
            $l724:;
            ITable* $tmp726 = raw$Iter719->$class->itable;
            while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp726 = $tmp726->next;
            }
            $fn728 $tmp727 = $tmp726->methods[0];
            panda$core$Bit $tmp729 = $tmp727(raw$Iter719);
            panda$core$Bit $tmp730 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp729);
            if (!$tmp730.value) goto $l725;
            {
                ITable* $tmp732 = raw$Iter719->$class->itable;
                while ($tmp732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp732 = $tmp732->next;
                }
                $fn734 $tmp733 = $tmp732->methods[1];
                panda$core$Object* $tmp735 = $tmp733(raw$Iter719);
                raw731 = ((org$pandalanguage$pandac$Type*) $tmp735);
                org$pandalanguage$pandac$Type* $tmp738 = (($fn737) self->$class->vtable[24])(self, p_owner, raw731);
                org$pandalanguage$pandac$MethodDecl* $tmp740 = (($fn739) self->$class->vtable[16])(self, $tmp738, p_name, p_methodType, p_checkInterfaces);
                result736 = $tmp740;
                if (((panda$core$Bit) { result736 != NULL }).value) {
                {
                    return result736;
                }
                }
            }
            goto $l724;
            $l725:;
        }
    }
    }
    if (((panda$core$Bit) { cl687->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp742 = (($fn741) self->$class->vtable[24])(self, p_owner, cl687->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp744 = (($fn743) self->$class->vtable[16])(self, $tmp742, p_name, p_methodType, p_checkInterfaces);
        return $tmp744;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType746;
    org$pandalanguage$pandac$Type* owner749;
    panda$collections$Iterator* raw$Iter752;
    org$pandalanguage$pandac$Type* raw764;
    org$pandalanguage$pandac$MethodDecl* result769;
    (($fn745) self->$class->vtable[6])(self, p_m);
    org$pandalanguage$pandac$Type* $tmp748 = (($fn747) self->$class->vtable[43])(self, p_m);
    methodType746 = $tmp748;
    org$pandalanguage$pandac$Type* $tmp751 = (($fn750) p_m->owner->$class->vtable[4])(p_m->owner);
    owner749 = $tmp751;
    {
        ITable* $tmp753 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp753->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp753 = $tmp753->next;
        }
        $fn755 $tmp754 = $tmp753->methods[0];
        panda$collections$Iterator* $tmp756 = $tmp754(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter752 = $tmp756;
        $l757:;
        ITable* $tmp759 = raw$Iter752->$class->itable;
        while ($tmp759->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp759 = $tmp759->next;
        }
        $fn761 $tmp760 = $tmp759->methods[0];
        panda$core$Bit $tmp762 = $tmp760(raw$Iter752);
        panda$core$Bit $tmp763 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp762);
        if (!$tmp763.value) goto $l758;
        {
            ITable* $tmp765 = raw$Iter752->$class->itable;
            while ($tmp765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp765 = $tmp765->next;
            }
            $fn767 $tmp766 = $tmp765->methods[1];
            panda$core$Object* $tmp768 = $tmp766(raw$Iter752);
            raw764 = ((org$pandalanguage$pandac$Type*) $tmp768);
            org$pandalanguage$pandac$Type* $tmp771 = (($fn770) self->$class->vtable[24])(self, owner749, raw764);
            org$pandalanguage$pandac$MethodDecl* $tmp773 = (($fn772) self->$class->vtable[16])(self, $tmp771, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType746, ((panda$core$Bit) { true }));
            result769 = $tmp773;
            if (((panda$core$Bit) { result769 != NULL }).value) {
            {
                return result769;
            }
            }
        }
        goto $l757;
        $l758:;
    }
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp775 = (($fn774) self->$class->vtable[24])(self, owner749, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp777 = (($fn776) self->$class->vtable[16])(self, $tmp775, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType746, ((panda$core$Bit) { true }));
        return $tmp777;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass778;
    panda$collections$Array* result781;
    panda$collections$Iterator* m$Iter784;
    org$pandalanguage$pandac$MethodDecl* m796;
    org$pandalanguage$pandac$MethodDecl* found801;
    org$pandalanguage$pandac$ClassDecl* $tmp780 = (($fn779) self->$class->vtable[13])(self, p_intf);
    intfClass778 = $tmp780;
    panda$collections$Array* $tmp782 = (panda$collections$Array*) malloc(40);
    $tmp782->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp782->refCount.value = 1;
    panda$collections$Array$init($tmp782);
    result781 = $tmp782;
    {
        ITable* $tmp785 = ((panda$collections$Iterable*) intfClass778->methods)->$class->itable;
        while ($tmp785->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp785 = $tmp785->next;
        }
        $fn787 $tmp786 = $tmp785->methods[0];
        panda$collections$Iterator* $tmp788 = $tmp786(((panda$collections$Iterable*) intfClass778->methods));
        m$Iter784 = $tmp788;
        $l789:;
        ITable* $tmp791 = m$Iter784->$class->itable;
        while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp791 = $tmp791->next;
        }
        $fn793 $tmp792 = $tmp791->methods[0];
        panda$core$Bit $tmp794 = $tmp792(m$Iter784);
        panda$core$Bit $tmp795 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp794);
        if (!$tmp795.value) goto $l790;
        {
            ITable* $tmp797 = m$Iter784->$class->itable;
            while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp797 = $tmp797->next;
            }
            $fn799 $tmp798 = $tmp797->methods[1];
            panda$core$Object* $tmp800 = $tmp798(m$Iter784);
            m796 = ((org$pandalanguage$pandac$MethodDecl*) $tmp800);
            org$pandalanguage$pandac$Type* $tmp803 = (($fn802) p_cl->$class->vtable[3])(p_cl);
            org$pandalanguage$pandac$Type* $tmp805 = (($fn804) self->$class->vtable[45])(self, m796);
            org$pandalanguage$pandac$Type* $tmp807 = (($fn806) self->$class->vtable[24])(self, p_intf, $tmp805);
            org$pandalanguage$pandac$MethodDecl* $tmp809 = (($fn808) self->$class->vtable[16])(self, $tmp803, ((org$pandalanguage$pandac$Symbol*) m796)->name, $tmp807, ((panda$core$Bit) { false }));
            found801 = $tmp809;
            panda$collections$Array$add$panda$collections$Array$T(result781, ((panda$core$Object*) found801));
        }
        goto $l789;
        $l790:;
    }
    return ((panda$collections$ListView*) result781);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl812;
    panda$collections$Iterator* rawIntf$Iter817;
    org$pandalanguage$pandac$Type* rawIntf829;
    org$pandalanguage$pandac$ClassDecl* intf834;
    panda$core$Bit $tmp810 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp810.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        (($fn811) self->$class->vtable[5])(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp814 = (($fn813) self->$class->vtable[13])(self, p_cl->rawSuper);
            superCl812 = $tmp814;
            if (((panda$core$Bit) { superCl812 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp816 = (($fn815) self->$class->vtable[19])(self, superCl812);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp816));
            }
            }
        }
        }
        {
            ITable* $tmp818 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp818->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp818 = $tmp818->next;
            }
            $fn820 $tmp819 = $tmp818->methods[0];
            panda$collections$Iterator* $tmp821 = $tmp819(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter817 = $tmp821;
            $l822:;
            ITable* $tmp824 = rawIntf$Iter817->$class->itable;
            while ($tmp824->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp824 = $tmp824->next;
            }
            $fn826 $tmp825 = $tmp824->methods[0];
            panda$core$Bit $tmp827 = $tmp825(rawIntf$Iter817);
            panda$core$Bit $tmp828 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp827);
            if (!$tmp828.value) goto $l823;
            {
                ITable* $tmp830 = rawIntf$Iter817->$class->itable;
                while ($tmp830->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp830 = $tmp830->next;
                }
                $fn832 $tmp831 = $tmp830->methods[1];
                panda$core$Object* $tmp833 = $tmp831(rawIntf$Iter817);
                rawIntf829 = ((org$pandalanguage$pandac$Type*) $tmp833);
                org$pandalanguage$pandac$ClassDecl* $tmp836 = (($fn835) self->$class->vtable[13])(self, rawIntf829);
                intf834 = $tmp836;
                if (((panda$core$Bit) { intf834 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp838 = (($fn837) self->$class->vtable[19])(self, intf834);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp838));
                }
                }
            }
            goto $l822;
            $l823:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl844;
    panda$collections$Iterator* derived$Iter851;
    org$pandalanguage$pandac$MethodDecl* derived863;
    panda$core$Bit found875;
    panda$core$Range $tmp876;
    org$pandalanguage$pandac$MethodDecl* base896;
    panda$core$Int64 $tmp839 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp839, ((panda$core$Int64) { 0 }));
    if ($tmp840.value) {
    {
        (($fn841) self->$class->vtable[5])(self, p_cl);
        (($fn842) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
        (($fn843) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp846 = (($fn845) self->$class->vtable[13])(self, p_cl->rawSuper);
            superCl844 = $tmp846;
            if (((panda$core$Bit) { superCl844 == NULL }).value) {
            {
                (($fn847) self->currentClass->$class->vtable[3])(self->currentClass);
                (($fn848) self->currentFile->$class->vtable[3])(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp850 = (($fn849) self->$class->vtable[20])(self, superCl844);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp850));
        }
        }
        {
            ITable* $tmp852 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp852->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp852 = $tmp852->next;
            }
            $fn854 $tmp853 = $tmp852->methods[0];
            panda$collections$Iterator* $tmp855 = $tmp853(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter851 = $tmp855;
            $l856:;
            ITable* $tmp858 = derived$Iter851->$class->itable;
            while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp858 = $tmp858->next;
            }
            $fn860 $tmp859 = $tmp858->methods[0];
            panda$core$Bit $tmp861 = $tmp859(derived$Iter851);
            panda$core$Bit $tmp862 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp861);
            if (!$tmp862.value) goto $l857;
            {
                ITable* $tmp864 = derived$Iter851->$class->itable;
                while ($tmp864->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp864 = $tmp864->next;
                }
                $fn866 $tmp865 = $tmp864->methods[1];
                panda$core$Object* $tmp867 = $tmp865(derived$Iter851);
                derived863 = ((org$pandalanguage$pandac$MethodDecl*) $tmp867);
                (($fn868) self->$class->vtable[6])(self, derived863);
                panda$core$Bit $tmp870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived863->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp869 = $tmp870.value;
                if ($tmp869) goto $l871;
                panda$core$Bit $tmp873 = (($fn872) derived863->annotations->$class->vtable[5])(derived863->annotations);
                $tmp869 = $tmp873.value;
                $l871:;
                panda$core$Bit $tmp874 = { $tmp869 };
                if ($tmp874.value) {
                {
                    goto $l856;
                }
                }
                found875 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp877 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp876, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp877)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp879 = ((panda$core$Int64$wrapper*) $tmp876.start)->value.value;
                panda$core$Int64 i878 = { $tmp879 };
                int64_t $tmp881 = ((panda$core$Int64$wrapper*) $tmp876.end)->value.value;
                int64_t $tmp882 = $tmp876.step.value;
                bool $tmp883 = $tmp876.inclusive.value;
                bool $tmp890 = $tmp882 > 0;
                if ($tmp890) goto $l888; else goto $l889;
                $l888:;
                if ($tmp883) goto $l891; else goto $l892;
                $l891:;
                if ($tmp879 <= $tmp881) goto $l884; else goto $l886;
                $l892:;
                if ($tmp879 < $tmp881) goto $l884; else goto $l886;
                $l889:;
                if ($tmp883) goto $l893; else goto $l894;
                $l893:;
                if ($tmp879 >= $tmp881) goto $l884; else goto $l886;
                $l894:;
                if ($tmp879 > $tmp881) goto $l884; else goto $l886;
                $l884:;
                {
                    panda$core$Object* $tmp897 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i878);
                    base896 = ((org$pandalanguage$pandac$MethodDecl*) $tmp897);
                    (($fn898) self->$class->vtable[6])(self, base896);
                    panda$core$Bit $tmp900 = (($fn899) derived863->$class->vtable[5])(derived863, base896);
                    if ($tmp900.value) {
                    {
                        found875 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i878, ((panda$core$Object*) derived863));
                        goto $l886;
                    }
                    }
                }
                $l887:;
                if ($tmp890) goto $l902; else goto $l903;
                $l902:;
                int64_t $tmp904 = $tmp881 - i878.value;
                if ($tmp883) goto $l905; else goto $l906;
                $l905:;
                if ($tmp904 >= $tmp882) goto $l901; else goto $l886;
                $l906:;
                if ($tmp904 > $tmp882) goto $l901; else goto $l886;
                $l903:;
                int64_t $tmp908 = i878.value - $tmp881;
                if ($tmp883) goto $l909; else goto $l910;
                $l909:;
                if ($tmp908 >= -$tmp882) goto $l901; else goto $l886;
                $l910:;
                if ($tmp908 > -$tmp882) goto $l901; else goto $l886;
                $l901:;
                i878.value += $tmp882;
                goto $l884;
                $l886:;
                panda$core$Bit $tmp912 = panda$core$Bit$$NOT$R$panda$core$Bit(found875);
                if ($tmp912.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived863));
                }
                }
            }
            goto $l856;
            $l857:;
        }
        (($fn913) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn914) self->currentFile->$class->vtable[3])(self->currentFile);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$core$Int64 p_offset, panda$collections$ListView* p_types) {
    panda$collections$Array* methods915;
    org$pandalanguage$pandac$Symbol* s918;
    panda$collections$Iterator* m$Iter925;
    org$pandalanguage$pandac$MethodDecl* m937;
    panda$collections$Iterator* p$Iter945;
    org$pandalanguage$pandac$SymbolTable* p957;
    panda$collections$Array* children963;
    panda$collections$Array* types974;
    panda$collections$Iterator* m$Iter977;
    org$pandalanguage$pandac$MethodRef* m989;
    panda$collections$Array* $tmp916 = (panda$collections$Array*) malloc(40);
    $tmp916->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp916->refCount.value = 1;
    panda$collections$Array$init($tmp916);
    methods915 = $tmp916;
    org$pandalanguage$pandac$Symbol* $tmp920 = (($fn919) p_st->$class->vtable[6])(p_st, p_name);
    s918 = $tmp920;
    panda$core$Bit $tmp921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s918->kind, ((panda$core$Int64) { 204 }));
    if ($tmp921.value) {
    {
        (($fn922) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$MethodDecl*) s918));
        org$pandalanguage$pandac$MethodRef* $tmp923 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp923->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp923->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp923, ((org$pandalanguage$pandac$MethodDecl*) s918), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods915, ((panda$core$Object*) $tmp923));
    }
    }
    else {
    {
        {
            ITable* $tmp926 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s918)->methods)->$class->itable;
            while ($tmp926->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp926 = $tmp926->next;
            }
            $fn928 $tmp927 = $tmp926->methods[0];
            panda$collections$Iterator* $tmp929 = $tmp927(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s918)->methods));
            m$Iter925 = $tmp929;
            $l930:;
            ITable* $tmp932 = m$Iter925->$class->itable;
            while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp932 = $tmp932->next;
            }
            $fn934 $tmp933 = $tmp932->methods[0];
            panda$core$Bit $tmp935 = $tmp933(m$Iter925);
            panda$core$Bit $tmp936 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp935);
            if (!$tmp936.value) goto $l931;
            {
                ITable* $tmp938 = m$Iter925->$class->itable;
                while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp938 = $tmp938->next;
                }
                $fn940 $tmp939 = $tmp938->methods[1];
                panda$core$Object* $tmp941 = $tmp939(m$Iter925);
                m937 = ((org$pandalanguage$pandac$MethodDecl*) $tmp941);
                (($fn942) self->$class->vtable[6])(self, m937);
                org$pandalanguage$pandac$MethodRef* $tmp943 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp943->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp943->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp943, m937, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods915, ((panda$core$Object*) $tmp943));
            }
            goto $l930;
            $l931:;
        }
    }
    }
    {
        ITable* $tmp946 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp946 = $tmp946->next;
        }
        $fn948 $tmp947 = $tmp946->methods[0];
        panda$collections$Iterator* $tmp949 = $tmp947(((panda$collections$Iterable*) p_st->parents));
        p$Iter945 = $tmp949;
        $l950:;
        ITable* $tmp952 = p$Iter945->$class->itable;
        while ($tmp952->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp952 = $tmp952->next;
        }
        $fn954 $tmp953 = $tmp952->methods[0];
        panda$core$Bit $tmp955 = $tmp953(p$Iter945);
        panda$core$Bit $tmp956 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp955);
        if (!$tmp956.value) goto $l951;
        {
            ITable* $tmp958 = p$Iter945->$class->itable;
            while ($tmp958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp958 = $tmp958->next;
            }
            $fn960 $tmp959 = $tmp958->methods[1];
            panda$core$Object* $tmp961 = $tmp959(p$Iter945);
            p957 = ((org$pandalanguage$pandac$SymbolTable*) $tmp961);
            (($fn962) self->$class->vtable[21])(self, p957, p_name, methods915, p_types);
        }
        goto $l950;
        $l951:;
    }
    panda$collections$Array* $tmp964 = (panda$collections$Array*) malloc(40);
    $tmp964->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp964->refCount.value = 1;
    panda$collections$Array$init($tmp964);
    children963 = $tmp964;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children963, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp966 = panda$collections$Array$get_count$R$panda$core$Int64(methods915);
    panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp966, ((panda$core$Int64) { 1 }));
    if ($tmp967.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp968 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp968->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp968->refCount.value = 1;
        panda$core$Object* $tmp970 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods915, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp972 = (($fn971) ((org$pandalanguage$pandac$MethodRef*) $tmp970)->$class->vtable[6])(((org$pandalanguage$pandac$MethodRef*) $tmp970));
        panda$core$Object* $tmp973 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods915, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp968, ((panda$core$Int64) { 1002 }), p_offset, $tmp972, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp973)), ((panda$collections$ListView*) children963));
        return $tmp968;
    }
    }
    else {
    {
        panda$collections$Array* $tmp975 = (panda$collections$Array*) malloc(40);
        $tmp975->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp975->refCount.value = 1;
        panda$collections$Array$init($tmp975);
        types974 = $tmp975;
        {
            ITable* $tmp978 = ((panda$collections$Iterable*) methods915)->$class->itable;
            while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp978 = $tmp978->next;
            }
            $fn980 $tmp979 = $tmp978->methods[0];
            panda$collections$Iterator* $tmp981 = $tmp979(((panda$collections$Iterable*) methods915));
            m$Iter977 = $tmp981;
            $l982:;
            ITable* $tmp984 = m$Iter977->$class->itable;
            while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp984 = $tmp984->next;
            }
            $fn986 $tmp985 = $tmp984->methods[0];
            panda$core$Bit $tmp987 = $tmp985(m$Iter977);
            panda$core$Bit $tmp988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp987);
            if (!$tmp988.value) goto $l983;
            {
                ITable* $tmp990 = m$Iter977->$class->itable;
                while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp990 = $tmp990->next;
                }
                $fn992 $tmp991 = $tmp990->methods[1];
                panda$core$Object* $tmp993 = $tmp991(m$Iter977);
                m989 = ((org$pandalanguage$pandac$MethodRef*) $tmp993);
                org$pandalanguage$pandac$Type* $tmp995 = (($fn994) m989->$class->vtable[6])(m989);
                panda$collections$Array$add$panda$collections$Array$T(types974, ((panda$core$Object*) $tmp995));
            }
            goto $l982;
            $l983:;
        }
        org$pandalanguage$pandac$IRNode* $tmp996 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp996->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp996->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp998 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp998->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp998->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp998, ((panda$collections$ListView*) types974));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp996, ((panda$core$Int64) { 1003 }), p_offset, $tmp998, ((panda$core$Object*) methods915), ((panda$collections$ListView*) children963));
        return $tmp996;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    panda$core$Int64 $match$211511000;
    org$pandalanguage$pandac$ClassDecl* cl1002;
    org$pandalanguage$pandac$FieldDecl* f1029;
    panda$collections$Array* children1034;
    org$pandalanguage$pandac$Type* effectiveType1040;
    org$pandalanguage$pandac$IRNode* result1049;
    {
        $match$211511000 = p_s->kind;
        panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211511000, ((panda$core$Int64) { 200 }));
        if ($tmp1001.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1004 = (($fn1003) self->$class->vtable[12])(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1002 = $tmp1004;
            if (((panda$core$Bit) { cl1002 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1005 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1005->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1005->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1007 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1009 = (($fn1008) cl1002->$class->vtable[3])(cl1002);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1005, ((panda$core$Int64) { 1001 }), p_offset, $tmp1007, $tmp1009);
                return $tmp1005;
            }
            }
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp1010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211511000, ((panda$core$Int64) { 201 }));
        if ($tmp1010.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1011 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1011->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1015 = (($fn1014) ((org$pandalanguage$pandac$ClassDecl*) p_s)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1011, ((panda$core$Int64) { 1001 }), p_offset, $tmp1013, $tmp1015);
            return $tmp1011;
        }
        }
        else {
        panda$core$Bit $tmp1017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211511000, ((panda$core$Int64) { 204 }));
        bool $tmp1016 = $tmp1017.value;
        if ($tmp1016) goto $l1018;
        panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211511000, ((panda$core$Int64) { 205 }));
        $tmp1016 = $tmp1019.value;
        $l1018:;
        panda$core$Bit $tmp1020 = { $tmp1016 };
        if ($tmp1020.value) {
        {
            panda$collections$ListView* $tmp1022 = (($fn1021) self->$class->vtable[55])(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1024 = (($fn1023) self->$class->vtable[22])(self, p_st, p_target, p_s->name, p_offset, $tmp1022);
            return $tmp1024;
        }
        }
        else {
        panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211511000, ((panda$core$Int64) { 208 }));
        if ($tmp1025.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1026 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1026->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1026->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1026, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1026;
        }
        }
        else {
        panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211511000, ((panda$core$Int64) { 202 }));
        if ($tmp1028.value) {
        {
            f1029 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            (($fn1030) self->$class->vtable[7])(self, f1029);
            org$pandalanguage$pandac$Type* $tmp1031 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1033 = (($fn1032) f1029->type->$class->vtable[4])(f1029->type, ((panda$core$Object*) $tmp1031));
            if ($tmp1033.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1035 = (panda$collections$Array*) malloc(40);
            $tmp1035->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1035->refCount.value = 1;
            panda$collections$Array$init($tmp1035);
            children1034 = $tmp1035;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1037.value) {
                {
                    (($fn1039) self->$class->vtable[95])(self, p_target->offset, &$s1038);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1042 = (($fn1041) self->$class->vtable[24])(self, p_target->type, f1029->type);
                effectiveType1040 = $tmp1042;
                panda$core$Bit $tmp1044 = (($fn1043) f1029->annotations->$class->vtable[5])(f1029->annotations);
                if ($tmp1044.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1034, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1046 = (($fn1045) f1029->owner->$class->vtable[3])(f1029->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1048 = (($fn1047) self->$class->vtable[32])(self, p_target, $tmp1046);
                    panda$collections$Array$add$panda$collections$Array$T(children1034, ((panda$core$Object*) $tmp1048));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1050 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1050->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1050->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1050, ((panda$core$Int64) { 1026 }), p_offset, f1029->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1034));
                result1049 = $tmp1050;
                panda$core$Bit $tmp1053 = (($fn1052) effectiveType1040->$class->vtable[5])(effectiveType1040, ((panda$core$Object*) result1049->type));
                if ($tmp1053.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1055 = (($fn1054) self->$class->vtable[35])(self, result1049, p_offset, ((panda$core$Bit) { false }), effectiveType1040);
                    result1049 = $tmp1055;
                }
                }
                return result1049;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1056 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1056->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1056->refCount.value = 1;
                panda$core$Object* $tmp1059 = (($fn1058) self->currentClass->$class->vtable[4])(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1061 = (($fn1060) ((org$pandalanguage$pandac$ClassDecl*) $tmp1059)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp1059));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1056, ((panda$core$Int64) { 1025 }), p_offset, $tmp1061);
                panda$collections$Array$add$panda$collections$Array$T(children1034, ((panda$core$Object*) $tmp1056));
                org$pandalanguage$pandac$IRNode* $tmp1062 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1062->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1062->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1062, ((panda$core$Int64) { 1026 }), p_offset, f1029->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1034));
                return $tmp1062;
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
    panda$core$Int64 $match$235151064;
    panda$collections$HashMap* typeMap1072;
    org$pandalanguage$pandac$Type* base1075;
    org$pandalanguage$pandac$ClassDecl* cl1078;
    panda$core$Range $tmp1081;
    {
        $match$235151064 = p_context->typeKind;
        panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$235151064, ((panda$core$Int64) { 10 }));
        if ($tmp1065.value) {
        {
            return p_raw;
        }
        }
        else {
        panda$core$Bit $tmp1066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$235151064, ((panda$core$Int64) { 11 }));
        if ($tmp1066.value) {
        {
            panda$core$Object* $tmp1068 = (($fn1067) p_context->subtypes->$class->vtable[2])(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1070 = (($fn1069) self->$class->vtable[24])(self, ((org$pandalanguage$pandac$Type*) $tmp1068), p_raw);
            return $tmp1070;
        }
        }
        else {
        panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$235151064, ((panda$core$Int64) { 21 }));
        if ($tmp1071.value) {
        {
            panda$collections$HashMap* $tmp1073 = (panda$collections$HashMap*) malloc(56);
            $tmp1073->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1073->refCount.value = 1;
            panda$collections$HashMap$init($tmp1073);
            typeMap1072 = $tmp1073;
            panda$core$Object* $tmp1077 = (($fn1076) p_context->subtypes->$class->vtable[2])(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1075 = ((org$pandalanguage$pandac$Type*) $tmp1077);
            org$pandalanguage$pandac$ClassDecl* $tmp1080 = (($fn1079) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$Symbol*) base1075)->name);
            cl1078 = $tmp1080;
            panda$core$Int64 $tmp1083 = (($fn1082) p_context->subtypes->$class->vtable[3])(p_context->subtypes);
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1081, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1083)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1085 = ((panda$core$Int64$wrapper*) $tmp1081.start)->value.value;
            panda$core$Int64 i1084 = { $tmp1085 };
            int64_t $tmp1087 = ((panda$core$Int64$wrapper*) $tmp1081.end)->value.value;
            int64_t $tmp1088 = $tmp1081.step.value;
            bool $tmp1089 = $tmp1081.inclusive.value;
            bool $tmp1096 = $tmp1088 > 0;
            if ($tmp1096) goto $l1094; else goto $l1095;
            $l1094:;
            if ($tmp1089) goto $l1097; else goto $l1098;
            $l1097:;
            if ($tmp1085 <= $tmp1087) goto $l1090; else goto $l1092;
            $l1098:;
            if ($tmp1085 < $tmp1087) goto $l1090; else goto $l1092;
            $l1095:;
            if ($tmp1089) goto $l1099; else goto $l1100;
            $l1099:;
            if ($tmp1085 >= $tmp1087) goto $l1090; else goto $l1092;
            $l1100:;
            if ($tmp1085 > $tmp1087) goto $l1090; else goto $l1092;
            $l1090:;
            {
                panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1078)->name, &$s1102);
                panda$core$Int64 $tmp1104 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1084, ((panda$core$Int64) { 1 }));
                ITable* $tmp1105 = ((panda$collections$ListView*) cl1078->parameters)->$class->itable;
                while ($tmp1105->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1105 = $tmp1105->next;
                }
                $fn1107 $tmp1106 = $tmp1105->methods[0];
                panda$core$Object* $tmp1108 = $tmp1106(((panda$collections$ListView*) cl1078->parameters), $tmp1104);
                panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1108))->name);
                panda$core$Object* $tmp1111 = (($fn1110) p_context->subtypes->$class->vtable[2])(p_context->subtypes, i1084);
                (($fn1112) typeMap1072->$class->vtable[5])(typeMap1072, ((panda$core$Object*) ((panda$collections$Key*) $tmp1109)), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1111)));
            }
            $l1093:;
            if ($tmp1096) goto $l1114; else goto $l1115;
            $l1114:;
            int64_t $tmp1116 = $tmp1087 - i1084.value;
            if ($tmp1089) goto $l1117; else goto $l1118;
            $l1117:;
            if ($tmp1116 >= $tmp1088) goto $l1113; else goto $l1092;
            $l1118:;
            if ($tmp1116 > $tmp1088) goto $l1113; else goto $l1092;
            $l1115:;
            int64_t $tmp1120 = i1084.value - $tmp1087;
            if ($tmp1089) goto $l1121; else goto $l1122;
            $l1121:;
            if ($tmp1120 >= -$tmp1088) goto $l1113; else goto $l1092;
            $l1122:;
            if ($tmp1120 > -$tmp1088) goto $l1113; else goto $l1092;
            $l1113:;
            i1084.value += $tmp1088;
            goto $l1090;
            $l1092:;
            org$pandalanguage$pandac$Type* $tmp1125 = (($fn1124) p_raw->$class->vtable[14])(p_raw, typeMap1072);
            return $tmp1125;
        }
        }
        else {
        panda$core$Bit $tmp1126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$235151064, ((panda$core$Int64) { 22 }));
        if ($tmp1126.value) {
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
    org$pandalanguage$pandac$Type* $tmp1127 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1129 = (($fn1128) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1127));
    if ($tmp1129.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1130 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1130;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1131 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1133 = (($fn1132) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1131));
    if ($tmp1133.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1134 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1134;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$247081135;
    panda$collections$Array* args1145;
    panda$core$Range $tmp1146;
    org$pandalanguage$pandac$IRNode* c1148;
    {
        $match$247081135 = p_expr->kind;
        panda$core$Bit $tmp1136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$247081135, ((panda$core$Int64) { 1031 }));
        if ($tmp1136.value) {
        {
            panda$core$Object* $tmp1137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1140 = (($fn1139) ((org$pandalanguage$pandac$IRNode*) $tmp1137)->type->$class->vtable[13])(((org$pandalanguage$pandac$IRNode*) $tmp1137)->type, ((org$pandalanguage$pandac$IRNode*) $tmp1138)->type);
            org$pandalanguage$pandac$Type* $tmp1142 = (($fn1141) self->$class->vtable[25])(self, $tmp1140);
            org$pandalanguage$pandac$Type* $tmp1143 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1142);
            return $tmp1143;
        }
        }
        else {
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$247081135, ((panda$core$Int64) { 1040 }));
        if ($tmp1144.value) {
        {
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1146, (((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1147 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1146);
            args1145 = $tmp1147;
            panda$core$Object* $tmp1149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1152 = (($fn1151) self->$class->vtable[39])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1149), &$s1150, ((panda$collections$ListView*) args1145));
            c1148 = $tmp1152;
            if (((panda$core$Bit) { c1148 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1153 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1153;
            }
            }
            return c1148->type;
        }
        }
        }
    }
    org$pandalanguage$pandac$Type* $tmp1155 = (($fn1154) self->$class->vtable[25])(self, p_expr->type);
    return $tmp1155;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1168;
    panda$core$Int64 $match$259291174;
    panda$core$Int64$nullable result1176;
    panda$core$Int64 $match$265521194;
    panda$core$Int64$nullable best1200;
    panda$collections$Iterator* t$Iter1201;
    org$pandalanguage$pandac$Type* t1213;
    panda$core$Int64$nullable cost1218;
    org$pandalanguage$pandac$ClassDecl* cl1239;
    panda$core$Int64$nullable cost1243;
    panda$collections$Iterator* intf$Iter1251;
    org$pandalanguage$pandac$Type* intf1263;
    panda$core$Int64$nullable cost1268;
    panda$core$Bit $tmp1157 = (($fn1156) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) p_target));
    if ($tmp1157.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1158 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1160 = (($fn1159) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1158));
    if ($tmp1160.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1161.value) {
    {
        panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1162.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1163 = $tmp1164.value;
    if (!$tmp1163) goto $l1165;
    panda$core$Bit $tmp1166 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1163 = $tmp1166.value;
    $l1165:;
    panda$core$Bit $tmp1167 = { $tmp1163 };
    if ($tmp1167.value) {
    {
        panda$core$Object* $tmp1170 = (($fn1169) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1172 = (($fn1171) self->$class->vtable[27])(self, ((org$pandalanguage$pandac$Type*) $tmp1170), p_target);
        result1168 = $tmp1172;
        if (((panda$core$Bit) { !result1168.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1173 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1168.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1173, true });
    }
    }
    {
        $match$259291174 = p_target->typeKind;
        panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259291174, ((panda$core$Int64) { 11 }));
        if ($tmp1175.value) {
        {
            panda$core$Object* $tmp1178 = (($fn1177) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1180 = (($fn1179) self->$class->vtable[27])(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1178));
            result1176 = $tmp1180;
            if (((panda$core$Bit) { !result1176.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1181 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1176.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1181, true });
        }
        }
        else {
        panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259291174, ((panda$core$Int64) { 22 }));
        if ($tmp1182.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259291174, ((panda$core$Int64) { 12 }));
        bool $tmp1183 = $tmp1184.value;
        if ($tmp1183) goto $l1185;
        panda$core$Bit $tmp1186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259291174, ((panda$core$Int64) { 13 }));
        $tmp1183 = $tmp1186.value;
        $l1185:;
        panda$core$Bit $tmp1187 = { $tmp1183 };
        if ($tmp1187.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259291174, ((panda$core$Int64) { 10 }));
        if ($tmp1188.value) {
        {
            panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1189.value) {
            {
                panda$core$Object* $tmp1191 = (($fn1190) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1193 = (($fn1192) self->$class->vtable[27])(self, ((org$pandalanguage$pandac$Type*) $tmp1191), p_target);
                return $tmp1193;
            }
            }
        }
        }
        }
        }
        }
    }
    {
        $match$265521194 = p_type->typeKind;
        panda$core$Bit $tmp1195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$265521194, ((panda$core$Int64) { 19 }));
        if ($tmp1195.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1196 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1198 = (($fn1197) self->$class->vtable[27])(self, $tmp1196, p_target);
            return $tmp1198;
        }
        }
        else {
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$265521194, ((panda$core$Int64) { 17 }));
        if ($tmp1199.value) {
        {
            best1200 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1202 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1202 = $tmp1202->next;
                }
                $fn1204 $tmp1203 = $tmp1202->methods[0];
                panda$collections$Iterator* $tmp1205 = $tmp1203(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1201 = $tmp1205;
                $l1206:;
                ITable* $tmp1208 = t$Iter1201->$class->itable;
                while ($tmp1208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1208 = $tmp1208->next;
                }
                $fn1210 $tmp1209 = $tmp1208->methods[0];
                panda$core$Bit $tmp1211 = $tmp1209(t$Iter1201);
                panda$core$Bit $tmp1212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1211);
                if (!$tmp1212.value) goto $l1207;
                {
                    ITable* $tmp1214 = t$Iter1201->$class->itable;
                    while ($tmp1214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1214 = $tmp1214->next;
                    }
                    $fn1216 $tmp1215 = $tmp1214->methods[1];
                    panda$core$Object* $tmp1217 = $tmp1215(t$Iter1201);
                    t1213 = ((org$pandalanguage$pandac$Type*) $tmp1217);
                    panda$core$Int64$nullable $tmp1220 = (($fn1219) self->$class->vtable[27])(self, t1213, p_target);
                    cost1218 = $tmp1220;
                    bool $tmp1221 = ((panda$core$Bit) { cost1218.nonnull }).value;
                    if (!$tmp1221) goto $l1222;
                    bool $tmp1223 = ((panda$core$Bit) { !best1200.nonnull }).value;
                    if ($tmp1223) goto $l1224;
                    panda$core$Bit $tmp1225 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1218.value), ((panda$core$Int64) best1200.value));
                    $tmp1223 = $tmp1225.value;
                    $l1224:;
                    panda$core$Bit $tmp1226 = { $tmp1223 };
                    $tmp1221 = $tmp1226.value;
                    $l1222:;
                    panda$core$Bit $tmp1227 = { $tmp1221 };
                    if ($tmp1227.value) {
                    {
                        best1200 = cost1218;
                    }
                    }
                }
                goto $l1206;
                $l1207:;
            }
            return best1200;
        }
        }
        else {
        panda$core$Bit $tmp1228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$265521194, ((panda$core$Int64) { 22 }));
        if ($tmp1228.value) {
        {
            panda$core$Object* $tmp1230 = (($fn1229) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1232 = (($fn1231) self->$class->vtable[27])(self, ((org$pandalanguage$pandac$Type*) $tmp1230), p_target);
            return $tmp1232;
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1234 = (($fn1233) p_target->$class->vtable[8])(p_target);
    panda$core$Bit $tmp1235 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1234);
    if ($tmp1235.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1237 = (($fn1236) p_type->$class->vtable[8])(p_type);
    panda$core$Bit $tmp1238 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1237);
    if ($tmp1238.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1241 = (($fn1240) self->$class->vtable[13])(self, p_type);
    cl1239 = $tmp1241;
    (($fn1242) self->$class->vtable[5])(self, cl1239);
    if (((panda$core$Bit) { cl1239->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1245 = (($fn1244) self->$class->vtable[24])(self, p_type, cl1239->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1247 = (($fn1246) self->$class->vtable[24])(self, p_type, $tmp1245);
        panda$core$Int64$nullable $tmp1249 = (($fn1248) self->$class->vtable[27])(self, $tmp1247, p_target);
        cost1243 = $tmp1249;
        if (((panda$core$Bit) { cost1243.nonnull }).value) {
        {
            panda$core$Int64 $tmp1250 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1243.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1250, true });
        }
        }
    }
    }
    {
        ITable* $tmp1252 = ((panda$collections$Iterable*) cl1239->rawInterfaces)->$class->itable;
        while ($tmp1252->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1252 = $tmp1252->next;
        }
        $fn1254 $tmp1253 = $tmp1252->methods[0];
        panda$collections$Iterator* $tmp1255 = $tmp1253(((panda$collections$Iterable*) cl1239->rawInterfaces));
        intf$Iter1251 = $tmp1255;
        $l1256:;
        ITable* $tmp1258 = intf$Iter1251->$class->itable;
        while ($tmp1258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1258 = $tmp1258->next;
        }
        $fn1260 $tmp1259 = $tmp1258->methods[0];
        panda$core$Bit $tmp1261 = $tmp1259(intf$Iter1251);
        panda$core$Bit $tmp1262 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1261);
        if (!$tmp1262.value) goto $l1257;
        {
            ITable* $tmp1264 = intf$Iter1251->$class->itable;
            while ($tmp1264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1264 = $tmp1264->next;
            }
            $fn1266 $tmp1265 = $tmp1264->methods[1];
            panda$core$Object* $tmp1267 = $tmp1265(intf$Iter1251);
            intf1263 = ((org$pandalanguage$pandac$Type*) $tmp1267);
            org$pandalanguage$pandac$Type* $tmp1270 = (($fn1269) self->$class->vtable[24])(self, p_type, intf1263);
            org$pandalanguage$pandac$Type* $tmp1272 = (($fn1271) self->$class->vtable[24])(self, p_type, $tmp1270);
            panda$core$Int64$nullable $tmp1274 = (($fn1273) self->$class->vtable[27])(self, $tmp1272, p_target);
            cost1268 = $tmp1274;
            if (((panda$core$Bit) { cost1268.nonnull }).value) {
            {
                panda$core$Int64 $tmp1275 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1268.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1275, true });
            }
            }
        }
        goto $l1256;
        $l1257:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1277 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1276 = $tmp1277.value;
    if (!$tmp1276) goto $l1278;
    panda$core$Bit $tmp1279 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1276 = $tmp1279.value;
    $l1278:;
    panda$core$Bit $tmp1280 = { $tmp1276 };
    if ($tmp1280.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1282 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1281 = $tmp1282.value;
    if (!$tmp1281) goto $l1283;
    panda$core$Bit $tmp1284 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1281 = $tmp1284.value;
    $l1283:;
    panda$core$Bit $tmp1285 = { $tmp1281 };
    if ($tmp1285.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1287 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1286 = $tmp1287.value;
    if (!$tmp1286) goto $l1288;
    panda$core$Bit $tmp1289 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1286 = $tmp1289.value;
    $l1288:;
    panda$core$Bit $tmp1290 = { $tmp1286 };
    if ($tmp1290.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1291 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1291.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1292 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1292.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1293 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1293.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 $match$284821296;
    panda$core$Int64$nullable cost1299;
    panda$core$Int64 $match$290761311;
    panda$core$Int64$nullable cost11397;
    panda$core$Int64$nullable cost21403;
    org$pandalanguage$pandac$ClassDecl* targetClass1420;
    panda$collections$Iterator* m$Iter1423;
    org$pandalanguage$pandac$MethodDecl* m1435;
    panda$core$Int64$nullable cost1443;
    panda$core$Bit $tmp1295 = (($fn1294) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) p_target));
    if ($tmp1295.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    {
        $match$284821296 = p_target->typeKind;
        panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$284821296, ((panda$core$Int64) { 11 }));
        if ($tmp1297.value) {
        {
            panda$core$Bit $tmp1298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1298.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1301 = (($fn1300) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1303 = (($fn1302) self->$class->vtable[30])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1301));
            cost1299 = $tmp1303;
            if (((panda$core$Bit) { !cost1299.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1304.value) {
            {
                return cost1299;
            }
            }
            panda$core$Int64 $tmp1305 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1299.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1305, true });
        }
        }
        else {
        panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$284821296, ((panda$core$Int64) { 22 }));
        if ($tmp1306.value) {
        {
            panda$core$Object* $tmp1308 = (($fn1307) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1310 = (($fn1309) self->$class->vtable[30])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1308));
            return $tmp1310;
        }
        }
        }
    }
    {
        $match$290761311 = p_expr->kind;
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$290761311, ((panda$core$Int64) { 1011 }));
        if ($tmp1312.value) {
        {
            panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1313.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1315 = (($fn1314) p_target->$class->vtable[8])(p_target);
            if ($tmp1315.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1316 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1318 = (($fn1317) self->$class->vtable[27])(self, $tmp1316, p_target);
                return $tmp1318;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$290761311, ((panda$core$Int64) { 1004 }));
        if ($tmp1319.value) {
        {
            panda$core$Bit $tmp1322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1321 = $tmp1322.value;
            if (!$tmp1321) goto $l1323;
            panda$core$Int64 $tmp1324 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1326 = (($fn1325) self->$class->vtable[28])(self, $tmp1324);
            panda$core$Int64 $tmp1328 = (($fn1327) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1329 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1326, $tmp1328);
            $tmp1321 = $tmp1329.value;
            $l1323:;
            panda$core$Bit $tmp1330 = { $tmp1321 };
            bool $tmp1320 = $tmp1330.value;
            if ($tmp1320) goto $l1331;
            panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1332 = $tmp1333.value;
            if (!$tmp1332) goto $l1334;
            panda$core$Int64 $tmp1336 = (($fn1335) self->$class->vtable[29])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1338 = (($fn1337) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1339 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1336, $tmp1338);
            $tmp1332 = $tmp1339.value;
            $l1334:;
            panda$core$Bit $tmp1340 = { $tmp1332 };
            $tmp1320 = $tmp1340.value;
            $l1331:;
            panda$core$Bit $tmp1341 = { $tmp1320 };
            if ($tmp1341.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1343 = (($fn1342) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1344 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1343);
            if ($tmp1344.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1346 = (($fn1345) self->$class->vtable[26])(self, p_expr);
                panda$core$Int64$nullable $tmp1348 = (($fn1347) self->$class->vtable[27])(self, $tmp1346, p_target);
                return $tmp1348;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$290761311, ((panda$core$Int64) { 1032 }));
        if ($tmp1349.value) {
        {
            panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1351 = $tmp1352.value;
            if (!$tmp1351) goto $l1353;
            panda$core$Int64 $tmp1354 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1355 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1354);
            panda$core$Int64 $tmp1357 = (($fn1356) self->$class->vtable[28])(self, $tmp1355);
            panda$core$Int64 $tmp1359 = (($fn1358) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1360 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1357, $tmp1359);
            $tmp1351 = $tmp1360.value;
            $l1353:;
            panda$core$Bit $tmp1361 = { $tmp1351 };
            bool $tmp1350 = $tmp1361.value;
            if ($tmp1350) goto $l1362;
            panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1363 = $tmp1364.value;
            if (!$tmp1363) goto $l1365;
            panda$core$Int64 $tmp1366 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1367 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1366);
            panda$core$Int64 $tmp1369 = (($fn1368) self->$class->vtable[28])(self, $tmp1367);
            panda$core$Int64 $tmp1371 = (($fn1370) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1372 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1369, $tmp1371);
            $tmp1363 = $tmp1372.value;
            $l1365:;
            panda$core$Bit $tmp1373 = { $tmp1363 };
            $tmp1350 = $tmp1373.value;
            $l1362:;
            panda$core$Bit $tmp1374 = { $tmp1350 };
            if ($tmp1374.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1376 = (($fn1375) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1376);
            if ($tmp1377.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1379 = (($fn1378) self->$class->vtable[26])(self, p_expr);
                panda$core$Int64$nullable $tmp1381 = (($fn1380) self->$class->vtable[27])(self, $tmp1379, p_target);
                return $tmp1381;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$290761311, ((panda$core$Int64) { 1031 }));
        if ($tmp1382.value) {
        {
            panda$core$Bit $tmp1384 = (($fn1383) p_target->$class->vtable[11])(p_target);
            if ($tmp1384.value) {
            {
                panda$core$Object* $tmp1386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1386)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1385 = $tmp1387.value;
                if (!$tmp1385) goto $l1388;
                panda$core$Object* $tmp1389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1389)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1385 = $tmp1390.value;
                $l1388:;
                panda$core$Bit $tmp1391 = { $tmp1385 };
                if ($tmp1391.value) {
                {
                    panda$core$Object* $tmp1393 = (($fn1392) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1395 = (($fn1394) ((org$pandalanguage$pandac$Type*) $tmp1393)->$class->vtable[6])(((org$pandalanguage$pandac$Type*) $tmp1393));
                    panda$core$Bit $tmp1396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1395);
                    if ($tmp1396.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Object* $tmp1398 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1400 = (($fn1399) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1402 = (($fn1401) self->$class->vtable[30])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1398), ((org$pandalanguage$pandac$Type*) $tmp1400));
                cost11397 = $tmp1402;
                if (((panda$core$Bit) { !cost11397.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1406 = (($fn1405) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1408 = (($fn1407) self->$class->vtable[30])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1404), ((org$pandalanguage$pandac$Type*) $tmp1406));
                cost21403 = $tmp1408;
                if (((panda$core$Bit) { !cost21403.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1409 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11397.value), ((panda$core$Int64) cost21403.value));
                return ((panda$core$Int64$nullable) { $tmp1409, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1411 = (($fn1410) self->$class->vtable[26])(self, p_expr);
            panda$core$Int64$nullable $tmp1413 = (($fn1412) self->$class->vtable[27])(self, $tmp1411, p_target);
            return $tmp1413;
        }
        }
        else {
        panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$290761311, ((panda$core$Int64) { 1040 }));
        if ($tmp1414.value) {
        {
            panda$core$Int64$nullable $tmp1416 = (($fn1415) self->$class->vtable[27])(self, p_expr->type, p_target);
            return $tmp1416;
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1418 = (($fn1417) p_target->$class->vtable[8])(p_target);
    panda$core$Bit $tmp1419 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1418);
    if ($tmp1419.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1422 = (($fn1421) self->$class->vtable[13])(self, p_target);
    targetClass1420 = $tmp1422;
    if (((panda$core$Bit) { targetClass1420 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1424 = ((panda$collections$Iterable*) targetClass1420->methods)->$class->itable;
        while ($tmp1424->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1424 = $tmp1424->next;
        }
        $fn1426 $tmp1425 = $tmp1424->methods[0];
        panda$collections$Iterator* $tmp1427 = $tmp1425(((panda$collections$Iterable*) targetClass1420->methods));
        m$Iter1423 = $tmp1427;
        $l1428:;
        ITable* $tmp1430 = m$Iter1423->$class->itable;
        while ($tmp1430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1430 = $tmp1430->next;
        }
        $fn1432 $tmp1431 = $tmp1430->methods[0];
        panda$core$Bit $tmp1433 = $tmp1431(m$Iter1423);
        panda$core$Bit $tmp1434 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1433);
        if (!$tmp1434.value) goto $l1429;
        {
            ITable* $tmp1436 = m$Iter1423->$class->itable;
            while ($tmp1436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1436 = $tmp1436->next;
            }
            $fn1438 $tmp1437 = $tmp1436->methods[1];
            panda$core$Object* $tmp1439 = $tmp1437(m$Iter1423);
            m1435 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1439);
            panda$core$Bit $tmp1441 = (($fn1440) m1435->annotations->$class->vtable[8])(m1435->annotations);
            if ($tmp1441.value) {
            {
                (($fn1442) self->$class->vtable[6])(self, m1435);
                panda$core$Object* $tmp1444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1435->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1446 = (($fn1445) self->$class->vtable[30])(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1444)->type);
                cost1443 = $tmp1446;
                if (((panda$core$Bit) { cost1443.nonnull }).value) {
                {
                    return cost1443;
                }
                }
            }
            }
        }
        goto $l1428;
        $l1429:;
    }
    panda$core$Int64$nullable $tmp1448 = (($fn1447) self->$class->vtable[27])(self, p_expr->type, p_target);
    return $tmp1448;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1460;
    org$pandalanguage$pandac$IRNode* intermediate1465;
    panda$core$Int64 $match$330671472;
    org$pandalanguage$pandac$IRNode* coerced1503;
    org$pandalanguage$pandac$IRNode* coerced1531;
    org$pandalanguage$pandac$IRNode* varType1552;
    org$pandalanguage$pandac$Type* param1562;
    org$pandalanguage$pandac$IRNode* start1565;
    org$pandalanguage$pandac$IRNode* end1569;
    panda$collections$Array* args1573;
    org$pandalanguage$pandac$IRNode* target1580;
    panda$collections$ListView* methods1591;
    panda$collections$Array* args1593;
    panda$core$Range $tmp1594;
    panda$collections$Array* best1596;
    panda$core$Int64$nullable bestCost1599;
    panda$collections$Iterator* m$Iter1600;
    org$pandalanguage$pandac$MethodRef* m1612;
    panda$core$Int64$nullable cost1617;
    org$pandalanguage$pandac$IRNode* callTarget1624;
    org$pandalanguage$pandac$IRNode* result1630;
    panda$collections$Array* args1637;
    panda$core$Range $tmp1638;
    panda$collections$Array* children1654;
    org$pandalanguage$pandac$IRNode* intermediate1660;
    org$pandalanguage$pandac$ClassDecl* cl1669;
    panda$collections$Iterator* m$Iter1672;
    org$pandalanguage$pandac$MethodDecl* m1684;
    org$pandalanguage$pandac$IRNode* type1695;
    panda$collections$Array* args1701;
    panda$collections$Array* children1706;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1450 = (($fn1449) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) p_target));
    if ($tmp1450.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1451 = $tmp1452.value;
    if (!$tmp1451) goto $l1453;
    panda$core$Bit $tmp1454 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1451 = $tmp1454.value;
    $l1453:;
    panda$core$Bit $tmp1455 = { $tmp1451 };
    if ($tmp1455.value) {
    {
        panda$core$Object* $tmp1457 = (($fn1456) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1459 = (($fn1458) ((org$pandalanguage$pandac$Type*) $tmp1457)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp1457), ((panda$core$Object*) p_target));
        if ($tmp1459.value) {
        {
            panda$collections$Array* $tmp1461 = (panda$collections$Array*) malloc(40);
            $tmp1461->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1461->refCount.value = 1;
            panda$collections$Array$init($tmp1461);
            children1460 = $tmp1461;
            panda$collections$Array$add$panda$collections$Array$T(children1460, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1463 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1463->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1463->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1463, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1460));
            return $tmp1463;
        }
        }
        panda$core$Object* $tmp1467 = (($fn1466) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1469 = (($fn1468) self->$class->vtable[32])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1467));
        intermediate1465 = $tmp1469;
        org$pandalanguage$pandac$IRNode* $tmp1471 = (($fn1470) self->$class->vtable[32])(self, intermediate1465, p_target);
        return $tmp1471;
    }
    }
    {
        $match$330671472 = p_expr->kind;
        panda$core$Bit $tmp1473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$330671472, ((panda$core$Int64) { 1004 }));
        if ($tmp1473.value) {
        {
            panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1474 = $tmp1475.value;
            if (!$tmp1474) goto $l1476;
            panda$core$Int64 $tmp1478 = (($fn1477) self->$class->vtable[29])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1480 = (($fn1479) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1481 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1478, $tmp1480);
            $tmp1474 = $tmp1481.value;
            $l1476:;
            panda$core$Bit $tmp1482 = { $tmp1474 };
            if ($tmp1482.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1483 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1483->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1483, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1483;
            }
            }
            else {
            panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1485 = $tmp1486.value;
            if (!$tmp1485) goto $l1487;
            panda$core$Int64 $tmp1489 = (($fn1488) self->$class->vtable[29])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1491 = (($fn1490) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1492 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1489, $tmp1491);
            $tmp1485 = $tmp1492.value;
            $l1487:;
            panda$core$Bit $tmp1493 = { $tmp1485 };
            if ($tmp1493.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1494 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1494->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1494->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1494, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1494;
            }
            }
            }
            panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1496 = $tmp1497.value;
            if (!$tmp1496) goto $l1498;
            panda$core$Bit $tmp1500 = (($fn1499) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1501 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1500);
            $tmp1496 = $tmp1501.value;
            $l1498:;
            panda$core$Bit $tmp1502 = { $tmp1496 };
            if ($tmp1502.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1505 = (($fn1504) self->$class->vtable[26])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1507 = (($fn1506) self->$class->vtable[32])(self, p_expr, $tmp1505);
                coerced1503 = $tmp1507;
                if (((panda$core$Bit) { coerced1503 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1509 = (($fn1508) self->$class->vtable[32])(self, coerced1503, p_target);
                return $tmp1509;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$330671472, ((panda$core$Int64) { 1032 }));
        if ($tmp1510.value) {
        {
            panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1511 = $tmp1512.value;
            if (!$tmp1511) goto $l1513;
            panda$core$Int64 $tmp1514 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1515 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1514);
            panda$core$Int64 $tmp1517 = (($fn1516) self->$class->vtable[28])(self, $tmp1515);
            panda$core$Int64 $tmp1519 = (($fn1518) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1520 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1517, $tmp1519);
            $tmp1511 = $tmp1520.value;
            $l1513:;
            panda$core$Bit $tmp1521 = { $tmp1511 };
            if ($tmp1521.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1522 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1522->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1522->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1522, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1522;
            }
            }
            panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1524 = $tmp1525.value;
            if (!$tmp1524) goto $l1526;
            panda$core$Bit $tmp1528 = (($fn1527) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1529 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1528);
            $tmp1524 = $tmp1529.value;
            $l1526:;
            panda$core$Bit $tmp1530 = { $tmp1524 };
            if ($tmp1530.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1533 = (($fn1532) self->$class->vtable[26])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1535 = (($fn1534) self->$class->vtable[32])(self, p_expr, $tmp1533);
                coerced1531 = $tmp1535;
                if (((panda$core$Bit) { coerced1531 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1537 = (($fn1536) self->$class->vtable[32])(self, coerced1531, p_target);
                return $tmp1537;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$330671472, ((panda$core$Int64) { 1011 }));
        if ($tmp1538.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1539 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1541 = (($fn1540) p_target->$class->vtable[4])(p_target, ((panda$core$Object*) $tmp1539));
            if ($tmp1541.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1542 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1542->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1542->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1542, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1542;
            }
            }
            panda$core$Bit $tmp1546 = (($fn1545) p_target->$class->vtable[8])(p_target);
            bool $tmp1544 = $tmp1546.value;
            if (!$tmp1544) goto $l1547;
            org$pandalanguage$pandac$Type* $tmp1548 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1550 = (($fn1549) p_target->$class->vtable[5])(p_target, ((panda$core$Object*) $tmp1548));
            $tmp1544 = $tmp1550.value;
            $l1547:;
            panda$core$Bit $tmp1551 = { $tmp1544 };
            if ($tmp1551.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1554 = (($fn1553) self->$class->vtable[26])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1556 = (($fn1555) self->$class->vtable[32])(self, p_expr, $tmp1554);
                varType1552 = $tmp1556;
                if (((panda$core$Bit) { varType1552 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1558 = (($fn1557) self->$class->vtable[32])(self, varType1552, p_target);
                    return $tmp1558;
                }
                }
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$330671472, ((panda$core$Int64) { 1031 }));
        if ($tmp1559.value) {
        {
            panda$core$Bit $tmp1561 = (($fn1560) p_target->$class->vtable[11])(p_target);
            if ($tmp1561.value) {
            {
                panda$core$Object* $tmp1564 = (($fn1563) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1562 = ((org$pandalanguage$pandac$Type*) $tmp1564);
                panda$core$Object* $tmp1566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1568 = (($fn1567) self->$class->vtable[32])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1566), param1562);
                start1565 = $tmp1568;
                if (((panda$core$Bit) { start1565 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1572 = (($fn1571) self->$class->vtable[32])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1570), param1562);
                end1569 = $tmp1572;
                if (((panda$core$Bit) { end1569 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1574 = (panda$collections$Array*) malloc(40);
                $tmp1574->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1574->refCount.value = 1;
                panda$collections$Array$init($tmp1574);
                args1573 = $tmp1574;
                panda$collections$Array$add$panda$collections$Array$T(args1573, ((panda$core$Object*) start1565));
                panda$collections$Array$add$panda$collections$Array$T(args1573, ((panda$core$Object*) end1569));
                panda$core$Object* $tmp1576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1573, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1576)));
                org$pandalanguage$pandac$IRNode* $tmp1577 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1577->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1577->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1579 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1577, ((panda$core$Int64) { 1011 }), p_expr->offset, $tmp1579, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1573, ((panda$core$Object*) $tmp1577));
                org$pandalanguage$pandac$IRNode* $tmp1581 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1581->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1581->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1583 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1581, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1583, p_target);
                target1580 = $tmp1581;
                org$pandalanguage$pandac$IRNode* $tmp1585 = (($fn1584) self->$class->vtable[41])(self, target1580, ((panda$collections$ListView*) args1573));
                return $tmp1585;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1587 = (($fn1586) self->$class->vtable[8])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1589 = (($fn1588) self->$class->vtable[32])(self, $tmp1587, p_target);
                return $tmp1589;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$330671472, ((panda$core$Int64) { 1039 }));
        if ($tmp1590.value) {
        {
            panda$core$Object* $tmp1592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1591 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1592)->payload);
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1594, (((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1595 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1594);
            args1593 = $tmp1595;
            panda$collections$Array* $tmp1597 = (panda$collections$Array*) malloc(40);
            $tmp1597->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1597->refCount.value = 1;
            panda$collections$Array$init($tmp1597);
            best1596 = $tmp1597;
            bestCost1599 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1601 = ((panda$collections$Iterable*) methods1591)->$class->itable;
                while ($tmp1601->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1601 = $tmp1601->next;
                }
                $fn1603 $tmp1602 = $tmp1601->methods[0];
                panda$collections$Iterator* $tmp1604 = $tmp1602(((panda$collections$Iterable*) methods1591));
                m$Iter1600 = $tmp1604;
                $l1605:;
                ITable* $tmp1607 = m$Iter1600->$class->itable;
                while ($tmp1607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1607 = $tmp1607->next;
                }
                $fn1609 $tmp1608 = $tmp1607->methods[0];
                panda$core$Bit $tmp1610 = $tmp1608(m$Iter1600);
                panda$core$Bit $tmp1611 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1610);
                if (!$tmp1611.value) goto $l1606;
                {
                    ITable* $tmp1613 = m$Iter1600->$class->itable;
                    while ($tmp1613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1613 = $tmp1613->next;
                    }
                    $fn1615 $tmp1614 = $tmp1613->methods[1];
                    panda$core$Object* $tmp1616 = $tmp1614(m$Iter1600);
                    m1612 = ((org$pandalanguage$pandac$MethodRef*) $tmp1616);
                    panda$core$Int64$nullable $tmp1619 = (($fn1618) self->$class->vtable[36])(self, m1612, ((panda$collections$ListView*) args1593), p_target);
                    cost1617 = $tmp1619;
                    if (((panda$core$Bit) { !cost1617.nonnull }).value) {
                    {
                        goto $l1605;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1599.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1596, ((panda$core$Object*) m1612));
                        bestCost1599 = cost1617;
                        goto $l1605;
                    }
                    }
                    panda$core$Bit $tmp1620 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1617.value), ((panda$core$Int64) bestCost1599.value));
                    if ($tmp1620.value) {
                    {
                        panda$collections$Array$clear(best1596);
                        bestCost1599 = cost1617;
                    }
                    }
                    panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1617.value), ((panda$core$Int64) bestCost1599.value));
                    if ($tmp1621.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1596, ((panda$core$Object*) m1612));
                    }
                    }
                }
                goto $l1605;
                $l1606:;
            }
            panda$core$Int64 $tmp1622 = panda$collections$Array$get_count$R$panda$core$Int64(best1596);
            panda$core$Bit $tmp1623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1622, ((panda$core$Int64) { 1 }));
            if ($tmp1623.value) {
            {
                panda$core$Object* $tmp1625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1626 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1625)->children);
                panda$core$Bit $tmp1627 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1626, ((panda$core$Int64) { 0 }));
                if ($tmp1627.value) {
                {
                    panda$core$Object* $tmp1628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1628)->children, ((panda$core$Int64) { 0 }));
                    callTarget1624 = ((org$pandalanguage$pandac$IRNode*) $tmp1629);
                }
                }
                else {
                {
                    callTarget1624 = NULL;
                }
                }
                panda$core$Object* $tmp1631 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1596, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1633 = (($fn1632) self->$class->vtable[38])(self, p_expr->offset, callTarget1624, ((org$pandalanguage$pandac$MethodRef*) $tmp1631), ((panda$collections$ListView*) args1593));
                result1630 = $tmp1633;
                org$pandalanguage$pandac$IRNode* $tmp1635 = (($fn1634) self->$class->vtable[32])(self, result1630, p_target);
                return $tmp1635;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$330671472, ((panda$core$Int64) { 1040 }));
        if ($tmp1636.value) {
        {
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1638, (((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1639 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1638);
            args1637 = $tmp1639;
            panda$core$Object* $tmp1640 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1643 = (($fn1642) self->$class->vtable[40])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1640), &$s1641, ((panda$collections$ListView*) args1637), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1645 = (($fn1644) self->$class->vtable[32])(self, $tmp1643, p_target);
            return $tmp1645;
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1646.value) {
    {
        panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1647.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1648 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1648->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1648->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1648, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1648;
        }
        }
        panda$core$Object* $tmp1651 = (($fn1650) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1653 = (($fn1652) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1651)));
        if ($tmp1653.value) {
        {
            panda$collections$Array* $tmp1655 = (panda$collections$Array*) malloc(40);
            $tmp1655->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1655->refCount.value = 1;
            panda$collections$Array$init($tmp1655);
            children1654 = $tmp1655;
            panda$collections$Array$add$panda$collections$Array$T(children1654, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1657 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1657->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1657->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1657, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1654));
            return $tmp1657;
        }
        }
        panda$core$Bit $tmp1659 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1659.value) {
        {
            panda$core$Object* $tmp1662 = (($fn1661) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1664 = (($fn1663) self->$class->vtable[32])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1662));
            intermediate1660 = $tmp1664;
            org$pandalanguage$pandac$IRNode* $tmp1666 = (($fn1665) self->$class->vtable[32])(self, intermediate1660, p_target);
            return $tmp1666;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1668 = (($fn1667) self->$class->vtable[30])(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1668.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1671 = (($fn1670) self->$class->vtable[13])(self, p_target);
        cl1669 = $tmp1671;
        if (((panda$core$Bit) { cl1669 != NULL }).value) {
        {
            {
                ITable* $tmp1673 = ((panda$collections$Iterable*) cl1669->methods)->$class->itable;
                while ($tmp1673->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1673 = $tmp1673->next;
                }
                $fn1675 $tmp1674 = $tmp1673->methods[0];
                panda$collections$Iterator* $tmp1676 = $tmp1674(((panda$collections$Iterable*) cl1669->methods));
                m$Iter1672 = $tmp1676;
                $l1677:;
                ITable* $tmp1679 = m$Iter1672->$class->itable;
                while ($tmp1679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1679 = $tmp1679->next;
                }
                $fn1681 $tmp1680 = $tmp1679->methods[0];
                panda$core$Bit $tmp1682 = $tmp1680(m$Iter1672);
                panda$core$Bit $tmp1683 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1682);
                if (!$tmp1683.value) goto $l1678;
                {
                    ITable* $tmp1685 = m$Iter1672->$class->itable;
                    while ($tmp1685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1685 = $tmp1685->next;
                    }
                    $fn1687 $tmp1686 = $tmp1685->methods[1];
                    panda$core$Object* $tmp1688 = $tmp1686(m$Iter1672);
                    m1684 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1688);
                    panda$core$Bit $tmp1690 = (($fn1689) m1684->annotations->$class->vtable[8])(m1684->annotations);
                    if ($tmp1690.value) {
                    {
                        (($fn1691) self->$class->vtable[6])(self, m1684);
                        panda$core$Object* $tmp1692 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1684->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1694 = (($fn1693) self->$class->vtable[30])(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1692)->type);
                        if (((panda$core$Bit) { $tmp1694.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1696 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1696->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1696->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1698 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1700 = (($fn1699) cl1669->$class->vtable[3])(cl1669);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1696, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1698, $tmp1700);
                            type1695 = $tmp1696;
                            panda$collections$Array* $tmp1702 = (panda$collections$Array*) malloc(40);
                            $tmp1702->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1702->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1702, ((panda$core$Int64) { 1 }));
                            args1701 = $tmp1702;
                            panda$collections$Array$add$panda$collections$Array$T(args1701, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1705 = (($fn1704) self->$class->vtable[41])(self, type1695, ((panda$collections$ListView*) args1701));
                            return $tmp1705;
                        }
                        }
                    }
                    }
                }
                goto $l1677;
                $l1678:;
            }
        }
        }
        panda$collections$Array* $tmp1707 = (panda$collections$Array*) malloc(40);
        $tmp1707->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1707->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1707, ((panda$core$Int64) { 1 }));
        children1706 = $tmp1707;
        panda$collections$Array$add$panda$collections$Array$T(children1706, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1709 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1709->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1709->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1709, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1706));
        return $tmp1709;
    }
    }
    panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1711, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, &$s1713);
    panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1714, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1715, &$s1716);
    (($fn1718) self->$class->vtable[95])(self, p_expr->offset, $tmp1717);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1719;
    org$pandalanguage$pandac$IRNode* $tmp1721 = (($fn1720) self->$class->vtable[31])(self, p_expr, p_target);
    result1719 = $tmp1721;
    return result1719;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Iterator* t$Iter1739;
    org$pandalanguage$pandac$Type* t1751;
    panda$core$Bit $tmp1724 = (($fn1723) p_type->$class->vtable[10])(p_type);
    bool $tmp1722 = $tmp1724.value;
    if (!$tmp1722) goto $l1725;
    panda$core$Bit $tmp1727 = (($fn1726) p_target->$class->vtable[10])(p_target);
    $tmp1722 = $tmp1727.value;
    $l1725:;
    panda$core$Bit $tmp1728 = { $tmp1722 };
    if ($tmp1728.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1730 = (($fn1729) self->$class->vtable[27])(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1730.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1733 = (($fn1732) p_type->$class->vtable[7])(p_type);
    bool $tmp1731 = $tmp1733.value;
    if (!$tmp1731) goto $l1734;
    panda$core$Bit $tmp1736 = (($fn1735) p_target->$class->vtable[7])(p_target);
    $tmp1731 = $tmp1736.value;
    $l1734:;
    panda$core$Bit $tmp1737 = { $tmp1731 };
    if ($tmp1737.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 17 }));
    if ($tmp1738.value) {
    {
        {
            ITable* $tmp1740 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
            while ($tmp1740->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1740 = $tmp1740->next;
            }
            $fn1742 $tmp1741 = $tmp1740->methods[0];
            panda$collections$Iterator* $tmp1743 = $tmp1741(((panda$collections$Iterable*) p_type->subtypes));
            t$Iter1739 = $tmp1743;
            $l1744:;
            ITable* $tmp1746 = t$Iter1739->$class->itable;
            while ($tmp1746->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1746 = $tmp1746->next;
            }
            $fn1748 $tmp1747 = $tmp1746->methods[0];
            panda$core$Bit $tmp1749 = $tmp1747(t$Iter1739);
            panda$core$Bit $tmp1750 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1749);
            if (!$tmp1750.value) goto $l1745;
            {
                ITable* $tmp1752 = t$Iter1739->$class->itable;
                while ($tmp1752->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1752 = $tmp1752->next;
                }
                $fn1754 $tmp1753 = $tmp1752->methods[1];
                panda$core$Object* $tmp1755 = $tmp1753(t$Iter1739);
                t1751 = ((org$pandalanguage$pandac$Type*) $tmp1755);
                panda$core$Int64$nullable $tmp1757 = (($fn1756) self->$class->vtable[27])(self, t1751, p_target);
                if (((panda$core$Bit) { $tmp1757.nonnull }).value) {
                {
                    return ((panda$core$Bit) { true });
                }
                }
            }
            goto $l1744;
            $l1745:;
        }
    }
    }
    panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1758.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1760 = (($fn1759) self->$class->vtable[27])(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1760.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable $tmp1762 = (($fn1761) self->$class->vtable[30])(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1762.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1764 = (($fn1763) self->$class->vtable[33])(self, p_node->type, p_target);
    return $tmp1764;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 $match$414561783;
    panda$collections$Array* children1803;
    panda$core$Bit $tmp1766 = (($fn1765) p_node->type->$class->vtable[4])(p_node->type, ((panda$core$Object*) p_target));
    if ($tmp1766.value) {
    {
        return p_node;
    }
    }
    bool $tmp1767 = p_isExplicit.value;
    if (!$tmp1767) goto $l1768;
    panda$core$Bit $tmp1770 = (($fn1769) self->$class->vtable[34])(self, p_node, p_target);
    panda$core$Bit $tmp1771 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1770);
    $tmp1767 = $tmp1771.value;
    $l1768:;
    panda$core$Bit $tmp1772 = { $tmp1767 };
    if ($tmp1772.value) {
    {
        panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1773, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1775);
        panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1777, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1779);
        panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, $tmp1780);
        (($fn1782) self->$class->vtable[95])(self, p_offset, $tmp1781);
    }
    }
    {
        $match$414561783 = p_node->kind;
        panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414561783, ((panda$core$Int64) { 1004 }));
        bool $tmp1787 = $tmp1788.value;
        if ($tmp1787) goto $l1789;
        panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414561783, ((panda$core$Int64) { 1032 }));
        $tmp1787 = $tmp1790.value;
        $l1789:;
        panda$core$Bit $tmp1791 = { $tmp1787 };
        bool $tmp1786 = $tmp1791.value;
        if ($tmp1786) goto $l1792;
        panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414561783, ((panda$core$Int64) { 1011 }));
        $tmp1786 = $tmp1793.value;
        $l1792:;
        panda$core$Bit $tmp1794 = { $tmp1786 };
        bool $tmp1785 = $tmp1794.value;
        if ($tmp1785) goto $l1795;
        panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414561783, ((panda$core$Int64) { 1039 }));
        $tmp1785 = $tmp1796.value;
        $l1795:;
        panda$core$Bit $tmp1797 = { $tmp1785 };
        bool $tmp1784 = $tmp1797.value;
        if ($tmp1784) goto $l1798;
        panda$core$Bit $tmp1799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414561783, ((panda$core$Int64) { 1040 }));
        $tmp1784 = $tmp1799.value;
        $l1798:;
        panda$core$Bit $tmp1800 = { $tmp1784 };
        if ($tmp1800.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1802 = (($fn1801) self->$class->vtable[32])(self, p_node, p_target);
            return $tmp1802;
        }
        }
    }
    panda$collections$Array* $tmp1804 = (panda$collections$Array*) malloc(40);
    $tmp1804->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1804->refCount.value = 1;
    panda$collections$Array$init($tmp1804);
    children1803 = $tmp1804;
    panda$collections$Array$add$panda$collections$Array$T(children1803, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1806 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1806->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1806->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1806, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1803));
    return $tmp1806;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1815;
    panda$core$Range $tmp1816;
    panda$core$Int64$nullable cost1837;
    panda$core$Int64$nullable cost1858;
    panda$core$Int64 $tmp1809 = (($fn1808) p_m->$class->vtable[3])(p_m);
    ITable* $tmp1810 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1810->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1810 = $tmp1810->next;
    }
    $fn1812 $tmp1811 = $tmp1810->methods[0];
    panda$core$Int64 $tmp1813 = $tmp1811(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1814 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1809, $tmp1813);
    if ($tmp1814.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1815 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1818 = (($fn1817) p_m->$class->vtable[3])(p_m);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1816, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1818)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1820 = ((panda$core$Int64$wrapper*) $tmp1816.start)->value.value;
    panda$core$Int64 i1819 = { $tmp1820 };
    int64_t $tmp1822 = ((panda$core$Int64$wrapper*) $tmp1816.end)->value.value;
    int64_t $tmp1823 = $tmp1816.step.value;
    bool $tmp1824 = $tmp1816.inclusive.value;
    bool $tmp1831 = $tmp1823 > 0;
    if ($tmp1831) goto $l1829; else goto $l1830;
    $l1829:;
    if ($tmp1824) goto $l1832; else goto $l1833;
    $l1832:;
    if ($tmp1820 <= $tmp1822) goto $l1825; else goto $l1827;
    $l1833:;
    if ($tmp1820 < $tmp1822) goto $l1825; else goto $l1827;
    $l1830:;
    if ($tmp1824) goto $l1834; else goto $l1835;
    $l1834:;
    if ($tmp1820 >= $tmp1822) goto $l1825; else goto $l1827;
    $l1835:;
    if ($tmp1820 > $tmp1822) goto $l1825; else goto $l1827;
    $l1825:;
    {
        ITable* $tmp1838 = p_args->$class->itable;
        while ($tmp1838->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1838 = $tmp1838->next;
        }
        $fn1840 $tmp1839 = $tmp1838->methods[0];
        panda$core$Object* $tmp1841 = $tmp1839(p_args, i1819);
        org$pandalanguage$pandac$Type* $tmp1843 = (($fn1842) p_m->$class->vtable[4])(p_m, i1819);
        panda$core$Int64$nullable $tmp1845 = (($fn1844) self->$class->vtable[30])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1841), $tmp1843);
        cost1837 = $tmp1845;
        if (((panda$core$Bit) { !cost1837.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1846 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1815, ((panda$core$Int64) cost1837.value));
        result1815 = $tmp1846;
    }
    $l1828:;
    if ($tmp1831) goto $l1848; else goto $l1849;
    $l1848:;
    int64_t $tmp1850 = $tmp1822 - i1819.value;
    if ($tmp1824) goto $l1851; else goto $l1852;
    $l1851:;
    if ($tmp1850 >= $tmp1823) goto $l1847; else goto $l1827;
    $l1852:;
    if ($tmp1850 > $tmp1823) goto $l1847; else goto $l1827;
    $l1849:;
    int64_t $tmp1854 = i1819.value - $tmp1822;
    if ($tmp1824) goto $l1855; else goto $l1856;
    $l1855:;
    if ($tmp1854 >= -$tmp1823) goto $l1847; else goto $l1827;
    $l1856:;
    if ($tmp1854 > -$tmp1823) goto $l1847; else goto $l1827;
    $l1847:;
    i1819.value += $tmp1823;
    goto $l1825;
    $l1827:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1860 = (($fn1859) p_m->$class->vtable[5])(p_m);
        panda$core$Int64$nullable $tmp1862 = (($fn1861) self->$class->vtable[27])(self, $tmp1860, p_expectedReturn);
        cost1858 = $tmp1862;
        if (((panda$core$Bit) { !cost1858.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1863 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1815, ((panda$core$Int64) cost1858.value));
        result1815 = $tmp1863;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1867 = (($fn1866) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
    panda$core$Bit $tmp1869 = (($fn1868) $tmp1867->$class->vtable[6])($tmp1867);
    bool $tmp1865 = $tmp1869.value;
    if (!$tmp1865) goto $l1870;
    ITable* $tmp1871 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1871->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1871 = $tmp1871->next;
    }
    $fn1873 $tmp1872 = $tmp1871->methods[0];
    panda$core$Int64 $tmp1874 = $tmp1872(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1874, ((panda$core$Int64) { 1 }));
    $tmp1865 = $tmp1875.value;
    $l1870:;
    panda$core$Bit $tmp1876 = { $tmp1865 };
    bool $tmp1864 = $tmp1876.value;
    if (!$tmp1864) goto $l1877;
    panda$core$Object* $tmp1878 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1880 = (($fn1879) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
    panda$core$Bit $tmp1882 = (($fn1881) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1878)->type->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1878)->type, ((panda$core$Object*) $tmp1880));
    $tmp1864 = $tmp1882.value;
    $l1877:;
    panda$core$Bit $tmp1883 = { $tmp1864 };
    if ($tmp1883.value) {
    {
        panda$core$Int64 $tmp1884 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1815, ((panda$core$Int64) { 1 }));
        result1815 = $tmp1884;
    }
    }
    return ((panda$core$Int64$nullable) { result1815, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1885;
    panda$core$Int64$nullable best1888;
    panda$collections$Iterator* m$Iter1889;
    org$pandalanguage$pandac$MethodRef* m1901;
    panda$core$Int64$nullable cost1906;
    panda$collections$Array* $tmp1886 = (panda$collections$Array*) malloc(40);
    $tmp1886->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1886->refCount.value = 1;
    panda$collections$Array$init($tmp1886);
    result1885 = $tmp1886;
    best1888 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1890 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1890->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1890 = $tmp1890->next;
        }
        $fn1892 $tmp1891 = $tmp1890->methods[0];
        panda$collections$Iterator* $tmp1893 = $tmp1891(((panda$collections$Iterable*) p_methods));
        m$Iter1889 = $tmp1893;
        $l1894:;
        ITable* $tmp1896 = m$Iter1889->$class->itable;
        while ($tmp1896->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1896 = $tmp1896->next;
        }
        $fn1898 $tmp1897 = $tmp1896->methods[0];
        panda$core$Bit $tmp1899 = $tmp1897(m$Iter1889);
        panda$core$Bit $tmp1900 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1899);
        if (!$tmp1900.value) goto $l1895;
        {
            ITable* $tmp1902 = m$Iter1889->$class->itable;
            while ($tmp1902->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1902 = $tmp1902->next;
            }
            $fn1904 $tmp1903 = $tmp1902->methods[1];
            panda$core$Object* $tmp1905 = $tmp1903(m$Iter1889);
            m1901 = ((org$pandalanguage$pandac$MethodRef*) $tmp1905);
            panda$core$Int64$nullable $tmp1908 = (($fn1907) self->$class->vtable[36])(self, m1901, p_args, p_expectedReturn);
            cost1906 = $tmp1908;
            if (((panda$core$Bit) { !cost1906.nonnull }).value) {
            {
                goto $l1894;
            }
            }
            bool $tmp1909 = ((panda$core$Bit) { !best1888.nonnull }).value;
            if ($tmp1909) goto $l1910;
            panda$core$Bit $tmp1911 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1906.value), ((panda$core$Int64) best1888.value));
            $tmp1909 = $tmp1911.value;
            $l1910:;
            panda$core$Bit $tmp1912 = { $tmp1909 };
            if ($tmp1912.value) {
            {
                panda$collections$Array$clear(result1885);
                best1888 = cost1906;
            }
            }
            panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1906.value), ((panda$core$Int64) best1888.value));
            if ($tmp1913.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1885, ((panda$core$Object*) m1901));
            }
            }
        }
        goto $l1894;
        $l1895:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1885));
    return best1888;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs1914;
    org$pandalanguage$pandac$IRNode* selfNode1959;
    panda$core$Range $tmp1982;
    org$pandalanguage$pandac$IRNode* coerced2005;
    org$pandalanguage$pandac$IRNode* result2028;
    panda$collections$Array* $tmp1915 = (panda$collections$Array*) malloc(40);
    $tmp1915->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1915->refCount.value = 1;
    panda$collections$Array$init($tmp1915);
    finalArgs1914 = $tmp1915;
    bool $tmp1918 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1918) goto $l1919;
    panda$core$Bit $tmp1920 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1918 = $tmp1920.value;
    $l1919:;
    panda$core$Bit $tmp1921 = { $tmp1918 };
    bool $tmp1917 = $tmp1921.value;
    if (!$tmp1917) goto $l1922;
    panda$core$Bit $tmp1924 = (($fn1923) p_m->value->annotations->$class->vtable[5])(p_m->value->annotations);
    panda$core$Bit $tmp1925 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1924);
    $tmp1917 = $tmp1925.value;
    $l1922:;
    panda$core$Bit $tmp1926 = { $tmp1917 };
    if ($tmp1926.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1928 = (($fn1927) p_m->$class->vtable[2])(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1930 = (($fn1929) self->$class->vtable[35])(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp1928);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1914, ((panda$core$Object*) $tmp1930));
    }
    }
    panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1931.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1933 = (($fn1932) self->currentMethod->$class->vtable[4])(self->currentMethod);
            panda$core$Bit $tmp1934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1933)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1934.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1935 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1935->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1935->refCount.value = 1;
                panda$core$Object* $tmp1938 = (($fn1937) self->currentClass->$class->vtable[4])(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1940 = (($fn1939) ((org$pandalanguage$pandac$ClassDecl*) $tmp1938)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp1938));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1935, ((panda$core$Int64) { 1025 }), p_offset, $tmp1940);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1914, ((panda$core$Object*) $tmp1935));
            }
            }
            else {
            {
                (($fn1942) self->$class->vtable[95])(self, p_offset, &$s1941);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1945 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1944 = $tmp1945.value;
        if (!$tmp1944) goto $l1946;
        panda$core$Bit $tmp1947 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1944 = $tmp1947.value;
        $l1946:;
        panda$core$Bit $tmp1948 = { $tmp1944 };
        bool $tmp1943 = $tmp1948.value;
        if (!$tmp1943) goto $l1949;
        panda$core$Bit $tmp1950 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1943 = $tmp1950.value;
        $l1949:;
        panda$core$Bit $tmp1951 = { $tmp1943 };
        if ($tmp1951.value) {
        {
            (($fn1953) self->$class->vtable[95])(self, p_offset, &$s1952);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1956 = (($fn1955) p_m->value->$class->vtable[4])(p_m->value);
    bool $tmp1954 = $tmp1956.value;
    if (!$tmp1954) goto $l1957;
    $tmp1954 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1957:;
    panda$core$Bit $tmp1958 = { $tmp1954 };
    if ($tmp1958.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1960 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1960->refCount.value = 1;
        panda$core$Object* $tmp1963 = (($fn1962) self->currentClass->$class->vtable[4])(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1965 = (($fn1964) ((org$pandalanguage$pandac$ClassDecl*) $tmp1963)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp1963));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1960, ((panda$core$Int64) { 1025 }), p_offset, $tmp1965);
        selfNode1959 = $tmp1960;
        org$pandalanguage$pandac$Type* $tmp1967 = (($fn1966) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1969 = (($fn1968) self->$class->vtable[32])(self, selfNode1959, $tmp1967);
        selfNode1959 = $tmp1969;
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1914, ((panda$core$Object*) selfNode1959));
        panda$core$Object* $tmp1971 = (($fn1970) self->currentMethod->$class->vtable[4])(self->currentMethod);
        panda$core$Bit $tmp1973 = (($fn1972) ((org$pandalanguage$pandac$MethodDecl*) $tmp1971)->$class->vtable[4])(((org$pandalanguage$pandac$MethodDecl*) $tmp1971));
        panda$core$Bit $tmp1974 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1973);
        if ($tmp1974.value) {
        {
            panda$core$String* $tmp1977 = (($fn1976) p_m->value->$class->vtable[6])(p_m->value);
            panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1975, $tmp1977);
            panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, &$s1979);
            (($fn1981) self->$class->vtable[95])(self, p_offset, $tmp1980);
        }
        }
    }
    }
    }
    ITable* $tmp1983 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1983->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1983 = $tmp1983->next;
    }
    $fn1985 $tmp1984 = $tmp1983->methods[0];
    panda$core$Int64 $tmp1986 = $tmp1984(((panda$collections$CollectionView*) p_args));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1982, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1986)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1988 = ((panda$core$Int64$wrapper*) $tmp1982.start)->value.value;
    panda$core$Int64 i1987 = { $tmp1988 };
    int64_t $tmp1990 = ((panda$core$Int64$wrapper*) $tmp1982.end)->value.value;
    int64_t $tmp1991 = $tmp1982.step.value;
    bool $tmp1992 = $tmp1982.inclusive.value;
    bool $tmp1999 = $tmp1991 > 0;
    if ($tmp1999) goto $l1997; else goto $l1998;
    $l1997:;
    if ($tmp1992) goto $l2000; else goto $l2001;
    $l2000:;
    if ($tmp1988 <= $tmp1990) goto $l1993; else goto $l1995;
    $l2001:;
    if ($tmp1988 < $tmp1990) goto $l1993; else goto $l1995;
    $l1998:;
    if ($tmp1992) goto $l2002; else goto $l2003;
    $l2002:;
    if ($tmp1988 >= $tmp1990) goto $l1993; else goto $l1995;
    $l2003:;
    if ($tmp1988 > $tmp1990) goto $l1993; else goto $l1995;
    $l1993:;
    {
        ITable* $tmp2006 = p_args->$class->itable;
        while ($tmp2006->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2006 = $tmp2006->next;
        }
        $fn2008 $tmp2007 = $tmp2006->methods[0];
        panda$core$Object* $tmp2009 = $tmp2007(p_args, i1987);
        org$pandalanguage$pandac$Type* $tmp2011 = (($fn2010) p_m->$class->vtable[4])(p_m, i1987);
        org$pandalanguage$pandac$IRNode* $tmp2013 = (($fn2012) self->$class->vtable[32])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2009), $tmp2011);
        coerced2005 = $tmp2013;
        if (((panda$core$Bit) { coerced2005 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2014 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1987);
        org$pandalanguage$pandac$IRNode* $tmp2016 = (($fn2015) self->$class->vtable[35])(self, coerced2005, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2014)->type);
        coerced2005 = $tmp2016;
        if (((panda$core$Bit) { coerced2005 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1914, ((panda$core$Object*) coerced2005));
    }
    $l1996:;
    if ($tmp1999) goto $l2018; else goto $l2019;
    $l2018:;
    int64_t $tmp2020 = $tmp1990 - i1987.value;
    if ($tmp1992) goto $l2021; else goto $l2022;
    $l2021:;
    if ($tmp2020 >= $tmp1991) goto $l2017; else goto $l1995;
    $l2022:;
    if ($tmp2020 > $tmp1991) goto $l2017; else goto $l1995;
    $l2019:;
    int64_t $tmp2024 = i1987.value - $tmp1990;
    if ($tmp1992) goto $l2025; else goto $l2026;
    $l2025:;
    if ($tmp2024 >= -$tmp1991) goto $l2017; else goto $l1995;
    $l2026:;
    if ($tmp2024 > -$tmp1991) goto $l2017; else goto $l1995;
    $l2017:;
    i1987.value += $tmp1991;
    goto $l1993;
    $l1995:;
    panda$core$Bit $tmp2030 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2029);
    if ($tmp2030.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2031 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2031->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2031->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2034 = (($fn2033) p_m->$class->vtable[5])(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2031, ((panda$core$Int64) { 1005 }), p_offset, $tmp2034, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1914));
        result2028 = $tmp2031;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2035 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2035->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2035->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2035, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1914));
        result2028 = $tmp2035;
        org$pandalanguage$pandac$Type* $tmp2038 = (($fn2037) p_m->$class->vtable[5])(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2040 = (($fn2039) self->$class->vtable[35])(self, result2028, p_offset, ((panda$core$Bit) { false }), $tmp2038);
        result2028 = $tmp2040;
    }
    }
    return result2028;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2042 = (($fn2041) self->$class->vtable[40])(self, p_target, p_name, p_args, NULL);
    return $tmp2042;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2043;
    org$pandalanguage$pandac$ClassDecl* cl2046;
    org$pandalanguage$pandac$Symbol* s2052;
    org$pandalanguage$pandac$IRNode* ref2078;
    org$pandalanguage$pandac$IRNode* $tmp2045 = (($fn2044) self->$class->vtable[8])(self, p_target);
    resolved2043 = $tmp2045;
    if (((panda$core$Bit) { resolved2043 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2043->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2047.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2049 = (($fn2048) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$Type*) resolved2043->payload));
        cl2046 = $tmp2049;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2051 = (($fn2050) self->$class->vtable[13])(self, resolved2043->type);
        cl2046 = $tmp2051;
    }
    }
    if (((panda$core$Bit) { cl2046 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2054 = (($fn2053) self->$class->vtable[19])(self, cl2046);
    org$pandalanguage$pandac$Symbol* $tmp2056 = (($fn2055) $tmp2054->$class->vtable[6])($tmp2054, p_name);
    s2052 = $tmp2056;
    if (((panda$core$Bit) { s2052 == NULL }).value) {
    {
        panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2057, ((org$pandalanguage$pandac$Symbol*) cl2046)->name);
        panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
        panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, p_name);
        panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2062);
        (($fn2064) self->$class->vtable[95])(self, p_target->offset, $tmp2063);
        return NULL;
    }
    }
    panda$core$Bit $tmp2066 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2052->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2065 = $tmp2066.value;
    if (!$tmp2065) goto $l2067;
    panda$core$Bit $tmp2068 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2052->kind, ((panda$core$Int64) { 205 }));
    $tmp2065 = $tmp2068.value;
    $l2067:;
    panda$core$Bit $tmp2069 = { $tmp2065 };
    if ($tmp2069.value) {
    {
        panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2070, ((org$pandalanguage$pandac$Symbol*) cl2046)->name);
        panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2072);
        panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, p_name);
        panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
        (($fn2077) self->$class->vtable[95])(self, p_target->offset, $tmp2076);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2080 = (($fn2079) self->$class->vtable[19])(self, cl2046);
    org$pandalanguage$pandac$IRNode* $tmp2082 = (($fn2081) self->$class->vtable[23])(self, p_target->offset, p_target, s2052, $tmp2080);
    ref2078 = $tmp2082;
    if (((panda$core$Bit) { ref2078 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2084 = (($fn2083) self->$class->vtable[42])(self, ref2078, p_args, p_expectedType);
    return $tmp2084;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2086 = (($fn2085) self->$class->vtable[42])(self, p_m, p_args, NULL);
    return $tmp2086;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    panda$core$Int64 $match$471902087;
    org$pandalanguage$pandac$IRNode* target2089;
    panda$collections$Array* methods2096;
    panda$core$String* name2102;
    panda$core$MutableString* msg2107;
    panda$core$String* separator2114;
    panda$collections$Iterator* a$Iter2116;
    org$pandalanguage$pandac$IRNode* a2128;
    org$pandalanguage$pandac$IRNode* target2148;
    panda$collections$Array* children2155;
    panda$collections$Array* types2161;
    panda$collections$Iterator* m$Iter2164;
    org$pandalanguage$pandac$MethodRef* m2176;
    org$pandalanguage$pandac$IRNode* target2188;
    org$pandalanguage$pandac$IRNode* initCall2191;
    panda$collections$Array* children2197;
    org$pandalanguage$pandac$IRNode* resolved2202;
    {
        $match$471902087 = p_m->kind;
        panda$core$Bit $tmp2088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$471902087, ((panda$core$Int64) { 1002 }));
        if ($tmp2088.value) {
        {
            panda$core$Int64 $tmp2090 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2090, ((panda$core$Int64) { 0 }));
            if ($tmp2091.value) {
            {
                target2089 = NULL;
            }
            }
            else {
            {
                panda$core$Object* $tmp2092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2089 = ((org$pandalanguage$pandac$IRNode*) $tmp2092);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2094 = (($fn2093) self->$class->vtable[38])(self, p_m->offset, target2089, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2094;
        }
        }
        else {
        panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$471902087, ((panda$core$Int64) { 1003 }));
        if ($tmp2095.value) {
        {
            panda$collections$Array* $tmp2097 = (panda$collections$Array*) malloc(40);
            $tmp2097->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2097->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2097, ((panda$collections$ListView*) p_m->payload));
            methods2096 = $tmp2097;
            (($fn2099) self->$class->vtable[37])(self, methods2096, p_args, p_expectedType);
            panda$core$Int64 $tmp2100 = panda$collections$Array$get_count$R$panda$core$Int64(methods2096);
            panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2100, ((panda$core$Int64) { 0 }));
            if ($tmp2101.value) {
            {
                ITable* $tmp2103 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2103->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2103 = $tmp2103->next;
                }
                $fn2105 $tmp2104 = $tmp2103->methods[0];
                panda$core$Object* $tmp2106 = $tmp2104(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                name2102 = ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2106)->value)->name;
                panda$core$MutableString* $tmp2108 = (panda$core$MutableString*) malloc(40);
                $tmp2108->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2108->refCount.value = 1;
                panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2110, name2102);
                panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2111, &$s2112);
                panda$core$MutableString$init$panda$core$String($tmp2108, $tmp2113);
                msg2107 = $tmp2108;
                separator2114 = &$s2115;
                {
                    ITable* $tmp2117 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2117 = $tmp2117->next;
                    }
                    $fn2119 $tmp2118 = $tmp2117->methods[0];
                    panda$collections$Iterator* $tmp2120 = $tmp2118(((panda$collections$Iterable*) p_args));
                    a$Iter2116 = $tmp2120;
                    $l2121:;
                    ITable* $tmp2123 = a$Iter2116->$class->itable;
                    while ($tmp2123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2123 = $tmp2123->next;
                    }
                    $fn2125 $tmp2124 = $tmp2123->methods[0];
                    panda$core$Bit $tmp2126 = $tmp2124(a$Iter2116);
                    panda$core$Bit $tmp2127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2126);
                    if (!$tmp2127.value) goto $l2122;
                    {
                        ITable* $tmp2129 = a$Iter2116->$class->itable;
                        while ($tmp2129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2129 = $tmp2129->next;
                        }
                        $fn2131 $tmp2130 = $tmp2129->methods[1];
                        panda$core$Object* $tmp2132 = $tmp2130(a$Iter2116);
                        a2128 = ((org$pandalanguage$pandac$IRNode*) $tmp2132);
                        (($fn2133) msg2107->$class->vtable[3])(msg2107, separator2114);
                        (($fn2134) msg2107->$class->vtable[5])(msg2107, ((panda$core$Object*) a2128->type));
                        separator2114 = &$s2135;
                    }
                    goto $l2121;
                    $l2122:;
                }
                (($fn2137) msg2107->$class->vtable[3])(msg2107, &$s2136);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2138, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2139, &$s2140);
                    (($fn2142) msg2107->$class->vtable[3])(msg2107, $tmp2141);
                }
                }
                panda$core$String* $tmp2144 = (($fn2143) msg2107->$class->vtable[0])(msg2107);
                (($fn2145) self->$class->vtable[95])(self, p_m->offset, $tmp2144);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2146 = panda$collections$Array$get_count$R$panda$core$Int64(methods2096);
            panda$core$Bit $tmp2147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2146, ((panda$core$Int64) { 1 }));
            if ($tmp2147.value) {
            {
                panda$core$Int64 $tmp2149 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2149, ((panda$core$Int64) { 1 }));
                if ($tmp2150.value) {
                {
                    panda$core$Object* $tmp2151 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2148 = ((org$pandalanguage$pandac$IRNode*) $tmp2151);
                }
                }
                else {
                {
                    target2148 = NULL;
                }
                }
                panda$core$Object* $tmp2152 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2096, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2154 = (($fn2153) self->$class->vtable[38])(self, p_m->offset, target2148, ((org$pandalanguage$pandac$MethodRef*) $tmp2152), p_args);
                return $tmp2154;
            }
            }
            panda$collections$Array* $tmp2156 = (panda$collections$Array*) malloc(40);
            $tmp2156->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2156->refCount.value = 1;
            panda$collections$Array$init($tmp2156);
            children2155 = $tmp2156;
            org$pandalanguage$pandac$IRNode* $tmp2158 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2158->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2160 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2158, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp2160, ((panda$core$Object*) methods2096), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2155, ((panda$core$Object*) $tmp2158));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2155, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2162 = (panda$collections$Array*) malloc(40);
            $tmp2162->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2162->refCount.value = 1;
            panda$collections$Array$init($tmp2162);
            types2161 = $tmp2162;
            {
                ITable* $tmp2165 = ((panda$collections$Iterable*) methods2096)->$class->itable;
                while ($tmp2165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2165 = $tmp2165->next;
                }
                $fn2167 $tmp2166 = $tmp2165->methods[0];
                panda$collections$Iterator* $tmp2168 = $tmp2166(((panda$collections$Iterable*) methods2096));
                m$Iter2164 = $tmp2168;
                $l2169:;
                ITable* $tmp2171 = m$Iter2164->$class->itable;
                while ($tmp2171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2171 = $tmp2171->next;
                }
                $fn2173 $tmp2172 = $tmp2171->methods[0];
                panda$core$Bit $tmp2174 = $tmp2172(m$Iter2164);
                panda$core$Bit $tmp2175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2174);
                if (!$tmp2175.value) goto $l2170;
                {
                    ITable* $tmp2177 = m$Iter2164->$class->itable;
                    while ($tmp2177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2177 = $tmp2177->next;
                    }
                    $fn2179 $tmp2178 = $tmp2177->methods[1];
                    panda$core$Object* $tmp2180 = $tmp2178(m$Iter2164);
                    m2176 = ((org$pandalanguage$pandac$MethodRef*) $tmp2180);
                    org$pandalanguage$pandac$Type* $tmp2182 = (($fn2181) m2176->$class->vtable[5])(m2176);
                    panda$collections$Array$add$panda$collections$Array$T(types2161, ((panda$core$Object*) $tmp2182));
                }
                goto $l2169;
                $l2170:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2183 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2183->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2183->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2185 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp2185->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2185->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2185, ((panda$collections$ListView*) types2161));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2183, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp2185, ((panda$collections$ListView*) children2155));
            return $tmp2183;
        }
        }
        else {
        panda$core$Bit $tmp2187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$471902087, ((panda$core$Int64) { 1001 }));
        if ($tmp2187.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2189 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2189->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2189->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2189, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2188 = $tmp2189;
            org$pandalanguage$pandac$IRNode* $tmp2194 = (($fn2193) self->$class->vtable[39])(self, target2188, &$s2192, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2196 = (($fn2195) self->$class->vtable[8])(self, $tmp2194);
            initCall2191 = $tmp2196;
            if (((panda$core$Bit) { initCall2191 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2198 = (panda$collections$Array*) malloc(40);
            $tmp2198->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2198->refCount.value = 1;
            panda$collections$Array$init($tmp2198);
            children2197 = $tmp2198;
            panda$collections$Array$add$panda$collections$Array$T(children2197, ((panda$core$Object*) initCall2191));
            org$pandalanguage$pandac$IRNode* $tmp2200 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2200->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2200->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2200, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2197));
            return $tmp2200;
        }
        }
        else {
        {
            org$pandalanguage$pandac$IRNode* $tmp2204 = (($fn2203) self->$class->vtable[8])(self, p_m);
            resolved2202 = $tmp2204;
            if (((panda$core$Bit) { resolved2202 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2205, ((panda$core$Object*) resolved2202->type));
            panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, &$s2207);
            (($fn2209) self->$class->vtable[95])(self, resolved2202->offset, $tmp2208);
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2211;
    panda$core$MutableString* typeName2214;
    panda$core$String* separator2218;
    panda$collections$Iterator* p$Iter2220;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2232;
    panda$core$Int64 kind2240;
    (($fn2210) self->$class->vtable[6])(self, p_m);
    panda$collections$Array* $tmp2212 = (panda$collections$Array*) malloc(40);
    $tmp2212->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2212->refCount.value = 1;
    panda$collections$Array$init($tmp2212);
    subtypes2211 = $tmp2212;
    panda$core$MutableString* $tmp2215 = (panda$core$MutableString*) malloc(40);
    $tmp2215->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2215->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2215, &$s2217);
    typeName2214 = $tmp2215;
    separator2218 = &$s2219;
    {
        ITable* $tmp2221 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2221 = $tmp2221->next;
        }
        $fn2223 $tmp2222 = $tmp2221->methods[0];
        panda$collections$Iterator* $tmp2224 = $tmp2222(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2220 = $tmp2224;
        $l2225:;
        ITable* $tmp2227 = p$Iter2220->$class->itable;
        while ($tmp2227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2227 = $tmp2227->next;
        }
        $fn2229 $tmp2228 = $tmp2227->methods[0];
        panda$core$Bit $tmp2230 = $tmp2228(p$Iter2220);
        panda$core$Bit $tmp2231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2230);
        if (!$tmp2231.value) goto $l2226;
        {
            ITable* $tmp2233 = p$Iter2220->$class->itable;
            while ($tmp2233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2233 = $tmp2233->next;
            }
            $fn2235 $tmp2234 = $tmp2233->methods[1];
            panda$core$Object* $tmp2236 = $tmp2234(p$Iter2220);
            p2232 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2236);
            (($fn2237) typeName2214->$class->vtable[3])(typeName2214, separator2218);
            (($fn2238) typeName2214->$class->vtable[3])(typeName2214, ((org$pandalanguage$pandac$Symbol*) p2232->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2211, ((panda$core$Object*) p2232->type));
            separator2218 = &$s2239;
        }
        goto $l2225;
        $l2226:;
    }
    panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2241.value) {
    {
        (($fn2243) typeName2214->$class->vtable[3])(typeName2214, &$s2242);
        kind2240 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        (($fn2245) typeName2214->$class->vtable[3])(typeName2214, &$s2244);
        kind2240 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2211, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2246 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2248 = (($fn2247) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp2246));
    if ($tmp2248.value) {
    {
        (($fn2249) typeName2214->$class->vtable[3])(typeName2214, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    (($fn2251) typeName2214->$class->vtable[3])(typeName2214, &$s2250);
    org$pandalanguage$pandac$Type* $tmp2252 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2252->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2252->refCount.value = 1;
    panda$core$String* $tmp2255 = (($fn2254) typeName2214->$class->vtable[0])(typeName2214);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2252, $tmp2255, kind2240, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2211), ((panda$core$Bit) { true }));
    return $tmp2252;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2257;
    panda$core$MutableString* typeName2260;
    panda$collections$Iterator* p$Iter2265;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2277;
    panda$core$Int64 kind2285;
    (($fn2256) self->$class->vtable[6])(self, p_m);
    panda$collections$Array* $tmp2258 = (panda$collections$Array*) malloc(40);
    $tmp2258->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2258->refCount.value = 1;
    panda$collections$Array$init($tmp2258);
    subtypes2257 = $tmp2258;
    panda$core$MutableString* $tmp2261 = (panda$core$MutableString*) malloc(40);
    $tmp2261->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2261->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2261, &$s2263);
    typeName2260 = $tmp2261;
    (($fn2264) typeName2260->$class->vtable[3])(typeName2260, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2257, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2266 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2266->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2266 = $tmp2266->next;
        }
        $fn2268 $tmp2267 = $tmp2266->methods[0];
        panda$collections$Iterator* $tmp2269 = $tmp2267(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2265 = $tmp2269;
        $l2270:;
        ITable* $tmp2272 = p$Iter2265->$class->itable;
        while ($tmp2272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2272 = $tmp2272->next;
        }
        $fn2274 $tmp2273 = $tmp2272->methods[0];
        panda$core$Bit $tmp2275 = $tmp2273(p$Iter2265);
        panda$core$Bit $tmp2276 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2275);
        if (!$tmp2276.value) goto $l2271;
        {
            ITable* $tmp2278 = p$Iter2265->$class->itable;
            while ($tmp2278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2278 = $tmp2278->next;
            }
            $fn2280 $tmp2279 = $tmp2278->methods[1];
            panda$core$Object* $tmp2281 = $tmp2279(p$Iter2265);
            p2277 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2281);
            (($fn2283) typeName2260->$class->vtable[3])(typeName2260, &$s2282);
            (($fn2284) typeName2260->$class->vtable[3])(typeName2260, ((org$pandalanguage$pandac$Symbol*) p2277->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2257, ((panda$core$Object*) p2277->type));
        }
        goto $l2270;
        $l2271:;
    }
    panda$core$Bit $tmp2286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2286.value) {
    {
        (($fn2288) typeName2260->$class->vtable[3])(typeName2260, &$s2287);
        kind2285 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        (($fn2290) typeName2260->$class->vtable[3])(typeName2260, &$s2289);
        kind2285 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2257, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2291 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2293 = (($fn2292) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp2291));
    if ($tmp2293.value) {
    {
        (($fn2294) typeName2260->$class->vtable[3])(typeName2260, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    (($fn2296) typeName2260->$class->vtable[3])(typeName2260, &$s2295);
    org$pandalanguage$pandac$Type* $tmp2297 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2297->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2297->refCount.value = 1;
    panda$core$String* $tmp2300 = (($fn2299) typeName2260->$class->vtable[0])(typeName2260);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2297, $tmp2300, kind2285, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2257), ((panda$core$Bit) { true }));
    return $tmp2297;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2301;
    org$pandalanguage$pandac$MethodDecl* $tmp2303 = (($fn2302) self->$class->vtable[17])(self, p_m);
    inherited2301 = $tmp2303;
    if (((panda$core$Bit) { inherited2301 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2305 = (($fn2304) self->$class->vtable[43])(self, p_m);
        return $tmp2305;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2307 = (($fn2306) self->$class->vtable[45])(self, inherited2301);
    return $tmp2307;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2309 = (($fn2308) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2311 = (($fn2310) self->$class->vtable[47])(self, p_m, $tmp2309);
    return $tmp2311;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2312;
    org$pandalanguage$pandac$MethodDecl* $tmp2314 = (($fn2313) self->$class->vtable[17])(self, p_m);
    inherited2312 = $tmp2314;
    if (((panda$core$Bit) { inherited2312 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2316 = (($fn2315) self->$class->vtable[44])(self, p_m, p_selfType);
        return $tmp2316;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2318 = (($fn2317) self->$class->vtable[47])(self, inherited2312, p_selfType);
    return $tmp2318;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    panda$core$Int64 $match$525962319;
    {
        $match$525962319 = p_op;
        panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 51 }));
        if ($tmp2320.value) {
        {
            return &$s2321;
        }
        }
        else {
        panda$core$Bit $tmp2322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 52 }));
        if ($tmp2322.value) {
        {
            return &$s2323;
        }
        }
        else {
        panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 53 }));
        if ($tmp2324.value) {
        {
            return &$s2325;
        }
        }
        else {
        panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 54 }));
        if ($tmp2326.value) {
        {
            return &$s2327;
        }
        }
        else {
        panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 55 }));
        if ($tmp2328.value) {
        {
            return &$s2329;
        }
        }
        else {
        panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 56 }));
        if ($tmp2330.value) {
        {
            return &$s2331;
        }
        }
        else {
        panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 57 }));
        if ($tmp2332.value) {
        {
            return &$s2333;
        }
        }
        else {
        panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 58 }));
        if ($tmp2334.value) {
        {
            return &$s2335;
        }
        }
        else {
        panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 59 }));
        if ($tmp2336.value) {
        {
            return &$s2337;
        }
        }
        else {
        panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 63 }));
        if ($tmp2338.value) {
        {
            return &$s2339;
        }
        }
        else {
        panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 62 }));
        if ($tmp2340.value) {
        {
            return &$s2341;
        }
        }
        else {
        panda$core$Bit $tmp2342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 65 }));
        if ($tmp2342.value) {
        {
            return &$s2343;
        }
        }
        else {
        panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 64 }));
        if ($tmp2344.value) {
        {
            return &$s2345;
        }
        }
        else {
        panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 68 }));
        if ($tmp2346.value) {
        {
            return &$s2347;
        }
        }
        else {
        panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 69 }));
        if ($tmp2348.value) {
        {
            return &$s2349;
        }
        }
        else {
        panda$core$Bit $tmp2350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 66 }));
        if ($tmp2350.value) {
        {
            return &$s2351;
        }
        }
        else {
        panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 67 }));
        if ($tmp2352.value) {
        {
            return &$s2353;
        }
        }
        else {
        panda$core$Bit $tmp2354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 70 }));
        if ($tmp2354.value) {
        {
            return &$s2355;
        }
        }
        else {
        panda$core$Bit $tmp2356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 71 }));
        if ($tmp2356.value) {
        {
            return &$s2357;
        }
        }
        else {
        panda$core$Bit $tmp2358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 49 }));
        if ($tmp2358.value) {
        {
            return &$s2359;
        }
        }
        else {
        panda$core$Bit $tmp2360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 50 }));
        if ($tmp2360.value) {
        {
            return &$s2361;
        }
        }
        else {
        panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 72 }));
        if ($tmp2362.value) {
        {
            return &$s2363;
        }
        }
        else {
        panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 1 }));
        if ($tmp2364.value) {
        {
            return &$s2365;
        }
        }
        else {
        panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 101 }));
        if ($tmp2366.value) {
        {
            return &$s2367;
        }
        }
        else {
        panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 73 }));
        if ($tmp2368.value) {
        {
            return &$s2369;
        }
        }
        else {
        panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 60 }));
        if ($tmp2370.value) {
        {
            return &$s2371;
        }
        }
        else {
        panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$525962319, ((panda$core$Int64) { 61 }));
        if ($tmp2372.value) {
        {
            return &$s2373;
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
    panda$core$Int64 $match$540122374;
    {
        $match$540122374 = p_op;
        panda$core$Bit $tmp2389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 74 }));
        bool $tmp2388 = $tmp2389.value;
        if ($tmp2388) goto $l2390;
        panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 75 }));
        $tmp2388 = $tmp2391.value;
        $l2390:;
        panda$core$Bit $tmp2392 = { $tmp2388 };
        bool $tmp2387 = $tmp2392.value;
        if ($tmp2387) goto $l2393;
        panda$core$Bit $tmp2394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 76 }));
        $tmp2387 = $tmp2394.value;
        $l2393:;
        panda$core$Bit $tmp2395 = { $tmp2387 };
        bool $tmp2386 = $tmp2395.value;
        if ($tmp2386) goto $l2396;
        panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 77 }));
        $tmp2386 = $tmp2397.value;
        $l2396:;
        panda$core$Bit $tmp2398 = { $tmp2386 };
        bool $tmp2385 = $tmp2398.value;
        if ($tmp2385) goto $l2399;
        panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 79 }));
        $tmp2385 = $tmp2400.value;
        $l2399:;
        panda$core$Bit $tmp2401 = { $tmp2385 };
        bool $tmp2384 = $tmp2401.value;
        if ($tmp2384) goto $l2402;
        panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 78 }));
        $tmp2384 = $tmp2403.value;
        $l2402:;
        panda$core$Bit $tmp2404 = { $tmp2384 };
        bool $tmp2383 = $tmp2404.value;
        if ($tmp2383) goto $l2405;
        panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 80 }));
        $tmp2383 = $tmp2406.value;
        $l2405:;
        panda$core$Bit $tmp2407 = { $tmp2383 };
        bool $tmp2382 = $tmp2407.value;
        if ($tmp2382) goto $l2408;
        panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 81 }));
        $tmp2382 = $tmp2409.value;
        $l2408:;
        panda$core$Bit $tmp2410 = { $tmp2382 };
        bool $tmp2381 = $tmp2410.value;
        if ($tmp2381) goto $l2411;
        panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 82 }));
        $tmp2381 = $tmp2412.value;
        $l2411:;
        panda$core$Bit $tmp2413 = { $tmp2381 };
        bool $tmp2380 = $tmp2413.value;
        if ($tmp2380) goto $l2414;
        panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 83 }));
        $tmp2380 = $tmp2415.value;
        $l2414:;
        panda$core$Bit $tmp2416 = { $tmp2380 };
        bool $tmp2379 = $tmp2416.value;
        if ($tmp2379) goto $l2417;
        panda$core$Bit $tmp2418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 84 }));
        $tmp2379 = $tmp2418.value;
        $l2417:;
        panda$core$Bit $tmp2419 = { $tmp2379 };
        bool $tmp2378 = $tmp2419.value;
        if ($tmp2378) goto $l2420;
        panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 85 }));
        $tmp2378 = $tmp2421.value;
        $l2420:;
        panda$core$Bit $tmp2422 = { $tmp2378 };
        bool $tmp2377 = $tmp2422.value;
        if ($tmp2377) goto $l2423;
        panda$core$Bit $tmp2424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 86 }));
        $tmp2377 = $tmp2424.value;
        $l2423:;
        panda$core$Bit $tmp2425 = { $tmp2377 };
        bool $tmp2376 = $tmp2425.value;
        if ($tmp2376) goto $l2426;
        panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 87 }));
        $tmp2376 = $tmp2427.value;
        $l2426:;
        panda$core$Bit $tmp2428 = { $tmp2376 };
        bool $tmp2375 = $tmp2428.value;
        if ($tmp2375) goto $l2429;
        panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540122374, ((panda$core$Int64) { 88 }));
        $tmp2375 = $tmp2430.value;
        $l2429:;
        panda$core$Bit $tmp2431 = { $tmp2375 };
        if ($tmp2431.value) {
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
    panda$core$Int64 $match$545852432;
    {
        $match$545852432 = p_op;
        panda$core$Bit $tmp2433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 74 }));
        if ($tmp2433.value) {
        {
            return ((panda$core$Int64) { 51 });
        }
        }
        else {
        panda$core$Bit $tmp2434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 75 }));
        if ($tmp2434.value) {
        {
            return ((panda$core$Int64) { 52 });
        }
        }
        else {
        panda$core$Bit $tmp2435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 76 }));
        if ($tmp2435.value) {
        {
            return ((panda$core$Int64) { 53 });
        }
        }
        else {
        panda$core$Bit $tmp2436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 77 }));
        if ($tmp2436.value) {
        {
            return ((panda$core$Int64) { 54 });
        }
        }
        else {
        panda$core$Bit $tmp2437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 79 }));
        if ($tmp2437.value) {
        {
            return ((panda$core$Int64) { 55 });
        }
        }
        else {
        panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 78 }));
        if ($tmp2438.value) {
        {
            return ((panda$core$Int64) { 56 });
        }
        }
        else {
        panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 80 }));
        if ($tmp2439.value) {
        {
            return ((panda$core$Int64) { 57 });
        }
        }
        else {
        panda$core$Bit $tmp2440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 81 }));
        if ($tmp2440.value) {
        {
            return ((panda$core$Int64) { 68 });
        }
        }
        else {
        panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 82 }));
        if ($tmp2441.value) {
        {
            return ((panda$core$Int64) { 69 });
        }
        }
        else {
        panda$core$Bit $tmp2442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 83 }));
        if ($tmp2442.value) {
        {
            return ((panda$core$Int64) { 66 });
        }
        }
        else {
        panda$core$Bit $tmp2443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 84 }));
        if ($tmp2443.value) {
        {
            return ((panda$core$Int64) { 67 });
        }
        }
        else {
        panda$core$Bit $tmp2444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 85 }));
        if ($tmp2444.value) {
        {
            return ((panda$core$Int64) { 70 });
        }
        }
        else {
        panda$core$Bit $tmp2445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 86 }));
        if ($tmp2445.value) {
        {
            return ((panda$core$Int64) { 71 });
        }
        }
        else {
        panda$core$Bit $tmp2446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 87 }));
        if ($tmp2446.value) {
        {
            return ((panda$core$Int64) { 72 });
        }
        }
        else {
        panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545852432, ((panda$core$Int64) { 88 }));
        if ($tmp2447.value) {
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
    panda$core$Int64 $match$557092448;
    {
        $match$557092448 = p_expr->kind;
        panda$core$Bit $tmp2449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$557092448, ((panda$core$Int64) { 1009 }));
        if ($tmp2449.value) {
        {
            panda$core$Bit $tmp2450 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2450.value) {
            {
                panda$core$Object* $tmp2451 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2453 = (($fn2452) self->$class->vtable[48])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2451));
                return $tmp2453;
            }
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$557092448, ((panda$core$Int64) { 1026 }));
        bool $tmp2454 = $tmp2455.value;
        if ($tmp2454) goto $l2456;
        panda$core$Bit $tmp2457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$557092448, ((panda$core$Int64) { 1016 }));
        $tmp2454 = $tmp2457.value;
        $l2456:;
        panda$core$Bit $tmp2458 = { $tmp2454 };
        if ($tmp2458.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp2459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$557092448, ((panda$core$Int64) { 1027 }));
        if ($tmp2459.value) {
        {
            panda$core$Object* $tmp2460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2462 = (($fn2461) self->$class->vtable[48])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2460));
            return $tmp2462;
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
    panda$core$Int64 l2478;
    panda$core$Int64 r2480;
    panda$core$Int64 $match$568872482;
    panda$core$Bit $tmp2465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2464 = $tmp2465.value;
    if ($tmp2464) goto $l2466;
    panda$core$UInt64 $tmp2468 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2469 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2468);
    bool $tmp2467 = $tmp2469.value;
    if (!$tmp2467) goto $l2470;
    panda$core$Bit $tmp2471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2467 = $tmp2471.value;
    $l2470:;
    panda$core$Bit $tmp2472 = { $tmp2467 };
    $tmp2464 = $tmp2472.value;
    $l2466:;
    panda$core$Bit $tmp2473 = { $tmp2464 };
    bool $tmp2463 = $tmp2473.value;
    if ($tmp2463) goto $l2474;
    panda$core$UInt64 $tmp2475 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2476 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2475);
    $tmp2463 = $tmp2476.value;
    $l2474:;
    panda$core$Bit $tmp2477 = { $tmp2463 };
    if ($tmp2477.value) {
    {
        panda$core$Int64 $tmp2479 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2478 = $tmp2479;
        panda$core$Int64 $tmp2481 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2480 = $tmp2481;
        {
            $match$568872482 = p_op;
            panda$core$Bit $tmp2483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 51 }));
            if ($tmp2483.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2484 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2484->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2484->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2486 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2487 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2488 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2487);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2484, ((panda$core$Int64) { 1004 }), p_offset, $tmp2486, $tmp2488);
                return $tmp2484;
            }
            }
            else {
            panda$core$Bit $tmp2489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 52 }));
            if ($tmp2489.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2490 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2490->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2490->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2492 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2493 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2494 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2493);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2490, ((panda$core$Int64) { 1004 }), p_offset, $tmp2492, $tmp2494);
                return $tmp2490;
            }
            }
            else {
            panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 53 }));
            if ($tmp2495.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2496 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2496->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2496->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2498 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2499 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2500 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2499);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2496, ((panda$core$Int64) { 1004 }), p_offset, $tmp2498, $tmp2500);
                return $tmp2496;
            }
            }
            else {
            panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 55 }));
            if ($tmp2501.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2502 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2502->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2502->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2504 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2505 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2506 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2505);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2502, ((panda$core$Int64) { 1004 }), p_offset, $tmp2504, $tmp2506);
                return $tmp2502;
            }
            }
            else {
            panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 56 }));
            if ($tmp2507.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2508 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2508->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2508->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2510 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2511 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2512 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2511);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2508, ((panda$core$Int64) { 1004 }), p_offset, $tmp2510, $tmp2512);
                return $tmp2508;
            }
            }
            else {
            panda$core$Bit $tmp2513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 58 }));
            if ($tmp2513.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2514 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2514->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2514->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2516 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2478, r2480);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2514, ((panda$core$Int64) { 1011 }), p_offset, $tmp2516, $tmp2517);
                return $tmp2514;
            }
            }
            else {
            panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 59 }));
            if ($tmp2518.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2519 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2519->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2519->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2521 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2522 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2478, r2480);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2519, ((panda$core$Int64) { 1011 }), p_offset, $tmp2521, $tmp2522);
                return $tmp2519;
            }
            }
            else {
            panda$core$Bit $tmp2523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 62 }));
            if ($tmp2523.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2524 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2524->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2524->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2526 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2527 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2478, r2480);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2524, ((panda$core$Int64) { 1011 }), p_offset, $tmp2526, $tmp2527);
                return $tmp2524;
            }
            }
            else {
            panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 63 }));
            if ($tmp2528.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2529 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2529->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2529->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2531 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2532 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2478, r2480);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2529, ((panda$core$Int64) { 1011 }), p_offset, $tmp2531, $tmp2532);
                return $tmp2529;
            }
            }
            else {
            panda$core$Bit $tmp2533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 64 }));
            if ($tmp2533.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2534 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2534->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2536 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2537 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2478, r2480);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2534, ((panda$core$Int64) { 1011 }), p_offset, $tmp2536, $tmp2537);
                return $tmp2534;
            }
            }
            else {
            panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 65 }));
            if ($tmp2538.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2539 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2539->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2539->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2541 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2542 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2478, r2480);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2539, ((panda$core$Int64) { 1011 }), p_offset, $tmp2541, $tmp2542);
                return $tmp2539;
            }
            }
            else {
            panda$core$Bit $tmp2543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 67 }));
            if ($tmp2543.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2544 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2544->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2544->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2546 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2547 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2548 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2547);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2544, ((panda$core$Int64) { 1004 }), p_offset, $tmp2546, $tmp2548);
                return $tmp2544;
            }
            }
            else {
            panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 69 }));
            if ($tmp2549.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2550 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2550->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2550->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2552 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2553 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2554 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2553);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2550, ((panda$core$Int64) { 1004 }), p_offset, $tmp2552, $tmp2554);
                return $tmp2550;
            }
            }
            else {
            panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 71 }));
            if ($tmp2555.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2556 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2556->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2556->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2558 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2559 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2560 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2559);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2556, ((panda$core$Int64) { 1004 }), p_offset, $tmp2558, $tmp2560);
                return $tmp2556;
            }
            }
            else {
            panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 72 }));
            if ($tmp2561.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2562 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2562->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2562->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2564 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2565 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2566 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2565);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2562, ((panda$core$Int64) { 1004 }), p_offset, $tmp2564, $tmp2566);
                return $tmp2562;
            }
            }
            else {
            panda$core$Bit $tmp2567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568872482, ((panda$core$Int64) { 1 }));
            if ($tmp2567.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2568 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2568->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2568->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2570 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2571 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2478, r2480);
                panda$core$UInt64 $tmp2572 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2571);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2568, ((panda$core$Int64) { 1004 }), p_offset, $tmp2570, $tmp2572);
                return $tmp2568;
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
    (($fn2574) self->$class->vtable[95])(self, p_offset, &$s2573);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2575.value) {
    {
        panda$core$Object* $tmp2576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2576);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2578;
    org$pandalanguage$pandac$IRNode* resolved2586;
    panda$collections$Array* children2591;
    panda$core$UInt64 baseId2598;
    org$pandalanguage$pandac$IRNode* base2599;
    panda$core$UInt64 indexId2606;
    org$pandalanguage$pandac$IRNode* index2607;
    org$pandalanguage$pandac$IRNode* baseRef2612;
    org$pandalanguage$pandac$IRNode* indexRef2615;
    org$pandalanguage$pandac$IRNode* rhsIndex2618;
    org$pandalanguage$pandac$IRNode* value2621;
    panda$core$Bit $tmp2577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2577.value) {
    {
        panda$collections$Array* $tmp2579 = (panda$collections$Array*) malloc(40);
        $tmp2579->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2579->refCount.value = 1;
        panda$collections$Array$init($tmp2579);
        args2578 = $tmp2579;
        panda$core$Object* $tmp2581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2578, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2581)));
        panda$collections$Array$add$panda$collections$Array$T(args2578, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2582 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2585 = (($fn2584) self->$class->vtable[39])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2582), &$s2583, ((panda$collections$ListView*) args2578));
        return $tmp2585;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2588 = (($fn2587) self->$class->vtable[8])(self, p_left);
    resolved2586 = $tmp2588;
    if (((panda$core$Bit) { resolved2586 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2590 = (($fn2589) self->$class->vtable[50])(self, resolved2586);
    resolved2586 = $tmp2590;
    panda$collections$Array* $tmp2592 = (panda$collections$Array*) malloc(40);
    $tmp2592->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2592->refCount.value = 1;
    panda$collections$Array$init($tmp2592);
    children2591 = $tmp2592;
    panda$core$Object* $tmp2594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2586->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2596 = (($fn2595) self->$class->vtable[50])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2594));
    panda$collections$Array$add$panda$collections$Array$T(children2591, ((panda$core$Object*) $tmp2596));
    panda$core$UInt64 $tmp2597 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2597;
    baseId2598 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2600 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2600->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2600->refCount.value = 1;
    panda$core$Object* $tmp2602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2591, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2603 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2591, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2600, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2602)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2603)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2598)), ((panda$collections$ListView*) children2591));
    base2599 = $tmp2600;
    panda$collections$Array$clear(children2591);
    panda$core$Object* $tmp2604 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2586->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2591, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2604)));
    panda$core$UInt64 $tmp2605 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2605;
    indexId2606 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2608 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2608->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2608->refCount.value = 1;
    panda$core$Object* $tmp2610 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2591, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2611 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2591, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2608, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2610)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2611)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2606)), ((panda$collections$ListView*) children2591));
    index2607 = $tmp2608;
    org$pandalanguage$pandac$IRNode* $tmp2613 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2613->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2613->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2613, ((panda$core$Int64) { 1028 }), base2599->offset, base2599->type, baseId2598);
    baseRef2612 = $tmp2613;
    org$pandalanguage$pandac$IRNode* $tmp2616 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2616->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2616->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2616, ((panda$core$Int64) { 1028 }), index2607->offset, index2607->type, indexId2606);
    indexRef2615 = $tmp2616;
    org$pandalanguage$pandac$IRNode* $tmp2620 = (($fn2619) self->$class->vtable[52])(self, p_offset, baseRef2612, ((panda$core$Int64) { 101 }), indexRef2615);
    rhsIndex2618 = $tmp2620;
    if (((panda$core$Bit) { rhsIndex2618 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2622 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2624 = (($fn2623) self->$class->vtable[52])(self, p_offset, rhsIndex2618, $tmp2622, p_right);
    value2621 = $tmp2624;
    if (((panda$core$Bit) { value2621 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2628 = (($fn2627) rhsIndex2618->type->$class->vtable[6])(rhsIndex2618->type);
    bool $tmp2626 = $tmp2628.value;
    if (!$tmp2626) goto $l2629;
    panda$core$Bit $tmp2631 = (($fn2630) p_right->type->$class->vtable[6])(p_right->type);
    $tmp2626 = $tmp2631.value;
    $l2629:;
    panda$core$Bit $tmp2632 = { $tmp2626 };
    bool $tmp2625 = $tmp2632.value;
    if (!$tmp2625) goto $l2633;
    panda$core$Bit $tmp2635 = (($fn2634) rhsIndex2618->type->$class->vtable[5])(rhsIndex2618->type, ((panda$core$Object*) value2621->type));
    $tmp2625 = $tmp2635.value;
    $l2633:;
    panda$core$Bit $tmp2636 = { $tmp2625 };
    if ($tmp2636.value) {
    {
        panda$collections$Array* $tmp2638 = (panda$collections$Array*) malloc(40);
        $tmp2638->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2638->refCount.value = 1;
        panda$collections$Array$init($tmp2638);
        org$pandalanguage$pandac$IRNode* $tmp2641 = (($fn2640) self->$class->vtable[40])(self, value2621, &$s2637, ((panda$collections$ListView*) $tmp2638), resolved2586->type);
        value2621 = $tmp2641;
        if (((panda$core$Bit) { value2621 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2591);
    panda$collections$Array$add$panda$collections$Array$T(children2591, ((panda$core$Object*) index2607));
    panda$collections$Array$add$panda$collections$Array$T(children2591, ((panda$core$Object*) value2621));
    org$pandalanguage$pandac$IRNode* $tmp2644 = (($fn2643) self->$class->vtable[39])(self, base2599, &$s2642, ((panda$collections$ListView*) children2591));
    return $tmp2644;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2645;
    org$pandalanguage$pandac$IRNode* right2646;
    panda$core$Int64 kind2675;
    org$pandalanguage$pandac$IRNode* resolved2682;
    panda$collections$Array* children2685;
    org$pandalanguage$pandac$IRNode* resolved2692;
    panda$collections$Array* children2695;
    org$pandalanguage$pandac$ClassDecl* cl2708;
    org$pandalanguage$pandac$ClassDecl* cl2729;
    org$pandalanguage$pandac$IRNode* finalLeft2748;
    org$pandalanguage$pandac$IRNode* finalRight2752;
    panda$collections$Array* children2756;
    panda$collections$Array* children2775;
    panda$collections$Array* children2791;
    org$pandalanguage$pandac$IRNode* reusedLeft2797;
    org$pandalanguage$pandac$ClassDecl* cl2820;
    panda$collections$ListView* parameters2823;
    org$pandalanguage$pandac$Symbol* methods2826;
    org$pandalanguage$pandac$Type* type2832;
    panda$collections$Array* types2833;
    org$pandalanguage$pandac$MethodDecl* m2837;
    panda$collections$Iterator* m$Iter2843;
    org$pandalanguage$pandac$MethodDecl* m2855;
    panda$collections$Array* children2868;
    panda$collections$Array* children2899;
    panda$collections$Array* children2916;
    org$pandalanguage$pandac$Type* resultType2943;
    panda$core$Int64 $match$700332944;
    org$pandalanguage$pandac$IRNode* result2969;
    org$pandalanguage$pandac$IRNode* resolved2973;
    org$pandalanguage$pandac$IRNode* target2981;
    left2645 = p_rawLeft;
    right2646 = p_rawRight;
    panda$core$Bit $tmp2647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2645->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2647.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2649 = (($fn2648) self->$class->vtable[8])(self, right2646);
        right2646 = $tmp2649;
        if (((panda$core$Bit) { right2646 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2651 = (($fn2650) self->$class->vtable[30])(self, left2645, right2646->type);
        if (((panda$core$Bit) { $tmp2651.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2653 = (($fn2652) self->$class->vtable[32])(self, left2645, right2646->type);
            left2645 = $tmp2653;
        }
        }
    }
    }
    panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2646->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2654 = $tmp2655.value;
    if (!$tmp2654) goto $l2656;
    panda$core$Int64$nullable $tmp2658 = (($fn2657) self->$class->vtable[30])(self, right2646, left2645->type);
    $tmp2654 = ((panda$core$Bit) { $tmp2658.nonnull }).value;
    $l2656:;
    panda$core$Bit $tmp2659 = { $tmp2654 };
    if ($tmp2659.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2661 = (($fn2660) self->$class->vtable[32])(self, right2646, left2645->type);
        right2646 = $tmp2661;
    }
    }
    panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2664 = $tmp2665.value;
    if ($tmp2664) goto $l2666;
    panda$core$Bit $tmp2667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2664 = $tmp2667.value;
    $l2666:;
    panda$core$Bit $tmp2668 = { $tmp2664 };
    bool $tmp2663 = $tmp2668.value;
    if ($tmp2663) goto $l2669;
    panda$core$Bit $tmp2670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2663 = $tmp2670.value;
    $l2669:;
    panda$core$Bit $tmp2671 = { $tmp2663 };
    bool $tmp2662 = $tmp2671.value;
    if ($tmp2662) goto $l2672;
    panda$core$Bit $tmp2673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2662 = $tmp2673.value;
    $l2672:;
    panda$core$Bit $tmp2674 = { $tmp2662 };
    if ($tmp2674.value) {
    {
        panda$core$Bit $tmp2677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2676 = $tmp2677.value;
        if ($tmp2676) goto $l2678;
        panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2676 = $tmp2679.value;
        $l2678:;
        panda$core$Bit $tmp2680 = { $tmp2676 };
        if ($tmp2680.value) {
        {
            kind2675 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2675 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2645->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2681.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2684 = (($fn2683) self->$class->vtable[8])(self, right2646);
            resolved2682 = $tmp2684;
            if (((panda$core$Bit) { resolved2682 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2686 = (panda$collections$Array*) malloc(40);
            $tmp2686->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2686->refCount.value = 1;
            panda$collections$Array$init($tmp2686);
            children2685 = $tmp2686;
            panda$collections$Array$add$panda$collections$Array$T(children2685, ((panda$core$Object*) resolved2682));
            org$pandalanguage$pandac$IRNode* $tmp2688 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2688->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2688->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2690 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2688, kind2675, p_offset, $tmp2690, ((panda$collections$ListView*) children2685));
            return $tmp2688;
        }
        }
        panda$core$Bit $tmp2691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2646->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2691.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2694 = (($fn2693) self->$class->vtable[8])(self, left2645);
            resolved2692 = $tmp2694;
            if (((panda$core$Bit) { resolved2692 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2696 = (panda$collections$Array*) malloc(40);
            $tmp2696->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2696->refCount.value = 1;
            panda$collections$Array$init($tmp2696);
            children2695 = $tmp2696;
            panda$collections$Array$add$panda$collections$Array$T(children2695, ((panda$core$Object*) resolved2692));
            org$pandalanguage$pandac$IRNode* $tmp2698 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2698->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2698->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2700 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2698, kind2675, p_offset, $tmp2700, ((panda$collections$ListView*) children2695));
            return $tmp2698;
        }
        }
    }
    }
    panda$core$Bit $tmp2702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2701 = $tmp2702.value;
    if ($tmp2701) goto $l2703;
    panda$core$Bit $tmp2704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2701 = $tmp2704.value;
    $l2703:;
    panda$core$Bit $tmp2705 = { $tmp2701 };
    if ($tmp2705.value) {
    {
        panda$core$Bit $tmp2707 = (($fn2706) left2645->type->$class->vtable[8])(left2645->type);
        if ($tmp2707.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2710 = (($fn2709) self->$class->vtable[13])(self, left2645->type);
            cl2708 = $tmp2710;
            if (((panda$core$Bit) { cl2708 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2712 = (($fn2711) self->$class->vtable[9])(self, cl2708);
            if ($tmp2712.value) {
            {
                panda$core$String* $tmp2714 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2713, $tmp2714);
                panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, &$s2716);
                panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2717, ((panda$core$Object*) left2645->type));
                panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
                panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2721, ((panda$core$Object*) right2646->type));
                panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2723);
                panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, $tmp2724);
                (($fn2726) self->$class->vtable[95])(self, p_offset, $tmp2725);
            }
            }
        }
        }
        panda$core$Bit $tmp2728 = (($fn2727) right2646->type->$class->vtable[8])(right2646->type);
        if ($tmp2728.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2731 = (($fn2730) self->$class->vtable[13])(self, right2646->type);
            cl2729 = $tmp2731;
            if (((panda$core$Bit) { cl2729 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2733 = (($fn2732) self->$class->vtable[9])(self, cl2729);
            if ($tmp2733.value) {
            {
                panda$core$String* $tmp2735 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2734, $tmp2735);
                panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
                panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2738, ((panda$core$Object*) left2645->type));
                panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
                panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2742, ((panda$core$Object*) right2646->type));
                panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, &$s2744);
                panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, $tmp2745);
                (($fn2747) self->$class->vtable[95])(self, p_offset, $tmp2746);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2749 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2751 = (($fn2750) self->$class->vtable[32])(self, left2645, $tmp2749);
        finalLeft2748 = $tmp2751;
        if (((panda$core$Bit) { finalLeft2748 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2753 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2755 = (($fn2754) self->$class->vtable[32])(self, right2646, $tmp2753);
        finalRight2752 = $tmp2755;
        if (((panda$core$Bit) { finalRight2752 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2757 = (panda$collections$Array*) malloc(40);
        $tmp2757->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2757->refCount.value = 1;
        panda$collections$Array$init($tmp2757);
        children2756 = $tmp2757;
        panda$collections$Array$add$panda$collections$Array$T(children2756, ((panda$core$Object*) finalLeft2748));
        panda$collections$Array$add$panda$collections$Array$T(children2756, ((panda$core$Object*) finalRight2752));
        org$pandalanguage$pandac$IRNode* $tmp2759 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2759->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2759->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2761 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2759, ((panda$core$Int64) { 1023 }), p_offset, $tmp2761, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2756));
        return $tmp2759;
    }
    }
    panda$core$Bit $tmp2762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2762.value) {
    {
        panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2645->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2763.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2765 = (($fn2764) self->$class->vtable[51])(self, p_offset, left2645, p_op, right2646);
            return $tmp2765;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2767 = (($fn2766) self->$class->vtable[8])(self, left2645);
        left2645 = $tmp2767;
        if (((panda$core$Bit) { left2645 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2769 = (($fn2768) self->$class->vtable[32])(self, right2646, left2645->type);
        right2646 = $tmp2769;
        if (((panda$core$Bit) { right2646 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2771 = (($fn2770) self->$class->vtable[48])(self, left2645);
        panda$core$Bit $tmp2772 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2771);
        if ($tmp2772.value) {
        {
            (($fn2774) self->$class->vtable[95])(self, left2645->offset, &$s2773);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2776 = (panda$collections$Array*) malloc(40);
        $tmp2776->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2776->refCount.value = 1;
        panda$collections$Array$init($tmp2776);
        children2775 = $tmp2776;
        panda$collections$Array$add$panda$collections$Array$T(children2775, ((panda$core$Object*) left2645));
        panda$collections$Array$add$panda$collections$Array$T(children2775, ((panda$core$Object*) right2646));
        org$pandalanguage$pandac$IRNode* $tmp2778 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2778->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2778->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2778, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2775));
        return $tmp2778;
    }
    }
    panda$core$Bit $tmp2780 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2780.value) {
    {
        panda$core$Bit $tmp2781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2645->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2781.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2783 = (($fn2782) self->$class->vtable[51])(self, p_offset, left2645, p_op, right2646);
            return $tmp2783;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2785 = (($fn2784) self->$class->vtable[8])(self, left2645);
        left2645 = $tmp2785;
        if (((panda$core$Bit) { left2645 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2787 = (($fn2786) self->$class->vtable[48])(self, left2645);
        panda$core$Bit $tmp2788 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2787);
        if ($tmp2788.value) {
        {
            (($fn2790) self->$class->vtable[95])(self, left2645->offset, &$s2789);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2792 = (panda$collections$Array*) malloc(40);
        $tmp2792->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2792->refCount.value = 1;
        panda$collections$Array$init($tmp2792);
        children2791 = $tmp2792;
        panda$collections$Array$add$panda$collections$Array$T(children2791, ((panda$core$Object*) left2645));
        panda$core$UInt64 $tmp2794 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2794;
        org$pandalanguage$pandac$IRNode* $tmp2795 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2795->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2795->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2795, ((panda$core$Int64) { 1027 }), left2645->offset, left2645->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2791));
        left2645 = $tmp2795;
        org$pandalanguage$pandac$IRNode* $tmp2798 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2798->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2798, ((panda$core$Int64) { 1028 }), left2645->offset, left2645->type, self->reusedValueCount);
        reusedLeft2797 = $tmp2798;
        panda$core$Int64 $tmp2800 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2802 = (($fn2801) self->$class->vtable[52])(self, p_offset, reusedLeft2797, $tmp2800, right2646);
        right2646 = $tmp2802;
        if (((panda$core$Bit) { right2646 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2805 = (($fn2804) left2645->type->$class->vtable[6])(left2645->type);
        bool $tmp2803 = $tmp2805.value;
        if (!$tmp2803) goto $l2806;
        panda$core$Bit $tmp2808 = (($fn2807) left2645->type->$class->vtable[5])(left2645->type, ((panda$core$Object*) right2646->type));
        $tmp2803 = $tmp2808.value;
        $l2806:;
        panda$core$Bit $tmp2809 = { $tmp2803 };
        if ($tmp2809.value) {
        {
            panda$collections$Array* $tmp2811 = (panda$collections$Array*) malloc(40);
            $tmp2811->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2811->refCount.value = 1;
            panda$collections$Array$init($tmp2811);
            org$pandalanguage$pandac$IRNode* $tmp2814 = (($fn2813) self->$class->vtable[40])(self, right2646, &$s2810, ((panda$collections$ListView*) $tmp2811), left2645->type);
            right2646 = $tmp2814;
            if (((panda$core$Bit) { right2646 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2816 = (($fn2815) self->$class->vtable[52])(self, p_offset, left2645, ((panda$core$Int64) { 73 }), right2646);
        return $tmp2816;
    }
    }
    panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2817.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2819 = (($fn2818) self->$class->vtable[8])(self, left2645);
        left2645 = $tmp2819;
        if (((panda$core$Bit) { left2645 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2822 = (($fn2821) self->$class->vtable[13])(self, left2645->type);
        cl2820 = $tmp2822;
        if (((panda$core$Bit) { cl2820 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2825 = (($fn2824) self->$class->vtable[54])(self, left2645->type);
        parameters2823 = $tmp2825;
        org$pandalanguage$pandac$SymbolTable* $tmp2828 = (($fn2827) self->$class->vtable[19])(self, cl2820);
        org$pandalanguage$pandac$Symbol* $tmp2831 = (($fn2830) $tmp2828->$class->vtable[6])($tmp2828, &$s2829);
        methods2826 = $tmp2831;
        if (((panda$core$Bit) { methods2826 != NULL }).value) {
        {
            panda$collections$Array* $tmp2834 = (panda$collections$Array*) malloc(40);
            $tmp2834->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2834->refCount.value = 1;
            panda$collections$Array$init($tmp2834);
            types2833 = $tmp2834;
            panda$core$Bit $tmp2836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2826->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2836.value) {
            {
                m2837 = ((org$pandalanguage$pandac$MethodDecl*) methods2826);
                (($fn2838) self->$class->vtable[6])(self, m2837);
                org$pandalanguage$pandac$MethodRef* $tmp2839 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2839->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2839->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2839, m2837, parameters2823);
                org$pandalanguage$pandac$Type* $tmp2842 = (($fn2841) $tmp2839->$class->vtable[5])($tmp2839);
                panda$collections$Array$add$panda$collections$Array$T(types2833, ((panda$core$Object*) $tmp2842));
            }
            }
            else {
            {
                {
                    ITable* $tmp2844 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2826)->methods)->$class->itable;
                    while ($tmp2844->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2844 = $tmp2844->next;
                    }
                    $fn2846 $tmp2845 = $tmp2844->methods[0];
                    panda$collections$Iterator* $tmp2847 = $tmp2845(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2826)->methods));
                    m$Iter2843 = $tmp2847;
                    $l2848:;
                    ITable* $tmp2850 = m$Iter2843->$class->itable;
                    while ($tmp2850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2850 = $tmp2850->next;
                    }
                    $fn2852 $tmp2851 = $tmp2850->methods[0];
                    panda$core$Bit $tmp2853 = $tmp2851(m$Iter2843);
                    panda$core$Bit $tmp2854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2853);
                    if (!$tmp2854.value) goto $l2849;
                    {
                        ITable* $tmp2856 = m$Iter2843->$class->itable;
                        while ($tmp2856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2856 = $tmp2856->next;
                        }
                        $fn2858 $tmp2857 = $tmp2856->methods[1];
                        panda$core$Object* $tmp2859 = $tmp2857(m$Iter2843);
                        m2855 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2859);
                        (($fn2860) self->$class->vtable[6])(self, m2855);
                        org$pandalanguage$pandac$MethodRef* $tmp2861 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2861->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2861->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2861, m2855, parameters2823);
                        org$pandalanguage$pandac$Type* $tmp2864 = (($fn2863) $tmp2861->$class->vtable[5])($tmp2861);
                        panda$collections$Array$add$panda$collections$Array$T(types2833, ((panda$core$Object*) $tmp2864));
                    }
                    goto $l2848;
                    $l2849:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2865 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp2865->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2865->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2865, ((panda$collections$ListView*) types2833));
            type2832 = $tmp2865;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2867 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2832 = $tmp2867;
        }
        }
        panda$collections$Array* $tmp2869 = (panda$collections$Array*) malloc(40);
        $tmp2869->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2869->refCount.value = 1;
        panda$collections$Array$init($tmp2869);
        children2868 = $tmp2869;
        panda$collections$Array$add$panda$collections$Array$T(children2868, ((panda$core$Object*) left2645));
        panda$collections$Array$add$panda$collections$Array$T(children2868, ((panda$core$Object*) right2646));
        org$pandalanguage$pandac$IRNode* $tmp2871 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2871->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2871->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2871, ((panda$core$Int64) { 1040 }), p_offset, type2832, ((panda$collections$ListView*) children2868));
        return $tmp2871;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2873 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2875 = (($fn2874) left2645->type->$class->vtable[4])(left2645->type, ((panda$core$Object*) $tmp2873));
    if ($tmp2875.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2877 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2879 = (($fn2878) right2646->type->$class->vtable[4])(right2646->type, ((panda$core$Object*) $tmp2877));
        bool $tmp2876 = $tmp2879.value;
        if (!$tmp2876) goto $l2880;
        panda$core$Bit $tmp2885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2884 = $tmp2885.value;
        if ($tmp2884) goto $l2886;
        panda$core$Bit $tmp2887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2884 = $tmp2887.value;
        $l2886:;
        panda$core$Bit $tmp2888 = { $tmp2884 };
        bool $tmp2883 = $tmp2888.value;
        if ($tmp2883) goto $l2889;
        panda$core$Bit $tmp2890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2883 = $tmp2890.value;
        $l2889:;
        panda$core$Bit $tmp2891 = { $tmp2883 };
        bool $tmp2882 = $tmp2891.value;
        if ($tmp2882) goto $l2892;
        panda$core$Bit $tmp2893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2882 = $tmp2893.value;
        $l2892:;
        panda$core$Bit $tmp2894 = { $tmp2882 };
        bool $tmp2881 = $tmp2894.value;
        if ($tmp2881) goto $l2895;
        panda$core$Bit $tmp2896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2881 = $tmp2896.value;
        $l2895:;
        panda$core$Bit $tmp2897 = { $tmp2881 };
        $tmp2876 = $tmp2897.value;
        $l2880:;
        panda$core$Bit $tmp2898 = { $tmp2876 };
        if ($tmp2898.value) {
        {
            panda$collections$Array* $tmp2900 = (panda$collections$Array*) malloc(40);
            $tmp2900->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2900->refCount.value = 1;
            panda$collections$Array$init($tmp2900);
            children2899 = $tmp2900;
            panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) left2645));
            panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) right2646));
            org$pandalanguage$pandac$IRNode* $tmp2902 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2902->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2902, ((panda$core$Int64) { 1023 }), p_offset, left2645->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2899));
            return $tmp2902;
        }
        }
        panda$core$String* $tmp2905 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2904, $tmp2905);
        panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2906, &$s2907);
        panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2908, ((panda$core$Object*) left2645->type));
        panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
        panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2911, ((panda$core$Object*) right2646->type));
        panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
        (($fn2915) self->$class->vtable[95])(self, p_offset, $tmp2914);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2917 = (panda$collections$Array*) malloc(40);
    $tmp2917->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2917->refCount.value = 1;
    panda$collections$Array$init($tmp2917);
    children2916 = $tmp2917;
    panda$core$Bit $tmp2921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2645->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2920 = $tmp2921.value;
    if ($tmp2920) goto $l2922;
    panda$core$Bit $tmp2923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2645->kind, ((panda$core$Int64) { 1032 }));
    $tmp2920 = $tmp2923.value;
    $l2922:;
    panda$core$Bit $tmp2924 = { $tmp2920 };
    bool $tmp2919 = $tmp2924.value;
    if (!$tmp2919) goto $l2925;
    panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2646->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2926 = $tmp2927.value;
    if ($tmp2926) goto $l2928;
    panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2646->kind, ((panda$core$Int64) { 1032 }));
    $tmp2926 = $tmp2929.value;
    $l2928:;
    panda$core$Bit $tmp2930 = { $tmp2926 };
    $tmp2919 = $tmp2930.value;
    $l2925:;
    panda$core$Bit $tmp2931 = { $tmp2919 };
    if ($tmp2931.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2933 = (($fn2932) self->$class->vtable[49])(self, p_offset, left2645, p_op, right2646);
        return $tmp2933;
    }
    }
    panda$core$Bit $tmp2936 = (($fn2935) left2645->type->$class->vtable[7])(left2645->type);
    bool $tmp2934 = $tmp2936.value;
    if (!$tmp2934) goto $l2937;
    panda$core$Int64$nullable $tmp2939 = (($fn2938) self->$class->vtable[30])(self, right2646, left2645->type);
    $tmp2934 = ((panda$core$Bit) { $tmp2939.nonnull }).value;
    $l2937:;
    panda$core$Bit $tmp2940 = { $tmp2934 };
    if ($tmp2940.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2942 = (($fn2941) self->$class->vtable[32])(self, right2646, left2645->type);
        right2646 = $tmp2942;
        panda$collections$Array$add$panda$collections$Array$T(children2916, ((panda$core$Object*) left2645));
        panda$collections$Array$add$panda$collections$Array$T(children2916, ((panda$core$Object*) right2646));
        {
            $match$700332944 = p_op;
            panda$core$Bit $tmp2950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700332944, ((panda$core$Int64) { 58 }));
            bool $tmp2949 = $tmp2950.value;
            if ($tmp2949) goto $l2951;
            panda$core$Bit $tmp2952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700332944, ((panda$core$Int64) { 59 }));
            $tmp2949 = $tmp2952.value;
            $l2951:;
            panda$core$Bit $tmp2953 = { $tmp2949 };
            bool $tmp2948 = $tmp2953.value;
            if ($tmp2948) goto $l2954;
            panda$core$Bit $tmp2955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700332944, ((panda$core$Int64) { 63 }));
            $tmp2948 = $tmp2955.value;
            $l2954:;
            panda$core$Bit $tmp2956 = { $tmp2948 };
            bool $tmp2947 = $tmp2956.value;
            if ($tmp2947) goto $l2957;
            panda$core$Bit $tmp2958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700332944, ((panda$core$Int64) { 65 }));
            $tmp2947 = $tmp2958.value;
            $l2957:;
            panda$core$Bit $tmp2959 = { $tmp2947 };
            bool $tmp2946 = $tmp2959.value;
            if ($tmp2946) goto $l2960;
            panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700332944, ((panda$core$Int64) { 62 }));
            $tmp2946 = $tmp2961.value;
            $l2960:;
            panda$core$Bit $tmp2962 = { $tmp2946 };
            bool $tmp2945 = $tmp2962.value;
            if ($tmp2945) goto $l2963;
            panda$core$Bit $tmp2964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700332944, ((panda$core$Int64) { 64 }));
            $tmp2945 = $tmp2964.value;
            $l2963:;
            panda$core$Bit $tmp2965 = { $tmp2945 };
            if ($tmp2965.value) {
            {
                org$pandalanguage$pandac$Type* $tmp2966 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2943 = $tmp2966;
            }
            }
            else {
            {
                resultType2943 = left2645->type;
            }
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2967 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2967->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2967->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2967, ((panda$core$Int64) { 1023 }), p_offset, resultType2943, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2916));
        return $tmp2967;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2916, ((panda$core$Object*) right2646));
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2970 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2972 = (($fn2971) self->$class->vtable[39])(self, left2645, $tmp2970, ((panda$collections$ListView*) children2916));
    result2969 = $tmp2972;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2969 == NULL }).value) {
    {
        panda$collections$Array$clear(children2916);
        panda$collections$Array$add$panda$collections$Array$T(children2916, ((panda$core$Object*) left2645));
        org$pandalanguage$pandac$IRNode* $tmp2975 = (($fn2974) self->$class->vtable[8])(self, right2646);
        resolved2973 = $tmp2975;
        bool $tmp2976 = ((panda$core$Bit) { resolved2973 != NULL }).value;
        if (!$tmp2976) goto $l2977;
        panda$core$Bit $tmp2979 = (($fn2978) resolved2973->type->$class->vtable[8])(resolved2973->type);
        $tmp2976 = $tmp2979.value;
        $l2977:;
        panda$core$Bit $tmp2980 = { $tmp2976 };
        if ($tmp2980.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2916, ((panda$core$Object*) resolved2973));
            org$pandalanguage$pandac$IRNode* $tmp2982 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2982->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2982->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2984 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2982, ((panda$core$Int64) { 1001 }), resolved2973->offset, $tmp2984, resolved2973->type);
            target2981 = $tmp2982;
            panda$core$String* $tmp2985 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2987 = (($fn2986) self->$class->vtable[39])(self, target2981, $tmp2985, ((panda$collections$ListView*) children2916));
            result2969 = $tmp2987;
        }
        }
    }
    }
    return result2969;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2988;
    org$pandalanguage$pandac$IRNode* right2993;
    panda$core$Object* $tmp2990 = (($fn2989) p_b->children->$class->vtable[2])(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2992 = (($fn2991) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2990));
    left2988 = $tmp2992;
    if (((panda$core$Bit) { left2988 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2995 = (($fn2994) p_b->children->$class->vtable[2])(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2997 = (($fn2996) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2995));
    right2993 = $tmp2997;
    if (((panda$core$Bit) { right2993 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2999 = (($fn2998) self->$class->vtable[52])(self, p_b->offset, left2988, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2993);
    return $tmp2999;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range $tmp3006;
    panda$core$Bit $tmp3000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 22 }));
    if ($tmp3000.value) {
    {
        panda$core$Object* $tmp3002 = (($fn3001) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$collections$ListView* $tmp3004 = (($fn3003) self->$class->vtable[54])(self, ((org$pandalanguage$pandac$Type*) $tmp3002));
        return $tmp3004;
    }
    }
    panda$core$Bit $tmp3005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp3005.value) {
    {
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3006, (((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp3008 = (($fn3007) p_type->subtypes->$class->vtable[4])(p_type->subtypes, $tmp3006);
        return ((panda$collections$ListView*) $tmp3008);
    }
    }
    else {
    {
        panda$collections$Array* $tmp3009 = (panda$collections$Array*) malloc(40);
        $tmp3009->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3009->refCount.value = 1;
        panda$collections$Array$init($tmp3009);
        return ((panda$collections$ListView*) $tmp3009);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    org$pandalanguage$pandac$Type* type3014;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3011.value) {
        {
            panda$collections$ListView* $tmp3013 = (($fn3012) self->$class->vtable[54])(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3013;
        }
        }
        panda$core$Bit $tmp3015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3015.value) {
        {
            panda$core$Object* $tmp3017 = (($fn3016) p_target->type->subtypes->$class->vtable[2])(p_target->type->subtypes, ((panda$core$Int64) { 0 }));
            type3014 = ((org$pandalanguage$pandac$Type*) $tmp3017);
        }
        }
        else {
        {
            type3014 = p_target->type;
        }
        }
        panda$collections$ListView* $tmp3019 = (($fn3018) self->$class->vtable[54])(self, type3014);
        return $tmp3019;
    }
    }
    panda$collections$Array* $tmp3020 = (panda$collections$Array*) malloc(40);
    $tmp3020->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3020->refCount.value = 1;
    panda$collections$Array$init($tmp3020);
    return ((panda$collections$ListView*) $tmp3020);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name3024;
    org$pandalanguage$pandac$ClassDecl* cl3026;
    org$pandalanguage$pandac$Symbol* s3029;
    org$pandalanguage$pandac$MethodDecl* m3034;
    panda$core$Int64 $match$727113035;
    panda$collections$Iterator* test$Iter3038;
    org$pandalanguage$pandac$MethodDecl* test3050;
    org$pandalanguage$pandac$MethodRef* ref3064;
    panda$collections$Array* children3069;
    org$pandalanguage$pandac$IRNode* methodRef3072;
    panda$collections$Array* args3078;
    panda$core$Int64 $match$739373083;
    panda$core$Int64 $match$739973085;
    panda$collections$Array* children3094;
    panda$collections$Array* children3107;
    org$pandalanguage$pandac$IRNode* coerced3118;
    panda$collections$Array* children3122;
    panda$core$Bit $tmp3023 = (($fn3022) p_base->type->$class->vtable[8])(p_base->type);
    if ($tmp3023.value) {
    {
        panda$core$String* $tmp3025 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3024 = $tmp3025;
        org$pandalanguage$pandac$ClassDecl* $tmp3028 = (($fn3027) self->$class->vtable[13])(self, p_base->type);
        cl3026 = $tmp3028;
        if (((panda$core$Bit) { cl3026 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3031 = (($fn3030) self->$class->vtable[19])(self, cl3026);
        org$pandalanguage$pandac$Symbol* $tmp3033 = (($fn3032) $tmp3031->$class->vtable[6])($tmp3031, name3024);
        s3029 = $tmp3033;
        if (((panda$core$Bit) { s3029 != NULL }).value) {
        {
            m3034 = NULL;
            {
                $match$727113035 = s3029->kind;
                panda$core$Bit $tmp3036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727113035, ((panda$core$Int64) { 204 }));
                if ($tmp3036.value) {
                {
                    m3034 = ((org$pandalanguage$pandac$MethodDecl*) s3029);
                }
                }
                else {
                panda$core$Bit $tmp3037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727113035, ((panda$core$Int64) { 205 }));
                if ($tmp3037.value) {
                {
                    {
                        ITable* $tmp3039 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3029)->methods)->$class->itable;
                        while ($tmp3039->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3039 = $tmp3039->next;
                        }
                        $fn3041 $tmp3040 = $tmp3039->methods[0];
                        panda$collections$Iterator* $tmp3042 = $tmp3040(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3029)->methods));
                        test$Iter3038 = $tmp3042;
                        $l3043:;
                        ITable* $tmp3045 = test$Iter3038->$class->itable;
                        while ($tmp3045->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3045 = $tmp3045->next;
                        }
                        $fn3047 $tmp3046 = $tmp3045->methods[0];
                        panda$core$Bit $tmp3048 = $tmp3046(test$Iter3038);
                        panda$core$Bit $tmp3049 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3048);
                        if (!$tmp3049.value) goto $l3044;
                        {
                            ITable* $tmp3051 = test$Iter3038->$class->itable;
                            while ($tmp3051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3051 = $tmp3051->next;
                            }
                            $fn3053 $tmp3052 = $tmp3051->methods[1];
                            panda$core$Object* $tmp3054 = $tmp3052(test$Iter3038);
                            test3050 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3054);
                            panda$core$Bit $tmp3057 = (($fn3056) test3050->annotations->$class->vtable[5])(test3050->annotations);
                            panda$core$Bit $tmp3058 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3057);
                            bool $tmp3055 = $tmp3058.value;
                            if (!$tmp3055) goto $l3059;
                            panda$core$Int64 $tmp3060 = panda$collections$Array$get_count$R$panda$core$Int64(test3050->parameters);
                            panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3060, ((panda$core$Int64) { 0 }));
                            $tmp3055 = $tmp3061.value;
                            $l3059:;
                            panda$core$Bit $tmp3062 = { $tmp3055 };
                            if ($tmp3062.value) {
                            {
                                m3034 = test3050;
                                goto $l3044;
                            }
                            }
                        }
                        goto $l3043;
                        $l3044:;
                    }
                }
                }
                else {
                {
                }
                }
                }
            }
            if (((panda$core$Bit) { m3034 != NULL }).value) {
            {
                (($fn3063) self->$class->vtable[6])(self, m3034);
                org$pandalanguage$pandac$MethodRef* $tmp3065 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3065->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3065->refCount.value = 1;
                panda$collections$ListView* $tmp3068 = (($fn3067) self->$class->vtable[55])(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3065, m3034, $tmp3068);
                ref3064 = $tmp3065;
                panda$collections$Array* $tmp3070 = (panda$collections$Array*) malloc(40);
                $tmp3070->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3070->refCount.value = 1;
                panda$collections$Array$init($tmp3070);
                children3069 = $tmp3070;
                panda$collections$Array$add$panda$collections$Array$T(children3069, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3073 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3073->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3073->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3075 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp3075->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3075->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3075, &$s3077, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3073, ((panda$core$Int64) { 1002 }), p_offset, $tmp3075, ((panda$core$Object*) ref3064), ((panda$collections$ListView*) children3069));
                methodRef3072 = $tmp3073;
                panda$collections$Array* $tmp3079 = (panda$collections$Array*) malloc(40);
                $tmp3079->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3079->refCount.value = 1;
                panda$collections$Array$init($tmp3079);
                args3078 = $tmp3079;
                org$pandalanguage$pandac$IRNode* $tmp3082 = (($fn3081) self->$class->vtable[41])(self, methodRef3072, ((panda$collections$ListView*) args3078));
                return $tmp3082;
            }
            }
        }
        }
    }
    }
    {
        $match$739373083 = p_op;
        panda$core$Bit $tmp3084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739373083, ((panda$core$Int64) { 52 }));
        if ($tmp3084.value) {
        {
            {
                $match$739973085 = p_base->kind;
                panda$core$Bit $tmp3086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739973085, ((panda$core$Int64) { 1004 }));
                if ($tmp3086.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3087 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3087->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3087->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3087, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3087;
                }
                }
                else {
                panda$core$Bit $tmp3089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739973085, ((panda$core$Int64) { 1032 }));
                if ($tmp3089.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3090 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3090->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3090->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3090, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3090;
                }
                }
                else {
                {
                    panda$core$Bit $tmp3093 = (($fn3092) p_base->type->$class->vtable[7])(p_base->type);
                    if ($tmp3093.value) {
                    {
                        panda$collections$Array* $tmp3095 = (panda$collections$Array*) malloc(40);
                        $tmp3095->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3095->refCount.value = 1;
                        panda$collections$Array$init($tmp3095);
                        children3094 = $tmp3095;
                        panda$collections$Array$add$panda$collections$Array$T(children3094, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3097 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp3097->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3097->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3097, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3094));
                        return $tmp3097;
                    }
                    }
                }
                }
                }
            }
            panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3099, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
            (($fn3103) self->$class->vtable[95])(self, p_base->offset, $tmp3102);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp3104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739373083, ((panda$core$Int64) { 50 }));
        if ($tmp3104.value) {
        {
            panda$core$Bit $tmp3106 = (($fn3105) p_base->type->$class->vtable[7])(p_base->type);
            if ($tmp3106.value) {
            {
                panda$collections$Array* $tmp3108 = (panda$collections$Array*) malloc(40);
                $tmp3108->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3108->refCount.value = 1;
                panda$collections$Array$init($tmp3108);
                children3107 = $tmp3108;
                panda$collections$Array$add$panda$collections$Array$T(children3107, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3110 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3110->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3110->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3110, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3107));
                return $tmp3110;
            }
            }
            else {
            {
                panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3112, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, &$s3114);
                (($fn3116) self->$class->vtable[95])(self, p_base->offset, $tmp3115);
                return NULL;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739373083, ((panda$core$Int64) { 49 }));
        if ($tmp3117.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3119 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3121 = (($fn3120) self->$class->vtable[32])(self, p_base, $tmp3119);
            coerced3118 = $tmp3121;
            if (((panda$core$Bit) { coerced3118 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3123 = (panda$collections$Array*) malloc(40);
            $tmp3123->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3123->refCount.value = 1;
            panda$collections$Array$init($tmp3123);
            children3122 = $tmp3123;
            panda$collections$Array$add$panda$collections$Array$T(children3122, ((panda$core$Object*) coerced3118));
            org$pandalanguage$pandac$IRNode* $tmp3125 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3125->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3125->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3125, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3122));
            return $tmp3125;
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
    org$pandalanguage$pandac$IRNode* base3127;
    panda$core$Object* $tmp3129 = (($fn3128) p_p->children->$class->vtable[2])(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3131 = (($fn3130) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3129));
    base3127 = $tmp3131;
    if (((panda$core$Bit) { base3127 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3133 = (($fn3132) self->$class->vtable[56])(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3127, p_p->offset);
    return $tmp3133;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3134;
    panda$collections$Array* args3139;
    panda$core$Range $tmp3142;
    org$pandalanguage$pandac$IRNode* arg3163;
    panda$core$Object* $tmp3136 = (($fn3135) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3138 = (($fn3137) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3136));
    m3134 = $tmp3138;
    if (((panda$core$Bit) { m3134 != NULL }).value) {
    {
        panda$collections$Array* $tmp3140 = (panda$collections$Array*) malloc(40);
        $tmp3140->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3140->refCount.value = 1;
        panda$collections$Array$init($tmp3140);
        args3139 = $tmp3140;
        panda$core$Int64 $tmp3144 = (($fn3143) p_c->children->$class->vtable[3])(p_c->children);
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3142, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp3144)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3146 = ((panda$core$Int64$wrapper*) $tmp3142.start)->value.value;
        panda$core$Int64 i3145 = { $tmp3146 };
        int64_t $tmp3148 = ((panda$core$Int64$wrapper*) $tmp3142.end)->value.value;
        int64_t $tmp3149 = $tmp3142.step.value;
        bool $tmp3150 = $tmp3142.inclusive.value;
        bool $tmp3157 = $tmp3149 > 0;
        if ($tmp3157) goto $l3155; else goto $l3156;
        $l3155:;
        if ($tmp3150) goto $l3158; else goto $l3159;
        $l3158:;
        if ($tmp3146 <= $tmp3148) goto $l3151; else goto $l3153;
        $l3159:;
        if ($tmp3146 < $tmp3148) goto $l3151; else goto $l3153;
        $l3156:;
        if ($tmp3150) goto $l3160; else goto $l3161;
        $l3160:;
        if ($tmp3146 >= $tmp3148) goto $l3151; else goto $l3153;
        $l3161:;
        if ($tmp3146 > $tmp3148) goto $l3151; else goto $l3153;
        $l3151:;
        {
            panda$core$Object* $tmp3165 = (($fn3164) p_c->children->$class->vtable[2])(p_c->children, i3145);
            org$pandalanguage$pandac$IRNode* $tmp3167 = (($fn3166) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3165));
            arg3163 = $tmp3167;
            if (((panda$core$Bit) { arg3163 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3139, ((panda$core$Object*) arg3163));
        }
        $l3154:;
        if ($tmp3157) goto $l3169; else goto $l3170;
        $l3169:;
        int64_t $tmp3171 = $tmp3148 - i3145.value;
        if ($tmp3150) goto $l3172; else goto $l3173;
        $l3172:;
        if ($tmp3171 >= $tmp3149) goto $l3168; else goto $l3153;
        $l3173:;
        if ($tmp3171 > $tmp3149) goto $l3168; else goto $l3153;
        $l3170:;
        int64_t $tmp3175 = i3145.value - $tmp3148;
        if ($tmp3150) goto $l3176; else goto $l3177;
        $l3176:;
        if ($tmp3175 >= -$tmp3149) goto $l3168; else goto $l3153;
        $l3177:;
        if ($tmp3175 > -$tmp3149) goto $l3168; else goto $l3153;
        $l3168:;
        i3145.value += $tmp3149;
        goto $l3151;
        $l3153:;
        org$pandalanguage$pandac$IRNode* $tmp3180 = (($fn3179) self->$class->vtable[41])(self, m3134, ((panda$collections$ListView*) args3139));
        return $tmp3180;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3181;
    org$pandalanguage$pandac$ClassDecl* cl3193;
    panda$core$Int64 $match$771323194;
    panda$core$String* name3199;
    org$pandalanguage$pandac$ClassDecl* cl3207;
    org$pandalanguage$pandac$Symbol* s3225;
    panda$core$Object* $tmp3183 = (($fn3182) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3185 = (($fn3184) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3183));
    base3181 = $tmp3185;
    if (((panda$core$Bit) { base3181 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3187 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3181->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3186 = $tmp3187.value;
    if (!$tmp3186) goto $l3188;
    panda$core$Bit $tmp3189 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3181->kind, ((panda$core$Int64) { 1024 }));
    $tmp3186 = $tmp3189.value;
    $l3188:;
    panda$core$Bit $tmp3190 = { $tmp3186 };
    if ($tmp3190.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3192 = (($fn3191) self->$class->vtable[8])(self, base3181);
        base3181 = $tmp3192;
    }
    }
    if (((panda$core$Bit) { base3181 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$771323194 = base3181->kind;
        panda$core$Bit $tmp3195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$771323194, ((panda$core$Int64) { 1001 }));
        if ($tmp3195.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3197 = (($fn3196) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$Type*) base3181->payload));
            cl3193 = $tmp3197;
        }
        }
        else {
        panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$771323194, ((panda$core$Int64) { 1037 }));
        if ($tmp3198.value) {
        {
            panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3200, base3181->payload);
            panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
            panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3203, p_d->payload);
            panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
            name3199 = $tmp3206;
            org$pandalanguage$pandac$ClassDecl* $tmp3209 = (($fn3208) self->$class->vtable[3])(self, name3199);
            cl3207 = $tmp3209;
            if (((panda$core$Bit) { cl3207 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3210 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3210->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3210->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3212 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3214 = (($fn3213) cl3207->$class->vtable[3])(cl3207);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3210, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp3212, $tmp3214);
                return $tmp3210;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3215 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3215->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3215->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3217 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3215, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp3217, name3199);
            return $tmp3215;
        }
        }
        else {
        panda$core$Bit $tmp3218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$771323194, ((panda$core$Int64) { 1024 }));
        if ($tmp3218.value) {
        {
            panda$core$Object* $tmp3220 = (($fn3219) self->currentClass->$class->vtable[4])(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3222 = (($fn3221) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3220)->rawSuper);
            cl3193 = $tmp3222;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3224 = (($fn3223) self->$class->vtable[13])(self, base3181->type);
            cl3193 = $tmp3224;
        }
        }
        }
        }
    }
    if (((panda$core$Bit) { cl3193 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3227 = (($fn3226) self->$class->vtable[19])(self, cl3193);
    org$pandalanguage$pandac$Symbol* $tmp3229 = (($fn3228) $tmp3227->$class->vtable[6])($tmp3227, ((panda$core$String*) p_d->payload));
    s3225 = $tmp3229;
    if (((panda$core$Bit) { s3225 == NULL }).value) {
    {
        panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3230, ((panda$core$Object*) base3181->type));
        panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3232);
        panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3234, p_d->payload);
        panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3236);
        panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3233, $tmp3237);
        (($fn3239) self->$class->vtable[95])(self, p_d->offset, $tmp3238);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3241 = (($fn3240) self->$class->vtable[19])(self, cl3193);
    org$pandalanguage$pandac$IRNode* $tmp3243 = (($fn3242) self->$class->vtable[23])(self, p_d->offset, base3181, s3225, $tmp3241);
    return $tmp3243;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3244;
    org$pandalanguage$pandac$Symbol* $tmp3246 = (($fn3245) self->symbolTable->$class->vtable[6])(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3244 = $tmp3246;
    if (((panda$core$Bit) { s3244 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3248 = (($fn3247) self->$class->vtable[3])(self, ((panda$core$String*) p_i->payload));
        s3244 = ((org$pandalanguage$pandac$Symbol*) $tmp3248);
    }
    }
    if (((panda$core$Bit) { s3244 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3250 = (($fn3249) self->$class->vtable[23])(self, p_i->offset, NULL, s3244, self->symbolTable);
        return $tmp3250;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3251 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3251->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3251->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3253 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3251, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp3253, ((panda$core$String*) p_i->payload));
    return $tmp3251;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$IRNode* $tmp3254 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3254->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3254->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3256 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp3258 = (($fn3257) self->scanner->$class->vtable[2])(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3260 = (($fn3259) self->$class->vtable[4])(self, $tmp3258);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3254, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp3256, $tmp3260);
    return $tmp3254;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3261;
    org$pandalanguage$pandac$IRNode* end3272;
    org$pandalanguage$pandac$IRNode* step3283;
    panda$collections$Array* children3297;
    panda$core$Object* $tmp3263 = (($fn3262) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3263)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3264.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3265 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3265->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3265->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3267 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3265, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp3267);
        start3261 = $tmp3265;
    }
    }
    else {
    {
        panda$core$Object* $tmp3269 = (($fn3268) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3271 = (($fn3270) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3269));
        start3261 = $tmp3271;
        if (((panda$core$Bit) { start3261 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3274 = (($fn3273) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3274)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3275.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3276 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3276->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3276->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3278 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3276, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp3278);
        end3272 = $tmp3276;
    }
    }
    else {
    {
        panda$core$Object* $tmp3280 = (($fn3279) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3282 = (($fn3281) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3280));
        end3272 = $tmp3282;
        if (((panda$core$Bit) { end3272 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3285 = (($fn3284) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3285)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3286.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3287 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3287->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3287->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3289 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3287, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp3289, ((panda$core$UInt64) { 1 }));
        step3283 = $tmp3287;
    }
    }
    else {
    {
        panda$core$Object* $tmp3291 = (($fn3290) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3293 = (($fn3292) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3291));
        org$pandalanguage$pandac$Type* $tmp3294 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3296 = (($fn3295) self->$class->vtable[32])(self, $tmp3293, $tmp3294);
        step3283 = $tmp3296;
        if (((panda$core$Bit) { step3283 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3298 = (panda$collections$Array*) malloc(40);
    $tmp3298->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3298->refCount.value = 1;
    panda$collections$Array$init($tmp3298);
    children3297 = $tmp3298;
    panda$collections$Array$add$panda$collections$Array$T(children3297, ((panda$core$Object*) start3261));
    panda$collections$Array$add$panda$collections$Array$T(children3297, ((panda$core$Object*) end3272));
    panda$collections$Array$add$panda$collections$Array$T(children3297, ((panda$core$Object*) step3283));
    org$pandalanguage$pandac$IRNode* $tmp3300 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3300->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3300->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3302 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp3302->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3302->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3302, &$s3304, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3300, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp3302, ((panda$core$Object*) wrap_panda$core$Bit($tmp3305)), ((panda$collections$ListView*) children3297));
    return $tmp3300;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3306 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3306->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3306->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3308 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3306, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp3308, ((panda$core$String*) p_s->payload));
    return $tmp3306;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3315;
    org$pandalanguage$pandac$ClassDecl* cl3316;
    panda$collections$Array* subtypes3324;
    panda$core$MutableString* name3329;
    panda$core$String* separator3334;
    panda$collections$Iterator* p$Iter3336;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3348;
    panda$collections$Array* pType3353;
    panda$core$String* pName3356;
    panda$core$Object* $tmp3310 = (($fn3309) self->currentMethod->$class->vtable[4])(self->currentMethod);
    panda$core$Bit $tmp3312 = (($fn3311) ((org$pandalanguage$pandac$MethodDecl*) $tmp3310)->annotations->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp3310)->annotations);
    if ($tmp3312.value) {
    {
        (($fn3314) self->$class->vtable[95])(self, p_s->offset, &$s3313);
        return NULL;
    }
    }
    panda$core$Object* $tmp3318 = (($fn3317) self->currentClass->$class->vtable[4])(self->currentClass);
    cl3316 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3318);
    ITable* $tmp3319 = ((panda$collections$CollectionView*) cl3316->parameters)->$class->itable;
    while ($tmp3319->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3319 = $tmp3319->next;
    }
    $fn3321 $tmp3320 = $tmp3319->methods[0];
    panda$core$Int64 $tmp3322 = $tmp3320(((panda$collections$CollectionView*) cl3316->parameters));
    panda$core$Bit $tmp3323 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3322, ((panda$core$Int64) { 0 }));
    if ($tmp3323.value) {
    {
        panda$collections$Array* $tmp3325 = (panda$collections$Array*) malloc(40);
        $tmp3325->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3325->refCount.value = 1;
        panda$collections$Array$init($tmp3325);
        subtypes3324 = $tmp3325;
        org$pandalanguage$pandac$Type* $tmp3328 = (($fn3327) cl3316->$class->vtable[3])(cl3316);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3324, ((panda$core$Object*) $tmp3328));
        panda$core$MutableString* $tmp3330 = (panda$core$MutableString*) malloc(40);
        $tmp3330->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3330->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3330, ((org$pandalanguage$pandac$Symbol*) cl3316)->name);
        name3329 = $tmp3330;
        (($fn3333) name3329->$class->vtable[3])(name3329, &$s3332);
        separator3334 = &$s3335;
        {
            ITable* $tmp3337 = ((panda$collections$Iterable*) cl3316->parameters)->$class->itable;
            while ($tmp3337->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3337 = $tmp3337->next;
            }
            $fn3339 $tmp3338 = $tmp3337->methods[0];
            panda$collections$Iterator* $tmp3340 = $tmp3338(((panda$collections$Iterable*) cl3316->parameters));
            p$Iter3336 = $tmp3340;
            $l3341:;
            ITable* $tmp3343 = p$Iter3336->$class->itable;
            while ($tmp3343->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3343 = $tmp3343->next;
            }
            $fn3345 $tmp3344 = $tmp3343->methods[0];
            panda$core$Bit $tmp3346 = $tmp3344(p$Iter3336);
            panda$core$Bit $tmp3347 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3346);
            if (!$tmp3347.value) goto $l3342;
            {
                ITable* $tmp3349 = p$Iter3336->$class->itable;
                while ($tmp3349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3349 = $tmp3349->next;
                }
                $fn3351 $tmp3350 = $tmp3349->methods[1];
                panda$core$Object* $tmp3352 = $tmp3350(p$Iter3336);
                p3348 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3352);
                panda$collections$Array* $tmp3354 = (panda$collections$Array*) malloc(40);
                $tmp3354->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3354->refCount.value = 1;
                panda$collections$Array$init($tmp3354);
                pType3353 = $tmp3354;
                panda$collections$Array$add$panda$collections$Array$T(pType3353, ((panda$core$Object*) p3348->bound));
                panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3357, ((org$pandalanguage$pandac$Symbol*) cl3316)->name);
                panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, &$s3359);
                panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, ((org$pandalanguage$pandac$Symbol*) p3348)->name);
                panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, &$s3362);
                pName3356 = $tmp3363;
                (($fn3364) name3329->$class->vtable[3])(name3329, separator3334);
                (($fn3365) name3329->$class->vtable[3])(name3329, pName3356);
                org$pandalanguage$pandac$Type* $tmp3366 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp3366->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3366->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3366, pName3356, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p3348)->offset, ((panda$collections$ListView*) pType3353), ((panda$core$Bit) { true }));
                panda$collections$Array$add$panda$collections$Array$T(subtypes3324, ((panda$core$Object*) $tmp3366));
                separator3334 = &$s3368;
            }
            goto $l3341;
            $l3342:;
        }
        (($fn3370) name3329->$class->vtable[3])(name3329, &$s3369);
        org$pandalanguage$pandac$Type* $tmp3371 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp3371->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3371->refCount.value = 1;
        panda$core$String* $tmp3374 = (($fn3373) name3329->$class->vtable[0])(name3329);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3371, $tmp3374, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes3324), ((panda$core$Bit) { true }));
        type3315 = $tmp3371;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3376 = (($fn3375) cl3316->$class->vtable[3])(cl3316);
        type3315 = $tmp3376;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3377 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3377->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3377->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3377, ((panda$core$Int64) { 1025 }), p_s->offset, type3315);
    return $tmp3377;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3385;
    panda$core$Object* $tmp3380 = (($fn3379) self->currentMethod->$class->vtable[4])(self->currentMethod);
    panda$core$Bit $tmp3382 = (($fn3381) ((org$pandalanguage$pandac$MethodDecl*) $tmp3380)->annotations->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp3380)->annotations);
    if ($tmp3382.value) {
    {
        (($fn3384) self->$class->vtable[95])(self, p_s->offset, &$s3383);
        return NULL;
    }
    }
    panda$core$Object* $tmp3387 = (($fn3386) self->currentClass->$class->vtable[4])(self->currentClass);
    cl3385 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3387);
    org$pandalanguage$pandac$IRNode* $tmp3388 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3388->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3388->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3388, ((panda$core$Int64) { 1024 }), p_s->offset, cl3385->rawSuper);
    return $tmp3388;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3390;
    org$pandalanguage$pandac$Type* type3395;
    panda$core$Object* $tmp3392 = (($fn3391) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3394 = (($fn3393) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3392));
    value3390 = $tmp3394;
    if (((panda$core$Bit) { value3390 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3397 = (($fn3396) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3399 = (($fn3398) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3397));
    org$pandalanguage$pandac$Type* $tmp3401 = (($fn3400) self->$class->vtable[4])(self, $tmp3399);
    type3395 = $tmp3401;
    panda$core$Int64$nullable $tmp3403 = (($fn3402) self->$class->vtable[30])(self, value3390, type3395);
    if (((panda$core$Bit) { $tmp3403.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3405 = (($fn3404) self->$class->vtable[32])(self, value3390, type3395);
        return $tmp3405;
    }
    }
    panda$core$Bit $tmp3407 = (($fn3406) self->$class->vtable[34])(self, value3390, type3395);
    if ($tmp3407.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3409 = (($fn3408) self->$class->vtable[35])(self, value3390, p_c->offset, ((panda$core$Bit) { true }), type3395);
        return $tmp3409;
    }
    }
    else {
    {
        panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3410, ((panda$core$Object*) value3390->type));
        panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, &$s3412);
        panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3414, ((panda$core$Object*) type3395));
        panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, &$s3416);
        panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, $tmp3417);
        (($fn3419) self->$class->vtable[95])(self, p_c->offset, $tmp3418);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    org$pandalanguage$pandac$IRNode* $tmp3420 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3420->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3420->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3422 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3420, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp3422);
    return $tmp3420;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    panda$core$Int64 $match$829513423;
    {
        $match$829513423 = p_e->kind;
        panda$core$Bit $tmp3424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 103 }));
        if ($tmp3424.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3426 = (($fn3425) self->$class->vtable[53])(self, p_e);
            return $tmp3426;
        }
        }
        else {
        panda$core$Bit $tmp3427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 116 }));
        if ($tmp3427.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3428 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3428->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3428->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3430 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3428, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp3430, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3428;
        }
        }
        else {
        panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 107 }));
        if ($tmp3431.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3433 = (($fn3432) self->$class->vtable[58])(self, p_e);
            return $tmp3433;
        }
        }
        else {
        panda$core$Bit $tmp3434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 108 }));
        if ($tmp3434.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3436 = (($fn3435) self->$class->vtable[59])(self, p_e);
            return $tmp3436;
        }
        }
        else {
        panda$core$Bit $tmp3437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 106 }));
        if ($tmp3437.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3439 = (($fn3438) self->$class->vtable[60])(self, p_e);
            return $tmp3439;
        }
        }
        else {
        panda$core$Bit $tmp3440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 102 }));
        if ($tmp3440.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3441 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3441->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3441->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3443 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3441, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp3443, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3441;
        }
        }
        else {
        panda$core$Bit $tmp3444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 112 }));
        if ($tmp3444.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3446 = (($fn3445) self->$class->vtable[57])(self, p_e);
            return $tmp3446;
        }
        }
        else {
        panda$core$Bit $tmp3448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 104 }));
        bool $tmp3447 = $tmp3448.value;
        if ($tmp3447) goto $l3449;
        panda$core$Bit $tmp3450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 105 }));
        $tmp3447 = $tmp3450.value;
        $l3449:;
        panda$core$Bit $tmp3451 = { $tmp3447 };
        if ($tmp3451.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3453 = (($fn3452) self->$class->vtable[62])(self, p_e);
            return $tmp3453;
        }
        }
        else {
        panda$core$Bit $tmp3454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 113 }));
        if ($tmp3454.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3456 = (($fn3455) self->$class->vtable[63])(self, p_e);
            return $tmp3456;
        }
        }
        else {
        panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 109 }));
        bool $tmp3458 = $tmp3459.value;
        if ($tmp3458) goto $l3460;
        panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 154 }));
        $tmp3458 = $tmp3461.value;
        $l3460:;
        panda$core$Bit $tmp3462 = { $tmp3458 };
        bool $tmp3457 = $tmp3462.value;
        if ($tmp3457) goto $l3463;
        panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 110 }));
        $tmp3457 = $tmp3464.value;
        $l3463:;
        panda$core$Bit $tmp3465 = { $tmp3457 };
        if ($tmp3465.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3467 = (($fn3466) self->$class->vtable[61])(self, p_e);
            return $tmp3467;
        }
        }
        else {
        panda$core$Bit $tmp3468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 114 }));
        if ($tmp3468.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3470 = (($fn3469) self->$class->vtable[64])(self, p_e);
            return $tmp3470;
        }
        }
        else {
        panda$core$Bit $tmp3471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 115 }));
        if ($tmp3471.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3473 = (($fn3472) self->$class->vtable[65])(self, p_e);
            return $tmp3473;
        }
        }
        else {
        panda$core$Bit $tmp3474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 111 }));
        if ($tmp3474.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3476 = (($fn3475) self->$class->vtable[66])(self, p_e);
            return $tmp3476;
        }
        }
        else {
        panda$core$Bit $tmp3477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$829513423, ((panda$core$Int64) { 117 }));
        if ($tmp3477.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3479 = (($fn3478) self->$class->vtable[67])(self, p_e);
            return $tmp3479;
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
    org$pandalanguage$pandac$SymbolTable* symbols3480;
    panda$collections$Array* result3483;
    panda$collections$Iterator* stmt$Iter3486;
    org$pandalanguage$pandac$ASTNode* stmt3498;
    org$pandalanguage$pandac$IRNode* compiled3503;
    org$pandalanguage$pandac$SymbolTable* $tmp3481 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3481->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3481->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3481, self->symbolTable);
    symbols3480 = $tmp3481;
    self->symbolTable = symbols3480;
    panda$collections$Array* $tmp3484 = (panda$collections$Array*) malloc(40);
    $tmp3484->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3484->refCount.value = 1;
    panda$collections$Array$init($tmp3484);
    result3483 = $tmp3484;
    {
        ITable* $tmp3487 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3487->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3487 = $tmp3487->next;
        }
        $fn3489 $tmp3488 = $tmp3487->methods[0];
        panda$collections$Iterator* $tmp3490 = $tmp3488(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3486 = $tmp3490;
        $l3491:;
        ITable* $tmp3493 = stmt$Iter3486->$class->itable;
        while ($tmp3493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3493 = $tmp3493->next;
        }
        $fn3495 $tmp3494 = $tmp3493->methods[0];
        panda$core$Bit $tmp3496 = $tmp3494(stmt$Iter3486);
        panda$core$Bit $tmp3497 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3496);
        if (!$tmp3497.value) goto $l3492;
        {
            ITable* $tmp3499 = stmt$Iter3486->$class->itable;
            while ($tmp3499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3499 = $tmp3499->next;
            }
            $fn3501 $tmp3500 = $tmp3499->methods[1];
            panda$core$Object* $tmp3502 = $tmp3500(stmt$Iter3486);
            stmt3498 = ((org$pandalanguage$pandac$ASTNode*) $tmp3502);
            org$pandalanguage$pandac$IRNode* $tmp3505 = (($fn3504) self->$class->vtable[87])(self, stmt3498);
            compiled3503 = $tmp3505;
            if (((panda$core$Bit) { compiled3503 == NULL }).value) {
            {
                panda$core$Object* $tmp3506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3480->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3506);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3483, ((panda$core$Object*) compiled3503));
        }
        goto $l3491;
        $l3492:;
    }
    panda$core$Object* $tmp3507 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3480->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3507);
    org$pandalanguage$pandac$IRNode* $tmp3508 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3508->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3508->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3508, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result3483));
    return $tmp3508;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3510;
    org$pandalanguage$pandac$IRNode* ifTrue3518;
    panda$collections$Array* children3523;
    org$pandalanguage$pandac$IRNode* ifFalse3529;
    panda$core$Object* $tmp3512 = (($fn3511) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3514 = (($fn3513) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3512));
    org$pandalanguage$pandac$Type* $tmp3515 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3517 = (($fn3516) self->$class->vtable[32])(self, $tmp3514, $tmp3515);
    test3510 = $tmp3517;
    if (((panda$core$Bit) { test3510 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3520 = (($fn3519) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3522 = (($fn3521) self->$class->vtable[87])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3520));
    ifTrue3518 = $tmp3522;
    panda$collections$Array* $tmp3524 = (panda$collections$Array*) malloc(40);
    $tmp3524->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3524->refCount.value = 1;
    panda$collections$Array$init($tmp3524);
    children3523 = $tmp3524;
    panda$collections$Array$add$panda$collections$Array$T(children3523, ((panda$core$Object*) test3510));
    panda$collections$Array$add$panda$collections$Array$T(children3523, ((panda$core$Object*) ifTrue3518));
    panda$core$Int64 $tmp3527 = (($fn3526) p_i->children->$class->vtable[3])(p_i->children);
    panda$core$Bit $tmp3528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3527, ((panda$core$Int64) { 3 }));
    if ($tmp3528.value) {
    {
        panda$core$Object* $tmp3531 = (($fn3530) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3533 = (($fn3532) self->$class->vtable[87])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3531));
        ifFalse3529 = $tmp3533;
        if (((panda$core$Bit) { ifFalse3529 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3523, ((panda$core$Object*) ifFalse3529));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3534 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3534->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3534, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children3523));
    return $tmp3534;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3536;
    org$pandalanguage$pandac$IRNode* list3537;
    org$pandalanguage$pandac$Type* t3545;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3564;
    org$pandalanguage$pandac$IRNode* body3567;
    panda$collections$Array* children3570;
    panda$core$Bit $tmp3539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3538 = $tmp3539.value;
    if (!$tmp3538) goto $l3540;
    panda$core$Int64 $tmp3542 = (($fn3541) p_astTarget->children->$class->vtable[3])(p_astTarget->children);
    panda$core$Bit $tmp3543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3542, ((panda$core$Int64) { 1 }));
    $tmp3538 = $tmp3543.value;
    $l3540:;
    panda$core$Bit $tmp3544 = { $tmp3538 };
    if ($tmp3544.value) {
    {
        panda$core$Object* $tmp3547 = (($fn3546) p_astTarget->children->$class->vtable[2])(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3549 = (($fn3548) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3547));
        org$pandalanguage$pandac$Type* $tmp3551 = (($fn3550) self->$class->vtable[4])(self, $tmp3549);
        t3545 = $tmp3551;
        org$pandalanguage$pandac$Type* $tmp3552 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3545);
        org$pandalanguage$pandac$IRNode* $tmp3554 = (($fn3553) self->$class->vtable[32])(self, p_rawList, $tmp3552);
        list3537 = $tmp3554;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3556 = (($fn3555) self->$class->vtable[8])(self, p_rawList);
        list3537 = $tmp3556;
    }
    }
    if (((panda$core$Bit) { list3537 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3537->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3557.value) {
    {
        panda$core$Object* $tmp3559 = (($fn3558) list3537->type->subtypes->$class->vtable[2])(list3537->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3561 = (($fn3560) ((org$pandalanguage$pandac$Type*) $tmp3559)->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$Type*) $tmp3559)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3536 = ((org$pandalanguage$pandac$Type*) $tmp3561);
    }
    }
    else {
    {
        panda$core$Object* $tmp3563 = (($fn3562) list3537->type->subtypes->$class->vtable[2])(list3537->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3536 = ((org$pandalanguage$pandac$Type*) $tmp3563);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3566 = (($fn3565) self->$class->vtable[77])(self, p_astTarget, NULL, elementType3536);
    target3564 = $tmp3566;
    if (((panda$core$Bit) { target3564 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3569 = (($fn3568) self->$class->vtable[87])(self, p_body);
    body3567 = $tmp3569;
    if (((panda$core$Bit) { body3567 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3571 = (panda$collections$Array*) malloc(40);
    $tmp3571->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3571->refCount.value = 1;
    panda$collections$Array$init($tmp3571);
    children3570 = $tmp3571;
    panda$collections$Array$add$panda$collections$Array$T(children3570, ((panda$core$Object*) target3564->target));
    panda$collections$Array$add$panda$collections$Array$T(children3570, ((panda$core$Object*) list3537));
    panda$collections$Array$add$panda$collections$Array$T(children3570, ((panda$core$Object*) body3567));
    org$pandalanguage$pandac$IRNode* $tmp3573 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3573->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3573->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3573, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3570));
    return $tmp3573;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3575;
    org$pandalanguage$pandac$Variable* targetVar3580;
    panda$collections$Array* subtypes3581;
    org$pandalanguage$pandac$Type* iterType3585;
    org$pandalanguage$pandac$Variable* iter3597;
    panda$collections$Array* statements3603;
    panda$collections$Array* declChildren3606;
    panda$collections$Array* varChildren3611;
    panda$collections$Array* whileChildren3618;
    org$pandalanguage$pandac$IRNode* done3621;
    org$pandalanguage$pandac$IRNode* notCall3629;
    panda$collections$Array* valueDeclChildren3635;
    org$pandalanguage$pandac$IRNode* next3640;
    panda$collections$Array* valueVarChildren3648;
    org$pandalanguage$pandac$IRNode* block3653;
    panda$collections$Array* blockChildren3656;
    panda$core$Object* $tmp3577 = (($fn3576) p_iterator->type->subtypes->$class->vtable[2])(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3579 = (($fn3578) self->$class->vtable[77])(self, p_astTarget, NULL, ((org$pandalanguage$pandac$Type*) $tmp3577));
    target3575 = $tmp3579;
    if (((panda$core$Bit) { target3575 == NULL }).value) {
    {
        return NULL;
    }
    }
    targetVar3580 = ((org$pandalanguage$pandac$Variable*) target3575->target->payload);
    panda$collections$Array* $tmp3582 = (panda$collections$Array*) malloc(40);
    $tmp3582->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3582->refCount.value = 1;
    panda$collections$Array$init($tmp3582);
    subtypes3581 = $tmp3582;
    org$pandalanguage$pandac$Type* $tmp3584 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3581, ((panda$core$Object*) $tmp3584));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3581, ((panda$core$Object*) target3575->target->type));
    org$pandalanguage$pandac$Type* $tmp3586 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp3586->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3586->refCount.value = 1;
    panda$core$Object* $tmp3589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3581, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3588, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3589)));
    panda$core$String* $tmp3592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3590, &$s3591);
    panda$core$Object* $tmp3593 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3581, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3592, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3593)));
    panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, &$s3595);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3586, $tmp3596, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes3581), ((panda$core$Bit) { true }));
    iterType3585 = $tmp3586;
    org$pandalanguage$pandac$Variable* $tmp3598 = (org$pandalanguage$pandac$Variable*) malloc(56);
    $tmp3598->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3598->refCount.value = 1;
    panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3580)->name, &$s3600);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3598, p_iterator->offset, $tmp3601, iterType3585);
    iter3597 = $tmp3598;
    (($fn3602) self->symbolTable->$class->vtable[2])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3597));
    panda$collections$Array* $tmp3604 = (panda$collections$Array*) malloc(40);
    $tmp3604->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3604->refCount.value = 1;
    panda$collections$Array$init($tmp3604);
    statements3603 = $tmp3604;
    panda$collections$Array* $tmp3607 = (panda$collections$Array*) malloc(40);
    $tmp3607->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3607->refCount.value = 1;
    panda$collections$Array$init($tmp3607);
    declChildren3606 = $tmp3607;
    org$pandalanguage$pandac$IRNode* $tmp3609 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3609->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3609->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3609, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3597->type, iter3597);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3606, ((panda$core$Object*) $tmp3609));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3606, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3612 = (panda$collections$Array*) malloc(40);
    $tmp3612->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3612->refCount.value = 1;
    panda$collections$Array$init($tmp3612);
    varChildren3611 = $tmp3612;
    org$pandalanguage$pandac$IRNode* $tmp3614 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3614->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3614->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3614, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3597)->offset, ((panda$collections$ListView*) declChildren3606));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3611, ((panda$core$Object*) $tmp3614));
    org$pandalanguage$pandac$IRNode* $tmp3616 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3616->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3616->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3616, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3597)->offset, ((panda$collections$ListView*) varChildren3611));
    panda$collections$Array$add$panda$collections$Array$T(statements3603, ((panda$core$Object*) $tmp3616));
    panda$collections$Array* $tmp3619 = (panda$collections$Array*) malloc(40);
    $tmp3619->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3619->refCount.value = 1;
    panda$collections$Array$init($tmp3619);
    whileChildren3618 = $tmp3619;
    org$pandalanguage$pandac$IRNode* $tmp3622 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3622->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3622->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3622, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3597)->offset, iter3597->type, iter3597);
    panda$collections$Array* $tmp3625 = (panda$collections$Array*) malloc(40);
    $tmp3625->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3625->refCount.value = 1;
    panda$collections$Array$init($tmp3625);
    org$pandalanguage$pandac$IRNode* $tmp3628 = (($fn3627) self->$class->vtable[40])(self, $tmp3622, &$s3624, ((panda$collections$ListView*) $tmp3625), NULL);
    done3621 = $tmp3628;
    if (((panda$core$Bit) { done3621 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3631 = (panda$collections$Array*) malloc(40);
    $tmp3631->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3631->refCount.value = 1;
    panda$collections$Array$init($tmp3631);
    org$pandalanguage$pandac$IRNode* $tmp3634 = (($fn3633) self->$class->vtable[40])(self, done3621, &$s3630, ((panda$collections$ListView*) $tmp3631), NULL);
    notCall3629 = $tmp3634;
    if (((panda$core$Bit) { notCall3629 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3618, ((panda$core$Object*) notCall3629));
    panda$collections$Array* $tmp3636 = (panda$collections$Array*) malloc(40);
    $tmp3636->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3636->refCount.value = 1;
    panda$collections$Array$init($tmp3636);
    valueDeclChildren3635 = $tmp3636;
    org$pandalanguage$pandac$IRNode* $tmp3638 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3638->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3638->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3638, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar3580->type, targetVar3580);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3635, ((panda$core$Object*) $tmp3638));
    org$pandalanguage$pandac$IRNode* $tmp3641 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3641->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3641->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3641, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3597->type, iter3597);
    panda$collections$Array* $tmp3644 = (panda$collections$Array*) malloc(40);
    $tmp3644->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3644->refCount.value = 1;
    panda$collections$Array$init($tmp3644);
    org$pandalanguage$pandac$IRNode* $tmp3647 = (($fn3646) self->$class->vtable[40])(self, $tmp3641, &$s3643, ((panda$collections$ListView*) $tmp3644), NULL);
    next3640 = $tmp3647;
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3635, ((panda$core$Object*) next3640));
    panda$collections$Array* $tmp3649 = (panda$collections$Array*) malloc(40);
    $tmp3649->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3649->refCount.value = 1;
    panda$collections$Array$init($tmp3649);
    valueVarChildren3648 = $tmp3649;
    org$pandalanguage$pandac$IRNode* $tmp3651 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3651->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3651->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3651, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3635));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3648, ((panda$core$Object*) $tmp3651));
    org$pandalanguage$pandac$IRNode* $tmp3655 = (($fn3654) self->$class->vtable[87])(self, p_body);
    block3653 = $tmp3655;
    if (((panda$core$Bit) { block3653 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3657 = (panda$collections$Array*) malloc(40);
    $tmp3657->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3657->refCount.value = 1;
    panda$collections$Array$init($tmp3657);
    blockChildren3656 = $tmp3657;
    org$pandalanguage$pandac$IRNode* $tmp3659 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3659->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3659->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3659, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3648));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3656, ((panda$core$Object*) $tmp3659));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3656, ((panda$collections$CollectionView*) block3653->children));
    org$pandalanguage$pandac$IRNode* $tmp3661 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3661->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3661->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3661, ((panda$core$Int64) { 1000 }), block3653->offset, ((panda$collections$ListView*) blockChildren3656));
    block3653 = $tmp3661;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3618, ((panda$core$Object*) block3653));
    org$pandalanguage$pandac$IRNode* $tmp3663 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3663->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3663->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3663, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3618));
    panda$collections$Array$add$panda$collections$Array$T(statements3603, ((panda$core$Object*) $tmp3663));
    org$pandalanguage$pandac$IRNode* $tmp3665 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3665->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3665->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3665, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3603));
    return $tmp3665;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3668;
    org$pandalanguage$pandac$SymbolTable* symbols3674;
    org$pandalanguage$pandac$IRNode* result3677;
    panda$core$Bit found3692;
    panda$collections$Iterator* intf$Iter3693;
    org$pandalanguage$pandac$Type* intf3707;
    org$pandalanguage$pandac$IRNode* iterator3721;
    org$pandalanguage$pandac$IRNode* iterable3739;
    org$pandalanguage$pandac$IRNode* iterator3742;
    (($fn3667) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3670 = (($fn3669) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3672 = (($fn3671) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3670));
    list3668 = $tmp3672;
    if (((panda$core$Bit) { list3668 == NULL }).value) {
    {
        (($fn3673) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3675 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3675->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3675->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3675, self->symbolTable);
    symbols3674 = $tmp3675;
    self->symbolTable = symbols3674;
    panda$core$Bit $tmp3679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3668->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3678 = $tmp3679.value;
    if ($tmp3678) goto $l3680;
    panda$core$Bit $tmp3682 = (($fn3681) list3668->type->$class->vtable[11])(list3668->type);
    $tmp3678 = $tmp3682.value;
    $l3680:;
    panda$core$Bit $tmp3683 = { $tmp3678 };
    if ($tmp3683.value) {
    {
        panda$core$Object* $tmp3685 = (($fn3684) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3687 = (($fn3686) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3689 = (($fn3688) self->$class->vtable[71])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3685), list3668, ((org$pandalanguage$pandac$ASTNode*) $tmp3687));
        result3677 = $tmp3689;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3691 = (($fn3690) self->$class->vtable[8])(self, list3668);
        list3668 = $tmp3691;
        if (((panda$core$Bit) { list3668 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3692 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3695 = (($fn3694) self->$class->vtable[14])(self, list3668->type);
            ITable* $tmp3696 = ((panda$collections$Iterable*) $tmp3695)->$class->itable;
            while ($tmp3696->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3696 = $tmp3696->next;
            }
            $fn3698 $tmp3697 = $tmp3696->methods[0];
            panda$collections$Iterator* $tmp3699 = $tmp3697(((panda$collections$Iterable*) $tmp3695));
            intf$Iter3693 = $tmp3699;
            $l3700:;
            ITable* $tmp3702 = intf$Iter3693->$class->itable;
            while ($tmp3702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3702 = $tmp3702->next;
            }
            $fn3704 $tmp3703 = $tmp3702->methods[0];
            panda$core$Bit $tmp3705 = $tmp3703(intf$Iter3693);
            panda$core$Bit $tmp3706 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3705);
            if (!$tmp3706.value) goto $l3701;
            {
                ITable* $tmp3708 = intf$Iter3693->$class->itable;
                while ($tmp3708->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3708 = $tmp3708->next;
                }
                $fn3710 $tmp3709 = $tmp3708->methods[1];
                panda$core$Object* $tmp3711 = $tmp3709(intf$Iter3693);
                intf3707 = ((org$pandalanguage$pandac$Type*) $tmp3711);
                panda$core$Bit $tmp3713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3707->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3712 = $tmp3713.value;
                if (!$tmp3712) goto $l3714;
                panda$core$Object* $tmp3716 = (($fn3715) intf3707->subtypes->$class->vtable[2])(intf3707->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3717 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3719 = (($fn3718) ((org$pandalanguage$pandac$Type*) $tmp3716)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp3716), ((panda$core$Object*) $tmp3717));
                $tmp3712 = $tmp3719.value;
                $l3714:;
                panda$core$Bit $tmp3720 = { $tmp3712 };
                if ($tmp3720.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3723 = (($fn3722) self->$class->vtable[32])(self, list3668, intf3707);
                    iterator3721 = $tmp3723;
                    panda$core$Object* $tmp3725 = (($fn3724) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3727 = (($fn3726) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3729 = (($fn3728) self->$class->vtable[72])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3725), iterator3721, ((org$pandalanguage$pandac$ASTNode*) $tmp3727));
                    result3677 = $tmp3729;
                    found3692 = ((panda$core$Bit) { true });
                    goto $l3701;
                }
                }
                panda$core$Bit $tmp3731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3707->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3730 = $tmp3731.value;
                if (!$tmp3730) goto $l3732;
                panda$core$Object* $tmp3734 = (($fn3733) intf3707->subtypes->$class->vtable[2])(intf3707->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3735 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3737 = (($fn3736) ((org$pandalanguage$pandac$Type*) $tmp3734)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp3734), ((panda$core$Object*) $tmp3735));
                $tmp3730 = $tmp3737.value;
                $l3732:;
                panda$core$Bit $tmp3738 = { $tmp3730 };
                if ($tmp3738.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3741 = (($fn3740) self->$class->vtable[32])(self, list3668, intf3707);
                    iterable3739 = $tmp3741;
                    panda$collections$Array* $tmp3744 = (panda$collections$Array*) malloc(40);
                    $tmp3744->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3744->refCount.value = 1;
                    panda$collections$Array$init($tmp3744);
                    org$pandalanguage$pandac$IRNode* $tmp3747 = (($fn3746) self->$class->vtable[39])(self, iterable3739, &$s3743, ((panda$collections$ListView*) $tmp3744));
                    iterator3742 = $tmp3747;
                    panda$core$Object* $tmp3749 = (($fn3748) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3751 = (($fn3750) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3753 = (($fn3752) self->$class->vtable[72])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3749), iterator3742, ((org$pandalanguage$pandac$ASTNode*) $tmp3751));
                    result3677 = $tmp3753;
                    found3692 = ((panda$core$Bit) { true });
                    goto $l3701;
                }
                }
            }
            goto $l3700;
            $l3701:;
        }
    }
    }
    panda$core$Object* $tmp3754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3674->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3754);
    (($fn3755) self->loops->$class->vtable[3])(self->loops);
    return result3677;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3757;
    org$pandalanguage$pandac$IRNode* stmt3766;
    panda$collections$Array* children3772;
    (($fn3756) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3759 = (($fn3758) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3761 = (($fn3760) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3759));
    org$pandalanguage$pandac$Type* $tmp3762 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3764 = (($fn3763) self->$class->vtable[32])(self, $tmp3761, $tmp3762);
    test3757 = $tmp3764;
    if (((panda$core$Bit) { test3757 == NULL }).value) {
    {
        (($fn3765) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3768 = (($fn3767) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3770 = (($fn3769) self->$class->vtable[87])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3768));
    stmt3766 = $tmp3770;
    if (((panda$core$Bit) { stmt3766 == NULL }).value) {
    {
        (($fn3771) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3773 = (panda$collections$Array*) malloc(40);
    $tmp3773->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3773->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3773, ((panda$core$Int64) { 2 }));
    children3772 = $tmp3773;
    panda$collections$Array$add$panda$collections$Array$T(children3772, ((panda$core$Object*) test3757));
    panda$collections$Array$add$panda$collections$Array$T(children3772, ((panda$core$Object*) stmt3766));
    (($fn3775) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3776 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3776->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3776->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3776, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3772));
    return $tmp3776;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3779;
    org$pandalanguage$pandac$IRNode* test3785;
    panda$collections$Array* children3794;
    (($fn3778) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3781 = (($fn3780) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3783 = (($fn3782) self->$class->vtable[87])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3781));
    stmt3779 = $tmp3783;
    if (((panda$core$Bit) { stmt3779 == NULL }).value) {
    {
        (($fn3784) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3787 = (($fn3786) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3789 = (($fn3788) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3787));
    org$pandalanguage$pandac$Type* $tmp3790 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3792 = (($fn3791) self->$class->vtable[32])(self, $tmp3789, $tmp3790);
    test3785 = $tmp3792;
    if (((panda$core$Bit) { test3785 == NULL }).value) {
    {
        (($fn3793) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3795 = (panda$collections$Array*) malloc(40);
    $tmp3795->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3795->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3795, ((panda$core$Int64) { 2 }));
    children3794 = $tmp3795;
    panda$collections$Array$add$panda$collections$Array$T(children3794, ((panda$core$Object*) stmt3779));
    panda$collections$Array$add$panda$collections$Array$T(children3794, ((panda$core$Object*) test3785));
    (($fn3797) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3798 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3798->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3798, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3794));
    return $tmp3798;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3801;
    panda$collections$Array* children3807;
    (($fn3800) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3803 = (($fn3802) p_l->children->$class->vtable[2])(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3805 = (($fn3804) self->$class->vtable[87])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3803));
    stmt3801 = $tmp3805;
    if (((panda$core$Bit) { stmt3801 == NULL }).value) {
    {
        (($fn3806) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3808 = (panda$collections$Array*) malloc(40);
    $tmp3808->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3808->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3808, ((panda$core$Int64) { 1 }));
    children3807 = $tmp3808;
    panda$collections$Array$add$panda$collections$Array$T(children3807, ((panda$core$Object*) stmt3801));
    (($fn3810) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3811 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3811->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3811->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3811, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3807));
    return $tmp3811;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3813;
    panda$core$Int64 $match$943163814;
    org$pandalanguage$pandac$Type* type3816;
    org$pandalanguage$pandac$Variable* v3834;
    value3813 = p_rawValue;
    {
        $match$943163814 = p_t->kind;
        panda$core$Bit $tmp3815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$943163814, ((panda$core$Int64) { 106 }));
        if ($tmp3815.value) {
        {
            panda$core$Int64 $tmp3818 = (($fn3817) p_t->children->$class->vtable[3])(p_t->children);
            panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3818, ((panda$core$Int64) { 1 }));
            if ($tmp3819.value) {
            {
                panda$core$Object* $tmp3821 = (($fn3820) p_t->children->$class->vtable[2])(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3823 = (($fn3822) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3821));
                org$pandalanguage$pandac$Type* $tmp3825 = (($fn3824) self->$class->vtable[4])(self, $tmp3823);
                type3816 = $tmp3825;
            }
            }
            else {
            if (((panda$core$Bit) { value3813 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3827 = (($fn3826) self->$class->vtable[8])(self, value3813);
                value3813 = $tmp3827;
                if (((panda$core$Bit) { value3813 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3829 = (($fn3828) self->$class->vtable[26])(self, value3813);
                type3816 = $tmp3829;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3816 = p_valueType;
            }
            }
            else {
            {
                (($fn3831) self->$class->vtable[95])(self, p_t->offset, &$s3830);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3813 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3833 = (($fn3832) self->$class->vtable[32])(self, value3813, type3816);
                value3813 = $tmp3833;
                if (((panda$core$Bit) { value3813 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3835 = (org$pandalanguage$pandac$Variable*) malloc(56);
            $tmp3835->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3835->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3835, p_t->offset, ((panda$core$String*) p_t->payload), type3816);
            v3834 = $tmp3835;
            (($fn3837) self->symbolTable->$class->vtable[2])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3834));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3838 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3838->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3838->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3840 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3840->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3840->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3840, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3834)->offset, v3834->type, v3834);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3838, $tmp3840, value3813);
            return $tmp3838;
        }
        }
        else {
        panda$core$Bit $tmp3842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$943163814, ((panda$core$Int64) { 153 }));
        if ($tmp3842.value) {
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
    org$pandalanguage$pandac$IRNode* value3843;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3851;
    panda$collections$Array* children3856;
    panda$core$Int64 $tmp3845 = (($fn3844) p_d->children->$class->vtable[3])(p_d->children);
    panda$core$Bit $tmp3846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3845, ((panda$core$Int64) { 2 }));
    if ($tmp3846.value) {
    {
        panda$core$Object* $tmp3848 = (($fn3847) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3850 = (($fn3849) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3848));
        value3843 = $tmp3850;
        if (((panda$core$Bit) { value3843 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3843 = NULL;
    }
    }
    panda$core$Object* $tmp3853 = (($fn3852) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3855 = (($fn3854) self->$class->vtable[77])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3853), value3843, NULL);
    target3851 = $tmp3855;
    if (((panda$core$Bit) { target3851 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3857 = (panda$collections$Array*) malloc(40);
    $tmp3857->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3857->refCount.value = 1;
    panda$collections$Array$init($tmp3857);
    children3856 = $tmp3857;
    panda$collections$Array$add$panda$collections$Array$T(children3856, ((panda$core$Object*) target3851->target));
    if (((panda$core$Bit) { target3851->value != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3856, ((panda$core$Object*) target3851->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3859 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3859->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3859, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children3856));
    return $tmp3859;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3861;
    panda$collections$Iterator* label$Iter3862;
    panda$core$String* label3874;
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3861 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3863 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3863->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3863 = $tmp3863->next;
            }
            $fn3865 $tmp3864 = $tmp3863->methods[0];
            panda$collections$Iterator* $tmp3866 = $tmp3864(((panda$collections$Iterable*) self->loops));
            label$Iter3862 = $tmp3866;
            $l3867:;
            ITable* $tmp3869 = label$Iter3862->$class->itable;
            while ($tmp3869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3869 = $tmp3869->next;
            }
            $fn3871 $tmp3870 = $tmp3869->methods[0];
            panda$core$Bit $tmp3872 = $tmp3870(label$Iter3862);
            panda$core$Bit $tmp3873 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3872);
            if (!$tmp3873.value) goto $l3868;
            {
                ITable* $tmp3875 = label$Iter3862->$class->itable;
                while ($tmp3875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3875 = $tmp3875->next;
                }
                $fn3877 $tmp3876 = $tmp3875->methods[1];
                panda$core$Object* $tmp3878 = $tmp3876(label$Iter3862);
                label3874 = ((panda$core$String*) $tmp3878);
                bool $tmp3879 = ((panda$core$Bit) { label3874 != NULL }).value;
                if (!$tmp3879) goto $l3880;
                panda$core$Bit $tmp3881 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3874, ((panda$core$String*) p_b->payload));
                $tmp3879 = $tmp3881.value;
                $l3880:;
                panda$core$Bit $tmp3882 = { $tmp3879 };
                if ($tmp3882.value) {
                {
                    found3861 = ((panda$core$Bit) { true });
                    goto $l3868;
                }
                }
            }
            goto $l3867;
            $l3868:;
        }
        panda$core$Bit $tmp3883 = panda$core$Bit$$NOT$R$panda$core$Bit(found3861);
        if ($tmp3883.value) {
        {
            panda$core$String* $tmp3885 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3884, p_b->payload);
            panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3885, &$s3886);
            panda$core$String* $tmp3889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3888, p_b->payload);
            panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3889, &$s3890);
            panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3887, $tmp3891);
            (($fn3893) self->$class->vtable[95])(self, p_b->offset, $tmp3892);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3895 = (($fn3894) self->loops->$class->vtable[7])(self->loops);
    panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3895, ((panda$core$Int64) { 0 }));
    if ($tmp3896.value) {
    {
        (($fn3898) self->$class->vtable[95])(self, p_b->offset, &$s3897);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3899 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3899->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3899->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3899, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp3899;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3901;
    panda$collections$Iterator* label$Iter3902;
    panda$core$String* label3914;
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3901 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3903 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3903->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3903 = $tmp3903->next;
            }
            $fn3905 $tmp3904 = $tmp3903->methods[0];
            panda$collections$Iterator* $tmp3906 = $tmp3904(((panda$collections$Iterable*) self->loops));
            label$Iter3902 = $tmp3906;
            $l3907:;
            ITable* $tmp3909 = label$Iter3902->$class->itable;
            while ($tmp3909->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3909 = $tmp3909->next;
            }
            $fn3911 $tmp3910 = $tmp3909->methods[0];
            panda$core$Bit $tmp3912 = $tmp3910(label$Iter3902);
            panda$core$Bit $tmp3913 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3912);
            if (!$tmp3913.value) goto $l3908;
            {
                ITable* $tmp3915 = label$Iter3902->$class->itable;
                while ($tmp3915->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3915 = $tmp3915->next;
                }
                $fn3917 $tmp3916 = $tmp3915->methods[1];
                panda$core$Object* $tmp3918 = $tmp3916(label$Iter3902);
                label3914 = ((panda$core$String*) $tmp3918);
                bool $tmp3919 = ((panda$core$Bit) { label3914 != NULL }).value;
                if (!$tmp3919) goto $l3920;
                panda$core$Bit $tmp3921 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3914, ((panda$core$String*) p_c->payload));
                $tmp3919 = $tmp3921.value;
                $l3920:;
                panda$core$Bit $tmp3922 = { $tmp3919 };
                if ($tmp3922.value) {
                {
                    found3901 = ((panda$core$Bit) { true });
                    goto $l3908;
                }
                }
            }
            goto $l3907;
            $l3908:;
        }
        panda$core$Bit $tmp3923 = panda$core$Bit$$NOT$R$panda$core$Bit(found3901);
        if ($tmp3923.value) {
        {
            panda$core$String* $tmp3925 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3924, p_c->payload);
            panda$core$String* $tmp3927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3925, &$s3926);
            panda$core$String* $tmp3929 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3928, p_c->payload);
            panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3929, &$s3930);
            panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3927, $tmp3931);
            (($fn3933) self->$class->vtable[95])(self, p_c->offset, $tmp3932);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3935 = (($fn3934) self->loops->$class->vtable[7])(self->loops);
    panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3935, ((panda$core$Int64) { 0 }));
    if ($tmp3936.value) {
    {
        (($fn3938) self->$class->vtable[95])(self, p_c->offset, &$s3937);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3939 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3939->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3939->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3939, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp3939;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3951;
    panda$collections$Array* children3960;
    panda$core$Int64 $tmp3942 = (($fn3941) p_r->children->$class->vtable[3])(p_r->children);
    panda$core$Bit $tmp3943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3942, ((panda$core$Int64) { 1 }));
    if ($tmp3943.value) {
    {
        panda$core$Object* $tmp3945 = (($fn3944) self->currentMethod->$class->vtable[4])(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3946 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3948 = (($fn3947) ((org$pandalanguage$pandac$MethodDecl*) $tmp3945)->returnType->$class->vtable[4])(((org$pandalanguage$pandac$MethodDecl*) $tmp3945)->returnType, ((panda$core$Object*) $tmp3946));
        if ($tmp3948.value) {
        {
            (($fn3950) self->$class->vtable[95])(self, p_r->offset, &$s3949);
            return NULL;
        }
        }
        panda$core$Object* $tmp3953 = (($fn3952) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3955 = (($fn3954) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3953));
        panda$core$Object* $tmp3957 = (($fn3956) self->currentMethod->$class->vtable[4])(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3959 = (($fn3958) self->$class->vtable[32])(self, $tmp3955, ((org$pandalanguage$pandac$MethodDecl*) $tmp3957)->returnType);
        value3951 = $tmp3959;
        if (((panda$core$Bit) { value3951 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3961 = (panda$collections$Array*) malloc(40);
        $tmp3961->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3961->refCount.value = 1;
        panda$collections$Array$init($tmp3961);
        children3960 = $tmp3961;
        panda$collections$Array$add$panda$collections$Array$T(children3960, ((panda$core$Object*) value3951));
        org$pandalanguage$pandac$IRNode* $tmp3963 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3963->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3963->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3963, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children3960));
        return $tmp3963;
    }
    }
    panda$core$Object* $tmp3966 = (($fn3965) self->currentMethod->$class->vtable[4])(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3967 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3969 = (($fn3968) ((org$pandalanguage$pandac$MethodDecl*) $tmp3966)->returnType->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp3966)->returnType, ((panda$core$Object*) $tmp3967));
    if ($tmp3969.value) {
    {
        (($fn3971) self->$class->vtable[95])(self, p_r->offset, &$s3970);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3972 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3972->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3972->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp3972, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp3972;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3974;
    org$pandalanguage$pandac$ClassDecl* bit3982;
    org$pandalanguage$pandac$Symbol* value3986;
    panda$collections$Array* fieldChildren3991;
    panda$collections$Array* children3997;
    org$pandalanguage$pandac$IRNode* msg4003;
    panda$core$Object* $tmp3976 = (($fn3975) p_a->children->$class->vtable[2])(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3978 = (($fn3977) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3976));
    test3974 = $tmp3978;
    if (((panda$core$Bit) { test3974 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3979 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3981 = (($fn3980) self->$class->vtable[32])(self, test3974, $tmp3979);
    test3974 = $tmp3981;
    if (((panda$core$Bit) { test3974 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3983 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3985 = (($fn3984) self->$class->vtable[13])(self, $tmp3983);
    bit3982 = $tmp3985;
    org$pandalanguage$pandac$Symbol* $tmp3989 = (($fn3988) bit3982->symbolTable->$class->vtable[6])(bit3982->symbolTable, &$s3987);
    value3986 = $tmp3989;
    (($fn3990) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$FieldDecl*) value3986));
    panda$collections$Array* $tmp3992 = (panda$collections$Array*) malloc(40);
    $tmp3992->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3992->refCount.value = 1;
    panda$collections$Array$init($tmp3992);
    fieldChildren3991 = $tmp3992;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3991, ((panda$core$Object*) test3974));
    org$pandalanguage$pandac$IRNode* $tmp3994 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3994->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3994->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3996 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3994, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp3996, ((panda$core$Object*) value3986), ((panda$collections$ListView*) fieldChildren3991));
    test3974 = $tmp3994;
    panda$collections$Array* $tmp3998 = (panda$collections$Array*) malloc(40);
    $tmp3998->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3998->refCount.value = 1;
    panda$collections$Array$init($tmp3998);
    children3997 = $tmp3998;
    panda$collections$Array$add$panda$collections$Array$T(children3997, ((panda$core$Object*) test3974));
    panda$core$Int64 $tmp4001 = (($fn4000) p_a->children->$class->vtable[3])(p_a->children);
    panda$core$Bit $tmp4002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4001, ((panda$core$Int64) { 2 }));
    if ($tmp4002.value) {
    {
        panda$core$Object* $tmp4005 = (($fn4004) p_a->children->$class->vtable[2])(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4007 = (($fn4006) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4005));
        msg4003 = $tmp4007;
        if (((panda$core$Bit) { msg4003 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4008 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4010 = (($fn4009) self->$class->vtable[32])(self, msg4003, $tmp4008);
        msg4003 = $tmp4010;
        if (((panda$core$Bit) { msg4003 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3997, ((panda$core$Object*) msg4003));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4011 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4011->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4011, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children3997));
    return $tmp4011;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$collections$Array* decls4013;
    panda$collections$Iterator* astDecl$Iter4016;
    org$pandalanguage$pandac$ASTNode* astDecl4028;
    org$pandalanguage$pandac$IRNode* decl4033;
    panda$core$Int64 kind4036;
    panda$core$Int64 $match$1005614037;
    panda$collections$Array* $tmp4014 = (panda$collections$Array*) malloc(40);
    $tmp4014->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4014->refCount.value = 1;
    panda$collections$Array$init($tmp4014);
    decls4013 = $tmp4014;
    {
        ITable* $tmp4017 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4017->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4017 = $tmp4017->next;
        }
        $fn4019 $tmp4018 = $tmp4017->methods[0];
        panda$collections$Iterator* $tmp4020 = $tmp4018(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4016 = $tmp4020;
        $l4021:;
        ITable* $tmp4023 = astDecl$Iter4016->$class->itable;
        while ($tmp4023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4023 = $tmp4023->next;
        }
        $fn4025 $tmp4024 = $tmp4023->methods[0];
        panda$core$Bit $tmp4026 = $tmp4024(astDecl$Iter4016);
        panda$core$Bit $tmp4027 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4026);
        if (!$tmp4027.value) goto $l4022;
        {
            ITable* $tmp4029 = astDecl$Iter4016->$class->itable;
            while ($tmp4029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4029 = $tmp4029->next;
            }
            $fn4031 $tmp4030 = $tmp4029->methods[1];
            panda$core$Object* $tmp4032 = $tmp4030(astDecl$Iter4016);
            astDecl4028 = ((org$pandalanguage$pandac$ASTNode*) $tmp4032);
            org$pandalanguage$pandac$IRNode* $tmp4035 = (($fn4034) self->$class->vtable[78])(self, astDecl4028);
            decl4033 = $tmp4035;
            if (((panda$core$Bit) { decl4033 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4013, ((panda$core$Object*) decl4033));
        }
        goto $l4021;
        $l4022:;
    }
    {
        $match$1005614037 = p_v->kind;
        panda$core$Bit $tmp4038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1005614037, ((panda$core$Int64) { 130 }));
        if ($tmp4038.value) {
        {
            kind4036 = ((panda$core$Int64) { 1017 });
        }
        }
        else {
        panda$core$Bit $tmp4039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1005614037, ((panda$core$Int64) { 131 }));
        if ($tmp4039.value) {
        {
            kind4036 = ((panda$core$Int64) { 1018 });
        }
        }
        else {
        panda$core$Bit $tmp4040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1005614037, ((panda$core$Int64) { 133 }));
        if ($tmp4040.value) {
        {
            kind4036 = ((panda$core$Int64) { 1020 });
        }
        }
        else {
        panda$core$Bit $tmp4041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1005614037, ((panda$core$Int64) { 132 }));
        if ($tmp4041.value) {
        {
            kind4036 = ((panda$core$Int64) { 1019 });
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
    org$pandalanguage$pandac$IRNode* $tmp4042 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4042->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4042->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4042, kind4036, p_v->offset, ((panda$collections$ListView*) decls4013));
    return $tmp4042;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4044;
    panda$collections$Array* callChildren4047;
    org$pandalanguage$pandac$IRNode* testValue4050;
    org$pandalanguage$pandac$IRNode* $tmp4045 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4045->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4045->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4045, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target4044 = $tmp4045;
    panda$collections$Array* $tmp4048 = (panda$collections$Array*) malloc(40);
    $tmp4048->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4048->refCount.value = 1;
    panda$collections$Array$init($tmp4048);
    callChildren4047 = $tmp4048;
    org$pandalanguage$pandac$IRNode* $tmp4052 = (($fn4051) self->$class->vtable[68])(self, p_test);
    testValue4050 = $tmp4052;
    if (((panda$core$Bit) { testValue4050 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren4047, ((panda$core$Object*) testValue4050));
    org$pandalanguage$pandac$IRNode* $tmp4055 = (($fn4054) self->$class->vtable[39])(self, target4044, &$s4053, ((panda$collections$ListView*) callChildren4047));
    return $tmp4055;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4056;
    panda$core$Range $tmp4063;
    org$pandalanguage$pandac$IRNode* nextTest4086;
    panda$collections$Array* callChildren4093;
    panda$collections$Array* statements4112;
    panda$core$Range $tmp4115;
    org$pandalanguage$pandac$IRNode* statement4136;
    panda$collections$Array* children4153;
    panda$core$Object* $tmp4058 = (($fn4057) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4060 = (($fn4059) ((org$pandalanguage$pandac$ASTNode*) $tmp4058)->children->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp4058)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4062 = (($fn4061) self->$class->vtable[84])(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4060));
    test4056 = $tmp4062;
    if (((panda$core$Bit) { test4056 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4065 = (($fn4064) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4067 = (($fn4066) ((org$pandalanguage$pandac$ASTNode*) $tmp4065)->children->$class->vtable[3])(((org$pandalanguage$pandac$ASTNode*) $tmp4065)->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp4063, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp4067)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4069 = ((panda$core$Int64$wrapper*) $tmp4063.start)->value.value;
    panda$core$Int64 i4068 = { $tmp4069 };
    int64_t $tmp4071 = ((panda$core$Int64$wrapper*) $tmp4063.end)->value.value;
    int64_t $tmp4072 = $tmp4063.step.value;
    bool $tmp4073 = $tmp4063.inclusive.value;
    bool $tmp4080 = $tmp4072 > 0;
    if ($tmp4080) goto $l4078; else goto $l4079;
    $l4078:;
    if ($tmp4073) goto $l4081; else goto $l4082;
    $l4081:;
    if ($tmp4069 <= $tmp4071) goto $l4074; else goto $l4076;
    $l4082:;
    if ($tmp4069 < $tmp4071) goto $l4074; else goto $l4076;
    $l4079:;
    if ($tmp4073) goto $l4083; else goto $l4084;
    $l4083:;
    if ($tmp4069 >= $tmp4071) goto $l4074; else goto $l4076;
    $l4084:;
    if ($tmp4069 > $tmp4071) goto $l4074; else goto $l4076;
    $l4074:;
    {
        panda$core$Object* $tmp4088 = (($fn4087) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4090 = (($fn4089) ((org$pandalanguage$pandac$ASTNode*) $tmp4088)->children->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp4088)->children, i4068);
        org$pandalanguage$pandac$IRNode* $tmp4092 = (($fn4091) self->$class->vtable[84])(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4090));
        nextTest4086 = $tmp4092;
        if (((panda$core$Bit) { nextTest4086 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4094 = (panda$collections$Array*) malloc(40);
        $tmp4094->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4094->refCount.value = 1;
        panda$collections$Array$init($tmp4094);
        callChildren4093 = $tmp4094;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4093, ((panda$core$Object*) nextTest4086));
        org$pandalanguage$pandac$IRNode* $tmp4098 = (($fn4097) self->$class->vtable[39])(self, test4056, &$s4096, ((panda$collections$ListView*) callChildren4093));
        test4056 = $tmp4098;
        if (((panda$core$Bit) { test4056 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4077:;
    if ($tmp4080) goto $l4100; else goto $l4101;
    $l4100:;
    int64_t $tmp4102 = $tmp4071 - i4068.value;
    if ($tmp4073) goto $l4103; else goto $l4104;
    $l4103:;
    if ($tmp4102 >= $tmp4072) goto $l4099; else goto $l4076;
    $l4104:;
    if ($tmp4102 > $tmp4072) goto $l4099; else goto $l4076;
    $l4101:;
    int64_t $tmp4106 = i4068.value - $tmp4071;
    if ($tmp4073) goto $l4107; else goto $l4108;
    $l4107:;
    if ($tmp4106 >= -$tmp4072) goto $l4099; else goto $l4076;
    $l4108:;
    if ($tmp4106 > -$tmp4072) goto $l4099; else goto $l4076;
    $l4099:;
    i4068.value += $tmp4072;
    goto $l4074;
    $l4076:;
    org$pandalanguage$pandac$SymbolTable* $tmp4110 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4110->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4110->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4110, self->symbolTable);
    self->symbolTable = $tmp4110;
    panda$collections$Array* $tmp4113 = (panda$collections$Array*) malloc(40);
    $tmp4113->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4113->refCount.value = 1;
    panda$collections$Array$init($tmp4113);
    statements4112 = $tmp4113;
    panda$core$Int64 $tmp4117 = (($fn4116) p_w->children->$class->vtable[3])(p_w->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp4115, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp4117)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4119 = ((panda$core$Int64$wrapper*) $tmp4115.start)->value.value;
    panda$core$Int64 i4118 = { $tmp4119 };
    int64_t $tmp4121 = ((panda$core$Int64$wrapper*) $tmp4115.end)->value.value;
    int64_t $tmp4122 = $tmp4115.step.value;
    bool $tmp4123 = $tmp4115.inclusive.value;
    bool $tmp4130 = $tmp4122 > 0;
    if ($tmp4130) goto $l4128; else goto $l4129;
    $l4128:;
    if ($tmp4123) goto $l4131; else goto $l4132;
    $l4131:;
    if ($tmp4119 <= $tmp4121) goto $l4124; else goto $l4126;
    $l4132:;
    if ($tmp4119 < $tmp4121) goto $l4124; else goto $l4126;
    $l4129:;
    if ($tmp4123) goto $l4133; else goto $l4134;
    $l4133:;
    if ($tmp4119 >= $tmp4121) goto $l4124; else goto $l4126;
    $l4134:;
    if ($tmp4119 > $tmp4121) goto $l4124; else goto $l4126;
    $l4124:;
    {
        panda$core$Object* $tmp4138 = (($fn4137) p_w->children->$class->vtable[2])(p_w->children, i4118);
        org$pandalanguage$pandac$IRNode* $tmp4140 = (($fn4139) self->$class->vtable[87])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4138));
        statement4136 = $tmp4140;
        if (((panda$core$Bit) { statement4136 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4112, ((panda$core$Object*) statement4136));
    }
    $l4127:;
    if ($tmp4130) goto $l4142; else goto $l4143;
    $l4142:;
    int64_t $tmp4144 = $tmp4121 - i4118.value;
    if ($tmp4123) goto $l4145; else goto $l4146;
    $l4145:;
    if ($tmp4144 >= $tmp4122) goto $l4141; else goto $l4126;
    $l4146:;
    if ($tmp4144 > $tmp4122) goto $l4141; else goto $l4126;
    $l4143:;
    int64_t $tmp4148 = i4118.value - $tmp4121;
    if ($tmp4123) goto $l4149; else goto $l4150;
    $l4149:;
    if ($tmp4148 >= -$tmp4122) goto $l4141; else goto $l4126;
    $l4150:;
    if ($tmp4148 > -$tmp4122) goto $l4141; else goto $l4126;
    $l4141:;
    i4118.value += $tmp4122;
    goto $l4124;
    $l4126:;
    panda$core$Object* $tmp4152 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4152);
    panda$collections$Array* $tmp4154 = (panda$collections$Array*) malloc(40);
    $tmp4154->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4154->refCount.value = 1;
    panda$collections$Array$init($tmp4154);
    children4153 = $tmp4154;
    panda$collections$Array$add$panda$collections$Array$T(children4153, ((panda$core$Object*) test4056));
    org$pandalanguage$pandac$IRNode* $tmp4156 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4156->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4156->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4156, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements4112));
    panda$collections$Array$add$panda$collections$Array$T(children4153, ((panda$core$Object*) $tmp4156));
    org$pandalanguage$pandac$IRNode* $tmp4158 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4158->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4158, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children4153));
    return $tmp4158;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4160;
    panda$collections$Array* children4167;
    org$pandalanguage$pandac$Variable* valueVar4170;
    panda$collections$Array* declChildren4177;
    panda$collections$Array* varChildren4182;
    panda$core$Range $tmp4189;
    org$pandalanguage$pandac$ASTNode* c4210;
    panda$core$Int64 $match$1036564213;
    org$pandalanguage$pandac$IRNode* w4215;
    panda$collections$Array* statements4219;
    panda$collections$Iterator* astStatement$Iter4222;
    org$pandalanguage$pandac$ASTNode* astStatement4234;
    org$pandalanguage$pandac$IRNode* stmt4239;
    panda$core$Range $tmp4255;
    panda$core$Object* $tmp4162 = (($fn4161) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4164 = (($fn4163) self->$class->vtable[68])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4162));
    org$pandalanguage$pandac$IRNode* $tmp4166 = (($fn4165) self->$class->vtable[8])(self, $tmp4164);
    value4160 = $tmp4166;
    if (((panda$core$Bit) { value4160 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4168 = (panda$collections$Array*) malloc(40);
    $tmp4168->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4168->refCount.value = 1;
    panda$collections$Array$init($tmp4168);
    children4167 = $tmp4168;
    org$pandalanguage$pandac$Variable* $tmp4171 = (org$pandalanguage$pandac$Variable*) malloc(56);
    $tmp4171->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4171->refCount.value = 1;
    panda$core$String* $tmp4174 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4173, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp4176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4174, &$s4175);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4171, p_m->offset, $tmp4176, value4160->type);
    valueVar4170 = $tmp4171;
    panda$collections$Array* $tmp4178 = (panda$collections$Array*) malloc(40);
    $tmp4178->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4178->refCount.value = 1;
    panda$collections$Array$init($tmp4178);
    declChildren4177 = $tmp4178;
    org$pandalanguage$pandac$IRNode* $tmp4180 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4180->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4180->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4180, ((panda$core$Int64) { 1016 }), value4160->offset, valueVar4170->type, valueVar4170);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4177, ((panda$core$Object*) $tmp4180));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4177, ((panda$core$Object*) value4160));
    panda$collections$Array* $tmp4183 = (panda$collections$Array*) malloc(40);
    $tmp4183->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4183->refCount.value = 1;
    panda$collections$Array$init($tmp4183);
    varChildren4182 = $tmp4183;
    org$pandalanguage$pandac$IRNode* $tmp4185 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4185->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4185->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4185, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4170)->offset, ((panda$collections$ListView*) declChildren4177));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4182, ((panda$core$Object*) $tmp4185));
    org$pandalanguage$pandac$IRNode* $tmp4187 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4187->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4187->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4187, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4170)->offset, ((panda$collections$ListView*) varChildren4182));
    panda$collections$Array$add$panda$collections$Array$T(children4167, ((panda$core$Object*) $tmp4187));
    panda$core$Int64 $tmp4191 = (($fn4190) p_m->children->$class->vtable[3])(p_m->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp4189, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp4191)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4193 = ((panda$core$Int64$wrapper*) $tmp4189.start)->value.value;
    panda$core$Int64 i4192 = { $tmp4193 };
    int64_t $tmp4195 = ((panda$core$Int64$wrapper*) $tmp4189.end)->value.value;
    int64_t $tmp4196 = $tmp4189.step.value;
    bool $tmp4197 = $tmp4189.inclusive.value;
    bool $tmp4204 = $tmp4196 > 0;
    if ($tmp4204) goto $l4202; else goto $l4203;
    $l4202:;
    if ($tmp4197) goto $l4205; else goto $l4206;
    $l4205:;
    if ($tmp4193 <= $tmp4195) goto $l4198; else goto $l4200;
    $l4206:;
    if ($tmp4193 < $tmp4195) goto $l4198; else goto $l4200;
    $l4203:;
    if ($tmp4197) goto $l4207; else goto $l4208;
    $l4207:;
    if ($tmp4193 >= $tmp4195) goto $l4198; else goto $l4200;
    $l4208:;
    if ($tmp4193 > $tmp4195) goto $l4198; else goto $l4200;
    $l4198:;
    {
        panda$core$Object* $tmp4212 = (($fn4211) p_m->children->$class->vtable[2])(p_m->children, i4192);
        c4210 = ((org$pandalanguage$pandac$ASTNode*) $tmp4212);
        {
            $match$1036564213 = c4210->kind;
            panda$core$Bit $tmp4214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1036564213, ((panda$core$Int64) { 124 }));
            if ($tmp4214.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4217 = (($fn4216) self->$class->vtable[85])(self, valueVar4170, c4210);
                w4215 = $tmp4217;
                if (((panda$core$Bit) { w4215 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4167, ((panda$core$Object*) w4215));
            }
            }
            else {
            panda$core$Bit $tmp4218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1036564213, ((panda$core$Int64) { 127 }));
            if ($tmp4218.value) {
            {
                panda$collections$Array* $tmp4220 = (panda$collections$Array*) malloc(40);
                $tmp4220->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4220->refCount.value = 1;
                panda$collections$Array$init($tmp4220);
                statements4219 = $tmp4220;
                {
                    ITable* $tmp4223 = ((panda$collections$Iterable*) c4210->children)->$class->itable;
                    while ($tmp4223->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4223 = $tmp4223->next;
                    }
                    $fn4225 $tmp4224 = $tmp4223->methods[0];
                    panda$collections$Iterator* $tmp4226 = $tmp4224(((panda$collections$Iterable*) c4210->children));
                    astStatement$Iter4222 = $tmp4226;
                    $l4227:;
                    ITable* $tmp4229 = astStatement$Iter4222->$class->itable;
                    while ($tmp4229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4229 = $tmp4229->next;
                    }
                    $fn4231 $tmp4230 = $tmp4229->methods[0];
                    panda$core$Bit $tmp4232 = $tmp4230(astStatement$Iter4222);
                    panda$core$Bit $tmp4233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4232);
                    if (!$tmp4233.value) goto $l4228;
                    {
                        ITable* $tmp4235 = astStatement$Iter4222->$class->itable;
                        while ($tmp4235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4235 = $tmp4235->next;
                        }
                        $fn4237 $tmp4236 = $tmp4235->methods[1];
                        panda$core$Object* $tmp4238 = $tmp4236(astStatement$Iter4222);
                        astStatement4234 = ((org$pandalanguage$pandac$ASTNode*) $tmp4238);
                        org$pandalanguage$pandac$IRNode* $tmp4241 = (($fn4240) self->$class->vtable[87])(self, astStatement4234);
                        stmt4239 = $tmp4241;
                        if (((panda$core$Bit) { stmt4239 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4219, ((panda$core$Object*) stmt4239));
                    }
                    goto $l4227;
                    $l4228:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4242 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp4242->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4242->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4242, ((panda$core$Int64) { 1000 }), c4210->offset, ((panda$collections$ListView*) statements4219));
                panda$collections$Array$add$panda$collections$Array$T(children4167, ((panda$core$Object*) $tmp4242));
            }
            }
            else {
            {
            }
            }
            }
        }
    }
    $l4201:;
    if ($tmp4204) goto $l4245; else goto $l4246;
    $l4245:;
    int64_t $tmp4247 = $tmp4195 - i4192.value;
    if ($tmp4197) goto $l4248; else goto $l4249;
    $l4248:;
    if ($tmp4247 >= $tmp4196) goto $l4244; else goto $l4200;
    $l4249:;
    if ($tmp4247 > $tmp4196) goto $l4244; else goto $l4200;
    $l4246:;
    int64_t $tmp4251 = i4192.value - $tmp4195;
    if ($tmp4197) goto $l4252; else goto $l4253;
    $l4252:;
    if ($tmp4251 >= -$tmp4196) goto $l4244; else goto $l4200;
    $l4253:;
    if ($tmp4251 > -$tmp4196) goto $l4244; else goto $l4200;
    $l4244:;
    i4192.value += $tmp4196;
    goto $l4198;
    $l4200:;
    panda$core$Int64 $tmp4256 = panda$collections$Array$get_count$R$panda$core$Int64(children4167);
    panda$core$Int64 $tmp4257 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4256, ((panda$core$Int64) { 1 }));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp4255, ((panda$core$Object*) wrap_panda$core$Int64($tmp4257)), ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4259 = ((panda$core$Int64$wrapper*) $tmp4255.start)->value.value;
    panda$core$Int64 i4258 = { $tmp4259 };
    int64_t $tmp4261 = ((panda$core$Int64$wrapper*) $tmp4255.end)->value.value;
    int64_t $tmp4262 = $tmp4255.step.value;
    bool $tmp4263 = $tmp4255.inclusive.value;
    bool $tmp4270 = $tmp4262 > 0;
    if ($tmp4270) goto $l4268; else goto $l4269;
    $l4268:;
    if ($tmp4263) goto $l4271; else goto $l4272;
    $l4271:;
    if ($tmp4259 <= $tmp4261) goto $l4264; else goto $l4266;
    $l4272:;
    if ($tmp4259 < $tmp4261) goto $l4264; else goto $l4266;
    $l4269:;
    if ($tmp4263) goto $l4273; else goto $l4274;
    $l4273:;
    if ($tmp4259 >= $tmp4261) goto $l4264; else goto $l4266;
    $l4274:;
    if ($tmp4259 > $tmp4261) goto $l4264; else goto $l4266;
    $l4264:;
    {
        panda$core$Int64 $tmp4276 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4258, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4167, $tmp4276);
        panda$core$Object* $tmp4278 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4167, i4258);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4277)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4278)));
        panda$core$Int64 $tmp4279 = panda$collections$Array$get_count$R$panda$core$Int64(children4167);
        panda$core$Int64 $tmp4280 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4279, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4167, $tmp4280);
    }
    $l4267:;
    if ($tmp4270) goto $l4282; else goto $l4283;
    $l4282:;
    int64_t $tmp4284 = $tmp4261 - i4258.value;
    if ($tmp4263) goto $l4285; else goto $l4286;
    $l4285:;
    if ($tmp4284 >= $tmp4262) goto $l4281; else goto $l4266;
    $l4286:;
    if ($tmp4284 > $tmp4262) goto $l4281; else goto $l4266;
    $l4283:;
    int64_t $tmp4288 = i4258.value - $tmp4261;
    if ($tmp4263) goto $l4289; else goto $l4290;
    $l4289:;
    if ($tmp4288 >= -$tmp4262) goto $l4281; else goto $l4266;
    $l4290:;
    if ($tmp4288 > -$tmp4262) goto $l4281; else goto $l4266;
    $l4281:;
    i4258.value += $tmp4262;
    goto $l4264;
    $l4266:;
    org$pandalanguage$pandac$IRNode* $tmp4292 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4292->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4292->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4292, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children4167));
    return $tmp4292;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    panda$core$Int64 $match$1048724294;
    {
        $match$1048724294 = p_s->kind;
        panda$core$Bit $tmp4295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 123 }));
        if ($tmp4295.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4297 = (($fn4296) self->$class->vtable[82])(self, p_s);
            return $tmp4297;
        }
        }
        else {
        panda$core$Bit $tmp4298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 103 }));
        if ($tmp4298.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4300 = (($fn4299) self->$class->vtable[53])(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4302 = (($fn4301) self->$class->vtable[8])(self, $tmp4300);
            return $tmp4302;
        }
        }
        else {
        panda$core$Bit $tmp4303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 126 }));
        if ($tmp4303.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4305 = (($fn4304) self->$class->vtable[69])(self, p_s);
            return $tmp4305;
        }
        }
        else {
        panda$core$Bit $tmp4306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 107 }));
        if ($tmp4306.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4308 = (($fn4307) self->$class->vtable[58])(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4310 = (($fn4309) self->$class->vtable[8])(self, $tmp4308);
            org$pandalanguage$pandac$IRNode* $tmp4312 = (($fn4311) self->$class->vtable[50])(self, $tmp4310);
            return $tmp4312;
        }
        }
        else {
        panda$core$Bit $tmp4313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 118 }));
        if ($tmp4313.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4315 = (($fn4314) self->$class->vtable[70])(self, p_s);
            return $tmp4315;
        }
        }
        else {
        panda$core$Bit $tmp4316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 119 }));
        if ($tmp4316.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4318 = (($fn4317) self->$class->vtable[73])(self, p_s);
            return $tmp4318;
        }
        }
        else {
        panda$core$Bit $tmp4319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 121 }));
        if ($tmp4319.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4321 = (($fn4320) self->$class->vtable[74])(self, p_s);
            return $tmp4321;
        }
        }
        else {
        panda$core$Bit $tmp4322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 120 }));
        if ($tmp4322.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4324 = (($fn4323) self->$class->vtable[75])(self, p_s);
            return $tmp4324;
        }
        }
        else {
        panda$core$Bit $tmp4325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 122 }));
        if ($tmp4325.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4327 = (($fn4326) self->$class->vtable[76])(self, p_s);
            return $tmp4327;
        }
        }
        else {
        panda$core$Bit $tmp4328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 125 }));
        if ($tmp4328.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4330 = (($fn4329) self->$class->vtable[86])(self, p_s);
            return $tmp4330;
        }
        }
        else {
        panda$core$Bit $tmp4331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 134 }));
        if ($tmp4331.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4333 = (($fn4332) self->$class->vtable[79])(self, p_s);
            return $tmp4333;
        }
        }
        else {
        panda$core$Bit $tmp4334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 135 }));
        if ($tmp4334.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4336 = (($fn4335) self->$class->vtable[80])(self, p_s);
            return $tmp4336;
        }
        }
        else {
        panda$core$Bit $tmp4337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 136 }));
        if ($tmp4337.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4339 = (($fn4338) self->$class->vtable[81])(self, p_s);
            return $tmp4339;
        }
        }
        else {
        panda$core$Bit $tmp4343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 130 }));
        bool $tmp4342 = $tmp4343.value;
        if ($tmp4342) goto $l4344;
        panda$core$Bit $tmp4345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 131 }));
        $tmp4342 = $tmp4345.value;
        $l4344:;
        panda$core$Bit $tmp4346 = { $tmp4342 };
        bool $tmp4341 = $tmp4346.value;
        if ($tmp4341) goto $l4347;
        panda$core$Bit $tmp4348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 132 }));
        $tmp4341 = $tmp4348.value;
        $l4347:;
        panda$core$Bit $tmp4349 = { $tmp4341 };
        bool $tmp4340 = $tmp4349.value;
        if ($tmp4340) goto $l4350;
        panda$core$Bit $tmp4351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1048724294, ((panda$core$Int64) { 133 }));
        $tmp4340 = $tmp4351.value;
        $l4350:;
        panda$core$Bit $tmp4352 = { $tmp4340 };
        if ($tmp4352.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4354 = (($fn4353) self->$class->vtable[83])(self, p_s);
            return $tmp4354;
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
    org$pandalanguage$pandac$SymbolTable* old4356;
    org$pandalanguage$pandac$SymbolTable* symbols4361;
    panda$collections$Iterator* p$Iter4364;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4376;
    panda$collections$Array* fieldInitializers4384;
    panda$collections$Iterator* f$Iter4388;
    org$pandalanguage$pandac$FieldDecl* f4402;
    panda$collections$Array* children4414;
    org$pandalanguage$pandac$IRNode* fieldRef4423;
    org$pandalanguage$pandac$IRNode* compiled4428;
    panda$collections$Array* children4433;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    (($fn4355) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4356 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4358 = (($fn4357) self->$class->vtable[19])(self, p_m->owner);
    self->symbolTable = $tmp4358;
    (($fn4359) self->currentMethod->$class->vtable[2])(self->currentMethod, ((panda$core$Object*) p_m));
    (($fn4360) self->$class->vtable[6])(self, p_m);
    org$pandalanguage$pandac$SymbolTable* $tmp4362 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4362->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4362->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4362, self->symbolTable);
    symbols4361 = $tmp4362;
    {
        ITable* $tmp4365 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4365->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4365 = $tmp4365->next;
        }
        $fn4367 $tmp4366 = $tmp4365->methods[0];
        panda$collections$Iterator* $tmp4368 = $tmp4366(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4364 = $tmp4368;
        $l4369:;
        ITable* $tmp4371 = p$Iter4364->$class->itable;
        while ($tmp4371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4371 = $tmp4371->next;
        }
        $fn4373 $tmp4372 = $tmp4371->methods[0];
        panda$core$Bit $tmp4374 = $tmp4372(p$Iter4364);
        panda$core$Bit $tmp4375 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4374);
        if (!$tmp4375.value) goto $l4370;
        {
            ITable* $tmp4377 = p$Iter4364->$class->itable;
            while ($tmp4377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4377 = $tmp4377->next;
            }
            $fn4379 $tmp4378 = $tmp4377->methods[1];
            panda$core$Object* $tmp4380 = $tmp4378(p$Iter4364);
            p4376 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4380);
            org$pandalanguage$pandac$Variable* $tmp4381 = (org$pandalanguage$pandac$Variable*) malloc(56);
            $tmp4381->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4381->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4381, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, p4376->name, p4376->type, ((panda$core$Int64) { 1820 }));
            (($fn4383) symbols4361->$class->vtable[2])(symbols4361, ((org$pandalanguage$pandac$Symbol*) $tmp4381));
        }
        goto $l4369;
        $l4370:;
    }
    self->symbolTable = symbols4361;
    panda$collections$Array* $tmp4385 = (panda$collections$Array*) malloc(40);
    $tmp4385->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4385->refCount.value = 1;
    panda$collections$Array$init($tmp4385);
    fieldInitializers4384 = $tmp4385;
    panda$core$Bit $tmp4387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4387.value) {
    {
        {
            panda$core$Object* $tmp4390 = (($fn4389) self->currentClass->$class->vtable[4])(self->currentClass);
            ITable* $tmp4391 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4390)->fields)->$class->itable;
            while ($tmp4391->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4391 = $tmp4391->next;
            }
            $fn4393 $tmp4392 = $tmp4391->methods[0];
            panda$collections$Iterator* $tmp4394 = $tmp4392(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4390)->fields));
            f$Iter4388 = $tmp4394;
            $l4395:;
            ITable* $tmp4397 = f$Iter4388->$class->itable;
            while ($tmp4397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4397 = $tmp4397->next;
            }
            $fn4399 $tmp4398 = $tmp4397->methods[0];
            panda$core$Bit $tmp4400 = $tmp4398(f$Iter4388);
            panda$core$Bit $tmp4401 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4400);
            if (!$tmp4401.value) goto $l4396;
            {
                ITable* $tmp4403 = f$Iter4388->$class->itable;
                while ($tmp4403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4403 = $tmp4403->next;
                }
                $fn4405 $tmp4404 = $tmp4403->methods[1];
                panda$core$Object* $tmp4406 = $tmp4404(f$Iter4388);
                f4402 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4406);
                (($fn4407) self->$class->vtable[7])(self, f4402);
                panda$core$Bit $tmp4410 = (($fn4409) f4402->annotations->$class->vtable[5])(f4402->annotations);
                panda$core$Bit $tmp4411 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4410);
                bool $tmp4408 = $tmp4411.value;
                if (!$tmp4408) goto $l4412;
                $tmp4408 = ((panda$core$Bit) { f4402->value != NULL }).value;
                $l4412:;
                panda$core$Bit $tmp4413 = { $tmp4408 };
                if ($tmp4413.value) {
                {
                    panda$collections$Array* $tmp4415 = (panda$collections$Array*) malloc(40);
                    $tmp4415->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4415->refCount.value = 1;
                    panda$collections$Array$init($tmp4415);
                    children4414 = $tmp4415;
                    org$pandalanguage$pandac$IRNode* $tmp4417 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4417->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4417->refCount.value = 1;
                    panda$core$Object* $tmp4420 = (($fn4419) self->currentClass->$class->vtable[4])(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4422 = (($fn4421) ((org$pandalanguage$pandac$ClassDecl*) $tmp4420)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp4420));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp4417, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp4422);
                    panda$collections$Array$add$panda$collections$Array$T(children4414, ((panda$core$Object*) $tmp4417));
                    org$pandalanguage$pandac$IRNode* $tmp4424 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4424->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4424->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4424, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f4402->type, ((panda$core$Object*) f4402), ((panda$collections$ListView*) children4414));
                    fieldRef4423 = $tmp4424;
                    panda$collections$Array$clear(children4414);
                    panda$collections$Array$add$panda$collections$Array$T(children4414, ((panda$core$Object*) fieldRef4423));
                    panda$collections$Array$add$panda$collections$Array$T(children4414, ((panda$core$Object*) f4402->value));
                    org$pandalanguage$pandac$IRNode* $tmp4426 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4426->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4426->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4426, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4402)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4414));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4384, ((panda$core$Object*) $tmp4426));
                }
                }
            }
            goto $l4395;
            $l4396:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4430 = (($fn4429) self->$class->vtable[69])(self, p_m->body);
    compiled4428 = $tmp4430;
    if (((panda$core$Bit) { compiled4428 != NULL }).value) {
    {
        panda$core$Int64 $tmp4431 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4384);
        panda$core$Bit $tmp4432 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4431, ((panda$core$Int64) { 0 }));
        if ($tmp4432.value) {
        {
            panda$collections$Array* $tmp4434 = (panda$collections$Array*) malloc(40);
            $tmp4434->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4434->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4434, ((panda$collections$ListView*) fieldInitializers4384));
            children4433 = $tmp4434;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4433, ((panda$collections$CollectionView*) compiled4428->children));
            org$pandalanguage$pandac$IRNode* $tmp4436 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp4436->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4436->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4436, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children4433));
            compiled4428 = $tmp4436;
        }
        }
    }
    }
    self->symbolTable = old4356;
    (($fn4438) self->currentMethod->$class->vtable[3])(self->currentMethod);
    (($fn4439) self->currentClass->$class->vtable[3])(self->currentClass);
    panda$core$Bit $tmp4441 = (($fn4440) p_m->annotations->$class->vtable[11])(p_m->annotations);
    if ($tmp4441.value) {
    {
        p_m->compiledBody = compiled4428;
    }
    }
    return compiled4428;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4442;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4444 = (($fn4443) self->$class->vtable[88])(self, p_m);
        compiled4442 = $tmp4444;
        if (((panda$core$Bit) { compiled4442 != NULL }).value) {
        {
            ITable* $tmp4445 = self->codeGenerator->$class->itable;
            while ($tmp4445->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4445 = $tmp4445->next;
            }
            $fn4447 $tmp4446 = $tmp4445->methods[3];
            $tmp4446(self->codeGenerator, p_m, compiled4442);
        }
        }
    }
    }
    else {
    {
        (($fn4448) self->$class->vtable[6])(self, p_m);
        ITable* $tmp4449 = self->codeGenerator->$class->itable;
        while ($tmp4449->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4449 = $tmp4449->next;
        }
        $fn4451 $tmp4450 = $tmp4449->methods[2];
        $tmp4450(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4452;
    org$pandalanguage$pandac$ClassDecl* inner4464;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4453 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4453->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4453 = $tmp4453->next;
        }
        $fn4455 $tmp4454 = $tmp4453->methods[0];
        panda$collections$Iterator* $tmp4456 = $tmp4454(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4452 = $tmp4456;
        $l4457:;
        ITable* $tmp4459 = inner$Iter4452->$class->itable;
        while ($tmp4459->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4459 = $tmp4459->next;
        }
        $fn4461 $tmp4460 = $tmp4459->methods[0];
        panda$core$Bit $tmp4462 = $tmp4460(inner$Iter4452);
        panda$core$Bit $tmp4463 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4462);
        if (!$tmp4463.value) goto $l4458;
        {
            ITable* $tmp4465 = inner$Iter4452->$class->itable;
            while ($tmp4465->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4465 = $tmp4465->next;
            }
            $fn4467 $tmp4466 = $tmp4465->methods[1];
            panda$core$Object* $tmp4468 = $tmp4466(inner$Iter4452);
            inner4464 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4468);
            (($fn4469) self->$class->vtable[90])(self, inner4464);
        }
        goto $l4457;
        $l4458:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* m$Iter4475;
    org$pandalanguage$pandac$MethodDecl* m4487;
    (($fn4470) self->$class->vtable[90])(self, p_cl);
    (($fn4471) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
    (($fn4472) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
    org$pandalanguage$pandac$SymbolTable* $tmp4474 = (($fn4473) self->$class->vtable[19])(self, p_cl);
    self->symbolTable = $tmp4474;
    {
        ITable* $tmp4476 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4476->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4476 = $tmp4476->next;
        }
        $fn4478 $tmp4477 = $tmp4476->methods[0];
        panda$collections$Iterator* $tmp4479 = $tmp4477(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4475 = $tmp4479;
        $l4480:;
        ITable* $tmp4482 = m$Iter4475->$class->itable;
        while ($tmp4482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4482 = $tmp4482->next;
        }
        $fn4484 $tmp4483 = $tmp4482->methods[0];
        panda$core$Bit $tmp4485 = $tmp4483(m$Iter4475);
        panda$core$Bit $tmp4486 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4485);
        if (!$tmp4486.value) goto $l4481;
        {
            ITable* $tmp4488 = m$Iter4475->$class->itable;
            while ($tmp4488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4488 = $tmp4488->next;
            }
            $fn4490 $tmp4489 = $tmp4488->methods[1];
            panda$core$Object* $tmp4491 = $tmp4489(m$Iter4475);
            m4487 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4491);
            (($fn4492) self->$class->vtable[89])(self, m4487);
        }
        goto $l4480;
        $l4481:;
    }
    ITable* $tmp4493 = self->codeGenerator->$class->itable;
    while ($tmp4493->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4493 = $tmp4493->next;
    }
    $fn4495 $tmp4494 = $tmp4493->methods[1];
    $tmp4494(self->codeGenerator, p_cl);
    (($fn4496) self->currentFile->$class->vtable[3])(self->currentFile);
    (($fn4497) self->currentClass->$class->vtable[3])(self->currentClass);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4498;
    org$pandalanguage$pandac$ASTNode* parsed4505;
    panda$collections$Iterator* cl$Iter4510;
    org$pandalanguage$pandac$ClassDecl* cl4522;
    panda$core$Object* $tmp4500 = (($fn4499) self->scans->$class->vtable[3])(self->scans, ((panda$core$Object*) ((panda$collections$Key*) p_file)));
    result4498 = ((panda$collections$ListView*) $tmp4500);
    if (((panda$core$Bit) { result4498 == NULL }).value) {
    {
        (($fn4501) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp4502 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4503 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4504) self->parser->$class->vtable[2])(self->parser, $tmp4502, $tmp4503);
        org$pandalanguage$pandac$ASTNode* $tmp4507 = (($fn4506) self->parser->$class->vtable[68])(self->parser);
        parsed4505 = $tmp4507;
        if (((panda$core$Bit) { parsed4505 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4509 = (($fn4508) self->scanner->$class->vtable[12])(self->scanner, p_file, parsed4505);
            result4498 = $tmp4509;
            {
                ITable* $tmp4511 = ((panda$collections$Iterable*) result4498)->$class->itable;
                while ($tmp4511->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4511 = $tmp4511->next;
                }
                $fn4513 $tmp4512 = $tmp4511->methods[0];
                panda$collections$Iterator* $tmp4514 = $tmp4512(((panda$collections$Iterable*) result4498));
                cl$Iter4510 = $tmp4514;
                $l4515:;
                ITable* $tmp4517 = cl$Iter4510->$class->itable;
                while ($tmp4517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4517 = $tmp4517->next;
                }
                $fn4519 $tmp4518 = $tmp4517->methods[0];
                panda$core$Bit $tmp4520 = $tmp4518(cl$Iter4510);
                panda$core$Bit $tmp4521 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4520);
                if (!$tmp4521.value) goto $l4516;
                {
                    ITable* $tmp4523 = cl$Iter4510->$class->itable;
                    while ($tmp4523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4523 = $tmp4523->next;
                    }
                    $fn4525 $tmp4524 = $tmp4523->methods[1];
                    panda$core$Object* $tmp4526 = $tmp4524(cl$Iter4510);
                    cl4522 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4526);
                    (($fn4527) self->classes->$class->vtable[5])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4522)->name)), ((panda$core$Object*) cl4522));
                }
                goto $l4515;
                $l4516:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4528 = (panda$collections$Array*) malloc(40);
            $tmp4528->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4528->refCount.value = 1;
            panda$collections$Array$init($tmp4528);
            result4498 = ((panda$collections$ListView*) $tmp4528);
        }
        }
        (($fn4530) self->scans->$class->vtable[5])(self->scans, ((panda$core$Object*) ((panda$collections$Key*) p_file)), ((panda$core$Object*) result4498));
        (($fn4531) self->currentFile->$class->vtable[3])(self->currentFile);
    }
    }
    return result4498;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4532;
    panda$collections$Iterator* cl$Iter4535;
    org$pandalanguage$pandac$ClassDecl* cl4547;
    panda$collections$ListView* $tmp4534 = (($fn4533) self->$class->vtable[92])(self, p_file);
    classes4532 = $tmp4534;
    {
        ITable* $tmp4536 = ((panda$collections$Iterable*) classes4532)->$class->itable;
        while ($tmp4536->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4536 = $tmp4536->next;
        }
        $fn4538 $tmp4537 = $tmp4536->methods[0];
        panda$collections$Iterator* $tmp4539 = $tmp4537(((panda$collections$Iterable*) classes4532));
        cl$Iter4535 = $tmp4539;
        $l4540:;
        ITable* $tmp4542 = cl$Iter4535->$class->itable;
        while ($tmp4542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4542 = $tmp4542->next;
        }
        $fn4544 $tmp4543 = $tmp4542->methods[0];
        panda$core$Bit $tmp4545 = $tmp4543(cl$Iter4535);
        panda$core$Bit $tmp4546 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4545);
        if (!$tmp4546.value) goto $l4541;
        {
            ITable* $tmp4548 = cl$Iter4535->$class->itable;
            while ($tmp4548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4548 = $tmp4548->next;
            }
            $fn4550 $tmp4549 = $tmp4548->methods[1];
            panda$core$Object* $tmp4551 = $tmp4549(cl$Iter4535);
            cl4547 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4551);
            (($fn4552) self->$class->vtable[91])(self, cl4547);
        }
        goto $l4540;
        $l4541:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source4553;
    panda$core$Int64 line4557;
    panda$core$Int64 column4558;
    panda$core$Range $tmp4559;
    panda$core$Char8 $match$1096264578;
    panda$core$Char8 $tmp4581;
    panda$core$Char8 $tmp4584;
    panda$core$Object* $tmp4555 = (($fn4554) self->currentFile->$class->vtable[4])(self->currentFile);
    panda$io$InputStream* $tmp4556 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp4555));
    source4553 = $tmp4556;
    line4557 = ((panda$core$Int64) { 1 });
    column4558 = ((panda$core$Int64) { 1 });
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp4559, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(p_offset)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4561 = ((panda$core$Int64$wrapper*) $tmp4559.start)->value.value;
    panda$core$Int64 i4560 = { $tmp4561 };
    int64_t $tmp4563 = ((panda$core$Int64$wrapper*) $tmp4559.end)->value.value;
    int64_t $tmp4564 = $tmp4559.step.value;
    bool $tmp4565 = $tmp4559.inclusive.value;
    bool $tmp4572 = $tmp4564 > 0;
    if ($tmp4572) goto $l4570; else goto $l4571;
    $l4570:;
    if ($tmp4565) goto $l4573; else goto $l4574;
    $l4573:;
    if ($tmp4561 <= $tmp4563) goto $l4566; else goto $l4568;
    $l4574:;
    if ($tmp4561 < $tmp4563) goto $l4566; else goto $l4568;
    $l4571:;
    if ($tmp4565) goto $l4575; else goto $l4576;
    $l4575:;
    if ($tmp4561 >= $tmp4563) goto $l4566; else goto $l4568;
    $l4576:;
    if ($tmp4561 > $tmp4563) goto $l4566; else goto $l4568;
    $l4566:;
    {
        {
            panda$core$Char8$nullable $tmp4580 = (($fn4579) source4553->$class->vtable[10])(source4553);
            $match$1096264578 = ((panda$core$Char8) $tmp4580.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4581, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4582 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1096264578, $tmp4581);
            if ($tmp4582.value) {
            {
                panda$core$Int64 $tmp4583 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4557, ((panda$core$Int64) { 1 }));
                line4557 = $tmp4583;
                column4558 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4584, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4585 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1096264578, $tmp4584);
            if ($tmp4585.value) {
            {
                panda$core$Int64 $tmp4586 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column4558, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4587 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4586);
                panda$core$Int64 $tmp4588 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4558, $tmp4587);
                column4558 = $tmp4588;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4589 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4558, ((panda$core$Int64) { 1 }));
                column4558 = $tmp4589;
            }
            }
            }
        }
    }
    $l4569:;
    if ($tmp4572) goto $l4591; else goto $l4592;
    $l4591:;
    int64_t $tmp4593 = $tmp4563 - i4560.value;
    if ($tmp4565) goto $l4594; else goto $l4595;
    $l4594:;
    if ($tmp4593 >= $tmp4564) goto $l4590; else goto $l4568;
    $l4595:;
    if ($tmp4593 > $tmp4564) goto $l4590; else goto $l4568;
    $l4592:;
    int64_t $tmp4597 = i4560.value - $tmp4563;
    if ($tmp4565) goto $l4598; else goto $l4599;
    $l4598:;
    if ($tmp4597 >= -$tmp4564) goto $l4590; else goto $l4568;
    $l4599:;
    if ($tmp4597 > -$tmp4564) goto $l4590; else goto $l4568;
    $l4590:;
    i4560.value += $tmp4564;
    goto $l4566;
    $l4568:;
    (($fn4601) ((panda$core$Object*) source4553)->$class->vtable[1])(((panda$core$Object*) source4553));
    org$pandalanguage$pandac$Position* $tmp4602 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4602->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4602->refCount.value = 1;
    panda$core$Object* $tmp4605 = (($fn4604) self->currentFile->$class->vtable[4])(self->currentFile);
    panda$core$String* $tmp4606 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4605));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4602, $tmp4606, line4557, column4558);
    return $tmp4602;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4608 = (($fn4607) self->$class->vtable[94])(self, p_offset);
    (($fn4609) self->$class->vtable[96])(self, $tmp4608, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4610 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4610;
        panda$core$String* $tmp4612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4611, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4612, &$s4613);
        panda$core$String* $tmp4615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4614, p_msg);
        panda$core$String* $tmp4617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4615, &$s4616);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4617));
    }
    }
}
void org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Compiler$Settings* self, panda$io$File* p_pandaHome, panda$collections$ListView* p_importDirs, panda$core$Int64 p_optimizationLevel, panda$core$Int64 p_safetyLevel) {
    self->pandaHome = p_pandaHome;
    panda$collections$ImmutableArray* $tmp4618 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp4618->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp4618->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp4618, p_importDirs);
    self->importDirs = $tmp4618;
    self->optimizationLevel = p_optimizationLevel;
    self->safetyLevel = p_safetyLevel;
}
void org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler$CompileTargetResult* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value) {
    self->target = p_target;
    self->value = p_value;
}

