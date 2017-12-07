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
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
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
typedef void (*$fn125)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Int64 (*$fn126)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn130)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn134)(panda$collections$MapView*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn136)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn139)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Int64 (*$fn141)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn145)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn149)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn154)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn156)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn161)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn165)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn168)(panda$collections$Stack*);
typedef void (*$fn170)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn171)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Object* (*$fn173)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Symbol* (*$fn175)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn181)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn186)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn188)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn191)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn199)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn201)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn212)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Position* (*$fn214)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn220)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef panda$core$Object* (*$fn226)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn228)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn239)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn241)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn248)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn252)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn273)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn275)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn277)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn278)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn292)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn295)(panda$core$MutableString*);
typedef void (*$fn297)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn298)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn300)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn303)(org$pandalanguage$pandac$Annotations*);
typedef panda$collections$Iterator* (*$fn315)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn327)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn331)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Annotations*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn356)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn378)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn384)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn386)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn388)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn389)(panda$collections$Stack*);
typedef void (*$fn390)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn391)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn392)(panda$collections$Stack*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn409)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn411)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn413)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn415)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn416)(panda$collections$Stack*);
typedef void (*$fn417)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn418)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Bit (*$fn421)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn423)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn425)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn427)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn429)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn430)(panda$collections$Stack*);
typedef void (*$fn432)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn433)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn434)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$IRNode* (*$fn435)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn437)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn438)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn439)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn441)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn443)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn444)(panda$collections$Stack*);
typedef void (*$fn448)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn451)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn455)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn456)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn458)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn460)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64$nullable (*$fn464)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef void (*$fn467)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn472)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn478)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn480)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn485)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn491)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn497)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn499)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn503)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn515)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn521)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn527)(panda$collections$Iterator*);
typedef panda$collections$ListView* (*$fn532)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$core$Object* (*$fn533)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$Object* (*$fn536)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn548)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn554)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn560)(panda$collections$Iterator*);
typedef panda$collections$ListView* (*$fn566)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$core$Object* (*$fn567)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn583)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef void (*$fn592)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn594)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn597)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn599)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn603)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn605)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn613)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn621)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn627)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn633)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn635)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn643)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn665)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn668)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn670)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn690)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn696)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn702)(panda$collections$Iterator*);
typedef void (*$fn704)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn711)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn717)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn723)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn727)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef void (*$fn732)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn736)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn742)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn748)(panda$collections$Iterator*);
typedef void (*$fn750)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn754)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef void (*$fn756)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef void (*$fn757)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn758)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn762)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn773)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn775)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn777)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn779)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn782)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn784)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn788)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Set* (*$fn790)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn792)(panda$collections$Set*, panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn796)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn802)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn808)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn810)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Set* (*$fn812)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn814)(panda$collections$Set*, panda$collections$CollectionView*);
typedef void (*$fn816)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Int64 (*$fn817)(panda$collections$ImmutableArray*);
typedef panda$core$Int64 (*$fn819)(panda$collections$ImmutableArray*);
typedef panda$core$Int64 (*$fn823)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn843)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn845)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn847)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn861)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn866)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn872)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn878)(panda$collections$Iterator*);
typedef void (*$fn881)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn882)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn884)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn886)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn895)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn901)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn907)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn910)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn912)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$Type* (*$fn914)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn916)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef void (*$fn918)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn920)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn923)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn928)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn934)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn940)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn943)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn945)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$Type* (*$fn947)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn949)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn952)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn960)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn966)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn972)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn975)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn977)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn979)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn981)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, panda$core$String*, org$pandalanguage$pandac$Type*, panda$core$Bit);
typedef void (*$fn984)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn986)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn988)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn993)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn999)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1005)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1008)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn1010)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1014)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1015)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn1016)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1018)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1020)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1021)(panda$collections$Stack*);
typedef panda$collections$ListView* (*$fn1022)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn1027)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1039)(panda$collections$Iterator*);
typedef void (*$fn1041)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1045)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1071)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1072)(org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn1086)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1087)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Symbol* (*$fn1092)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn1095)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn1101)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1107)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1113)(panda$collections$Iterator*);
typedef void (*$fn1115)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn1121)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1127)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1133)(panda$collections$Iterator*);
typedef void (*$fn1135)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$SymbolTable*, panda$core$String*, panda$collections$Array*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1144)(org$pandalanguage$pandac$MethodRef*);
typedef panda$collections$Iterator* (*$fn1153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1165)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1167)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1176)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1181)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1187)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn1194)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1196)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$core$Int64, panda$collections$ListView*);
typedef void (*$fn1203)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Bit (*$fn1205)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn1212)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1214)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1216)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$Type* (*$fn1218)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1220)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1225)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1227)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1231)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn1233)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn1240)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn1242)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1249)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1252)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef panda$core$Int64 (*$fn1255)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1280)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1283)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn1285)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1297)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef panda$core$Bit (*$fn1301)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1305)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1311)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1314)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1316)(org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1318)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1328)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1331)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1333)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1336)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1346)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1348)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1354)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1356)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1367)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1369)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1374)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1381)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1387)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1393)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1396)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1406)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1408)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1410)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1413)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1417)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1419)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1421)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1423)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1425)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1431)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1437)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1443)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1446)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1448)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1450)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1471)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1477)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1479)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1484)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1486)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1491)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1494)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1502)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1504)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1512)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1514)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1519)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1522)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1524)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1533)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1535)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1545)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1547)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1552)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1555)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1557)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1560)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1569)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1571)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1576)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1578)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1582)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn1584)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1587)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn1589)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1592)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1594)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1598)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1603)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1609)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1615)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1617)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1619)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64$nullable (*$fn1622)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1624)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1626)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1633)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1635)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1643)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1645)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1647)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1654)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1656)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1665)(org$pandalanguage$pandac$Compiler*, panda$core$UInt64);
typedef panda$core$Int64 (*$fn1667)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1676)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1681)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1683)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1685)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1693)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1695)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1704)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1709)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1711)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1713)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1717)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1722)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1726)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1730)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1732)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1734)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1737)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1740)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1744)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1748)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1761)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1763)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1765)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1780)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1786)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1792)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1795)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1809)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1811)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1819)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1821)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1827)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn1829)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn1838)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn1840)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1842)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1844)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1847)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1852)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1858)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1864)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1866)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1868)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64$nullable (*$fn1870)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1876)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1881)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef void (*$fn1895)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1897)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1900)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1903)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1906)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1909)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1912)(org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1919)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1925)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1931)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn1933)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1936)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn1938)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1940)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1942)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn1946)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1959)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1978)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1985)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Int64 (*$fn1989)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1994)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn2017)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn2019)(org$pandalanguage$pandac$MethodRef*, panda$core$Int64);
typedef panda$core$Int64$nullable (*$fn2021)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2036)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Int64$nullable (*$fn2038)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2043)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2045)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn2050)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn2056)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn2058)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2069)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2075)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2081)(panda$collections$Iterator*);
typedef panda$core$Int64$nullable (*$fn2084)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2100)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$Type* (*$fn2104)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2106)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn2109)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn2114)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn2116)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2119)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn2130)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn2132)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn2139)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn2141)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2143)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2145)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn2147)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn2149)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2153)(org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn2158)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn2162)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2185)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn2187)(org$pandalanguage$pandac$MethodRef*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn2189)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2192)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2210)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$Type* (*$fn2214)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2216)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2218)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2221)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2225)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2227)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn2230)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn2232)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn2241)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn2254)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn2256)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2258)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2260)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2262)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2270)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef panda$core$Int64$nullable (*$fn2276)(org$pandalanguage$pandac$Compiler*, panda$collections$Array*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn2282)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2301)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2307)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2313)(panda$collections$Iterator*);
typedef void (*$fn2315)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2316)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn2319)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2324)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2325)(panda$core$MutableString*);
typedef void (*$fn2327)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2335)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$MethodRef*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn2349)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2355)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2361)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn2363)(org$pandalanguage$pandac$MethodRef*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2375)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2377)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2385)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2391)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef void (*$fn2392)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn2405)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2411)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2417)(panda$collections$Iterator*);
typedef void (*$fn2419)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2420)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2425)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2427)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn2429)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2431)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2433)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2436)(panda$core$MutableString*);
typedef void (*$fn2438)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn2446)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2450)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2456)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2462)(panda$collections$Iterator*);
typedef void (*$fn2465)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2466)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2470)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2472)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn2474)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2476)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2478)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2481)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn2484)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2486)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2488)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2490)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2492)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn2495)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn2497)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn2499)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2634)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2643)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2756)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2766)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2769)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2771)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2777)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2801)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2805)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2809)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2812)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2816)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2822)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2825)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2830)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64$nullable (*$fn2832)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2834)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn2839)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2842)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2865)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2875)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2888)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2891)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2893)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2908)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn2909)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2912)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2914)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2929)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2932)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2936)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2946)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2948)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2950)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2952)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2956)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2964)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2966)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2968)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn2972)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2983)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn2986)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn2989)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2995)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2997)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3000)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3003)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn3006)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3009)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3012)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn3020)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn3023)(org$pandalanguage$pandac$MethodRef*);
typedef panda$collections$Iterator* (*$fn3028)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3034)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3040)(panda$collections$Iterator*);
typedef void (*$fn3042)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn3045)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Bit (*$fn3056)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn3060)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn3097)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3114)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn3117)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn3120)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3123)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3153)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3156)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn3160)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3168)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn3171)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3173)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3176)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3178)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3180)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3183)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$ListView* (*$fn3185)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ImmutableArray* (*$fn3189)(panda$collections$ImmutableArray*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$ListView* (*$fn3194)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3198)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$ListView* (*$fn3200)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3204)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3209)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3212)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3214)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3235)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn3238)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3245)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn3249)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3263)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef panda$core$Bit (*$fn3274)(org$pandalanguage$pandac$Type*);
typedef void (*$fn3285)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Bit (*$fn3287)(org$pandalanguage$pandac$Type*);
typedef void (*$fn3298)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3302)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3310)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3312)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3314)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$core$Int64);
typedef panda$core$Object* (*$fn3317)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3319)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3325)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3346)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3348)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3361)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn3364)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3366)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3373)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3378)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3390)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3395)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn3401)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3403)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3405)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3408)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3410)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn3421)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn3422)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3424)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$Symbol* (*$fn3427)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3429)(org$pandalanguage$pandac$Compiler*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3431)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Symbol*, org$pandalanguage$pandac$SymbolTable*);
typedef org$pandalanguage$pandac$Type* (*$fn3439)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3441)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3444)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3450)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3452)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3455)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3461)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3463)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3466)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3472)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3474)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3477)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3491)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3493)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3496)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn3499)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn3503)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn3509)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3515)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3521)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3527)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3533)(panda$collections$Iterator*);
typedef void (*$fn3546)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn3547)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn3552)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn3555)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$Type* (*$fn3557)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn3561)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3563)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn3566)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn3568)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3573)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3575)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3578)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3580)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3582)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64$nullable (*$fn3584)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3586)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3588)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3590)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, panda$core$Bit, org$pandalanguage$pandac$Type*);
typedef void (*$fn3601)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3607)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3614)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3617)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3620)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3627)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3634)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3637)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3648)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3651)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3654)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3657)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3660)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn3671)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3677)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3683)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3686)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3693)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3695)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3698)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3701)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3703)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3708)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3712)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3714)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3723)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3728)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3730)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3732)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3735)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3737)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn3740)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3742)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3744)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn3747)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3750)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3758)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn3760)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3784)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3809)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3815)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3828)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3836)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn3849)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3851)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3853)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3855)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3863)(org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3866)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3868)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3870)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3872)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Set* (*$fn3876)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn3880)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3886)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3892)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3897)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3900)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3904)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3906)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3908)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3910)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3915)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3918)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3922)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3928)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn3930)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn3932)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3934)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3937)(panda$collections$Stack*);
typedef void (*$fn3938)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3940)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3942)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3945)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3947)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3949)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3951)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3953)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3957)(panda$collections$Stack*);
typedef void (*$fn3960)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3962)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3964)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3966)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3968)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3970)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3973)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3975)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3979)(panda$collections$Stack*);
typedef void (*$fn3982)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$Object* (*$fn3984)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn3986)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn3988)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn3992)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn3999)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4002)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn4004)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4006)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4008)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn4010)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4013)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4014)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4019)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Int64 (*$fn4026)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4029)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4031)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4034)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Compiler$CompileTargetResult* (*$fn4036)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn4047)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4053)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4059)(panda$collections$Iterator*);
typedef void (*$fn4075)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn4076)(panda$collections$Stack*);
typedef void (*$fn4080)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4087)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4093)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4099)(panda$collections$Iterator*);
typedef void (*$fn4115)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn4116)(panda$collections$Stack*);
typedef void (*$fn4120)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Int64 (*$fn4123)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4126)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn4129)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn4132)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn4134)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4136)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4138)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4140)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn4147)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn4150)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn4153)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn4157)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4159)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4162)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4166)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Symbol* (*$fn4170)(org$pandalanguage$pandac$SymbolTable*, panda$core$String*);
typedef void (*$fn4172)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Int64 (*$fn4182)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4186)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4188)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4191)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn4201)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4207)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4213)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4216)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4233)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4236)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn4239)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn4241)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4243)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4246)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn4248)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4269)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn4271)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4273)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4279)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$collections$ListView*);
typedef panda$core$Int64 (*$fn4298)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4319)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4321)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4343)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4345)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4347)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn4372)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn4393)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$IRNode* (*$fn4398)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Variable*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn4407)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4413)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4419)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4422)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4478)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4481)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4483)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4486)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4489)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4491)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4493)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4496)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4499)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4502)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4505)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4508)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4511)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4514)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4517)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4520)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4535)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn4537)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn4539)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4541)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4542)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4561)(panda$collections$Iterator*);
typedef void (*$fn4565)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn4571)(panda$collections$Stack*);
typedef panda$collections$Iterator* (*$fn4575)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4581)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4587)(panda$collections$Iterator*);
typedef void (*$fn4589)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Bit (*$fn4591)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn4601)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Type* (*$fn4603)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4611)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn4620)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4621)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn4622)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4625)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4629)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4630)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4633)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4637)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4643)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4649)(panda$collections$Iterator*);
typedef void (*$fn4651)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4652)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn4653)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn4657)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4660)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4661)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4662)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$SymbolTable* (*$fn4664)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4668)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4672)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4678)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4684)(panda$collections$Iterator*);
typedef void (*$fn4686)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn4689)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4690)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4691)(panda$collections$Stack*);
typedef void (*$fn4696)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4698)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn4700)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn4703)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4705)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$ListView* (*$fn4707)(org$pandalanguage$pandac$Scanner*, panda$io$File*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn4712)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4724)(panda$collections$Iterator*);
typedef void (*$fn4726)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn4729)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn4730)(panda$collections$Stack*);
typedef panda$collections$ListView* (*$fn4732)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef panda$collections$Iterator* (*$fn4737)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4749)(panda$collections$Iterator*);
typedef void (*$fn4751)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4753)(panda$collections$Stack*);
typedef panda$core$Char8$nullable (*$fn4778)(panda$io$InputStream*);
typedef void (*$fn4800)(panda$core$Object*);
typedef panda$core$Object* (*$fn4803)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$Position* (*$fn4806)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn4808)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef void (*$fn4819)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 1 };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, 1 };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 1 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, 1 };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s3495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s4012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s4066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s4068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s4072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s4079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s4106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s4108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s4110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s4119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s4131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s4152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s4169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s4278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s4355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp120;
    org$pandalanguage$pandac$Alias* $tmp118 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp118->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp118->refCount.value = 1;
    panda$core$String$Index$nullable $tmp122 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s121);
    panda$core$String$Index $tmp123 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp122.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp120, ((panda$core$String$Index$nullable) { $tmp123, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp124 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp120);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp118, $tmp124, p_name, ((panda$core$Int64) { -1 }));
    (($fn125) self->root->$class->vtable[2])(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp118));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$String* alias129;
    org$pandalanguage$pandac$ClassDecl* result138;
    panda$core$String$Index$nullable idx144;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp151;
    org$pandalanguage$pandac$Symbol* rootAlias174;
    panda$core$Int64 $tmp127 = (($fn126) self->currentClass->$class->vtable[7])(self->currentClass);
    panda$core$Bit $tmp128 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp127, ((panda$core$Int64) { 0 }));
    if ($tmp128.value) {
    {
        panda$core$Object* $tmp131 = (($fn130) self->currentClass->$class->vtable[4])(self->currentClass);
        ITable* $tmp132 = ((org$pandalanguage$pandac$ClassDecl*) $tmp131)->aliases->$class->itable;
        while ($tmp132->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp132 = $tmp132->next;
        }
        $fn134 $tmp133 = $tmp132->methods[1];
        panda$core$Object* $tmp135 = $tmp133(((org$pandalanguage$pandac$ClassDecl*) $tmp131)->aliases, ((panda$core$Object*) p_name));
        alias129 = ((panda$core$String*) $tmp135);
        if (((panda$core$Bit) { alias129 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp137 = (($fn136) self->$class->vtable[11])(self, alias129);
            return $tmp137;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp140 = (($fn139) self->$class->vtable[11])(self, p_name);
    result138 = $tmp140;
    panda$core$Int64 $tmp142 = (($fn141) self->currentClass->$class->vtable[7])(self->currentClass);
    panda$core$Bit $tmp143 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp142, ((panda$core$Int64) { 0 }));
    if ($tmp143.value) {
    {
        if (((panda$core$Bit) { result138 == NULL }).value) {
        {
            panda$core$Object* $tmp146 = (($fn145) self->currentClass->$class->vtable[4])(self->currentClass);
            panda$core$String$Index$nullable $tmp148 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp146))->name, &$s147);
            idx144 = $tmp148;
            if (((panda$core$Bit) { idx144.nonnull }).value) {
            {
                panda$core$Object* $tmp150 = (($fn149) self->currentClass->$class->vtable[4])(self->currentClass);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp151, ((panda$core$String$Index$nullable) { .nonnull = false }), idx144, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
                panda$core$String* $tmp152 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp150))->name, $tmp151);
                panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp155 = (($fn154) self->$class->vtable[11])(self, $tmp153);
                result138 = $tmp155;
            }
            }
        }
        }
        if (((panda$core$Bit) { result138 == NULL }).value) {
        {
            panda$core$Object* $tmp157 = (($fn156) self->currentClass->$class->vtable[4])(self->currentClass);
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp157))->name, &$s158);
            panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp162 = (($fn161) self->$class->vtable[11])(self, $tmp160);
            result138 = $tmp162;
        }
        }
        bool $tmp163 = ((panda$core$Bit) { result138 == NULL }).value;
        if (!$tmp163) goto $l164;
        panda$core$Object* $tmp166 = (($fn165) self->currentClass->$class->vtable[4])(self->currentClass);
        $tmp163 = ((panda$core$Bit) { ((org$pandalanguage$pandac$ClassDecl*) $tmp166)->owner != NULL }).value;
        $l164:;
        panda$core$Bit $tmp167 = { $tmp163 };
        if ($tmp167.value) {
        {
            panda$core$Object* $tmp169 = (($fn168) self->currentClass->$class->vtable[4])(self->currentClass);
            (($fn170) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp169)->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp172 = (($fn171) self->$class->vtable[3])(self, p_name);
            result138 = $tmp172;
            (($fn173) self->currentClass->$class->vtable[3])(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result138 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp176 = (($fn175) self->root->$class->vtable[6])(self->root, p_name);
        rootAlias174 = $tmp176;
        bool $tmp177 = ((panda$core$Bit) { rootAlias174 != NULL }).value;
        if (!$tmp177) goto $l178;
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias174->kind, ((panda$core$Int64) { 200 }));
        $tmp177 = $tmp179.value;
        $l178:;
        panda$core$Bit $tmp180 = { $tmp177 };
        if ($tmp180.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp182 = (($fn181) self->$class->vtable[11])(self, ((org$pandalanguage$pandac$Alias*) rootAlias174)->fullName);
            result138 = $tmp182;
        }
        }
    }
    }
    return result138;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 $match$6216183;
    org$pandalanguage$pandac$ClassDecl* resolved185;
    org$pandalanguage$pandac$Symbol* s190;
    panda$core$Int64 $match$6529193;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp198;
    panda$collections$Array* subtypes202;
    panda$collections$Array* subtypes223;
    panda$collections$Array* subtypes236;
    panda$core$MutableString* name243;
    panda$core$String* separator249;
    panda$core$Range$LTpanda$core$Int64$GT $tmp251;
    org$pandalanguage$pandac$Type* resolved272;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    {
        $match$6216183 = p_type->typeKind;
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6216183, ((panda$core$Int64) { 10 }));
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp187 = (($fn186) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved185 = $tmp187;
            if (((panda$core$Bit) { resolved185 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp189 = (($fn188) resolved185->$class->vtable[3])(resolved185);
                return $tmp189;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp192 = (($fn191) self->symbolTable->$class->vtable[6])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s190 = $tmp192;
            if (((panda$core$Bit) { s190 != NULL }).value) {
            {
                {
                    $match$6529193 = s190->kind;
                    panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6529193, ((panda$core$Int64) { 200 }));
                    if ($tmp194.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp195 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp195->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp195->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp195, ((org$pandalanguage$pandac$Alias*) s190)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$core$Bit) { true }));
                        return $tmp195;
                    }
                    }
                    else {
                    panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6529193, ((panda$core$Int64) { 203 }));
                    if ($tmp197.value) {
                    {
                        gp198 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s190);
                        org$pandalanguage$pandac$ClassDecl* $tmp200 = (($fn199) self->$class->vtable[12])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, gp198->owner);
                        (($fn201) self->$class->vtable[5])(self, $tmp200);
                        panda$collections$Array* $tmp203 = (panda$collections$Array*) malloc(40);
                        $tmp203->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp203->refCount.value = 1;
                        panda$collections$Array$init($tmp203);
                        subtypes202 = $tmp203;
                        panda$collections$Array$add$panda$collections$Array$T(subtypes202, ((panda$core$Object*) gp198->bound));
                        org$pandalanguage$pandac$Type* $tmp205 = (org$pandalanguage$pandac$Type*) malloc(64);
                        $tmp205->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp205->refCount.value = 1;
                        panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(gp198->owner, &$s207);
                        panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, ((org$pandalanguage$pandac$Symbol*) gp198)->name);
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp205, $tmp209, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes202), ((panda$core$Bit) { true }));
                        return $tmp205;
                    }
                    }
                    else {
                    panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6529193, ((panda$core$Int64) { 207 }));
                    if ($tmp210.value) {
                    {
                        return ((org$pandalanguage$pandac$Type*) s190);
                    }
                    }
                    else {
                    panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6529193, ((panda$core$Int64) { 201 }));
                    if ($tmp211.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp213 = (($fn212) ((org$pandalanguage$pandac$ClassDecl*) s190)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) s190));
                        return $tmp213;
                    }
                    }
                    }
                    }
                    }
                }
            }
            }
            org$pandalanguage$pandac$Position* $tmp215 = (($fn214) self->$class->vtable[95])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset);
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s216, ((panda$core$Object*) p_type));
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
            (($fn220) self->$class->vtable[97])(self, $tmp215, $tmp219);
            org$pandalanguage$pandac$Type* $tmp221 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp221;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6216183, ((panda$core$Int64) { 11 }));
        if ($tmp222.value) {
        {
            panda$collections$Array* $tmp224 = (panda$collections$Array*) malloc(40);
            $tmp224->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp224->refCount.value = 1;
            panda$collections$Array$init($tmp224);
            subtypes223 = $tmp224;
            panda$core$Object* $tmp227 = (($fn226) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp229 = (($fn228) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp227));
            panda$collections$Array$add$panda$collections$Array$T(subtypes223, ((panda$core$Object*) $tmp229));
            org$pandalanguage$pandac$Type* $tmp230 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp230->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp230->refCount.value = 1;
            panda$core$Object* $tmp232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes223, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp232))->name, &$s233);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp230, $tmp234, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes223), ((panda$core$Bit) { true }));
            return $tmp230;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6216183, ((panda$core$Int64) { 21 }));
        if ($tmp235.value) {
        {
            panda$collections$Array* $tmp237 = (panda$collections$Array*) malloc(40);
            $tmp237->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp237->refCount.value = 1;
            panda$collections$Array$init($tmp237);
            subtypes236 = $tmp237;
            panda$core$Object* $tmp240 = (($fn239) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp242 = (($fn241) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp240));
            panda$collections$Array$add$panda$collections$Array$T(subtypes236, ((panda$core$Object*) $tmp242));
            panda$core$MutableString* $tmp244 = (panda$core$MutableString*) malloc(40);
            $tmp244->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp244->refCount.value = 1;
            panda$core$Object* $tmp246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes236, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp244, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp246))->name);
            name243 = $tmp244;
            (($fn248) name243->$class->vtable[3])(name243, &$s247);
            separator249 = &$s250;
            panda$core$Int64 $tmp253 = (($fn252) p_type->subtypes->$class->vtable[3])(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp251, ((panda$core$Int64) { 1 }), $tmp253, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp255 = $tmp251.start.value;
            panda$core$Int64 i254 = { $tmp255 };
            int64_t $tmp257 = $tmp251.end.value;
            int64_t $tmp258 = $tmp251.step.value;
            bool $tmp259 = $tmp251.inclusive.value;
            bool $tmp266 = $tmp258 > 0;
            if ($tmp266) goto $l264; else goto $l265;
            $l264:;
            if ($tmp259) goto $l267; else goto $l268;
            $l267:;
            if ($tmp255 <= $tmp257) goto $l260; else goto $l262;
            $l268:;
            if ($tmp255 < $tmp257) goto $l260; else goto $l262;
            $l265:;
            if ($tmp259) goto $l269; else goto $l270;
            $l269:;
            if ($tmp255 >= $tmp257) goto $l260; else goto $l262;
            $l270:;
            if ($tmp255 > $tmp257) goto $l260; else goto $l262;
            $l260:;
            {
                panda$core$Object* $tmp274 = (($fn273) p_type->subtypes->$class->vtable[2])(p_type->subtypes, i254);
                org$pandalanguage$pandac$Type* $tmp276 = (($fn275) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp274));
                resolved272 = $tmp276;
                panda$collections$Array$add$panda$collections$Array$T(subtypes236, ((panda$core$Object*) resolved272));
                (($fn277) name243->$class->vtable[3])(name243, separator249);
                (($fn278) name243->$class->vtable[3])(name243, ((org$pandalanguage$pandac$Symbol*) resolved272)->name);
                separator249 = &$s279;
            }
            $l263:;
            if ($tmp266) goto $l281; else goto $l282;
            $l281:;
            int64_t $tmp283 = $tmp257 - i254.value;
            if ($tmp259) goto $l284; else goto $l285;
            $l284:;
            if ($tmp283 >= $tmp258) goto $l280; else goto $l262;
            $l285:;
            if ($tmp283 > $tmp258) goto $l280; else goto $l262;
            $l282:;
            int64_t $tmp287 = i254.value - $tmp257;
            if ($tmp259) goto $l288; else goto $l289;
            $l288:;
            if ($tmp287 >= -$tmp258) goto $l280; else goto $l262;
            $l289:;
            if ($tmp287 > -$tmp258) goto $l280; else goto $l262;
            $l280:;
            i254.value += $tmp258;
            goto $l260;
            $l262:;
            (($fn292) name243->$class->vtable[3])(name243, &$s291);
            org$pandalanguage$pandac$Type* $tmp293 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp293->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp293->refCount.value = 1;
            panda$core$String* $tmp296 = (($fn295) name243->$class->vtable[0])(name243);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp293, $tmp296, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes236), ((panda$core$Bit) { true }));
            return $tmp293;
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
    org$pandalanguage$pandac$SymbolTable* old299;
    panda$collections$Iterator* m$Iter312;
    org$pandalanguage$pandac$MethodDecl* m324;
    panda$core$Range$LTpanda$core$Int64$GT $tmp335;
    panda$collections$Iterator* p$Iter369;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p381;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    (($fn297) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
    (($fn298) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
    old299 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp301 = (($fn300) self->$class->vtable[4])(self, p_cl->rawSuper);
        p_cl->rawSuper = $tmp301;
        panda$core$Bit $tmp304 = (($fn303) p_cl->annotations->$class->vtable[9])(p_cl->annotations);
        panda$core$Bit $tmp305 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp304);
        bool $tmp302 = $tmp305.value;
        if (!$tmp302) goto $l306;
        panda$core$Bit $tmp308 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s307);
        $tmp302 = $tmp308.value;
        $l306:;
        panda$core$Bit $tmp309 = { $tmp302 };
        if ($tmp309.value) {
        {
            panda$core$Int64 $tmp310 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp311 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp310);
            p_cl->annotations->flags = $tmp311;
            {
                ITable* $tmp313 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp313 = $tmp313->next;
                }
                $fn315 $tmp314 = $tmp313->methods[0];
                panda$collections$Iterator* $tmp316 = $tmp314(((panda$collections$Iterable*) p_cl->methods));
                m$Iter312 = $tmp316;
                $l317:;
                ITable* $tmp319 = m$Iter312->$class->itable;
                while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp319 = $tmp319->next;
                }
                $fn321 $tmp320 = $tmp319->methods[0];
                panda$core$Bit $tmp322 = $tmp320(m$Iter312);
                panda$core$Bit $tmp323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp322);
                if (!$tmp323.value) goto $l318;
                {
                    ITable* $tmp325 = m$Iter312->$class->itable;
                    while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp325 = $tmp325->next;
                    }
                    $fn327 $tmp326 = $tmp325->methods[1];
                    panda$core$Object* $tmp328 = $tmp326(m$Iter312);
                    m324 = ((org$pandalanguage$pandac$MethodDecl*) $tmp328);
                    panda$core$Int64 $tmp329 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp330 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m324->annotations->flags, $tmp329);
                    m324->annotations->flags = $tmp330;
                    panda$core$Bit $tmp332 = (($fn331) self->scanner->$class->vtable[7])(self->scanner, m324->annotations, m324->body);
                    if ($tmp332.value) {
                    {
                        panda$core$Int64 $tmp333 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                        panda$core$Int64 $tmp334 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m324->annotations->flags, $tmp333);
                        m324->annotations->flags = $tmp334;
                    }
                    }
                }
                goto $l317;
                $l318:;
            }
        }
        }
    }
    }
    panda$core$Int64 $tmp336 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp335, ((panda$core$Int64) { 0 }), $tmp336, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp338 = $tmp335.start.value;
    panda$core$Int64 i337 = { $tmp338 };
    int64_t $tmp340 = $tmp335.end.value;
    int64_t $tmp341 = $tmp335.step.value;
    bool $tmp342 = $tmp335.inclusive.value;
    bool $tmp349 = $tmp341 > 0;
    if ($tmp349) goto $l347; else goto $l348;
    $l347:;
    if ($tmp342) goto $l350; else goto $l351;
    $l350:;
    if ($tmp338 <= $tmp340) goto $l343; else goto $l345;
    $l351:;
    if ($tmp338 < $tmp340) goto $l343; else goto $l345;
    $l348:;
    if ($tmp342) goto $l352; else goto $l353;
    $l352:;
    if ($tmp338 >= $tmp340) goto $l343; else goto $l345;
    $l353:;
    if ($tmp338 > $tmp340) goto $l343; else goto $l345;
    $l343:;
    {
        panda$core$Object* $tmp355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->rawInterfaces, i337);
        org$pandalanguage$pandac$Type* $tmp357 = (($fn356) self->$class->vtable[4])(self, ((org$pandalanguage$pandac$Type*) $tmp355));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->rawInterfaces, i337, ((panda$core$Object*) $tmp357));
    }
    $l346:;
    if ($tmp349) goto $l359; else goto $l360;
    $l359:;
    int64_t $tmp361 = $tmp340 - i337.value;
    if ($tmp342) goto $l362; else goto $l363;
    $l362:;
    if ($tmp361 >= $tmp341) goto $l358; else goto $l345;
    $l363:;
    if ($tmp361 > $tmp341) goto $l358; else goto $l345;
    $l360:;
    int64_t $tmp365 = i337.value - $tmp340;
    if ($tmp342) goto $l366; else goto $l367;
    $l366:;
    if ($tmp365 >= -$tmp341) goto $l358; else goto $l345;
    $l367:;
    if ($tmp365 > -$tmp341) goto $l358; else goto $l345;
    $l358:;
    i337.value += $tmp341;
    goto $l343;
    $l345:;
    {
        ITable* $tmp370 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp370 = $tmp370->next;
        }
        $fn372 $tmp371 = $tmp370->methods[0];
        panda$collections$Iterator* $tmp373 = $tmp371(((panda$collections$Iterable*) p_cl->parameters));
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
            p381 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp385);
            org$pandalanguage$pandac$Type* $tmp387 = (($fn386) self->$class->vtable[4])(self, p381->bound);
            p381->bound = $tmp387;
        }
        goto $l374;
        $l375:;
    }
    self->symbolTable = old299;
    (($fn388) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn389) self->currentFile->$class->vtable[3])(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old393;
    panda$collections$Iterator* p$Iter394;
    org$pandalanguage$pandac$MethodDecl$Parameter* p406;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    (($fn390) self->$class->vtable[5])(self, p_m->owner);
    (($fn391) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    (($fn392) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_m->owner));
    old393 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp395 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp395 = $tmp395->next;
        }
        $fn397 $tmp396 = $tmp395->methods[0];
        panda$collections$Iterator* $tmp398 = $tmp396(((panda$collections$Iterable*) p_m->parameters));
        p$Iter394 = $tmp398;
        $l399:;
        ITable* $tmp401 = p$Iter394->$class->itable;
        while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp401 = $tmp401->next;
        }
        $fn403 $tmp402 = $tmp401->methods[0];
        panda$core$Bit $tmp404 = $tmp402(p$Iter394);
        panda$core$Bit $tmp405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp404);
        if (!$tmp405.value) goto $l400;
        {
            ITable* $tmp407 = p$Iter394->$class->itable;
            while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp407 = $tmp407->next;
            }
            $fn409 $tmp408 = $tmp407->methods[1];
            panda$core$Object* $tmp410 = $tmp408(p$Iter394);
            p406 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp410);
            org$pandalanguage$pandac$Type* $tmp412 = (($fn411) self->$class->vtable[4])(self, p406->type);
            p406->type = $tmp412;
        }
        goto $l399;
        $l400:;
    }
    org$pandalanguage$pandac$Type* $tmp414 = (($fn413) self->$class->vtable[4])(self, p_m->returnType);
    p_m->returnType = $tmp414;
    p_m->resolved = ((panda$core$Bit) { true });
    self->symbolTable = old393;
    (($fn415) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn416) self->currentFile->$class->vtable[3])(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old419;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    (($fn417) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    (($fn418) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_f->owner));
    old419 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp420 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp422 = (($fn421) p_f->type->$class->vtable[5])(p_f->type, ((panda$core$Object*) $tmp420));
    if ($tmp422.value) {
    {
        org$pandalanguage$pandac$Type* $tmp424 = (($fn423) self->$class->vtable[4])(self, p_f->type);
        p_f->type = $tmp424;
        if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp426 = (($fn425) self->$class->vtable[69])(self, p_f->rawValue);
            org$pandalanguage$pandac$IRNode* $tmp428 = (($fn427) self->$class->vtable[33])(self, $tmp426, p_f->type);
            p_f->value = $tmp428;
        }
        }
        (($fn429) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn430) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old419;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        (($fn432) self->$class->vtable[96])(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s431);
        (($fn433) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn434) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old419;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp436 = (($fn435) self->$class->vtable[69])(self, p_f->rawValue);
    p_f->value = $tmp436;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        (($fn437) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn438) self->currentFile->$class->vtable[3])(self->currentFile);
        self->symbolTable = old419;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp440 = (($fn439) self->$class->vtable[27])(self, p_f->value);
    p_f->type = $tmp440;
    org$pandalanguage$pandac$IRNode* $tmp442 = (($fn441) self->$class->vtable[33])(self, p_f->value, p_f->type);
    p_f->value = $tmp442;
    (($fn443) self->currentClass->$class->vtable[3])(self->currentClass);
    (($fn444) self->currentFile->$class->vtable[3])(self->currentFile);
    self->symbolTable = old419;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$11645445;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$11645445 = p_expr->kind;
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11645445, ((panda$core$Int64) { 1037 }));
        if ($tmp446.value) {
        {
            (($fn448) self->$class->vtable[96])(self, p_expr->offset, &$s447);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11645445, ((panda$core$Int64) { 1039 }));
        if ($tmp449.value) {
        {
            (($fn451) self->$class->vtable[96])(self, p_expr->offset, &$s450);
            panda$core$Object* $tmp452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp452)->payload)));
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11645445, ((panda$core$Int64) { 1024 }));
        if ($tmp453.value) {
        {
            (($fn455) self->$class->vtable[96])(self, p_expr->offset, &$s454);
            return NULL;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp457 = (($fn456) self->$class->vtable[27])(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp459 = (($fn458) self->$class->vtable[33])(self, p_expr, $tmp457);
            return $tmp459;
        }
        }
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn460) self->$class->vtable[5])(self, p_cl);
    bool $tmp461 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp461) goto $l462;
    org$pandalanguage$pandac$Type* $tmp463 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp465 = (($fn464) self->$class->vtable[28])(self, p_cl->rawSuper, $tmp463);
    $tmp461 = ((panda$core$Bit) { $tmp465.nonnull }).value;
    $l462:;
    panda$core$Bit $tmp466 = { $tmp461 };
    return $tmp466;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result468;
    org$pandalanguage$pandac$ClassDecl* s477;
    panda$collections$Iterator* f$Iter482;
    org$pandalanguage$pandac$FieldDecl* f494;
    (($fn467) self->$class->vtable[5])(self, p_cl);
    panda$collections$Array* $tmp469 = (panda$collections$Array*) malloc(40);
    $tmp469->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp469->refCount.value = 1;
    panda$collections$Array$init($tmp469);
    result468 = $tmp469;
    panda$core$Bit $tmp473 = (($fn472) self->$class->vtable[9])(self, p_cl);
    panda$core$Bit $tmp474 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp473);
    bool $tmp471 = $tmp474.value;
    if (!$tmp471) goto $l475;
    $tmp471 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l475:;
    panda$core$Bit $tmp476 = { $tmp471 };
    if ($tmp476.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp479 = (($fn478) self->$class->vtable[14])(self, p_cl->rawSuper);
        s477 = $tmp479;
        if (((panda$core$Bit) { s477 != NULL }).value) {
        {
            panda$collections$ListView* $tmp481 = (($fn480) self->$class->vtable[10])(self, s477);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result468, ((panda$collections$CollectionView*) $tmp481));
        }
        }
    }
    }
    {
        ITable* $tmp483 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp483->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp483 = $tmp483->next;
        }
        $fn485 $tmp484 = $tmp483->methods[0];
        panda$collections$Iterator* $tmp486 = $tmp484(((panda$collections$Iterable*) p_cl->fields));
        f$Iter482 = $tmp486;
        $l487:;
        ITable* $tmp489 = f$Iter482->$class->itable;
        while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp489 = $tmp489->next;
        }
        $fn491 $tmp490 = $tmp489->methods[0];
        panda$core$Bit $tmp492 = $tmp490(f$Iter482);
        panda$core$Bit $tmp493 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp492);
        if (!$tmp493.value) goto $l488;
        {
            ITable* $tmp495 = f$Iter482->$class->itable;
            while ($tmp495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp495 = $tmp495->next;
            }
            $fn497 $tmp496 = $tmp495->methods[1];
            panda$core$Object* $tmp498 = $tmp496(f$Iter482);
            f494 = ((org$pandalanguage$pandac$FieldDecl*) $tmp498);
            panda$core$Bit $tmp500 = (($fn499) f494->annotations->$class->vtable[5])(f494->annotations);
            panda$core$Bit $tmp501 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp500);
            if ($tmp501.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result468, ((panda$core$Object*) f494));
            }
            }
        }
        goto $l487;
        $l488:;
    }
    return ((panda$collections$ListView*) result468);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result502;
    panda$core$String* suffix505;
    panda$core$Bit found511;
    panda$collections$Iterator* dir$Iter512;
    panda$io$File* dir524;
    panda$io$File* f529;
    panda$core$Bit $tmp531;
    panda$core$Object* $tmp504 = (($fn503) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
    result502 = ((org$pandalanguage$pandac$ClassDecl*) $tmp504);
    if (((panda$core$Bit) { result502 == NULL }).value) {
    {
        panda$core$String* $tmp508 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s506, &$s507);
        panda$core$String* $tmp510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s509);
        suffix505 = $tmp510;
        found511 = ((panda$core$Bit) { false });
        {
            ITable* $tmp513 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp513 = $tmp513->next;
            }
            $fn515 $tmp514 = $tmp513->methods[0];
            panda$collections$Iterator* $tmp516 = $tmp514(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter512 = $tmp516;
            $l517:;
            ITable* $tmp519 = dir$Iter512->$class->itable;
            while ($tmp519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp519 = $tmp519->next;
            }
            $fn521 $tmp520 = $tmp519->methods[0];
            panda$core$Bit $tmp522 = $tmp520(dir$Iter512);
            panda$core$Bit $tmp523 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp522);
            if (!$tmp523.value) goto $l518;
            {
                ITable* $tmp525 = dir$Iter512->$class->itable;
                while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp525 = $tmp525->next;
                }
                $fn527 $tmp526 = $tmp525->methods[1];
                panda$core$Object* $tmp528 = $tmp526(dir$Iter512);
                dir524 = ((panda$io$File*) $tmp528);
                panda$io$File* $tmp530 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir524, suffix505);
                f529 = $tmp530;
                panda$io$File$exists$R$panda$core$Bit(&$tmp531, f529);
                if ($tmp531.value) {
                {
                    found511 = ((panda$core$Bit) { true });
                    (($fn532) self->$class->vtable[93])(self, f529);
                    panda$core$Object* $tmp534 = (($fn533) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
                    result502 = ((org$pandalanguage$pandac$ClassDecl*) $tmp534);
                }
                }
            }
            goto $l517;
            $l518:;
        }
    }
    }
    return result502;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result535;
    panda$core$String* suffix538;
    panda$core$Bit found544;
    panda$collections$Iterator* dir$Iter545;
    panda$io$File* dir557;
    panda$io$File* f562;
    panda$core$Bit $tmp564;
    panda$core$Int64 oldErrorCount565;
    panda$core$Object* $tmp537 = (($fn536) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
    result535 = ((org$pandalanguage$pandac$ClassDecl*) $tmp537);
    if (((panda$core$Bit) { result535 == NULL }).value) {
    {
        panda$core$String* $tmp541 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s539, &$s540);
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
        suffix538 = $tmp543;
        found544 = ((panda$core$Bit) { false });
        {
            ITable* $tmp546 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp546->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp546 = $tmp546->next;
            }
            $fn548 $tmp547 = $tmp546->methods[0];
            panda$collections$Iterator* $tmp549 = $tmp547(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter545 = $tmp549;
            $l550:;
            ITable* $tmp552 = dir$Iter545->$class->itable;
            while ($tmp552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp552 = $tmp552->next;
            }
            $fn554 $tmp553 = $tmp552->methods[0];
            panda$core$Bit $tmp555 = $tmp553(dir$Iter545);
            panda$core$Bit $tmp556 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp555);
            if (!$tmp556.value) goto $l551;
            {
                ITable* $tmp558 = dir$Iter545->$class->itable;
                while ($tmp558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp558 = $tmp558->next;
                }
                $fn560 $tmp559 = $tmp558->methods[1];
                panda$core$Object* $tmp561 = $tmp559(dir$Iter545);
                dir557 = ((panda$io$File*) $tmp561);
                panda$io$File* $tmp563 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir557, suffix538);
                f562 = $tmp563;
                panda$io$File$exists$R$panda$core$Bit(&$tmp564, f562);
                if ($tmp564.value) {
                {
                    found544 = ((panda$core$Bit) { true });
                    oldErrorCount565 = self->errorCount;
                    (($fn566) self->$class->vtable[93])(self, f562);
                    panda$core$Object* $tmp568 = (($fn567) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) p_fullName)));
                    result535 = ((org$pandalanguage$pandac$ClassDecl*) $tmp568);
                    bool $tmp569 = ((panda$core$Bit) { result535 == NULL }).value;
                    if (!$tmp569) goto $l570;
                    panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount565);
                    $tmp569 = $tmp571.value;
                    $l570:;
                    panda$core$Bit $tmp572 = { $tmp569 };
                    if ($tmp572.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp573 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp573->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp573->refCount.value = 1;
                        panda$core$String* $tmp575 = panda$io$File$name$R$panda$core$String(f562);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp573, $tmp575, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s576, ((panda$core$Object*) f562));
                        panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
                        panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, p_fullName);
                        panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s581);
                        (($fn583) self->$class->vtable[97])(self, $tmp573, $tmp582);
                    }
                    }
                }
                }
            }
            goto $l550;
            $l551:;
        }
        panda$core$Bit $tmp584 = panda$core$Bit$$NOT$R$panda$core$Bit(found544);
        if ($tmp584.value) {
        {
            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s585, suffix538);
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp588, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s590);
            (($fn592) self->$class->vtable[96])(self, p_offset, $tmp591);
        }
        }
    }
    }
    return result535;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type593;
    org$pandalanguage$pandac$ClassDecl* result602;
    org$pandalanguage$pandac$Annotations* annotations606;
    org$pandalanguage$pandac$Type* supertype612;
    panda$collections$Array* interfaces615;
    panda$collections$Iterator* intf$Iter618;
    org$pandalanguage$pandac$Type* intf630;
    panda$collections$HashMap* aliases637;
    panda$core$Range$LTpanda$core$Int64$GT $tmp640;
    panda$collections$Iterator* m$Iter687;
    org$pandalanguage$pandac$MethodDecl* m699;
    panda$collections$Array* parameters705;
    panda$collections$Iterator* p$Iter708;
    org$pandalanguage$pandac$MethodDecl$Parameter* p720;
    org$pandalanguage$pandac$MethodDecl* clone729;
    panda$collections$Iterator* f$Iter733;
    org$pandalanguage$pandac$FieldDecl* f745;
    org$pandalanguage$pandac$FieldDecl* clone751;
    org$pandalanguage$pandac$Type* $tmp595 = (($fn594) self->$class->vtable[4])(self, p_rawType);
    type593 = $tmp595;
    panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type593->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp596.value) {
    {
        panda$core$Object* $tmp598 = (($fn597) type593->subtypes->$class->vtable[2])(type593->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp600 = (($fn599) self->$class->vtable[13])(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp598));
        return $tmp600;
    }
    }
    panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type593->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp601.value) {
    {
        return p_cl;
    }
    }
    panda$core$Object* $tmp604 = (($fn603) self->classes->$class->vtable[3])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type593)->name)));
    result602 = ((org$pandalanguage$pandac$ClassDecl*) $tmp604);
    if (((panda$core$Bit) { result602 == NULL }).value) {
    {
        (($fn605) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp607 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp607->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp607->refCount.value = 1;
        panda$core$Int64 $tmp609 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp610 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp609);
        panda$core$Int64 $tmp611 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp610);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp607, $tmp611);
        annotations606 = $tmp607;
        org$pandalanguage$pandac$Type* $tmp614 = (($fn613) self->$class->vtable[25])(self, type593, p_cl->rawSuper);
        supertype612 = $tmp614;
        panda$collections$Array* $tmp616 = (panda$collections$Array*) malloc(40);
        $tmp616->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp616->refCount.value = 1;
        panda$collections$Array$init($tmp616);
        interfaces615 = $tmp616;
        {
            ITable* $tmp619 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp619 = $tmp619->next;
            }
            $fn621 $tmp620 = $tmp619->methods[0];
            panda$collections$Iterator* $tmp622 = $tmp620(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter618 = $tmp622;
            $l623:;
            ITable* $tmp625 = intf$Iter618->$class->itable;
            while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp625 = $tmp625->next;
            }
            $fn627 $tmp626 = $tmp625->methods[0];
            panda$core$Bit $tmp628 = $tmp626(intf$Iter618);
            panda$core$Bit $tmp629 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp628);
            if (!$tmp629.value) goto $l624;
            {
                ITable* $tmp631 = intf$Iter618->$class->itable;
                while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp631 = $tmp631->next;
                }
                $fn633 $tmp632 = $tmp631->methods[1];
                panda$core$Object* $tmp634 = $tmp632(intf$Iter618);
                intf630 = ((org$pandalanguage$pandac$Type*) $tmp634);
                org$pandalanguage$pandac$Type* $tmp636 = (($fn635) self->$class->vtable[25])(self, type593, intf630);
                panda$collections$Array$add$panda$collections$Array$T(interfaces615, ((panda$core$Object*) $tmp636));
            }
            goto $l623;
            $l624:;
        }
        panda$collections$HashMap* $tmp638 = (panda$collections$HashMap*) malloc(56);
        $tmp638->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp638->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp638, p_cl->aliases);
        aliases637 = $tmp638;
        ITable* $tmp641 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp641->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp641 = $tmp641->next;
        }
        $fn643 $tmp642 = $tmp641->methods[0];
        panda$core$Int64 $tmp644 = $tmp642(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp640, ((panda$core$Int64) { 0 }), $tmp644, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp646 = $tmp640.start.value;
        panda$core$Int64 i645 = { $tmp646 };
        int64_t $tmp648 = $tmp640.end.value;
        int64_t $tmp649 = $tmp640.step.value;
        bool $tmp650 = $tmp640.inclusive.value;
        bool $tmp657 = $tmp649 > 0;
        if ($tmp657) goto $l655; else goto $l656;
        $l655:;
        if ($tmp650) goto $l658; else goto $l659;
        $l658:;
        if ($tmp646 <= $tmp648) goto $l651; else goto $l653;
        $l659:;
        if ($tmp646 < $tmp648) goto $l651; else goto $l653;
        $l656:;
        if ($tmp650) goto $l660; else goto $l661;
        $l660:;
        if ($tmp646 >= $tmp648) goto $l651; else goto $l653;
        $l661:;
        if ($tmp646 > $tmp648) goto $l651; else goto $l653;
        $l651:;
        {
            ITable* $tmp663 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp663->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp663 = $tmp663->next;
            }
            $fn665 $tmp664 = $tmp663->methods[0];
            panda$core$Object* $tmp666 = $tmp664(((panda$collections$ListView*) p_cl->parameters), i645);
            panda$core$Int64 $tmp667 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i645, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp669 = (($fn668) type593->subtypes->$class->vtable[2])(type593->subtypes, $tmp667);
            (($fn670) aliases637->$class->vtable[5])(aliases637, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp666))->name)), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp669))->name));
        }
        $l654:;
        if ($tmp657) goto $l672; else goto $l673;
        $l672:;
        int64_t $tmp674 = $tmp648 - i645.value;
        if ($tmp650) goto $l675; else goto $l676;
        $l675:;
        if ($tmp674 >= $tmp649) goto $l671; else goto $l653;
        $l676:;
        if ($tmp674 > $tmp649) goto $l671; else goto $l653;
        $l673:;
        int64_t $tmp678 = i645.value - $tmp648;
        if ($tmp650) goto $l679; else goto $l680;
        $l679:;
        if ($tmp678 >= -$tmp649) goto $l671; else goto $l653;
        $l680:;
        if ($tmp678 > -$tmp649) goto $l671; else goto $l653;
        $l671:;
        i645.value += $tmp649;
        goto $l651;
        $l653:;
        org$pandalanguage$pandac$ClassDecl* $tmp682 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
        $tmp682->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp682->refCount.value = 1;
        panda$collections$Array* $tmp684 = (panda$collections$Array*) malloc(40);
        $tmp684->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp684->refCount.value = 1;
        panda$collections$Array$init($tmp684);
        panda$core$Object* $tmp686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp682, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, ((panda$collections$MapView*) aliases637), p_cl->doccomment, annotations606, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type593)->name, supertype612, interfaces615, $tmp684, ((org$pandalanguage$pandac$SymbolTable*) $tmp686));
        result602 = $tmp682;
        result602->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp688 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp688 = $tmp688->next;
            }
            $fn690 $tmp689 = $tmp688->methods[0];
            panda$collections$Iterator* $tmp691 = $tmp689(((panda$collections$Iterable*) p_cl->methods));
            m$Iter687 = $tmp691;
            $l692:;
            ITable* $tmp694 = m$Iter687->$class->itable;
            while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp694 = $tmp694->next;
            }
            $fn696 $tmp695 = $tmp694->methods[0];
            panda$core$Bit $tmp697 = $tmp695(m$Iter687);
            panda$core$Bit $tmp698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp697);
            if (!$tmp698.value) goto $l693;
            {
                ITable* $tmp700 = m$Iter687->$class->itable;
                while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp700 = $tmp700->next;
                }
                $fn702 $tmp701 = $tmp700->methods[1];
                panda$core$Object* $tmp703 = $tmp701(m$Iter687);
                m699 = ((org$pandalanguage$pandac$MethodDecl*) $tmp703);
                (($fn704) self->$class->vtable[6])(self, m699);
                panda$collections$Array* $tmp706 = (panda$collections$Array*) malloc(40);
                $tmp706->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp706->refCount.value = 1;
                panda$collections$Array$init($tmp706);
                parameters705 = $tmp706;
                {
                    ITable* $tmp709 = ((panda$collections$Iterable*) m699->parameters)->$class->itable;
                    while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp709 = $tmp709->next;
                    }
                    $fn711 $tmp710 = $tmp709->methods[0];
                    panda$collections$Iterator* $tmp712 = $tmp710(((panda$collections$Iterable*) m699->parameters));
                    p$Iter708 = $tmp712;
                    $l713:;
                    ITable* $tmp715 = p$Iter708->$class->itable;
                    while ($tmp715->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp715 = $tmp715->next;
                    }
                    $fn717 $tmp716 = $tmp715->methods[0];
                    panda$core$Bit $tmp718 = $tmp716(p$Iter708);
                    panda$core$Bit $tmp719 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp718);
                    if (!$tmp719.value) goto $l714;
                    {
                        ITable* $tmp721 = p$Iter708->$class->itable;
                        while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp721 = $tmp721->next;
                        }
                        $fn723 $tmp722 = $tmp721->methods[1];
                        panda$core$Object* $tmp724 = $tmp722(p$Iter708);
                        p720 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp724);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp725 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp725->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp725->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp728 = (($fn727) self->$class->vtable[25])(self, type593, p720->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp725, p720->name, $tmp728);
                        panda$collections$Array$add$panda$collections$Array$T(parameters705, ((panda$core$Object*) $tmp725));
                    }
                    goto $l713;
                    $l714:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp730 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
                $tmp730->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp730->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp730, result602, ((org$pandalanguage$pandac$Symbol*) m699)->offset, m699->doccomment, m699->annotations, m699->methodKind, ((org$pandalanguage$pandac$Symbol*) m699)->name, parameters705, m699->returnType, m699->body);
                clone729 = $tmp730;
                panda$collections$Array$add$panda$collections$Array$T(result602->methods, ((panda$core$Object*) clone729));
                (($fn732) result602->symbolTable->$class->vtable[2])(result602->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone729));
            }
            goto $l692;
            $l693:;
        }
        {
            ITable* $tmp734 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp734 = $tmp734->next;
            }
            $fn736 $tmp735 = $tmp734->methods[0];
            panda$collections$Iterator* $tmp737 = $tmp735(((panda$collections$Iterable*) p_cl->fields));
            f$Iter733 = $tmp737;
            $l738:;
            ITable* $tmp740 = f$Iter733->$class->itable;
            while ($tmp740->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp740 = $tmp740->next;
            }
            $fn742 $tmp741 = $tmp740->methods[0];
            panda$core$Bit $tmp743 = $tmp741(f$Iter733);
            panda$core$Bit $tmp744 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp743);
            if (!$tmp744.value) goto $l739;
            {
                ITable* $tmp746 = f$Iter733->$class->itable;
                while ($tmp746->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp746 = $tmp746->next;
                }
                $fn748 $tmp747 = $tmp746->methods[1];
                panda$core$Object* $tmp749 = $tmp747(f$Iter733);
                f745 = ((org$pandalanguage$pandac$FieldDecl*) $tmp749);
                (($fn750) self->$class->vtable[7])(self, f745);
                org$pandalanguage$pandac$FieldDecl* $tmp752 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
                $tmp752->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp752->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp755 = (($fn754) self->$class->vtable[25])(self, type593, f745->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp752, result602, ((org$pandalanguage$pandac$Symbol*) f745)->offset, f745->doccomment, f745->annotations, f745->fieldKind, ((org$pandalanguage$pandac$Symbol*) f745)->name, $tmp755, f745->rawValue);
                clone751 = $tmp752;
                panda$collections$Array$add$panda$collections$Array$T(result602->fields, ((panda$core$Object*) clone751));
                (($fn756) result602->symbolTable->$class->vtable[2])(result602->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone751));
            }
            goto $l738;
            $l739:;
        }
        (($fn757) self->classes->$class->vtable[5])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result602)->name)), ((panda$core$Object*) result602));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result602));
        (($fn758) self->currentClass->$class->vtable[3])(self->currentClass);
    }
    }
    return result602;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result759;
    panda$core$Int64 $match$16859760;
    {
        $match$16859760 = p_type->typeKind;
        panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16859760, ((panda$core$Int64) { 10 }));
        if ($tmp761.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp763 = (($fn762) self->$class->vtable[12])(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result759 = $tmp763;
        }
        }
        else {
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16859760, ((panda$core$Int64) { 11 }));
        bool $tmp765 = $tmp766.value;
        if ($tmp765) goto $l767;
        panda$core$Bit $tmp768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16859760, ((panda$core$Int64) { 21 }));
        $tmp765 = $tmp768.value;
        $l767:;
        panda$core$Bit $tmp769 = { $tmp765 };
        bool $tmp764 = $tmp769.value;
        if ($tmp764) goto $l770;
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16859760, ((panda$core$Int64) { 22 }));
        $tmp764 = $tmp771.value;
        $l770:;
        panda$core$Bit $tmp772 = { $tmp764 };
        if ($tmp772.value) {
        {
            panda$core$Object* $tmp774 = (($fn773) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp776 = (($fn775) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) $tmp774));
            result759 = $tmp776;
        }
        }
        else {
        {
        }
        }
        }
    }
    panda$core$Bit $tmp778 = (($fn777) result759->annotations->$class->vtable[12])(result759->annotations);
    if ($tmp778.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp780 = (($fn779) self->$class->vtable[13])(self, result759, p_type);
        result759 = $tmp780;
    }
    }
    return result759;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl781;
    panda$collections$Set* result785;
    panda$collections$Iterator* intf$Iter793;
    org$pandalanguage$pandac$Type* intf805;
    org$pandalanguage$pandac$ClassDecl* $tmp783 = (($fn782) self->$class->vtable[14])(self, p_t);
    cl781 = $tmp783;
    (($fn784) self->$class->vtable[5])(self, cl781);
    panda$collections$Set* $tmp786 = (panda$collections$Set*) malloc(24);
    $tmp786->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp786->refCount.value = 1;
    panda$collections$Set$init($tmp786);
    result785 = $tmp786;
    if (((panda$core$Bit) { cl781->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp789 = (($fn788) self->$class->vtable[25])(self, p_t, cl781->rawSuper);
        panda$collections$Set* $tmp791 = (($fn790) self->$class->vtable[15])(self, $tmp789);
        (($fn792) result785->$class->vtable[3])(result785, ((panda$collections$CollectionView*) $tmp791));
    }
    }
    {
        ITable* $tmp794 = ((panda$collections$Iterable*) cl781->rawInterfaces)->$class->itable;
        while ($tmp794->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp794 = $tmp794->next;
        }
        $fn796 $tmp795 = $tmp794->methods[0];
        panda$collections$Iterator* $tmp797 = $tmp795(((panda$collections$Iterable*) cl781->rawInterfaces));
        intf$Iter793 = $tmp797;
        $l798:;
        ITable* $tmp800 = intf$Iter793->$class->itable;
        while ($tmp800->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp800 = $tmp800->next;
        }
        $fn802 $tmp801 = $tmp800->methods[0];
        panda$core$Bit $tmp803 = $tmp801(intf$Iter793);
        panda$core$Bit $tmp804 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp803);
        if (!$tmp804.value) goto $l799;
        {
            ITable* $tmp806 = intf$Iter793->$class->itable;
            while ($tmp806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp806 = $tmp806->next;
            }
            $fn808 $tmp807 = $tmp806->methods[1];
            panda$core$Object* $tmp809 = $tmp807(intf$Iter793);
            intf805 = ((org$pandalanguage$pandac$Type*) $tmp809);
            org$pandalanguage$pandac$Type* $tmp811 = (($fn810) self->$class->vtable[25])(self, p_t, intf805);
            panda$collections$Set* $tmp813 = (($fn812) self->$class->vtable[15])(self, $tmp811);
            (($fn814) result785->$class->vtable[3])(result785, ((panda$collections$CollectionView*) $tmp813));
        }
        goto $l798;
        $l799:;
    }
    panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl781->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp815.value) {
    {
        (($fn816) result785->$class->vtable[2])(result785, ((panda$core$Object*) ((panda$collections$Key*) p_t)));
    }
    }
    return result785;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp822;
    panda$core$Int64 $tmp818 = (($fn817) p_t1->subtypes->$class->vtable[3])(p_t1->subtypes);
    panda$core$Int64 $tmp820 = (($fn819) p_t2->subtypes->$class->vtable[3])(p_t2->subtypes);
    panda$core$Bit $tmp821 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp818, $tmp820);
    if ($tmp821.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp824 = (($fn823) p_t1->subtypes->$class->vtable[3])(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp822, ((panda$core$Int64) { 0 }), $tmp824, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp826 = $tmp822.start.value;
    panda$core$Int64 i825 = { $tmp826 };
    int64_t $tmp828 = $tmp822.end.value;
    int64_t $tmp829 = $tmp822.step.value;
    bool $tmp830 = $tmp822.inclusive.value;
    bool $tmp837 = $tmp829 > 0;
    if ($tmp837) goto $l835; else goto $l836;
    $l835:;
    if ($tmp830) goto $l838; else goto $l839;
    $l838:;
    if ($tmp826 <= $tmp828) goto $l831; else goto $l833;
    $l839:;
    if ($tmp826 < $tmp828) goto $l831; else goto $l833;
    $l836:;
    if ($tmp830) goto $l840; else goto $l841;
    $l840:;
    if ($tmp826 >= $tmp828) goto $l831; else goto $l833;
    $l841:;
    if ($tmp826 > $tmp828) goto $l831; else goto $l833;
    $l831:;
    {
        panda$core$Object* $tmp844 = (($fn843) p_t1->subtypes->$class->vtable[2])(p_t1->subtypes, i825);
        panda$core$Object* $tmp846 = (($fn845) p_t2->subtypes->$class->vtable[2])(p_t2->subtypes, i825);
        panda$core$Bit $tmp848 = (($fn847) ((org$pandalanguage$pandac$Type*) $tmp844)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp844), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp846)));
        if ($tmp848.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l834:;
    if ($tmp837) goto $l850; else goto $l851;
    $l850:;
    int64_t $tmp852 = $tmp828 - i825.value;
    if ($tmp830) goto $l853; else goto $l854;
    $l853:;
    if ($tmp852 >= $tmp829) goto $l849; else goto $l833;
    $l854:;
    if ($tmp852 > $tmp829) goto $l849; else goto $l833;
    $l851:;
    int64_t $tmp856 = i825.value - $tmp828;
    if ($tmp830) goto $l857; else goto $l858;
    $l857:;
    if ($tmp856 >= -$tmp829) goto $l849; else goto $l833;
    $l858:;
    if ($tmp856 > -$tmp829) goto $l849; else goto $l833;
    $l849:;
    i825.value += $tmp829;
    goto $l831;
    $l833:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl860;
    panda$collections$Iterator* test$Iter863;
    org$pandalanguage$pandac$MethodDecl* test875;
    panda$collections$Iterator* raw$Iter892;
    org$pandalanguage$pandac$Type* raw904;
    org$pandalanguage$pandac$MethodDecl* result909;
    org$pandalanguage$pandac$ClassDecl* $tmp862 = (($fn861) self->$class->vtable[14])(self, p_owner);
    cl860 = $tmp862;
    {
        ITable* $tmp864 = ((panda$collections$Iterable*) cl860->methods)->$class->itable;
        while ($tmp864->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp864 = $tmp864->next;
        }
        $fn866 $tmp865 = $tmp864->methods[0];
        panda$collections$Iterator* $tmp867 = $tmp865(((panda$collections$Iterable*) cl860->methods));
        test$Iter863 = $tmp867;
        $l868:;
        ITable* $tmp870 = test$Iter863->$class->itable;
        while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp870 = $tmp870->next;
        }
        $fn872 $tmp871 = $tmp870->methods[0];
        panda$core$Bit $tmp873 = $tmp871(test$Iter863);
        panda$core$Bit $tmp874 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp873);
        if (!$tmp874.value) goto $l869;
        {
            ITable* $tmp876 = test$Iter863->$class->itable;
            while ($tmp876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp876 = $tmp876->next;
            }
            $fn878 $tmp877 = $tmp876->methods[1];
            panda$core$Object* $tmp879 = $tmp877(test$Iter863);
            test875 = ((org$pandalanguage$pandac$MethodDecl*) $tmp879);
            panda$core$Bit $tmp880 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test875)->name, p_name);
            if ($tmp880.value) {
            {
                (($fn881) self->$class->vtable[6])(self, test875);
                org$pandalanguage$pandac$Type* $tmp883 = (($fn882) self->$class->vtable[44])(self, test875);
                org$pandalanguage$pandac$Type* $tmp885 = (($fn884) self->$class->vtable[25])(self, p_owner, $tmp883);
                panda$core$Bit $tmp887 = (($fn886) self->$class->vtable[16])(self, $tmp885, p_methodType);
                if ($tmp887.value) {
                {
                    return test875;
                }
                }
            }
            }
        }
        goto $l868;
        $l869:;
    }
    bool $tmp888 = p_checkInterfaces.value;
    if ($tmp888) goto $l889;
    panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl860->classKind, ((panda$core$Int64) { 5012 }));
    $tmp888 = $tmp890.value;
    $l889:;
    panda$core$Bit $tmp891 = { $tmp888 };
    if ($tmp891.value) {
    {
        {
            ITable* $tmp893 = ((panda$collections$Iterable*) cl860->rawInterfaces)->$class->itable;
            while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp893 = $tmp893->next;
            }
            $fn895 $tmp894 = $tmp893->methods[0];
            panda$collections$Iterator* $tmp896 = $tmp894(((panda$collections$Iterable*) cl860->rawInterfaces));
            raw$Iter892 = $tmp896;
            $l897:;
            ITable* $tmp899 = raw$Iter892->$class->itable;
            while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp899 = $tmp899->next;
            }
            $fn901 $tmp900 = $tmp899->methods[0];
            panda$core$Bit $tmp902 = $tmp900(raw$Iter892);
            panda$core$Bit $tmp903 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp902);
            if (!$tmp903.value) goto $l898;
            {
                ITable* $tmp905 = raw$Iter892->$class->itable;
                while ($tmp905->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp905 = $tmp905->next;
                }
                $fn907 $tmp906 = $tmp905->methods[1];
                panda$core$Object* $tmp908 = $tmp906(raw$Iter892);
                raw904 = ((org$pandalanguage$pandac$Type*) $tmp908);
                org$pandalanguage$pandac$Type* $tmp911 = (($fn910) self->$class->vtable[25])(self, p_owner, raw904);
                org$pandalanguage$pandac$MethodDecl* $tmp913 = (($fn912) self->$class->vtable[17])(self, $tmp911, p_name, p_methodType, p_checkInterfaces);
                result909 = $tmp913;
                if (((panda$core$Bit) { result909 != NULL }).value) {
                {
                    return result909;
                }
                }
            }
            goto $l897;
            $l898:;
        }
    }
    }
    if (((panda$core$Bit) { cl860->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp915 = (($fn914) self->$class->vtable[25])(self, p_owner, cl860->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp917 = (($fn916) self->$class->vtable[17])(self, $tmp915, p_name, p_methodType, p_checkInterfaces);
        return $tmp917;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType919;
    org$pandalanguage$pandac$Type* owner922;
    panda$collections$Iterator* raw$Iter925;
    org$pandalanguage$pandac$Type* raw937;
    org$pandalanguage$pandac$MethodDecl* result942;
    (($fn918) self->$class->vtable[6])(self, p_m);
    org$pandalanguage$pandac$Type* $tmp921 = (($fn920) self->$class->vtable[44])(self, p_m);
    methodType919 = $tmp921;
    org$pandalanguage$pandac$Type* $tmp924 = (($fn923) p_m->owner->$class->vtable[4])(p_m->owner);
    owner922 = $tmp924;
    {
        ITable* $tmp926 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp926->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp926 = $tmp926->next;
        }
        $fn928 $tmp927 = $tmp926->methods[0];
        panda$collections$Iterator* $tmp929 = $tmp927(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter925 = $tmp929;
        $l930:;
        ITable* $tmp932 = raw$Iter925->$class->itable;
        while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp932 = $tmp932->next;
        }
        $fn934 $tmp933 = $tmp932->methods[0];
        panda$core$Bit $tmp935 = $tmp933(raw$Iter925);
        panda$core$Bit $tmp936 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp935);
        if (!$tmp936.value) goto $l931;
        {
            ITable* $tmp938 = raw$Iter925->$class->itable;
            while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp938 = $tmp938->next;
            }
            $fn940 $tmp939 = $tmp938->methods[1];
            panda$core$Object* $tmp941 = $tmp939(raw$Iter925);
            raw937 = ((org$pandalanguage$pandac$Type*) $tmp941);
            org$pandalanguage$pandac$Type* $tmp944 = (($fn943) self->$class->vtable[25])(self, owner922, raw937);
            org$pandalanguage$pandac$MethodDecl* $tmp946 = (($fn945) self->$class->vtable[17])(self, $tmp944, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType919, ((panda$core$Bit) { true }));
            result942 = $tmp946;
            if (((panda$core$Bit) { result942 != NULL }).value) {
            {
                return result942;
            }
            }
        }
        goto $l930;
        $l931:;
    }
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp948 = (($fn947) self->$class->vtable[25])(self, owner922, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp950 = (($fn949) self->$class->vtable[17])(self, $tmp948, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType919, ((panda$core$Bit) { true }));
        return $tmp950;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass951;
    panda$collections$Array* result954;
    panda$collections$Iterator* m$Iter957;
    org$pandalanguage$pandac$MethodDecl* m969;
    org$pandalanguage$pandac$MethodDecl* found974;
    org$pandalanguage$pandac$ClassDecl* $tmp953 = (($fn952) self->$class->vtable[14])(self, p_intf);
    intfClass951 = $tmp953;
    panda$collections$Array* $tmp955 = (panda$collections$Array*) malloc(40);
    $tmp955->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp955->refCount.value = 1;
    panda$collections$Array$init($tmp955);
    result954 = $tmp955;
    {
        ITable* $tmp958 = ((panda$collections$Iterable*) intfClass951->methods)->$class->itable;
        while ($tmp958->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp958 = $tmp958->next;
        }
        $fn960 $tmp959 = $tmp958->methods[0];
        panda$collections$Iterator* $tmp961 = $tmp959(((panda$collections$Iterable*) intfClass951->methods));
        m$Iter957 = $tmp961;
        $l962:;
        ITable* $tmp964 = m$Iter957->$class->itable;
        while ($tmp964->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp964 = $tmp964->next;
        }
        $fn966 $tmp965 = $tmp964->methods[0];
        panda$core$Bit $tmp967 = $tmp965(m$Iter957);
        panda$core$Bit $tmp968 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp967);
        if (!$tmp968.value) goto $l963;
        {
            ITable* $tmp970 = m$Iter957->$class->itable;
            while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp970 = $tmp970->next;
            }
            $fn972 $tmp971 = $tmp970->methods[1];
            panda$core$Object* $tmp973 = $tmp971(m$Iter957);
            m969 = ((org$pandalanguage$pandac$MethodDecl*) $tmp973);
            org$pandalanguage$pandac$Type* $tmp976 = (($fn975) p_cl->$class->vtable[3])(p_cl);
            org$pandalanguage$pandac$Type* $tmp978 = (($fn977) self->$class->vtable[46])(self, m969);
            org$pandalanguage$pandac$Type* $tmp980 = (($fn979) self->$class->vtable[25])(self, p_intf, $tmp978);
            org$pandalanguage$pandac$MethodDecl* $tmp982 = (($fn981) self->$class->vtable[17])(self, $tmp976, ((org$pandalanguage$pandac$Symbol*) m969)->name, $tmp980, ((panda$core$Bit) { false }));
            found974 = $tmp982;
            panda$collections$Array$add$panda$collections$Array$T(result954, ((panda$core$Object*) found974));
        }
        goto $l962;
        $l963:;
    }
    return ((panda$collections$ListView*) result954);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl985;
    panda$collections$Iterator* rawIntf$Iter990;
    org$pandalanguage$pandac$Type* rawIntf1002;
    org$pandalanguage$pandac$ClassDecl* intf1007;
    panda$core$Bit $tmp983 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp983.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        (($fn984) self->$class->vtable[5])(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp987 = (($fn986) self->$class->vtable[14])(self, p_cl->rawSuper);
            superCl985 = $tmp987;
            if (((panda$core$Bit) { superCl985 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp989 = (($fn988) self->$class->vtable[20])(self, superCl985);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp989));
            }
            }
        }
        }
        {
            ITable* $tmp991 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp991->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp991 = $tmp991->next;
            }
            $fn993 $tmp992 = $tmp991->methods[0];
            panda$collections$Iterator* $tmp994 = $tmp992(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter990 = $tmp994;
            $l995:;
            ITable* $tmp997 = rawIntf$Iter990->$class->itable;
            while ($tmp997->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp997 = $tmp997->next;
            }
            $fn999 $tmp998 = $tmp997->methods[0];
            panda$core$Bit $tmp1000 = $tmp998(rawIntf$Iter990);
            panda$core$Bit $tmp1001 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1000);
            if (!$tmp1001.value) goto $l996;
            {
                ITable* $tmp1003 = rawIntf$Iter990->$class->itable;
                while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1003 = $tmp1003->next;
                }
                $fn1005 $tmp1004 = $tmp1003->methods[1];
                panda$core$Object* $tmp1006 = $tmp1004(rawIntf$Iter990);
                rawIntf1002 = ((org$pandalanguage$pandac$Type*) $tmp1006);
                org$pandalanguage$pandac$ClassDecl* $tmp1009 = (($fn1008) self->$class->vtable[14])(self, rawIntf1002);
                intf1007 = $tmp1009;
                if (((panda$core$Bit) { intf1007 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1011 = (($fn1010) self->$class->vtable[20])(self, intf1007);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1011));
                }
                }
            }
            goto $l995;
            $l996:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1017;
    panda$collections$Iterator* derived$Iter1024;
    org$pandalanguage$pandac$MethodDecl* derived1036;
    panda$core$Bit found1048;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1049;
    org$pandalanguage$pandac$MethodDecl* base1069;
    panda$core$Int64 $tmp1012 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1012, ((panda$core$Int64) { 0 }));
    if ($tmp1013.value) {
    {
        (($fn1014) self->$class->vtable[5])(self, p_cl);
        (($fn1015) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
        (($fn1016) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1019 = (($fn1018) self->$class->vtable[14])(self, p_cl->rawSuper);
            superCl1017 = $tmp1019;
            if (((panda$core$Bit) { superCl1017 == NULL }).value) {
            {
                (($fn1020) self->currentClass->$class->vtable[3])(self->currentClass);
                (($fn1021) self->currentFile->$class->vtable[3])(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1023 = (($fn1022) self->$class->vtable[21])(self, superCl1017);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1023));
        }
        }
        {
            ITable* $tmp1025 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1025 = $tmp1025->next;
            }
            $fn1027 $tmp1026 = $tmp1025->methods[0];
            panda$collections$Iterator* $tmp1028 = $tmp1026(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1024 = $tmp1028;
            $l1029:;
            ITable* $tmp1031 = derived$Iter1024->$class->itable;
            while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1031 = $tmp1031->next;
            }
            $fn1033 $tmp1032 = $tmp1031->methods[0];
            panda$core$Bit $tmp1034 = $tmp1032(derived$Iter1024);
            panda$core$Bit $tmp1035 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1034);
            if (!$tmp1035.value) goto $l1030;
            {
                ITable* $tmp1037 = derived$Iter1024->$class->itable;
                while ($tmp1037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1037 = $tmp1037->next;
                }
                $fn1039 $tmp1038 = $tmp1037->methods[1];
                panda$core$Object* $tmp1040 = $tmp1038(derived$Iter1024);
                derived1036 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1040);
                (($fn1041) self->$class->vtable[6])(self, derived1036);
                panda$core$Bit $tmp1043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1036->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1042 = $tmp1043.value;
                if ($tmp1042) goto $l1044;
                panda$core$Bit $tmp1046 = (($fn1045) derived1036->annotations->$class->vtable[5])(derived1036->annotations);
                $tmp1042 = $tmp1046.value;
                $l1044:;
                panda$core$Bit $tmp1047 = { $tmp1042 };
                if ($tmp1047.value) {
                {
                    goto $l1029;
                }
                }
                found1048 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1050 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1049, ((panda$core$Int64) { 0 }), $tmp1050, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp1052 = $tmp1049.start.value;
                panda$core$Int64 i1051 = { $tmp1052 };
                int64_t $tmp1054 = $tmp1049.end.value;
                int64_t $tmp1055 = $tmp1049.step.value;
                bool $tmp1056 = $tmp1049.inclusive.value;
                bool $tmp1063 = $tmp1055 > 0;
                if ($tmp1063) goto $l1061; else goto $l1062;
                $l1061:;
                if ($tmp1056) goto $l1064; else goto $l1065;
                $l1064:;
                if ($tmp1052 <= $tmp1054) goto $l1057; else goto $l1059;
                $l1065:;
                if ($tmp1052 < $tmp1054) goto $l1057; else goto $l1059;
                $l1062:;
                if ($tmp1056) goto $l1066; else goto $l1067;
                $l1066:;
                if ($tmp1052 >= $tmp1054) goto $l1057; else goto $l1059;
                $l1067:;
                if ($tmp1052 > $tmp1054) goto $l1057; else goto $l1059;
                $l1057:;
                {
                    panda$core$Object* $tmp1070 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1051);
                    base1069 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1070);
                    (($fn1071) self->$class->vtable[6])(self, base1069);
                    panda$core$Bit $tmp1073 = (($fn1072) derived1036->$class->vtable[5])(derived1036, base1069);
                    if ($tmp1073.value) {
                    {
                        found1048 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1051, ((panda$core$Object*) derived1036));
                        goto $l1059;
                    }
                    }
                }
                $l1060:;
                if ($tmp1063) goto $l1075; else goto $l1076;
                $l1075:;
                int64_t $tmp1077 = $tmp1054 - i1051.value;
                if ($tmp1056) goto $l1078; else goto $l1079;
                $l1078:;
                if ($tmp1077 >= $tmp1055) goto $l1074; else goto $l1059;
                $l1079:;
                if ($tmp1077 > $tmp1055) goto $l1074; else goto $l1059;
                $l1076:;
                int64_t $tmp1081 = i1051.value - $tmp1054;
                if ($tmp1056) goto $l1082; else goto $l1083;
                $l1082:;
                if ($tmp1081 >= -$tmp1055) goto $l1074; else goto $l1059;
                $l1083:;
                if ($tmp1081 > -$tmp1055) goto $l1074; else goto $l1059;
                $l1074:;
                i1051.value += $tmp1055;
                goto $l1057;
                $l1059:;
                panda$core$Bit $tmp1085 = panda$core$Bit$$NOT$R$panda$core$Bit(found1048);
                if ($tmp1085.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1036));
                }
                }
            }
            goto $l1029;
            $l1030:;
        }
        (($fn1086) self->currentClass->$class->vtable[3])(self->currentClass);
        (($fn1087) self->currentFile->$class->vtable[3])(self->currentFile);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$core$Int64 p_offset, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1088;
    org$pandalanguage$pandac$Symbol* s1091;
    panda$collections$Iterator* m$Iter1098;
    org$pandalanguage$pandac$MethodDecl* m1110;
    panda$collections$Iterator* p$Iter1118;
    org$pandalanguage$pandac$SymbolTable* p1130;
    panda$collections$Array* children1136;
    panda$collections$Array* types1147;
    panda$collections$Iterator* m$Iter1150;
    org$pandalanguage$pandac$MethodRef* m1162;
    panda$collections$Array* $tmp1089 = (panda$collections$Array*) malloc(40);
    $tmp1089->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1089->refCount.value = 1;
    panda$collections$Array$init($tmp1089);
    methods1088 = $tmp1089;
    org$pandalanguage$pandac$Symbol* $tmp1093 = (($fn1092) p_st->$class->vtable[6])(p_st, p_name);
    s1091 = $tmp1093;
    panda$core$Bit $tmp1094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1091->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1094.value) {
    {
        (($fn1095) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$MethodDecl*) s1091));
        org$pandalanguage$pandac$MethodRef* $tmp1096 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1096->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1096->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1096, ((org$pandalanguage$pandac$MethodDecl*) s1091), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1088, ((panda$core$Object*) $tmp1096));
    }
    }
    else {
    {
        {
            ITable* $tmp1099 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1091)->methods)->$class->itable;
            while ($tmp1099->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1099 = $tmp1099->next;
            }
            $fn1101 $tmp1100 = $tmp1099->methods[0];
            panda$collections$Iterator* $tmp1102 = $tmp1100(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1091)->methods));
            m$Iter1098 = $tmp1102;
            $l1103:;
            ITable* $tmp1105 = m$Iter1098->$class->itable;
            while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1105 = $tmp1105->next;
            }
            $fn1107 $tmp1106 = $tmp1105->methods[0];
            panda$core$Bit $tmp1108 = $tmp1106(m$Iter1098);
            panda$core$Bit $tmp1109 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1108);
            if (!$tmp1109.value) goto $l1104;
            {
                ITable* $tmp1111 = m$Iter1098->$class->itable;
                while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1111 = $tmp1111->next;
                }
                $fn1113 $tmp1112 = $tmp1111->methods[1];
                panda$core$Object* $tmp1114 = $tmp1112(m$Iter1098);
                m1110 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1114);
                (($fn1115) self->$class->vtable[6])(self, m1110);
                org$pandalanguage$pandac$MethodRef* $tmp1116 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1116->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1116->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1116, m1110, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1088, ((panda$core$Object*) $tmp1116));
            }
            goto $l1103;
            $l1104:;
        }
    }
    }
    {
        ITable* $tmp1119 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1119 = $tmp1119->next;
        }
        $fn1121 $tmp1120 = $tmp1119->methods[0];
        panda$collections$Iterator* $tmp1122 = $tmp1120(((panda$collections$Iterable*) p_st->parents));
        p$Iter1118 = $tmp1122;
        $l1123:;
        ITable* $tmp1125 = p$Iter1118->$class->itable;
        while ($tmp1125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1125 = $tmp1125->next;
        }
        $fn1127 $tmp1126 = $tmp1125->methods[0];
        panda$core$Bit $tmp1128 = $tmp1126(p$Iter1118);
        panda$core$Bit $tmp1129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1128);
        if (!$tmp1129.value) goto $l1124;
        {
            ITable* $tmp1131 = p$Iter1118->$class->itable;
            while ($tmp1131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1131 = $tmp1131->next;
            }
            $fn1133 $tmp1132 = $tmp1131->methods[1];
            panda$core$Object* $tmp1134 = $tmp1132(p$Iter1118);
            p1130 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1134);
            (($fn1135) self->$class->vtable[22])(self, p1130, p_name, methods1088, p_types);
        }
        goto $l1123;
        $l1124:;
    }
    panda$collections$Array* $tmp1137 = (panda$collections$Array*) malloc(40);
    $tmp1137->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1137->refCount.value = 1;
    panda$collections$Array$init($tmp1137);
    children1136 = $tmp1137;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1136, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1139 = panda$collections$Array$get_count$R$panda$core$Int64(methods1088);
    panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1139, ((panda$core$Int64) { 1 }));
    if ($tmp1140.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1141 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1141->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1141->refCount.value = 1;
        panda$core$Object* $tmp1143 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1088, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1145 = (($fn1144) ((org$pandalanguage$pandac$MethodRef*) $tmp1143)->$class->vtable[6])(((org$pandalanguage$pandac$MethodRef*) $tmp1143));
        panda$core$Object* $tmp1146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1088, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1141, ((panda$core$Int64) { 1002 }), p_offset, $tmp1145, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1146)), ((panda$collections$ListView*) children1136));
        return $tmp1141;
    }
    }
    else {
    {
        panda$collections$Array* $tmp1148 = (panda$collections$Array*) malloc(40);
        $tmp1148->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1148->refCount.value = 1;
        panda$collections$Array$init($tmp1148);
        types1147 = $tmp1148;
        {
            ITable* $tmp1151 = ((panda$collections$Iterable*) methods1088)->$class->itable;
            while ($tmp1151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1151 = $tmp1151->next;
            }
            $fn1153 $tmp1152 = $tmp1151->methods[0];
            panda$collections$Iterator* $tmp1154 = $tmp1152(((panda$collections$Iterable*) methods1088));
            m$Iter1150 = $tmp1154;
            $l1155:;
            ITable* $tmp1157 = m$Iter1150->$class->itable;
            while ($tmp1157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1157 = $tmp1157->next;
            }
            $fn1159 $tmp1158 = $tmp1157->methods[0];
            panda$core$Bit $tmp1160 = $tmp1158(m$Iter1150);
            panda$core$Bit $tmp1161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1160);
            if (!$tmp1161.value) goto $l1156;
            {
                ITable* $tmp1163 = m$Iter1150->$class->itable;
                while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1163 = $tmp1163->next;
                }
                $fn1165 $tmp1164 = $tmp1163->methods[1];
                panda$core$Object* $tmp1166 = $tmp1164(m$Iter1150);
                m1162 = ((org$pandalanguage$pandac$MethodRef*) $tmp1166);
                org$pandalanguage$pandac$Type* $tmp1168 = (($fn1167) m1162->$class->vtable[6])(m1162);
                panda$collections$Array$add$panda$collections$Array$T(types1147, ((panda$core$Object*) $tmp1168));
            }
            goto $l1155;
            $l1156:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1169 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1169->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1169->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1171 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp1171->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1171->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1171, ((panda$collections$ListView*) types1147));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1169, ((panda$core$Int64) { 1003 }), p_offset, $tmp1171, ((panda$core$Object*) methods1088), ((panda$collections$ListView*) children1136));
        return $tmp1169;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    panda$core$Int64 $match$238041173;
    org$pandalanguage$pandac$ClassDecl* cl1175;
    org$pandalanguage$pandac$FieldDecl* f1202;
    panda$collections$Array* children1207;
    org$pandalanguage$pandac$Type* effectiveType1213;
    org$pandalanguage$pandac$IRNode* result1222;
    {
        $match$238041173 = p_s->kind;
        panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238041173, ((panda$core$Int64) { 200 }));
        if ($tmp1174.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1177 = (($fn1176) self->$class->vtable[12])(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1175 = $tmp1177;
            if (((panda$core$Bit) { cl1175 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1178 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1178->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1178->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1180 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1182 = (($fn1181) cl1175->$class->vtable[3])(cl1175);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1178, ((panda$core$Int64) { 1001 }), p_offset, $tmp1180, $tmp1182);
                return $tmp1178;
            }
            }
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238041173, ((panda$core$Int64) { 201 }));
        if ($tmp1183.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1184 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1184->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1184->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1186 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1188 = (($fn1187) ((org$pandalanguage$pandac$ClassDecl*) p_s)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1184, ((panda$core$Int64) { 1001 }), p_offset, $tmp1186, $tmp1188);
            return $tmp1184;
        }
        }
        else {
        panda$core$Bit $tmp1190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238041173, ((panda$core$Int64) { 204 }));
        bool $tmp1189 = $tmp1190.value;
        if ($tmp1189) goto $l1191;
        panda$core$Bit $tmp1192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238041173, ((panda$core$Int64) { 205 }));
        $tmp1189 = $tmp1192.value;
        $l1191:;
        panda$core$Bit $tmp1193 = { $tmp1189 };
        if ($tmp1193.value) {
        {
            panda$collections$ListView* $tmp1195 = (($fn1194) self->$class->vtable[56])(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1197 = (($fn1196) self->$class->vtable[23])(self, p_st, p_target, p_s->name, p_offset, $tmp1195);
            return $tmp1197;
        }
        }
        else {
        panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238041173, ((panda$core$Int64) { 208 }));
        if ($tmp1198.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1199 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1199->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1199, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1199;
        }
        }
        else {
        panda$core$Bit $tmp1201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238041173, ((panda$core$Int64) { 202 }));
        if ($tmp1201.value) {
        {
            f1202 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            (($fn1203) self->$class->vtable[7])(self, f1202);
            org$pandalanguage$pandac$Type* $tmp1204 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1206 = (($fn1205) f1202->type->$class->vtable[4])(f1202->type, ((panda$core$Object*) $tmp1204));
            if ($tmp1206.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1208 = (panda$collections$Array*) malloc(40);
            $tmp1208->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1208->refCount.value = 1;
            panda$collections$Array$init($tmp1208);
            children1207 = $tmp1208;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1210.value) {
                {
                    (($fn1212) self->$class->vtable[96])(self, p_target->offset, &$s1211);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1215 = (($fn1214) self->$class->vtable[25])(self, p_target->type, f1202->type);
                effectiveType1213 = $tmp1215;
                panda$core$Bit $tmp1217 = (($fn1216) f1202->annotations->$class->vtable[5])(f1202->annotations);
                if ($tmp1217.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1207, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1219 = (($fn1218) f1202->owner->$class->vtable[3])(f1202->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1221 = (($fn1220) self->$class->vtable[33])(self, p_target, $tmp1219);
                    panda$collections$Array$add$panda$collections$Array$T(children1207, ((panda$core$Object*) $tmp1221));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1223 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1223->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1223->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1223, ((panda$core$Int64) { 1026 }), p_offset, f1202->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1207));
                result1222 = $tmp1223;
                panda$core$Bit $tmp1226 = (($fn1225) effectiveType1213->$class->vtable[5])(effectiveType1213, ((panda$core$Object*) result1222->type));
                if ($tmp1226.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1228 = (($fn1227) self->$class->vtable[36])(self, result1222, p_offset, ((panda$core$Bit) { false }), effectiveType1213);
                    result1222 = $tmp1228;
                }
                }
                return result1222;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1229 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1229->refCount.value = 1;
                panda$core$Object* $tmp1232 = (($fn1231) self->currentClass->$class->vtable[4])(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1234 = (($fn1233) ((org$pandalanguage$pandac$ClassDecl*) $tmp1232)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp1232));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1229, ((panda$core$Int64) { 1025 }), p_offset, $tmp1234);
                panda$collections$Array$add$panda$collections$Array$T(children1207, ((panda$core$Object*) $tmp1229));
                org$pandalanguage$pandac$IRNode* $tmp1235 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1235->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1235->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1235, ((panda$core$Int64) { 1026 }), p_offset, f1202->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1207));
                return $tmp1235;
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
    panda$core$Int64 $match$261681237;
    panda$collections$HashMap* typeMap1245;
    org$pandalanguage$pandac$Type* base1248;
    org$pandalanguage$pandac$ClassDecl* cl1251;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1254;
    {
        $match$261681237 = p_context->typeKind;
        panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261681237, ((panda$core$Int64) { 10 }));
        if ($tmp1238.value) {
        {
            return p_raw;
        }
        }
        else {
        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261681237, ((panda$core$Int64) { 11 }));
        if ($tmp1239.value) {
        {
            panda$core$Object* $tmp1241 = (($fn1240) p_context->subtypes->$class->vtable[2])(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1243 = (($fn1242) self->$class->vtable[25])(self, ((org$pandalanguage$pandac$Type*) $tmp1241), p_raw);
            return $tmp1243;
        }
        }
        else {
        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261681237, ((panda$core$Int64) { 21 }));
        if ($tmp1244.value) {
        {
            panda$collections$HashMap* $tmp1246 = (panda$collections$HashMap*) malloc(56);
            $tmp1246->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1246->refCount.value = 1;
            panda$collections$HashMap$init($tmp1246);
            typeMap1245 = $tmp1246;
            panda$core$Object* $tmp1250 = (($fn1249) p_context->subtypes->$class->vtable[2])(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1248 = ((org$pandalanguage$pandac$Type*) $tmp1250);
            org$pandalanguage$pandac$ClassDecl* $tmp1253 = (($fn1252) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$Symbol*) base1248)->name);
            cl1251 = $tmp1253;
            panda$core$Int64 $tmp1256 = (($fn1255) p_context->subtypes->$class->vtable[3])(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1254, ((panda$core$Int64) { 1 }), $tmp1256, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1258 = $tmp1254.start.value;
            panda$core$Int64 i1257 = { $tmp1258 };
            int64_t $tmp1260 = $tmp1254.end.value;
            int64_t $tmp1261 = $tmp1254.step.value;
            bool $tmp1262 = $tmp1254.inclusive.value;
            bool $tmp1269 = $tmp1261 > 0;
            if ($tmp1269) goto $l1267; else goto $l1268;
            $l1267:;
            if ($tmp1262) goto $l1270; else goto $l1271;
            $l1270:;
            if ($tmp1258 <= $tmp1260) goto $l1263; else goto $l1265;
            $l1271:;
            if ($tmp1258 < $tmp1260) goto $l1263; else goto $l1265;
            $l1268:;
            if ($tmp1262) goto $l1272; else goto $l1273;
            $l1272:;
            if ($tmp1258 >= $tmp1260) goto $l1263; else goto $l1265;
            $l1273:;
            if ($tmp1258 > $tmp1260) goto $l1263; else goto $l1265;
            $l1263:;
            {
                panda$core$String* $tmp1276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1251)->name, &$s1275);
                panda$core$Int64 $tmp1277 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1257, ((panda$core$Int64) { 1 }));
                ITable* $tmp1278 = ((panda$collections$ListView*) cl1251->parameters)->$class->itable;
                while ($tmp1278->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1278 = $tmp1278->next;
                }
                $fn1280 $tmp1279 = $tmp1278->methods[0];
                panda$core$Object* $tmp1281 = $tmp1279(((panda$collections$ListView*) cl1251->parameters), $tmp1277);
                panda$core$String* $tmp1282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1276, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1281))->name);
                panda$core$Object* $tmp1284 = (($fn1283) p_context->subtypes->$class->vtable[2])(p_context->subtypes, i1257);
                (($fn1285) typeMap1245->$class->vtable[5])(typeMap1245, ((panda$core$Object*) ((panda$collections$Key*) $tmp1282)), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1284)));
            }
            $l1266:;
            if ($tmp1269) goto $l1287; else goto $l1288;
            $l1287:;
            int64_t $tmp1289 = $tmp1260 - i1257.value;
            if ($tmp1262) goto $l1290; else goto $l1291;
            $l1290:;
            if ($tmp1289 >= $tmp1261) goto $l1286; else goto $l1265;
            $l1291:;
            if ($tmp1289 > $tmp1261) goto $l1286; else goto $l1265;
            $l1288:;
            int64_t $tmp1293 = i1257.value - $tmp1260;
            if ($tmp1262) goto $l1294; else goto $l1295;
            $l1294:;
            if ($tmp1293 >= -$tmp1261) goto $l1286; else goto $l1265;
            $l1295:;
            if ($tmp1293 > -$tmp1261) goto $l1286; else goto $l1265;
            $l1286:;
            i1257.value += $tmp1261;
            goto $l1263;
            $l1265:;
            org$pandalanguage$pandac$Type* $tmp1298 = (($fn1297) p_raw->$class->vtable[14])(p_raw, typeMap1245);
            return $tmp1298;
        }
        }
        else {
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$261681237, ((panda$core$Int64) { 22 }));
        if ($tmp1299.value) {
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
    org$pandalanguage$pandac$Type* $tmp1300 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1302 = (($fn1301) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1300));
    if ($tmp1302.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1303;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1306 = (($fn1305) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1304));
    if ($tmp1306.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1307 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1307;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Int64 $match$273611308;
    panda$collections$Array* args1322;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1323;
    org$pandalanguage$pandac$IRNode* c1325;
    {
        $match$273611308 = p_expr->kind;
        panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$273611308, ((panda$core$Int64) { 1031 }));
        if ($tmp1309.value) {
        {
            panda$core$Object* $tmp1310 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1312 = (($fn1311) self->$class->vtable[26])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1310)->type);
            panda$core$Object* $tmp1313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1315 = (($fn1314) self->$class->vtable[26])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1313)->type);
            org$pandalanguage$pandac$Type* $tmp1317 = (($fn1316) $tmp1312->$class->vtable[13])($tmp1312, $tmp1315);
            org$pandalanguage$pandac$Type* $tmp1319 = (($fn1318) self->$class->vtable[26])(self, $tmp1317);
            org$pandalanguage$pandac$Type* $tmp1320 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1319);
            return $tmp1320;
        }
        }
        else {
        panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$273611308, ((panda$core$Int64) { 1040 }));
        if ($tmp1321.value) {
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1323, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1324 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1323);
            args1322 = $tmp1324;
            panda$core$Object* $tmp1326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1329 = (($fn1328) self->$class->vtable[40])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1326), &$s1327, ((panda$collections$ListView*) args1322));
            c1325 = $tmp1329;
            if (((panda$core$Bit) { c1325 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1330;
            }
            }
            return c1325->type;
        }
        }
        }
    }
    org$pandalanguage$pandac$Type* $tmp1332 = (($fn1331) self->$class->vtable[26])(self, p_expr->type);
    return $tmp1332;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1345;
    panda$core$Int64 $match$286101351;
    panda$core$Int64$nullable result1353;
    panda$core$Int64 $match$292331371;
    panda$core$Int64$nullable best1377;
    panda$collections$Iterator* t$Iter1378;
    org$pandalanguage$pandac$Type* t1390;
    panda$core$Int64$nullable cost1395;
    org$pandalanguage$pandac$ClassDecl* cl1416;
    panda$core$Int64$nullable cost1420;
    panda$collections$Iterator* intf$Iter1428;
    org$pandalanguage$pandac$Type* intf1440;
    panda$core$Int64$nullable cost1445;
    panda$core$Bit $tmp1334 = (($fn1333) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) p_target));
    if ($tmp1334.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1337 = (($fn1336) p_type->$class->vtable[4])(p_type, ((panda$core$Object*) $tmp1335));
    if ($tmp1337.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1338.value) {
    {
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1339.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1340 = $tmp1341.value;
    if (!$tmp1340) goto $l1342;
    panda$core$Bit $tmp1343 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1340 = $tmp1343.value;
    $l1342:;
    panda$core$Bit $tmp1344 = { $tmp1340 };
    if ($tmp1344.value) {
    {
        panda$core$Object* $tmp1347 = (($fn1346) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1349 = (($fn1348) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Type*) $tmp1347), p_target);
        result1345 = $tmp1349;
        if (((panda$core$Bit) { !result1345.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1350 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1345.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1350, true });
    }
    }
    {
        $match$286101351 = p_target->typeKind;
        panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286101351, ((panda$core$Int64) { 11 }));
        if ($tmp1352.value) {
        {
            panda$core$Object* $tmp1355 = (($fn1354) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1357 = (($fn1356) self->$class->vtable[28])(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1355));
            result1353 = $tmp1357;
            if (((panda$core$Bit) { !result1353.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1358 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1353.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1358, true });
        }
        }
        else {
        panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286101351, ((panda$core$Int64) { 22 }));
        if ($tmp1359.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286101351, ((panda$core$Int64) { 12 }));
        bool $tmp1360 = $tmp1361.value;
        if ($tmp1360) goto $l1362;
        panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286101351, ((panda$core$Int64) { 13 }));
        $tmp1360 = $tmp1363.value;
        $l1362:;
        panda$core$Bit $tmp1364 = { $tmp1360 };
        if ($tmp1364.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        else {
        panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286101351, ((panda$core$Int64) { 10 }));
        if ($tmp1365.value) {
        {
            panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1366.value) {
            {
                panda$core$Object* $tmp1368 = (($fn1367) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1370 = (($fn1369) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Type*) $tmp1368), p_target);
                return $tmp1370;
            }
            }
        }
        }
        }
        }
        }
    }
    {
        $match$292331371 = p_type->typeKind;
        panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292331371, ((panda$core$Int64) { 19 }));
        if ($tmp1372.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1373 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1375 = (($fn1374) self->$class->vtable[28])(self, $tmp1373, p_target);
            return $tmp1375;
        }
        }
        else {
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292331371, ((panda$core$Int64) { 17 }));
        if ($tmp1376.value) {
        {
            best1377 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1379 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1379->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1379 = $tmp1379->next;
                }
                $fn1381 $tmp1380 = $tmp1379->methods[0];
                panda$collections$Iterator* $tmp1382 = $tmp1380(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1378 = $tmp1382;
                $l1383:;
                ITable* $tmp1385 = t$Iter1378->$class->itable;
                while ($tmp1385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1385 = $tmp1385->next;
                }
                $fn1387 $tmp1386 = $tmp1385->methods[0];
                panda$core$Bit $tmp1388 = $tmp1386(t$Iter1378);
                panda$core$Bit $tmp1389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1388);
                if (!$tmp1389.value) goto $l1384;
                {
                    ITable* $tmp1391 = t$Iter1378->$class->itable;
                    while ($tmp1391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1391 = $tmp1391->next;
                    }
                    $fn1393 $tmp1392 = $tmp1391->methods[1];
                    panda$core$Object* $tmp1394 = $tmp1392(t$Iter1378);
                    t1390 = ((org$pandalanguage$pandac$Type*) $tmp1394);
                    panda$core$Int64$nullable $tmp1397 = (($fn1396) self->$class->vtable[28])(self, t1390, p_target);
                    cost1395 = $tmp1397;
                    bool $tmp1398 = ((panda$core$Bit) { cost1395.nonnull }).value;
                    if (!$tmp1398) goto $l1399;
                    bool $tmp1400 = ((panda$core$Bit) { !best1377.nonnull }).value;
                    if ($tmp1400) goto $l1401;
                    panda$core$Bit $tmp1402 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1395.value), ((panda$core$Int64) best1377.value));
                    $tmp1400 = $tmp1402.value;
                    $l1401:;
                    panda$core$Bit $tmp1403 = { $tmp1400 };
                    $tmp1398 = $tmp1403.value;
                    $l1399:;
                    panda$core$Bit $tmp1404 = { $tmp1398 };
                    if ($tmp1404.value) {
                    {
                        best1377 = cost1395;
                    }
                    }
                }
                goto $l1383;
                $l1384:;
            }
            return best1377;
        }
        }
        else {
        panda$core$Bit $tmp1405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$292331371, ((panda$core$Int64) { 22 }));
        if ($tmp1405.value) {
        {
            panda$core$Object* $tmp1407 = (($fn1406) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1409 = (($fn1408) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Type*) $tmp1407), p_target);
            return $tmp1409;
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1411 = (($fn1410) p_target->$class->vtable[8])(p_target);
    panda$core$Bit $tmp1412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1411);
    if ($tmp1412.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1414 = (($fn1413) p_type->$class->vtable[8])(p_type);
    panda$core$Bit $tmp1415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1414);
    if ($tmp1415.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1418 = (($fn1417) self->$class->vtable[14])(self, p_type);
    cl1416 = $tmp1418;
    (($fn1419) self->$class->vtable[5])(self, cl1416);
    if (((panda$core$Bit) { cl1416->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1422 = (($fn1421) self->$class->vtable[25])(self, p_type, cl1416->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1424 = (($fn1423) self->$class->vtable[25])(self, p_type, $tmp1422);
        panda$core$Int64$nullable $tmp1426 = (($fn1425) self->$class->vtable[28])(self, $tmp1424, p_target);
        cost1420 = $tmp1426;
        if (((panda$core$Bit) { cost1420.nonnull }).value) {
        {
            panda$core$Int64 $tmp1427 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1420.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1427, true });
        }
        }
    }
    }
    {
        ITable* $tmp1429 = ((panda$collections$Iterable*) cl1416->rawInterfaces)->$class->itable;
        while ($tmp1429->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1429 = $tmp1429->next;
        }
        $fn1431 $tmp1430 = $tmp1429->methods[0];
        panda$collections$Iterator* $tmp1432 = $tmp1430(((panda$collections$Iterable*) cl1416->rawInterfaces));
        intf$Iter1428 = $tmp1432;
        $l1433:;
        ITable* $tmp1435 = intf$Iter1428->$class->itable;
        while ($tmp1435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1435 = $tmp1435->next;
        }
        $fn1437 $tmp1436 = $tmp1435->methods[0];
        panda$core$Bit $tmp1438 = $tmp1436(intf$Iter1428);
        panda$core$Bit $tmp1439 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1438);
        if (!$tmp1439.value) goto $l1434;
        {
            ITable* $tmp1441 = intf$Iter1428->$class->itable;
            while ($tmp1441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1441 = $tmp1441->next;
            }
            $fn1443 $tmp1442 = $tmp1441->methods[1];
            panda$core$Object* $tmp1444 = $tmp1442(intf$Iter1428);
            intf1440 = ((org$pandalanguage$pandac$Type*) $tmp1444);
            org$pandalanguage$pandac$Type* $tmp1447 = (($fn1446) self->$class->vtable[25])(self, p_type, intf1440);
            org$pandalanguage$pandac$Type* $tmp1449 = (($fn1448) self->$class->vtable[25])(self, p_type, $tmp1447);
            panda$core$Int64$nullable $tmp1451 = (($fn1450) self->$class->vtable[28])(self, $tmp1449, p_target);
            cost1445 = $tmp1451;
            if (((panda$core$Bit) { cost1445.nonnull }).value) {
            {
                panda$core$Int64 $tmp1452 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1445.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1452, true });
            }
            }
        }
        goto $l1433;
        $l1434:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1454 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1453 = $tmp1454.value;
    if (!$tmp1453) goto $l1455;
    panda$core$Bit $tmp1456 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1453 = $tmp1456.value;
    $l1455:;
    panda$core$Bit $tmp1457 = { $tmp1453 };
    if ($tmp1457.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1459 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1458 = $tmp1459.value;
    if (!$tmp1458) goto $l1460;
    panda$core$Bit $tmp1461 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1458 = $tmp1461.value;
    $l1460:;
    panda$core$Bit $tmp1462 = { $tmp1458 };
    if ($tmp1462.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1464 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1463 = $tmp1464.value;
    if (!$tmp1463) goto $l1465;
    panda$core$Bit $tmp1466 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1463 = $tmp1466.value;
    $l1465:;
    panda$core$Bit $tmp1467 = { $tmp1463 };
    if ($tmp1467.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1468 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1468.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1469 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1469.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1470 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1470.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 $match$311631473;
    panda$core$Int64$nullable cost1476;
    panda$core$Int64 $match$317571488;
    panda$core$Int64$nullable cost11574;
    panda$core$Int64$nullable cost21580;
    org$pandalanguage$pandac$ClassDecl* targetClass1597;
    panda$collections$Iterator* m$Iter1600;
    org$pandalanguage$pandac$MethodDecl* m1612;
    panda$core$Int64$nullable cost1620;
    panda$core$Bit $tmp1472 = (($fn1471) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) p_target));
    if ($tmp1472.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    {
        $match$311631473 = p_target->typeKind;
        panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$311631473, ((panda$core$Int64) { 11 }));
        if ($tmp1474.value) {
        {
            panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1475.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1478 = (($fn1477) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1480 = (($fn1479) self->$class->vtable[31])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1478));
            cost1476 = $tmp1480;
            if (((panda$core$Bit) { !cost1476.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1481.value) {
            {
                return cost1476;
            }
            }
            panda$core$Int64 $tmp1482 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1476.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1482, true });
        }
        }
        else {
        panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$311631473, ((panda$core$Int64) { 22 }));
        if ($tmp1483.value) {
        {
            panda$core$Object* $tmp1485 = (($fn1484) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1487 = (($fn1486) self->$class->vtable[31])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1485));
            return $tmp1487;
        }
        }
        }
    }
    {
        $match$317571488 = p_expr->kind;
        panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317571488, ((panda$core$Int64) { 1011 }));
        if ($tmp1489.value) {
        {
            panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1490.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1492 = (($fn1491) p_target->$class->vtable[8])(p_target);
            if ($tmp1492.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1493 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1495 = (($fn1494) self->$class->vtable[28])(self, $tmp1493, p_target);
                return $tmp1495;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317571488, ((panda$core$Int64) { 1004 }));
        if ($tmp1496.value) {
        {
            panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1498 = $tmp1499.value;
            if (!$tmp1498) goto $l1500;
            panda$core$Int64 $tmp1501 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1503 = (($fn1502) self->$class->vtable[29])(self, $tmp1501);
            panda$core$Int64 $tmp1505 = (($fn1504) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1506 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1503, $tmp1505);
            $tmp1498 = $tmp1506.value;
            $l1500:;
            panda$core$Bit $tmp1507 = { $tmp1498 };
            bool $tmp1497 = $tmp1507.value;
            if ($tmp1497) goto $l1508;
            panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1509 = $tmp1510.value;
            if (!$tmp1509) goto $l1511;
            panda$core$Int64 $tmp1513 = (($fn1512) self->$class->vtable[30])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1515 = (($fn1514) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1516 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1513, $tmp1515);
            $tmp1509 = $tmp1516.value;
            $l1511:;
            panda$core$Bit $tmp1517 = { $tmp1509 };
            $tmp1497 = $tmp1517.value;
            $l1508:;
            panda$core$Bit $tmp1518 = { $tmp1497 };
            if ($tmp1518.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1520 = (($fn1519) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1521 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1520);
            if ($tmp1521.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1523 = (($fn1522) self->$class->vtable[27])(self, p_expr);
                panda$core$Int64$nullable $tmp1525 = (($fn1524) self->$class->vtable[28])(self, $tmp1523, p_target);
                return $tmp1525;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317571488, ((panda$core$Int64) { 1032 }));
        if ($tmp1526.value) {
        {
            panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1528 = $tmp1529.value;
            if (!$tmp1528) goto $l1530;
            panda$core$Int64 $tmp1531 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1532 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1531);
            panda$core$Int64 $tmp1534 = (($fn1533) self->$class->vtable[29])(self, $tmp1532);
            panda$core$Int64 $tmp1536 = (($fn1535) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1537 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1534, $tmp1536);
            $tmp1528 = $tmp1537.value;
            $l1530:;
            panda$core$Bit $tmp1538 = { $tmp1528 };
            bool $tmp1527 = $tmp1538.value;
            if ($tmp1527) goto $l1539;
            panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1540 = $tmp1541.value;
            if (!$tmp1540) goto $l1542;
            panda$core$Int64 $tmp1543 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1544 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1543);
            panda$core$Int64 $tmp1546 = (($fn1545) self->$class->vtable[29])(self, $tmp1544);
            panda$core$Int64 $tmp1548 = (($fn1547) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1549 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1546, $tmp1548);
            $tmp1540 = $tmp1549.value;
            $l1542:;
            panda$core$Bit $tmp1550 = { $tmp1540 };
            $tmp1527 = $tmp1550.value;
            $l1539:;
            panda$core$Bit $tmp1551 = { $tmp1527 };
            if ($tmp1551.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1553 = (($fn1552) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1553);
            if ($tmp1554.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1556 = (($fn1555) self->$class->vtable[27])(self, p_expr);
                panda$core$Int64$nullable $tmp1558 = (($fn1557) self->$class->vtable[28])(self, $tmp1556, p_target);
                return $tmp1558;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317571488, ((panda$core$Int64) { 1031 }));
        if ($tmp1559.value) {
        {
            panda$core$Bit $tmp1561 = (($fn1560) p_target->$class->vtable[11])(p_target);
            if ($tmp1561.value) {
            {
                panda$core$Object* $tmp1563 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1563)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1562 = $tmp1564.value;
                if (!$tmp1562) goto $l1565;
                panda$core$Object* $tmp1566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1566)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1562 = $tmp1567.value;
                $l1565:;
                panda$core$Bit $tmp1568 = { $tmp1562 };
                if ($tmp1568.value) {
                {
                    panda$core$Object* $tmp1570 = (($fn1569) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1572 = (($fn1571) ((org$pandalanguage$pandac$Type*) $tmp1570)->$class->vtable[6])(((org$pandalanguage$pandac$Type*) $tmp1570));
                    panda$core$Bit $tmp1573 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1572);
                    if ($tmp1573.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Object* $tmp1575 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1577 = (($fn1576) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1579 = (($fn1578) self->$class->vtable[31])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1575), ((org$pandalanguage$pandac$Type*) $tmp1577));
                cost11574 = $tmp1579;
                if (((panda$core$Bit) { !cost11574.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1583 = (($fn1582) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1585 = (($fn1584) self->$class->vtable[31])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1581), ((org$pandalanguage$pandac$Type*) $tmp1583));
                cost21580 = $tmp1585;
                if (((panda$core$Bit) { !cost21580.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1586 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11574.value), ((panda$core$Int64) cost21580.value));
                return ((panda$core$Int64$nullable) { $tmp1586, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1588 = (($fn1587) self->$class->vtable[27])(self, p_expr);
            panda$core$Int64$nullable $tmp1590 = (($fn1589) self->$class->vtable[28])(self, $tmp1588, p_target);
            return $tmp1590;
        }
        }
        else {
        panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317571488, ((panda$core$Int64) { 1040 }));
        if ($tmp1591.value) {
        {
            panda$core$Int64$nullable $tmp1593 = (($fn1592) self->$class->vtable[28])(self, p_expr->type, p_target);
            return $tmp1593;
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1595 = (($fn1594) p_target->$class->vtable[8])(p_target);
    panda$core$Bit $tmp1596 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1595);
    if ($tmp1596.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1599 = (($fn1598) self->$class->vtable[14])(self, p_target);
    targetClass1597 = $tmp1599;
    if (((panda$core$Bit) { targetClass1597 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1601 = ((panda$collections$Iterable*) targetClass1597->methods)->$class->itable;
        while ($tmp1601->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1601 = $tmp1601->next;
        }
        $fn1603 $tmp1602 = $tmp1601->methods[0];
        panda$collections$Iterator* $tmp1604 = $tmp1602(((panda$collections$Iterable*) targetClass1597->methods));
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
            m1612 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1616);
            panda$core$Bit $tmp1618 = (($fn1617) m1612->annotations->$class->vtable[8])(m1612->annotations);
            if ($tmp1618.value) {
            {
                (($fn1619) self->$class->vtable[6])(self, m1612);
                panda$core$Object* $tmp1621 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1612->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1623 = (($fn1622) self->$class->vtable[31])(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1621)->type);
                cost1620 = $tmp1623;
                if (((panda$core$Bit) { cost1620.nonnull }).value) {
                {
                    return cost1620;
                }
                }
            }
            }
        }
        goto $l1605;
        $l1606:;
    }
    panda$core$Int64$nullable $tmp1625 = (($fn1624) self->$class->vtable[28])(self, p_expr->type, p_target);
    return $tmp1625;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1637;
    org$pandalanguage$pandac$IRNode* intermediate1642;
    panda$core$Int64 $match$358131649;
    org$pandalanguage$pandac$IRNode* coerced1680;
    org$pandalanguage$pandac$IRNode* coerced1708;
    org$pandalanguage$pandac$IRNode* varType1729;
    org$pandalanguage$pandac$Type* param1739;
    org$pandalanguage$pandac$IRNode* start1742;
    org$pandalanguage$pandac$IRNode* end1746;
    panda$collections$Array* args1750;
    org$pandalanguage$pandac$IRNode* target1757;
    panda$collections$ListView* methods1768;
    panda$collections$Array* args1770;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1771;
    panda$collections$Array* best1773;
    panda$core$Int64$nullable bestCost1776;
    panda$collections$Iterator* m$Iter1777;
    org$pandalanguage$pandac$MethodRef* m1789;
    panda$core$Int64$nullable cost1794;
    org$pandalanguage$pandac$IRNode* callTarget1801;
    org$pandalanguage$pandac$IRNode* result1807;
    panda$collections$Array* args1814;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1815;
    panda$collections$Array* children1831;
    org$pandalanguage$pandac$IRNode* intermediate1837;
    org$pandalanguage$pandac$ClassDecl* cl1846;
    panda$collections$Iterator* m$Iter1849;
    org$pandalanguage$pandac$MethodDecl* m1861;
    org$pandalanguage$pandac$IRNode* type1872;
    panda$collections$Array* args1878;
    panda$collections$Array* children1883;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1627 = (($fn1626) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) p_target));
    if ($tmp1627.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1628 = $tmp1629.value;
    if (!$tmp1628) goto $l1630;
    panda$core$Bit $tmp1631 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1628 = $tmp1631.value;
    $l1630:;
    panda$core$Bit $tmp1632 = { $tmp1628 };
    if ($tmp1632.value) {
    {
        panda$core$Object* $tmp1634 = (($fn1633) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1636 = (($fn1635) ((org$pandalanguage$pandac$Type*) $tmp1634)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp1634), ((panda$core$Object*) p_target));
        if ($tmp1636.value) {
        {
            panda$collections$Array* $tmp1638 = (panda$collections$Array*) malloc(40);
            $tmp1638->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1638->refCount.value = 1;
            panda$collections$Array$init($tmp1638);
            children1637 = $tmp1638;
            panda$collections$Array$add$panda$collections$Array$T(children1637, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1640 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1640->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1640->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1640, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1637));
            return $tmp1640;
        }
        }
        panda$core$Object* $tmp1644 = (($fn1643) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1646 = (($fn1645) self->$class->vtable[33])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1644));
        intermediate1642 = $tmp1646;
        org$pandalanguage$pandac$IRNode* $tmp1648 = (($fn1647) self->$class->vtable[33])(self, intermediate1642, p_target);
        return $tmp1648;
    }
    }
    {
        $match$358131649 = p_expr->kind;
        panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358131649, ((panda$core$Int64) { 1004 }));
        if ($tmp1650.value) {
        {
            panda$core$Bit $tmp1652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1651 = $tmp1652.value;
            if (!$tmp1651) goto $l1653;
            panda$core$Int64 $tmp1655 = (($fn1654) self->$class->vtable[30])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1657 = (($fn1656) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1658 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1655, $tmp1657);
            $tmp1651 = $tmp1658.value;
            $l1653:;
            panda$core$Bit $tmp1659 = { $tmp1651 };
            if ($tmp1659.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1660 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1660->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1660, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1660;
            }
            }
            else {
            panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1662 = $tmp1663.value;
            if (!$tmp1662) goto $l1664;
            panda$core$Int64 $tmp1666 = (($fn1665) self->$class->vtable[30])(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1668 = (($fn1667) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1669 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1666, $tmp1668);
            $tmp1662 = $tmp1669.value;
            $l1664:;
            panda$core$Bit $tmp1670 = { $tmp1662 };
            if ($tmp1670.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1671 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1671->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1671->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1671, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1671;
            }
            }
            }
            panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1673 = $tmp1674.value;
            if (!$tmp1673) goto $l1675;
            panda$core$Bit $tmp1677 = (($fn1676) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1678 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1677);
            $tmp1673 = $tmp1678.value;
            $l1675:;
            panda$core$Bit $tmp1679 = { $tmp1673 };
            if ($tmp1679.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1682 = (($fn1681) self->$class->vtable[27])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1684 = (($fn1683) self->$class->vtable[33])(self, p_expr, $tmp1682);
                coerced1680 = $tmp1684;
                if (((panda$core$Bit) { coerced1680 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1686 = (($fn1685) self->$class->vtable[33])(self, coerced1680, p_target);
                return $tmp1686;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358131649, ((panda$core$Int64) { 1032 }));
        if ($tmp1687.value) {
        {
            panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1688 = $tmp1689.value;
            if (!$tmp1688) goto $l1690;
            panda$core$Int64 $tmp1691 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1692 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1691);
            panda$core$Int64 $tmp1694 = (($fn1693) self->$class->vtable[29])(self, $tmp1692);
            panda$core$Int64 $tmp1696 = (($fn1695) p_target->$class->vtable[3])(p_target);
            panda$core$Bit $tmp1697 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1694, $tmp1696);
            $tmp1688 = $tmp1697.value;
            $l1690:;
            panda$core$Bit $tmp1698 = { $tmp1688 };
            if ($tmp1698.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1699 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1699->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1699->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1699, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1699;
            }
            }
            panda$core$Bit $tmp1702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1701 = $tmp1702.value;
            if (!$tmp1701) goto $l1703;
            panda$core$Bit $tmp1705 = (($fn1704) p_target->$class->vtable[6])(p_target);
            panda$core$Bit $tmp1706 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1705);
            $tmp1701 = $tmp1706.value;
            $l1703:;
            panda$core$Bit $tmp1707 = { $tmp1701 };
            if ($tmp1707.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1710 = (($fn1709) self->$class->vtable[27])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1712 = (($fn1711) self->$class->vtable[33])(self, p_expr, $tmp1710);
                coerced1708 = $tmp1712;
                if (((panda$core$Bit) { coerced1708 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1714 = (($fn1713) self->$class->vtable[33])(self, coerced1708, p_target);
                return $tmp1714;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358131649, ((panda$core$Int64) { 1011 }));
        if ($tmp1715.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1716 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1718 = (($fn1717) p_target->$class->vtable[4])(p_target, ((panda$core$Object*) $tmp1716));
            if ($tmp1718.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1719 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1719->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1719->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1719, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1719;
            }
            }
            panda$core$Bit $tmp1723 = (($fn1722) p_target->$class->vtable[8])(p_target);
            bool $tmp1721 = $tmp1723.value;
            if (!$tmp1721) goto $l1724;
            org$pandalanguage$pandac$Type* $tmp1725 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1727 = (($fn1726) p_target->$class->vtable[5])(p_target, ((panda$core$Object*) $tmp1725));
            $tmp1721 = $tmp1727.value;
            $l1724:;
            panda$core$Bit $tmp1728 = { $tmp1721 };
            if ($tmp1728.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1731 = (($fn1730) self->$class->vtable[27])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1733 = (($fn1732) self->$class->vtable[33])(self, p_expr, $tmp1731);
                varType1729 = $tmp1733;
                if (((panda$core$Bit) { varType1729 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1735 = (($fn1734) self->$class->vtable[33])(self, varType1729, p_target);
                    return $tmp1735;
                }
                }
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358131649, ((panda$core$Int64) { 1031 }));
        if ($tmp1736.value) {
        {
            panda$core$Bit $tmp1738 = (($fn1737) p_target->$class->vtable[11])(p_target);
            if ($tmp1738.value) {
            {
                panda$core$Object* $tmp1741 = (($fn1740) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1739 = ((org$pandalanguage$pandac$Type*) $tmp1741);
                panda$core$Object* $tmp1743 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1745 = (($fn1744) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1743), param1739);
                start1742 = $tmp1745;
                if (((panda$core$Bit) { start1742 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1747 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1749 = (($fn1748) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1747), param1739);
                end1746 = $tmp1749;
                if (((panda$core$Bit) { end1746 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1751 = (panda$collections$Array*) malloc(40);
                $tmp1751->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1751->refCount.value = 1;
                panda$collections$Array$init($tmp1751);
                args1750 = $tmp1751;
                panda$collections$Array$add$panda$collections$Array$T(args1750, ((panda$core$Object*) start1742));
                panda$collections$Array$add$panda$collections$Array$T(args1750, ((panda$core$Object*) end1746));
                panda$core$Object* $tmp1753 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1750, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1753)));
                org$pandalanguage$pandac$IRNode* $tmp1754 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1754->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1754->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1756 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1754, ((panda$core$Int64) { 1011 }), p_expr->offset, $tmp1756, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1750, ((panda$core$Object*) $tmp1754));
                org$pandalanguage$pandac$IRNode* $tmp1758 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1758->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1758->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1760 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1758, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1760, p_target);
                target1757 = $tmp1758;
                org$pandalanguage$pandac$IRNode* $tmp1762 = (($fn1761) self->$class->vtable[42])(self, target1757, ((panda$collections$ListView*) args1750));
                return $tmp1762;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1764 = (($fn1763) self->$class->vtable[8])(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1766 = (($fn1765) self->$class->vtable[33])(self, $tmp1764, p_target);
                return $tmp1766;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358131649, ((panda$core$Int64) { 1039 }));
        if ($tmp1767.value) {
        {
            panda$core$Object* $tmp1769 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1768 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1769)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1771, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1772 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1771);
            args1770 = $tmp1772;
            panda$collections$Array* $tmp1774 = (panda$collections$Array*) malloc(40);
            $tmp1774->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1774->refCount.value = 1;
            panda$collections$Array$init($tmp1774);
            best1773 = $tmp1774;
            bestCost1776 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1778 = ((panda$collections$Iterable*) methods1768)->$class->itable;
                while ($tmp1778->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1778 = $tmp1778->next;
                }
                $fn1780 $tmp1779 = $tmp1778->methods[0];
                panda$collections$Iterator* $tmp1781 = $tmp1779(((panda$collections$Iterable*) methods1768));
                m$Iter1777 = $tmp1781;
                $l1782:;
                ITable* $tmp1784 = m$Iter1777->$class->itable;
                while ($tmp1784->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1784 = $tmp1784->next;
                }
                $fn1786 $tmp1785 = $tmp1784->methods[0];
                panda$core$Bit $tmp1787 = $tmp1785(m$Iter1777);
                panda$core$Bit $tmp1788 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1787);
                if (!$tmp1788.value) goto $l1783;
                {
                    ITable* $tmp1790 = m$Iter1777->$class->itable;
                    while ($tmp1790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1790 = $tmp1790->next;
                    }
                    $fn1792 $tmp1791 = $tmp1790->methods[1];
                    panda$core$Object* $tmp1793 = $tmp1791(m$Iter1777);
                    m1789 = ((org$pandalanguage$pandac$MethodRef*) $tmp1793);
                    panda$core$Int64$nullable $tmp1796 = (($fn1795) self->$class->vtable[37])(self, m1789, ((panda$collections$ListView*) args1770), p_target);
                    cost1794 = $tmp1796;
                    if (((panda$core$Bit) { !cost1794.nonnull }).value) {
                    {
                        goto $l1782;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1776.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1773, ((panda$core$Object*) m1789));
                        bestCost1776 = cost1794;
                        goto $l1782;
                    }
                    }
                    panda$core$Bit $tmp1797 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1794.value), ((panda$core$Int64) bestCost1776.value));
                    if ($tmp1797.value) {
                    {
                        panda$collections$Array$clear(best1773);
                        bestCost1776 = cost1794;
                    }
                    }
                    panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1794.value), ((panda$core$Int64) bestCost1776.value));
                    if ($tmp1798.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1773, ((panda$core$Object*) m1789));
                    }
                    }
                }
                goto $l1782;
                $l1783:;
            }
            panda$core$Int64 $tmp1799 = panda$collections$Array$get_count$R$panda$core$Int64(best1773);
            panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1799, ((panda$core$Int64) { 1 }));
            if ($tmp1800.value) {
            {
                panda$core$Object* $tmp1802 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1803 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1802)->children);
                panda$core$Bit $tmp1804 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1803, ((panda$core$Int64) { 0 }));
                if ($tmp1804.value) {
                {
                    panda$core$Object* $tmp1805 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1805)->children, ((panda$core$Int64) { 0 }));
                    callTarget1801 = ((org$pandalanguage$pandac$IRNode*) $tmp1806);
                }
                }
                else {
                {
                    callTarget1801 = NULL;
                }
                }
                panda$core$Object* $tmp1808 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1773, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1810 = (($fn1809) self->$class->vtable[39])(self, p_expr->offset, callTarget1801, ((org$pandalanguage$pandac$MethodRef*) $tmp1808), ((panda$collections$ListView*) args1770));
                result1807 = $tmp1810;
                org$pandalanguage$pandac$IRNode* $tmp1812 = (($fn1811) self->$class->vtable[33])(self, result1807, p_target);
                return $tmp1812;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358131649, ((panda$core$Int64) { 1040 }));
        if ($tmp1813.value) {
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1815, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1816 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1815);
            args1814 = $tmp1816;
            panda$core$Object* $tmp1817 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1820 = (($fn1819) self->$class->vtable[41])(self, ((org$pandalanguage$pandac$IRNode*) $tmp1817), &$s1818, ((panda$collections$ListView*) args1814), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1822 = (($fn1821) self->$class->vtable[33])(self, $tmp1820, p_target);
            return $tmp1822;
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Bit $tmp1823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1823.value) {
    {
        panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1824.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1825 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1825->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1825->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1825, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1825;
        }
        }
        panda$core$Object* $tmp1828 = (($fn1827) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1830 = (($fn1829) p_expr->type->$class->vtable[4])(p_expr->type, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1828)));
        if ($tmp1830.value) {
        {
            panda$collections$Array* $tmp1832 = (panda$collections$Array*) malloc(40);
            $tmp1832->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1832->refCount.value = 1;
            panda$collections$Array$init($tmp1832);
            children1831 = $tmp1832;
            panda$collections$Array$add$panda$collections$Array$T(children1831, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1834 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1834->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1834->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1834, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1831));
            return $tmp1834;
        }
        }
        panda$core$Bit $tmp1836 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1836.value) {
        {
            panda$core$Object* $tmp1839 = (($fn1838) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1841 = (($fn1840) self->$class->vtable[33])(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1839));
            intermediate1837 = $tmp1841;
            org$pandalanguage$pandac$IRNode* $tmp1843 = (($fn1842) self->$class->vtable[33])(self, intermediate1837, p_target);
            return $tmp1843;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1845 = (($fn1844) self->$class->vtable[31])(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1845.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1848 = (($fn1847) self->$class->vtable[14])(self, p_target);
        cl1846 = $tmp1848;
        if (((panda$core$Bit) { cl1846 != NULL }).value) {
        {
            {
                ITable* $tmp1850 = ((panda$collections$Iterable*) cl1846->methods)->$class->itable;
                while ($tmp1850->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1850 = $tmp1850->next;
                }
                $fn1852 $tmp1851 = $tmp1850->methods[0];
                panda$collections$Iterator* $tmp1853 = $tmp1851(((panda$collections$Iterable*) cl1846->methods));
                m$Iter1849 = $tmp1853;
                $l1854:;
                ITable* $tmp1856 = m$Iter1849->$class->itable;
                while ($tmp1856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1856 = $tmp1856->next;
                }
                $fn1858 $tmp1857 = $tmp1856->methods[0];
                panda$core$Bit $tmp1859 = $tmp1857(m$Iter1849);
                panda$core$Bit $tmp1860 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1859);
                if (!$tmp1860.value) goto $l1855;
                {
                    ITable* $tmp1862 = m$Iter1849->$class->itable;
                    while ($tmp1862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1862 = $tmp1862->next;
                    }
                    $fn1864 $tmp1863 = $tmp1862->methods[1];
                    panda$core$Object* $tmp1865 = $tmp1863(m$Iter1849);
                    m1861 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1865);
                    panda$core$Bit $tmp1867 = (($fn1866) m1861->annotations->$class->vtable[8])(m1861->annotations);
                    if ($tmp1867.value) {
                    {
                        (($fn1868) self->$class->vtable[6])(self, m1861);
                        panda$core$Object* $tmp1869 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1861->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1871 = (($fn1870) self->$class->vtable[31])(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1869)->type);
                        if (((panda$core$Bit) { $tmp1871.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1873 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1873->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1873->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1875 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1877 = (($fn1876) cl1846->$class->vtable[3])(cl1846);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1873, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1875, $tmp1877);
                            type1872 = $tmp1873;
                            panda$collections$Array* $tmp1879 = (panda$collections$Array*) malloc(40);
                            $tmp1879->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1879->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1879, ((panda$core$Int64) { 1 }));
                            args1878 = $tmp1879;
                            panda$collections$Array$add$panda$collections$Array$T(args1878, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1882 = (($fn1881) self->$class->vtable[42])(self, type1872, ((panda$collections$ListView*) args1878));
                            return $tmp1882;
                        }
                        }
                    }
                    }
                }
                goto $l1854;
                $l1855:;
            }
        }
        }
        panda$collections$Array* $tmp1884 = (panda$collections$Array*) malloc(40);
        $tmp1884->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1884->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1884, ((panda$core$Int64) { 1 }));
        children1883 = $tmp1884;
        panda$collections$Array$add$panda$collections$Array$T(children1883, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1886 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1886->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1886->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1886, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1883));
        return $tmp1886;
    }
    }
    panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1888, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1890);
    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1891, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1892, &$s1893);
    (($fn1895) self->$class->vtable[96])(self, p_expr->offset, $tmp1894);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1896;
    org$pandalanguage$pandac$IRNode* $tmp1898 = (($fn1897) self->$class->vtable[32])(self, p_expr, p_target);
    result1896 = $tmp1898;
    return result1896;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Iterator* t$Iter1916;
    org$pandalanguage$pandac$Type* t1928;
    panda$core$Bit $tmp1901 = (($fn1900) p_type->$class->vtable[10])(p_type);
    bool $tmp1899 = $tmp1901.value;
    if (!$tmp1899) goto $l1902;
    panda$core$Bit $tmp1904 = (($fn1903) p_target->$class->vtable[10])(p_target);
    $tmp1899 = $tmp1904.value;
    $l1902:;
    panda$core$Bit $tmp1905 = { $tmp1899 };
    if ($tmp1905.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1907 = (($fn1906) self->$class->vtable[28])(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1907.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1910 = (($fn1909) p_type->$class->vtable[7])(p_type);
    bool $tmp1908 = $tmp1910.value;
    if (!$tmp1908) goto $l1911;
    panda$core$Bit $tmp1913 = (($fn1912) p_target->$class->vtable[7])(p_target);
    $tmp1908 = $tmp1913.value;
    $l1911:;
    panda$core$Bit $tmp1914 = { $tmp1908 };
    if ($tmp1914.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 17 }));
    if ($tmp1915.value) {
    {
        {
            ITable* $tmp1917 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
            while ($tmp1917->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1917 = $tmp1917->next;
            }
            $fn1919 $tmp1918 = $tmp1917->methods[0];
            panda$collections$Iterator* $tmp1920 = $tmp1918(((panda$collections$Iterable*) p_type->subtypes));
            t$Iter1916 = $tmp1920;
            $l1921:;
            ITable* $tmp1923 = t$Iter1916->$class->itable;
            while ($tmp1923->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1923 = $tmp1923->next;
            }
            $fn1925 $tmp1924 = $tmp1923->methods[0];
            panda$core$Bit $tmp1926 = $tmp1924(t$Iter1916);
            panda$core$Bit $tmp1927 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1926);
            if (!$tmp1927.value) goto $l1922;
            {
                ITable* $tmp1929 = t$Iter1916->$class->itable;
                while ($tmp1929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1929 = $tmp1929->next;
                }
                $fn1931 $tmp1930 = $tmp1929->methods[1];
                panda$core$Object* $tmp1932 = $tmp1930(t$Iter1916);
                t1928 = ((org$pandalanguage$pandac$Type*) $tmp1932);
                panda$core$Int64$nullable $tmp1934 = (($fn1933) self->$class->vtable[28])(self, t1928, p_target);
                if (((panda$core$Bit) { $tmp1934.nonnull }).value) {
                {
                    return ((panda$core$Bit) { true });
                }
                }
            }
            goto $l1921;
            $l1922:;
        }
    }
    }
    panda$core$Bit $tmp1935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1935.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1937 = (($fn1936) self->$class->vtable[28])(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1937.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable $tmp1939 = (($fn1938) self->$class->vtable[31])(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1939.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1941 = (($fn1940) self->$class->vtable[34])(self, p_node->type, p_target);
    return $tmp1941;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 $match$441151960;
    panda$collections$Array* children1980;
    panda$core$Bit $tmp1943 = (($fn1942) p_node->type->$class->vtable[4])(p_node->type, ((panda$core$Object*) p_target));
    if ($tmp1943.value) {
    {
        return p_node;
    }
    }
    bool $tmp1944 = p_isExplicit.value;
    if (!$tmp1944) goto $l1945;
    panda$core$Bit $tmp1947 = (($fn1946) self->$class->vtable[35])(self, p_node, p_target);
    panda$core$Bit $tmp1948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1947);
    $tmp1944 = $tmp1948.value;
    $l1945:;
    panda$core$Bit $tmp1949 = { $tmp1944 };
    if ($tmp1949.value) {
    {
        panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1950, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
        panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1954, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, &$s1956);
        panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, $tmp1957);
        (($fn1959) self->$class->vtable[96])(self, p_offset, $tmp1958);
    }
    }
    {
        $match$441151960 = p_node->kind;
        panda$core$Bit $tmp1965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441151960, ((panda$core$Int64) { 1004 }));
        bool $tmp1964 = $tmp1965.value;
        if ($tmp1964) goto $l1966;
        panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441151960, ((panda$core$Int64) { 1032 }));
        $tmp1964 = $tmp1967.value;
        $l1966:;
        panda$core$Bit $tmp1968 = { $tmp1964 };
        bool $tmp1963 = $tmp1968.value;
        if ($tmp1963) goto $l1969;
        panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441151960, ((panda$core$Int64) { 1011 }));
        $tmp1963 = $tmp1970.value;
        $l1969:;
        panda$core$Bit $tmp1971 = { $tmp1963 };
        bool $tmp1962 = $tmp1971.value;
        if ($tmp1962) goto $l1972;
        panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441151960, ((panda$core$Int64) { 1039 }));
        $tmp1962 = $tmp1973.value;
        $l1972:;
        panda$core$Bit $tmp1974 = { $tmp1962 };
        bool $tmp1961 = $tmp1974.value;
        if ($tmp1961) goto $l1975;
        panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441151960, ((panda$core$Int64) { 1040 }));
        $tmp1961 = $tmp1976.value;
        $l1975:;
        panda$core$Bit $tmp1977 = { $tmp1961 };
        if ($tmp1977.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1979 = (($fn1978) self->$class->vtable[33])(self, p_node, p_target);
            return $tmp1979;
        }
        }
    }
    panda$collections$Array* $tmp1981 = (panda$collections$Array*) malloc(40);
    $tmp1981->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1981->refCount.value = 1;
    panda$collections$Array$init($tmp1981);
    children1980 = $tmp1981;
    panda$collections$Array$add$panda$collections$Array$T(children1980, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1983 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1983->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1983->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1983, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1980));
    return $tmp1983;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1992;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1993;
    panda$core$Int64$nullable cost2014;
    panda$core$Int64$nullable cost2035;
    panda$core$Int64 $tmp1986 = (($fn1985) p_m->$class->vtable[3])(p_m);
    ITable* $tmp1987 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1987->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1987 = $tmp1987->next;
    }
    $fn1989 $tmp1988 = $tmp1987->methods[0];
    panda$core$Int64 $tmp1990 = $tmp1988(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1991 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1986, $tmp1990);
    if ($tmp1991.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1992 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1995 = (($fn1994) p_m->$class->vtable[3])(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1993, ((panda$core$Int64) { 0 }), $tmp1995, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1997 = $tmp1993.start.value;
    panda$core$Int64 i1996 = { $tmp1997 };
    int64_t $tmp1999 = $tmp1993.end.value;
    int64_t $tmp2000 = $tmp1993.step.value;
    bool $tmp2001 = $tmp1993.inclusive.value;
    bool $tmp2008 = $tmp2000 > 0;
    if ($tmp2008) goto $l2006; else goto $l2007;
    $l2006:;
    if ($tmp2001) goto $l2009; else goto $l2010;
    $l2009:;
    if ($tmp1997 <= $tmp1999) goto $l2002; else goto $l2004;
    $l2010:;
    if ($tmp1997 < $tmp1999) goto $l2002; else goto $l2004;
    $l2007:;
    if ($tmp2001) goto $l2011; else goto $l2012;
    $l2011:;
    if ($tmp1997 >= $tmp1999) goto $l2002; else goto $l2004;
    $l2012:;
    if ($tmp1997 > $tmp1999) goto $l2002; else goto $l2004;
    $l2002:;
    {
        ITable* $tmp2015 = p_args->$class->itable;
        while ($tmp2015->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2015 = $tmp2015->next;
        }
        $fn2017 $tmp2016 = $tmp2015->methods[0];
        panda$core$Object* $tmp2018 = $tmp2016(p_args, i1996);
        org$pandalanguage$pandac$Type* $tmp2020 = (($fn2019) p_m->$class->vtable[4])(p_m, i1996);
        panda$core$Int64$nullable $tmp2022 = (($fn2021) self->$class->vtable[31])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2018), $tmp2020);
        cost2014 = $tmp2022;
        if (((panda$core$Bit) { !cost2014.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2023 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1992, ((panda$core$Int64) cost2014.value));
        result1992 = $tmp2023;
    }
    $l2005:;
    if ($tmp2008) goto $l2025; else goto $l2026;
    $l2025:;
    int64_t $tmp2027 = $tmp1999 - i1996.value;
    if ($tmp2001) goto $l2028; else goto $l2029;
    $l2028:;
    if ($tmp2027 >= $tmp2000) goto $l2024; else goto $l2004;
    $l2029:;
    if ($tmp2027 > $tmp2000) goto $l2024; else goto $l2004;
    $l2026:;
    int64_t $tmp2031 = i1996.value - $tmp1999;
    if ($tmp2001) goto $l2032; else goto $l2033;
    $l2032:;
    if ($tmp2031 >= -$tmp2000) goto $l2024; else goto $l2004;
    $l2033:;
    if ($tmp2031 > -$tmp2000) goto $l2024; else goto $l2004;
    $l2024:;
    i1996.value += $tmp2000;
    goto $l2002;
    $l2004:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2037 = (($fn2036) p_m->$class->vtable[5])(p_m);
        panda$core$Int64$nullable $tmp2039 = (($fn2038) self->$class->vtable[28])(self, $tmp2037, p_expectedReturn);
        cost2035 = $tmp2039;
        if (((panda$core$Bit) { !cost2035.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2040 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1992, ((panda$core$Int64) cost2035.value));
        result1992 = $tmp2040;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2044 = (($fn2043) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
    panda$core$Bit $tmp2046 = (($fn2045) $tmp2044->$class->vtable[6])($tmp2044);
    bool $tmp2042 = $tmp2046.value;
    if (!$tmp2042) goto $l2047;
    ITable* $tmp2048 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2048->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2048 = $tmp2048->next;
    }
    $fn2050 $tmp2049 = $tmp2048->methods[0];
    panda$core$Int64 $tmp2051 = $tmp2049(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2051, ((panda$core$Int64) { 1 }));
    $tmp2042 = $tmp2052.value;
    $l2047:;
    panda$core$Bit $tmp2053 = { $tmp2042 };
    bool $tmp2041 = $tmp2053.value;
    if (!$tmp2041) goto $l2054;
    panda$core$Object* $tmp2055 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2057 = (($fn2056) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
    panda$core$Bit $tmp2059 = (($fn2058) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2055)->type->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2055)->type, ((panda$core$Object*) $tmp2057));
    $tmp2041 = $tmp2059.value;
    $l2054:;
    panda$core$Bit $tmp2060 = { $tmp2041 };
    if ($tmp2060.value) {
    {
        panda$core$Int64 $tmp2061 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1992, ((panda$core$Int64) { 1 }));
        result1992 = $tmp2061;
    }
    }
    return ((panda$core$Int64$nullable) { result1992, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2062;
    panda$core$Int64$nullable best2065;
    panda$collections$Iterator* m$Iter2066;
    org$pandalanguage$pandac$MethodRef* m2078;
    panda$core$Int64$nullable cost2083;
    panda$collections$Array* $tmp2063 = (panda$collections$Array*) malloc(40);
    $tmp2063->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2063->refCount.value = 1;
    panda$collections$Array$init($tmp2063);
    result2062 = $tmp2063;
    best2065 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2067 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2067->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2067 = $tmp2067->next;
        }
        $fn2069 $tmp2068 = $tmp2067->methods[0];
        panda$collections$Iterator* $tmp2070 = $tmp2068(((panda$collections$Iterable*) p_methods));
        m$Iter2066 = $tmp2070;
        $l2071:;
        ITable* $tmp2073 = m$Iter2066->$class->itable;
        while ($tmp2073->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2073 = $tmp2073->next;
        }
        $fn2075 $tmp2074 = $tmp2073->methods[0];
        panda$core$Bit $tmp2076 = $tmp2074(m$Iter2066);
        panda$core$Bit $tmp2077 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2076);
        if (!$tmp2077.value) goto $l2072;
        {
            ITable* $tmp2079 = m$Iter2066->$class->itable;
            while ($tmp2079->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2079 = $tmp2079->next;
            }
            $fn2081 $tmp2080 = $tmp2079->methods[1];
            panda$core$Object* $tmp2082 = $tmp2080(m$Iter2066);
            m2078 = ((org$pandalanguage$pandac$MethodRef*) $tmp2082);
            panda$core$Int64$nullable $tmp2085 = (($fn2084) self->$class->vtable[37])(self, m2078, p_args, p_expectedReturn);
            cost2083 = $tmp2085;
            if (((panda$core$Bit) { !cost2083.nonnull }).value) {
            {
                goto $l2071;
            }
            }
            bool $tmp2086 = ((panda$core$Bit) { !best2065.nonnull }).value;
            if ($tmp2086) goto $l2087;
            panda$core$Bit $tmp2088 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2083.value), ((panda$core$Int64) best2065.value));
            $tmp2086 = $tmp2088.value;
            $l2087:;
            panda$core$Bit $tmp2089 = { $tmp2086 };
            if ($tmp2089.value) {
            {
                panda$collections$Array$clear(result2062);
                best2065 = cost2083;
            }
            }
            panda$core$Bit $tmp2090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2083.value), ((panda$core$Int64) best2065.value));
            if ($tmp2090.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2062, ((panda$core$Object*) m2078));
            }
            }
        }
        goto $l2071;
        $l2072:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2062));
    return best2065;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs2091;
    org$pandalanguage$pandac$IRNode* selfNode2136;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2159;
    org$pandalanguage$pandac$IRNode* coerced2182;
    org$pandalanguage$pandac$IRNode* result2205;
    panda$collections$Array* $tmp2092 = (panda$collections$Array*) malloc(40);
    $tmp2092->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2092->refCount.value = 1;
    panda$collections$Array$init($tmp2092);
    finalArgs2091 = $tmp2092;
    bool $tmp2095 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2095) goto $l2096;
    panda$core$Bit $tmp2097 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2095 = $tmp2097.value;
    $l2096:;
    panda$core$Bit $tmp2098 = { $tmp2095 };
    bool $tmp2094 = $tmp2098.value;
    if (!$tmp2094) goto $l2099;
    panda$core$Bit $tmp2101 = (($fn2100) p_m->value->annotations->$class->vtable[5])(p_m->value->annotations);
    panda$core$Bit $tmp2102 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2101);
    $tmp2094 = $tmp2102.value;
    $l2099:;
    panda$core$Bit $tmp2103 = { $tmp2094 };
    if ($tmp2103.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2105 = (($fn2104) p_m->$class->vtable[2])(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2107 = (($fn2106) self->$class->vtable[36])(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp2105);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2091, ((panda$core$Object*) $tmp2107));
    }
    }
    panda$core$Bit $tmp2108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2108.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2110 = (($fn2109) self->currentMethod->$class->vtable[4])(self->currentMethod);
            panda$core$Bit $tmp2111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2110)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2111.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2112 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2112->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2112->refCount.value = 1;
                panda$core$Object* $tmp2115 = (($fn2114) self->currentClass->$class->vtable[4])(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2117 = (($fn2116) ((org$pandalanguage$pandac$ClassDecl*) $tmp2115)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp2115));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2112, ((panda$core$Int64) { 1025 }), p_offset, $tmp2117);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2091, ((panda$core$Object*) $tmp2112));
            }
            }
            else {
            {
                (($fn2119) self->$class->vtable[96])(self, p_offset, &$s2118);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2122 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2121 = $tmp2122.value;
        if (!$tmp2121) goto $l2123;
        panda$core$Bit $tmp2124 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2121 = $tmp2124.value;
        $l2123:;
        panda$core$Bit $tmp2125 = { $tmp2121 };
        bool $tmp2120 = $tmp2125.value;
        if (!$tmp2120) goto $l2126;
        panda$core$Bit $tmp2127 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2120 = $tmp2127.value;
        $l2126:;
        panda$core$Bit $tmp2128 = { $tmp2120 };
        if ($tmp2128.value) {
        {
            (($fn2130) self->$class->vtable[96])(self, p_offset, &$s2129);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2133 = (($fn2132) p_m->value->$class->vtable[4])(p_m->value);
    bool $tmp2131 = $tmp2133.value;
    if (!$tmp2131) goto $l2134;
    $tmp2131 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2134:;
    panda$core$Bit $tmp2135 = { $tmp2131 };
    if ($tmp2135.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2137 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2137->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2137->refCount.value = 1;
        panda$core$Object* $tmp2140 = (($fn2139) self->currentClass->$class->vtable[4])(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2142 = (($fn2141) ((org$pandalanguage$pandac$ClassDecl*) $tmp2140)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp2140));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2137, ((panda$core$Int64) { 1025 }), p_offset, $tmp2142);
        selfNode2136 = $tmp2137;
        org$pandalanguage$pandac$Type* $tmp2144 = (($fn2143) p_m->value->owner->$class->vtable[3])(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2146 = (($fn2145) self->$class->vtable[33])(self, selfNode2136, $tmp2144);
        selfNode2136 = $tmp2146;
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2091, ((panda$core$Object*) selfNode2136));
        panda$core$Object* $tmp2148 = (($fn2147) self->currentMethod->$class->vtable[4])(self->currentMethod);
        panda$core$Bit $tmp2150 = (($fn2149) ((org$pandalanguage$pandac$MethodDecl*) $tmp2148)->$class->vtable[4])(((org$pandalanguage$pandac$MethodDecl*) $tmp2148));
        panda$core$Bit $tmp2151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2150);
        if ($tmp2151.value) {
        {
            panda$core$String* $tmp2154 = (($fn2153) p_m->value->$class->vtable[6])(p_m->value);
            panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2152, $tmp2154);
            panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
            (($fn2158) self->$class->vtable[96])(self, p_offset, $tmp2157);
        }
        }
    }
    }
    }
    ITable* $tmp2160 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2160->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2160 = $tmp2160->next;
    }
    $fn2162 $tmp2161 = $tmp2160->methods[0];
    panda$core$Int64 $tmp2163 = $tmp2161(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2159, ((panda$core$Int64) { 0 }), $tmp2163, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2165 = $tmp2159.start.value;
    panda$core$Int64 i2164 = { $tmp2165 };
    int64_t $tmp2167 = $tmp2159.end.value;
    int64_t $tmp2168 = $tmp2159.step.value;
    bool $tmp2169 = $tmp2159.inclusive.value;
    bool $tmp2176 = $tmp2168 > 0;
    if ($tmp2176) goto $l2174; else goto $l2175;
    $l2174:;
    if ($tmp2169) goto $l2177; else goto $l2178;
    $l2177:;
    if ($tmp2165 <= $tmp2167) goto $l2170; else goto $l2172;
    $l2178:;
    if ($tmp2165 < $tmp2167) goto $l2170; else goto $l2172;
    $l2175:;
    if ($tmp2169) goto $l2179; else goto $l2180;
    $l2179:;
    if ($tmp2165 >= $tmp2167) goto $l2170; else goto $l2172;
    $l2180:;
    if ($tmp2165 > $tmp2167) goto $l2170; else goto $l2172;
    $l2170:;
    {
        ITable* $tmp2183 = p_args->$class->itable;
        while ($tmp2183->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2183 = $tmp2183->next;
        }
        $fn2185 $tmp2184 = $tmp2183->methods[0];
        panda$core$Object* $tmp2186 = $tmp2184(p_args, i2164);
        org$pandalanguage$pandac$Type* $tmp2188 = (($fn2187) p_m->$class->vtable[4])(p_m, i2164);
        org$pandalanguage$pandac$IRNode* $tmp2190 = (($fn2189) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2186), $tmp2188);
        coerced2182 = $tmp2190;
        if (((panda$core$Bit) { coerced2182 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2191 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2164);
        org$pandalanguage$pandac$IRNode* $tmp2193 = (($fn2192) self->$class->vtable[36])(self, coerced2182, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2191)->type);
        coerced2182 = $tmp2193;
        if (((panda$core$Bit) { coerced2182 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2091, ((panda$core$Object*) coerced2182));
    }
    $l2173:;
    if ($tmp2176) goto $l2195; else goto $l2196;
    $l2195:;
    int64_t $tmp2197 = $tmp2167 - i2164.value;
    if ($tmp2169) goto $l2198; else goto $l2199;
    $l2198:;
    if ($tmp2197 >= $tmp2168) goto $l2194; else goto $l2172;
    $l2199:;
    if ($tmp2197 > $tmp2168) goto $l2194; else goto $l2172;
    $l2196:;
    int64_t $tmp2201 = i2164.value - $tmp2167;
    if ($tmp2169) goto $l2202; else goto $l2203;
    $l2202:;
    if ($tmp2201 >= -$tmp2168) goto $l2194; else goto $l2172;
    $l2203:;
    if ($tmp2201 > -$tmp2168) goto $l2194; else goto $l2172;
    $l2194:;
    i2164.value += $tmp2168;
    goto $l2170;
    $l2172:;
    panda$core$Bit $tmp2207 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2206);
    if ($tmp2207.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2208 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2208->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2208->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2211 = (($fn2210) p_m->$class->vtable[5])(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2208, ((panda$core$Int64) { 1005 }), p_offset, $tmp2211, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2091));
        result2205 = $tmp2208;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2212 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2212->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2212->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2212, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2091));
        result2205 = $tmp2212;
        org$pandalanguage$pandac$Type* $tmp2215 = (($fn2214) p_m->$class->vtable[5])(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2217 = (($fn2216) self->$class->vtable[36])(self, result2205, p_offset, ((panda$core$Bit) { false }), $tmp2215);
        result2205 = $tmp2217;
    }
    }
    return result2205;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2219 = (($fn2218) self->$class->vtable[41])(self, p_target, p_name, p_args, NULL);
    return $tmp2219;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2220;
    org$pandalanguage$pandac$ClassDecl* cl2223;
    org$pandalanguage$pandac$Symbol* s2229;
    org$pandalanguage$pandac$IRNode* ref2255;
    org$pandalanguage$pandac$IRNode* $tmp2222 = (($fn2221) self->$class->vtable[8])(self, p_target);
    resolved2220 = $tmp2222;
    if (((panda$core$Bit) { resolved2220 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2220->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2224.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2226 = (($fn2225) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) resolved2220->payload));
        cl2223 = $tmp2226;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2228 = (($fn2227) self->$class->vtable[14])(self, resolved2220->type);
        cl2223 = $tmp2228;
    }
    }
    if (((panda$core$Bit) { cl2223 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2231 = (($fn2230) self->$class->vtable[20])(self, cl2223);
    org$pandalanguage$pandac$Symbol* $tmp2233 = (($fn2232) $tmp2231->$class->vtable[6])($tmp2231, p_name);
    s2229 = $tmp2233;
    if (((panda$core$Bit) { s2229 == NULL }).value) {
    {
        panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2234, ((org$pandalanguage$pandac$Symbol*) cl2223)->name);
        panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
        panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, p_name);
        panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2239);
        (($fn2241) self->$class->vtable[96])(self, p_target->offset, $tmp2240);
        return NULL;
    }
    }
    panda$core$Bit $tmp2243 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2229->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2242 = $tmp2243.value;
    if (!$tmp2242) goto $l2244;
    panda$core$Bit $tmp2245 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2229->kind, ((panda$core$Int64) { 205 }));
    $tmp2242 = $tmp2245.value;
    $l2244:;
    panda$core$Bit $tmp2246 = { $tmp2242 };
    if ($tmp2246.value) {
    {
        panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2247, ((org$pandalanguage$pandac$Symbol*) cl2223)->name);
        panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2248, &$s2249);
        panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, p_name);
        panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2252);
        (($fn2254) self->$class->vtable[96])(self, p_target->offset, $tmp2253);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2257 = (($fn2256) self->$class->vtable[20])(self, cl2223);
    org$pandalanguage$pandac$IRNode* $tmp2259 = (($fn2258) self->$class->vtable[24])(self, p_target->offset, p_target, s2229, $tmp2257);
    ref2255 = $tmp2259;
    if (((panda$core$Bit) { ref2255 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2261 = (($fn2260) self->$class->vtable[43])(self, ref2255, p_args, p_expectedType);
    return $tmp2261;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2263 = (($fn2262) self->$class->vtable[43])(self, p_m, p_args, NULL);
    return $tmp2263;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    panda$core$Int64 $match$498492264;
    org$pandalanguage$pandac$IRNode* target2266;
    panda$collections$Array* methods2273;
    org$pandalanguage$pandac$MethodDecl* first2279;
    panda$core$MutableString* msg2284;
    panda$core$String* separator2296;
    panda$collections$Iterator* a$Iter2298;
    org$pandalanguage$pandac$IRNode* a2310;
    org$pandalanguage$pandac$IRNode* target2330;
    panda$collections$Array* children2337;
    panda$collections$Array* types2343;
    panda$collections$Iterator* m$Iter2346;
    org$pandalanguage$pandac$MethodRef* m2358;
    org$pandalanguage$pandac$IRNode* target2370;
    org$pandalanguage$pandac$IRNode* initCall2373;
    panda$collections$Array* children2379;
    org$pandalanguage$pandac$IRNode* resolved2384;
    {
        $match$498492264 = p_m->kind;
        panda$core$Bit $tmp2265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$498492264, ((panda$core$Int64) { 1002 }));
        if ($tmp2265.value) {
        {
            panda$core$Int64 $tmp2267 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2267, ((panda$core$Int64) { 0 }));
            if ($tmp2268.value) {
            {
                target2266 = NULL;
            }
            }
            else {
            {
                panda$core$Object* $tmp2269 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2266 = ((org$pandalanguage$pandac$IRNode*) $tmp2269);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2271 = (($fn2270) self->$class->vtable[39])(self, p_m->offset, target2266, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2271;
        }
        }
        else {
        panda$core$Bit $tmp2272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$498492264, ((panda$core$Int64) { 1003 }));
        if ($tmp2272.value) {
        {
            panda$collections$Array* $tmp2274 = (panda$collections$Array*) malloc(40);
            $tmp2274->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2274->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2274, ((panda$collections$ListView*) p_m->payload));
            methods2273 = $tmp2274;
            (($fn2276) self->$class->vtable[38])(self, methods2273, p_args, p_expectedType);
            panda$core$Int64 $tmp2277 = panda$collections$Array$get_count$R$panda$core$Int64(methods2273);
            panda$core$Bit $tmp2278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2277, ((panda$core$Int64) { 0 }));
            if ($tmp2278.value) {
            {
                ITable* $tmp2280 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2280->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2280 = $tmp2280->next;
                }
                $fn2282 $tmp2281 = $tmp2280->methods[0];
                panda$core$Object* $tmp2283 = $tmp2281(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2279 = ((org$pandalanguage$pandac$MethodRef*) $tmp2283)->value;
                panda$core$MutableString* $tmp2285 = (panda$core$MutableString*) malloc(40);
                $tmp2285->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2285->refCount.value = 1;
                panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2287, ((org$pandalanguage$pandac$Symbol*) first2279->owner)->name);
                panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
                panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2291, ((org$pandalanguage$pandac$Symbol*) first2279)->name);
                panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2293);
                panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, $tmp2294);
                panda$core$MutableString$init$panda$core$String($tmp2285, $tmp2295);
                msg2284 = $tmp2285;
                separator2296 = &$s2297;
                {
                    ITable* $tmp2299 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2299->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2299 = $tmp2299->next;
                    }
                    $fn2301 $tmp2300 = $tmp2299->methods[0];
                    panda$collections$Iterator* $tmp2302 = $tmp2300(((panda$collections$Iterable*) p_args));
                    a$Iter2298 = $tmp2302;
                    $l2303:;
                    ITable* $tmp2305 = a$Iter2298->$class->itable;
                    while ($tmp2305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2305 = $tmp2305->next;
                    }
                    $fn2307 $tmp2306 = $tmp2305->methods[0];
                    panda$core$Bit $tmp2308 = $tmp2306(a$Iter2298);
                    panda$core$Bit $tmp2309 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2308);
                    if (!$tmp2309.value) goto $l2304;
                    {
                        ITable* $tmp2311 = a$Iter2298->$class->itable;
                        while ($tmp2311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2311 = $tmp2311->next;
                        }
                        $fn2313 $tmp2312 = $tmp2311->methods[1];
                        panda$core$Object* $tmp2314 = $tmp2312(a$Iter2298);
                        a2310 = ((org$pandalanguage$pandac$IRNode*) $tmp2314);
                        (($fn2315) msg2284->$class->vtable[3])(msg2284, separator2296);
                        (($fn2316) msg2284->$class->vtable[5])(msg2284, ((panda$core$Object*) a2310->type));
                        separator2296 = &$s2317;
                    }
                    goto $l2303;
                    $l2304:;
                }
                (($fn2319) msg2284->$class->vtable[3])(msg2284, &$s2318);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2320, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2321, &$s2322);
                    (($fn2324) msg2284->$class->vtable[3])(msg2284, $tmp2323);
                }
                }
                panda$core$String* $tmp2326 = (($fn2325) msg2284->$class->vtable[0])(msg2284);
                (($fn2327) self->$class->vtable[96])(self, p_m->offset, $tmp2326);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2328 = panda$collections$Array$get_count$R$panda$core$Int64(methods2273);
            panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2328, ((panda$core$Int64) { 1 }));
            if ($tmp2329.value) {
            {
                panda$core$Int64 $tmp2331 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2331, ((panda$core$Int64) { 1 }));
                if ($tmp2332.value) {
                {
                    panda$core$Object* $tmp2333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2330 = ((org$pandalanguage$pandac$IRNode*) $tmp2333);
                }
                }
                else {
                {
                    target2330 = NULL;
                }
                }
                panda$core$Object* $tmp2334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2273, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2336 = (($fn2335) self->$class->vtable[39])(self, p_m->offset, target2330, ((org$pandalanguage$pandac$MethodRef*) $tmp2334), p_args);
                return $tmp2336;
            }
            }
            panda$collections$Array* $tmp2338 = (panda$collections$Array*) malloc(40);
            $tmp2338->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2338->refCount.value = 1;
            panda$collections$Array$init($tmp2338);
            children2337 = $tmp2338;
            org$pandalanguage$pandac$IRNode* $tmp2340 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2340->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2340->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2342 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2340, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp2342, ((panda$core$Object*) methods2273), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2337, ((panda$core$Object*) $tmp2340));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2337, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2344 = (panda$collections$Array*) malloc(40);
            $tmp2344->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2344->refCount.value = 1;
            panda$collections$Array$init($tmp2344);
            types2343 = $tmp2344;
            {
                ITable* $tmp2347 = ((panda$collections$Iterable*) methods2273)->$class->itable;
                while ($tmp2347->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2347 = $tmp2347->next;
                }
                $fn2349 $tmp2348 = $tmp2347->methods[0];
                panda$collections$Iterator* $tmp2350 = $tmp2348(((panda$collections$Iterable*) methods2273));
                m$Iter2346 = $tmp2350;
                $l2351:;
                ITable* $tmp2353 = m$Iter2346->$class->itable;
                while ($tmp2353->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2353 = $tmp2353->next;
                }
                $fn2355 $tmp2354 = $tmp2353->methods[0];
                panda$core$Bit $tmp2356 = $tmp2354(m$Iter2346);
                panda$core$Bit $tmp2357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2356);
                if (!$tmp2357.value) goto $l2352;
                {
                    ITable* $tmp2359 = m$Iter2346->$class->itable;
                    while ($tmp2359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2359 = $tmp2359->next;
                    }
                    $fn2361 $tmp2360 = $tmp2359->methods[1];
                    panda$core$Object* $tmp2362 = $tmp2360(m$Iter2346);
                    m2358 = ((org$pandalanguage$pandac$MethodRef*) $tmp2362);
                    org$pandalanguage$pandac$Type* $tmp2364 = (($fn2363) m2358->$class->vtable[5])(m2358);
                    panda$collections$Array$add$panda$collections$Array$T(types2343, ((panda$core$Object*) $tmp2364));
                }
                goto $l2351;
                $l2352:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2365 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2365->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2365->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2367 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp2367->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2367->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2367, ((panda$collections$ListView*) types2343));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2365, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp2367, ((panda$collections$ListView*) children2337));
            return $tmp2365;
        }
        }
        else {
        panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$498492264, ((panda$core$Int64) { 1001 }));
        if ($tmp2369.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2371 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2371->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2371->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2371, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2370 = $tmp2371;
            org$pandalanguage$pandac$IRNode* $tmp2376 = (($fn2375) self->$class->vtable[40])(self, target2370, &$s2374, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2378 = (($fn2377) self->$class->vtable[8])(self, $tmp2376);
            initCall2373 = $tmp2378;
            if (((panda$core$Bit) { initCall2373 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2380 = (panda$collections$Array*) malloc(40);
            $tmp2380->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2380->refCount.value = 1;
            panda$collections$Array$init($tmp2380);
            children2379 = $tmp2380;
            panda$collections$Array$add$panda$collections$Array$T(children2379, ((panda$core$Object*) initCall2373));
            org$pandalanguage$pandac$IRNode* $tmp2382 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2382->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2382->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2382, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2379));
            return $tmp2382;
        }
        }
        else {
        {
            org$pandalanguage$pandac$IRNode* $tmp2386 = (($fn2385) self->$class->vtable[8])(self, p_m);
            resolved2384 = $tmp2386;
            if (((panda$core$Bit) { resolved2384 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2387, ((panda$core$Object*) resolved2384->type));
            panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
            (($fn2391) self->$class->vtable[96])(self, resolved2384->offset, $tmp2390);
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2393;
    panda$core$MutableString* typeName2396;
    panda$core$String* separator2400;
    panda$collections$Iterator* p$Iter2402;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2414;
    panda$core$Int64 kind2422;
    (($fn2392) self->$class->vtable[6])(self, p_m);
    panda$collections$Array* $tmp2394 = (panda$collections$Array*) malloc(40);
    $tmp2394->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2394->refCount.value = 1;
    panda$collections$Array$init($tmp2394);
    subtypes2393 = $tmp2394;
    panda$core$MutableString* $tmp2397 = (panda$core$MutableString*) malloc(40);
    $tmp2397->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2397->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2397, &$s2399);
    typeName2396 = $tmp2397;
    separator2400 = &$s2401;
    {
        ITable* $tmp2403 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2403->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2403 = $tmp2403->next;
        }
        $fn2405 $tmp2404 = $tmp2403->methods[0];
        panda$collections$Iterator* $tmp2406 = $tmp2404(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2402 = $tmp2406;
        $l2407:;
        ITable* $tmp2409 = p$Iter2402->$class->itable;
        while ($tmp2409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2409 = $tmp2409->next;
        }
        $fn2411 $tmp2410 = $tmp2409->methods[0];
        panda$core$Bit $tmp2412 = $tmp2410(p$Iter2402);
        panda$core$Bit $tmp2413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2412);
        if (!$tmp2413.value) goto $l2408;
        {
            ITable* $tmp2415 = p$Iter2402->$class->itable;
            while ($tmp2415->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2415 = $tmp2415->next;
            }
            $fn2417 $tmp2416 = $tmp2415->methods[1];
            panda$core$Object* $tmp2418 = $tmp2416(p$Iter2402);
            p2414 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2418);
            (($fn2419) typeName2396->$class->vtable[3])(typeName2396, separator2400);
            (($fn2420) typeName2396->$class->vtable[3])(typeName2396, ((org$pandalanguage$pandac$Symbol*) p2414->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2393, ((panda$core$Object*) p2414->type));
            separator2400 = &$s2421;
        }
        goto $l2407;
        $l2408:;
    }
    panda$core$Bit $tmp2423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2423.value) {
    {
        (($fn2425) typeName2396->$class->vtable[3])(typeName2396, &$s2424);
        kind2422 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        (($fn2427) typeName2396->$class->vtable[3])(typeName2396, &$s2426);
        kind2422 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2393, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2428 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2430 = (($fn2429) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp2428));
    if ($tmp2430.value) {
    {
        (($fn2431) typeName2396->$class->vtable[3])(typeName2396, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    (($fn2433) typeName2396->$class->vtable[3])(typeName2396, &$s2432);
    org$pandalanguage$pandac$Type* $tmp2434 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2434->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2434->refCount.value = 1;
    panda$core$String* $tmp2437 = (($fn2436) typeName2396->$class->vtable[0])(typeName2396);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2434, $tmp2437, kind2422, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2393), ((panda$core$Bit) { true }));
    return $tmp2434;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2439;
    panda$core$MutableString* typeName2442;
    panda$collections$Iterator* p$Iter2447;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2459;
    panda$core$Int64 kind2467;
    (($fn2438) self->$class->vtable[6])(self, p_m);
    panda$collections$Array* $tmp2440 = (panda$collections$Array*) malloc(40);
    $tmp2440->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2440->refCount.value = 1;
    panda$collections$Array$init($tmp2440);
    subtypes2439 = $tmp2440;
    panda$core$MutableString* $tmp2443 = (panda$core$MutableString*) malloc(40);
    $tmp2443->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2443->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2443, &$s2445);
    typeName2442 = $tmp2443;
    (($fn2446) typeName2442->$class->vtable[3])(typeName2442, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2439, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2448 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2448->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2448 = $tmp2448->next;
        }
        $fn2450 $tmp2449 = $tmp2448->methods[0];
        panda$collections$Iterator* $tmp2451 = $tmp2449(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2447 = $tmp2451;
        $l2452:;
        ITable* $tmp2454 = p$Iter2447->$class->itable;
        while ($tmp2454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2454 = $tmp2454->next;
        }
        $fn2456 $tmp2455 = $tmp2454->methods[0];
        panda$core$Bit $tmp2457 = $tmp2455(p$Iter2447);
        panda$core$Bit $tmp2458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2457);
        if (!$tmp2458.value) goto $l2453;
        {
            ITable* $tmp2460 = p$Iter2447->$class->itable;
            while ($tmp2460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2460 = $tmp2460->next;
            }
            $fn2462 $tmp2461 = $tmp2460->methods[1];
            panda$core$Object* $tmp2463 = $tmp2461(p$Iter2447);
            p2459 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2463);
            (($fn2465) typeName2442->$class->vtable[3])(typeName2442, &$s2464);
            (($fn2466) typeName2442->$class->vtable[3])(typeName2442, ((org$pandalanguage$pandac$Symbol*) p2459->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2439, ((panda$core$Object*) p2459->type));
        }
        goto $l2452;
        $l2453:;
    }
    panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2468.value) {
    {
        (($fn2470) typeName2442->$class->vtable[3])(typeName2442, &$s2469);
        kind2467 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        (($fn2472) typeName2442->$class->vtable[3])(typeName2442, &$s2471);
        kind2467 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2439, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2473 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2475 = (($fn2474) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp2473));
    if ($tmp2475.value) {
    {
        (($fn2476) typeName2442->$class->vtable[3])(typeName2442, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    (($fn2478) typeName2442->$class->vtable[3])(typeName2442, &$s2477);
    org$pandalanguage$pandac$Type* $tmp2479 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp2479->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2479->refCount.value = 1;
    panda$core$String* $tmp2482 = (($fn2481) typeName2442->$class->vtable[0])(typeName2442);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2479, $tmp2482, kind2467, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2439), ((panda$core$Bit) { true }));
    return $tmp2479;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2483;
    org$pandalanguage$pandac$MethodDecl* $tmp2485 = (($fn2484) self->$class->vtable[18])(self, p_m);
    inherited2483 = $tmp2485;
    if (((panda$core$Bit) { inherited2483 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2487 = (($fn2486) self->$class->vtable[44])(self, p_m);
        return $tmp2487;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2489 = (($fn2488) self->$class->vtable[46])(self, inherited2483);
    return $tmp2489;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2491 = (($fn2490) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2493 = (($fn2492) self->$class->vtable[48])(self, p_m, $tmp2491);
    return $tmp2493;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2494;
    org$pandalanguage$pandac$MethodDecl* $tmp2496 = (($fn2495) self->$class->vtable[18])(self, p_m);
    inherited2494 = $tmp2496;
    if (((panda$core$Bit) { inherited2494 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2498 = (($fn2497) self->$class->vtable[45])(self, p_m, p_selfType);
        return $tmp2498;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2500 = (($fn2499) self->$class->vtable[48])(self, inherited2494, p_selfType);
    return $tmp2500;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    panda$core$Int64 $match$553102501;
    {
        $match$553102501 = p_op;
        panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 51 }));
        if ($tmp2502.value) {
        {
            return &$s2503;
        }
        }
        else {
        panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 52 }));
        if ($tmp2504.value) {
        {
            return &$s2505;
        }
        }
        else {
        panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 53 }));
        if ($tmp2506.value) {
        {
            return &$s2507;
        }
        }
        else {
        panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 54 }));
        if ($tmp2508.value) {
        {
            return &$s2509;
        }
        }
        else {
        panda$core$Bit $tmp2510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 55 }));
        if ($tmp2510.value) {
        {
            return &$s2511;
        }
        }
        else {
        panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 56 }));
        if ($tmp2512.value) {
        {
            return &$s2513;
        }
        }
        else {
        panda$core$Bit $tmp2514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 57 }));
        if ($tmp2514.value) {
        {
            return &$s2515;
        }
        }
        else {
        panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 58 }));
        if ($tmp2516.value) {
        {
            return &$s2517;
        }
        }
        else {
        panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 59 }));
        if ($tmp2518.value) {
        {
            return &$s2519;
        }
        }
        else {
        panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 63 }));
        if ($tmp2520.value) {
        {
            return &$s2521;
        }
        }
        else {
        panda$core$Bit $tmp2522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 62 }));
        if ($tmp2522.value) {
        {
            return &$s2523;
        }
        }
        else {
        panda$core$Bit $tmp2524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 65 }));
        if ($tmp2524.value) {
        {
            return &$s2525;
        }
        }
        else {
        panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 64 }));
        if ($tmp2526.value) {
        {
            return &$s2527;
        }
        }
        else {
        panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 68 }));
        if ($tmp2528.value) {
        {
            return &$s2529;
        }
        }
        else {
        panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 69 }));
        if ($tmp2530.value) {
        {
            return &$s2531;
        }
        }
        else {
        panda$core$Bit $tmp2532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 66 }));
        if ($tmp2532.value) {
        {
            return &$s2533;
        }
        }
        else {
        panda$core$Bit $tmp2534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 67 }));
        if ($tmp2534.value) {
        {
            return &$s2535;
        }
        }
        else {
        panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 70 }));
        if ($tmp2536.value) {
        {
            return &$s2537;
        }
        }
        else {
        panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 71 }));
        if ($tmp2538.value) {
        {
            return &$s2539;
        }
        }
        else {
        panda$core$Bit $tmp2540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 49 }));
        if ($tmp2540.value) {
        {
            return &$s2541;
        }
        }
        else {
        panda$core$Bit $tmp2542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 50 }));
        if ($tmp2542.value) {
        {
            return &$s2543;
        }
        }
        else {
        panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 72 }));
        if ($tmp2544.value) {
        {
            return &$s2545;
        }
        }
        else {
        panda$core$Bit $tmp2546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 1 }));
        if ($tmp2546.value) {
        {
            return &$s2547;
        }
        }
        else {
        panda$core$Bit $tmp2548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 101 }));
        if ($tmp2548.value) {
        {
            return &$s2549;
        }
        }
        else {
        panda$core$Bit $tmp2550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 73 }));
        if ($tmp2550.value) {
        {
            return &$s2551;
        }
        }
        else {
        panda$core$Bit $tmp2552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 60 }));
        if ($tmp2552.value) {
        {
            return &$s2553;
        }
        }
        else {
        panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553102501, ((panda$core$Int64) { 61 }));
        if ($tmp2554.value) {
        {
            return &$s2555;
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
    panda$core$Int64 $match$567262556;
    {
        $match$567262556 = p_op;
        panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 74 }));
        bool $tmp2570 = $tmp2571.value;
        if ($tmp2570) goto $l2572;
        panda$core$Bit $tmp2573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 75 }));
        $tmp2570 = $tmp2573.value;
        $l2572:;
        panda$core$Bit $tmp2574 = { $tmp2570 };
        bool $tmp2569 = $tmp2574.value;
        if ($tmp2569) goto $l2575;
        panda$core$Bit $tmp2576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 76 }));
        $tmp2569 = $tmp2576.value;
        $l2575:;
        panda$core$Bit $tmp2577 = { $tmp2569 };
        bool $tmp2568 = $tmp2577.value;
        if ($tmp2568) goto $l2578;
        panda$core$Bit $tmp2579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 77 }));
        $tmp2568 = $tmp2579.value;
        $l2578:;
        panda$core$Bit $tmp2580 = { $tmp2568 };
        bool $tmp2567 = $tmp2580.value;
        if ($tmp2567) goto $l2581;
        panda$core$Bit $tmp2582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 79 }));
        $tmp2567 = $tmp2582.value;
        $l2581:;
        panda$core$Bit $tmp2583 = { $tmp2567 };
        bool $tmp2566 = $tmp2583.value;
        if ($tmp2566) goto $l2584;
        panda$core$Bit $tmp2585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 78 }));
        $tmp2566 = $tmp2585.value;
        $l2584:;
        panda$core$Bit $tmp2586 = { $tmp2566 };
        bool $tmp2565 = $tmp2586.value;
        if ($tmp2565) goto $l2587;
        panda$core$Bit $tmp2588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 80 }));
        $tmp2565 = $tmp2588.value;
        $l2587:;
        panda$core$Bit $tmp2589 = { $tmp2565 };
        bool $tmp2564 = $tmp2589.value;
        if ($tmp2564) goto $l2590;
        panda$core$Bit $tmp2591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 81 }));
        $tmp2564 = $tmp2591.value;
        $l2590:;
        panda$core$Bit $tmp2592 = { $tmp2564 };
        bool $tmp2563 = $tmp2592.value;
        if ($tmp2563) goto $l2593;
        panda$core$Bit $tmp2594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 82 }));
        $tmp2563 = $tmp2594.value;
        $l2593:;
        panda$core$Bit $tmp2595 = { $tmp2563 };
        bool $tmp2562 = $tmp2595.value;
        if ($tmp2562) goto $l2596;
        panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 83 }));
        $tmp2562 = $tmp2597.value;
        $l2596:;
        panda$core$Bit $tmp2598 = { $tmp2562 };
        bool $tmp2561 = $tmp2598.value;
        if ($tmp2561) goto $l2599;
        panda$core$Bit $tmp2600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 84 }));
        $tmp2561 = $tmp2600.value;
        $l2599:;
        panda$core$Bit $tmp2601 = { $tmp2561 };
        bool $tmp2560 = $tmp2601.value;
        if ($tmp2560) goto $l2602;
        panda$core$Bit $tmp2603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 85 }));
        $tmp2560 = $tmp2603.value;
        $l2602:;
        panda$core$Bit $tmp2604 = { $tmp2560 };
        bool $tmp2559 = $tmp2604.value;
        if ($tmp2559) goto $l2605;
        panda$core$Bit $tmp2606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 86 }));
        $tmp2559 = $tmp2606.value;
        $l2605:;
        panda$core$Bit $tmp2607 = { $tmp2559 };
        bool $tmp2558 = $tmp2607.value;
        if ($tmp2558) goto $l2608;
        panda$core$Bit $tmp2609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 87 }));
        $tmp2558 = $tmp2609.value;
        $l2608:;
        panda$core$Bit $tmp2610 = { $tmp2558 };
        bool $tmp2557 = $tmp2610.value;
        if ($tmp2557) goto $l2611;
        panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$567262556, ((panda$core$Int64) { 88 }));
        $tmp2557 = $tmp2612.value;
        $l2611:;
        panda$core$Bit $tmp2613 = { $tmp2557 };
        if ($tmp2613.value) {
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
    panda$core$Int64 $match$572992614;
    {
        $match$572992614 = p_op;
        panda$core$Bit $tmp2615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 74 }));
        if ($tmp2615.value) {
        {
            return ((panda$core$Int64) { 51 });
        }
        }
        else {
        panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 75 }));
        if ($tmp2616.value) {
        {
            return ((panda$core$Int64) { 52 });
        }
        }
        else {
        panda$core$Bit $tmp2617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 76 }));
        if ($tmp2617.value) {
        {
            return ((panda$core$Int64) { 53 });
        }
        }
        else {
        panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 77 }));
        if ($tmp2618.value) {
        {
            return ((panda$core$Int64) { 54 });
        }
        }
        else {
        panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 79 }));
        if ($tmp2619.value) {
        {
            return ((panda$core$Int64) { 55 });
        }
        }
        else {
        panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 78 }));
        if ($tmp2620.value) {
        {
            return ((panda$core$Int64) { 56 });
        }
        }
        else {
        panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 80 }));
        if ($tmp2621.value) {
        {
            return ((panda$core$Int64) { 57 });
        }
        }
        else {
        panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 81 }));
        if ($tmp2622.value) {
        {
            return ((panda$core$Int64) { 68 });
        }
        }
        else {
        panda$core$Bit $tmp2623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 82 }));
        if ($tmp2623.value) {
        {
            return ((panda$core$Int64) { 69 });
        }
        }
        else {
        panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 83 }));
        if ($tmp2624.value) {
        {
            return ((panda$core$Int64) { 66 });
        }
        }
        else {
        panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 84 }));
        if ($tmp2625.value) {
        {
            return ((panda$core$Int64) { 67 });
        }
        }
        else {
        panda$core$Bit $tmp2626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 85 }));
        if ($tmp2626.value) {
        {
            return ((panda$core$Int64) { 70 });
        }
        }
        else {
        panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 86 }));
        if ($tmp2627.value) {
        {
            return ((panda$core$Int64) { 71 });
        }
        }
        else {
        panda$core$Bit $tmp2628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 87 }));
        if ($tmp2628.value) {
        {
            return ((panda$core$Int64) { 72 });
        }
        }
        else {
        panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$572992614, ((panda$core$Int64) { 88 }));
        if ($tmp2629.value) {
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
    panda$core$Int64 $match$584232630;
    {
        $match$584232630 = p_expr->kind;
        panda$core$Bit $tmp2631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584232630, ((panda$core$Int64) { 1009 }));
        if ($tmp2631.value) {
        {
            panda$core$Bit $tmp2632 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2632.value) {
            {
                panda$core$Object* $tmp2633 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2635 = (($fn2634) self->$class->vtable[49])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2633));
                return $tmp2635;
            }
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp2637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584232630, ((panda$core$Int64) { 1026 }));
        bool $tmp2636 = $tmp2637.value;
        if ($tmp2636) goto $l2638;
        panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584232630, ((panda$core$Int64) { 1016 }));
        $tmp2636 = $tmp2639.value;
        $l2638:;
        panda$core$Bit $tmp2640 = { $tmp2636 };
        if ($tmp2640.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp2641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$584232630, ((panda$core$Int64) { 1027 }));
        if ($tmp2641.value) {
        {
            panda$core$Object* $tmp2642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2644 = (($fn2643) self->$class->vtable[49])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2642));
            return $tmp2644;
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
    panda$core$Int64 l2660;
    panda$core$Int64 r2662;
    panda$core$Int64 $match$596012664;
    panda$core$Bit $tmp2647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2646 = $tmp2647.value;
    if ($tmp2646) goto $l2648;
    panda$core$UInt64 $tmp2650 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2651 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2650);
    bool $tmp2649 = $tmp2651.value;
    if (!$tmp2649) goto $l2652;
    panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2649 = $tmp2653.value;
    $l2652:;
    panda$core$Bit $tmp2654 = { $tmp2649 };
    $tmp2646 = $tmp2654.value;
    $l2648:;
    panda$core$Bit $tmp2655 = { $tmp2646 };
    bool $tmp2645 = $tmp2655.value;
    if ($tmp2645) goto $l2656;
    panda$core$UInt64 $tmp2657 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2658 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2657);
    $tmp2645 = $tmp2658.value;
    $l2656:;
    panda$core$Bit $tmp2659 = { $tmp2645 };
    if ($tmp2659.value) {
    {
        panda$core$Int64 $tmp2661 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2660 = $tmp2661;
        panda$core$Int64 $tmp2663 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2662 = $tmp2663;
        {
            $match$596012664 = p_op;
            panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 51 }));
            if ($tmp2665.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2666 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2666->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2666->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2668 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2669 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2670 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2669);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2666, ((panda$core$Int64) { 1004 }), p_offset, $tmp2668, $tmp2670);
                return $tmp2666;
            }
            }
            else {
            panda$core$Bit $tmp2671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 52 }));
            if ($tmp2671.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2672 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2672->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2672->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2674 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2675 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2676 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2675);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2672, ((panda$core$Int64) { 1004 }), p_offset, $tmp2674, $tmp2676);
                return $tmp2672;
            }
            }
            else {
            panda$core$Bit $tmp2677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 53 }));
            if ($tmp2677.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2678 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2678->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2678->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2680 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2681 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2682 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2681);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2678, ((panda$core$Int64) { 1004 }), p_offset, $tmp2680, $tmp2682);
                return $tmp2678;
            }
            }
            else {
            panda$core$Bit $tmp2683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 55 }));
            if ($tmp2683.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2684 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2684->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2684->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2686 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2687 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2688 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2687);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2684, ((panda$core$Int64) { 1004 }), p_offset, $tmp2686, $tmp2688);
                return $tmp2684;
            }
            }
            else {
            panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 56 }));
            if ($tmp2689.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2690 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2690->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2690->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2692 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2693 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2694 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2693);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2690, ((panda$core$Int64) { 1004 }), p_offset, $tmp2692, $tmp2694);
                return $tmp2690;
            }
            }
            else {
            panda$core$Bit $tmp2695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 58 }));
            if ($tmp2695.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2696 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2696->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2696->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2698 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2660, r2662);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2696, ((panda$core$Int64) { 1011 }), p_offset, $tmp2698, $tmp2699);
                return $tmp2696;
            }
            }
            else {
            panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 59 }));
            if ($tmp2700.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2701 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2701->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2703 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2704 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2660, r2662);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2701, ((panda$core$Int64) { 1011 }), p_offset, $tmp2703, $tmp2704);
                return $tmp2701;
            }
            }
            else {
            panda$core$Bit $tmp2705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 62 }));
            if ($tmp2705.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2706 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2706->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2706->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2708 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2709 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2660, r2662);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2706, ((panda$core$Int64) { 1011 }), p_offset, $tmp2708, $tmp2709);
                return $tmp2706;
            }
            }
            else {
            panda$core$Bit $tmp2710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 63 }));
            if ($tmp2710.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2711 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2711->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2711->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2713 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2714 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2660, r2662);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2711, ((panda$core$Int64) { 1011 }), p_offset, $tmp2713, $tmp2714);
                return $tmp2711;
            }
            }
            else {
            panda$core$Bit $tmp2715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 64 }));
            if ($tmp2715.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2716 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2716->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2716->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2718 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2719 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2660, r2662);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2716, ((panda$core$Int64) { 1011 }), p_offset, $tmp2718, $tmp2719);
                return $tmp2716;
            }
            }
            else {
            panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 65 }));
            if ($tmp2720.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2721 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2721->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2721->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2723 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2724 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2660, r2662);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2721, ((panda$core$Int64) { 1011 }), p_offset, $tmp2723, $tmp2724);
                return $tmp2721;
            }
            }
            else {
            panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 67 }));
            if ($tmp2725.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2726 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2726->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2726->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2728 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2729 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2730 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2729);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2726, ((panda$core$Int64) { 1004 }), p_offset, $tmp2728, $tmp2730);
                return $tmp2726;
            }
            }
            else {
            panda$core$Bit $tmp2731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 69 }));
            if ($tmp2731.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2732 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2732->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2732->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2734 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2735 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2736 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2735);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2732, ((panda$core$Int64) { 1004 }), p_offset, $tmp2734, $tmp2736);
                return $tmp2732;
            }
            }
            else {
            panda$core$Bit $tmp2737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 71 }));
            if ($tmp2737.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2738 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2738->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2738->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2740 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2741 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2742 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2741);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2738, ((panda$core$Int64) { 1004 }), p_offset, $tmp2740, $tmp2742);
                return $tmp2738;
            }
            }
            else {
            panda$core$Bit $tmp2743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 72 }));
            if ($tmp2743.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2744 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2744->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2744->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2746 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2747 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2748 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2747);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2744, ((panda$core$Int64) { 1004 }), p_offset, $tmp2746, $tmp2748);
                return $tmp2744;
            }
            }
            else {
            panda$core$Bit $tmp2749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596012664, ((panda$core$Int64) { 1 }));
            if ($tmp2749.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2750 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2750->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2750->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2752 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2753 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2660, r2662);
                panda$core$UInt64 $tmp2754 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2753);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2750, ((panda$core$Int64) { 1004 }), p_offset, $tmp2752, $tmp2754);
                return $tmp2750;
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
    (($fn2756) self->$class->vtable[96])(self, p_offset, &$s2755);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2757.value) {
    {
        panda$core$Object* $tmp2758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2758);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2760;
    org$pandalanguage$pandac$IRNode* resolved2768;
    panda$collections$Array* children2773;
    panda$core$UInt64 baseId2780;
    org$pandalanguage$pandac$IRNode* base2781;
    panda$core$UInt64 indexId2788;
    org$pandalanguage$pandac$IRNode* index2789;
    org$pandalanguage$pandac$IRNode* baseRef2794;
    org$pandalanguage$pandac$IRNode* indexRef2797;
    org$pandalanguage$pandac$IRNode* rhsIndex2800;
    org$pandalanguage$pandac$IRNode* value2803;
    panda$core$Bit $tmp2759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2759.value) {
    {
        panda$collections$Array* $tmp2761 = (panda$collections$Array*) malloc(40);
        $tmp2761->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2761->refCount.value = 1;
        panda$collections$Array$init($tmp2761);
        args2760 = $tmp2761;
        panda$core$Object* $tmp2763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2760, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2763)));
        panda$collections$Array$add$panda$collections$Array$T(args2760, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2767 = (($fn2766) self->$class->vtable[40])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2764), &$s2765, ((panda$collections$ListView*) args2760));
        return $tmp2767;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2770 = (($fn2769) self->$class->vtable[8])(self, p_left);
    resolved2768 = $tmp2770;
    if (((panda$core$Bit) { resolved2768 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2772 = (($fn2771) self->$class->vtable[51])(self, resolved2768);
    resolved2768 = $tmp2772;
    panda$collections$Array* $tmp2774 = (panda$collections$Array*) malloc(40);
    $tmp2774->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2774->refCount.value = 1;
    panda$collections$Array$init($tmp2774);
    children2773 = $tmp2774;
    panda$core$Object* $tmp2776 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2768->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2778 = (($fn2777) self->$class->vtable[51])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2776));
    panda$collections$Array$add$panda$collections$Array$T(children2773, ((panda$core$Object*) $tmp2778));
    panda$core$UInt64 $tmp2779 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2779;
    baseId2780 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2782 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2782->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2782->refCount.value = 1;
    panda$core$Object* $tmp2784 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2773, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2773, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2782, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2784)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2785)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2780)), ((panda$collections$ListView*) children2773));
    base2781 = $tmp2782;
    panda$collections$Array$clear(children2773);
    panda$core$Object* $tmp2786 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2768->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2773, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2786)));
    panda$core$UInt64 $tmp2787 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2787;
    indexId2788 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2790 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2790->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2790->refCount.value = 1;
    panda$core$Object* $tmp2792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2773, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2773, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2790, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2792)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2793)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2788)), ((panda$collections$ListView*) children2773));
    index2789 = $tmp2790;
    org$pandalanguage$pandac$IRNode* $tmp2795 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2795->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2795->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2795, ((panda$core$Int64) { 1028 }), base2781->offset, base2781->type, baseId2780);
    baseRef2794 = $tmp2795;
    org$pandalanguage$pandac$IRNode* $tmp2798 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2798->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2798, ((panda$core$Int64) { 1028 }), index2789->offset, index2789->type, indexId2788);
    indexRef2797 = $tmp2798;
    org$pandalanguage$pandac$IRNode* $tmp2802 = (($fn2801) self->$class->vtable[53])(self, p_offset, baseRef2794, ((panda$core$Int64) { 101 }), indexRef2797);
    rhsIndex2800 = $tmp2802;
    if (((panda$core$Bit) { rhsIndex2800 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2804 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2806 = (($fn2805) self->$class->vtable[53])(self, p_offset, rhsIndex2800, $tmp2804, p_right);
    value2803 = $tmp2806;
    if (((panda$core$Bit) { value2803 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2810 = (($fn2809) rhsIndex2800->type->$class->vtable[6])(rhsIndex2800->type);
    bool $tmp2808 = $tmp2810.value;
    if (!$tmp2808) goto $l2811;
    panda$core$Bit $tmp2813 = (($fn2812) p_right->type->$class->vtable[6])(p_right->type);
    $tmp2808 = $tmp2813.value;
    $l2811:;
    panda$core$Bit $tmp2814 = { $tmp2808 };
    bool $tmp2807 = $tmp2814.value;
    if (!$tmp2807) goto $l2815;
    panda$core$Bit $tmp2817 = (($fn2816) rhsIndex2800->type->$class->vtable[5])(rhsIndex2800->type, ((panda$core$Object*) value2803->type));
    $tmp2807 = $tmp2817.value;
    $l2815:;
    panda$core$Bit $tmp2818 = { $tmp2807 };
    if ($tmp2818.value) {
    {
        panda$collections$Array* $tmp2820 = (panda$collections$Array*) malloc(40);
        $tmp2820->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2820->refCount.value = 1;
        panda$collections$Array$init($tmp2820);
        org$pandalanguage$pandac$IRNode* $tmp2823 = (($fn2822) self->$class->vtable[41])(self, value2803, &$s2819, ((panda$collections$ListView*) $tmp2820), resolved2768->type);
        value2803 = $tmp2823;
        if (((panda$core$Bit) { value2803 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2773);
    panda$collections$Array$add$panda$collections$Array$T(children2773, ((panda$core$Object*) index2789));
    panda$collections$Array$add$panda$collections$Array$T(children2773, ((panda$core$Object*) value2803));
    org$pandalanguage$pandac$IRNode* $tmp2826 = (($fn2825) self->$class->vtable[40])(self, base2781, &$s2824, ((panda$collections$ListView*) children2773));
    return $tmp2826;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2827;
    org$pandalanguage$pandac$IRNode* right2828;
    panda$core$Int64 kind2857;
    org$pandalanguage$pandac$IRNode* resolved2864;
    panda$collections$Array* children2867;
    org$pandalanguage$pandac$IRNode* resolved2874;
    panda$collections$Array* children2877;
    org$pandalanguage$pandac$ClassDecl* cl2890;
    org$pandalanguage$pandac$ClassDecl* cl2911;
    org$pandalanguage$pandac$IRNode* finalLeft2930;
    org$pandalanguage$pandac$IRNode* finalRight2934;
    panda$collections$Array* children2938;
    panda$collections$Array* children2957;
    panda$collections$Array* children2973;
    org$pandalanguage$pandac$IRNode* reusedLeft2979;
    org$pandalanguage$pandac$ClassDecl* cl3002;
    panda$collections$ListView* parameters3005;
    org$pandalanguage$pandac$Symbol* methods3008;
    org$pandalanguage$pandac$Type* type3014;
    panda$collections$Array* types3015;
    org$pandalanguage$pandac$MethodDecl* m3019;
    panda$collections$Iterator* m$Iter3025;
    org$pandalanguage$pandac$MethodDecl* m3037;
    panda$collections$Array* children3050;
    panda$collections$Array* children3081;
    panda$collections$Array* children3098;
    org$pandalanguage$pandac$Type* resultType3125;
    panda$core$Int64 $match$727473126;
    org$pandalanguage$pandac$IRNode* result3151;
    org$pandalanguage$pandac$IRNode* resolved3155;
    org$pandalanguage$pandac$IRNode* target3163;
    left2827 = p_rawLeft;
    right2828 = p_rawRight;
    panda$core$Bit $tmp2829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2829.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2831 = (($fn2830) self->$class->vtable[8])(self, right2828);
        right2828 = $tmp2831;
        if (((panda$core$Bit) { right2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2833 = (($fn2832) self->$class->vtable[31])(self, left2827, right2828->type);
        if (((panda$core$Bit) { $tmp2833.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2835 = (($fn2834) self->$class->vtable[33])(self, left2827, right2828->type);
            left2827 = $tmp2835;
        }
        }
    }
    }
    panda$core$Bit $tmp2837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2828->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2836 = $tmp2837.value;
    if (!$tmp2836) goto $l2838;
    panda$core$Int64$nullable $tmp2840 = (($fn2839) self->$class->vtable[31])(self, right2828, left2827->type);
    $tmp2836 = ((panda$core$Bit) { $tmp2840.nonnull }).value;
    $l2838:;
    panda$core$Bit $tmp2841 = { $tmp2836 };
    if ($tmp2841.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2843 = (($fn2842) self->$class->vtable[33])(self, right2828, left2827->type);
        right2828 = $tmp2843;
    }
    }
    panda$core$Bit $tmp2847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2846 = $tmp2847.value;
    if ($tmp2846) goto $l2848;
    panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2846 = $tmp2849.value;
    $l2848:;
    panda$core$Bit $tmp2850 = { $tmp2846 };
    bool $tmp2845 = $tmp2850.value;
    if ($tmp2845) goto $l2851;
    panda$core$Bit $tmp2852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2845 = $tmp2852.value;
    $l2851:;
    panda$core$Bit $tmp2853 = { $tmp2845 };
    bool $tmp2844 = $tmp2853.value;
    if ($tmp2844) goto $l2854;
    panda$core$Bit $tmp2855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2844 = $tmp2855.value;
    $l2854:;
    panda$core$Bit $tmp2856 = { $tmp2844 };
    if ($tmp2856.value) {
    {
        panda$core$Bit $tmp2859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2858 = $tmp2859.value;
        if ($tmp2858) goto $l2860;
        panda$core$Bit $tmp2861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2858 = $tmp2861.value;
        $l2860:;
        panda$core$Bit $tmp2862 = { $tmp2858 };
        if ($tmp2862.value) {
        {
            kind2857 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2857 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2863.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2866 = (($fn2865) self->$class->vtable[8])(self, right2828);
            resolved2864 = $tmp2866;
            if (((panda$core$Bit) { resolved2864 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2868 = (panda$collections$Array*) malloc(40);
            $tmp2868->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2868->refCount.value = 1;
            panda$collections$Array$init($tmp2868);
            children2867 = $tmp2868;
            panda$collections$Array$add$panda$collections$Array$T(children2867, ((panda$core$Object*) resolved2864));
            org$pandalanguage$pandac$IRNode* $tmp2870 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2870->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2870->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2872 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2870, kind2857, p_offset, $tmp2872, ((panda$collections$ListView*) children2867));
            return $tmp2870;
        }
        }
        panda$core$Bit $tmp2873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2828->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2873.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2876 = (($fn2875) self->$class->vtable[8])(self, left2827);
            resolved2874 = $tmp2876;
            if (((panda$core$Bit) { resolved2874 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2878 = (panda$collections$Array*) malloc(40);
            $tmp2878->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2878->refCount.value = 1;
            panda$collections$Array$init($tmp2878);
            children2877 = $tmp2878;
            panda$collections$Array$add$panda$collections$Array$T(children2877, ((panda$core$Object*) resolved2874));
            org$pandalanguage$pandac$IRNode* $tmp2880 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2880->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2880->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2882 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2880, kind2857, p_offset, $tmp2882, ((panda$collections$ListView*) children2877));
            return $tmp2880;
        }
        }
    }
    }
    panda$core$Bit $tmp2884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2883 = $tmp2884.value;
    if ($tmp2883) goto $l2885;
    panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2883 = $tmp2886.value;
    $l2885:;
    panda$core$Bit $tmp2887 = { $tmp2883 };
    if ($tmp2887.value) {
    {
        panda$core$Bit $tmp2889 = (($fn2888) left2827->type->$class->vtable[8])(left2827->type);
        if ($tmp2889.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2892 = (($fn2891) self->$class->vtable[14])(self, left2827->type);
            cl2890 = $tmp2892;
            if (((panda$core$Bit) { cl2890 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2894 = (($fn2893) self->$class->vtable[9])(self, cl2890);
            if ($tmp2894.value) {
            {
                panda$core$String* $tmp2896 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2895, $tmp2896);
                panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2897, &$s2898);
                panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2899, ((panda$core$Object*) left2827->type));
                panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, &$s2901);
                panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2903, ((panda$core$Object*) right2828->type));
                panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, &$s2905);
                panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, $tmp2906);
                (($fn2908) self->$class->vtable[96])(self, p_offset, $tmp2907);
            }
            }
        }
        }
        panda$core$Bit $tmp2910 = (($fn2909) right2828->type->$class->vtable[8])(right2828->type);
        if ($tmp2910.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2913 = (($fn2912) self->$class->vtable[14])(self, right2828->type);
            cl2911 = $tmp2913;
            if (((panda$core$Bit) { cl2911 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2915 = (($fn2914) self->$class->vtable[9])(self, cl2911);
            if ($tmp2915.value) {
            {
                panda$core$String* $tmp2917 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2916, $tmp2917);
                panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, &$s2919);
                panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2920, ((panda$core$Object*) left2827->type));
                panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, &$s2922);
                panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2924, ((panda$core$Object*) right2828->type));
                panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, &$s2926);
                panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, $tmp2927);
                (($fn2929) self->$class->vtable[96])(self, p_offset, $tmp2928);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2931 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2933 = (($fn2932) self->$class->vtable[33])(self, left2827, $tmp2931);
        finalLeft2930 = $tmp2933;
        if (((panda$core$Bit) { finalLeft2930 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2935 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2937 = (($fn2936) self->$class->vtable[33])(self, right2828, $tmp2935);
        finalRight2934 = $tmp2937;
        if (((panda$core$Bit) { finalRight2934 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2939 = (panda$collections$Array*) malloc(40);
        $tmp2939->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2939->refCount.value = 1;
        panda$collections$Array$init($tmp2939);
        children2938 = $tmp2939;
        panda$collections$Array$add$panda$collections$Array$T(children2938, ((panda$core$Object*) finalLeft2930));
        panda$collections$Array$add$panda$collections$Array$T(children2938, ((panda$core$Object*) finalRight2934));
        org$pandalanguage$pandac$IRNode* $tmp2941 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2941->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2941->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2943 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2941, ((panda$core$Int64) { 1023 }), p_offset, $tmp2943, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2938));
        return $tmp2941;
    }
    }
    panda$core$Bit $tmp2944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2944.value) {
    {
        panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2945.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2947 = (($fn2946) self->$class->vtable[52])(self, p_offset, left2827, p_op, right2828);
            return $tmp2947;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2949 = (($fn2948) self->$class->vtable[8])(self, left2827);
        left2827 = $tmp2949;
        if (((panda$core$Bit) { left2827 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2951 = (($fn2950) self->$class->vtable[33])(self, right2828, left2827->type);
        right2828 = $tmp2951;
        if (((panda$core$Bit) { right2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2953 = (($fn2952) self->$class->vtable[49])(self, left2827);
        panda$core$Bit $tmp2954 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2953);
        if ($tmp2954.value) {
        {
            (($fn2956) self->$class->vtable[96])(self, left2827->offset, &$s2955);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2958 = (panda$collections$Array*) malloc(40);
        $tmp2958->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2958->refCount.value = 1;
        panda$collections$Array$init($tmp2958);
        children2957 = $tmp2958;
        panda$collections$Array$add$panda$collections$Array$T(children2957, ((panda$core$Object*) left2827));
        panda$collections$Array$add$panda$collections$Array$T(children2957, ((panda$core$Object*) right2828));
        org$pandalanguage$pandac$IRNode* $tmp2960 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2960->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2960, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2957));
        return $tmp2960;
    }
    }
    panda$core$Bit $tmp2962 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2962.value) {
    {
        panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2963.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2965 = (($fn2964) self->$class->vtable[52])(self, p_offset, left2827, p_op, right2828);
            return $tmp2965;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2967 = (($fn2966) self->$class->vtable[8])(self, left2827);
        left2827 = $tmp2967;
        if (((panda$core$Bit) { left2827 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2969 = (($fn2968) self->$class->vtable[49])(self, left2827);
        panda$core$Bit $tmp2970 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2969);
        if ($tmp2970.value) {
        {
            (($fn2972) self->$class->vtable[96])(self, left2827->offset, &$s2971);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2974 = (panda$collections$Array*) malloc(40);
        $tmp2974->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2974->refCount.value = 1;
        panda$collections$Array$init($tmp2974);
        children2973 = $tmp2974;
        panda$collections$Array$add$panda$collections$Array$T(children2973, ((panda$core$Object*) left2827));
        panda$core$UInt64 $tmp2976 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2976;
        org$pandalanguage$pandac$IRNode* $tmp2977 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2977->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2977->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2977, ((panda$core$Int64) { 1027 }), left2827->offset, left2827->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2973));
        left2827 = $tmp2977;
        org$pandalanguage$pandac$IRNode* $tmp2980 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2980->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2980->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2980, ((panda$core$Int64) { 1028 }), left2827->offset, left2827->type, self->reusedValueCount);
        reusedLeft2979 = $tmp2980;
        panda$core$Int64 $tmp2982 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2984 = (($fn2983) self->$class->vtable[53])(self, p_offset, reusedLeft2979, $tmp2982, right2828);
        right2828 = $tmp2984;
        if (((panda$core$Bit) { right2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2987 = (($fn2986) left2827->type->$class->vtable[6])(left2827->type);
        bool $tmp2985 = $tmp2987.value;
        if (!$tmp2985) goto $l2988;
        panda$core$Bit $tmp2990 = (($fn2989) left2827->type->$class->vtable[5])(left2827->type, ((panda$core$Object*) right2828->type));
        $tmp2985 = $tmp2990.value;
        $l2988:;
        panda$core$Bit $tmp2991 = { $tmp2985 };
        if ($tmp2991.value) {
        {
            panda$collections$Array* $tmp2993 = (panda$collections$Array*) malloc(40);
            $tmp2993->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2993->refCount.value = 1;
            panda$collections$Array$init($tmp2993);
            org$pandalanguage$pandac$IRNode* $tmp2996 = (($fn2995) self->$class->vtable[41])(self, right2828, &$s2992, ((panda$collections$ListView*) $tmp2993), left2827->type);
            right2828 = $tmp2996;
            if (((panda$core$Bit) { right2828 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2998 = (($fn2997) self->$class->vtable[53])(self, p_offset, left2827, ((panda$core$Int64) { 73 }), right2828);
        return $tmp2998;
    }
    }
    panda$core$Bit $tmp2999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2999.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3001 = (($fn3000) self->$class->vtable[8])(self, left2827);
        left2827 = $tmp3001;
        if (((panda$core$Bit) { left2827 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp3004 = (($fn3003) self->$class->vtable[14])(self, left2827->type);
        cl3002 = $tmp3004;
        if (((panda$core$Bit) { cl3002 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp3007 = (($fn3006) self->$class->vtable[55])(self, left2827->type);
        parameters3005 = $tmp3007;
        org$pandalanguage$pandac$SymbolTable* $tmp3010 = (($fn3009) self->$class->vtable[20])(self, cl3002);
        org$pandalanguage$pandac$Symbol* $tmp3013 = (($fn3012) $tmp3010->$class->vtable[6])($tmp3010, &$s3011);
        methods3008 = $tmp3013;
        if (((panda$core$Bit) { methods3008 != NULL }).value) {
        {
            panda$collections$Array* $tmp3016 = (panda$collections$Array*) malloc(40);
            $tmp3016->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3016->refCount.value = 1;
            panda$collections$Array$init($tmp3016);
            types3015 = $tmp3016;
            panda$core$Bit $tmp3018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3008->kind, ((panda$core$Int64) { 204 }));
            if ($tmp3018.value) {
            {
                m3019 = ((org$pandalanguage$pandac$MethodDecl*) methods3008);
                (($fn3020) self->$class->vtable[6])(self, m3019);
                org$pandalanguage$pandac$MethodRef* $tmp3021 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3021->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3021->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3021, m3019, parameters3005);
                org$pandalanguage$pandac$Type* $tmp3024 = (($fn3023) $tmp3021->$class->vtable[5])($tmp3021);
                panda$collections$Array$add$panda$collections$Array$T(types3015, ((panda$core$Object*) $tmp3024));
            }
            }
            else {
            {
                {
                    ITable* $tmp3026 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3008)->methods)->$class->itable;
                    while ($tmp3026->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3026 = $tmp3026->next;
                    }
                    $fn3028 $tmp3027 = $tmp3026->methods[0];
                    panda$collections$Iterator* $tmp3029 = $tmp3027(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3008)->methods));
                    m$Iter3025 = $tmp3029;
                    $l3030:;
                    ITable* $tmp3032 = m$Iter3025->$class->itable;
                    while ($tmp3032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3032 = $tmp3032->next;
                    }
                    $fn3034 $tmp3033 = $tmp3032->methods[0];
                    panda$core$Bit $tmp3035 = $tmp3033(m$Iter3025);
                    panda$core$Bit $tmp3036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3035);
                    if (!$tmp3036.value) goto $l3031;
                    {
                        ITable* $tmp3038 = m$Iter3025->$class->itable;
                        while ($tmp3038->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3038 = $tmp3038->next;
                        }
                        $fn3040 $tmp3039 = $tmp3038->methods[1];
                        panda$core$Object* $tmp3041 = $tmp3039(m$Iter3025);
                        m3037 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3041);
                        (($fn3042) self->$class->vtable[6])(self, m3037);
                        org$pandalanguage$pandac$MethodRef* $tmp3043 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp3043->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp3043->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3043, m3037, parameters3005);
                        org$pandalanguage$pandac$Type* $tmp3046 = (($fn3045) $tmp3043->$class->vtable[5])($tmp3043);
                        panda$collections$Array$add$panda$collections$Array$T(types3015, ((panda$core$Object*) $tmp3046));
                    }
                    goto $l3030;
                    $l3031:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp3047 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp3047->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3047->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3047, ((panda$collections$ListView*) types3015));
            type3014 = $tmp3047;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3049 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type3014 = $tmp3049;
        }
        }
        panda$collections$Array* $tmp3051 = (panda$collections$Array*) malloc(40);
        $tmp3051->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3051->refCount.value = 1;
        panda$collections$Array$init($tmp3051);
        children3050 = $tmp3051;
        panda$collections$Array$add$panda$collections$Array$T(children3050, ((panda$core$Object*) left2827));
        panda$collections$Array$add$panda$collections$Array$T(children3050, ((panda$core$Object*) right2828));
        org$pandalanguage$pandac$IRNode* $tmp3053 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3053->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3053->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3053, ((panda$core$Int64) { 1040 }), p_offset, type3014, ((panda$collections$ListView*) children3050));
        return $tmp3053;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3055 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3057 = (($fn3056) left2827->type->$class->vtable[4])(left2827->type, ((panda$core$Object*) $tmp3055));
    if ($tmp3057.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3059 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3061 = (($fn3060) right2828->type->$class->vtable[4])(right2828->type, ((panda$core$Object*) $tmp3059));
        bool $tmp3058 = $tmp3061.value;
        if (!$tmp3058) goto $l3062;
        panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3066 = $tmp3067.value;
        if ($tmp3066) goto $l3068;
        panda$core$Bit $tmp3069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3066 = $tmp3069.value;
        $l3068:;
        panda$core$Bit $tmp3070 = { $tmp3066 };
        bool $tmp3065 = $tmp3070.value;
        if ($tmp3065) goto $l3071;
        panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3065 = $tmp3072.value;
        $l3071:;
        panda$core$Bit $tmp3073 = { $tmp3065 };
        bool $tmp3064 = $tmp3073.value;
        if ($tmp3064) goto $l3074;
        panda$core$Bit $tmp3075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3064 = $tmp3075.value;
        $l3074:;
        panda$core$Bit $tmp3076 = { $tmp3064 };
        bool $tmp3063 = $tmp3076.value;
        if ($tmp3063) goto $l3077;
        panda$core$Bit $tmp3078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3063 = $tmp3078.value;
        $l3077:;
        panda$core$Bit $tmp3079 = { $tmp3063 };
        $tmp3058 = $tmp3079.value;
        $l3062:;
        panda$core$Bit $tmp3080 = { $tmp3058 };
        if ($tmp3080.value) {
        {
            panda$collections$Array* $tmp3082 = (panda$collections$Array*) malloc(40);
            $tmp3082->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3082->refCount.value = 1;
            panda$collections$Array$init($tmp3082);
            children3081 = $tmp3082;
            panda$collections$Array$add$panda$collections$Array$T(children3081, ((panda$core$Object*) left2827));
            panda$collections$Array$add$panda$collections$Array$T(children3081, ((panda$core$Object*) right2828));
            org$pandalanguage$pandac$IRNode* $tmp3084 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3084->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3084->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3084, ((panda$core$Int64) { 1023 }), p_offset, left2827->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3081));
            return $tmp3084;
        }
        }
        panda$core$String* $tmp3087 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3086, $tmp3087);
        panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, &$s3089);
        panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3090, ((panda$core$Object*) left2827->type));
        panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, &$s3092);
        panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3093, ((panda$core$Object*) right2828->type));
        panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3095);
        (($fn3097) self->$class->vtable[96])(self, p_offset, $tmp3096);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3099 = (panda$collections$Array*) malloc(40);
    $tmp3099->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3099->refCount.value = 1;
    panda$collections$Array$init($tmp3099);
    children3098 = $tmp3099;
    panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3102 = $tmp3103.value;
    if ($tmp3102) goto $l3104;
    panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1032 }));
    $tmp3102 = $tmp3105.value;
    $l3104:;
    panda$core$Bit $tmp3106 = { $tmp3102 };
    bool $tmp3101 = $tmp3106.value;
    if (!$tmp3101) goto $l3107;
    panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2828->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3108 = $tmp3109.value;
    if ($tmp3108) goto $l3110;
    panda$core$Bit $tmp3111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2828->kind, ((panda$core$Int64) { 1032 }));
    $tmp3108 = $tmp3111.value;
    $l3110:;
    panda$core$Bit $tmp3112 = { $tmp3108 };
    $tmp3101 = $tmp3112.value;
    $l3107:;
    panda$core$Bit $tmp3113 = { $tmp3101 };
    if ($tmp3113.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3115 = (($fn3114) self->$class->vtable[50])(self, p_offset, left2827, p_op, right2828);
        return $tmp3115;
    }
    }
    panda$core$Bit $tmp3118 = (($fn3117) left2827->type->$class->vtable[7])(left2827->type);
    bool $tmp3116 = $tmp3118.value;
    if (!$tmp3116) goto $l3119;
    panda$core$Int64$nullable $tmp3121 = (($fn3120) self->$class->vtable[31])(self, right2828, left2827->type);
    $tmp3116 = ((panda$core$Bit) { $tmp3121.nonnull }).value;
    $l3119:;
    panda$core$Bit $tmp3122 = { $tmp3116 };
    if ($tmp3122.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3124 = (($fn3123) self->$class->vtable[33])(self, right2828, left2827->type);
        right2828 = $tmp3124;
        panda$collections$Array$add$panda$collections$Array$T(children3098, ((panda$core$Object*) left2827));
        panda$collections$Array$add$panda$collections$Array$T(children3098, ((panda$core$Object*) right2828));
        {
            $match$727473126 = p_op;
            panda$core$Bit $tmp3132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727473126, ((panda$core$Int64) { 58 }));
            bool $tmp3131 = $tmp3132.value;
            if ($tmp3131) goto $l3133;
            panda$core$Bit $tmp3134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727473126, ((panda$core$Int64) { 59 }));
            $tmp3131 = $tmp3134.value;
            $l3133:;
            panda$core$Bit $tmp3135 = { $tmp3131 };
            bool $tmp3130 = $tmp3135.value;
            if ($tmp3130) goto $l3136;
            panda$core$Bit $tmp3137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727473126, ((panda$core$Int64) { 63 }));
            $tmp3130 = $tmp3137.value;
            $l3136:;
            panda$core$Bit $tmp3138 = { $tmp3130 };
            bool $tmp3129 = $tmp3138.value;
            if ($tmp3129) goto $l3139;
            panda$core$Bit $tmp3140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727473126, ((panda$core$Int64) { 65 }));
            $tmp3129 = $tmp3140.value;
            $l3139:;
            panda$core$Bit $tmp3141 = { $tmp3129 };
            bool $tmp3128 = $tmp3141.value;
            if ($tmp3128) goto $l3142;
            panda$core$Bit $tmp3143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727473126, ((panda$core$Int64) { 62 }));
            $tmp3128 = $tmp3143.value;
            $l3142:;
            panda$core$Bit $tmp3144 = { $tmp3128 };
            bool $tmp3127 = $tmp3144.value;
            if ($tmp3127) goto $l3145;
            panda$core$Bit $tmp3146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727473126, ((panda$core$Int64) { 64 }));
            $tmp3127 = $tmp3146.value;
            $l3145:;
            panda$core$Bit $tmp3147 = { $tmp3127 };
            if ($tmp3147.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3148 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3125 = $tmp3148;
            }
            }
            else {
            {
                resultType3125 = left2827->type;
            }
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3149 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3149->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3149->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3149, ((panda$core$Int64) { 1023 }), p_offset, resultType3125, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3098));
        return $tmp3149;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3098, ((panda$core$Object*) right2828));
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3152 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3154 = (($fn3153) self->$class->vtable[40])(self, left2827, $tmp3152, ((panda$collections$ListView*) children3098));
    result3151 = $tmp3154;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3151 == NULL }).value) {
    {
        panda$collections$Array$clear(children3098);
        panda$collections$Array$add$panda$collections$Array$T(children3098, ((panda$core$Object*) left2827));
        org$pandalanguage$pandac$IRNode* $tmp3157 = (($fn3156) self->$class->vtable[8])(self, right2828);
        resolved3155 = $tmp3157;
        bool $tmp3158 = ((panda$core$Bit) { resolved3155 != NULL }).value;
        if (!$tmp3158) goto $l3159;
        panda$core$Bit $tmp3161 = (($fn3160) resolved3155->type->$class->vtable[8])(resolved3155->type);
        $tmp3158 = $tmp3161.value;
        $l3159:;
        panda$core$Bit $tmp3162 = { $tmp3158 };
        if ($tmp3162.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3098, ((panda$core$Object*) resolved3155));
            org$pandalanguage$pandac$IRNode* $tmp3164 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3164->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3164->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3166 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3164, ((panda$core$Int64) { 1001 }), resolved3155->offset, $tmp3166, resolved3155->type);
            target3163 = $tmp3164;
            panda$core$String* $tmp3167 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3169 = (($fn3168) self->$class->vtable[40])(self, target3163, $tmp3167, ((panda$collections$ListView*) children3098));
            result3151 = $tmp3169;
        }
        }
    }
    }
    return result3151;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3170;
    org$pandalanguage$pandac$IRNode* right3175;
    panda$core$Object* $tmp3172 = (($fn3171) p_b->children->$class->vtable[2])(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3174 = (($fn3173) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3172));
    left3170 = $tmp3174;
    if (((panda$core$Bit) { left3170 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3177 = (($fn3176) p_b->children->$class->vtable[2])(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3179 = (($fn3178) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3177));
    right3175 = $tmp3179;
    if (((panda$core$Bit) { right3175 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3181 = (($fn3180) self->$class->vtable[53])(self, p_b->offset, left3170, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3175);
    return $tmp3181;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3188;
    panda$core$Bit $tmp3182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 22 }));
    if ($tmp3182.value) {
    {
        panda$core$Object* $tmp3184 = (($fn3183) p_type->subtypes->$class->vtable[2])(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$collections$ListView* $tmp3186 = (($fn3185) self->$class->vtable[55])(self, ((org$pandalanguage$pandac$Type*) $tmp3184));
        return $tmp3186;
    }
    }
    panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp3187.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3188, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp3190 = (($fn3189) p_type->subtypes->$class->vtable[4])(p_type->subtypes, $tmp3188);
        return ((panda$collections$ListView*) $tmp3190);
    }
    }
    else {
    {
        panda$collections$Array* $tmp3191 = (panda$collections$Array*) malloc(40);
        $tmp3191->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3191->refCount.value = 1;
        panda$collections$Array$init($tmp3191);
        return ((panda$collections$ListView*) $tmp3191);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    org$pandalanguage$pandac$Type* type3196;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3193.value) {
        {
            panda$collections$ListView* $tmp3195 = (($fn3194) self->$class->vtable[55])(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3195;
        }
        }
        panda$core$Bit $tmp3197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3197.value) {
        {
            panda$core$Object* $tmp3199 = (($fn3198) p_target->type->subtypes->$class->vtable[2])(p_target->type->subtypes, ((panda$core$Int64) { 0 }));
            type3196 = ((org$pandalanguage$pandac$Type*) $tmp3199);
        }
        }
        else {
        {
            type3196 = p_target->type;
        }
        }
        panda$collections$ListView* $tmp3201 = (($fn3200) self->$class->vtable[55])(self, type3196);
        return $tmp3201;
    }
    }
    panda$collections$Array* $tmp3202 = (panda$collections$Array*) malloc(40);
    $tmp3202->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3202->refCount.value = 1;
    panda$collections$Array$init($tmp3202);
    return ((panda$collections$ListView*) $tmp3202);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name3206;
    org$pandalanguage$pandac$ClassDecl* cl3208;
    org$pandalanguage$pandac$Symbol* s3211;
    org$pandalanguage$pandac$MethodDecl* m3216;
    panda$core$Int64 $match$754253217;
    panda$collections$Iterator* test$Iter3220;
    org$pandalanguage$pandac$MethodDecl* test3232;
    org$pandalanguage$pandac$MethodRef* ref3246;
    panda$collections$Array* children3251;
    org$pandalanguage$pandac$IRNode* methodRef3254;
    panda$collections$Array* args3260;
    panda$core$Int64 $match$766513265;
    panda$core$Int64 $match$767113267;
    panda$collections$Array* children3276;
    panda$collections$Array* children3289;
    org$pandalanguage$pandac$IRNode* coerced3300;
    panda$collections$Array* children3304;
    panda$core$Bit $tmp3205 = (($fn3204) p_base->type->$class->vtable[8])(p_base->type);
    if ($tmp3205.value) {
    {
        panda$core$String* $tmp3207 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3206 = $tmp3207;
        org$pandalanguage$pandac$ClassDecl* $tmp3210 = (($fn3209) self->$class->vtable[14])(self, p_base->type);
        cl3208 = $tmp3210;
        if (((panda$core$Bit) { cl3208 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3213 = (($fn3212) self->$class->vtable[20])(self, cl3208);
        org$pandalanguage$pandac$Symbol* $tmp3215 = (($fn3214) $tmp3213->$class->vtable[6])($tmp3213, name3206);
        s3211 = $tmp3215;
        if (((panda$core$Bit) { s3211 != NULL }).value) {
        {
            m3216 = NULL;
            {
                $match$754253217 = s3211->kind;
                panda$core$Bit $tmp3218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$754253217, ((panda$core$Int64) { 204 }));
                if ($tmp3218.value) {
                {
                    m3216 = ((org$pandalanguage$pandac$MethodDecl*) s3211);
                }
                }
                else {
                panda$core$Bit $tmp3219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$754253217, ((panda$core$Int64) { 205 }));
                if ($tmp3219.value) {
                {
                    {
                        ITable* $tmp3221 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3211)->methods)->$class->itable;
                        while ($tmp3221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3221 = $tmp3221->next;
                        }
                        $fn3223 $tmp3222 = $tmp3221->methods[0];
                        panda$collections$Iterator* $tmp3224 = $tmp3222(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3211)->methods));
                        test$Iter3220 = $tmp3224;
                        $l3225:;
                        ITable* $tmp3227 = test$Iter3220->$class->itable;
                        while ($tmp3227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3227 = $tmp3227->next;
                        }
                        $fn3229 $tmp3228 = $tmp3227->methods[0];
                        panda$core$Bit $tmp3230 = $tmp3228(test$Iter3220);
                        panda$core$Bit $tmp3231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3230);
                        if (!$tmp3231.value) goto $l3226;
                        {
                            ITable* $tmp3233 = test$Iter3220->$class->itable;
                            while ($tmp3233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3233 = $tmp3233->next;
                            }
                            $fn3235 $tmp3234 = $tmp3233->methods[1];
                            panda$core$Object* $tmp3236 = $tmp3234(test$Iter3220);
                            test3232 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3236);
                            panda$core$Bit $tmp3239 = (($fn3238) test3232->annotations->$class->vtable[5])(test3232->annotations);
                            panda$core$Bit $tmp3240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3239);
                            bool $tmp3237 = $tmp3240.value;
                            if (!$tmp3237) goto $l3241;
                            panda$core$Int64 $tmp3242 = panda$collections$Array$get_count$R$panda$core$Int64(test3232->parameters);
                            panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3242, ((panda$core$Int64) { 0 }));
                            $tmp3237 = $tmp3243.value;
                            $l3241:;
                            panda$core$Bit $tmp3244 = { $tmp3237 };
                            if ($tmp3244.value) {
                            {
                                m3216 = test3232;
                                goto $l3226;
                            }
                            }
                        }
                        goto $l3225;
                        $l3226:;
                    }
                }
                }
                else {
                {
                }
                }
                }
            }
            if (((panda$core$Bit) { m3216 != NULL }).value) {
            {
                (($fn3245) self->$class->vtable[6])(self, m3216);
                org$pandalanguage$pandac$MethodRef* $tmp3247 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3247->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3247->refCount.value = 1;
                panda$collections$ListView* $tmp3250 = (($fn3249) self->$class->vtable[56])(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3247, m3216, $tmp3250);
                ref3246 = $tmp3247;
                panda$collections$Array* $tmp3252 = (panda$collections$Array*) malloc(40);
                $tmp3252->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3252->refCount.value = 1;
                panda$collections$Array$init($tmp3252);
                children3251 = $tmp3252;
                panda$collections$Array$add$panda$collections$Array$T(children3251, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3255 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3255->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3255->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3257 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp3257->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3257->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3257, &$s3259, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3255, ((panda$core$Int64) { 1002 }), p_offset, $tmp3257, ((panda$core$Object*) ref3246), ((panda$collections$ListView*) children3251));
                methodRef3254 = $tmp3255;
                panda$collections$Array* $tmp3261 = (panda$collections$Array*) malloc(40);
                $tmp3261->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3261->refCount.value = 1;
                panda$collections$Array$init($tmp3261);
                args3260 = $tmp3261;
                org$pandalanguage$pandac$IRNode* $tmp3264 = (($fn3263) self->$class->vtable[42])(self, methodRef3254, ((panda$collections$ListView*) args3260));
                return $tmp3264;
            }
            }
        }
        }
    }
    }
    {
        $match$766513265 = p_op;
        panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$766513265, ((panda$core$Int64) { 52 }));
        if ($tmp3266.value) {
        {
            {
                $match$767113267 = p_base->kind;
                panda$core$Bit $tmp3268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767113267, ((panda$core$Int64) { 1004 }));
                if ($tmp3268.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3269 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3269->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3269->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3269, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3269;
                }
                }
                else {
                panda$core$Bit $tmp3271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767113267, ((panda$core$Int64) { 1032 }));
                if ($tmp3271.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3272 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp3272->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3272->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3272, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3272;
                }
                }
                else {
                {
                    panda$core$Bit $tmp3275 = (($fn3274) p_base->type->$class->vtable[7])(p_base->type);
                    if ($tmp3275.value) {
                    {
                        panda$collections$Array* $tmp3277 = (panda$collections$Array*) malloc(40);
                        $tmp3277->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3277->refCount.value = 1;
                        panda$collections$Array$init($tmp3277);
                        children3276 = $tmp3277;
                        panda$collections$Array$add$panda$collections$Array$T(children3276, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3279 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp3279->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3279->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3279, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3276));
                        return $tmp3279;
                    }
                    }
                }
                }
                }
            }
            panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3281, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
            (($fn3285) self->$class->vtable[96])(self, p_base->offset, $tmp3284);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp3286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$766513265, ((panda$core$Int64) { 50 }));
        if ($tmp3286.value) {
        {
            panda$core$Bit $tmp3288 = (($fn3287) p_base->type->$class->vtable[7])(p_base->type);
            if ($tmp3288.value) {
            {
                panda$collections$Array* $tmp3290 = (panda$collections$Array*) malloc(40);
                $tmp3290->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3290->refCount.value = 1;
                panda$collections$Array$init($tmp3290);
                children3289 = $tmp3290;
                panda$collections$Array$add$panda$collections$Array$T(children3289, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3292 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3292->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3292->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3292, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3289));
                return $tmp3292;
            }
            }
            else {
            {
                panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3294, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
                (($fn3298) self->$class->vtable[96])(self, p_base->offset, $tmp3297);
                return NULL;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$766513265, ((panda$core$Int64) { 49 }));
        if ($tmp3299.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3301 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3303 = (($fn3302) self->$class->vtable[33])(self, p_base, $tmp3301);
            coerced3300 = $tmp3303;
            if (((panda$core$Bit) { coerced3300 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3305 = (panda$collections$Array*) malloc(40);
            $tmp3305->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3305->refCount.value = 1;
            panda$collections$Array$init($tmp3305);
            children3304 = $tmp3305;
            panda$collections$Array$add$panda$collections$Array$T(children3304, ((panda$core$Object*) coerced3300));
            org$pandalanguage$pandac$IRNode* $tmp3307 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3307->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3307->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3307, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3304));
            return $tmp3307;
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
    org$pandalanguage$pandac$IRNode* base3309;
    panda$core$Object* $tmp3311 = (($fn3310) p_p->children->$class->vtable[2])(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3313 = (($fn3312) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3311));
    base3309 = $tmp3313;
    if (((panda$core$Bit) { base3309 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3315 = (($fn3314) self->$class->vtable[57])(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3309, p_p->offset);
    return $tmp3315;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3316;
    panda$collections$Array* args3321;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3324;
    org$pandalanguage$pandac$IRNode* arg3345;
    panda$core$Object* $tmp3318 = (($fn3317) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3320 = (($fn3319) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3318));
    m3316 = $tmp3320;
    if (((panda$core$Bit) { m3316 != NULL }).value) {
    {
        panda$collections$Array* $tmp3322 = (panda$collections$Array*) malloc(40);
        $tmp3322->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3322->refCount.value = 1;
        panda$collections$Array$init($tmp3322);
        args3321 = $tmp3322;
        panda$core$Int64 $tmp3326 = (($fn3325) p_c->children->$class->vtable[3])(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3324, ((panda$core$Int64) { 1 }), $tmp3326, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3328 = $tmp3324.start.value;
        panda$core$Int64 i3327 = { $tmp3328 };
        int64_t $tmp3330 = $tmp3324.end.value;
        int64_t $tmp3331 = $tmp3324.step.value;
        bool $tmp3332 = $tmp3324.inclusive.value;
        bool $tmp3339 = $tmp3331 > 0;
        if ($tmp3339) goto $l3337; else goto $l3338;
        $l3337:;
        if ($tmp3332) goto $l3340; else goto $l3341;
        $l3340:;
        if ($tmp3328 <= $tmp3330) goto $l3333; else goto $l3335;
        $l3341:;
        if ($tmp3328 < $tmp3330) goto $l3333; else goto $l3335;
        $l3338:;
        if ($tmp3332) goto $l3342; else goto $l3343;
        $l3342:;
        if ($tmp3328 >= $tmp3330) goto $l3333; else goto $l3335;
        $l3343:;
        if ($tmp3328 > $tmp3330) goto $l3333; else goto $l3335;
        $l3333:;
        {
            panda$core$Object* $tmp3347 = (($fn3346) p_c->children->$class->vtable[2])(p_c->children, i3327);
            org$pandalanguage$pandac$IRNode* $tmp3349 = (($fn3348) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3347));
            arg3345 = $tmp3349;
            if (((panda$core$Bit) { arg3345 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3321, ((panda$core$Object*) arg3345));
        }
        $l3336:;
        if ($tmp3339) goto $l3351; else goto $l3352;
        $l3351:;
        int64_t $tmp3353 = $tmp3330 - i3327.value;
        if ($tmp3332) goto $l3354; else goto $l3355;
        $l3354:;
        if ($tmp3353 >= $tmp3331) goto $l3350; else goto $l3335;
        $l3355:;
        if ($tmp3353 > $tmp3331) goto $l3350; else goto $l3335;
        $l3352:;
        int64_t $tmp3357 = i3327.value - $tmp3330;
        if ($tmp3332) goto $l3358; else goto $l3359;
        $l3358:;
        if ($tmp3357 >= -$tmp3331) goto $l3350; else goto $l3335;
        $l3359:;
        if ($tmp3357 > -$tmp3331) goto $l3350; else goto $l3335;
        $l3350:;
        i3327.value += $tmp3331;
        goto $l3333;
        $l3335:;
        org$pandalanguage$pandac$IRNode* $tmp3362 = (($fn3361) self->$class->vtable[42])(self, m3316, ((panda$collections$ListView*) args3321));
        return $tmp3362;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3363;
    org$pandalanguage$pandac$ClassDecl* cl3375;
    panda$core$Int64 $match$798463376;
    panda$core$String* name3381;
    org$pandalanguage$pandac$ClassDecl* cl3389;
    org$pandalanguage$pandac$Symbol* s3407;
    panda$core$Object* $tmp3365 = (($fn3364) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3367 = (($fn3366) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3365));
    base3363 = $tmp3367;
    if (((panda$core$Bit) { base3363 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3369 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3363->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3368 = $tmp3369.value;
    if (!$tmp3368) goto $l3370;
    panda$core$Bit $tmp3371 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3363->kind, ((panda$core$Int64) { 1024 }));
    $tmp3368 = $tmp3371.value;
    $l3370:;
    panda$core$Bit $tmp3372 = { $tmp3368 };
    if ($tmp3372.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3374 = (($fn3373) self->$class->vtable[8])(self, base3363);
        base3363 = $tmp3374;
    }
    }
    if (((panda$core$Bit) { base3363 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        $match$798463376 = base3363->kind;
        panda$core$Bit $tmp3377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798463376, ((panda$core$Int64) { 1001 }));
        if ($tmp3377.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3379 = (($fn3378) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) base3363->payload));
            cl3375 = $tmp3379;
        }
        }
        else {
        panda$core$Bit $tmp3380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798463376, ((panda$core$Int64) { 1037 }));
        if ($tmp3380.value) {
        {
            panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3382, base3363->payload);
            panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, &$s3384);
            panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3385, p_d->payload);
            panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, &$s3387);
            name3381 = $tmp3388;
            org$pandalanguage$pandac$ClassDecl* $tmp3391 = (($fn3390) self->$class->vtable[3])(self, name3381);
            cl3389 = $tmp3391;
            if (((panda$core$Bit) { cl3389 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3392 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3392->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3392->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3394 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3396 = (($fn3395) cl3389->$class->vtable[3])(cl3389);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3392, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp3394, $tmp3396);
                return $tmp3392;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3397 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3397->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3397->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3399 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3397, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp3399, name3381);
            return $tmp3397;
        }
        }
        else {
        panda$core$Bit $tmp3400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$798463376, ((panda$core$Int64) { 1024 }));
        if ($tmp3400.value) {
        {
            panda$core$Object* $tmp3402 = (($fn3401) self->currentClass->$class->vtable[4])(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3404 = (($fn3403) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3402)->rawSuper);
            cl3375 = $tmp3404;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3406 = (($fn3405) self->$class->vtable[14])(self, base3363->type);
            cl3375 = $tmp3406;
        }
        }
        }
        }
    }
    if (((panda$core$Bit) { cl3375 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3409 = (($fn3408) self->$class->vtable[20])(self, cl3375);
    org$pandalanguage$pandac$Symbol* $tmp3411 = (($fn3410) $tmp3409->$class->vtable[6])($tmp3409, ((panda$core$String*) p_d->payload));
    s3407 = $tmp3411;
    if (((panda$core$Bit) { s3407 == NULL }).value) {
    {
        panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3412, ((panda$core$Object*) base3363->type));
        panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
        panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3416, p_d->payload);
        panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, &$s3418);
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, $tmp3419);
        (($fn3421) self->$class->vtable[96])(self, p_d->offset, $tmp3420);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3423 = (($fn3422) self->$class->vtable[20])(self, cl3375);
    org$pandalanguage$pandac$IRNode* $tmp3425 = (($fn3424) self->$class->vtable[24])(self, p_d->offset, base3363, s3407, $tmp3423);
    return $tmp3425;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3426;
    org$pandalanguage$pandac$Symbol* $tmp3428 = (($fn3427) self->symbolTable->$class->vtable[6])(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3426 = $tmp3428;
    if (((panda$core$Bit) { s3426 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3430 = (($fn3429) self->$class->vtable[3])(self, ((panda$core$String*) p_i->payload));
        s3426 = ((org$pandalanguage$pandac$Symbol*) $tmp3430);
    }
    }
    if (((panda$core$Bit) { s3426 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3432 = (($fn3431) self->$class->vtable[24])(self, p_i->offset, NULL, s3426, self->symbolTable);
        return $tmp3432;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3433 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3433->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3433->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3435 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3433, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp3435, ((panda$core$String*) p_i->payload));
    return $tmp3433;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$IRNode* $tmp3436 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3436->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3436->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3438 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp3440 = (($fn3439) self->scanner->$class->vtable[2])(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3442 = (($fn3441) self->$class->vtable[4])(self, $tmp3440);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3436, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp3438, $tmp3442);
    return $tmp3436;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3443;
    org$pandalanguage$pandac$IRNode* end3454;
    org$pandalanguage$pandac$IRNode* step3465;
    panda$collections$Array* children3479;
    panda$core$Object* $tmp3445 = (($fn3444) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3445)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3446.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3447 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3447->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3447->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3449 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3447, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp3449);
        start3443 = $tmp3447;
    }
    }
    else {
    {
        panda$core$Object* $tmp3451 = (($fn3450) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3453 = (($fn3452) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3451));
        start3443 = $tmp3453;
        if (((panda$core$Bit) { start3443 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3456 = (($fn3455) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3456)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3457.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3458 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3458->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3458->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3460 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3458, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp3460);
        end3454 = $tmp3458;
    }
    }
    else {
    {
        panda$core$Object* $tmp3462 = (($fn3461) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3464 = (($fn3463) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3462));
        end3454 = $tmp3464;
        if (((panda$core$Bit) { end3454 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3467 = (($fn3466) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3467)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3468.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3469 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3469->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3469->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3471 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3469, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp3471, ((panda$core$UInt64) { 1 }));
        step3465 = $tmp3469;
    }
    }
    else {
    {
        panda$core$Object* $tmp3473 = (($fn3472) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3475 = (($fn3474) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3473));
        org$pandalanguage$pandac$Type* $tmp3476 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3478 = (($fn3477) self->$class->vtable[33])(self, $tmp3475, $tmp3476);
        step3465 = $tmp3478;
        if (((panda$core$Bit) { step3465 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3480 = (panda$collections$Array*) malloc(40);
    $tmp3480->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3480->refCount.value = 1;
    panda$collections$Array$init($tmp3480);
    children3479 = $tmp3480;
    panda$collections$Array$add$panda$collections$Array$T(children3479, ((panda$core$Object*) start3443));
    panda$collections$Array$add$panda$collections$Array$T(children3479, ((panda$core$Object*) end3454));
    panda$collections$Array$add$panda$collections$Array$T(children3479, ((panda$core$Object*) step3465));
    org$pandalanguage$pandac$IRNode* $tmp3482 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3482->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3482->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3484 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp3484->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3484->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3484, &$s3486, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3482, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp3484, ((panda$core$Object*) wrap_panda$core$Bit($tmp3487)), ((panda$collections$ListView*) children3479));
    return $tmp3482;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3488 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3488->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3488->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3490 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp3488, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp3490, ((panda$core$String*) p_s->payload));
    return $tmp3488;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3497;
    org$pandalanguage$pandac$ClassDecl* cl3498;
    panda$collections$Array* subtypes3506;
    panda$core$MutableString* name3511;
    panda$core$String* separator3516;
    panda$collections$Iterator* p$Iter3518;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3530;
    panda$collections$Array* pType3535;
    panda$core$String* pName3538;
    panda$core$Object* $tmp3492 = (($fn3491) self->currentMethod->$class->vtable[4])(self->currentMethod);
    panda$core$Bit $tmp3494 = (($fn3493) ((org$pandalanguage$pandac$MethodDecl*) $tmp3492)->annotations->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp3492)->annotations);
    if ($tmp3494.value) {
    {
        (($fn3496) self->$class->vtable[96])(self, p_s->offset, &$s3495);
        return NULL;
    }
    }
    panda$core$Object* $tmp3500 = (($fn3499) self->currentClass->$class->vtable[4])(self->currentClass);
    cl3498 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3500);
    ITable* $tmp3501 = ((panda$collections$CollectionView*) cl3498->parameters)->$class->itable;
    while ($tmp3501->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3501 = $tmp3501->next;
    }
    $fn3503 $tmp3502 = $tmp3501->methods[0];
    panda$core$Int64 $tmp3504 = $tmp3502(((panda$collections$CollectionView*) cl3498->parameters));
    panda$core$Bit $tmp3505 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3504, ((panda$core$Int64) { 0 }));
    if ($tmp3505.value) {
    {
        panda$collections$Array* $tmp3507 = (panda$collections$Array*) malloc(40);
        $tmp3507->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3507->refCount.value = 1;
        panda$collections$Array$init($tmp3507);
        subtypes3506 = $tmp3507;
        org$pandalanguage$pandac$Type* $tmp3510 = (($fn3509) cl3498->$class->vtable[3])(cl3498);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3506, ((panda$core$Object*) $tmp3510));
        panda$core$MutableString* $tmp3512 = (panda$core$MutableString*) malloc(40);
        $tmp3512->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3512->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3512, ((org$pandalanguage$pandac$Symbol*) cl3498)->name);
        name3511 = $tmp3512;
        (($fn3515) name3511->$class->vtable[3])(name3511, &$s3514);
        separator3516 = &$s3517;
        {
            ITable* $tmp3519 = ((panda$collections$Iterable*) cl3498->parameters)->$class->itable;
            while ($tmp3519->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3519 = $tmp3519->next;
            }
            $fn3521 $tmp3520 = $tmp3519->methods[0];
            panda$collections$Iterator* $tmp3522 = $tmp3520(((panda$collections$Iterable*) cl3498->parameters));
            p$Iter3518 = $tmp3522;
            $l3523:;
            ITable* $tmp3525 = p$Iter3518->$class->itable;
            while ($tmp3525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3525 = $tmp3525->next;
            }
            $fn3527 $tmp3526 = $tmp3525->methods[0];
            panda$core$Bit $tmp3528 = $tmp3526(p$Iter3518);
            panda$core$Bit $tmp3529 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3528);
            if (!$tmp3529.value) goto $l3524;
            {
                ITable* $tmp3531 = p$Iter3518->$class->itable;
                while ($tmp3531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3531 = $tmp3531->next;
                }
                $fn3533 $tmp3532 = $tmp3531->methods[1];
                panda$core$Object* $tmp3534 = $tmp3532(p$Iter3518);
                p3530 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3534);
                panda$collections$Array* $tmp3536 = (panda$collections$Array*) malloc(40);
                $tmp3536->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3536->refCount.value = 1;
                panda$collections$Array$init($tmp3536);
                pType3535 = $tmp3536;
                panda$collections$Array$add$panda$collections$Array$T(pType3535, ((panda$core$Object*) p3530->bound));
                panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3539, ((org$pandalanguage$pandac$Symbol*) cl3498)->name);
                panda$core$String* $tmp3542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3540, &$s3541);
                panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3542, ((org$pandalanguage$pandac$Symbol*) p3530)->name);
                panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3543, &$s3544);
                pName3538 = $tmp3545;
                (($fn3546) name3511->$class->vtable[3])(name3511, separator3516);
                (($fn3547) name3511->$class->vtable[3])(name3511, pName3538);
                org$pandalanguage$pandac$Type* $tmp3548 = (org$pandalanguage$pandac$Type*) malloc(64);
                $tmp3548->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3548->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3548, pName3538, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$Symbol*) p3530)->offset, ((panda$collections$ListView*) pType3535), ((panda$core$Bit) { true }));
                panda$collections$Array$add$panda$collections$Array$T(subtypes3506, ((panda$core$Object*) $tmp3548));
                separator3516 = &$s3550;
            }
            goto $l3523;
            $l3524:;
        }
        (($fn3552) name3511->$class->vtable[3])(name3511, &$s3551);
        org$pandalanguage$pandac$Type* $tmp3553 = (org$pandalanguage$pandac$Type*) malloc(64);
        $tmp3553->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3553->refCount.value = 1;
        panda$core$String* $tmp3556 = (($fn3555) name3511->$class->vtable[0])(name3511);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3553, $tmp3556, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes3506), ((panda$core$Bit) { true }));
        type3497 = $tmp3553;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3558 = (($fn3557) cl3498->$class->vtable[3])(cl3498);
        type3497 = $tmp3558;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3559 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3559->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3559->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3559, ((panda$core$Int64) { 1025 }), p_s->offset, type3497);
    return $tmp3559;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3567;
    panda$core$Object* $tmp3562 = (($fn3561) self->currentMethod->$class->vtable[4])(self->currentMethod);
    panda$core$Bit $tmp3564 = (($fn3563) ((org$pandalanguage$pandac$MethodDecl*) $tmp3562)->annotations->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp3562)->annotations);
    if ($tmp3564.value) {
    {
        (($fn3566) self->$class->vtable[96])(self, p_s->offset, &$s3565);
        return NULL;
    }
    }
    panda$core$Object* $tmp3569 = (($fn3568) self->currentClass->$class->vtable[4])(self->currentClass);
    cl3567 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3569);
    org$pandalanguage$pandac$IRNode* $tmp3570 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3570->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3570, ((panda$core$Int64) { 1024 }), p_s->offset, cl3567->rawSuper);
    return $tmp3570;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3572;
    org$pandalanguage$pandac$Type* type3577;
    panda$core$Object* $tmp3574 = (($fn3573) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3576 = (($fn3575) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3574));
    value3572 = $tmp3576;
    if (((panda$core$Bit) { value3572 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3579 = (($fn3578) p_c->children->$class->vtable[2])(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3581 = (($fn3580) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3579));
    org$pandalanguage$pandac$Type* $tmp3583 = (($fn3582) self->$class->vtable[4])(self, $tmp3581);
    type3577 = $tmp3583;
    panda$core$Int64$nullable $tmp3585 = (($fn3584) self->$class->vtable[31])(self, value3572, type3577);
    if (((panda$core$Bit) { $tmp3585.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3587 = (($fn3586) self->$class->vtable[33])(self, value3572, type3577);
        return $tmp3587;
    }
    }
    panda$core$Bit $tmp3589 = (($fn3588) self->$class->vtable[35])(self, value3572, type3577);
    if ($tmp3589.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3591 = (($fn3590) self->$class->vtable[36])(self, value3572, p_c->offset, ((panda$core$Bit) { true }), type3577);
        return $tmp3591;
    }
    }
    else {
    {
        panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3592, ((panda$core$Object*) value3572->type));
        panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3593, &$s3594);
        panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3596, ((panda$core$Object*) type3577));
        panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3598);
        panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3595, $tmp3599);
        (($fn3601) self->$class->vtable[96])(self, p_c->offset, $tmp3600);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    org$pandalanguage$pandac$IRNode* $tmp3602 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3602->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3602->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3604 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3602, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp3604);
    return $tmp3602;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    panda$core$Int64 $match$856653605;
    {
        $match$856653605 = p_e->kind;
        panda$core$Bit $tmp3606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 103 }));
        if ($tmp3606.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3608 = (($fn3607) self->$class->vtable[54])(self, p_e);
            return $tmp3608;
        }
        }
        else {
        panda$core$Bit $tmp3609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 116 }));
        if ($tmp3609.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3610 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3610->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3610->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3612 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3610, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp3612, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3610;
        }
        }
        else {
        panda$core$Bit $tmp3613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 107 }));
        if ($tmp3613.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3615 = (($fn3614) self->$class->vtable[59])(self, p_e);
            return $tmp3615;
        }
        }
        else {
        panda$core$Bit $tmp3616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 108 }));
        if ($tmp3616.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3618 = (($fn3617) self->$class->vtable[60])(self, p_e);
            return $tmp3618;
        }
        }
        else {
        panda$core$Bit $tmp3619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 106 }));
        if ($tmp3619.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3621 = (($fn3620) self->$class->vtable[61])(self, p_e);
            return $tmp3621;
        }
        }
        else {
        panda$core$Bit $tmp3622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 102 }));
        if ($tmp3622.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3623 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3623->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3623->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3625 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3623, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp3625, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3623;
        }
        }
        else {
        panda$core$Bit $tmp3626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 112 }));
        if ($tmp3626.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3628 = (($fn3627) self->$class->vtable[58])(self, p_e);
            return $tmp3628;
        }
        }
        else {
        panda$core$Bit $tmp3630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 104 }));
        bool $tmp3629 = $tmp3630.value;
        if ($tmp3629) goto $l3631;
        panda$core$Bit $tmp3632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 105 }));
        $tmp3629 = $tmp3632.value;
        $l3631:;
        panda$core$Bit $tmp3633 = { $tmp3629 };
        if ($tmp3633.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3635 = (($fn3634) self->$class->vtable[63])(self, p_e);
            return $tmp3635;
        }
        }
        else {
        panda$core$Bit $tmp3636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 113 }));
        if ($tmp3636.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3638 = (($fn3637) self->$class->vtable[64])(self, p_e);
            return $tmp3638;
        }
        }
        else {
        panda$core$Bit $tmp3641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 109 }));
        bool $tmp3640 = $tmp3641.value;
        if ($tmp3640) goto $l3642;
        panda$core$Bit $tmp3643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 154 }));
        $tmp3640 = $tmp3643.value;
        $l3642:;
        panda$core$Bit $tmp3644 = { $tmp3640 };
        bool $tmp3639 = $tmp3644.value;
        if ($tmp3639) goto $l3645;
        panda$core$Bit $tmp3646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 110 }));
        $tmp3639 = $tmp3646.value;
        $l3645:;
        panda$core$Bit $tmp3647 = { $tmp3639 };
        if ($tmp3647.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3649 = (($fn3648) self->$class->vtable[62])(self, p_e);
            return $tmp3649;
        }
        }
        else {
        panda$core$Bit $tmp3650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 114 }));
        if ($tmp3650.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3652 = (($fn3651) self->$class->vtable[65])(self, p_e);
            return $tmp3652;
        }
        }
        else {
        panda$core$Bit $tmp3653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 115 }));
        if ($tmp3653.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3655 = (($fn3654) self->$class->vtable[66])(self, p_e);
            return $tmp3655;
        }
        }
        else {
        panda$core$Bit $tmp3656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 111 }));
        if ($tmp3656.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3658 = (($fn3657) self->$class->vtable[67])(self, p_e);
            return $tmp3658;
        }
        }
        else {
        panda$core$Bit $tmp3659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$856653605, ((panda$core$Int64) { 117 }));
        if ($tmp3659.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3661 = (($fn3660) self->$class->vtable[68])(self, p_e);
            return $tmp3661;
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
    org$pandalanguage$pandac$SymbolTable* symbols3662;
    panda$collections$Array* result3665;
    panda$collections$Iterator* stmt$Iter3668;
    org$pandalanguage$pandac$ASTNode* stmt3680;
    org$pandalanguage$pandac$IRNode* compiled3685;
    org$pandalanguage$pandac$SymbolTable* $tmp3663 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3663->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3663->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3663, self->symbolTable);
    symbols3662 = $tmp3663;
    self->symbolTable = symbols3662;
    panda$collections$Array* $tmp3666 = (panda$collections$Array*) malloc(40);
    $tmp3666->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3666->refCount.value = 1;
    panda$collections$Array$init($tmp3666);
    result3665 = $tmp3666;
    {
        ITable* $tmp3669 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3669->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3669 = $tmp3669->next;
        }
        $fn3671 $tmp3670 = $tmp3669->methods[0];
        panda$collections$Iterator* $tmp3672 = $tmp3670(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3668 = $tmp3672;
        $l3673:;
        ITable* $tmp3675 = stmt$Iter3668->$class->itable;
        while ($tmp3675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3675 = $tmp3675->next;
        }
        $fn3677 $tmp3676 = $tmp3675->methods[0];
        panda$core$Bit $tmp3678 = $tmp3676(stmt$Iter3668);
        panda$core$Bit $tmp3679 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3678);
        if (!$tmp3679.value) goto $l3674;
        {
            ITable* $tmp3681 = stmt$Iter3668->$class->itable;
            while ($tmp3681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3681 = $tmp3681->next;
            }
            $fn3683 $tmp3682 = $tmp3681->methods[1];
            panda$core$Object* $tmp3684 = $tmp3682(stmt$Iter3668);
            stmt3680 = ((org$pandalanguage$pandac$ASTNode*) $tmp3684);
            org$pandalanguage$pandac$IRNode* $tmp3687 = (($fn3686) self->$class->vtable[88])(self, stmt3680);
            compiled3685 = $tmp3687;
            if (((panda$core$Bit) { compiled3685 == NULL }).value) {
            {
                panda$core$Object* $tmp3688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3662->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3688);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3665, ((panda$core$Object*) compiled3685));
        }
        goto $l3673;
        $l3674:;
    }
    panda$core$Object* $tmp3689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3662->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3689);
    org$pandalanguage$pandac$IRNode* $tmp3690 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3690->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3690->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3690, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result3665));
    return $tmp3690;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3692;
    org$pandalanguage$pandac$IRNode* ifTrue3700;
    panda$collections$Array* children3705;
    org$pandalanguage$pandac$IRNode* ifFalse3711;
    panda$core$Object* $tmp3694 = (($fn3693) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3696 = (($fn3695) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3694));
    org$pandalanguage$pandac$Type* $tmp3697 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3699 = (($fn3698) self->$class->vtable[33])(self, $tmp3696, $tmp3697);
    test3692 = $tmp3699;
    if (((panda$core$Bit) { test3692 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3702 = (($fn3701) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3704 = (($fn3703) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3702));
    ifTrue3700 = $tmp3704;
    panda$collections$Array* $tmp3706 = (panda$collections$Array*) malloc(40);
    $tmp3706->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3706->refCount.value = 1;
    panda$collections$Array$init($tmp3706);
    children3705 = $tmp3706;
    panda$collections$Array$add$panda$collections$Array$T(children3705, ((panda$core$Object*) test3692));
    panda$collections$Array$add$panda$collections$Array$T(children3705, ((panda$core$Object*) ifTrue3700));
    panda$core$Int64 $tmp3709 = (($fn3708) p_i->children->$class->vtable[3])(p_i->children);
    panda$core$Bit $tmp3710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3709, ((panda$core$Int64) { 3 }));
    if ($tmp3710.value) {
    {
        panda$core$Object* $tmp3713 = (($fn3712) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3715 = (($fn3714) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3713));
        ifFalse3711 = $tmp3715;
        if (((panda$core$Bit) { ifFalse3711 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3705, ((panda$core$Object*) ifFalse3711));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3716 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3716->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3716->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3716, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children3705));
    return $tmp3716;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3718;
    org$pandalanguage$pandac$IRNode* list3719;
    org$pandalanguage$pandac$Type* t3727;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3746;
    org$pandalanguage$pandac$IRNode* body3749;
    panda$collections$Array* children3752;
    panda$core$Bit $tmp3721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3720 = $tmp3721.value;
    if (!$tmp3720) goto $l3722;
    panda$core$Int64 $tmp3724 = (($fn3723) p_astTarget->children->$class->vtable[3])(p_astTarget->children);
    panda$core$Bit $tmp3725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3724, ((panda$core$Int64) { 1 }));
    $tmp3720 = $tmp3725.value;
    $l3722:;
    panda$core$Bit $tmp3726 = { $tmp3720 };
    if ($tmp3726.value) {
    {
        panda$core$Object* $tmp3729 = (($fn3728) p_astTarget->children->$class->vtable[2])(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3731 = (($fn3730) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3729));
        org$pandalanguage$pandac$Type* $tmp3733 = (($fn3732) self->$class->vtable[4])(self, $tmp3731);
        t3727 = $tmp3733;
        org$pandalanguage$pandac$Type* $tmp3734 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3727);
        org$pandalanguage$pandac$IRNode* $tmp3736 = (($fn3735) self->$class->vtable[33])(self, p_rawList, $tmp3734);
        list3719 = $tmp3736;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3738 = (($fn3737) self->$class->vtable[8])(self, p_rawList);
        list3719 = $tmp3738;
    }
    }
    if (((panda$core$Bit) { list3719 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3719->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3739.value) {
    {
        panda$core$Object* $tmp3741 = (($fn3740) list3719->type->subtypes->$class->vtable[2])(list3719->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3743 = (($fn3742) ((org$pandalanguage$pandac$Type*) $tmp3741)->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$Type*) $tmp3741)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3718 = ((org$pandalanguage$pandac$Type*) $tmp3743);
    }
    }
    else {
    {
        panda$core$Object* $tmp3745 = (($fn3744) list3719->type->subtypes->$class->vtable[2])(list3719->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3718 = ((org$pandalanguage$pandac$Type*) $tmp3745);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3748 = (($fn3747) self->$class->vtable[78])(self, p_astTarget, NULL, elementType3718);
    target3746 = $tmp3748;
    if (((panda$core$Bit) { target3746 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3751 = (($fn3750) self->$class->vtable[88])(self, p_body);
    body3749 = $tmp3751;
    if (((panda$core$Bit) { body3749 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3753 = (panda$collections$Array*) malloc(40);
    $tmp3753->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3753->refCount.value = 1;
    panda$collections$Array$init($tmp3753);
    children3752 = $tmp3753;
    panda$collections$Array$add$panda$collections$Array$T(children3752, ((panda$core$Object*) target3746->target));
    panda$collections$Array$add$panda$collections$Array$T(children3752, ((panda$core$Object*) list3719));
    panda$collections$Array$add$panda$collections$Array$T(children3752, ((panda$core$Object*) body3749));
    org$pandalanguage$pandac$IRNode* $tmp3755 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3755->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3755->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3755, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3752));
    return $tmp3755;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3757;
    org$pandalanguage$pandac$Variable* targetVar3762;
    panda$collections$Array* subtypes3763;
    org$pandalanguage$pandac$Type* iterType3767;
    org$pandalanguage$pandac$Variable* iter3779;
    panda$collections$Array* statements3785;
    panda$collections$Array* declChildren3788;
    panda$collections$Array* varChildren3793;
    panda$collections$Array* whileChildren3800;
    org$pandalanguage$pandac$IRNode* done3803;
    org$pandalanguage$pandac$IRNode* notCall3811;
    panda$collections$Array* valueDeclChildren3817;
    org$pandalanguage$pandac$IRNode* next3822;
    panda$collections$Array* valueVarChildren3830;
    org$pandalanguage$pandac$IRNode* block3835;
    panda$collections$Array* blockChildren3838;
    panda$core$Object* $tmp3759 = (($fn3758) p_iterator->type->subtypes->$class->vtable[2])(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3761 = (($fn3760) self->$class->vtable[78])(self, p_astTarget, NULL, ((org$pandalanguage$pandac$Type*) $tmp3759));
    target3757 = $tmp3761;
    if (((panda$core$Bit) { target3757 == NULL }).value) {
    {
        return NULL;
    }
    }
    targetVar3762 = ((org$pandalanguage$pandac$Variable*) target3757->target->payload);
    panda$collections$Array* $tmp3764 = (panda$collections$Array*) malloc(40);
    $tmp3764->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3764->refCount.value = 1;
    panda$collections$Array$init($tmp3764);
    subtypes3763 = $tmp3764;
    org$pandalanguage$pandac$Type* $tmp3766 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3763, ((panda$core$Object*) $tmp3766));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3763, ((panda$core$Object*) target3757->target->type));
    org$pandalanguage$pandac$Type* $tmp3768 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp3768->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3768->refCount.value = 1;
    panda$core$Object* $tmp3771 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3763, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3770, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3771)));
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, &$s3773);
    panda$core$Object* $tmp3775 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3763, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3774, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3775)));
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, &$s3777);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3768, $tmp3778, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes3763), ((panda$core$Bit) { true }));
    iterType3767 = $tmp3768;
    org$pandalanguage$pandac$Variable* $tmp3780 = (org$pandalanguage$pandac$Variable*) malloc(56);
    $tmp3780->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3780->refCount.value = 1;
    panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3762)->name, &$s3782);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3780, p_iterator->offset, $tmp3783, iterType3767);
    iter3779 = $tmp3780;
    (($fn3784) self->symbolTable->$class->vtable[2])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3779));
    panda$collections$Array* $tmp3786 = (panda$collections$Array*) malloc(40);
    $tmp3786->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3786->refCount.value = 1;
    panda$collections$Array$init($tmp3786);
    statements3785 = $tmp3786;
    panda$collections$Array* $tmp3789 = (panda$collections$Array*) malloc(40);
    $tmp3789->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3789->refCount.value = 1;
    panda$collections$Array$init($tmp3789);
    declChildren3788 = $tmp3789;
    org$pandalanguage$pandac$IRNode* $tmp3791 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3791->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3791->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3791, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3779->type, iter3779);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3788, ((panda$core$Object*) $tmp3791));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3788, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3794 = (panda$collections$Array*) malloc(40);
    $tmp3794->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3794->refCount.value = 1;
    panda$collections$Array$init($tmp3794);
    varChildren3793 = $tmp3794;
    org$pandalanguage$pandac$IRNode* $tmp3796 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3796->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3796, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3779)->offset, ((panda$collections$ListView*) declChildren3788));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3793, ((panda$core$Object*) $tmp3796));
    org$pandalanguage$pandac$IRNode* $tmp3798 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3798->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3798, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3779)->offset, ((panda$collections$ListView*) varChildren3793));
    panda$collections$Array$add$panda$collections$Array$T(statements3785, ((panda$core$Object*) $tmp3798));
    panda$collections$Array* $tmp3801 = (panda$collections$Array*) malloc(40);
    $tmp3801->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3801->refCount.value = 1;
    panda$collections$Array$init($tmp3801);
    whileChildren3800 = $tmp3801;
    org$pandalanguage$pandac$IRNode* $tmp3804 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3804->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3804->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3804, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3779)->offset, iter3779->type, iter3779);
    panda$collections$Array* $tmp3807 = (panda$collections$Array*) malloc(40);
    $tmp3807->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3807->refCount.value = 1;
    panda$collections$Array$init($tmp3807);
    org$pandalanguage$pandac$IRNode* $tmp3810 = (($fn3809) self->$class->vtable[41])(self, $tmp3804, &$s3806, ((panda$collections$ListView*) $tmp3807), NULL);
    done3803 = $tmp3810;
    if (((panda$core$Bit) { done3803 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3813 = (panda$collections$Array*) malloc(40);
    $tmp3813->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3813->refCount.value = 1;
    panda$collections$Array$init($tmp3813);
    org$pandalanguage$pandac$IRNode* $tmp3816 = (($fn3815) self->$class->vtable[41])(self, done3803, &$s3812, ((panda$collections$ListView*) $tmp3813), NULL);
    notCall3811 = $tmp3816;
    if (((panda$core$Bit) { notCall3811 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3800, ((panda$core$Object*) notCall3811));
    panda$collections$Array* $tmp3818 = (panda$collections$Array*) malloc(40);
    $tmp3818->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3818->refCount.value = 1;
    panda$collections$Array$init($tmp3818);
    valueDeclChildren3817 = $tmp3818;
    org$pandalanguage$pandac$IRNode* $tmp3820 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3820->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3820->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3820, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar3762->type, targetVar3762);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3817, ((panda$core$Object*) $tmp3820));
    org$pandalanguage$pandac$IRNode* $tmp3823 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3823->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3823->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3823, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3779->type, iter3779);
    panda$collections$Array* $tmp3826 = (panda$collections$Array*) malloc(40);
    $tmp3826->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3826->refCount.value = 1;
    panda$collections$Array$init($tmp3826);
    org$pandalanguage$pandac$IRNode* $tmp3829 = (($fn3828) self->$class->vtable[41])(self, $tmp3823, &$s3825, ((panda$collections$ListView*) $tmp3826), NULL);
    next3822 = $tmp3829;
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3817, ((panda$core$Object*) next3822));
    panda$collections$Array* $tmp3831 = (panda$collections$Array*) malloc(40);
    $tmp3831->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3831->refCount.value = 1;
    panda$collections$Array$init($tmp3831);
    valueVarChildren3830 = $tmp3831;
    org$pandalanguage$pandac$IRNode* $tmp3833 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3833->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3833->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3833, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3817));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3830, ((panda$core$Object*) $tmp3833));
    org$pandalanguage$pandac$IRNode* $tmp3837 = (($fn3836) self->$class->vtable[88])(self, p_body);
    block3835 = $tmp3837;
    if (((panda$core$Bit) { block3835 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3839 = (panda$collections$Array*) malloc(40);
    $tmp3839->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3839->refCount.value = 1;
    panda$collections$Array$init($tmp3839);
    blockChildren3838 = $tmp3839;
    org$pandalanguage$pandac$IRNode* $tmp3841 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3841->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3841->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3841, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3830));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3838, ((panda$core$Object*) $tmp3841));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3838, ((panda$collections$CollectionView*) block3835->children));
    org$pandalanguage$pandac$IRNode* $tmp3843 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3843->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3843->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3843, ((panda$core$Int64) { 1000 }), block3835->offset, ((panda$collections$ListView*) blockChildren3838));
    block3835 = $tmp3843;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3800, ((panda$core$Object*) block3835));
    org$pandalanguage$pandac$IRNode* $tmp3845 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3845->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3845->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3845, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3800));
    panda$collections$Array$add$panda$collections$Array$T(statements3785, ((panda$core$Object*) $tmp3845));
    org$pandalanguage$pandac$IRNode* $tmp3847 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3847->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3847->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3847, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3785));
    return $tmp3847;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3850;
    org$pandalanguage$pandac$SymbolTable* symbols3856;
    org$pandalanguage$pandac$IRNode* result3859;
    panda$core$Bit found3874;
    panda$collections$Iterator* intf$Iter3875;
    org$pandalanguage$pandac$Type* intf3889;
    org$pandalanguage$pandac$IRNode* iterator3903;
    org$pandalanguage$pandac$IRNode* iterable3921;
    org$pandalanguage$pandac$IRNode* iterator3924;
    (($fn3849) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3852 = (($fn3851) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3854 = (($fn3853) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3852));
    list3850 = $tmp3854;
    if (((panda$core$Bit) { list3850 == NULL }).value) {
    {
        (($fn3855) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3857 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3857->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3857->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3857, self->symbolTable);
    symbols3856 = $tmp3857;
    self->symbolTable = symbols3856;
    panda$core$Bit $tmp3861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3850->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3860 = $tmp3861.value;
    if ($tmp3860) goto $l3862;
    panda$core$Bit $tmp3864 = (($fn3863) list3850->type->$class->vtable[11])(list3850->type);
    $tmp3860 = $tmp3864.value;
    $l3862:;
    panda$core$Bit $tmp3865 = { $tmp3860 };
    if ($tmp3865.value) {
    {
        panda$core$Object* $tmp3867 = (($fn3866) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3869 = (($fn3868) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3871 = (($fn3870) self->$class->vtable[72])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3867), list3850, ((org$pandalanguage$pandac$ASTNode*) $tmp3869));
        result3859 = $tmp3871;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3873 = (($fn3872) self->$class->vtable[8])(self, list3850);
        list3850 = $tmp3873;
        if (((panda$core$Bit) { list3850 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3874 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3877 = (($fn3876) self->$class->vtable[15])(self, list3850->type);
            ITable* $tmp3878 = ((panda$collections$Iterable*) $tmp3877)->$class->itable;
            while ($tmp3878->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3878 = $tmp3878->next;
            }
            $fn3880 $tmp3879 = $tmp3878->methods[0];
            panda$collections$Iterator* $tmp3881 = $tmp3879(((panda$collections$Iterable*) $tmp3877));
            intf$Iter3875 = $tmp3881;
            $l3882:;
            ITable* $tmp3884 = intf$Iter3875->$class->itable;
            while ($tmp3884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3884 = $tmp3884->next;
            }
            $fn3886 $tmp3885 = $tmp3884->methods[0];
            panda$core$Bit $tmp3887 = $tmp3885(intf$Iter3875);
            panda$core$Bit $tmp3888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3887);
            if (!$tmp3888.value) goto $l3883;
            {
                ITable* $tmp3890 = intf$Iter3875->$class->itable;
                while ($tmp3890->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3890 = $tmp3890->next;
                }
                $fn3892 $tmp3891 = $tmp3890->methods[1];
                panda$core$Object* $tmp3893 = $tmp3891(intf$Iter3875);
                intf3889 = ((org$pandalanguage$pandac$Type*) $tmp3893);
                panda$core$Bit $tmp3895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3889->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3894 = $tmp3895.value;
                if (!$tmp3894) goto $l3896;
                panda$core$Object* $tmp3898 = (($fn3897) intf3889->subtypes->$class->vtable[2])(intf3889->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3899 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3901 = (($fn3900) ((org$pandalanguage$pandac$Type*) $tmp3898)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp3898), ((panda$core$Object*) $tmp3899));
                $tmp3894 = $tmp3901.value;
                $l3896:;
                panda$core$Bit $tmp3902 = { $tmp3894 };
                if ($tmp3902.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3905 = (($fn3904) self->$class->vtable[33])(self, list3850, intf3889);
                    iterator3903 = $tmp3905;
                    panda$core$Object* $tmp3907 = (($fn3906) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3909 = (($fn3908) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3911 = (($fn3910) self->$class->vtable[73])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3907), iterator3903, ((org$pandalanguage$pandac$ASTNode*) $tmp3909));
                    result3859 = $tmp3911;
                    found3874 = ((panda$core$Bit) { true });
                    goto $l3883;
                }
                }
                panda$core$Bit $tmp3913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3889->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3912 = $tmp3913.value;
                if (!$tmp3912) goto $l3914;
                panda$core$Object* $tmp3916 = (($fn3915) intf3889->subtypes->$class->vtable[2])(intf3889->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3917 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3919 = (($fn3918) ((org$pandalanguage$pandac$Type*) $tmp3916)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp3916), ((panda$core$Object*) $tmp3917));
                $tmp3912 = $tmp3919.value;
                $l3914:;
                panda$core$Bit $tmp3920 = { $tmp3912 };
                if ($tmp3920.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3923 = (($fn3922) self->$class->vtable[33])(self, list3850, intf3889);
                    iterable3921 = $tmp3923;
                    panda$collections$Array* $tmp3926 = (panda$collections$Array*) malloc(40);
                    $tmp3926->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3926->refCount.value = 1;
                    panda$collections$Array$init($tmp3926);
                    org$pandalanguage$pandac$IRNode* $tmp3929 = (($fn3928) self->$class->vtable[40])(self, iterable3921, &$s3925, ((panda$collections$ListView*) $tmp3926));
                    iterator3924 = $tmp3929;
                    panda$core$Object* $tmp3931 = (($fn3930) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3933 = (($fn3932) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3935 = (($fn3934) self->$class->vtable[73])(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3931), iterator3924, ((org$pandalanguage$pandac$ASTNode*) $tmp3933));
                    result3859 = $tmp3935;
                    found3874 = ((panda$core$Bit) { true });
                    goto $l3883;
                }
                }
            }
            goto $l3882;
            $l3883:;
        }
    }
    }
    panda$core$Object* $tmp3936 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3856->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3936);
    (($fn3937) self->loops->$class->vtable[3])(self->loops);
    return result3859;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3939;
    org$pandalanguage$pandac$IRNode* stmt3948;
    panda$collections$Array* children3954;
    (($fn3938) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3941 = (($fn3940) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3943 = (($fn3942) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3941));
    org$pandalanguage$pandac$Type* $tmp3944 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3946 = (($fn3945) self->$class->vtable[33])(self, $tmp3943, $tmp3944);
    test3939 = $tmp3946;
    if (((panda$core$Bit) { test3939 == NULL }).value) {
    {
        (($fn3947) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3950 = (($fn3949) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3952 = (($fn3951) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3950));
    stmt3948 = $tmp3952;
    if (((panda$core$Bit) { stmt3948 == NULL }).value) {
    {
        (($fn3953) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3955 = (panda$collections$Array*) malloc(40);
    $tmp3955->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3955->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3955, ((panda$core$Int64) { 2 }));
    children3954 = $tmp3955;
    panda$collections$Array$add$panda$collections$Array$T(children3954, ((panda$core$Object*) test3939));
    panda$collections$Array$add$panda$collections$Array$T(children3954, ((panda$core$Object*) stmt3948));
    (($fn3957) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3958 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3958->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3958->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3958, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3954));
    return $tmp3958;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3961;
    org$pandalanguage$pandac$IRNode* test3967;
    panda$collections$Array* children3976;
    (($fn3960) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3963 = (($fn3962) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3965 = (($fn3964) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3963));
    stmt3961 = $tmp3965;
    if (((panda$core$Bit) { stmt3961 == NULL }).value) {
    {
        (($fn3966) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3969 = (($fn3968) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3971 = (($fn3970) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3969));
    org$pandalanguage$pandac$Type* $tmp3972 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3974 = (($fn3973) self->$class->vtable[33])(self, $tmp3971, $tmp3972);
    test3967 = $tmp3974;
    if (((panda$core$Bit) { test3967 == NULL }).value) {
    {
        (($fn3975) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3977 = (panda$collections$Array*) malloc(40);
    $tmp3977->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3977->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3977, ((panda$core$Int64) { 2 }));
    children3976 = $tmp3977;
    panda$collections$Array$add$panda$collections$Array$T(children3976, ((panda$core$Object*) stmt3961));
    panda$collections$Array$add$panda$collections$Array$T(children3976, ((panda$core$Object*) test3967));
    (($fn3979) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3980 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3980->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3980->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3980, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3976));
    return $tmp3980;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3983;
    panda$collections$Array* children3989;
    (($fn3982) self->loops->$class->vtable[2])(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3985 = (($fn3984) p_l->children->$class->vtable[2])(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3987 = (($fn3986) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3985));
    stmt3983 = $tmp3987;
    if (((panda$core$Bit) { stmt3983 == NULL }).value) {
    {
        (($fn3988) self->loops->$class->vtable[3])(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3990 = (panda$collections$Array*) malloc(40);
    $tmp3990->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3990->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3990, ((panda$core$Int64) { 1 }));
    children3989 = $tmp3990;
    panda$collections$Array$add$panda$collections$Array$T(children3989, ((panda$core$Object*) stmt3983));
    (($fn3992) self->loops->$class->vtable[3])(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3993 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3993->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3993->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3993, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3989));
    return $tmp3993;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3995;
    panda$core$Int64 $match$970303996;
    org$pandalanguage$pandac$Type* type3998;
    org$pandalanguage$pandac$Variable* v4016;
    value3995 = p_rawValue;
    {
        $match$970303996 = p_t->kind;
        panda$core$Bit $tmp3997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$970303996, ((panda$core$Int64) { 106 }));
        if ($tmp3997.value) {
        {
            panda$core$Int64 $tmp4000 = (($fn3999) p_t->children->$class->vtable[3])(p_t->children);
            panda$core$Bit $tmp4001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4000, ((panda$core$Int64) { 1 }));
            if ($tmp4001.value) {
            {
                panda$core$Object* $tmp4003 = (($fn4002) p_t->children->$class->vtable[2])(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4005 = (($fn4004) self->scanner->$class->vtable[2])(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp4003));
                org$pandalanguage$pandac$Type* $tmp4007 = (($fn4006) self->$class->vtable[4])(self, $tmp4005);
                type3998 = $tmp4007;
            }
            }
            else {
            if (((panda$core$Bit) { value3995 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4009 = (($fn4008) self->$class->vtable[8])(self, value3995);
                value3995 = $tmp4009;
                if (((panda$core$Bit) { value3995 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4011 = (($fn4010) self->$class->vtable[27])(self, value3995);
                type3998 = $tmp4011;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3998 = p_valueType;
            }
            }
            else {
            {
                (($fn4013) self->$class->vtable[96])(self, p_t->offset, &$s4012);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3995 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4015 = (($fn4014) self->$class->vtable[33])(self, value3995, type3998);
                value3995 = $tmp4015;
                if (((panda$core$Bit) { value3995 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4017 = (org$pandalanguage$pandac$Variable*) malloc(56);
            $tmp4017->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4017->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4017, p_t->offset, ((panda$core$String*) p_t->payload), type3998);
            v4016 = $tmp4017;
            (($fn4019) self->symbolTable->$class->vtable[2])(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4016));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4020 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4020->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4020->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4022 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp4022->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4022->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4022, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4016)->offset, v4016->type, v4016);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4020, $tmp4022, value3995);
            return $tmp4020;
        }
        }
        else {
        panda$core$Bit $tmp4024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$970303996, ((panda$core$Int64) { 153 }));
        if ($tmp4024.value) {
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
    org$pandalanguage$pandac$IRNode* value4025;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4033;
    panda$collections$Array* children4038;
    panda$core$Int64 $tmp4027 = (($fn4026) p_d->children->$class->vtable[3])(p_d->children);
    panda$core$Bit $tmp4028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4027, ((panda$core$Int64) { 2 }));
    if ($tmp4028.value) {
    {
        panda$core$Object* $tmp4030 = (($fn4029) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4032 = (($fn4031) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4030));
        value4025 = $tmp4032;
        if (((panda$core$Bit) { value4025 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4025 = NULL;
    }
    }
    panda$core$Object* $tmp4035 = (($fn4034) p_d->children->$class->vtable[2])(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4037 = (($fn4036) self->$class->vtable[78])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4035), value4025, NULL);
    target4033 = $tmp4037;
    if (((panda$core$Bit) { target4033 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4039 = (panda$collections$Array*) malloc(40);
    $tmp4039->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4039->refCount.value = 1;
    panda$collections$Array$init($tmp4039);
    children4038 = $tmp4039;
    panda$collections$Array$add$panda$collections$Array$T(children4038, ((panda$core$Object*) target4033->target));
    if (((panda$core$Bit) { target4033->value != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children4038, ((panda$core$Object*) target4033->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4041 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4041->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4041->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4041, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children4038));
    return $tmp4041;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found4043;
    panda$collections$Iterator* label$Iter4044;
    panda$core$String* label4056;
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found4043 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4045 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4045->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4045 = $tmp4045->next;
            }
            $fn4047 $tmp4046 = $tmp4045->methods[0];
            panda$collections$Iterator* $tmp4048 = $tmp4046(((panda$collections$Iterable*) self->loops));
            label$Iter4044 = $tmp4048;
            $l4049:;
            ITable* $tmp4051 = label$Iter4044->$class->itable;
            while ($tmp4051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4051 = $tmp4051->next;
            }
            $fn4053 $tmp4052 = $tmp4051->methods[0];
            panda$core$Bit $tmp4054 = $tmp4052(label$Iter4044);
            panda$core$Bit $tmp4055 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4054);
            if (!$tmp4055.value) goto $l4050;
            {
                ITable* $tmp4057 = label$Iter4044->$class->itable;
                while ($tmp4057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4057 = $tmp4057->next;
                }
                $fn4059 $tmp4058 = $tmp4057->methods[1];
                panda$core$Object* $tmp4060 = $tmp4058(label$Iter4044);
                label4056 = ((panda$core$String*) $tmp4060);
                bool $tmp4061 = ((panda$core$Bit) { label4056 != NULL }).value;
                if (!$tmp4061) goto $l4062;
                panda$core$Bit $tmp4063 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4056, ((panda$core$String*) p_b->payload));
                $tmp4061 = $tmp4063.value;
                $l4062:;
                panda$core$Bit $tmp4064 = { $tmp4061 };
                if ($tmp4064.value) {
                {
                    found4043 = ((panda$core$Bit) { true });
                    goto $l4050;
                }
                }
            }
            goto $l4049;
            $l4050:;
        }
        panda$core$Bit $tmp4065 = panda$core$Bit$$NOT$R$panda$core$Bit(found4043);
        if ($tmp4065.value) {
        {
            panda$core$String* $tmp4067 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4066, p_b->payload);
            panda$core$String* $tmp4069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4067, &$s4068);
            panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4070, p_b->payload);
            panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4071, &$s4072);
            panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4069, $tmp4073);
            (($fn4075) self->$class->vtable[96])(self, p_b->offset, $tmp4074);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4077 = (($fn4076) self->loops->$class->vtable[7])(self->loops);
    panda$core$Bit $tmp4078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4077, ((panda$core$Int64) { 0 }));
    if ($tmp4078.value) {
    {
        (($fn4080) self->$class->vtable[96])(self, p_b->offset, &$s4079);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4081 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4081->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4081->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp4081, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp4081;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found4083;
    panda$collections$Iterator* label$Iter4084;
    panda$core$String* label4096;
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found4083 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4085 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4085->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4085 = $tmp4085->next;
            }
            $fn4087 $tmp4086 = $tmp4085->methods[0];
            panda$collections$Iterator* $tmp4088 = $tmp4086(((panda$collections$Iterable*) self->loops));
            label$Iter4084 = $tmp4088;
            $l4089:;
            ITable* $tmp4091 = label$Iter4084->$class->itable;
            while ($tmp4091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4091 = $tmp4091->next;
            }
            $fn4093 $tmp4092 = $tmp4091->methods[0];
            panda$core$Bit $tmp4094 = $tmp4092(label$Iter4084);
            panda$core$Bit $tmp4095 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4094);
            if (!$tmp4095.value) goto $l4090;
            {
                ITable* $tmp4097 = label$Iter4084->$class->itable;
                while ($tmp4097->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4097 = $tmp4097->next;
                }
                $fn4099 $tmp4098 = $tmp4097->methods[1];
                panda$core$Object* $tmp4100 = $tmp4098(label$Iter4084);
                label4096 = ((panda$core$String*) $tmp4100);
                bool $tmp4101 = ((panda$core$Bit) { label4096 != NULL }).value;
                if (!$tmp4101) goto $l4102;
                panda$core$Bit $tmp4103 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4096, ((panda$core$String*) p_c->payload));
                $tmp4101 = $tmp4103.value;
                $l4102:;
                panda$core$Bit $tmp4104 = { $tmp4101 };
                if ($tmp4104.value) {
                {
                    found4083 = ((panda$core$Bit) { true });
                    goto $l4090;
                }
                }
            }
            goto $l4089;
            $l4090:;
        }
        panda$core$Bit $tmp4105 = panda$core$Bit$$NOT$R$panda$core$Bit(found4083);
        if ($tmp4105.value) {
        {
            panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4106, p_c->payload);
            panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4107, &$s4108);
            panda$core$String* $tmp4111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4110, p_c->payload);
            panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4111, &$s4112);
            panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4109, $tmp4113);
            (($fn4115) self->$class->vtable[96])(self, p_c->offset, $tmp4114);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4117 = (($fn4116) self->loops->$class->vtable[7])(self->loops);
    panda$core$Bit $tmp4118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4117, ((panda$core$Int64) { 0 }));
    if ($tmp4118.value) {
    {
        (($fn4120) self->$class->vtable[96])(self, p_c->offset, &$s4119);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4121 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4121->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4121->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp4121, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp4121;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4133;
    panda$collections$Array* children4142;
    panda$core$Int64 $tmp4124 = (($fn4123) p_r->children->$class->vtable[3])(p_r->children);
    panda$core$Bit $tmp4125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4124, ((panda$core$Int64) { 1 }));
    if ($tmp4125.value) {
    {
        panda$core$Object* $tmp4127 = (($fn4126) self->currentMethod->$class->vtable[4])(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4128 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4130 = (($fn4129) ((org$pandalanguage$pandac$MethodDecl*) $tmp4127)->returnType->$class->vtable[4])(((org$pandalanguage$pandac$MethodDecl*) $tmp4127)->returnType, ((panda$core$Object*) $tmp4128));
        if ($tmp4130.value) {
        {
            (($fn4132) self->$class->vtable[96])(self, p_r->offset, &$s4131);
            return NULL;
        }
        }
        panda$core$Object* $tmp4135 = (($fn4134) p_r->children->$class->vtable[2])(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4137 = (($fn4136) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4135));
        panda$core$Object* $tmp4139 = (($fn4138) self->currentMethod->$class->vtable[4])(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4141 = (($fn4140) self->$class->vtable[33])(self, $tmp4137, ((org$pandalanguage$pandac$MethodDecl*) $tmp4139)->returnType);
        value4133 = $tmp4141;
        if (((panda$core$Bit) { value4133 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4143 = (panda$collections$Array*) malloc(40);
        $tmp4143->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4143->refCount.value = 1;
        panda$collections$Array$init($tmp4143);
        children4142 = $tmp4143;
        panda$collections$Array$add$panda$collections$Array$T(children4142, ((panda$core$Object*) value4133));
        org$pandalanguage$pandac$IRNode* $tmp4145 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp4145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4145->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4145, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children4142));
        return $tmp4145;
    }
    }
    panda$core$Object* $tmp4148 = (($fn4147) self->currentMethod->$class->vtable[4])(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4149 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4151 = (($fn4150) ((org$pandalanguage$pandac$MethodDecl*) $tmp4148)->returnType->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl*) $tmp4148)->returnType, ((panda$core$Object*) $tmp4149));
    if ($tmp4151.value) {
    {
        (($fn4153) self->$class->vtable[96])(self, p_r->offset, &$s4152);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4154 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4154->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4154->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp4154, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp4154;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4156;
    org$pandalanguage$pandac$ClassDecl* bit4164;
    org$pandalanguage$pandac$Symbol* value4168;
    panda$collections$Array* fieldChildren4173;
    panda$collections$Array* children4179;
    org$pandalanguage$pandac$IRNode* msg4185;
    panda$core$Object* $tmp4158 = (($fn4157) p_a->children->$class->vtable[2])(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4160 = (($fn4159) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4158));
    test4156 = $tmp4160;
    if (((panda$core$Bit) { test4156 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4161 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4163 = (($fn4162) self->$class->vtable[33])(self, test4156, $tmp4161);
    test4156 = $tmp4163;
    if (((panda$core$Bit) { test4156 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4165 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4167 = (($fn4166) self->$class->vtable[14])(self, $tmp4165);
    bit4164 = $tmp4167;
    org$pandalanguage$pandac$Symbol* $tmp4171 = (($fn4170) bit4164->symbolTable->$class->vtable[6])(bit4164->symbolTable, &$s4169);
    value4168 = $tmp4171;
    (($fn4172) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$FieldDecl*) value4168));
    panda$collections$Array* $tmp4174 = (panda$collections$Array*) malloc(40);
    $tmp4174->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4174->refCount.value = 1;
    panda$collections$Array$init($tmp4174);
    fieldChildren4173 = $tmp4174;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4173, ((panda$core$Object*) test4156));
    org$pandalanguage$pandac$IRNode* $tmp4176 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4176->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4176->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4178 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4176, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp4178, ((panda$core$Object*) value4168), ((panda$collections$ListView*) fieldChildren4173));
    test4156 = $tmp4176;
    panda$collections$Array* $tmp4180 = (panda$collections$Array*) malloc(40);
    $tmp4180->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4180->refCount.value = 1;
    panda$collections$Array$init($tmp4180);
    children4179 = $tmp4180;
    panda$collections$Array$add$panda$collections$Array$T(children4179, ((panda$core$Object*) test4156));
    panda$core$Int64 $tmp4183 = (($fn4182) p_a->children->$class->vtable[3])(p_a->children);
    panda$core$Bit $tmp4184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4183, ((panda$core$Int64) { 2 }));
    if ($tmp4184.value) {
    {
        panda$core$Object* $tmp4187 = (($fn4186) p_a->children->$class->vtable[2])(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4189 = (($fn4188) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4187));
        msg4185 = $tmp4189;
        if (((panda$core$Bit) { msg4185 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4190 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4192 = (($fn4191) self->$class->vtable[33])(self, msg4185, $tmp4190);
        msg4185 = $tmp4192;
        if (((panda$core$Bit) { msg4185 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4179, ((panda$core$Object*) msg4185));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4193 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4193->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4193->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4193, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children4179));
    return $tmp4193;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$collections$Array* decls4195;
    panda$collections$Iterator* astDecl$Iter4198;
    org$pandalanguage$pandac$ASTNode* astDecl4210;
    org$pandalanguage$pandac$IRNode* decl4215;
    panda$core$Int64 kind4218;
    panda$core$Int64 $match$1032754219;
    panda$collections$Array* $tmp4196 = (panda$collections$Array*) malloc(40);
    $tmp4196->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4196->refCount.value = 1;
    panda$collections$Array$init($tmp4196);
    decls4195 = $tmp4196;
    {
        ITable* $tmp4199 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4199->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4199 = $tmp4199->next;
        }
        $fn4201 $tmp4200 = $tmp4199->methods[0];
        panda$collections$Iterator* $tmp4202 = $tmp4200(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4198 = $tmp4202;
        $l4203:;
        ITable* $tmp4205 = astDecl$Iter4198->$class->itable;
        while ($tmp4205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4205 = $tmp4205->next;
        }
        $fn4207 $tmp4206 = $tmp4205->methods[0];
        panda$core$Bit $tmp4208 = $tmp4206(astDecl$Iter4198);
        panda$core$Bit $tmp4209 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4208);
        if (!$tmp4209.value) goto $l4204;
        {
            ITable* $tmp4211 = astDecl$Iter4198->$class->itable;
            while ($tmp4211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4211 = $tmp4211->next;
            }
            $fn4213 $tmp4212 = $tmp4211->methods[1];
            panda$core$Object* $tmp4214 = $tmp4212(astDecl$Iter4198);
            astDecl4210 = ((org$pandalanguage$pandac$ASTNode*) $tmp4214);
            org$pandalanguage$pandac$IRNode* $tmp4217 = (($fn4216) self->$class->vtable[79])(self, astDecl4210);
            decl4215 = $tmp4217;
            if (((panda$core$Bit) { decl4215 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4195, ((panda$core$Object*) decl4215));
        }
        goto $l4203;
        $l4204:;
    }
    {
        $match$1032754219 = p_v->kind;
        panda$core$Bit $tmp4220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032754219, ((panda$core$Int64) { 130 }));
        if ($tmp4220.value) {
        {
            kind4218 = ((panda$core$Int64) { 1017 });
        }
        }
        else {
        panda$core$Bit $tmp4221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032754219, ((panda$core$Int64) { 131 }));
        if ($tmp4221.value) {
        {
            kind4218 = ((panda$core$Int64) { 1018 });
        }
        }
        else {
        panda$core$Bit $tmp4222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032754219, ((panda$core$Int64) { 133 }));
        if ($tmp4222.value) {
        {
            kind4218 = ((panda$core$Int64) { 1020 });
        }
        }
        else {
        panda$core$Bit $tmp4223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032754219, ((panda$core$Int64) { 132 }));
        if ($tmp4223.value) {
        {
            kind4218 = ((panda$core$Int64) { 1019 });
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
    org$pandalanguage$pandac$IRNode* $tmp4224 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4224->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4224->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4224, kind4218, p_v->offset, ((panda$collections$ListView*) decls4195));
    return $tmp4224;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4226;
    panda$collections$Array* callChildren4229;
    org$pandalanguage$pandac$IRNode* testValue4232;
    org$pandalanguage$pandac$IRNode* $tmp4227 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4227->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4227, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target4226 = $tmp4227;
    panda$collections$Array* $tmp4230 = (panda$collections$Array*) malloc(40);
    $tmp4230->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4230->refCount.value = 1;
    panda$collections$Array$init($tmp4230);
    callChildren4229 = $tmp4230;
    org$pandalanguage$pandac$IRNode* $tmp4234 = (($fn4233) self->$class->vtable[69])(self, p_test);
    testValue4232 = $tmp4234;
    if (((panda$core$Bit) { testValue4232 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren4229, ((panda$core$Object*) testValue4232));
    org$pandalanguage$pandac$IRNode* $tmp4237 = (($fn4236) self->$class->vtable[40])(self, target4226, &$s4235, ((panda$collections$ListView*) callChildren4229));
    return $tmp4237;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4238;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4245;
    org$pandalanguage$pandac$IRNode* nextTest4268;
    panda$collections$Array* callChildren4275;
    panda$collections$Array* statements4294;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4297;
    org$pandalanguage$pandac$IRNode* statement4318;
    panda$collections$Array* children4335;
    panda$core$Object* $tmp4240 = (($fn4239) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4242 = (($fn4241) ((org$pandalanguage$pandac$ASTNode*) $tmp4240)->children->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp4240)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4244 = (($fn4243) self->$class->vtable[85])(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4242));
    test4238 = $tmp4244;
    if (((panda$core$Bit) { test4238 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4247 = (($fn4246) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4249 = (($fn4248) ((org$pandalanguage$pandac$ASTNode*) $tmp4247)->children->$class->vtable[3])(((org$pandalanguage$pandac$ASTNode*) $tmp4247)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4245, ((panda$core$Int64) { 1 }), $tmp4249, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4251 = $tmp4245.start.value;
    panda$core$Int64 i4250 = { $tmp4251 };
    int64_t $tmp4253 = $tmp4245.end.value;
    int64_t $tmp4254 = $tmp4245.step.value;
    bool $tmp4255 = $tmp4245.inclusive.value;
    bool $tmp4262 = $tmp4254 > 0;
    if ($tmp4262) goto $l4260; else goto $l4261;
    $l4260:;
    if ($tmp4255) goto $l4263; else goto $l4264;
    $l4263:;
    if ($tmp4251 <= $tmp4253) goto $l4256; else goto $l4258;
    $l4264:;
    if ($tmp4251 < $tmp4253) goto $l4256; else goto $l4258;
    $l4261:;
    if ($tmp4255) goto $l4265; else goto $l4266;
    $l4265:;
    if ($tmp4251 >= $tmp4253) goto $l4256; else goto $l4258;
    $l4266:;
    if ($tmp4251 > $tmp4253) goto $l4256; else goto $l4258;
    $l4256:;
    {
        panda$core$Object* $tmp4270 = (($fn4269) p_w->children->$class->vtable[2])(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4272 = (($fn4271) ((org$pandalanguage$pandac$ASTNode*) $tmp4270)->children->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp4270)->children, i4250);
        org$pandalanguage$pandac$IRNode* $tmp4274 = (($fn4273) self->$class->vtable[85])(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4272));
        nextTest4268 = $tmp4274;
        if (((panda$core$Bit) { nextTest4268 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4276 = (panda$collections$Array*) malloc(40);
        $tmp4276->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4276->refCount.value = 1;
        panda$collections$Array$init($tmp4276);
        callChildren4275 = $tmp4276;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4275, ((panda$core$Object*) nextTest4268));
        org$pandalanguage$pandac$IRNode* $tmp4280 = (($fn4279) self->$class->vtable[40])(self, test4238, &$s4278, ((panda$collections$ListView*) callChildren4275));
        test4238 = $tmp4280;
        if (((panda$core$Bit) { test4238 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4259:;
    if ($tmp4262) goto $l4282; else goto $l4283;
    $l4282:;
    int64_t $tmp4284 = $tmp4253 - i4250.value;
    if ($tmp4255) goto $l4285; else goto $l4286;
    $l4285:;
    if ($tmp4284 >= $tmp4254) goto $l4281; else goto $l4258;
    $l4286:;
    if ($tmp4284 > $tmp4254) goto $l4281; else goto $l4258;
    $l4283:;
    int64_t $tmp4288 = i4250.value - $tmp4253;
    if ($tmp4255) goto $l4289; else goto $l4290;
    $l4289:;
    if ($tmp4288 >= -$tmp4254) goto $l4281; else goto $l4258;
    $l4290:;
    if ($tmp4288 > -$tmp4254) goto $l4281; else goto $l4258;
    $l4281:;
    i4250.value += $tmp4254;
    goto $l4256;
    $l4258:;
    org$pandalanguage$pandac$SymbolTable* $tmp4292 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4292->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4292->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4292, self->symbolTable);
    self->symbolTable = $tmp4292;
    panda$collections$Array* $tmp4295 = (panda$collections$Array*) malloc(40);
    $tmp4295->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4295->refCount.value = 1;
    panda$collections$Array$init($tmp4295);
    statements4294 = $tmp4295;
    panda$core$Int64 $tmp4299 = (($fn4298) p_w->children->$class->vtable[3])(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4297, ((panda$core$Int64) { 1 }), $tmp4299, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4301 = $tmp4297.start.value;
    panda$core$Int64 i4300 = { $tmp4301 };
    int64_t $tmp4303 = $tmp4297.end.value;
    int64_t $tmp4304 = $tmp4297.step.value;
    bool $tmp4305 = $tmp4297.inclusive.value;
    bool $tmp4312 = $tmp4304 > 0;
    if ($tmp4312) goto $l4310; else goto $l4311;
    $l4310:;
    if ($tmp4305) goto $l4313; else goto $l4314;
    $l4313:;
    if ($tmp4301 <= $tmp4303) goto $l4306; else goto $l4308;
    $l4314:;
    if ($tmp4301 < $tmp4303) goto $l4306; else goto $l4308;
    $l4311:;
    if ($tmp4305) goto $l4315; else goto $l4316;
    $l4315:;
    if ($tmp4301 >= $tmp4303) goto $l4306; else goto $l4308;
    $l4316:;
    if ($tmp4301 > $tmp4303) goto $l4306; else goto $l4308;
    $l4306:;
    {
        panda$core$Object* $tmp4320 = (($fn4319) p_w->children->$class->vtable[2])(p_w->children, i4300);
        org$pandalanguage$pandac$IRNode* $tmp4322 = (($fn4321) self->$class->vtable[88])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4320));
        statement4318 = $tmp4322;
        if (((panda$core$Bit) { statement4318 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4294, ((panda$core$Object*) statement4318));
    }
    $l4309:;
    if ($tmp4312) goto $l4324; else goto $l4325;
    $l4324:;
    int64_t $tmp4326 = $tmp4303 - i4300.value;
    if ($tmp4305) goto $l4327; else goto $l4328;
    $l4327:;
    if ($tmp4326 >= $tmp4304) goto $l4323; else goto $l4308;
    $l4328:;
    if ($tmp4326 > $tmp4304) goto $l4323; else goto $l4308;
    $l4325:;
    int64_t $tmp4330 = i4300.value - $tmp4303;
    if ($tmp4305) goto $l4331; else goto $l4332;
    $l4331:;
    if ($tmp4330 >= -$tmp4304) goto $l4323; else goto $l4308;
    $l4332:;
    if ($tmp4330 > -$tmp4304) goto $l4323; else goto $l4308;
    $l4323:;
    i4300.value += $tmp4304;
    goto $l4306;
    $l4308:;
    panda$core$Object* $tmp4334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4334);
    panda$collections$Array* $tmp4336 = (panda$collections$Array*) malloc(40);
    $tmp4336->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4336->refCount.value = 1;
    panda$collections$Array$init($tmp4336);
    children4335 = $tmp4336;
    panda$collections$Array$add$panda$collections$Array$T(children4335, ((panda$core$Object*) test4238));
    org$pandalanguage$pandac$IRNode* $tmp4338 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4338->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4338->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4338, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements4294));
    panda$collections$Array$add$panda$collections$Array$T(children4335, ((panda$core$Object*) $tmp4338));
    org$pandalanguage$pandac$IRNode* $tmp4340 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4340->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4340->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4340, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children4335));
    return $tmp4340;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4342;
    panda$collections$Array* children4349;
    org$pandalanguage$pandac$Variable* valueVar4352;
    panda$collections$Array* declChildren4359;
    panda$collections$Array* varChildren4364;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4371;
    org$pandalanguage$pandac$ASTNode* c4392;
    panda$core$Int64 $match$1063704395;
    org$pandalanguage$pandac$IRNode* w4397;
    panda$collections$Array* statements4401;
    panda$collections$Iterator* astStatement$Iter4404;
    org$pandalanguage$pandac$ASTNode* astStatement4416;
    org$pandalanguage$pandac$IRNode* stmt4421;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4437;
    panda$core$Object* $tmp4344 = (($fn4343) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4346 = (($fn4345) self->$class->vtable[69])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4344));
    org$pandalanguage$pandac$IRNode* $tmp4348 = (($fn4347) self->$class->vtable[8])(self, $tmp4346);
    value4342 = $tmp4348;
    if (((panda$core$Bit) { value4342 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4350 = (panda$collections$Array*) malloc(40);
    $tmp4350->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4350->refCount.value = 1;
    panda$collections$Array$init($tmp4350);
    children4349 = $tmp4350;
    org$pandalanguage$pandac$Variable* $tmp4353 = (org$pandalanguage$pandac$Variable*) malloc(56);
    $tmp4353->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4353->refCount.value = 1;
    panda$core$String* $tmp4356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4355, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp4358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4356, &$s4357);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4353, p_m->offset, $tmp4358, value4342->type);
    valueVar4352 = $tmp4353;
    panda$collections$Array* $tmp4360 = (panda$collections$Array*) malloc(40);
    $tmp4360->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4360->refCount.value = 1;
    panda$collections$Array$init($tmp4360);
    declChildren4359 = $tmp4360;
    org$pandalanguage$pandac$IRNode* $tmp4362 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4362->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4362->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4362, ((panda$core$Int64) { 1016 }), value4342->offset, valueVar4352->type, valueVar4352);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4359, ((panda$core$Object*) $tmp4362));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4359, ((panda$core$Object*) value4342));
    panda$collections$Array* $tmp4365 = (panda$collections$Array*) malloc(40);
    $tmp4365->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4365->refCount.value = 1;
    panda$collections$Array$init($tmp4365);
    varChildren4364 = $tmp4365;
    org$pandalanguage$pandac$IRNode* $tmp4367 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4367->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4367->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4367, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4352)->offset, ((panda$collections$ListView*) declChildren4359));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4364, ((panda$core$Object*) $tmp4367));
    org$pandalanguage$pandac$IRNode* $tmp4369 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4369->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4369->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4369, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4352)->offset, ((panda$collections$ListView*) varChildren4364));
    panda$collections$Array$add$panda$collections$Array$T(children4349, ((panda$core$Object*) $tmp4369));
    panda$core$Int64 $tmp4373 = (($fn4372) p_m->children->$class->vtable[3])(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4371, ((panda$core$Int64) { 1 }), $tmp4373, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4375 = $tmp4371.start.value;
    panda$core$Int64 i4374 = { $tmp4375 };
    int64_t $tmp4377 = $tmp4371.end.value;
    int64_t $tmp4378 = $tmp4371.step.value;
    bool $tmp4379 = $tmp4371.inclusive.value;
    bool $tmp4386 = $tmp4378 > 0;
    if ($tmp4386) goto $l4384; else goto $l4385;
    $l4384:;
    if ($tmp4379) goto $l4387; else goto $l4388;
    $l4387:;
    if ($tmp4375 <= $tmp4377) goto $l4380; else goto $l4382;
    $l4388:;
    if ($tmp4375 < $tmp4377) goto $l4380; else goto $l4382;
    $l4385:;
    if ($tmp4379) goto $l4389; else goto $l4390;
    $l4389:;
    if ($tmp4375 >= $tmp4377) goto $l4380; else goto $l4382;
    $l4390:;
    if ($tmp4375 > $tmp4377) goto $l4380; else goto $l4382;
    $l4380:;
    {
        panda$core$Object* $tmp4394 = (($fn4393) p_m->children->$class->vtable[2])(p_m->children, i4374);
        c4392 = ((org$pandalanguage$pandac$ASTNode*) $tmp4394);
        {
            $match$1063704395 = c4392->kind;
            panda$core$Bit $tmp4396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1063704395, ((panda$core$Int64) { 124 }));
            if ($tmp4396.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4399 = (($fn4398) self->$class->vtable[86])(self, valueVar4352, c4392);
                w4397 = $tmp4399;
                if (((panda$core$Bit) { w4397 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4349, ((panda$core$Object*) w4397));
            }
            }
            else {
            panda$core$Bit $tmp4400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1063704395, ((panda$core$Int64) { 127 }));
            if ($tmp4400.value) {
            {
                panda$collections$Array* $tmp4402 = (panda$collections$Array*) malloc(40);
                $tmp4402->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4402->refCount.value = 1;
                panda$collections$Array$init($tmp4402);
                statements4401 = $tmp4402;
                {
                    ITable* $tmp4405 = ((panda$collections$Iterable*) c4392->children)->$class->itable;
                    while ($tmp4405->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4405 = $tmp4405->next;
                    }
                    $fn4407 $tmp4406 = $tmp4405->methods[0];
                    panda$collections$Iterator* $tmp4408 = $tmp4406(((panda$collections$Iterable*) c4392->children));
                    astStatement$Iter4404 = $tmp4408;
                    $l4409:;
                    ITable* $tmp4411 = astStatement$Iter4404->$class->itable;
                    while ($tmp4411->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4411 = $tmp4411->next;
                    }
                    $fn4413 $tmp4412 = $tmp4411->methods[0];
                    panda$core$Bit $tmp4414 = $tmp4412(astStatement$Iter4404);
                    panda$core$Bit $tmp4415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4414);
                    if (!$tmp4415.value) goto $l4410;
                    {
                        ITable* $tmp4417 = astStatement$Iter4404->$class->itable;
                        while ($tmp4417->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4417 = $tmp4417->next;
                        }
                        $fn4419 $tmp4418 = $tmp4417->methods[1];
                        panda$core$Object* $tmp4420 = $tmp4418(astStatement$Iter4404);
                        astStatement4416 = ((org$pandalanguage$pandac$ASTNode*) $tmp4420);
                        org$pandalanguage$pandac$IRNode* $tmp4423 = (($fn4422) self->$class->vtable[88])(self, astStatement4416);
                        stmt4421 = $tmp4423;
                        if (((panda$core$Bit) { stmt4421 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4401, ((panda$core$Object*) stmt4421));
                    }
                    goto $l4409;
                    $l4410:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4424 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp4424->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4424->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4424, ((panda$core$Int64) { 1000 }), c4392->offset, ((panda$collections$ListView*) statements4401));
                panda$collections$Array$add$panda$collections$Array$T(children4349, ((panda$core$Object*) $tmp4424));
            }
            }
            else {
            {
            }
            }
            }
        }
    }
    $l4383:;
    if ($tmp4386) goto $l4427; else goto $l4428;
    $l4427:;
    int64_t $tmp4429 = $tmp4377 - i4374.value;
    if ($tmp4379) goto $l4430; else goto $l4431;
    $l4430:;
    if ($tmp4429 >= $tmp4378) goto $l4426; else goto $l4382;
    $l4431:;
    if ($tmp4429 > $tmp4378) goto $l4426; else goto $l4382;
    $l4428:;
    int64_t $tmp4433 = i4374.value - $tmp4377;
    if ($tmp4379) goto $l4434; else goto $l4435;
    $l4434:;
    if ($tmp4433 >= -$tmp4378) goto $l4426; else goto $l4382;
    $l4435:;
    if ($tmp4433 > -$tmp4378) goto $l4426; else goto $l4382;
    $l4426:;
    i4374.value += $tmp4378;
    goto $l4380;
    $l4382:;
    panda$core$Int64 $tmp4438 = panda$collections$Array$get_count$R$panda$core$Int64(children4349);
    panda$core$Int64 $tmp4439 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4438, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4437, $tmp4439, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4441 = $tmp4437.start.value;
    panda$core$Int64 i4440 = { $tmp4441 };
    int64_t $tmp4443 = $tmp4437.end.value;
    int64_t $tmp4444 = $tmp4437.step.value;
    bool $tmp4445 = $tmp4437.inclusive.value;
    bool $tmp4452 = $tmp4444 > 0;
    if ($tmp4452) goto $l4450; else goto $l4451;
    $l4450:;
    if ($tmp4445) goto $l4453; else goto $l4454;
    $l4453:;
    if ($tmp4441 <= $tmp4443) goto $l4446; else goto $l4448;
    $l4454:;
    if ($tmp4441 < $tmp4443) goto $l4446; else goto $l4448;
    $l4451:;
    if ($tmp4445) goto $l4455; else goto $l4456;
    $l4455:;
    if ($tmp4441 >= $tmp4443) goto $l4446; else goto $l4448;
    $l4456:;
    if ($tmp4441 > $tmp4443) goto $l4446; else goto $l4448;
    $l4446:;
    {
        panda$core$Int64 $tmp4458 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4440, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4349, $tmp4458);
        panda$core$Object* $tmp4460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4349, i4440);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4459)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4460)));
        panda$core$Int64 $tmp4461 = panda$collections$Array$get_count$R$panda$core$Int64(children4349);
        panda$core$Int64 $tmp4462 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4461, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4349, $tmp4462);
    }
    $l4449:;
    if ($tmp4452) goto $l4464; else goto $l4465;
    $l4464:;
    int64_t $tmp4466 = $tmp4443 - i4440.value;
    if ($tmp4445) goto $l4467; else goto $l4468;
    $l4467:;
    if ($tmp4466 >= $tmp4444) goto $l4463; else goto $l4448;
    $l4468:;
    if ($tmp4466 > $tmp4444) goto $l4463; else goto $l4448;
    $l4465:;
    int64_t $tmp4470 = i4440.value - $tmp4443;
    if ($tmp4445) goto $l4471; else goto $l4472;
    $l4471:;
    if ($tmp4470 >= -$tmp4444) goto $l4463; else goto $l4448;
    $l4472:;
    if ($tmp4470 > -$tmp4444) goto $l4463; else goto $l4448;
    $l4463:;
    i4440.value += $tmp4444;
    goto $l4446;
    $l4448:;
    org$pandalanguage$pandac$IRNode* $tmp4474 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4474->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4474->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4474, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children4349));
    return $tmp4474;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    panda$core$Int64 $match$1075864476;
    {
        $match$1075864476 = p_s->kind;
        panda$core$Bit $tmp4477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 123 }));
        if ($tmp4477.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4479 = (($fn4478) self->$class->vtable[83])(self, p_s);
            return $tmp4479;
        }
        }
        else {
        panda$core$Bit $tmp4480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 103 }));
        if ($tmp4480.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4482 = (($fn4481) self->$class->vtable[54])(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4484 = (($fn4483) self->$class->vtable[8])(self, $tmp4482);
            return $tmp4484;
        }
        }
        else {
        panda$core$Bit $tmp4485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 126 }));
        if ($tmp4485.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4487 = (($fn4486) self->$class->vtable[70])(self, p_s);
            return $tmp4487;
        }
        }
        else {
        panda$core$Bit $tmp4488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 107 }));
        if ($tmp4488.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4490 = (($fn4489) self->$class->vtable[59])(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4492 = (($fn4491) self->$class->vtable[8])(self, $tmp4490);
            org$pandalanguage$pandac$IRNode* $tmp4494 = (($fn4493) self->$class->vtable[51])(self, $tmp4492);
            return $tmp4494;
        }
        }
        else {
        panda$core$Bit $tmp4495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 118 }));
        if ($tmp4495.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4497 = (($fn4496) self->$class->vtable[71])(self, p_s);
            return $tmp4497;
        }
        }
        else {
        panda$core$Bit $tmp4498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 119 }));
        if ($tmp4498.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4500 = (($fn4499) self->$class->vtable[74])(self, p_s);
            return $tmp4500;
        }
        }
        else {
        panda$core$Bit $tmp4501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 121 }));
        if ($tmp4501.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4503 = (($fn4502) self->$class->vtable[75])(self, p_s);
            return $tmp4503;
        }
        }
        else {
        panda$core$Bit $tmp4504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 120 }));
        if ($tmp4504.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4506 = (($fn4505) self->$class->vtable[76])(self, p_s);
            return $tmp4506;
        }
        }
        else {
        panda$core$Bit $tmp4507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 122 }));
        if ($tmp4507.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4509 = (($fn4508) self->$class->vtable[77])(self, p_s);
            return $tmp4509;
        }
        }
        else {
        panda$core$Bit $tmp4510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 125 }));
        if ($tmp4510.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4512 = (($fn4511) self->$class->vtable[87])(self, p_s);
            return $tmp4512;
        }
        }
        else {
        panda$core$Bit $tmp4513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 134 }));
        if ($tmp4513.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4515 = (($fn4514) self->$class->vtable[80])(self, p_s);
            return $tmp4515;
        }
        }
        else {
        panda$core$Bit $tmp4516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 135 }));
        if ($tmp4516.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4518 = (($fn4517) self->$class->vtable[81])(self, p_s);
            return $tmp4518;
        }
        }
        else {
        panda$core$Bit $tmp4519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 136 }));
        if ($tmp4519.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4521 = (($fn4520) self->$class->vtable[82])(self, p_s);
            return $tmp4521;
        }
        }
        else {
        panda$core$Bit $tmp4525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 130 }));
        bool $tmp4524 = $tmp4525.value;
        if ($tmp4524) goto $l4526;
        panda$core$Bit $tmp4527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 131 }));
        $tmp4524 = $tmp4527.value;
        $l4526:;
        panda$core$Bit $tmp4528 = { $tmp4524 };
        bool $tmp4523 = $tmp4528.value;
        if ($tmp4523) goto $l4529;
        panda$core$Bit $tmp4530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 132 }));
        $tmp4523 = $tmp4530.value;
        $l4529:;
        panda$core$Bit $tmp4531 = { $tmp4523 };
        bool $tmp4522 = $tmp4531.value;
        if ($tmp4522) goto $l4532;
        panda$core$Bit $tmp4533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1075864476, ((panda$core$Int64) { 133 }));
        $tmp4522 = $tmp4533.value;
        $l4532:;
        panda$core$Bit $tmp4534 = { $tmp4522 };
        if ($tmp4534.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp4536 = (($fn4535) self->$class->vtable[84])(self, p_s);
            return $tmp4536;
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
    org$pandalanguage$pandac$SymbolTable* old4538;
    org$pandalanguage$pandac$SymbolTable* symbols4543;
    panda$collections$Iterator* p$Iter4546;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4558;
    panda$collections$Array* fieldInitializers4566;
    panda$collections$Iterator* f$Iter4570;
    org$pandalanguage$pandac$FieldDecl* f4584;
    panda$collections$Array* children4596;
    org$pandalanguage$pandac$IRNode* fieldRef4605;
    org$pandalanguage$pandac$IRNode* compiled4610;
    panda$collections$Array* children4615;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    (($fn4537) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4538 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4540 = (($fn4539) self->$class->vtable[20])(self, p_m->owner);
    self->symbolTable = $tmp4540;
    (($fn4541) self->currentMethod->$class->vtable[2])(self->currentMethod, ((panda$core$Object*) p_m));
    (($fn4542) self->$class->vtable[6])(self, p_m);
    org$pandalanguage$pandac$SymbolTable* $tmp4544 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4544->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4544->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4544, self->symbolTable);
    symbols4543 = $tmp4544;
    {
        ITable* $tmp4547 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4547 = $tmp4547->next;
        }
        $fn4549 $tmp4548 = $tmp4547->methods[0];
        panda$collections$Iterator* $tmp4550 = $tmp4548(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4546 = $tmp4550;
        $l4551:;
        ITable* $tmp4553 = p$Iter4546->$class->itable;
        while ($tmp4553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4553 = $tmp4553->next;
        }
        $fn4555 $tmp4554 = $tmp4553->methods[0];
        panda$core$Bit $tmp4556 = $tmp4554(p$Iter4546);
        panda$core$Bit $tmp4557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4556);
        if (!$tmp4557.value) goto $l4552;
        {
            ITable* $tmp4559 = p$Iter4546->$class->itable;
            while ($tmp4559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4559 = $tmp4559->next;
            }
            $fn4561 $tmp4560 = $tmp4559->methods[1];
            panda$core$Object* $tmp4562 = $tmp4560(p$Iter4546);
            p4558 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4562);
            org$pandalanguage$pandac$Variable* $tmp4563 = (org$pandalanguage$pandac$Variable*) malloc(56);
            $tmp4563->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4563->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4563, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, p4558->name, p4558->type, ((panda$core$Int64) { 1820 }));
            (($fn4565) symbols4543->$class->vtable[2])(symbols4543, ((org$pandalanguage$pandac$Symbol*) $tmp4563));
        }
        goto $l4551;
        $l4552:;
    }
    self->symbolTable = symbols4543;
    panda$collections$Array* $tmp4567 = (panda$collections$Array*) malloc(40);
    $tmp4567->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4567->refCount.value = 1;
    panda$collections$Array$init($tmp4567);
    fieldInitializers4566 = $tmp4567;
    panda$core$Bit $tmp4569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4569.value) {
    {
        {
            panda$core$Object* $tmp4572 = (($fn4571) self->currentClass->$class->vtable[4])(self->currentClass);
            ITable* $tmp4573 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4572)->fields)->$class->itable;
            while ($tmp4573->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4573 = $tmp4573->next;
            }
            $fn4575 $tmp4574 = $tmp4573->methods[0];
            panda$collections$Iterator* $tmp4576 = $tmp4574(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4572)->fields));
            f$Iter4570 = $tmp4576;
            $l4577:;
            ITable* $tmp4579 = f$Iter4570->$class->itable;
            while ($tmp4579->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4579 = $tmp4579->next;
            }
            $fn4581 $tmp4580 = $tmp4579->methods[0];
            panda$core$Bit $tmp4582 = $tmp4580(f$Iter4570);
            panda$core$Bit $tmp4583 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4582);
            if (!$tmp4583.value) goto $l4578;
            {
                ITable* $tmp4585 = f$Iter4570->$class->itable;
                while ($tmp4585->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4585 = $tmp4585->next;
                }
                $fn4587 $tmp4586 = $tmp4585->methods[1];
                panda$core$Object* $tmp4588 = $tmp4586(f$Iter4570);
                f4584 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4588);
                (($fn4589) self->$class->vtable[7])(self, f4584);
                panda$core$Bit $tmp4592 = (($fn4591) f4584->annotations->$class->vtable[5])(f4584->annotations);
                panda$core$Bit $tmp4593 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4592);
                bool $tmp4590 = $tmp4593.value;
                if (!$tmp4590) goto $l4594;
                $tmp4590 = ((panda$core$Bit) { f4584->value != NULL }).value;
                $l4594:;
                panda$core$Bit $tmp4595 = { $tmp4590 };
                if ($tmp4595.value) {
                {
                    panda$collections$Array* $tmp4597 = (panda$collections$Array*) malloc(40);
                    $tmp4597->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4597->refCount.value = 1;
                    panda$collections$Array$init($tmp4597);
                    children4596 = $tmp4597;
                    org$pandalanguage$pandac$IRNode* $tmp4599 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4599->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4599->refCount.value = 1;
                    panda$core$Object* $tmp4602 = (($fn4601) self->currentClass->$class->vtable[4])(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4604 = (($fn4603) ((org$pandalanguage$pandac$ClassDecl*) $tmp4602)->$class->vtable[3])(((org$pandalanguage$pandac$ClassDecl*) $tmp4602));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp4599, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp4604);
                    panda$collections$Array$add$panda$collections$Array$T(children4596, ((panda$core$Object*) $tmp4599));
                    org$pandalanguage$pandac$IRNode* $tmp4606 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4606->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4606->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4606, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f4584->type, ((panda$core$Object*) f4584), ((panda$collections$ListView*) children4596));
                    fieldRef4605 = $tmp4606;
                    panda$collections$Array$clear(children4596);
                    panda$collections$Array$add$panda$collections$Array$T(children4596, ((panda$core$Object*) fieldRef4605));
                    panda$collections$Array$add$panda$collections$Array$T(children4596, ((panda$core$Object*) f4584->value));
                    org$pandalanguage$pandac$IRNode* $tmp4608 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4608->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4608->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4608, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4584)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4596));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4566, ((panda$core$Object*) $tmp4608));
                }
                }
            }
            goto $l4577;
            $l4578:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4612 = (($fn4611) self->$class->vtable[70])(self, p_m->body);
    compiled4610 = $tmp4612;
    if (((panda$core$Bit) { compiled4610 != NULL }).value) {
    {
        panda$core$Int64 $tmp4613 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4566);
        panda$core$Bit $tmp4614 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4613, ((panda$core$Int64) { 0 }));
        if ($tmp4614.value) {
        {
            panda$collections$Array* $tmp4616 = (panda$collections$Array*) malloc(40);
            $tmp4616->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4616->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4616, ((panda$collections$ListView*) fieldInitializers4566));
            children4615 = $tmp4616;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4615, ((panda$collections$CollectionView*) compiled4610->children));
            org$pandalanguage$pandac$IRNode* $tmp4618 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp4618->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4618->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4618, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children4615));
            compiled4610 = $tmp4618;
        }
        }
    }
    }
    self->symbolTable = old4538;
    (($fn4620) self->currentMethod->$class->vtable[3])(self->currentMethod);
    (($fn4621) self->currentClass->$class->vtable[3])(self->currentClass);
    panda$core$Bit $tmp4623 = (($fn4622) p_m->annotations->$class->vtable[11])(p_m->annotations);
    if ($tmp4623.value) {
    {
        p_m->compiledBody = compiled4610;
    }
    }
    return compiled4610;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4624;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4626 = (($fn4625) self->$class->vtable[89])(self, p_m);
        compiled4624 = $tmp4626;
        if (((panda$core$Bit) { compiled4624 != NULL }).value) {
        {
            ITable* $tmp4627 = self->codeGenerator->$class->itable;
            while ($tmp4627->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4627 = $tmp4627->next;
            }
            $fn4629 $tmp4628 = $tmp4627->methods[3];
            $tmp4628(self->codeGenerator, p_m, compiled4624);
        }
        }
    }
    }
    else {
    {
        (($fn4630) self->$class->vtable[6])(self, p_m);
        ITable* $tmp4631 = self->codeGenerator->$class->itable;
        while ($tmp4631->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4631 = $tmp4631->next;
        }
        $fn4633 $tmp4632 = $tmp4631->methods[2];
        $tmp4632(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4634;
    org$pandalanguage$pandac$ClassDecl* inner4646;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4635 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4635->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4635 = $tmp4635->next;
        }
        $fn4637 $tmp4636 = $tmp4635->methods[0];
        panda$collections$Iterator* $tmp4638 = $tmp4636(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4634 = $tmp4638;
        $l4639:;
        ITable* $tmp4641 = inner$Iter4634->$class->itable;
        while ($tmp4641->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4641 = $tmp4641->next;
        }
        $fn4643 $tmp4642 = $tmp4641->methods[0];
        panda$core$Bit $tmp4644 = $tmp4642(inner$Iter4634);
        panda$core$Bit $tmp4645 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4644);
        if (!$tmp4645.value) goto $l4640;
        {
            ITable* $tmp4647 = inner$Iter4634->$class->itable;
            while ($tmp4647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4647 = $tmp4647->next;
            }
            $fn4649 $tmp4648 = $tmp4647->methods[1];
            panda$core$Object* $tmp4650 = $tmp4648(inner$Iter4634);
            inner4646 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4650);
            (($fn4651) self->$class->vtable[91])(self, inner4646);
        }
        goto $l4639;
        $l4640:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4663;
    panda$collections$Iterator* m$Iter4669;
    org$pandalanguage$pandac$MethodDecl* m4681;
    org$pandalanguage$pandac$ClassDecl* next4694;
    self->compiling = p_cl;
    (($fn4652) self->$class->vtable[91])(self, p_cl);
    panda$core$Bit $tmp4654 = (($fn4653) p_cl->annotations->$class->vtable[12])(p_cl->annotations);
    if ($tmp4654.value) {
    {
        ITable* $tmp4655 = self->codeGenerator->$class->itable;
        while ($tmp4655->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4655 = $tmp4655->next;
        }
        $fn4657 $tmp4656 = $tmp4655->methods[1];
        $tmp4656(self->codeGenerator, p_cl);
        ITable* $tmp4658 = self->codeGenerator->$class->itable;
        while ($tmp4658->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4658 = $tmp4658->next;
        }
        $fn4660 $tmp4659 = $tmp4658->methods[4];
        $tmp4659(self->codeGenerator, p_cl);
        return;
    }
    }
    (($fn4661) self->currentClass->$class->vtable[2])(self->currentClass, ((panda$core$Object*) p_cl));
    (($fn4662) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_cl->source));
    old4663 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4665 = (($fn4664) self->$class->vtable[20])(self, p_cl);
    self->symbolTable = $tmp4665;
    ITable* $tmp4666 = self->codeGenerator->$class->itable;
    while ($tmp4666->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4666 = $tmp4666->next;
    }
    $fn4668 $tmp4667 = $tmp4666->methods[1];
    $tmp4667(self->codeGenerator, p_cl);
    {
        ITable* $tmp4670 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4670->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4670 = $tmp4670->next;
        }
        $fn4672 $tmp4671 = $tmp4670->methods[0];
        panda$collections$Iterator* $tmp4673 = $tmp4671(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4669 = $tmp4673;
        $l4674:;
        ITable* $tmp4676 = m$Iter4669->$class->itable;
        while ($tmp4676->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4676 = $tmp4676->next;
        }
        $fn4678 $tmp4677 = $tmp4676->methods[0];
        panda$core$Bit $tmp4679 = $tmp4677(m$Iter4669);
        panda$core$Bit $tmp4680 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4679);
        if (!$tmp4680.value) goto $l4675;
        {
            ITable* $tmp4682 = m$Iter4669->$class->itable;
            while ($tmp4682->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4682 = $tmp4682->next;
            }
            $fn4684 $tmp4683 = $tmp4682->methods[1];
            panda$core$Object* $tmp4685 = $tmp4683(m$Iter4669);
            m4681 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4685);
            (($fn4686) self->$class->vtable[90])(self, m4681);
        }
        goto $l4674;
        $l4675:;
    }
    ITable* $tmp4687 = self->codeGenerator->$class->itable;
    while ($tmp4687->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4687 = $tmp4687->next;
    }
    $fn4689 $tmp4688 = $tmp4687->methods[4];
    $tmp4688(self->codeGenerator, p_cl);
    self->symbolTable = old4663;
    (($fn4690) self->currentFile->$class->vtable[3])(self->currentFile);
    (($fn4691) self->currentClass->$class->vtable[3])(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4692 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4693 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4692, ((panda$core$Int64) { 0 }));
    if ($tmp4693.value) {
    {
        panda$core$Object* $tmp4695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4694 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4695);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        (($fn4696) self->$class->vtable[92])(self, next4694);
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4697;
    org$pandalanguage$pandac$ASTNode* parsed4704;
    panda$collections$Iterator* cl$Iter4709;
    org$pandalanguage$pandac$ClassDecl* cl4721;
    panda$core$Object* $tmp4699 = (($fn4698) self->scans->$class->vtable[3])(self->scans, ((panda$core$Object*) ((panda$collections$Key*) p_file)));
    result4697 = ((panda$collections$ListView*) $tmp4699);
    if (((panda$core$Bit) { result4697 == NULL }).value) {
    {
        (($fn4700) self->currentFile->$class->vtable[2])(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp4701 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4702 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4703) self->parser->$class->vtable[2])(self->parser, $tmp4701, $tmp4702);
        org$pandalanguage$pandac$ASTNode* $tmp4706 = (($fn4705) self->parser->$class->vtable[68])(self->parser);
        parsed4704 = $tmp4706;
        if (((panda$core$Bit) { parsed4704 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4708 = (($fn4707) self->scanner->$class->vtable[12])(self->scanner, p_file, parsed4704);
            result4697 = $tmp4708;
            {
                ITable* $tmp4710 = ((panda$collections$Iterable*) result4697)->$class->itable;
                while ($tmp4710->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4710 = $tmp4710->next;
                }
                $fn4712 $tmp4711 = $tmp4710->methods[0];
                panda$collections$Iterator* $tmp4713 = $tmp4711(((panda$collections$Iterable*) result4697));
                cl$Iter4709 = $tmp4713;
                $l4714:;
                ITable* $tmp4716 = cl$Iter4709->$class->itable;
                while ($tmp4716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4716 = $tmp4716->next;
                }
                $fn4718 $tmp4717 = $tmp4716->methods[0];
                panda$core$Bit $tmp4719 = $tmp4717(cl$Iter4709);
                panda$core$Bit $tmp4720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4719);
                if (!$tmp4720.value) goto $l4715;
                {
                    ITable* $tmp4722 = cl$Iter4709->$class->itable;
                    while ($tmp4722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4722 = $tmp4722->next;
                    }
                    $fn4724 $tmp4723 = $tmp4722->methods[1];
                    panda$core$Object* $tmp4725 = $tmp4723(cl$Iter4709);
                    cl4721 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4725);
                    (($fn4726) self->classes->$class->vtable[5])(self->classes, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4721)->name)), ((panda$core$Object*) cl4721));
                }
                goto $l4714;
                $l4715:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4727 = (panda$collections$Array*) malloc(40);
            $tmp4727->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4727->refCount.value = 1;
            panda$collections$Array$init($tmp4727);
            result4697 = ((panda$collections$ListView*) $tmp4727);
        }
        }
        (($fn4729) self->scans->$class->vtable[5])(self->scans, ((panda$core$Object*) ((panda$collections$Key*) p_file)), ((panda$core$Object*) result4697));
        (($fn4730) self->currentFile->$class->vtable[3])(self->currentFile);
    }
    }
    return result4697;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4731;
    panda$collections$Iterator* cl$Iter4734;
    org$pandalanguage$pandac$ClassDecl* cl4746;
    panda$collections$ListView* $tmp4733 = (($fn4732) self->$class->vtable[93])(self, p_file);
    classes4731 = $tmp4733;
    {
        ITable* $tmp4735 = ((panda$collections$Iterable*) classes4731)->$class->itable;
        while ($tmp4735->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4735 = $tmp4735->next;
        }
        $fn4737 $tmp4736 = $tmp4735->methods[0];
        panda$collections$Iterator* $tmp4738 = $tmp4736(((panda$collections$Iterable*) classes4731));
        cl$Iter4734 = $tmp4738;
        $l4739:;
        ITable* $tmp4741 = cl$Iter4734->$class->itable;
        while ($tmp4741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4741 = $tmp4741->next;
        }
        $fn4743 $tmp4742 = $tmp4741->methods[0];
        panda$core$Bit $tmp4744 = $tmp4742(cl$Iter4734);
        panda$core$Bit $tmp4745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4744);
        if (!$tmp4745.value) goto $l4740;
        {
            ITable* $tmp4747 = cl$Iter4734->$class->itable;
            while ($tmp4747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4747 = $tmp4747->next;
            }
            $fn4749 $tmp4748 = $tmp4747->methods[1];
            panda$core$Object* $tmp4750 = $tmp4748(cl$Iter4734);
            cl4746 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4750);
            (($fn4751) self->$class->vtable[92])(self, cl4746);
        }
        goto $l4739;
        $l4740:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source4752;
    panda$core$Int64 line4756;
    panda$core$Int64 column4757;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4758;
    panda$core$Char8 $match$1129674777;
    panda$core$Char8 $tmp4780;
    panda$core$Char8 $tmp4783;
    panda$core$Object* $tmp4754 = (($fn4753) self->currentFile->$class->vtable[4])(self->currentFile);
    panda$io$InputStream* $tmp4755 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp4754));
    source4752 = $tmp4755;
    line4756 = ((panda$core$Int64) { 1 });
    column4757 = ((panda$core$Int64) { 1 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4758, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4760 = $tmp4758.start.value;
    panda$core$Int64 i4759 = { $tmp4760 };
    int64_t $tmp4762 = $tmp4758.end.value;
    int64_t $tmp4763 = $tmp4758.step.value;
    bool $tmp4764 = $tmp4758.inclusive.value;
    bool $tmp4771 = $tmp4763 > 0;
    if ($tmp4771) goto $l4769; else goto $l4770;
    $l4769:;
    if ($tmp4764) goto $l4772; else goto $l4773;
    $l4772:;
    if ($tmp4760 <= $tmp4762) goto $l4765; else goto $l4767;
    $l4773:;
    if ($tmp4760 < $tmp4762) goto $l4765; else goto $l4767;
    $l4770:;
    if ($tmp4764) goto $l4774; else goto $l4775;
    $l4774:;
    if ($tmp4760 >= $tmp4762) goto $l4765; else goto $l4767;
    $l4775:;
    if ($tmp4760 > $tmp4762) goto $l4765; else goto $l4767;
    $l4765:;
    {
        {
            panda$core$Char8$nullable $tmp4779 = (($fn4778) source4752->$class->vtable[10])(source4752);
            $match$1129674777 = ((panda$core$Char8) $tmp4779.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4780, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4781 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1129674777, $tmp4780);
            if ($tmp4781.value) {
            {
                panda$core$Int64 $tmp4782 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4756, ((panda$core$Int64) { 1 }));
                line4756 = $tmp4782;
                column4757 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4783, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4784 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1129674777, $tmp4783);
            if ($tmp4784.value) {
            {
                panda$core$Int64 $tmp4785 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column4757, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4786 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4785);
                panda$core$Int64 $tmp4787 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4757, $tmp4786);
                column4757 = $tmp4787;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4788 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4757, ((panda$core$Int64) { 1 }));
                column4757 = $tmp4788;
            }
            }
            }
        }
    }
    $l4768:;
    if ($tmp4771) goto $l4790; else goto $l4791;
    $l4790:;
    int64_t $tmp4792 = $tmp4762 - i4759.value;
    if ($tmp4764) goto $l4793; else goto $l4794;
    $l4793:;
    if ($tmp4792 >= $tmp4763) goto $l4789; else goto $l4767;
    $l4794:;
    if ($tmp4792 > $tmp4763) goto $l4789; else goto $l4767;
    $l4791:;
    int64_t $tmp4796 = i4759.value - $tmp4762;
    if ($tmp4764) goto $l4797; else goto $l4798;
    $l4797:;
    if ($tmp4796 >= -$tmp4763) goto $l4789; else goto $l4767;
    $l4798:;
    if ($tmp4796 > -$tmp4763) goto $l4789; else goto $l4767;
    $l4789:;
    i4759.value += $tmp4763;
    goto $l4765;
    $l4767:;
    (($fn4800) ((panda$core$Object*) source4752)->$class->vtable[1])(((panda$core$Object*) source4752));
    org$pandalanguage$pandac$Position* $tmp4801 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4801->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4801->refCount.value = 1;
    panda$core$Object* $tmp4804 = (($fn4803) self->currentFile->$class->vtable[4])(self->currentFile);
    panda$core$String* $tmp4805 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4804));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4801, $tmp4805, line4756, column4757);
    return $tmp4801;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4807 = (($fn4806) self->$class->vtable[95])(self, p_offset);
    (($fn4808) self->$class->vtable[97])(self, $tmp4807, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4809 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4809;
        panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4810, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4812);
        panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, p_msg);
        panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4815);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4816));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4817 = self->codeGenerator->$class->itable;
    while ($tmp4817->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4817 = $tmp4817->next;
    }
    $fn4819 $tmp4818 = $tmp4817->methods[5];
    $tmp4818(self->codeGenerator);
}

