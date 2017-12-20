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
#include "org/pandalanguage/pandac/ClassDecl/Resolution.h"
#include "panda/collections/Key.h"
#include "panda/collections/MapView.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "panda/collections/ListView.h"
#include "panda/core/Formattable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/io/File.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Int32.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char16.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn127)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn172)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn179)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn196)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Object* (*$fn225)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn239)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn249)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn257)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn264)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn362)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn368)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn374)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn381)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn387)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn393)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn447)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn453)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn459)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn470)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn476)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn482)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn488)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn494)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn500)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn508)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn514)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn520)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn623)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn652)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn684)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn690)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn696)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn716)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn722)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn728)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn754)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn760)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn766)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn821)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn827)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn836)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn853)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn883)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn891)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn897)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn903)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn921)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn927)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn950)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn962)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1001)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1007)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1013)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1026)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1032)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1038)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1053)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1059)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1065)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1081)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1087)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1093)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1119)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1144)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1201)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1208)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1214)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1220)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1335)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1506)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1512)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1518)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1544)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1550)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1556)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1670)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1674)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1677)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1706)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1793)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1799)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1805)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1959)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2094)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2135)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2237)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2259)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2281)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2310)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2326)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2344)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2351)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2426)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2444)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2530)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2537)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2579)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2597)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2603)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2609)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2640)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2646)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2652)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2675)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2694)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2701)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2719)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2737)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2783)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2806)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2812)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2818)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3403)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3409)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3415)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3572)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3578)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3584)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3671)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3677)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3683)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3691)(panda$core$Object*);
typedef org$pandalanguage$pandac$Position (*$fn3750)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn3788)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3804)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3810)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3816)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4029)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4035)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4041)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4303)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4422)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4428)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4434)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4461)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4467)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4473)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4552)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4564)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn4581)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn4636)(panda$core$Formattable*, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn4704)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn4716)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4722)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4728)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4780)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4786)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4792)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4835)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4841)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4847)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4865)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4871)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4877)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4945)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4951)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4957)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4970)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4976)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4982)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5002)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5008)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5014)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5074)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5080)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5086)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5237)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5243)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5249)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5275)(panda$collections$Iterator*);
typedef void (*$fn5312)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5315)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn5319)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5325)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5331)(panda$collections$Iterator*);
typedef void (*$fn5336)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5339)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5344)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5348)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5354)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5360)(panda$collections$Iterator*);
typedef void (*$fn5364)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5380)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5386)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5392)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5401)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5407)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5413)(panda$collections$Iterator*);
typedef void (*$fn5430)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6e\x74", 3, 1786200, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x55\x49\x6e\x74", 4, 192391885, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x52\x65\x61\x6c", 4, 189585289, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e", 28, 2859598962617493300, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x57\x72\x69\x74\x65\x72", 34, -9068070593840742067, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4b\x65\x79", 21, -4500515327555727959, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 6616553759611337156, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, -5808190217954538403, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70", 21, -4500515327555707970, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77", 25, -7657589288547845907, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x57\x72\x69\x74\x65\x72", 27, 6892819694825741479, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x65\x74", 21, -4500515327555646356, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79", 34, 3135313918436209288, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6f\x6d\x70\x61\x72\x61\x62\x6c\x65", 21, -5254568576296725552, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65", 20, 3987957135724734002, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x69\x6d\x70\x6c\x65\x52\x61\x6e\x67\x65", 22, -5809978584159753927, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d", 17, -1766462930141263461, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x58\x6f\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6c\x75\x73", 26, 215641961116556169, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 1042140495667569485, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 6529214259521028726, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, -2754778238192978458, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 27, -1871907680230610725, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -3689739765115213222, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, -1415712807475310042, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6e\x65\x72\x69\x63\x20", 9, 1451350792886950498, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x65\x74\x65\x72", 9, 2317006540128003462, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x20\x27", 19, -7104957698969262010, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 9, 2306627197047234467, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x65\x78\x74\x65\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6f\x66\x20\x63\x6c\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6f\x72\x65\x20\x61\x6e\x79\x20\x73\x75\x70\x65\x72\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6d\x6f\x72\x65\x20\x74\x68\x61\x6e\x20\x6f\x6e\x65\x20\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6e\x6f\x74\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6f\x72\x20\x61\x6d\x62\x69\x67\x75\x6f\x75\x73\x20\x6d\x61\x74\x63\x68\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6c\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x63\x6f\x6e\x74\x61\x69\x6e\x20\x61\x20\x63\x6c\x61\x73\x73\x20\x6e\x61\x6d\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x66\x69\x6c\x65\x20\x6e\x61\x6d\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20\x61\x6e\x79\x20\x69\x6d\x70\x6f\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x30", 13, 2997537454666094288, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 15, -6693247693629641489, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x63\x6f\x6e\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x61\x73\x73\x20\x74\x79\x70\x65\x20\x27", 40, 2057026257004143426, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e", 25, 9019145596080302696, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x20\x27", 6, 2293399544522, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x6c\x61\x73\x73", 16, 3306529650949529468, NULL };
static panda$core$String $s3721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6e\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6e\x75\x6c\x6c", 25, 4479279434458851015, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x72\x61\x6e\x67\x65\x3e", 18, -1293962867859660245, NULL };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x65\x6c\x66\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20\x74\x79\x70\x65\x73\x20", 27, 6843179484913102436, NULL };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 18, -4303734005461819726, NULL };
static panda$core$String $s4105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s4107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s4163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s4201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s4207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s4230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s4247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s4325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6f\x72", 8, 22210198075044275, NULL };
static panda$core$String $s4331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s4333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s4445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x20", 7, 149654778879689, NULL };
static panda$core$String $s4447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20\x27", 34, 2522153630228324859, NULL };
static panda$core$String $s4450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20\x27", 34, 2522153630228324859, NULL };
static panda$core$String $s4489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s4629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s4642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, -2438145452310052756, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s4706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 22, 417303976175476333, NULL };
static panda$core$String $s4764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s4811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6d\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s5423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s5426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
    org$pandalanguage$pandac$Position $tmp41;
    org$pandalanguage$pandac$Position $tmp46;
    org$pandalanguage$pandac$Position $tmp51;
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
    panda$collections$HashMap* $tmp13 = (panda$collections$HashMap*) malloc(56);
    $tmp13->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp13->refCount.value = 1;
    panda$collections$HashMap$init($tmp13);
    self->existenceCache = $tmp13;
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
    org$pandalanguage$pandac$SymbolTable* $tmp19 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
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
    org$pandalanguage$pandac$Type* $tmp24 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp24->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp24->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp24, &$s26, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp24));
    org$pandalanguage$pandac$Type* $tmp27 = org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp27));
    org$pandalanguage$pandac$Type* $tmp28 = org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp28));
    org$pandalanguage$pandac$Type* $tmp29 = org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp29));
    org$pandalanguage$pandac$Type* $tmp30 = org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp30));
    org$pandalanguage$pandac$Type* $tmp31 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp31));
    org$pandalanguage$pandac$Type* $tmp32 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp32));
    org$pandalanguage$pandac$Type* $tmp33 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp33));
    org$pandalanguage$pandac$Type* $tmp34 = org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp34));
    org$pandalanguage$pandac$Type* $tmp35 = org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp35));
    org$pandalanguage$pandac$Type* $tmp36 = org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp36));
    org$pandalanguage$pandac$Alias* $tmp37 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp37->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp37->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp41);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp37, &$s39, &$s40, $tmp41);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp37));
    org$pandalanguage$pandac$Alias* $tmp42 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp42->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp46);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp42, &$s44, &$s45, $tmp46);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp42));
    org$pandalanguage$pandac$Alias* $tmp47 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp47->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp47->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp51);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp47, &$s49, &$s50, $tmp51);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp47));
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s52);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s53);
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
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s109);
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp112;
    org$pandalanguage$pandac$Position $tmp117;
    org$pandalanguage$pandac$Alias* $tmp110 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp110->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp110->refCount.value = 1;
    panda$core$String$Index$nullable $tmp114 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s113);
    panda$core$String$Index $tmp115 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp114.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp112, ((panda$core$String$Index$nullable) { $tmp115, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp116 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp112);
    org$pandalanguage$pandac$Position$init(&$tmp117);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp110, $tmp116, p_name, $tmp117);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp110));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* current118;
    org$pandalanguage$pandac$ClassDecl$Resolution* result122;
    panda$core$String* alias124;
    org$pandalanguage$pandac$ClassDecl* result132;
    panda$core$String$Index$nullable idx134;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp137;
    org$pandalanguage$pandac$Symbol* rootAlias149;
    panda$core$String$Index$nullable index156;
    org$pandalanguage$pandac$ClassDecl* parent159;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp160;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp163;
    panda$core$Int64 $tmp119 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp120 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp119, ((panda$core$Int64) { 0 }));
    if ($tmp120.value) {
    {
        panda$core$Object* $tmp121 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        current118 = ((org$pandalanguage$pandac$ClassDecl*) $tmp121);
    }
    }
    else {
    {
        current118 = NULL;
    }
    }
    if (((panda$core$Bit) { current118 != NULL }).value) {
    {
        panda$core$Object* $tmp123 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(current118->classResolutionCache, ((panda$collections$Key*) p_name));
        result122 = ((org$pandalanguage$pandac$ClassDecl$Resolution*) $tmp123);
        if (((panda$core$Bit) { result122 != NULL }).value) {
        {
            return result122->value;
        }
        }
        ITable* $tmp125 = current118->aliases->$class->itable;
        while ($tmp125->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp125 = $tmp125->next;
        }
        $fn127 $tmp126 = $tmp125->methods[1];
        panda$core$Object* $tmp128 = $tmp126(current118->aliases, ((panda$core$Object*) p_name));
        alias124 = ((panda$core$String*) $tmp128);
        if (((panda$core$Bit) { alias124 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl$Resolution* $tmp129 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
            $tmp129->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
            $tmp129->refCount.value = 1;
            org$pandalanguage$pandac$ClassDecl* $tmp131 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias124);
            org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp129, $tmp131);
            result122 = $tmp129;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current118->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) result122));
            return result122->value;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp133 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result132 = $tmp133;
    if (((panda$core$Bit) { current118 != NULL }).value) {
    {
        if (((panda$core$Bit) { result132 == NULL }).value) {
        {
            panda$core$String$Index$nullable $tmp136 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) current118)->name, &$s135);
            idx134 = $tmp136;
            if (((panda$core$Bit) { idx134.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp137, ((panda$core$String$Index$nullable) { .nonnull = false }), idx134, ((panda$core$Bit) { true }));
                panda$core$String* $tmp138 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current118)->name, $tmp137);
                panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp140 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp139);
                result132 = $tmp140;
            }
            }
        }
        }
        if (((panda$core$Bit) { result132 == NULL }).value) {
        {
            panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current118)->name, &$s141);
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp144 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp143);
            result132 = $tmp144;
        }
        }
        bool $tmp145 = ((panda$core$Bit) { result132 == NULL }).value;
        if (!$tmp145) goto $l146;
        $tmp145 = ((panda$core$Bit) { current118->owner != NULL }).value;
        $l146:;
        panda$core$Bit $tmp147 = { $tmp145 };
        if ($tmp147.value) {
        {
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) current118->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp148 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result132 = $tmp148;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result132 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp150 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->root, p_name);
        rootAlias149 = $tmp150;
        bool $tmp151 = ((panda$core$Bit) { rootAlias149 != NULL }).value;
        if (!$tmp151) goto $l152;
        panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias149->kind, ((panda$core$Int64) { 200 }));
        $tmp151 = $tmp153.value;
        $l152:;
        panda$core$Bit $tmp154 = { $tmp151 };
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp155 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Alias*) rootAlias149)->fullName);
            result132 = $tmp155;
        }
        }
    }
    }
    if (((panda$core$Bit) { result132 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp158 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s157);
        index156 = $tmp158;
        if (((panda$core$Bit) { index156.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp160, ((panda$core$String$Index$nullable) { .nonnull = false }), index156, ((panda$core$Bit) { false }));
            panda$core$String* $tmp161 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp160);
            org$pandalanguage$pandac$ClassDecl* $tmp162 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp161);
            parent159 = $tmp162;
            if (((panda$core$Bit) { parent159 != NULL }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp163, index156, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp164 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp163);
                panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) parent159)->name, $tmp164);
                org$pandalanguage$pandac$ClassDecl* $tmp166 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp165);
                result132 = $tmp166;
            }
            }
        }
        }
    }
    }
    if (((panda$core$Bit) { current118 != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl$Resolution* $tmp167 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
        $tmp167->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
        $tmp167->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp167, result132);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current118->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) $tmp167));
    }
    }
    return result132;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount169;
    panda$collections$ListView* foundTypes174;
    panda$core$Int64 foundCount176;
    org$pandalanguage$pandac$Type* object206;
    panda$core$Range$LTpanda$core$Int64$GT $tmp208;
    org$pandalanguage$pandac$Type* bound222;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp170 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp170->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp170 = $tmp170->next;
    }
    $fn172 $tmp171 = $tmp170->methods[0];
    panda$core$Int64 $tmp173 = $tmp171(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount169 = $tmp173;
    panda$collections$ListView* $tmp175 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes174 = $tmp175;
    ITable* $tmp177 = ((panda$collections$CollectionView*) foundTypes174)->$class->itable;
    while ($tmp177->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp177 = $tmp177->next;
    }
    $fn179 $tmp178 = $tmp177->methods[0];
    panda$core$Int64 $tmp180 = $tmp178(((panda$collections$CollectionView*) foundTypes174));
    foundCount176 = $tmp180;
    panda$core$Bit $tmp181 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount169, foundCount176);
    if ($tmp181.value) {
    {
        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s182, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s184);
        panda$core$Int64$wrapper* $tmp186;
        $tmp186 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp186->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp186->refCount = 1;
        $tmp186->value = expectedCount169;
        panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp185, ((panda$core$Object*) $tmp186));
        panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount169, ((panda$core$Int64) { 1 }));
        panda$core$Bit$wrapper* $tmp192;
        $tmp192 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp192->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp192->refCount = 1;
        $tmp192->value = $tmp191;
        ITable* $tmp194 = ((panda$core$Formattable*) $tmp192)->$class->itable;
        while ($tmp194->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp194 = $tmp194->next;
        }
        $fn196 $tmp195 = $tmp194->methods[0];
        panda$core$String* $tmp197 = $tmp195(((panda$core$Formattable*) $tmp192), &$s193);
        panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s190, $tmp197);
        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, &$s199);
        panda$core$Int64$wrapper* $tmp201;
        $tmp201 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp201->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp201->refCount = 1;
        $tmp201->value = foundCount176;
        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp200, ((panda$core$Object*) $tmp201));
        panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s203);
        panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, $tmp204);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp205);
        return ((panda$core$Bit) { false });
    }
    }
    org$pandalanguage$pandac$Type* $tmp207 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    object206 = $tmp207;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp208, ((panda$core$Int64) { 0 }), expectedCount169, ((panda$core$Bit) { false }));
    int64_t $tmp210 = $tmp208.min.value;
    panda$core$Int64 i209 = { $tmp210 };
    int64_t $tmp212 = $tmp208.max.value;
    bool $tmp213 = $tmp208.inclusive.value;
    if ($tmp213) goto $l220; else goto $l221;
    $l220:;
    if ($tmp210 <= $tmp212) goto $l214; else goto $l216;
    $l221:;
    if ($tmp210 < $tmp212) goto $l214; else goto $l216;
    $l214:;
    {
        ITable* $tmp223 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp223->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp223 = $tmp223->next;
        }
        $fn225 $tmp224 = $tmp223->methods[0];
        panda$core$Object* $tmp226 = $tmp224(((panda$collections$ListView*) p_cl->parameters), i209);
        bound222 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp226)->bound;
        panda$core$Bit $tmp228 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(bound222, object206);
        bool $tmp227 = $tmp228.value;
        if ($tmp227) goto $l229;
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(bound222->typeKind, ((panda$core$Int64) { 11 }));
        bool $tmp230 = $tmp231.value;
        if (!$tmp230) goto $l232;
        panda$core$Object* $tmp233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(bound222->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp234 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp233), object206);
        $tmp230 = $tmp234.value;
        $l232:;
        panda$core$Bit $tmp235 = { $tmp230 };
        $tmp227 = $tmp235.value;
        $l229:;
        panda$core$Bit $tmp236 = { $tmp227 };
        if ($tmp236.value) {
        {
            goto $l217;
        }
        }
        ITable* $tmp237 = foundTypes174->$class->itable;
        while ($tmp237->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp237 = $tmp237->next;
        }
        $fn239 $tmp238 = $tmp237->methods[0];
        panda$core$Object* $tmp240 = $tmp238(foundTypes174, i209);
        org$pandalanguage$pandac$Type* $tmp241 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, bound222);
        panda$core$Int64$nullable $tmp242 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp240), $tmp241);
        if (((panda$core$Bit) { !$tmp242.nonnull }).value) {
        {
            panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s243, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
            ITable* $tmp247 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp247->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp247 = $tmp247->next;
            }
            $fn249 $tmp248 = $tmp247->methods[0];
            panda$core$Object* $tmp250 = $tmp248(((panda$collections$ListView*) p_cl->parameters), i209);
            panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp250))->name);
            panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s252);
            ITable* $tmp255 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp255->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp255 = $tmp255->next;
            }
            $fn257 $tmp256 = $tmp255->methods[0];
            panda$core$Object* $tmp258 = $tmp256(((panda$collections$ListView*) p_cl->parameters), i209);
            panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s254, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp258)->bound));
            panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s260);
            ITable* $tmp262 = foundTypes174->$class->itable;
            while ($tmp262->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp262 = $tmp262->next;
            }
            $fn264 $tmp263 = $tmp262->methods[0];
            panda$core$Object* $tmp265 = $tmp263(foundTypes174, i209);
            panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp261, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp265)));
            panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s267);
            panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, $tmp268);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp269);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l217:;
    int64_t $tmp271 = $tmp212 - i209.value;
    if ($tmp213) goto $l272; else goto $l273;
    $l272:;
    if ((uint64_t) $tmp271 >= 1) goto $l270; else goto $l216;
    $l273:;
    if ((uint64_t) $tmp271 > 1) goto $l270; else goto $l216;
    $l270:;
    i209.value += 1;
    goto $l214;
    $l216:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved276;
    org$pandalanguage$pandac$Type* result278;
    org$pandalanguage$pandac$Symbol* s282;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp286;
    panda$collections$Array* subtypes297;
    org$pandalanguage$pandac$Type* sub300;
    panda$collections$Array* subtypes310;
    org$pandalanguage$pandac$Type* base313;
    panda$core$MutableString* name316;
    panda$core$Char8 $tmp320;
    panda$core$String* separator321;
    panda$core$Range$LTpanda$core$Int64$GT $tmp323;
    org$pandalanguage$pandac$Type* resolved338;
    panda$core$Char8 $tmp348;
    org$pandalanguage$pandac$Type* result349;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp277 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved276 = $tmp277;
            if (((panda$core$Bit) { resolved276 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp279 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved276);
                result278 = $tmp279;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp280 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved276, result278);
                    panda$core$Bit $tmp281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp280);
                    if ($tmp281.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result278;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp283 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s282 = $tmp283;
            if (((panda$core$Bit) { s282 != NULL }).value) {
            {
                switch (s282->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp284 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp284->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp284->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp284, ((org$pandalanguage$pandac$Alias*) s282)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp284;
                    }
                    break;
                    case 203:
                    {
                        gp286 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s282);
                        org$pandalanguage$pandac$ClassDecl* $tmp287 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp286->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp287);
                        org$pandalanguage$pandac$Type* $tmp288 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp288->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp288->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp288, gp286);
                        return $tmp288;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s282);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp290 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s282));
                        return $tmp290;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s291, ((panda$core$Object*) p_type));
            panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s293);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp294);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp295 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp295, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp296.value);
            panda$collections$Array* $tmp298 = (panda$collections$Array*) malloc(40);
            $tmp298->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp298->refCount.value = 1;
            panda$collections$Array$init($tmp298);
            subtypes297 = $tmp298;
            panda$core$Object* $tmp301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp302 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp301));
            sub300 = $tmp302;
            if (((panda$core$Bit) { sub300 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes297, ((panda$core$Object*) sub300));
            org$pandalanguage$pandac$Type* $tmp303 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp303->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp303->refCount.value = 1;
            panda$core$Object* $tmp305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes297, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp305))->name, &$s306);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp303, $tmp307, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes297), ((panda$core$Bit) { true }));
            return $tmp303;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp308 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp309 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp308, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp309.value);
            panda$collections$Array* $tmp311 = (panda$collections$Array*) malloc(40);
            $tmp311->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp311->refCount.value = 1;
            panda$collections$Array$init($tmp311);
            subtypes310 = $tmp311;
            panda$core$Object* $tmp314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp315 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp314), ((panda$core$Bit) { false }));
            base313 = $tmp315;
            if (((panda$core$Bit) { base313 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes310, ((panda$core$Object*) base313));
            panda$core$MutableString* $tmp317 = (panda$core$MutableString*) malloc(48);
            $tmp317->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp317->refCount.value = 1;
            panda$core$Object* $tmp319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes310, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp317, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp319))->name);
            name316 = $tmp317;
            panda$core$Char8$init$panda$core$UInt8(&$tmp320, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name316, $tmp320);
            separator321 = &$s322;
            panda$core$Int64 $tmp324 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp323, ((panda$core$Int64) { 1 }), $tmp324, ((panda$core$Bit) { false }));
            int64_t $tmp326 = $tmp323.min.value;
            panda$core$Int64 i325 = { $tmp326 };
            int64_t $tmp328 = $tmp323.max.value;
            bool $tmp329 = $tmp323.inclusive.value;
            if ($tmp329) goto $l336; else goto $l337;
            $l336:;
            if ($tmp326 <= $tmp328) goto $l330; else goto $l332;
            $l337:;
            if ($tmp326 < $tmp328) goto $l330; else goto $l332;
            $l330:;
            {
                panda$core$Object* $tmp339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i325);
                org$pandalanguage$pandac$Type* $tmp340 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp339));
                resolved338 = $tmp340;
                if (((panda$core$Bit) { resolved338 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes310, ((panda$core$Object*) resolved338));
                panda$core$MutableString$append$panda$core$String(name316, separator321);
                panda$core$MutableString$append$panda$core$String(name316, ((org$pandalanguage$pandac$Symbol*) resolved338)->name);
                separator321 = &$s341;
            }
            $l333:;
            int64_t $tmp343 = $tmp328 - i325.value;
            if ($tmp329) goto $l344; else goto $l345;
            $l344:;
            if ((uint64_t) $tmp343 >= 1) goto $l342; else goto $l332;
            $l345:;
            if ((uint64_t) $tmp343 > 1) goto $l342; else goto $l332;
            $l342:;
            i325.value += 1;
            goto $l330;
            $l332:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp348, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name316, $tmp348);
            org$pandalanguage$pandac$Type* $tmp350 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp350->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp350->refCount.value = 1;
            panda$core$String* $tmp352 = panda$core$MutableString$finish$R$panda$core$String(name316);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp350, $tmp352, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes310), ((panda$core$Bit) { true }));
            result349 = $tmp350;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result349->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp354 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp353));
                panda$core$Bit $tmp355 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp354, result349);
                panda$core$Bit $tmp356 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp355);
                if ($tmp356.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result349;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp357 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp357;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old358;
    panda$collections$Iterator* p$Iter359;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p371;
    org$pandalanguage$pandac$Type* resolved376;
    panda$collections$Iterator* rawS$Iter378;
    org$pandalanguage$pandac$Type* rawS390;
    org$pandalanguage$pandac$Type* s395;
    org$pandalanguage$pandac$ClassDecl* sClass397;
    panda$collections$Iterator* m$Iter444;
    org$pandalanguage$pandac$MethodDecl* m456;
    panda$collections$Iterator* intf$Iter467;
    org$pandalanguage$pandac$Type* intf479;
    panda$collections$Iterator* p$Iter485;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p497;
    org$pandalanguage$pandac$ClassDecl* cl502;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old358 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp360 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp360 = $tmp360->next;
        }
        $fn362 $tmp361 = $tmp360->methods[0];
        panda$collections$Iterator* $tmp363 = $tmp361(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter359 = $tmp363;
        $l364:;
        ITable* $tmp366 = p$Iter359->$class->itable;
        while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp366 = $tmp366->next;
        }
        $fn368 $tmp367 = $tmp366->methods[0];
        panda$core$Bit $tmp369 = $tmp367(p$Iter359);
        panda$core$Bit $tmp370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp369);
        if (!$tmp370.value) goto $l365;
        {
            ITable* $tmp372 = p$Iter359->$class->itable;
            while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp372 = $tmp372->next;
            }
            $fn374 $tmp373 = $tmp372->methods[1];
            panda$core$Object* $tmp375 = $tmp373(p$Iter359);
            p371 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp375);
            org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p371->bound, ((panda$core$Bit) { false }));
            resolved376 = $tmp377;
            if (((panda$core$Bit) { resolved376 != NULL }).value) {
            {
                p371->bound = resolved376;
            }
            }
        }
        goto $l364;
        $l365:;
    }
    {
        ITable* $tmp379 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp379 = $tmp379->next;
        }
        $fn381 $tmp380 = $tmp379->methods[0];
        panda$collections$Iterator* $tmp382 = $tmp380(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter378 = $tmp382;
        $l383:;
        ITable* $tmp385 = rawS$Iter378->$class->itable;
        while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp385 = $tmp385->next;
        }
        $fn387 $tmp386 = $tmp385->methods[0];
        panda$core$Bit $tmp388 = $tmp386(rawS$Iter378);
        panda$core$Bit $tmp389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp388);
        if (!$tmp389.value) goto $l384;
        {
            ITable* $tmp391 = rawS$Iter378->$class->itable;
            while ($tmp391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp391 = $tmp391->next;
            }
            $fn393 $tmp392 = $tmp391->methods[1];
            panda$core$Object* $tmp394 = $tmp392(rawS$Iter378);
            rawS390 = ((org$pandalanguage$pandac$Type*) $tmp394);
            org$pandalanguage$pandac$Type* $tmp396 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS390, ((panda$core$Bit) { false }));
            s395 = $tmp396;
            if (((panda$core$Bit) { s395 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp398 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s395);
                sClass397 = $tmp398;
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, sClass397);
                if (((panda$core$Bit) { sClass397 != NULL }).value) {
                {
                    panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass397->classKind.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp399.value) {
                    {
                        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind.$rawValue, ((panda$core$Int64) { 1 }));
                        if ($tmp400.value) {
                        {
                            panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s401, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s403);
                            panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s405, ((org$pandalanguage$pandac$Symbol*) s395)->name);
                            panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s407);
                            panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, $tmp408);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s395)->position, $tmp409);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s395;
                            panda$core$Int64 $tmp410 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp411 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp410, ((panda$core$Int64) { 0 }));
                            if ($tmp411.value) {
                            {
                                panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s412, ((panda$core$Object*) s395));
                                panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
                                panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s417);
                                panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, &$s419);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s395)->position, $tmp420);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s421, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s423);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s395)->position, $tmp424);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass397->classKind.$rawValue, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp425.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s395));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l383;
        $l384:;
    }
    bool $tmp426 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp426) goto $l427;
    panda$core$Bit $tmp429 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s428);
    $tmp426 = $tmp429.value;
    $l427:;
    panda$core$Bit $tmp430 = { $tmp426 };
    if ($tmp430.value) {
    {
        org$pandalanguage$pandac$Type* $tmp431 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp431;
    }
    }
    bool $tmp433 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp433) goto $l434;
    panda$core$Bit $tmp435 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp435);
    $tmp433 = $tmp436.value;
    $l434:;
    panda$core$Bit $tmp437 = { $tmp433 };
    bool $tmp432 = $tmp437.value;
    if (!$tmp432) goto $l438;
    panda$core$Bit $tmp440 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s439);
    $tmp432 = $tmp440.value;
    $l438:;
    panda$core$Bit $tmp441 = { $tmp432 };
    if ($tmp441.value) {
    {
        panda$core$Int64 $tmp442 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp443 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp442);
        p_cl->annotations->flags = $tmp443;
        {
            ITable* $tmp445 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp445 = $tmp445->next;
            }
            $fn447 $tmp446 = $tmp445->methods[0];
            panda$collections$Iterator* $tmp448 = $tmp446(((panda$collections$Iterable*) p_cl->methods));
            m$Iter444 = $tmp448;
            $l449:;
            ITable* $tmp451 = m$Iter444->$class->itable;
            while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp451 = $tmp451->next;
            }
            $fn453 $tmp452 = $tmp451->methods[0];
            panda$core$Bit $tmp454 = $tmp452(m$Iter444);
            panda$core$Bit $tmp455 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp454);
            if (!$tmp455.value) goto $l450;
            {
                ITable* $tmp457 = m$Iter444->$class->itable;
                while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp457 = $tmp457->next;
                }
                $fn459 $tmp458 = $tmp457->methods[1];
                panda$core$Object* $tmp460 = $tmp458(m$Iter444);
                m456 = ((org$pandalanguage$pandac$MethodDecl*) $tmp460);
                panda$core$Int64 $tmp461 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp462 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m456->annotations->flags, $tmp461);
                m456->annotations->flags = $tmp462;
                panda$core$Bit $tmp463 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self->scanner, m456->annotations, m456->body);
                if ($tmp463.value) {
                {
                    panda$core$Int64 $tmp464 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp465 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m456->annotations->flags, $tmp464);
                    m456->annotations->flags = $tmp465;
                }
                }
            }
            goto $l449;
            $l450:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp466 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp466, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp468 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp468 = $tmp468->next;
        }
        $fn470 $tmp469 = $tmp468->methods[0];
        panda$collections$Iterator* $tmp471 = $tmp469(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter467 = $tmp471;
        $l472:;
        ITable* $tmp474 = intf$Iter467->$class->itable;
        while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp474 = $tmp474->next;
        }
        $fn476 $tmp475 = $tmp474->methods[0];
        panda$core$Bit $tmp477 = $tmp475(intf$Iter467);
        panda$core$Bit $tmp478 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp477);
        if (!$tmp478.value) goto $l473;
        {
            ITable* $tmp480 = intf$Iter467->$class->itable;
            while ($tmp480->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp480 = $tmp480->next;
            }
            $fn482 $tmp481 = $tmp480->methods[1];
            panda$core$Object* $tmp483 = $tmp481(intf$Iter467);
            intf479 = ((org$pandalanguage$pandac$Type*) $tmp483);
            org$pandalanguage$pandac$ClassDecl* $tmp484 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf479);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp484, intf479);
        }
        goto $l472;
        $l473:;
    }
    {
        ITable* $tmp486 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp486 = $tmp486->next;
        }
        $fn488 $tmp487 = $tmp486->methods[0];
        panda$collections$Iterator* $tmp489 = $tmp487(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter485 = $tmp489;
        $l490:;
        ITable* $tmp492 = p$Iter485->$class->itable;
        while ($tmp492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp492 = $tmp492->next;
        }
        $fn494 $tmp493 = $tmp492->methods[0];
        panda$core$Bit $tmp495 = $tmp493(p$Iter485);
        panda$core$Bit $tmp496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp495);
        if (!$tmp496.value) goto $l491;
        {
            ITable* $tmp498 = p$Iter485->$class->itable;
            while ($tmp498->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp498 = $tmp498->next;
            }
            $fn500 $tmp499 = $tmp498->methods[1];
            panda$core$Object* $tmp501 = $tmp499(p$Iter485);
            p497 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp501);
            org$pandalanguage$pandac$ClassDecl* $tmp503 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p497->bound);
            cl502 = $tmp503;
            if (((panda$core$Bit) { cl502 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl502)->position, cl502, p497->bound);
            }
            }
        }
        goto $l490;
        $l491:;
    }
    self->symbolTable = old358;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old504;
    panda$collections$Iterator* p$Iter505;
    org$pandalanguage$pandac$MethodDecl$Parameter* p517;
    org$pandalanguage$pandac$MethodDecl* overridden525;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old504 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp506 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp506 = $tmp506->next;
        }
        $fn508 $tmp507 = $tmp506->methods[0];
        panda$collections$Iterator* $tmp509 = $tmp507(((panda$collections$Iterable*) p_m->parameters));
        p$Iter505 = $tmp509;
        $l510:;
        ITable* $tmp512 = p$Iter505->$class->itable;
        while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp512 = $tmp512->next;
        }
        $fn514 $tmp513 = $tmp512->methods[0];
        panda$core$Bit $tmp515 = $tmp513(p$Iter505);
        panda$core$Bit $tmp516 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp515);
        if (!$tmp516.value) goto $l511;
        {
            ITable* $tmp518 = p$Iter505->$class->itable;
            while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp518 = $tmp518->next;
            }
            $fn520 $tmp519 = $tmp518->methods[1];
            panda$core$Object* $tmp521 = $tmp519(p$Iter505);
            p517 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp521);
            org$pandalanguage$pandac$Type* $tmp522 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p517->type);
            p517->type = $tmp522;
        }
        goto $l510;
        $l511:;
    }
    org$pandalanguage$pandac$Type* $tmp523 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp523;
    p_m->resolved = ((panda$core$Bit) { true });
    panda$core$Bit $tmp524 = panda$core$Bit$$NOT$R$panda$core$Bit(p_m->owner->external);
    if ($tmp524.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp526 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
        overridden525 = $tmp526;
        if (((panda$core$Bit) { overridden525 != NULL }).value) {
        {
            panda$core$Bit $tmp527 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
            panda$core$Bit $tmp528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp527);
            if ($tmp528.value) {
            {
                panda$core$String* $tmp529 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp530 = panda$core$String$convert$R$panda$core$String($tmp529);
                panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
                panda$core$String* $tmp533 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden525);
                panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, $tmp533);
                panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
                panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp538);
            }
            }
            panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            bool $tmp539 = $tmp540.value;
            if (!$tmp539) goto $l541;
            panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden525->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
            $tmp539 = $tmp542.value;
            $l541:;
            panda$core$Bit $tmp543 = { $tmp539 };
            if ($tmp543.value) {
            {
                panda$core$String* $tmp544 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp545 = panda$core$String$convert$R$panda$core$String($tmp544);
                panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s546);
                panda$core$String* $tmp548 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden525);
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
            panda$core$String* $tmp555 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp556 = panda$core$String$convert$R$panda$core$String($tmp555);
            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s557);
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp560);
        }
        }
        }
    }
    }
    self->symbolTable = old504;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old561;
    org$pandalanguage$pandac$Type* resolved564;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old561 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp562 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp563 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp562);
    if ($tmp563.value) {
    {
        org$pandalanguage$pandac$Type* $tmp565 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved564 = $tmp565;
        if (((panda$core$Bit) { resolved564 != NULL }).value) {
        {
            p_f->type = resolved564;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp566 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp566, p_f->type);
                p_f->value = $tmp567;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old561;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s568);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old561;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp569 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp569;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old561;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp570 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp570;
    org$pandalanguage$pandac$IRNode* $tmp571 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp571;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old561;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ChoiceEntry* p_c) {
    org$pandalanguage$pandac$SymbolTable* old574;
    panda$core$Range$LTpanda$core$Int64$GT $tmp575;
    if (p_c->resolved.value) {
    {
        return;
    }
    }
    p_c->resolved = ((panda$core$Bit) { true });
    panda$core$Int64 $tmp572 = panda$collections$Array$get_count$R$panda$core$Int64(p_c->fields);
    panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp572, ((panda$core$Int64) { 0 }));
    if ($tmp573.value) {
    {
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_c->owner));
    old574 = self->symbolTable;
    self->symbolTable = p_c->owner->symbolTable;
    panda$core$Int64 $tmp576 = panda$collections$Array$get_count$R$panda$core$Int64(p_c->fields);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp575, ((panda$core$Int64) { 0 }), $tmp576, ((panda$core$Bit) { false }));
    int64_t $tmp578 = $tmp575.min.value;
    panda$core$Int64 i577 = { $tmp578 };
    int64_t $tmp580 = $tmp575.max.value;
    bool $tmp581 = $tmp575.inclusive.value;
    if ($tmp581) goto $l588; else goto $l589;
    $l588:;
    if ($tmp578 <= $tmp580) goto $l582; else goto $l584;
    $l589:;
    if ($tmp578 < $tmp580) goto $l582; else goto $l584;
    $l582:;
    {
        panda$core$Object* $tmp590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_c->fields, i577);
        org$pandalanguage$pandac$Type* $tmp591 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp590));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_c->fields, i577, ((panda$core$Object*) $tmp591));
    }
    $l585:;
    int64_t $tmp593 = $tmp580 - i577.value;
    if ($tmp581) goto $l594; else goto $l595;
    $l594:;
    if ((uint64_t) $tmp593 >= 1) goto $l592; else goto $l584;
    $l595:;
    if ((uint64_t) $tmp593 > 1) goto $l592; else goto $l584;
    $l592:;
    i577.value += 1;
    goto $l582;
    $l584:;
    self->symbolTable = old574;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods599;
    panda$collections$ImmutableArray* args601;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp602;
    panda$collections$Array* best604;
    panda$core$Int64$nullable bestCost607;
    panda$collections$Iterator* m$Iter608;
    org$pandalanguage$pandac$MethodRef* m620;
    panda$core$Int64$nullable cost625;
    org$pandalanguage$pandac$IRNode* callTarget635;
    org$pandalanguage$pandac$IRNode* result641;
    panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp598.value);
    panda$core$Object* $tmp600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods599 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp600)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp602, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$ImmutableArray* $tmp603 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp602);
    args601 = $tmp603;
    panda$collections$Array* $tmp605 = (panda$collections$Array*) malloc(40);
    $tmp605->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp605->refCount.value = 1;
    panda$collections$Array$init($tmp605);
    best604 = $tmp605;
    bestCost607 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp609 = ((panda$collections$Iterable*) methods599)->$class->itable;
        while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp609 = $tmp609->next;
        }
        $fn611 $tmp610 = $tmp609->methods[0];
        panda$collections$Iterator* $tmp612 = $tmp610(((panda$collections$Iterable*) methods599));
        m$Iter608 = $tmp612;
        $l613:;
        ITable* $tmp615 = m$Iter608->$class->itable;
        while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp615 = $tmp615->next;
        }
        $fn617 $tmp616 = $tmp615->methods[0];
        panda$core$Bit $tmp618 = $tmp616(m$Iter608);
        panda$core$Bit $tmp619 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp618);
        if (!$tmp619.value) goto $l614;
        {
            ITable* $tmp621 = m$Iter608->$class->itable;
            while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp621 = $tmp621->next;
            }
            $fn623 $tmp622 = $tmp621->methods[1];
            panda$core$Object* $tmp624 = $tmp622(m$Iter608);
            m620 = ((org$pandalanguage$pandac$MethodRef*) $tmp624);
            panda$core$Int64$nullable $tmp626 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m620, ((panda$collections$ListView*) args601), p_target);
            cost625 = $tmp626;
            if (((panda$core$Bit) { !cost625.nonnull }).value) {
            {
                goto $l613;
            }
            }
            if (((panda$core$Bit) { !bestCost607.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best604, ((panda$core$Object*) m620));
                bestCost607 = cost625;
                goto $l613;
            }
            }
            panda$core$Bit $tmp627 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost625.value), ((panda$core$Int64) bestCost607.value));
            if ($tmp627.value) {
            {
                panda$collections$Array$clear(best604);
                bestCost607 = cost625;
            }
            }
            panda$core$Bit $tmp631;
            if (((panda$core$Bit) { cost625.nonnull }).value) goto $l628; else goto $l629;
            $l628:;
            panda$core$Bit $tmp632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost625.value), ((panda$core$Int64) bestCost607.value));
            $tmp631 = $tmp632;
            goto $l630;
            $l629:;
            $tmp631 = ((panda$core$Bit) { false });
            goto $l630;
            $l630:;
            if ($tmp631.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best604, ((panda$core$Object*) m620));
            }
            }
        }
        goto $l613;
        $l614:;
    }
    panda$core$Int64 $tmp633 = panda$collections$Array$get_count$R$panda$core$Int64(best604);
    panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp633, ((panda$core$Int64) { 1 }));
    if ($tmp634.value) {
    {
        panda$core$Object* $tmp636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp637 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp636)->children);
        panda$core$Bit $tmp638 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp637, ((panda$core$Int64) { 0 }));
        if ($tmp638.value) {
        {
            panda$core$Object* $tmp639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp640 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp639)->children, ((panda$core$Int64) { 0 }));
            callTarget635 = ((org$pandalanguage$pandac$IRNode*) $tmp640);
        }
        }
        else {
        {
            callTarget635 = NULL;
        }
        }
        panda$core$Object* $tmp642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best604, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp643 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget635, ((org$pandalanguage$pandac$MethodRef*) $tmp642), ((panda$collections$ListView*) args601));
        result641 = $tmp643;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp644 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result641, p_target);
            result641 = $tmp644;
        }
        }
        return result641;
    }
    }
    org$pandalanguage$pandac$Position$wrapper* $tmp646;
    $tmp646 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
    $tmp646->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    $tmp646->refCount = 1;
    $tmp646->value = p_expr->position;
    panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s645, ((panda$core$Object*) $tmp646));
    panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, &$s648);
    ITable* $tmp650 = methods599->$class->itable;
    while ($tmp650->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp650 = $tmp650->next;
    }
    $fn652 $tmp651 = $tmp650->methods[0];
    panda$core$Object* $tmp653 = $tmp651(methods599, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp649, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp653)->value)->name);
    panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp654, &$s655);
    panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp656, ((panda$core$Object*) best604));
    panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s658);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp659));
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s660);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp661 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp661;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s662);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp663 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp664 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp663);
            return $tmp664;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp665 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp665) goto $l666;
    panda$core$Bit $tmp668 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s667);
    $tmp665 = $tmp668.value;
    $l666:;
    panda$core$Bit $tmp669 = { $tmp665 };
    return $tmp669;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result670;
    org$pandalanguage$pandac$ClassDecl* s678;
    panda$collections$Iterator* f$Iter681;
    org$pandalanguage$pandac$FieldDecl* f693;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp671 = (panda$collections$Array*) malloc(40);
    $tmp671->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp671->refCount.value = 1;
    panda$collections$Array$init($tmp671);
    result670 = $tmp671;
    panda$core$Bit $tmp674 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp675 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp674);
    bool $tmp673 = $tmp675.value;
    if (!$tmp673) goto $l676;
    $tmp673 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l676:;
    panda$core$Bit $tmp677 = { $tmp673 };
    if ($tmp677.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp679 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s678 = $tmp679;
        if (((panda$core$Bit) { s678 != NULL }).value) {
        {
            panda$collections$ListView* $tmp680 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s678);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result670, ((panda$collections$CollectionView*) $tmp680));
        }
        }
    }
    }
    {
        ITable* $tmp682 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp682->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp682 = $tmp682->next;
        }
        $fn684 $tmp683 = $tmp682->methods[0];
        panda$collections$Iterator* $tmp685 = $tmp683(((panda$collections$Iterable*) p_cl->fields));
        f$Iter681 = $tmp685;
        $l686:;
        ITable* $tmp688 = f$Iter681->$class->itable;
        while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp688 = $tmp688->next;
        }
        $fn690 $tmp689 = $tmp688->methods[0];
        panda$core$Bit $tmp691 = $tmp689(f$Iter681);
        panda$core$Bit $tmp692 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp691);
        if (!$tmp692.value) goto $l687;
        {
            ITable* $tmp694 = f$Iter681->$class->itable;
            while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp694 = $tmp694->next;
            }
            $fn696 $tmp695 = $tmp694->methods[1];
            panda$core$Object* $tmp697 = $tmp695(f$Iter681);
            f693 = ((org$pandalanguage$pandac$FieldDecl*) $tmp697);
            panda$core$Bit $tmp698 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f693->annotations);
            panda$core$Bit $tmp699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp698);
            if ($tmp699.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result670, ((panda$core$Object*) f693));
            }
            }
        }
        goto $l686;
        $l687:;
    }
    return ((panda$collections$ListView*) result670);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result700;
    panda$core$Bit $tmp702;
    panda$core$Object* $tmp701 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result700 = ($tmp701 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp701)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result700.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp702, p_f);
        result700 = ((panda$core$Bit$nullable) { $tmp702, true });
        panda$core$Bit$wrapper* $tmp703;
        $tmp703 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp703->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp703->refCount = 1;
        $tmp703->value = ((panda$core$Bit) result700.value);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) $tmp703));
    }
    }
    return ((panda$core$Bit) result700.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result704;
    panda$core$String* suffix706;
    panda$core$Bit found712;
    panda$collections$Iterator* dir$Iter713;
    panda$io$File* dir725;
    panda$io$File* f730;
    panda$core$String$Index$nullable index734;
    org$pandalanguage$pandac$ClassDecl* parent737;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp738;
    panda$core$Object* $tmp705 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result704 = ((org$pandalanguage$pandac$ClassDecl*) $tmp705);
    if (((panda$core$Bit) { result704 == NULL }).value) {
    {
        panda$core$String* $tmp709 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s707, &$s708);
        panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp709, &$s710);
        suffix706 = $tmp711;
        found712 = ((panda$core$Bit) { false });
        {
            ITable* $tmp714 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp714 = $tmp714->next;
            }
            $fn716 $tmp715 = $tmp714->methods[0];
            panda$collections$Iterator* $tmp717 = $tmp715(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter713 = $tmp717;
            $l718:;
            ITable* $tmp720 = dir$Iter713->$class->itable;
            while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp720 = $tmp720->next;
            }
            $fn722 $tmp721 = $tmp720->methods[0];
            panda$core$Bit $tmp723 = $tmp721(dir$Iter713);
            panda$core$Bit $tmp724 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp723);
            if (!$tmp724.value) goto $l719;
            {
                ITable* $tmp726 = dir$Iter713->$class->itable;
                while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp726 = $tmp726->next;
                }
                $fn728 $tmp727 = $tmp726->methods[1];
                panda$core$Object* $tmp729 = $tmp727(dir$Iter713);
                dir725 = ((panda$io$File*) $tmp729);
                panda$io$File* $tmp731 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir725, suffix706);
                f730 = $tmp731;
                panda$core$Bit $tmp732 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f730);
                if ($tmp732.value) {
                {
                    found712 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f730);
                    panda$core$Object* $tmp733 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result704 = ((org$pandalanguage$pandac$ClassDecl*) $tmp733);
                }
                }
            }
            goto $l718;
            $l719:;
        }
    }
    }
    if (((panda$core$Bit) { result704 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp736 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s735);
        index734 = $tmp736;
        if (((panda$core$Bit) { index734.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp738, ((panda$core$String$Index$nullable) { .nonnull = false }), index734, ((panda$core$Bit) { false }));
            panda$core$String* $tmp739 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp738);
            org$pandalanguage$pandac$ClassDecl* $tmp740 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp739);
            parent737 = $tmp740;
            if (((panda$core$Bit) { parent737 != NULL }).value) {
            {
                panda$core$Object* $tmp741 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result704 = ((org$pandalanguage$pandac$ClassDecl*) $tmp741);
            }
            }
        }
        }
    }
    }
    return result704;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result742;
    panda$core$String* suffix744;
    panda$core$Bit found750;
    panda$collections$Iterator* dir$Iter751;
    panda$io$File* dir763;
    panda$io$File* f768;
    panda$core$Int64 oldErrorCount771;
    org$pandalanguage$pandac$Position $tmp777;
    panda$core$Object* $tmp743 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result742 = ((org$pandalanguage$pandac$ClassDecl*) $tmp743);
    if (((panda$core$Bit) { result742 == NULL }).value) {
    {
        panda$core$String* $tmp747 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s745, &$s746);
        panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, &$s748);
        suffix744 = $tmp749;
        found750 = ((panda$core$Bit) { false });
        {
            ITable* $tmp752 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp752->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp752 = $tmp752->next;
            }
            $fn754 $tmp753 = $tmp752->methods[0];
            panda$collections$Iterator* $tmp755 = $tmp753(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter751 = $tmp755;
            $l756:;
            ITable* $tmp758 = dir$Iter751->$class->itable;
            while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp758 = $tmp758->next;
            }
            $fn760 $tmp759 = $tmp758->methods[0];
            panda$core$Bit $tmp761 = $tmp759(dir$Iter751);
            panda$core$Bit $tmp762 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp761);
            if (!$tmp762.value) goto $l757;
            {
                ITable* $tmp764 = dir$Iter751->$class->itable;
                while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp764 = $tmp764->next;
                }
                $fn766 $tmp765 = $tmp764->methods[1];
                panda$core$Object* $tmp767 = $tmp765(dir$Iter751);
                dir763 = ((panda$io$File*) $tmp767);
                panda$io$File* $tmp769 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir763, suffix744);
                f768 = $tmp769;
                panda$core$Bit $tmp770 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f768);
                if ($tmp770.value) {
                {
                    found750 = ((panda$core$Bit) { true });
                    oldErrorCount771 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f768);
                    panda$core$Object* $tmp772 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result742 = ((org$pandalanguage$pandac$ClassDecl*) $tmp772);
                    bool $tmp773 = ((panda$core$Bit) { result742 == NULL }).value;
                    if (!$tmp773) goto $l774;
                    panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount771);
                    $tmp773 = $tmp775.value;
                    $l774:;
                    panda$core$Bit $tmp776 = { $tmp773 };
                    if ($tmp776.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp777, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s778, ((panda$core$Object*) f768));
                        panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, &$s780);
                        panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, p_fullName);
                        panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp782, &$s783);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f768, $tmp777, $tmp784);
                    }
                    }
                }
                }
            }
            goto $l756;
            $l757:;
        }
        panda$core$Bit $tmp785 = panda$core$Bit$$NOT$R$panda$core$Bit(found750);
        if ($tmp785.value) {
        {
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s786, suffix744);
            panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, &$s788);
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp789, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s791);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp792);
        }
        }
    }
    }
    return result742;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type793;
    org$pandalanguage$pandac$ClassDecl* result800;
    org$pandalanguage$pandac$Annotations* annotations802;
    panda$collections$Array* supertypes808;
    panda$collections$Iterator* intf$Iter812;
    org$pandalanguage$pandac$Type* intf824;
    panda$collections$HashMap* aliases830;
    panda$core$Range$LTpanda$core$Int64$GT $tmp833;
    panda$collections$Iterator* m$Iter868;
    org$pandalanguage$pandac$MethodDecl* m880;
    panda$collections$Array* parameters885;
    panda$collections$Iterator* p$Iter888;
    org$pandalanguage$pandac$MethodDecl$Parameter* p900;
    org$pandalanguage$pandac$MethodDecl* clone908;
    panda$collections$Iterator* f$Iter912;
    org$pandalanguage$pandac$FieldDecl* f924;
    org$pandalanguage$pandac$FieldDecl* clone929;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    org$pandalanguage$pandac$Type* $tmp794 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type793 = $tmp794;
    panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type793->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp795.value) {
    {
        panda$core$Object* $tmp796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type793->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp797 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp796));
        return $tmp797;
    }
    }
    panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type793->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp798.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type793->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp799.value);
    panda$core$Object* $tmp801 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type793)->name));
    result800 = ((org$pandalanguage$pandac$ClassDecl*) $tmp801);
    if (((panda$core$Bit) { result800 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp803 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp803->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp803->refCount.value = 1;
        panda$core$Int64 $tmp805 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp806 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp805);
        panda$core$Int64 $tmp807 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp806);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp803, $tmp807);
        annotations802 = $tmp803;
        panda$collections$Array* $tmp809 = (panda$collections$Array*) malloc(40);
        $tmp809->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp809->refCount.value = 1;
        panda$collections$Array$init($tmp809);
        supertypes808 = $tmp809;
        org$pandalanguage$pandac$Type* $tmp811 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes808, ((panda$core$Object*) $tmp811));
        {
            ITable* $tmp813 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp813 = $tmp813->next;
            }
            $fn815 $tmp814 = $tmp813->methods[0];
            panda$collections$Iterator* $tmp816 = $tmp814(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter812 = $tmp816;
            $l817:;
            ITable* $tmp819 = intf$Iter812->$class->itable;
            while ($tmp819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp819 = $tmp819->next;
            }
            $fn821 $tmp820 = $tmp819->methods[0];
            panda$core$Bit $tmp822 = $tmp820(intf$Iter812);
            panda$core$Bit $tmp823 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp822);
            if (!$tmp823.value) goto $l818;
            {
                ITable* $tmp825 = intf$Iter812->$class->itable;
                while ($tmp825->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp825 = $tmp825->next;
                }
                $fn827 $tmp826 = $tmp825->methods[1];
                panda$core$Object* $tmp828 = $tmp826(intf$Iter812);
                intf824 = ((org$pandalanguage$pandac$Type*) $tmp828);
                org$pandalanguage$pandac$Type* $tmp829 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, intf824);
                panda$collections$Array$add$panda$collections$Array$T(supertypes808, ((panda$core$Object*) $tmp829));
            }
            goto $l817;
            $l818:;
        }
        panda$collections$HashMap* $tmp831 = (panda$collections$HashMap*) malloc(56);
        $tmp831->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp831->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp831, p_cl->aliases);
        aliases830 = $tmp831;
        ITable* $tmp834 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp834->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp834 = $tmp834->next;
        }
        $fn836 $tmp835 = $tmp834->methods[0];
        panda$core$Int64 $tmp837 = $tmp835(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp833, ((panda$core$Int64) { 0 }), $tmp837, ((panda$core$Bit) { false }));
        int64_t $tmp839 = $tmp833.min.value;
        panda$core$Int64 i838 = { $tmp839 };
        int64_t $tmp841 = $tmp833.max.value;
        bool $tmp842 = $tmp833.inclusive.value;
        if ($tmp842) goto $l849; else goto $l850;
        $l849:;
        if ($tmp839 <= $tmp841) goto $l843; else goto $l845;
        $l850:;
        if ($tmp839 < $tmp841) goto $l843; else goto $l845;
        $l843:;
        {
            ITable* $tmp851 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp851->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp851 = $tmp851->next;
            }
            $fn853 $tmp852 = $tmp851->methods[0];
            panda$core$Object* $tmp854 = $tmp852(((panda$collections$ListView*) p_cl->parameters), i838);
            panda$core$Int64 $tmp855 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i838, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type793->subtypes, $tmp855);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases830, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp854))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp856))->name));
        }
        $l846:;
        int64_t $tmp858 = $tmp841 - i838.value;
        if ($tmp842) goto $l859; else goto $l860;
        $l859:;
        if ((uint64_t) $tmp858 >= 1) goto $l857; else goto $l845;
        $l860:;
        if ((uint64_t) $tmp858 > 1) goto $l857; else goto $l845;
        $l857:;
        i838.value += 1;
        goto $l843;
        $l845:;
        org$pandalanguage$pandac$ClassDecl* $tmp863 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
        $tmp863->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp863->refCount.value = 1;
        panda$collections$Array* $tmp865 = (panda$collections$Array*) malloc(40);
        $tmp865->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp865->refCount.value = 1;
        panda$collections$Array$init($tmp865);
        panda$core$Object* $tmp867 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp863, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases830), p_cl->doccomment, annotations802, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type793)->name, ((panda$collections$ListView*) supertypes808), $tmp865, ((org$pandalanguage$pandac$SymbolTable*) $tmp867));
        result800 = $tmp863;
        result800->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp869 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp869 = $tmp869->next;
            }
            $fn871 $tmp870 = $tmp869->methods[0];
            panda$collections$Iterator* $tmp872 = $tmp870(((panda$collections$Iterable*) p_cl->methods));
            m$Iter868 = $tmp872;
            $l873:;
            ITable* $tmp875 = m$Iter868->$class->itable;
            while ($tmp875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp875 = $tmp875->next;
            }
            $fn877 $tmp876 = $tmp875->methods[0];
            panda$core$Bit $tmp878 = $tmp876(m$Iter868);
            panda$core$Bit $tmp879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp878);
            if (!$tmp879.value) goto $l874;
            {
                ITable* $tmp881 = m$Iter868->$class->itable;
                while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp881 = $tmp881->next;
                }
                $fn883 $tmp882 = $tmp881->methods[1];
                panda$core$Object* $tmp884 = $tmp882(m$Iter868);
                m880 = ((org$pandalanguage$pandac$MethodDecl*) $tmp884);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m880);
                panda$collections$Array* $tmp886 = (panda$collections$Array*) malloc(40);
                $tmp886->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp886->refCount.value = 1;
                panda$collections$Array$init($tmp886);
                parameters885 = $tmp886;
                {
                    ITable* $tmp889 = ((panda$collections$Iterable*) m880->parameters)->$class->itable;
                    while ($tmp889->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp889 = $tmp889->next;
                    }
                    $fn891 $tmp890 = $tmp889->methods[0];
                    panda$collections$Iterator* $tmp892 = $tmp890(((panda$collections$Iterable*) m880->parameters));
                    p$Iter888 = $tmp892;
                    $l893:;
                    ITable* $tmp895 = p$Iter888->$class->itable;
                    while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp895 = $tmp895->next;
                    }
                    $fn897 $tmp896 = $tmp895->methods[0];
                    panda$core$Bit $tmp898 = $tmp896(p$Iter888);
                    panda$core$Bit $tmp899 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp898);
                    if (!$tmp899.value) goto $l894;
                    {
                        ITable* $tmp901 = p$Iter888->$class->itable;
                        while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp901 = $tmp901->next;
                        }
                        $fn903 $tmp902 = $tmp901->methods[1];
                        panda$core$Object* $tmp904 = $tmp902(p$Iter888);
                        p900 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp904);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp905 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp905->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp905->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp907 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, p900->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp905, p900->name, $tmp907);
                        panda$collections$Array$add$panda$collections$Array$T(parameters885, ((panda$core$Object*) $tmp905));
                    }
                    goto $l893;
                    $l894:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp909 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp909->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp909->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp911 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, m880->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp909, result800, ((org$pandalanguage$pandac$Symbol*) m880)->position, m880->doccomment, m880->annotations, m880->methodKind, ((org$pandalanguage$pandac$Symbol*) m880)->name, parameters885, $tmp911, m880->body);
                clone908 = $tmp909;
                panda$collections$Array$add$panda$collections$Array$T(result800->methods, ((panda$core$Object*) clone908));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result800->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone908));
            }
            goto $l873;
            $l874:;
        }
        {
            ITable* $tmp913 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp913 = $tmp913->next;
            }
            $fn915 $tmp914 = $tmp913->methods[0];
            panda$collections$Iterator* $tmp916 = $tmp914(((panda$collections$Iterable*) p_cl->fields));
            f$Iter912 = $tmp916;
            $l917:;
            ITable* $tmp919 = f$Iter912->$class->itable;
            while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp919 = $tmp919->next;
            }
            $fn921 $tmp920 = $tmp919->methods[0];
            panda$core$Bit $tmp922 = $tmp920(f$Iter912);
            panda$core$Bit $tmp923 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp922);
            if (!$tmp923.value) goto $l918;
            {
                ITable* $tmp925 = f$Iter912->$class->itable;
                while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp925 = $tmp925->next;
                }
                $fn927 $tmp926 = $tmp925->methods[1];
                panda$core$Object* $tmp928 = $tmp926(f$Iter912);
                f924 = ((org$pandalanguage$pandac$FieldDecl*) $tmp928);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f924);
                org$pandalanguage$pandac$FieldDecl* $tmp930 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp930->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp930->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, f924->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp930, result800, ((org$pandalanguage$pandac$Symbol*) f924)->position, f924->doccomment, f924->annotations, f924->fieldKind, ((org$pandalanguage$pandac$Symbol*) f924)->name, $tmp932, f924->rawValue);
                clone929 = $tmp930;
                panda$collections$Array$add$panda$collections$Array$T(result800->fields, ((panda$core$Object*) clone929));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result800->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone929));
            }
            goto $l917;
            $l918:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result800)->name), ((panda$core$Object*) result800));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result800));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result800);
    }
    }
    return result800;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result933;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp934 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result933 = $tmp934;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp935 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp936 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp935));
            result933 = $tmp936;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp937 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp937;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp938 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result933->annotations);
    if ($tmp938.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp939 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result933, p_type);
        result933 = $tmp939;
    }
    }
    return result933;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl940;
    panda$collections$Set* result942;
    panda$collections$Iterator* intf$Iter947;
    org$pandalanguage$pandac$Type* intf959;
    org$pandalanguage$pandac$ClassDecl* $tmp941 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl940 = $tmp941;
    PANDA_ASSERT(((panda$core$Bit) { cl940 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl940);
    panda$collections$Set* $tmp943 = (panda$collections$Set*) malloc(24);
    $tmp943->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp943->refCount.value = 1;
    panda$collections$Set$init($tmp943);
    result942 = $tmp943;
    if (((panda$core$Bit) { cl940->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp945 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl940->rawSuper);
        panda$collections$Set* $tmp946 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp945);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result942, ((panda$collections$CollectionView*) $tmp946));
    }
    }
    {
        ITable* $tmp948 = ((panda$collections$Iterable*) cl940->rawInterfaces)->$class->itable;
        while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp948 = $tmp948->next;
        }
        $fn950 $tmp949 = $tmp948->methods[0];
        panda$collections$Iterator* $tmp951 = $tmp949(((panda$collections$Iterable*) cl940->rawInterfaces));
        intf$Iter947 = $tmp951;
        $l952:;
        ITable* $tmp954 = intf$Iter947->$class->itable;
        while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp954 = $tmp954->next;
        }
        $fn956 $tmp955 = $tmp954->methods[0];
        panda$core$Bit $tmp957 = $tmp955(intf$Iter947);
        panda$core$Bit $tmp958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp957);
        if (!$tmp958.value) goto $l953;
        {
            ITable* $tmp960 = intf$Iter947->$class->itable;
            while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp960 = $tmp960->next;
            }
            $fn962 $tmp961 = $tmp960->methods[1];
            panda$core$Object* $tmp963 = $tmp961(intf$Iter947);
            intf959 = ((org$pandalanguage$pandac$Type*) $tmp963);
            org$pandalanguage$pandac$Type* $tmp964 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf959);
            panda$collections$Set* $tmp965 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp964);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result942, ((panda$collections$CollectionView*) $tmp965));
        }
        goto $l952;
        $l953:;
    }
    panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl940->classKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp966.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result942, ((panda$collections$Key*) p_t));
    }
    }
    return result942;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp972;
    panda$core$Bit $tmp967 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp967.value);
    panda$core$Bit $tmp968 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp968.value);
    panda$core$Int64 $tmp969 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp970 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp971 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp969, $tmp970);
    if ($tmp971.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp973 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp972, ((panda$core$Int64) { 0 }), $tmp973, ((panda$core$Bit) { false }));
    int64_t $tmp975 = $tmp972.min.value;
    panda$core$Int64 i974 = { $tmp975 };
    int64_t $tmp977 = $tmp972.max.value;
    bool $tmp978 = $tmp972.inclusive.value;
    if ($tmp978) goto $l985; else goto $l986;
    $l985:;
    if ($tmp975 <= $tmp977) goto $l979; else goto $l981;
    $l986:;
    if ($tmp975 < $tmp977) goto $l979; else goto $l981;
    $l979:;
    {
        panda$core$Object* $tmp987 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i974);
        panda$core$Object* $tmp988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i974);
        panda$core$Bit $tmp989 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp987), ((org$pandalanguage$pandac$Type*) $tmp988));
        if ($tmp989.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l982:;
    int64_t $tmp991 = $tmp977 - i974.value;
    if ($tmp978) goto $l992; else goto $l993;
    $l992:;
    if ((uint64_t) $tmp991 >= 1) goto $l990; else goto $l981;
    $l993:;
    if ((uint64_t) $tmp991 > 1) goto $l990; else goto $l981;
    $l990:;
    i974.value += 1;
    goto $l979;
    $l981:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl996;
    panda$collections$Iterator* test$Iter998;
    org$pandalanguage$pandac$MethodDecl* test1010;
    panda$collections$Iterator* raw$Iter1023;
    org$pandalanguage$pandac$Type* raw1035;
    org$pandalanguage$pandac$MethodDecl* result1040;
    org$pandalanguage$pandac$ClassDecl* $tmp997 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl996 = $tmp997;
    PANDA_ASSERT(((panda$core$Bit) { cl996 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl996);
    {
        ITable* $tmp999 = ((panda$collections$Iterable*) cl996->methods)->$class->itable;
        while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp999 = $tmp999->next;
        }
        $fn1001 $tmp1000 = $tmp999->methods[0];
        panda$collections$Iterator* $tmp1002 = $tmp1000(((panda$collections$Iterable*) cl996->methods));
        test$Iter998 = $tmp1002;
        $l1003:;
        ITable* $tmp1005 = test$Iter998->$class->itable;
        while ($tmp1005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1005 = $tmp1005->next;
        }
        $fn1007 $tmp1006 = $tmp1005->methods[0];
        panda$core$Bit $tmp1008 = $tmp1006(test$Iter998);
        panda$core$Bit $tmp1009 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1008);
        if (!$tmp1009.value) goto $l1004;
        {
            ITable* $tmp1011 = test$Iter998->$class->itable;
            while ($tmp1011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1011 = $tmp1011->next;
            }
            $fn1013 $tmp1012 = $tmp1011->methods[1];
            panda$core$Object* $tmp1014 = $tmp1012(test$Iter998);
            test1010 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1014);
            panda$core$Bit $tmp1015 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test1010)->name, p_name);
            if ($tmp1015.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test1010);
                org$pandalanguage$pandac$Type* $tmp1016 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test1010);
                org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp1016);
                panda$core$Bit $tmp1018 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1017, p_methodType);
                if ($tmp1018.value) {
                {
                    return test1010;
                }
                }
            }
            }
        }
        goto $l1003;
        $l1004:;
    }
    bool $tmp1019 = p_checkInterfaces.value;
    if ($tmp1019) goto $l1020;
    panda$core$Bit $tmp1021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl996->classKind.$rawValue, ((panda$core$Int64) { 1 }));
    $tmp1019 = $tmp1021.value;
    $l1020:;
    panda$core$Bit $tmp1022 = { $tmp1019 };
    if ($tmp1022.value) {
    {
        {
            ITable* $tmp1024 = ((panda$collections$Iterable*) cl996->rawInterfaces)->$class->itable;
            while ($tmp1024->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1024 = $tmp1024->next;
            }
            $fn1026 $tmp1025 = $tmp1024->methods[0];
            panda$collections$Iterator* $tmp1027 = $tmp1025(((panda$collections$Iterable*) cl996->rawInterfaces));
            raw$Iter1023 = $tmp1027;
            $l1028:;
            ITable* $tmp1030 = raw$Iter1023->$class->itable;
            while ($tmp1030->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1030 = $tmp1030->next;
            }
            $fn1032 $tmp1031 = $tmp1030->methods[0];
            panda$core$Bit $tmp1033 = $tmp1031(raw$Iter1023);
            panda$core$Bit $tmp1034 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1033);
            if (!$tmp1034.value) goto $l1029;
            {
                ITable* $tmp1036 = raw$Iter1023->$class->itable;
                while ($tmp1036->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1036 = $tmp1036->next;
                }
                $fn1038 $tmp1037 = $tmp1036->methods[1];
                panda$core$Object* $tmp1039 = $tmp1037(raw$Iter1023);
                raw1035 = ((org$pandalanguage$pandac$Type*) $tmp1039);
                org$pandalanguage$pandac$Type* $tmp1041 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1035);
                org$pandalanguage$pandac$MethodDecl* $tmp1042 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1041, p_name, p_methodType, p_checkInterfaces);
                result1040 = $tmp1042;
                if (((panda$core$Bit) { result1040 != NULL }).value) {
                {
                    return result1040;
                }
                }
            }
            goto $l1028;
            $l1029:;
        }
    }
    }
    if (((panda$core$Bit) { cl996->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1043 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl996->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1044 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1043, p_name, p_methodType, p_checkInterfaces);
        return $tmp1044;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1046;
    org$pandalanguage$pandac$Type* owner1048;
    panda$collections$Iterator* raw$Iter1050;
    org$pandalanguage$pandac$Type* raw1062;
    org$pandalanguage$pandac$MethodDecl* result1067;
    org$pandalanguage$pandac$MethodDecl* result1070;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1045.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1047 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1046 = $tmp1047;
    org$pandalanguage$pandac$Type* $tmp1049 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1048 = $tmp1049;
    {
        ITable* $tmp1051 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1051->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1051 = $tmp1051->next;
        }
        $fn1053 $tmp1052 = $tmp1051->methods[0];
        panda$collections$Iterator* $tmp1054 = $tmp1052(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1050 = $tmp1054;
        $l1055:;
        ITable* $tmp1057 = raw$Iter1050->$class->itable;
        while ($tmp1057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1057 = $tmp1057->next;
        }
        $fn1059 $tmp1058 = $tmp1057->methods[0];
        panda$core$Bit $tmp1060 = $tmp1058(raw$Iter1050);
        panda$core$Bit $tmp1061 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1060);
        if (!$tmp1061.value) goto $l1056;
        {
            ITable* $tmp1063 = raw$Iter1050->$class->itable;
            while ($tmp1063->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1063 = $tmp1063->next;
            }
            $fn1065 $tmp1064 = $tmp1063->methods[1];
            panda$core$Object* $tmp1066 = $tmp1064(raw$Iter1050);
            raw1062 = ((org$pandalanguage$pandac$Type*) $tmp1066);
            org$pandalanguage$pandac$Type* $tmp1068 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1048, raw1062);
            org$pandalanguage$pandac$MethodDecl* $tmp1069 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1068, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1046, ((panda$core$Bit) { true }));
            result1067 = $tmp1069;
            if (((panda$core$Bit) { result1067 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1067;
                return result1067;
            }
            }
        }
        goto $l1055;
        $l1056:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1071 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1048, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1072 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1071, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1046, ((panda$core$Bit) { true }));
        result1070 = $tmp1072;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1070;
        return result1070;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1073;
    panda$collections$Array* result1075;
    panda$collections$Iterator* m$Iter1078;
    org$pandalanguage$pandac$MethodDecl* m1090;
    org$pandalanguage$pandac$MethodDecl* found1095;
    org$pandalanguage$pandac$ClassDecl* $tmp1074 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1073 = $tmp1074;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1073 != NULL }).value);
    panda$collections$Array* $tmp1076 = (panda$collections$Array*) malloc(40);
    $tmp1076->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1076->refCount.value = 1;
    panda$collections$Array$init($tmp1076);
    result1075 = $tmp1076;
    {
        ITable* $tmp1079 = ((panda$collections$Iterable*) intfClass1073->methods)->$class->itable;
        while ($tmp1079->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1079 = $tmp1079->next;
        }
        $fn1081 $tmp1080 = $tmp1079->methods[0];
        panda$collections$Iterator* $tmp1082 = $tmp1080(((panda$collections$Iterable*) intfClass1073->methods));
        m$Iter1078 = $tmp1082;
        $l1083:;
        ITable* $tmp1085 = m$Iter1078->$class->itable;
        while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1085 = $tmp1085->next;
        }
        $fn1087 $tmp1086 = $tmp1085->methods[0];
        panda$core$Bit $tmp1088 = $tmp1086(m$Iter1078);
        panda$core$Bit $tmp1089 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1088);
        if (!$tmp1089.value) goto $l1084;
        {
            ITable* $tmp1091 = m$Iter1078->$class->itable;
            while ($tmp1091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1091 = $tmp1091->next;
            }
            $fn1093 $tmp1092 = $tmp1091->methods[1];
            panda$core$Object* $tmp1094 = $tmp1092(m$Iter1078);
            m1090 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1094);
            org$pandalanguage$pandac$Type* $tmp1096 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1097 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1090);
            org$pandalanguage$pandac$Type* $tmp1098 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1097);
            org$pandalanguage$pandac$MethodDecl* $tmp1099 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1096, ((org$pandalanguage$pandac$Symbol*) m1090)->name, $tmp1098, ((panda$core$Bit) { false }));
            found1095 = $tmp1099;
            PANDA_ASSERT(((panda$core$Bit) { found1095 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1075, ((panda$core$Object*) found1095));
        }
        goto $l1083;
        $l1084:;
    }
    return ((panda$collections$ListView*) result1075);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1101;
    panda$collections$Iterator* rawIntf$Iter1104;
    org$pandalanguage$pandac$Type* rawIntf1116;
    org$pandalanguage$pandac$ClassDecl* intf1121;
    panda$core$Bit $tmp1100 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1100.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1102 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1101 = $tmp1102;
            if (((panda$core$Bit) { superCl1101 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1103 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1101);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1103));
            }
            }
        }
        }
        {
            ITable* $tmp1105 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1105 = $tmp1105->next;
            }
            $fn1107 $tmp1106 = $tmp1105->methods[0];
            panda$collections$Iterator* $tmp1108 = $tmp1106(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1104 = $tmp1108;
            $l1109:;
            ITable* $tmp1111 = rawIntf$Iter1104->$class->itable;
            while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1111 = $tmp1111->next;
            }
            $fn1113 $tmp1112 = $tmp1111->methods[0];
            panda$core$Bit $tmp1114 = $tmp1112(rawIntf$Iter1104);
            panda$core$Bit $tmp1115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1114);
            if (!$tmp1115.value) goto $l1110;
            {
                ITable* $tmp1117 = rawIntf$Iter1104->$class->itable;
                while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1117 = $tmp1117->next;
                }
                $fn1119 $tmp1118 = $tmp1117->methods[1];
                panda$core$Object* $tmp1120 = $tmp1118(rawIntf$Iter1104);
                rawIntf1116 = ((org$pandalanguage$pandac$Type*) $tmp1120);
                org$pandalanguage$pandac$ClassDecl* $tmp1122 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1116);
                intf1121 = $tmp1122;
                if (((panda$core$Bit) { intf1121 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1123 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1121);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1123));
                }
                }
            }
            goto $l1109;
            $l1110:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1126;
    panda$collections$Iterator* derived$Iter1129;
    org$pandalanguage$pandac$MethodDecl* derived1141;
    panda$core$Bit found1151;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1152;
    org$pandalanguage$pandac$MethodDecl* base1167;
    panda$core$Int64 $tmp1124 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1124, ((panda$core$Int64) { 0 }));
    if ($tmp1125.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1127 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1126 = $tmp1127;
            if (((panda$core$Bit) { superCl1126 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1128 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1126);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1128));
        }
        }
        {
            ITable* $tmp1130 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1130 = $tmp1130->next;
            }
            $fn1132 $tmp1131 = $tmp1130->methods[0];
            panda$collections$Iterator* $tmp1133 = $tmp1131(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1129 = $tmp1133;
            $l1134:;
            ITable* $tmp1136 = derived$Iter1129->$class->itable;
            while ($tmp1136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1136 = $tmp1136->next;
            }
            $fn1138 $tmp1137 = $tmp1136->methods[0];
            panda$core$Bit $tmp1139 = $tmp1137(derived$Iter1129);
            panda$core$Bit $tmp1140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1139);
            if (!$tmp1140.value) goto $l1135;
            {
                ITable* $tmp1142 = derived$Iter1129->$class->itable;
                while ($tmp1142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1142 = $tmp1142->next;
                }
                $fn1144 $tmp1143 = $tmp1142->methods[1];
                panda$core$Object* $tmp1145 = $tmp1143(derived$Iter1129);
                derived1141 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1145);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1141);
                panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1141->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1146 = $tmp1147.value;
                if ($tmp1146) goto $l1148;
                panda$core$Bit $tmp1149 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1141->annotations);
                $tmp1146 = $tmp1149.value;
                $l1148:;
                panda$core$Bit $tmp1150 = { $tmp1146 };
                if ($tmp1150.value) {
                {
                    goto $l1134;
                }
                }
                found1151 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1153 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1152, ((panda$core$Int64) { 0 }), $tmp1153, ((panda$core$Bit) { false }));
                int64_t $tmp1155 = $tmp1152.min.value;
                panda$core$Int64 i1154 = { $tmp1155 };
                int64_t $tmp1157 = $tmp1152.max.value;
                bool $tmp1158 = $tmp1152.inclusive.value;
                if ($tmp1158) goto $l1165; else goto $l1166;
                $l1165:;
                if ($tmp1155 <= $tmp1157) goto $l1159; else goto $l1161;
                $l1166:;
                if ($tmp1155 < $tmp1157) goto $l1159; else goto $l1161;
                $l1159:;
                {
                    panda$core$Object* $tmp1168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1154);
                    base1167 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1168);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1167);
                    panda$core$Bit $tmp1169 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1141, base1167);
                    if ($tmp1169.value) {
                    {
                        found1151 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1154, ((panda$core$Object*) derived1141));
                        goto $l1161;
                    }
                    }
                }
                $l1162:;
                int64_t $tmp1171 = $tmp1157 - i1154.value;
                if ($tmp1158) goto $l1172; else goto $l1173;
                $l1172:;
                if ((uint64_t) $tmp1171 >= 1) goto $l1170; else goto $l1161;
                $l1173:;
                if ((uint64_t) $tmp1171 > 1) goto $l1170; else goto $l1161;
                $l1170:;
                i1154.value += 1;
                goto $l1159;
                $l1161:;
                panda$core$Bit $tmp1176 = panda$core$Bit$$NOT$R$panda$core$Bit(found1151);
                if ($tmp1176.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1141));
                }
                }
            }
            goto $l1134;
            $l1135:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1177;
    org$pandalanguage$pandac$Symbol* s1180;
    panda$collections$Iterator* m$Iter1186;
    org$pandalanguage$pandac$MethodDecl* m1198;
    panda$collections$Iterator* p$Iter1205;
    org$pandalanguage$pandac$SymbolTable* p1217;
    panda$collections$Array* children1222;
    panda$collections$Array* types1234;
    panda$collections$Iterator* m$Iter1237;
    org$pandalanguage$pandac$MethodRef* m1249;
    panda$collections$Array* $tmp1178 = (panda$collections$Array*) malloc(40);
    $tmp1178->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1178->refCount.value = 1;
    panda$collections$Array$init($tmp1178);
    methods1177 = $tmp1178;
    org$pandalanguage$pandac$Symbol* $tmp1181 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1180 = $tmp1181;
    PANDA_ASSERT(((panda$core$Bit) { s1180 != NULL }).value);
    panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1180->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1182.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1180));
        org$pandalanguage$pandac$MethodRef* $tmp1183 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1183->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1183->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1183, ((org$pandalanguage$pandac$MethodDecl*) s1180), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1177, ((panda$core$Object*) $tmp1183));
    }
    }
    else {
    {
        panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1180->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1185.value);
        {
            ITable* $tmp1187 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1180)->methods)->$class->itable;
            while ($tmp1187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1187 = $tmp1187->next;
            }
            $fn1189 $tmp1188 = $tmp1187->methods[0];
            panda$collections$Iterator* $tmp1190 = $tmp1188(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1180)->methods));
            m$Iter1186 = $tmp1190;
            $l1191:;
            ITable* $tmp1193 = m$Iter1186->$class->itable;
            while ($tmp1193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1193 = $tmp1193->next;
            }
            $fn1195 $tmp1194 = $tmp1193->methods[0];
            panda$core$Bit $tmp1196 = $tmp1194(m$Iter1186);
            panda$core$Bit $tmp1197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1196);
            if (!$tmp1197.value) goto $l1192;
            {
                ITable* $tmp1199 = m$Iter1186->$class->itable;
                while ($tmp1199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1199 = $tmp1199->next;
                }
                $fn1201 $tmp1200 = $tmp1199->methods[1];
                panda$core$Object* $tmp1202 = $tmp1200(m$Iter1186);
                m1198 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1202);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1198);
                org$pandalanguage$pandac$MethodRef* $tmp1203 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1203->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1203->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1203, m1198, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1177, ((panda$core$Object*) $tmp1203));
            }
            goto $l1191;
            $l1192:;
        }
    }
    }
    {
        ITable* $tmp1206 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1206 = $tmp1206->next;
        }
        $fn1208 $tmp1207 = $tmp1206->methods[0];
        panda$collections$Iterator* $tmp1209 = $tmp1207(((panda$collections$Iterable*) p_st->parents));
        p$Iter1205 = $tmp1209;
        $l1210:;
        ITable* $tmp1212 = p$Iter1205->$class->itable;
        while ($tmp1212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1212 = $tmp1212->next;
        }
        $fn1214 $tmp1213 = $tmp1212->methods[0];
        panda$core$Bit $tmp1215 = $tmp1213(p$Iter1205);
        panda$core$Bit $tmp1216 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1215);
        if (!$tmp1216.value) goto $l1211;
        {
            ITable* $tmp1218 = p$Iter1205->$class->itable;
            while ($tmp1218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1218 = $tmp1218->next;
            }
            $fn1220 $tmp1219 = $tmp1218->methods[1];
            panda$core$Object* $tmp1221 = $tmp1219(p$Iter1205);
            p1217 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1221);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1217, p_name, methods1177, p_types);
        }
        goto $l1210;
        $l1211:;
    }
    panda$collections$Array* $tmp1223 = (panda$collections$Array*) malloc(40);
    $tmp1223->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1223->refCount.value = 1;
    panda$collections$Array$init($tmp1223);
    children1222 = $tmp1223;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1222, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1225 = panda$collections$Array$get_count$R$panda$core$Int64(methods1177);
    panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1225, ((panda$core$Int64) { 1 }));
    if ($tmp1226.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1227 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1227->refCount.value = 1;
        panda$core$Object* $tmp1229 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1177, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1230 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1229));
        panda$core$Object* $tmp1231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1177, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1227, ((panda$core$Int64) { 1002 }), p_position, $tmp1230, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1231)), ((panda$collections$ListView*) children1222));
        return $tmp1227;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1232 = panda$collections$Array$get_count$R$panda$core$Int64(methods1177);
        panda$core$Bit $tmp1233 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1232, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1233.value);
        panda$collections$Array* $tmp1235 = (panda$collections$Array*) malloc(40);
        $tmp1235->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1235->refCount.value = 1;
        panda$collections$Array$init($tmp1235);
        types1234 = $tmp1235;
        {
            ITable* $tmp1238 = ((panda$collections$Iterable*) methods1177)->$class->itable;
            while ($tmp1238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1238 = $tmp1238->next;
            }
            $fn1240 $tmp1239 = $tmp1238->methods[0];
            panda$collections$Iterator* $tmp1241 = $tmp1239(((panda$collections$Iterable*) methods1177));
            m$Iter1237 = $tmp1241;
            $l1242:;
            ITable* $tmp1244 = m$Iter1237->$class->itable;
            while ($tmp1244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1244 = $tmp1244->next;
            }
            $fn1246 $tmp1245 = $tmp1244->methods[0];
            panda$core$Bit $tmp1247 = $tmp1245(m$Iter1237);
            panda$core$Bit $tmp1248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1247);
            if (!$tmp1248.value) goto $l1243;
            {
                ITable* $tmp1250 = m$Iter1237->$class->itable;
                while ($tmp1250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1250 = $tmp1250->next;
                }
                $fn1252 $tmp1251 = $tmp1250->methods[1];
                panda$core$Object* $tmp1253 = $tmp1251(m$Iter1237);
                m1249 = ((org$pandalanguage$pandac$MethodRef*) $tmp1253);
                org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1249);
                panda$collections$Array$add$panda$collections$Array$T(types1234, ((panda$core$Object*) $tmp1254));
            }
            goto $l1242;
            $l1243:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1255 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1255->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1255->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1257 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1257->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1257->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1257, ((panda$collections$ListView*) types1234));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1255, ((panda$core$Int64) { 1003 }), p_position, $tmp1257, ((panda$core$Object*) methods1177), ((panda$collections$ListView*) children1222));
        return $tmp1255;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1259;
    org$pandalanguage$pandac$FieldDecl* f1275;
    panda$collections$Array* children1278;
    org$pandalanguage$pandac$Type* effectiveType1283;
    org$pandalanguage$pandac$IRNode* result1288;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1260 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1259 = $tmp1260;
            if (((panda$core$Bit) { cl1259 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1259);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1259, $tmp1261);
                org$pandalanguage$pandac$IRNode* $tmp1262 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1262->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1262->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1265 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1259);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1262, ((panda$core$Int64) { 1001 }), p_position, $tmp1264, $tmp1265);
                return $tmp1262;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1266 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1266);
            org$pandalanguage$pandac$IRNode* $tmp1267 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1267->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1269 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1270 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1267, ((panda$core$Int64) { 1001 }), p_position, $tmp1269, $tmp1270);
            return $tmp1267;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1271 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1272 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1271);
            return $tmp1272;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1273 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1273->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1273->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1273, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1273;
        }
        break;
        case 202:
        {
            f1275 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1275);
            org$pandalanguage$pandac$Type* $tmp1276 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1277 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1275->type, $tmp1276);
            if ($tmp1277.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1279 = (panda$collections$Array*) malloc(40);
            $tmp1279->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1279->refCount.value = 1;
            panda$collections$Array$init($tmp1279);
            children1278 = $tmp1279;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1281.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1282);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1275->type);
                effectiveType1283 = $tmp1284;
                panda$core$Bit $tmp1285 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1275->annotations);
                if ($tmp1285.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1278, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1286 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1275->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1287 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1286);
                    panda$collections$Array$add$panda$collections$Array$T(children1278, ((panda$core$Object*) $tmp1287));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1289 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1289->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1289->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1289, ((panda$core$Int64) { 1026 }), p_position, f1275->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1278));
                result1288 = $tmp1289;
                panda$core$Bit $tmp1291 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1283, result1288->type);
                if ($tmp1291.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1292 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1288, p_position, ((panda$core$Bit) { false }), effectiveType1283);
                    result1288 = $tmp1292;
                }
                }
                return result1288;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1293 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1293->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1293->refCount.value = 1;
                panda$core$Object* $tmp1295 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1296 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1295));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1293, ((panda$core$Int64) { 1025 }), p_position, $tmp1296);
                panda$collections$Array$add$panda$collections$Array$T(children1278, ((panda$core$Object*) $tmp1293));
                org$pandalanguage$pandac$IRNode* $tmp1297 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1297->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1297->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1297, ((panda$core$Int64) { 1026 }), p_position, f1275->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1278));
                return $tmp1297;
            }
            }
        }
        break;
        case 209:
        {
            org$pandalanguage$pandac$IRNode* $tmp1299 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1299->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1299->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Symbol($tmp1299, ((panda$core$Int64) { 1046 }), p_position, $tmp1301, p_s);
            return $tmp1299;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_context, org$pandalanguage$pandac$Type* p_raw) {
    panda$collections$HashMap* typeMap1308;
    org$pandalanguage$pandac$Type* base1311;
    org$pandalanguage$pandac$ClassDecl* cl1313;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1315;
    switch (p_raw->typeKind.value) {
        case 10:
        case 12:
        case 13:
        case 19:
        {
            return p_raw;
        }
        break;
    }
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1302 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1302, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1303.value);
            panda$core$Object* $tmp1304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1304), p_raw);
            return $tmp1305;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1306 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1307 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1306, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1307.value);
            panda$collections$HashMap* $tmp1309 = (panda$collections$HashMap*) malloc(56);
            $tmp1309->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1309->refCount.value = 1;
            panda$collections$HashMap$init($tmp1309);
            typeMap1308 = $tmp1309;
            panda$core$Object* $tmp1312 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1311 = ((org$pandalanguage$pandac$Type*) $tmp1312);
            org$pandalanguage$pandac$ClassDecl* $tmp1314 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1311)->name);
            cl1313 = $tmp1314;
            PANDA_ASSERT(((panda$core$Bit) { cl1313 != NULL }).value);
            panda$core$Int64 $tmp1316 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1315, ((panda$core$Int64) { 1 }), $tmp1316, ((panda$core$Bit) { false }));
            int64_t $tmp1318 = $tmp1315.min.value;
            panda$core$Int64 i1317 = { $tmp1318 };
            int64_t $tmp1320 = $tmp1315.max.value;
            bool $tmp1321 = $tmp1315.inclusive.value;
            if ($tmp1321) goto $l1328; else goto $l1329;
            $l1328:;
            if ($tmp1318 <= $tmp1320) goto $l1322; else goto $l1324;
            $l1329:;
            if ($tmp1318 < $tmp1320) goto $l1322; else goto $l1324;
            $l1322:;
            {
                panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1313)->name, &$s1330);
                panda$core$Int64 $tmp1332 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1317, ((panda$core$Int64) { 1 }));
                ITable* $tmp1333 = ((panda$collections$ListView*) cl1313->parameters)->$class->itable;
                while ($tmp1333->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1333 = $tmp1333->next;
                }
                $fn1335 $tmp1334 = $tmp1333->methods[0];
                panda$core$Object* $tmp1336 = $tmp1334(((panda$collections$ListView*) cl1313->parameters), $tmp1332);
                panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1336))->name);
                panda$core$Object* $tmp1338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1317);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1308, ((panda$collections$Key*) $tmp1337), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1338)));
            }
            $l1325:;
            int64_t $tmp1340 = $tmp1320 - i1317.value;
            if ($tmp1321) goto $l1341; else goto $l1342;
            $l1341:;
            if ((uint64_t) $tmp1340 >= 1) goto $l1339; else goto $l1324;
            $l1342:;
            if ((uint64_t) $tmp1340 > 1) goto $l1339; else goto $l1324;
            $l1339:;
            i1317.value += 1;
            goto $l1322;
            $l1324:;
            org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1308);
            return $tmp1345;
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
    panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp1346.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1347;
    }
    }
    panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 26 }));
    if ($tmp1348.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
        return $tmp1349;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1351 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1350);
    if ($tmp1351.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1352;
    }
    }
    panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1353.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1354;
    }
    }
    return p_type;
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char) {
    panda$core$Int32 c1358;
    panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_char->kind, ((panda$core$Int64) { 1033 }));
    PANDA_ASSERT($tmp1355.value);
    panda$core$Int64 $tmp1356 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_char->payload));
    panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1356, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1357.value);
    panda$core$Char32 $tmp1359 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_char->payload), ((panda$core$Int64) { 0 }));
    panda$core$Int32 $tmp1360 = panda$core$Char32$convert$R$panda$core$Int32($tmp1359);
    c1358 = $tmp1360;
    panda$core$Bit $tmp1361 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1358, ((panda$core$Int32) { 255 }));
    if ($tmp1361.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1362 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1358, ((panda$core$Int32) { 65535 }));
    if ($tmp1362.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    return ((panda$core$Int64) { 32 });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char, org$pandalanguage$pandac$IRNode* p_other) {
    panda$core$Int64 result1363;
    org$pandalanguage$pandac$Type* $match$1044_91373;
    panda$core$Int64 $tmp1364 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_char);
    result1363 = $tmp1364;
    panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1365 = $tmp1366.value;
    if (!$tmp1365) goto $l1367;
    panda$core$Int64 $tmp1368 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_other->payload));
    panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1368, ((panda$core$Int64) { 1 }));
    $tmp1365 = $tmp1369.value;
    $l1367:;
    panda$core$Bit $tmp1370 = { $tmp1365 };
    if ($tmp1370.value) {
    {
        panda$core$Int64 $tmp1371 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_other);
        panda$core$Int64 $tmp1372 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1363, $tmp1371);
        result1363 = $tmp1372;
    }
    }
    {
        $match$1044_91373 = p_other->type;
        org$pandalanguage$pandac$Type* $tmp1374 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1375 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1044_91373, $tmp1374);
        if ($tmp1375.value) {
        {
            panda$core$Int64 $tmp1376 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1363, ((panda$core$Int64) { 16 }));
            result1363 = $tmp1376;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1378 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1044_91373, $tmp1377);
        if ($tmp1378.value) {
        {
            panda$core$Int64 $tmp1379 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1363, ((panda$core$Int64) { 32 }));
            result1363 = $tmp1379;
        }
        }
        }
    }
    switch (result1363.value) {
        case 8:
        {
            org$pandalanguage$pandac$Type* $tmp1380 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            return $tmp1380;
        }
        break;
        case 16:
        {
            org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            return $tmp1381;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            return $tmp1382;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* start1383;
    org$pandalanguage$pandac$Type* end1396;
    org$pandalanguage$pandac$Type* step1429;
    panda$collections$ImmutableArray* args1469;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1470;
    org$pandalanguage$pandac$IRNode* c1472;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1385)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1384 = $tmp1386.value;
            if (!$tmp1384) goto $l1387;
            panda$core$Object* $tmp1388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp1389 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1388)->payload));
            panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1389, ((panda$core$Int64) { 1 }));
            $tmp1384 = $tmp1390.value;
            $l1387:;
            panda$core$Bit $tmp1391 = { $tmp1384 };
            if ($tmp1391.value) {
            {
                panda$core$Object* $tmp1392 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1393 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1394 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1392), ((org$pandalanguage$pandac$IRNode*) $tmp1393));
                start1383 = $tmp1394;
            }
            }
            else {
            {
                panda$core$Object* $tmp1395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                start1383 = ((org$pandalanguage$pandac$IRNode*) $tmp1395)->type;
            }
            }
            panda$core$Object* $tmp1398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1398)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1397 = $tmp1399.value;
            if (!$tmp1397) goto $l1400;
            panda$core$Object* $tmp1401 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1402 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1401)->payload));
            panda$core$Bit $tmp1403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1402, ((panda$core$Int64) { 1 }));
            $tmp1397 = $tmp1403.value;
            $l1400:;
            panda$core$Bit $tmp1404 = { $tmp1397 };
            if ($tmp1404.value) {
            {
                panda$core$Object* $tmp1405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1407 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1405), ((org$pandalanguage$pandac$IRNode*) $tmp1406));
                end1396 = $tmp1407;
            }
            }
            else {
            {
                panda$core$Object* $tmp1408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                end1396 = ((org$pandalanguage$pandac$IRNode*) $tmp1408)->type;
            }
            }
            panda$core$Int64 $tmp1409 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1409, ((panda$core$Int64) { 2 }));
            if ($tmp1410.value) {
            {
                panda$core$Object* $tmp1411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1411)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1412.value) {
                {
                    panda$core$Object* $tmp1413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1413)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1414.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1415 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1415);
                        org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1416);
                        return $tmp1417;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1396);
                    org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1418);
                    org$pandalanguage$pandac$Type* $tmp1420 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1419);
                    return $tmp1420;
                }
                }
                panda$core$Object* $tmp1421 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1421)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1422.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1423 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1383);
                    org$pandalanguage$pandac$Type* $tmp1424 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1423);
                    org$pandalanguage$pandac$Type* $tmp1425 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1424);
                    return $tmp1425;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1383, self, end1396);
                org$pandalanguage$pandac$Type* $tmp1427 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1426);
                org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1427);
                return $tmp1428;
            }
            }
            panda$core$Object* $tmp1430 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1431 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$IRNode*) $tmp1430)->type);
            step1429 = $tmp1431;
            panda$core$Object* $tmp1432 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1432)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1433.value) {
            {
                panda$core$Object* $tmp1434 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1434)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1435.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1436 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, step1429);
                    org$pandalanguage$pandac$Type* $tmp1437 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1436);
                    org$pandalanguage$pandac$Type* $tmp1438 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1437);
                    return $tmp1438;
                }
                }
                panda$core$Bit $tmp1439 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1396);
                if ($tmp1439.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1396);
                    org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1440);
                    org$pandalanguage$pandac$Type* $tmp1442 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1441);
                    return $tmp1442;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(end1396, self, step1429);
                org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1443);
                org$pandalanguage$pandac$Type* $tmp1445 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1444);
                org$pandalanguage$pandac$Type* $tmp1446 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1445);
                return $tmp1446;
            }
            }
            panda$core$Object* $tmp1447 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1447)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1448.value) {
            {
                panda$core$Bit $tmp1449 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1383);
                if ($tmp1449.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1450 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1383);
                    org$pandalanguage$pandac$Type* $tmp1451 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1450);
                    org$pandalanguage$pandac$Type* $tmp1452 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1451);
                    return $tmp1452;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1383, self, step1429);
                org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1453);
                org$pandalanguage$pandac$Type* $tmp1455 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1454);
                org$pandalanguage$pandac$Type* $tmp1456 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1455);
                return $tmp1456;
            }
            }
            panda$core$Bit $tmp1458 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1383);
            bool $tmp1457 = $tmp1458.value;
            if (!$tmp1457) goto $l1459;
            panda$core$Bit $tmp1460 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1396);
            $tmp1457 = $tmp1460.value;
            $l1459:;
            panda$core$Bit $tmp1461 = { $tmp1457 };
            if ($tmp1461.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1462 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1383, self, end1396);
                org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1462);
                org$pandalanguage$pandac$Type* $tmp1464 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1463);
                return $tmp1464;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1465 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1383, self, end1396);
            org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1465, self, step1429);
            org$pandalanguage$pandac$Type* $tmp1467 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1466);
            org$pandalanguage$pandac$Type* $tmp1468 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1467);
            return $tmp1468;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1470, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1471 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1470);
            args1469 = $tmp1471;
            panda$core$Object* $tmp1473 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1475 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1473), &$s1474, ((panda$collections$ListView*) args1469));
            c1472 = $tmp1475;
            if (((panda$core$Bit) { c1472 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1476 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1476;
            }
            }
            return c1472->type;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1477 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            return $tmp1477;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1478 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1478;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1489;
    panda$core$Int64$nullable result1493;
    panda$core$Int64$nullable best1502;
    panda$collections$Iterator* t$Iter1503;
    org$pandalanguage$pandac$Type* t1515;
    panda$core$Int64$nullable cost1520;
    org$pandalanguage$pandac$ClassDecl* cl1534;
    panda$core$Int64$nullable cost1536;
    panda$collections$Iterator* intf$Iter1541;
    org$pandalanguage$pandac$Type* intf1553;
    panda$core$Int64$nullable cost1558;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1479 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1479.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1480 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1481 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1480);
    if ($tmp1481.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1482.value) {
    {
        panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1483.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1484 = $tmp1485.value;
    if (!$tmp1484) goto $l1486;
    panda$core$Bit $tmp1487 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1484 = $tmp1487.value;
    $l1486:;
    panda$core$Bit $tmp1488 = { $tmp1484 };
    if ($tmp1488.value) {
    {
        panda$core$Object* $tmp1490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1491 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1490), p_target);
        result1489 = $tmp1491;
        if (((panda$core$Bit) { !result1489.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1492 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1489.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1492, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1495 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1494));
            result1493 = $tmp1495;
            if (((panda$core$Bit) { !result1493.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1496 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1493.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1496, true });
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
            panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1497.value) {
            {
                panda$core$Object* $tmp1498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1499 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1498), p_target);
                return $tmp1499;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1500 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1501 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1500, p_target);
            return $tmp1501;
        }
        break;
        case 17:
        {
            best1502 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1504 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1504->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1504 = $tmp1504->next;
                }
                $fn1506 $tmp1505 = $tmp1504->methods[0];
                panda$collections$Iterator* $tmp1507 = $tmp1505(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1503 = $tmp1507;
                $l1508:;
                ITable* $tmp1510 = t$Iter1503->$class->itable;
                while ($tmp1510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1510 = $tmp1510->next;
                }
                $fn1512 $tmp1511 = $tmp1510->methods[0];
                panda$core$Bit $tmp1513 = $tmp1511(t$Iter1503);
                panda$core$Bit $tmp1514 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1513);
                if (!$tmp1514.value) goto $l1509;
                {
                    ITable* $tmp1516 = t$Iter1503->$class->itable;
                    while ($tmp1516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1516 = $tmp1516->next;
                    }
                    $fn1518 $tmp1517 = $tmp1516->methods[1];
                    panda$core$Object* $tmp1519 = $tmp1517(t$Iter1503);
                    t1515 = ((org$pandalanguage$pandac$Type*) $tmp1519);
                    panda$core$Int64$nullable $tmp1521 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1515, p_target);
                    cost1520 = $tmp1521;
                    bool $tmp1522 = ((panda$core$Bit) { cost1520.nonnull }).value;
                    if (!$tmp1522) goto $l1523;
                    bool $tmp1524 = ((panda$core$Bit) { !best1502.nonnull }).value;
                    if ($tmp1524) goto $l1525;
                    panda$core$Bit $tmp1526 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1520.value), ((panda$core$Int64) best1502.value));
                    $tmp1524 = $tmp1526.value;
                    $l1525:;
                    panda$core$Bit $tmp1527 = { $tmp1524 };
                    $tmp1522 = $tmp1527.value;
                    $l1523:;
                    panda$core$Bit $tmp1528 = { $tmp1522 };
                    if ($tmp1528.value) {
                    {
                        best1502 = cost1520;
                    }
                    }
                }
                goto $l1508;
                $l1509:;
            }
            return best1502;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1529 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1529;
        }
        break;
    }
    panda$core$Bit $tmp1530 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1531 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1530);
    if ($tmp1531.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1532 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1533 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1532);
    if ($tmp1533.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1535 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1534 = $tmp1535;
    PANDA_ASSERT(((panda$core$Bit) { cl1534 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1534);
    if (((panda$core$Bit) { cl1534->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1537 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1534->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1538 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1537);
        panda$core$Int64$nullable $tmp1539 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1538, p_target);
        cost1536 = $tmp1539;
        if (((panda$core$Bit) { cost1536.nonnull }).value) {
        {
            panda$core$Int64 $tmp1540 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1536.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1540, true });
        }
        }
    }
    }
    {
        ITable* $tmp1542 = ((panda$collections$Iterable*) cl1534->rawInterfaces)->$class->itable;
        while ($tmp1542->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1542 = $tmp1542->next;
        }
        $fn1544 $tmp1543 = $tmp1542->methods[0];
        panda$collections$Iterator* $tmp1545 = $tmp1543(((panda$collections$Iterable*) cl1534->rawInterfaces));
        intf$Iter1541 = $tmp1545;
        $l1546:;
        ITable* $tmp1548 = intf$Iter1541->$class->itable;
        while ($tmp1548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1548 = $tmp1548->next;
        }
        $fn1550 $tmp1549 = $tmp1548->methods[0];
        panda$core$Bit $tmp1551 = $tmp1549(intf$Iter1541);
        panda$core$Bit $tmp1552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1551);
        if (!$tmp1552.value) goto $l1547;
        {
            ITable* $tmp1554 = intf$Iter1541->$class->itable;
            while ($tmp1554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1554 = $tmp1554->next;
            }
            $fn1556 $tmp1555 = $tmp1554->methods[1];
            panda$core$Object* $tmp1557 = $tmp1555(intf$Iter1541);
            intf1553 = ((org$pandalanguage$pandac$Type*) $tmp1557);
            org$pandalanguage$pandac$Type* $tmp1559 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1553);
            org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1559);
            panda$core$Int64$nullable $tmp1561 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1560, p_target);
            cost1558 = $tmp1561;
            if (((panda$core$Bit) { cost1558.nonnull }).value) {
            {
                panda$core$Int64 $tmp1562 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1558.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1562, true });
            }
            }
        }
        goto $l1546;
        $l1547:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1564 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1563 = $tmp1564.value;
    if (!$tmp1563) goto $l1565;
    panda$core$Bit $tmp1566 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1563 = $tmp1566.value;
    $l1565:;
    panda$core$Bit $tmp1567 = { $tmp1563 };
    if ($tmp1567.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1569 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1568 = $tmp1569.value;
    if (!$tmp1568) goto $l1570;
    panda$core$Bit $tmp1571 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1568 = $tmp1571.value;
    $l1570:;
    panda$core$Bit $tmp1572 = { $tmp1568 };
    if ($tmp1572.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1574 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1573 = $tmp1574.value;
    if (!$tmp1573) goto $l1575;
    panda$core$Bit $tmp1576 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1573 = $tmp1576.value;
    $l1575:;
    panda$core$Bit $tmp1577 = { $tmp1573 };
    if ($tmp1577.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1578 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1578.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1579 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1579.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1580 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1580.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1581;
    panda$core$Int64$nullable cost1595;
    panda$core$String* s1655;
    panda$collections$Iterator* utf161666;
    panda$collections$ListView* methods1685;
    panda$collections$ImmutableArray* args1687;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1688;
    panda$core$Int64$nullable bestCost1690;
    panda$collections$Iterator* m$Iter1691;
    org$pandalanguage$pandac$MethodRef* m1703;
    panda$core$Int64$nullable cost1708;
    panda$core$Int64$nullable cost11731;
    panda$core$Int64$nullable cost21735;
    panda$core$Int64 cost1744;
    panda$core$Int64$nullable cost11758;
    panda$core$Int64$nullable cost21762;
    panda$core$Int64$nullable cost31767;
    panda$collections$Array* args1775;
    org$pandalanguage$pandac$ClassDecl* targetClass1788;
    panda$collections$Iterator* m$Iter1790;
    org$pandalanguage$pandac$MethodDecl* m1802;
    panda$core$Int64$nullable cost1814;
    panda$core$Int64$nullable cost1819;
    base1581 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1583 = $tmp1584.value;
    if (!$tmp1583) goto $l1585;
    panda$core$Bit $tmp1586 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1587 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1586);
    $tmp1583 = $tmp1587.value;
    $l1585:;
    panda$core$Bit $tmp1588 = { $tmp1583 };
    bool $tmp1582 = $tmp1588.value;
    if (!$tmp1582) goto $l1589;
    panda$core$Int64 $tmp1590 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1590, ((panda$core$Int64) { 1 }));
    $tmp1582 = $tmp1591.value;
    $l1589:;
    panda$core$Bit $tmp1592 = { $tmp1582 };
    if ($tmp1592.value) {
    {
        base1581 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1593 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1593.value) {
    {
        return ((panda$core$Int64$nullable) { base1581, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1594.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Object* $tmp1596 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1597 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1596));
            cost1595 = $tmp1597;
            if (((panda$core$Bit) { !cost1595.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1598.value) {
            {
                panda$core$Int64 $tmp1599 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost1595.value));
                return ((panda$core$Int64$nullable) { $tmp1599, true });
            }
            }
            panda$core$Int64 $tmp1600 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost1595.value));
            panda$core$Int64 $tmp1601 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1600, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1601, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1602.value);
            panda$core$Int64$nullable $tmp1603 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1603;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1604.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Bit $tmp1605 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1605.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1606 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1607 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1606, p_target);
                return $tmp1607;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1609 = $tmp1610.value;
            if (!$tmp1609) goto $l1611;
            panda$core$Int64 $tmp1612 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1613 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1612);
            panda$core$Int64 $tmp1614 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1615 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1613, $tmp1614);
            $tmp1609 = $tmp1615.value;
            $l1611:;
            panda$core$Bit $tmp1616 = { $tmp1609 };
            bool $tmp1608 = $tmp1616.value;
            if ($tmp1608) goto $l1617;
            panda$core$Bit $tmp1619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1618 = $tmp1619.value;
            if (!$tmp1618) goto $l1620;
            panda$core$Int64 $tmp1621 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1622 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1623 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1621, $tmp1622);
            $tmp1618 = $tmp1623.value;
            $l1620:;
            panda$core$Bit $tmp1624 = { $tmp1618 };
            $tmp1608 = $tmp1624.value;
            $l1617:;
            panda$core$Bit $tmp1625 = { $tmp1608 };
            if ($tmp1625.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Bit $tmp1626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1626.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1627 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1628 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1627);
            if ($tmp1628.value) {
            {
                panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1629.value);
                org$pandalanguage$pandac$Type* $tmp1630 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1631 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1630, p_target);
                return $tmp1631;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1632 = $tmp1633.value;
            if (!$tmp1632) goto $l1634;
            panda$core$Int64 $tmp1635 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1636 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1635);
            panda$core$Int64 $tmp1637 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1636);
            panda$core$Int64 $tmp1638 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1639 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1637, $tmp1638);
            $tmp1632 = $tmp1639.value;
            $l1634:;
            panda$core$Bit $tmp1640 = { $tmp1632 };
            if ($tmp1640.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1641.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1642 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1643 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1642);
            if ($tmp1643.value) {
            {
                panda$core$Bit $tmp1644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1644.value);
                org$pandalanguage$pandac$Type* $tmp1645 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1646 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1645, p_target);
                return $tmp1646;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1647.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Bit $tmp1648 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1648);
            if ($tmp1649.value) {
            {
                panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1650.value);
                org$pandalanguage$pandac$Type* $tmp1651 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1652 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1651, p_target);
                return $tmp1652;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1653 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1654 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1653);
            if ($tmp1654.value) {
            {
                s1655 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1657 = panda$core$String$length$R$panda$core$Int64(s1655);
                panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1657, ((panda$core$Int64) { 1 }));
                bool $tmp1656 = $tmp1658.value;
                if (!$tmp1656) goto $l1659;
                panda$core$Char32 $tmp1660 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1655, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1661 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1660);
                panda$core$Bit $tmp1662 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1661, ((panda$core$UInt32) { 255 }));
                $tmp1656 = $tmp1662.value;
                $l1659:;
                panda$core$Bit $tmp1663 = { $tmp1656 };
                if ($tmp1663.value) {
                {
                    return ((panda$core$Int64$nullable) { base1581, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1664 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1665 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1664);
            if ($tmp1665.value) {
            {
                panda$collections$Iterator* $tmp1667 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161666 = $tmp1667;
                ITable* $tmp1668 = utf161666->$class->itable;
                while ($tmp1668->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1668 = $tmp1668->next;
                }
                $fn1670 $tmp1669 = $tmp1668->methods[0];
                panda$core$Bit $tmp1671 = $tmp1669(utf161666);
                if ($tmp1671.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1672 = utf161666->$class->itable;
                while ($tmp1672->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1672 = $tmp1672->next;
                }
                $fn1674 $tmp1673 = $tmp1672->methods[1];
                $tmp1673(utf161666);
                ITable* $tmp1675 = utf161666->$class->itable;
                while ($tmp1675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1675 = $tmp1675->next;
                }
                $fn1677 $tmp1676 = $tmp1675->methods[0];
                panda$core$Bit $tmp1678 = $tmp1676(utf161666);
                if ($tmp1678.value) {
                {
                    panda$core$Int64 $tmp1679 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1679, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1680 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1681 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1680);
            if ($tmp1681.value) {
            {
                panda$core$Int64 $tmp1682 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1682, ((panda$core$Int64) { 1 }));
                if ($tmp1683.value) {
                {
                    panda$core$Int64 $tmp1684 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1684, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1685 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1686)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1688, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1689 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1688);
            args1687 = $tmp1689;
            bestCost1690 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1692 = ((panda$collections$Iterable*) methods1685)->$class->itable;
                while ($tmp1692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1692 = $tmp1692->next;
                }
                $fn1694 $tmp1693 = $tmp1692->methods[0];
                panda$collections$Iterator* $tmp1695 = $tmp1693(((panda$collections$Iterable*) methods1685));
                m$Iter1691 = $tmp1695;
                $l1696:;
                ITable* $tmp1698 = m$Iter1691->$class->itable;
                while ($tmp1698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1698 = $tmp1698->next;
                }
                $fn1700 $tmp1699 = $tmp1698->methods[0];
                panda$core$Bit $tmp1701 = $tmp1699(m$Iter1691);
                panda$core$Bit $tmp1702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1701);
                if (!$tmp1702.value) goto $l1697;
                {
                    ITable* $tmp1704 = m$Iter1691->$class->itable;
                    while ($tmp1704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1704 = $tmp1704->next;
                    }
                    $fn1706 $tmp1705 = $tmp1704->methods[1];
                    panda$core$Object* $tmp1707 = $tmp1705(m$Iter1691);
                    m1703 = ((org$pandalanguage$pandac$MethodRef*) $tmp1707);
                    panda$core$Int64$nullable $tmp1709 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1703, ((panda$collections$ListView*) args1687), p_target);
                    cost1708 = $tmp1709;
                    if (((panda$core$Bit) { !cost1708.nonnull }).value) {
                    {
                        goto $l1696;
                    }
                    }
                    bool $tmp1710 = ((panda$core$Bit) { !bestCost1690.nonnull }).value;
                    if ($tmp1710) goto $l1711;
                    panda$core$Bit $tmp1712 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1708.value), ((panda$core$Int64) bestCost1690.value));
                    $tmp1710 = $tmp1712.value;
                    $l1711:;
                    panda$core$Bit $tmp1713 = { $tmp1710 };
                    if ($tmp1713.value) {
                    {
                        bestCost1690 = cost1708;
                    }
                    }
                }
                goto $l1696;
                $l1697:;
            }
            return bestCost1690;
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1714 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1714.value) {
            {
                panda$core$Int64 $tmp1715 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1716 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1715, ((panda$core$Int64) { 2 }));
                if ($tmp1716.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1718 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1718)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1717 = $tmp1719.value;
                if (!$tmp1717) goto $l1720;
                panda$core$Object* $tmp1721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1721)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1717 = $tmp1722.value;
                $l1720:;
                panda$core$Bit $tmp1723 = { $tmp1717 };
                if ($tmp1723.value) {
                {
                    panda$core$Object* $tmp1724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1724)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1725.value) {
                    {
                        panda$core$Object* $tmp1726 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1726)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1728 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1727));
                        if ($tmp1728.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1581, true });
                        }
                        }
                        panda$core$Int64 $tmp1729 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1729, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1730.value);
                panda$core$Object* $tmp1732 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1733 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1734 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1732), ((org$pandalanguage$pandac$Type*) $tmp1733));
                cost11731 = $tmp1734;
                if (((panda$core$Bit) { !cost11731.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1736 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1737 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1738 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1736), ((org$pandalanguage$pandac$Type*) $tmp1737));
                cost21735 = $tmp1738;
                if (((panda$core$Bit) { !cost21735.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1739 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost11731.value));
                panda$core$Int64 $tmp1740 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1739, ((panda$core$Int64) cost21735.value));
                return ((panda$core$Int64$nullable) { $tmp1740, true });
            }
            }
            panda$core$Bit $tmp1741 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1741.value) {
            {
                panda$core$Int64 $tmp1742 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1743 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1742, ((panda$core$Int64) { 3 }));
                if ($tmp1743.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1746 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1746)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1745 = $tmp1747.value;
                if (!$tmp1745) goto $l1748;
                panda$core$Object* $tmp1749 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1749)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1745 = $tmp1750.value;
                $l1748:;
                panda$core$Bit $tmp1751 = { $tmp1745 };
                if ($tmp1751.value) {
                {
                    panda$core$Object* $tmp1752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1752)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1753.value) {
                    {
                        panda$core$Object* $tmp1754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1754)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1756 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1755));
                        if ($tmp1756.value) {
                        {
                            cost1744 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1744 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1757.value);
                    panda$core$Object* $tmp1759 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1761 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1759), ((org$pandalanguage$pandac$Type*) $tmp1760));
                    cost11758 = $tmp1761;
                    if (((panda$core$Bit) { !cost11758.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1763 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1765 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1763), ((org$pandalanguage$pandac$Type*) $tmp1764));
                    cost21762 = $tmp1765;
                    if (((panda$core$Bit) { !cost21762.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1766 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11758.value), ((panda$core$Int64) cost21762.value));
                    cost1744 = $tmp1766;
                }
                }
                panda$core$Object* $tmp1768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1769 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1770 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1768), ((org$pandalanguage$pandac$Type*) $tmp1769));
                cost31767 = $tmp1770;
                if (((panda$core$Bit) { !cost31767.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1771 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, cost1744);
                panda$core$Int64 $tmp1772 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1771, ((panda$core$Int64) cost31767.value));
                return ((panda$core$Int64$nullable) { $tmp1772, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1773 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1774 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1773, p_target);
            return $tmp1774;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1776 = (panda$collections$Array*) malloc(40);
            $tmp1776->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1776->refCount.value = 1;
            panda$collections$Array$init($tmp1776);
            args1775 = $tmp1776;
            panda$core$Object* $tmp1778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1775, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1778)));
            panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1779.value);
            panda$core$Object* $tmp1780 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1782 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1780), &$s1781, ((panda$collections$ListView*) args1775));
            panda$core$Int64$nullable $tmp1783 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1782, p_target);
            return $tmp1783;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1784 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            panda$core$Int64$nullable $tmp1785 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1784, p_target);
            return $tmp1785;
        }
        break;
    }
    panda$core$Bit $tmp1786 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1787 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1786);
    if ($tmp1787.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1789 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1788 = $tmp1789;
    if (((panda$core$Bit) { targetClass1788 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1791 = ((panda$collections$Iterable*) targetClass1788->methods)->$class->itable;
        while ($tmp1791->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1791 = $tmp1791->next;
        }
        $fn1793 $tmp1792 = $tmp1791->methods[0];
        panda$collections$Iterator* $tmp1794 = $tmp1792(((panda$collections$Iterable*) targetClass1788->methods));
        m$Iter1790 = $tmp1794;
        $l1795:;
        ITable* $tmp1797 = m$Iter1790->$class->itable;
        while ($tmp1797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1797 = $tmp1797->next;
        }
        $fn1799 $tmp1798 = $tmp1797->methods[0];
        panda$core$Bit $tmp1800 = $tmp1798(m$Iter1790);
        panda$core$Bit $tmp1801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1800);
        if (!$tmp1801.value) goto $l1796;
        {
            ITable* $tmp1803 = m$Iter1790->$class->itable;
            while ($tmp1803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1803 = $tmp1803->next;
            }
            $fn1805 $tmp1804 = $tmp1803->methods[1];
            panda$core$Object* $tmp1806 = $tmp1804(m$Iter1790);
            m1802 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1806);
            panda$core$Bit $tmp1807 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1802->annotations);
            if ($tmp1807.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1802);
                panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1802->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1808 = $tmp1809.value;
                if (!$tmp1808) goto $l1810;
                panda$core$Int64 $tmp1811 = panda$collections$Array$get_count$R$panda$core$Int64(m1802->parameters);
                panda$core$Bit $tmp1812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1811, ((panda$core$Int64) { 1 }));
                $tmp1808 = $tmp1812.value;
                $l1810:;
                panda$core$Bit $tmp1813 = { $tmp1808 };
                if ($tmp1813.value) {
                {
                    panda$core$Object* $tmp1815 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1802->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1816 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1815)->type);
                    cost1814 = $tmp1816;
                    if (((panda$core$Bit) { cost1814.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1817 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost1814.value));
                        panda$core$Int64 $tmp1818 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1817, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1818, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1795;
        $l1796:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1820 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1819 = $tmp1820;
    if (((panda$core$Bit) { cost1819.nonnull }).value) {
    {
        panda$core$Int64 $tmp1821 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost1819.value));
        return ((panda$core$Int64$nullable) { $tmp1821, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1830;
    org$pandalanguage$pandac$IRNode* intermediate1836;
    org$pandalanguage$pandac$IRNode* coerced1868;
    org$pandalanguage$pandac$IRNode* coerced1894;
    org$pandalanguage$pandac$IRNode* coerced1907;
    org$pandalanguage$pandac$IRNode* varType1921;
    panda$collections$Array* args1931;
    org$pandalanguage$pandac$IRNode* target1939;
    panda$collections$Array* args1950;
    org$pandalanguage$pandac$IRNode* target1962;
    panda$collections$Array* args1973;
    org$pandalanguage$pandac$IRNode* target1981;
    org$pandalanguage$pandac$Type* param1997;
    org$pandalanguage$pandac$IRNode* start1999;
    org$pandalanguage$pandac$IRNode* end2002;
    panda$collections$Array* args2005;
    org$pandalanguage$pandac$IRNode* target2011;
    org$pandalanguage$pandac$Type* endPoint2027;
    org$pandalanguage$pandac$IRNode* start2029;
    org$pandalanguage$pandac$IRNode* end2032;
    org$pandalanguage$pandac$IRNode* step2035;
    panda$collections$Array* args2039;
    org$pandalanguage$pandac$IRNode* target2045;
    panda$collections$ImmutableArray* args2053;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2054;
    org$pandalanguage$pandac$ChoiceEntry* c2060;
    org$pandalanguage$pandac$IRNode* owner2063;
    panda$collections$Array* args2068;
    panda$core$UInt64 value2071;
    panda$collections$Array* children2106;
    org$pandalanguage$pandac$IRNode* intermediate2113;
    org$pandalanguage$pandac$ClassDecl* cl2118;
    panda$collections$Iterator* m$Iter2120;
    org$pandalanguage$pandac$MethodDecl* m2132;
    org$pandalanguage$pandac$IRNode* type2149;
    panda$collections$Array* args2154;
    panda$collections$Array* children2159;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1822 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1822.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1823 = $tmp1824.value;
    if (!$tmp1823) goto $l1825;
    panda$core$Bit $tmp1826 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1823 = $tmp1826.value;
    $l1825:;
    panda$core$Bit $tmp1827 = { $tmp1823 };
    if ($tmp1827.value) {
    {
        panda$core$Object* $tmp1828 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1829 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1828), p_target);
        if ($tmp1829.value) {
        {
            panda$collections$Array* $tmp1831 = (panda$collections$Array*) malloc(40);
            $tmp1831->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1831->refCount.value = 1;
            panda$collections$Array$init($tmp1831);
            children1830 = $tmp1831;
            panda$collections$Array$add$panda$collections$Array$T(children1830, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1833 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1833->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1833->refCount.value = 1;
            panda$core$Bit$wrapper* $tmp1835;
            $tmp1835 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp1835->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp1835->refCount = 1;
            $tmp1835->value = ((panda$core$Bit) { false });
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1833, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp1835), ((panda$collections$ListView*) children1830));
            return $tmp1833;
        }
        }
        panda$core$Object* $tmp1837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1838 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1837));
        intermediate1836 = $tmp1838;
        org$pandalanguage$pandac$IRNode* $tmp1839 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1836, p_target);
        return $tmp1839;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1840 = $tmp1841.value;
            if (!$tmp1840) goto $l1842;
            panda$core$Int64 $tmp1843 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1844 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1845 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1843, $tmp1844);
            $tmp1840 = $tmp1845.value;
            $l1842:;
            panda$core$Bit $tmp1846 = { $tmp1840 };
            if ($tmp1846.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1847 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1847->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1847->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1847, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1847;
            }
            }
            else {
            panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1849 = $tmp1850.value;
            if (!$tmp1849) goto $l1851;
            panda$core$Int64 $tmp1852 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1853 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1854 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1852, $tmp1853);
            $tmp1849 = $tmp1854.value;
            $l1851:;
            panda$core$Bit $tmp1855 = { $tmp1849 };
            if ($tmp1855.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1856 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1856->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1856->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1856, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1856;
            }
            }
            else {
            panda$core$Bit $tmp1858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1858.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1859 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1859->refCount.value = 1;
                panda$core$Real64 $tmp1861 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1859, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1861);
                return $tmp1859;
            }
            }
            }
            }
            panda$core$Bit $tmp1863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1862 = $tmp1863.value;
            if (!$tmp1862) goto $l1864;
            panda$core$Bit $tmp1865 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1866 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1865);
            $tmp1862 = $tmp1866.value;
            $l1864:;
            panda$core$Bit $tmp1867 = { $tmp1862 };
            if ($tmp1867.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1869 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1870 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1869);
                coerced1868 = $tmp1870;
                if (((panda$core$Bit) { coerced1868 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1871 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1868, p_target);
                return $tmp1871;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1872 = $tmp1873.value;
            if (!$tmp1872) goto $l1874;
            panda$core$Int64 $tmp1875 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1876 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1875);
            panda$core$Int64 $tmp1877 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1876);
            panda$core$Int64 $tmp1878 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1879 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1877, $tmp1878);
            $tmp1872 = $tmp1879.value;
            $l1874:;
            panda$core$Bit $tmp1880 = { $tmp1872 };
            if ($tmp1880.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1881 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1881->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1881, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1881;
            }
            }
            else {
            panda$core$Bit $tmp1883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1883.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1884 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1884->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1884->refCount.value = 1;
                panda$core$Real64 $tmp1886 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1887 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1886);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1884, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1887);
                return $tmp1884;
            }
            }
            }
            panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1888 = $tmp1889.value;
            if (!$tmp1888) goto $l1890;
            panda$core$Bit $tmp1891 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1891);
            $tmp1888 = $tmp1892.value;
            $l1890:;
            panda$core$Bit $tmp1893 = { $tmp1888 };
            if ($tmp1893.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1895 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1896 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1895);
                coerced1894 = $tmp1896;
                if (((panda$core$Bit) { coerced1894 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1897 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1894, p_target);
                return $tmp1897;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1898.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1899 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1899->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1899->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1899, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1899;
            }
            }
            panda$core$Bit $tmp1902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1901 = $tmp1902.value;
            if (!$tmp1901) goto $l1903;
            panda$core$Bit $tmp1904 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1905 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1904);
            $tmp1901 = $tmp1905.value;
            $l1903:;
            panda$core$Bit $tmp1906 = { $tmp1901 };
            if ($tmp1906.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1908 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1909 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1908);
                coerced1907 = $tmp1909;
                if (((panda$core$Bit) { coerced1907 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1910 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1907, p_target);
                return $tmp1910;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1911 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1912 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1911);
            if ($tmp1912.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1913 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1913->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1913->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1913, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1913;
            }
            }
            panda$core$Bit $tmp1916 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1915 = $tmp1916.value;
            if (!$tmp1915) goto $l1917;
            org$pandalanguage$pandac$Type* $tmp1918 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1919 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1918);
            $tmp1915 = $tmp1919.value;
            $l1917:;
            panda$core$Bit $tmp1920 = { $tmp1915 };
            if ($tmp1920.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1922 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1923 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1922);
                varType1921 = $tmp1923;
                if (((panda$core$Bit) { varType1921 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1924 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1921, p_target);
                    return $tmp1924;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1926 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1927 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1926);
            bool $tmp1925 = $tmp1927.value;
            if (!$tmp1925) goto $l1928;
            panda$core$Int64$nullable $tmp1929 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1925 = ((panda$core$Bit) { $tmp1929.nonnull }).value;
            $l1928:;
            panda$core$Bit $tmp1930 = { $tmp1925 };
            if ($tmp1930.value) {
            {
                panda$collections$Array* $tmp1932 = (panda$collections$Array*) malloc(40);
                $tmp1932->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1932->refCount.value = 1;
                panda$collections$Array$init($tmp1932);
                args1931 = $tmp1932;
                org$pandalanguage$pandac$IRNode* $tmp1934 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1934->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1936 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1937 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1938 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1937);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1934, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1936, $tmp1938);
                panda$collections$Array$add$panda$collections$Array$T(args1931, ((panda$core$Object*) $tmp1934));
                org$pandalanguage$pandac$IRNode* $tmp1940 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1940->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1940->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1942 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1940, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1942, p_target);
                target1939 = $tmp1940;
                org$pandalanguage$pandac$IRNode* $tmp1943 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1939, ((panda$collections$ListView*) args1931));
                return $tmp1943;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1946 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1945);
            bool $tmp1944 = $tmp1946.value;
            if (!$tmp1944) goto $l1947;
            panda$core$Int64$nullable $tmp1948 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1944 = ((panda$core$Bit) { $tmp1948.nonnull }).value;
            $l1947:;
            panda$core$Bit $tmp1949 = { $tmp1944 };
            if ($tmp1949.value) {
            {
                panda$collections$Array* $tmp1951 = (panda$collections$Array*) malloc(40);
                $tmp1951->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1951->refCount.value = 1;
                panda$collections$Array$init($tmp1951);
                args1950 = $tmp1951;
                org$pandalanguage$pandac$IRNode* $tmp1953 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1953->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1953->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1955 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1956 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1957 = $tmp1956->$class->itable;
                while ($tmp1957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1957 = $tmp1957->next;
                }
                $fn1959 $tmp1958 = $tmp1957->methods[1];
                panda$core$Object* $tmp1960 = $tmp1958($tmp1956);
                panda$core$UInt64 $tmp1961 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1960)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1953, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1955, $tmp1961);
                panda$collections$Array$add$panda$collections$Array$T(args1950, ((panda$core$Object*) $tmp1953));
                org$pandalanguage$pandac$IRNode* $tmp1963 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1963->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1963->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1965 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1963, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1965, p_target);
                target1962 = $tmp1963;
                org$pandalanguage$pandac$IRNode* $tmp1966 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1962, ((panda$collections$ListView*) args1950));
                return $tmp1966;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1968 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1969 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1968);
            bool $tmp1967 = $tmp1969.value;
            if (!$tmp1967) goto $l1970;
            panda$core$Int64$nullable $tmp1971 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1967 = ((panda$core$Bit) { $tmp1971.nonnull }).value;
            $l1970:;
            panda$core$Bit $tmp1972 = { $tmp1967 };
            if ($tmp1972.value) {
            {
                panda$collections$Array* $tmp1974 = (panda$collections$Array*) malloc(40);
                $tmp1974->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1974->refCount.value = 1;
                panda$collections$Array$init($tmp1974);
                args1973 = $tmp1974;
                org$pandalanguage$pandac$IRNode* $tmp1976 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1976->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1976->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1978 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1979 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1980 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1979);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1976, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1978, $tmp1980);
                panda$collections$Array$add$panda$collections$Array$T(args1973, ((panda$core$Object*) $tmp1976));
                org$pandalanguage$pandac$IRNode* $tmp1982 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1982->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1982->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1984 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1982, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1984, p_target);
                target1981 = $tmp1982;
                org$pandalanguage$pandac$IRNode* $tmp1985 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1981, ((panda$collections$ListView*) args1973));
                return $tmp1985;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1986 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1986.value) {
            {
                panda$core$Int64 $tmp1987 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1988 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1987, ((panda$core$Int64) { 2 }));
                if ($tmp1988.value) {
                {
                    panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1989, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, &$s1991);
                    panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1992, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1994);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1995);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1996.value);
                panda$core$Object* $tmp1998 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1997 = ((org$pandalanguage$pandac$Type*) $tmp1998);
                panda$core$Object* $tmp2000 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2001 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2000), param1997);
                start1999 = $tmp2001;
                if (((panda$core$Bit) { start1999 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2003 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2004 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2003), param1997);
                end2002 = $tmp2004;
                if (((panda$core$Bit) { end2002 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp2006 = (panda$collections$Array*) malloc(40);
                $tmp2006->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2006->refCount.value = 1;
                panda$collections$Array$init($tmp2006);
                args2005 = $tmp2006;
                panda$collections$Array$add$panda$collections$Array$T(args2005, ((panda$core$Object*) start1999));
                panda$collections$Array$add$panda$collections$Array$T(args2005, ((panda$core$Object*) end2002));
                org$pandalanguage$pandac$IRNode* $tmp2008 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2008->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2008->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2010 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2008, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2010, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2005, ((panda$core$Object*) $tmp2008));
                org$pandalanguage$pandac$IRNode* $tmp2012 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2012->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2012->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2014 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2012, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2014, p_target);
                target2011 = $tmp2012;
                org$pandalanguage$pandac$IRNode* $tmp2015 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2011, ((panda$collections$ListView*) args2005));
                return $tmp2015;
            }
            }
            else {
            panda$core$Bit $tmp2016 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp2016.value) {
            {
                panda$core$Int64 $tmp2017 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp2018 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2017, ((panda$core$Int64) { 3 }));
                if ($tmp2018.value) {
                {
                    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2019, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
                    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2022, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2025);
                    return NULL;
                }
                }
                panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp2026.value);
                panda$core$Object* $tmp2028 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint2027 = ((org$pandalanguage$pandac$Type*) $tmp2028);
                panda$core$Object* $tmp2030 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2031 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2030), endPoint2027);
                start2029 = $tmp2031;
                if (((panda$core$Bit) { start2029 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2034 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2033), endPoint2027);
                end2032 = $tmp2034;
                panda$core$Object* $tmp2036 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp2037 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp2038 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2036), ((org$pandalanguage$pandac$Type*) $tmp2037));
                step2035 = $tmp2038;
                panda$collections$Array* $tmp2040 = (panda$collections$Array*) malloc(40);
                $tmp2040->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2040->refCount.value = 1;
                panda$collections$Array$init($tmp2040);
                args2039 = $tmp2040;
                panda$collections$Array$add$panda$collections$Array$T(args2039, ((panda$core$Object*) start2029));
                panda$collections$Array$add$panda$collections$Array$T(args2039, ((panda$core$Object*) end2032));
                panda$collections$Array$add$panda$collections$Array$T(args2039, ((panda$core$Object*) step2035));
                org$pandalanguage$pandac$IRNode* $tmp2042 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2042->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2042->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2044 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2042, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2044, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2039, ((panda$core$Object*) $tmp2042));
                org$pandalanguage$pandac$IRNode* $tmp2046 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2046->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2046->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2048 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2046, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2048, p_target);
                target2045 = $tmp2046;
                org$pandalanguage$pandac$IRNode* $tmp2049 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2045, ((panda$collections$ListView*) args2039));
                return $tmp2049;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp2050 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp2051 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2050, p_target);
                return $tmp2051;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp2052 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp2052;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2054, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2055 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp2054);
            args2053 = $tmp2055;
            panda$core$Object* $tmp2056 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2058 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2056), &$s2057, ((panda$collections$ListView*) args2053), p_target);
            org$pandalanguage$pandac$IRNode* $tmp2059 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2058, p_target);
            return $tmp2059;
        }
        break;
        case 1046:
        {
            c2060 = ((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload);
            panda$core$Int64 $tmp2061 = panda$collections$Array$get_count$R$panda$core$Int64(c2060->fields);
            panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2061, ((panda$core$Int64) { 0 }));
            if ($tmp2062.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2064 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2064->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2064->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2066 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2067 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2060->owner);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2064, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2066, $tmp2067);
                owner2063 = $tmp2064;
                panda$collections$Array* $tmp2069 = (panda$collections$Array*) malloc(40);
                $tmp2069->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2069->refCount.value = 1;
                panda$collections$Array$init($tmp2069);
                args2068 = $tmp2069;
                panda$core$UInt64 $tmp2072 = panda$core$Int64$convert$R$panda$core$UInt64(c2060->rawValue);
                value2071 = $tmp2072;
                org$pandalanguage$pandac$IRNode* $tmp2073 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2073->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2073->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2075 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2071);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2073, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp2075, value2071);
                panda$collections$Array$add$panda$collections$Array$T(args2068, ((panda$core$Object*) $tmp2073));
                org$pandalanguage$pandac$IRNode* $tmp2076 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2063, ((panda$collections$ListView*) args2068));
                org$pandalanguage$pandac$IRNode* $tmp2077 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2076, p_target);
                return $tmp2077;
            }
            }
            panda$core$String* $tmp2079 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2078, ((panda$core$Object*) p_expr));
            panda$core$String* $tmp2081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2079, &$s2080);
            panda$core$Int64 $tmp2082 = panda$collections$Array$get_count$R$panda$core$Int64(c2060->fields);
            panda$core$Int64$wrapper* $tmp2083;
            $tmp2083 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp2083->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2083->refCount = 1;
            $tmp2083->value = $tmp2082;
            panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2081, ((panda$core$Object*) $tmp2083));
            panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2084, &$s2085);
            panda$core$Int64 $tmp2088 = panda$collections$Array$get_count$R$panda$core$Int64(c2060->fields);
            panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2088, ((panda$core$Int64) { 1 }));
            panda$core$Bit$wrapper* $tmp2090;
            $tmp2090 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp2090->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp2090->refCount = 1;
            $tmp2090->value = $tmp2089;
            ITable* $tmp2092 = ((panda$core$Formattable*) $tmp2090)->$class->itable;
            while ($tmp2092->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2092 = $tmp2092->next;
            }
            $fn2094 $tmp2093 = $tmp2092->methods[0];
            panda$core$String* $tmp2095 = $tmp2093(((panda$core$Formattable*) $tmp2090), &$s2091);
            panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2087, $tmp2095);
            panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, &$s2097);
            panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, $tmp2098);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2099);
            return NULL;
        }
        break;
    }
    panda$core$Bit $tmp2100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2100.value) {
    {
        panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2101.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2102 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2102->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2102->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2102, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp2102;
        }
        }
        panda$core$Object* $tmp2104 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2105 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp2104));
        if ($tmp2105.value) {
        {
            panda$collections$Array* $tmp2107 = (panda$collections$Array*) malloc(40);
            $tmp2107->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2107->refCount.value = 1;
            panda$collections$Array$init($tmp2107);
            children2106 = $tmp2107;
            panda$collections$Array$add$panda$collections$Array$T(children2106, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp2109 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2109->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2109->refCount.value = 1;
            panda$core$Bit$wrapper* $tmp2111;
            $tmp2111 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp2111->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp2111->refCount = 1;
            $tmp2111->value = ((panda$core$Bit) { false });
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2109, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp2111), ((panda$collections$ListView*) children2106));
            return $tmp2109;
        }
        }
        panda$core$Bit $tmp2112 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2112.value) {
        {
            panda$core$Object* $tmp2114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2115 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp2114));
            intermediate2113 = $tmp2115;
            org$pandalanguage$pandac$IRNode* $tmp2116 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate2113, p_target);
            return $tmp2116;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp2117 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp2117.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2119 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl2118 = $tmp2119;
        if (((panda$core$Bit) { cl2118 != NULL }).value) {
        {
            {
                ITable* $tmp2121 = ((panda$collections$Iterable*) cl2118->methods)->$class->itable;
                while ($tmp2121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2121 = $tmp2121->next;
                }
                $fn2123 $tmp2122 = $tmp2121->methods[0];
                panda$collections$Iterator* $tmp2124 = $tmp2122(((panda$collections$Iterable*) cl2118->methods));
                m$Iter2120 = $tmp2124;
                $l2125:;
                ITable* $tmp2127 = m$Iter2120->$class->itable;
                while ($tmp2127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2127 = $tmp2127->next;
                }
                $fn2129 $tmp2128 = $tmp2127->methods[0];
                panda$core$Bit $tmp2130 = $tmp2128(m$Iter2120);
                panda$core$Bit $tmp2131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2130);
                if (!$tmp2131.value) goto $l2126;
                {
                    ITable* $tmp2133 = m$Iter2120->$class->itable;
                    while ($tmp2133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2133 = $tmp2133->next;
                    }
                    $fn2135 $tmp2134 = $tmp2133->methods[1];
                    panda$core$Object* $tmp2136 = $tmp2134(m$Iter2120);
                    m2132 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2136);
                    panda$core$Bit $tmp2137 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m2132->annotations);
                    if ($tmp2137.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2132);
                        panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2132->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        bool $tmp2139 = $tmp2140.value;
                        if (!$tmp2139) goto $l2141;
                        panda$core$Int64 $tmp2142 = panda$collections$Array$get_count$R$panda$core$Int64(m2132->parameters);
                        panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2142, ((panda$core$Int64) { 1 }));
                        $tmp2139 = $tmp2143.value;
                        $l2141:;
                        panda$core$Bit $tmp2144 = { $tmp2139 };
                        bool $tmp2138 = $tmp2144.value;
                        if (!$tmp2138) goto $l2145;
                        panda$core$Object* $tmp2146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m2132->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp2147 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2146)->type);
                        $tmp2138 = ((panda$core$Bit) { $tmp2147.nonnull }).value;
                        $l2145:;
                        panda$core$Bit $tmp2148 = { $tmp2138 };
                        if ($tmp2148.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp2150 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp2150->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp2150->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp2152 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp2153 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2118);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2150, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2152, $tmp2153);
                            type2149 = $tmp2150;
                            panda$collections$Array* $tmp2155 = (panda$collections$Array*) malloc(40);
                            $tmp2155->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp2155->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp2155, ((panda$core$Int64) { 1 }));
                            args2154 = $tmp2155;
                            panda$collections$Array$add$panda$collections$Array$T(args2154, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp2157 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type2149, ((panda$collections$ListView*) args2154));
                            org$pandalanguage$pandac$IRNode* $tmp2158 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2157, p_target);
                            return $tmp2158;
                        }
                        }
                    }
                    }
                }
                goto $l2125;
                $l2126:;
            }
        }
        }
        panda$collections$Array* $tmp2160 = (panda$collections$Array*) malloc(40);
        $tmp2160->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2160->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp2160, ((panda$core$Int64) { 1 }));
        children2159 = $tmp2160;
        panda$collections$Array$add$panda$collections$Array$T(children2159, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp2162 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2162->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2162->refCount.value = 1;
        panda$core$Bit$wrapper* $tmp2164;
        $tmp2164 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp2164->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp2164->refCount = 1;
        $tmp2164->value = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2162, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp2164), ((panda$collections$ListView*) children2159));
        return $tmp2162;
    }
    }
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2165, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2168, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2171);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2172;
    org$pandalanguage$pandac$IRNode* $tmp2173 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2172 = $tmp2173;
    bool $tmp2174 = ((panda$core$Bit) { result2172 == NULL }).value;
    if ($tmp2174) goto $l2175;
    panda$core$Bit $tmp2176 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2172->type, p_target);
    $tmp2174 = $tmp2176.value;
    $l2175:;
    panda$core$Bit $tmp2177 = { $tmp2174 };
    PANDA_ASSERT($tmp2177.value);
    return result2172;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2179 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2178 = $tmp2179.value;
    if (!$tmp2178) goto $l2180;
    panda$core$Bit $tmp2181 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2178 = $tmp2181.value;
    $l2180:;
    panda$core$Bit $tmp2182 = { $tmp2178 };
    if ($tmp2182.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2183 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2183.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2185 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2184 = $tmp2185.value;
    if (!$tmp2184) goto $l2186;
    panda$core$Bit $tmp2187 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2184 = $tmp2187.value;
    $l2186:;
    panda$core$Bit $tmp2188 = { $tmp2184 };
    if ($tmp2188.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2189.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2190 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2190.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2192;
    org$pandalanguage$pandac$IRNode* resolved2199;
    panda$core$Int64$nullable $tmp2191 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2191.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2193 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2192 = $tmp2193;
    panda$core$Bit $tmp2195 = panda$core$Bit$$NOT$R$panda$core$Bit(result2192);
    bool $tmp2194 = $tmp2195.value;
    if (!$tmp2194) goto $l2196;
    panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2194 = $tmp2197.value;
    $l2196:;
    panda$core$Bit $tmp2198 = { $tmp2194 };
    if ($tmp2198.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2200 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2199 = $tmp2200;
        bool $tmp2201 = ((panda$core$Bit) { resolved2199 != NULL }).value;
        if (!$tmp2201) goto $l2202;
        $tmp2201 = ((panda$core$Bit) { ((panda$core$Object*) resolved2199) != ((panda$core$Object*) p_node) }).value;
        $l2202:;
        panda$core$Bit $tmp2203 = { $tmp2201 };
        if ($tmp2203.value) {
        {
            panda$core$Bit $tmp2204 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2199, p_target);
            result2192 = $tmp2204;
        }
        }
    }
    }
    return result2192;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2225;
    panda$collections$Array* children2228;
    panda$core$Bit $tmp2205 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2205.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2206 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2207 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2206);
    PANDA_ASSERT($tmp2207.value);
    bool $tmp2208 = p_isExplicit.value;
    if (!$tmp2208) goto $l2209;
    panda$core$Bit $tmp2210 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2211 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2210);
    $tmp2208 = $tmp2211.value;
    $l2209:;
    panda$core$Bit $tmp2212 = { $tmp2208 };
    if ($tmp2212.value) {
    {
        panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2213, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
        panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2217, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2219);
        panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, $tmp2220);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2221);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2222 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2222;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2223 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2223.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2224 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2224;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2226 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2225 = $tmp2226;
            if (((panda$core$Bit) { resolved2225 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2227 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2225, p_position, p_isExplicit, p_target);
                return $tmp2227;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2229 = (panda$collections$Array*) malloc(40);
    $tmp2229->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2229->refCount.value = 1;
    panda$collections$Array$init($tmp2229);
    children2228 = $tmp2229;
    panda$collections$Array$add$panda$collections$Array$T(children2228, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2231->refCount.value = 1;
    panda$core$Bit$wrapper* $tmp2233;
    $tmp2233 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp2233->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp2233->refCount = 1;
    $tmp2233->value = p_isExplicit;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2231, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) $tmp2233), ((panda$collections$ListView*) children2228));
    return $tmp2231;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2240;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2241;
    panda$core$Int64$nullable cost2256;
    panda$core$Int64$nullable cost2270;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2234 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2235 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2235->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2235 = $tmp2235->next;
    }
    $fn2237 $tmp2236 = $tmp2235->methods[0];
    panda$core$Int64 $tmp2238 = $tmp2236(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2239 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2234, $tmp2238);
    if ($tmp2239.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2240 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2242 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2241, ((panda$core$Int64) { 0 }), $tmp2242, ((panda$core$Bit) { false }));
    int64_t $tmp2244 = $tmp2241.min.value;
    panda$core$Int64 i2243 = { $tmp2244 };
    int64_t $tmp2246 = $tmp2241.max.value;
    bool $tmp2247 = $tmp2241.inclusive.value;
    if ($tmp2247) goto $l2254; else goto $l2255;
    $l2254:;
    if ($tmp2244 <= $tmp2246) goto $l2248; else goto $l2250;
    $l2255:;
    if ($tmp2244 < $tmp2246) goto $l2248; else goto $l2250;
    $l2248:;
    {
        ITable* $tmp2257 = p_args->$class->itable;
        while ($tmp2257->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2257 = $tmp2257->next;
        }
        $fn2259 $tmp2258 = $tmp2257->methods[0];
        panda$core$Object* $tmp2260 = $tmp2258(p_args, i2243);
        org$pandalanguage$pandac$Type* $tmp2261 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2243);
        panda$core$Int64$nullable $tmp2262 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2260), $tmp2261);
        cost2256 = $tmp2262;
        if (((panda$core$Bit) { !cost2256.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2263 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2240, ((panda$core$Int64) cost2256.value));
        result2240 = $tmp2263;
    }
    $l2251:;
    int64_t $tmp2265 = $tmp2246 - i2243.value;
    if ($tmp2247) goto $l2266; else goto $l2267;
    $l2266:;
    if ((uint64_t) $tmp2265 >= 1) goto $l2264; else goto $l2250;
    $l2267:;
    if ((uint64_t) $tmp2265 > 1) goto $l2264; else goto $l2250;
    $l2264:;
    i2243.value += 1;
    goto $l2248;
    $l2250:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2271 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2272 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2271, p_expectedReturn);
        cost2270 = $tmp2272;
        if (((panda$core$Bit) { !cost2270.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2273 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2240, ((panda$core$Int64) cost2270.value));
        result2240 = $tmp2273;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2276 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2277 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2276);
    bool $tmp2275 = $tmp2277.value;
    if (!$tmp2275) goto $l2278;
    ITable* $tmp2279 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2279->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2279 = $tmp2279->next;
    }
    $fn2281 $tmp2280 = $tmp2279->methods[0];
    panda$core$Int64 $tmp2282 = $tmp2280(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2282, ((panda$core$Int64) { 1 }));
    $tmp2275 = $tmp2283.value;
    $l2278:;
    panda$core$Bit $tmp2284 = { $tmp2275 };
    bool $tmp2274 = $tmp2284.value;
    if (!$tmp2274) goto $l2285;
    panda$core$Object* $tmp2286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2287 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2288 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2286)->type, $tmp2287);
    $tmp2274 = $tmp2288.value;
    $l2285:;
    panda$core$Bit $tmp2289 = { $tmp2274 };
    if ($tmp2289.value) {
    {
        panda$core$Int64 $tmp2290 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2240, ((panda$core$Int64) { 1 }));
        result2240 = $tmp2290;
    }
    }
    return ((panda$core$Int64$nullable) { result2240, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2291;
    panda$core$Int64$nullable best2294;
    panda$collections$Iterator* m$Iter2295;
    org$pandalanguage$pandac$MethodRef* m2307;
    panda$core$Int64$nullable cost2312;
    panda$collections$Array* $tmp2292 = (panda$collections$Array*) malloc(40);
    $tmp2292->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2292->refCount.value = 1;
    panda$collections$Array$init($tmp2292);
    result2291 = $tmp2292;
    best2294 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2296 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2296 = $tmp2296->next;
        }
        $fn2298 $tmp2297 = $tmp2296->methods[0];
        panda$collections$Iterator* $tmp2299 = $tmp2297(((panda$collections$Iterable*) p_methods));
        m$Iter2295 = $tmp2299;
        $l2300:;
        ITable* $tmp2302 = m$Iter2295->$class->itable;
        while ($tmp2302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2302 = $tmp2302->next;
        }
        $fn2304 $tmp2303 = $tmp2302->methods[0];
        panda$core$Bit $tmp2305 = $tmp2303(m$Iter2295);
        panda$core$Bit $tmp2306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2305);
        if (!$tmp2306.value) goto $l2301;
        {
            ITable* $tmp2308 = m$Iter2295->$class->itable;
            while ($tmp2308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2308 = $tmp2308->next;
            }
            $fn2310 $tmp2309 = $tmp2308->methods[1];
            panda$core$Object* $tmp2311 = $tmp2309(m$Iter2295);
            m2307 = ((org$pandalanguage$pandac$MethodRef*) $tmp2311);
            panda$core$Int64$nullable $tmp2313 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2307, p_args, p_expectedReturn);
            cost2312 = $tmp2313;
            if (((panda$core$Bit) { !cost2312.nonnull }).value) {
            {
                goto $l2300;
            }
            }
            bool $tmp2314 = ((panda$core$Bit) { !best2294.nonnull }).value;
            if ($tmp2314) goto $l2315;
            panda$core$Bit $tmp2316 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2312.value), ((panda$core$Int64) best2294.value));
            $tmp2314 = $tmp2316.value;
            $l2315:;
            panda$core$Bit $tmp2317 = { $tmp2314 };
            if ($tmp2317.value) {
            {
                panda$collections$Array$clear(result2291);
                best2294 = cost2312;
            }
            }
            panda$core$Bit $tmp2321;
            if (((panda$core$Bit) { cost2312.nonnull }).value) goto $l2318; else goto $l2319;
            $l2318:;
            panda$core$Bit $tmp2322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2312.value), ((panda$core$Int64) best2294.value));
            $tmp2321 = $tmp2322;
            goto $l2320;
            $l2319:;
            $tmp2321 = ((panda$core$Bit) { false });
            goto $l2320;
            $l2320:;
            if ($tmp2321.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2291, ((panda$core$Object*) m2307));
            }
            }
        }
        goto $l2300;
        $l2301:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2291));
    return best2294;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs2358;
    org$pandalanguage$pandac$IRNode* selfNode2394;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2423;
    org$pandalanguage$pandac$IRNode* coerced2441;
    org$pandalanguage$pandac$IRNode* result2456;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2323 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2324 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2324->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2324 = $tmp2324->next;
    }
    $fn2326 $tmp2325 = $tmp2324->methods[0];
    panda$core$Int64 $tmp2327 = $tmp2325(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2328 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2323, $tmp2327);
    if ($tmp2328.value) {
    {
        panda$core$String* $tmp2329 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2330 = panda$core$String$convert$R$panda$core$String($tmp2329);
        panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
        panda$core$Int64 $tmp2333 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Int64$wrapper* $tmp2334;
        $tmp2334 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2334->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2334->refCount = 1;
        $tmp2334->value = $tmp2333;
        panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2332, ((panda$core$Object*) $tmp2334));
        panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2335, &$s2336);
        panda$core$Int64 $tmp2338 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2338, ((panda$core$Int64) { 1 }));
        panda$core$Bit$wrapper* $tmp2340;
        $tmp2340 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp2340->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp2340->refCount = 1;
        $tmp2340->value = $tmp2339;
        ITable* $tmp2342 = ((panda$core$Formattable*) $tmp2340)->$class->itable;
        while ($tmp2342->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp2342 = $tmp2342->next;
        }
        $fn2344 $tmp2343 = $tmp2342->methods[0];
        panda$core$String* $tmp2345 = $tmp2343(((panda$core$Formattable*) $tmp2340), &$s2341);
        panda$core$String* $tmp2346 = panda$core$String$convert$R$panda$core$String($tmp2345);
        panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, &$s2347);
        ITable* $tmp2349 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2349->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2349 = $tmp2349->next;
        }
        $fn2351 $tmp2350 = $tmp2349->methods[0];
        panda$core$Int64 $tmp2352 = $tmp2350(((panda$collections$CollectionView*) p_args));
        panda$core$Int64$wrapper* $tmp2353;
        $tmp2353 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2353->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2353->refCount = 1;
        $tmp2353->value = $tmp2352;
        panda$core$String* $tmp2354 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2348, ((panda$core$Object*) $tmp2353));
        panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, &$s2355);
        panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, $tmp2356);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2357);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2359 = (panda$collections$Array*) malloc(40);
    $tmp2359->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2359->refCount.value = 1;
    panda$collections$Array$init($tmp2359);
    finalArgs2358 = $tmp2359;
    bool $tmp2362 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2362) goto $l2363;
    panda$core$Bit $tmp2364 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2362 = $tmp2364.value;
    $l2363:;
    panda$core$Bit $tmp2365 = { $tmp2362 };
    bool $tmp2361 = $tmp2365.value;
    if (!$tmp2361) goto $l2366;
    panda$core$Bit $tmp2367 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2368 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2367);
    $tmp2361 = $tmp2368.value;
    $l2366:;
    panda$core$Bit $tmp2369 = { $tmp2361 };
    if ($tmp2369.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2370 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2371 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2370);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2358, ((panda$core$Object*) $tmp2371));
    }
    }
    panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp2372.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2373 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2373)->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2374.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2375 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2375->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2375->refCount.value = 1;
                panda$core$Object* $tmp2377 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2378 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2377));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2375, ((panda$core$Int64) { 1025 }), p_position, $tmp2378);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2358, ((panda$core$Object*) $tmp2375));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2379);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2382 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2381 = $tmp2382.value;
        if (!$tmp2381) goto $l2383;
        panda$core$Bit $tmp2384 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2381 = $tmp2384.value;
        $l2383:;
        panda$core$Bit $tmp2385 = { $tmp2381 };
        bool $tmp2380 = $tmp2385.value;
        if (!$tmp2380) goto $l2386;
        panda$core$Bit $tmp2387 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2380 = $tmp2387.value;
        $l2386:;
        panda$core$Bit $tmp2388 = { $tmp2380 };
        if ($tmp2388.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2389);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2391 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2390 = $tmp2391.value;
    if (!$tmp2390) goto $l2392;
    $tmp2390 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2392:;
    panda$core$Bit $tmp2393 = { $tmp2390 };
    if ($tmp2393.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2395 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2395->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2395->refCount.value = 1;
        panda$core$Object* $tmp2397 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2398 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2397));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2395, ((panda$core$Int64) { 1025 }), p_position, $tmp2398);
        selfNode2394 = $tmp2395;
        org$pandalanguage$pandac$Type* $tmp2399 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2400 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2394, $tmp2399);
        selfNode2394 = $tmp2400;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2394 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2358, ((panda$core$Object*) selfNode2394));
        panda$core$Object* $tmp2401 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2402 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2401));
        panda$core$Bit $tmp2403 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2402);
        if ($tmp2403.value) {
        {
            panda$core$String* $tmp2405 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2404, $tmp2405);
            panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, &$s2407);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2408);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2411 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2411);
    bool $tmp2410 = $tmp2412.value;
    if (!$tmp2410) goto $l2413;
    $tmp2410 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2413:;
    panda$core$Bit $tmp2414 = { $tmp2410 };
    bool $tmp2409 = $tmp2414.value;
    if (!$tmp2409) goto $l2415;
    panda$core$Bit $tmp2416 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2409 = $tmp2416.value;
    $l2415:;
    panda$core$Bit $tmp2417 = { $tmp2409 };
    if ($tmp2417.value) {
    {
        panda$core$String* $tmp2419 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2418, $tmp2419);
        panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, &$s2421);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2422);
    }
    }
    }
    }
    ITable* $tmp2424 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2424->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2424 = $tmp2424->next;
    }
    $fn2426 $tmp2425 = $tmp2424->methods[0];
    panda$core$Int64 $tmp2427 = $tmp2425(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2423, ((panda$core$Int64) { 0 }), $tmp2427, ((panda$core$Bit) { false }));
    int64_t $tmp2429 = $tmp2423.min.value;
    panda$core$Int64 i2428 = { $tmp2429 };
    int64_t $tmp2431 = $tmp2423.max.value;
    bool $tmp2432 = $tmp2423.inclusive.value;
    if ($tmp2432) goto $l2439; else goto $l2440;
    $l2439:;
    if ($tmp2429 <= $tmp2431) goto $l2433; else goto $l2435;
    $l2440:;
    if ($tmp2429 < $tmp2431) goto $l2433; else goto $l2435;
    $l2433:;
    {
        ITable* $tmp2442 = p_args->$class->itable;
        while ($tmp2442->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2442 = $tmp2442->next;
        }
        $fn2444 $tmp2443 = $tmp2442->methods[0];
        panda$core$Object* $tmp2445 = $tmp2443(p_args, i2428);
        org$pandalanguage$pandac$Type* $tmp2446 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2428);
        org$pandalanguage$pandac$IRNode* $tmp2447 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2445), $tmp2446);
        coerced2441 = $tmp2447;
        if (((panda$core$Bit) { coerced2441 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2428);
        org$pandalanguage$pandac$IRNode* $tmp2449 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2441, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2448)->type);
        coerced2441 = $tmp2449;
        if (((panda$core$Bit) { coerced2441 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2358, ((panda$core$Object*) coerced2441));
    }
    $l2436:;
    int64_t $tmp2451 = $tmp2431 - i2428.value;
    if ($tmp2432) goto $l2452; else goto $l2453;
    $l2452:;
    if ((uint64_t) $tmp2451 >= 1) goto $l2450; else goto $l2435;
    $l2453:;
    if ((uint64_t) $tmp2451 > 1) goto $l2450; else goto $l2435;
    $l2450:;
    i2428.value += 1;
    goto $l2433;
    $l2435:;
    panda$core$Bit $tmp2458 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2457);
    if ($tmp2458.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2459 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2459->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2459->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2461 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2459, ((panda$core$Int64) { 1005 }), p_position, $tmp2461, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2358));
        result2456 = $tmp2459;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2462 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2462->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2462->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2462, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2358));
        result2456 = $tmp2462;
        org$pandalanguage$pandac$Type* $tmp2464 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2465 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2456, p_position, ((panda$core$Bit) { false }), $tmp2464);
        result2456 = $tmp2465;
    }
    }
    return result2456;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2466 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2466;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$String* p_name, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2467;
    org$pandalanguage$pandac$ChoiceEntry* rightEntry2471;
    org$pandalanguage$pandac$IRNode* leftValue2472;
    panda$core$UInt64 rightValue2475;
    org$pandalanguage$pandac$IRNode* leftValue2484;
    org$pandalanguage$pandac$IRNode* rightValue2487;
    panda$collections$Array* $tmp2468 = (panda$collections$Array*) malloc(40);
    $tmp2468->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2468->refCount.value = 1;
    panda$collections$Array$init($tmp2468);
    args2467 = $tmp2468;
    panda$core$Bit $tmp2470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1046 }));
    if ($tmp2470.value) {
    {
        rightEntry2471 = ((org$pandalanguage$pandac$ChoiceEntry*) p_right->payload);
        org$pandalanguage$pandac$IRNode* $tmp2474 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_left->position, p_left, &$s2473);
        leftValue2472 = $tmp2474;
        panda$core$UInt64 $tmp2476 = panda$core$Int64$convert$R$panda$core$UInt64(rightEntry2471->rawValue);
        rightValue2475 = $tmp2476;
        org$pandalanguage$pandac$IRNode* $tmp2477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2477->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2479 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(rightValue2475);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2477, ((panda$core$Int64) { 1004 }), p_right->position, $tmp2479, rightValue2475);
        panda$collections$Array$add$panda$collections$Array$T(args2467, ((panda$core$Object*) $tmp2477));
        org$pandalanguage$pandac$IRNode* $tmp2480 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2472, p_name, ((panda$collections$ListView*) args2467));
        return $tmp2480;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2481 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_right->type);
    org$pandalanguage$pandac$Type* $tmp2482 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_left->type);
    panda$core$Bit $tmp2483 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2481, $tmp2482);
    if ($tmp2483.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2486 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_left->position, p_left, &$s2485);
        leftValue2484 = $tmp2486;
        PANDA_ASSERT(((panda$core$Bit) { leftValue2484 != NULL }).value);
        org$pandalanguage$pandac$IRNode* $tmp2489 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_right->position, p_right, &$s2488);
        rightValue2487 = $tmp2489;
        PANDA_ASSERT(((panda$core$Bit) { rightValue2487 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(args2467, ((panda$core$Object*) rightValue2487));
        org$pandalanguage$pandac$IRNode* $tmp2490 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2484, p_name, ((panda$collections$ListView*) args2467));
        return $tmp2490;
    }
    }
    panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2491, p_name);
    panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2492, &$s2493);
    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2494, ((panda$core$Object*) p_left->type));
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2496);
    panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2497, ((panda$core$Object*) p_right->type));
    panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2499);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_left->position, $tmp2500);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2501;
    org$pandalanguage$pandac$ClassDecl* cl2503;
    org$pandalanguage$pandac$Symbol* s2513;
    org$pandalanguage$pandac$IRNode* ref2559;
    org$pandalanguage$pandac$IRNode* $tmp2502 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2501 = $tmp2502;
    if (((panda$core$Bit) { resolved2501 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2501->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2504.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2505 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2501->payload));
        cl2503 = $tmp2505;
    }
    }
    else {
    {
        panda$core$Bit $tmp2506 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2501->type);
        panda$core$Bit $tmp2507 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2506);
        if ($tmp2507.value) {
        {
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2508, ((panda$core$Object*) resolved2501->type));
            panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, &$s2510);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2511);
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2512 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2501->type);
        cl2503 = $tmp2512;
    }
    }
    if (((panda$core$Bit) { cl2503 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2514 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2503);
    org$pandalanguage$pandac$Symbol* $tmp2515 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2514, p_name);
    s2513 = $tmp2515;
    if (((panda$core$Bit) { s2513 == NULL }).value) {
    {
        panda$core$Bit $tmp2518 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2517);
        bool $tmp2516 = $tmp2518.value;
        if ($tmp2516) goto $l2519;
        panda$core$Bit $tmp2523 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2522);
        bool $tmp2521 = $tmp2523.value;
        if (!$tmp2521) goto $l2524;
        panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl2503->classKind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp2521 = $tmp2525.value;
        $l2524:;
        panda$core$Bit $tmp2526 = { $tmp2521 };
        bool $tmp2520 = $tmp2526.value;
        if (!$tmp2520) goto $l2527;
        ITable* $tmp2528 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2528->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2528 = $tmp2528->next;
        }
        $fn2530 $tmp2529 = $tmp2528->methods[0];
        panda$core$Int64 $tmp2531 = $tmp2529(((panda$collections$CollectionView*) p_args));
        panda$core$Bit $tmp2532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2531, ((panda$core$Int64) { 1 }));
        $tmp2520 = $tmp2532.value;
        $l2527:;
        panda$core$Bit $tmp2533 = { $tmp2520 };
        $tmp2516 = $tmp2533.value;
        $l2519:;
        panda$core$Bit $tmp2534 = { $tmp2516 };
        if ($tmp2534.value) {
        {
            ITable* $tmp2535 = p_args->$class->itable;
            while ($tmp2535->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2535 = $tmp2535->next;
            }
            $fn2537 $tmp2536 = $tmp2535->methods[0];
            panda$core$Object* $tmp2538 = $tmp2536(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2539 = org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, ((org$pandalanguage$pandac$IRNode*) $tmp2538));
            return $tmp2539;
        }
        }
        panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2540, ((org$pandalanguage$pandac$Symbol*) cl2503)->name);
        panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
        panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, p_name);
        panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2546);
        return NULL;
    }
    }
    panda$core$Bit $tmp2548 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2513->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2547 = $tmp2548.value;
    if (!$tmp2547) goto $l2549;
    panda$core$Bit $tmp2550 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2513->kind, ((panda$core$Int64) { 205 }));
    $tmp2547 = $tmp2550.value;
    $l2549:;
    panda$core$Bit $tmp2551 = { $tmp2547 };
    if ($tmp2551.value) {
    {
        panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2552, ((org$pandalanguage$pandac$Symbol*) cl2503)->name);
        panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, &$s2554);
        panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, p_name);
        panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, &$s2557);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2558);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2560 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2503);
    org$pandalanguage$pandac$IRNode* $tmp2561 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2513, $tmp2560);
    ref2559 = $tmp2561;
    if (((panda$core$Bit) { ref2559 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2562 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2559, p_args, p_expectedType);
    return $tmp2562;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2563 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2563;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2564;
    panda$collections$Array* methods2571;
    org$pandalanguage$pandac$MethodDecl* first2576;
    panda$core$MutableString* msg2581;
    panda$core$String* separator2592;
    panda$collections$Iterator* a$Iter2594;
    org$pandalanguage$pandac$IRNode* a2606;
    org$pandalanguage$pandac$IRNode* target2620;
    panda$collections$Array* children2628;
    panda$collections$Array* types2634;
    panda$collections$Iterator* m$Iter2637;
    org$pandalanguage$pandac$MethodRef* m2649;
    org$pandalanguage$pandac$IRNode* target2659;
    org$pandalanguage$pandac$IRNode* initCall2662;
    panda$collections$Array* children2666;
    org$pandalanguage$pandac$ChoiceEntry* c2671;
    panda$collections$Array* finalArgs2708;
    panda$core$UInt64 value2711;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2716;
    org$pandalanguage$pandac$IRNode* arg2734;
    org$pandalanguage$pandac$IRNode* owner2747;
    org$pandalanguage$pandac$IRNode* resolved2753;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2565 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2565, ((panda$core$Int64) { 0 }));
            if ($tmp2566.value) {
            {
                target2564 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2567 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2567, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2568.value);
                panda$core$Object* $tmp2569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2564 = ((org$pandalanguage$pandac$IRNode*) $tmp2569);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2570 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2564, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2570;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2572 = (panda$collections$Array*) malloc(40);
            $tmp2572->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2572->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2572, ((panda$collections$ListView*) p_m->payload));
            methods2571 = $tmp2572;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2571, p_args, p_expectedType);
            panda$core$Int64 $tmp2574 = panda$collections$Array$get_count$R$panda$core$Int64(methods2571);
            panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2574, ((panda$core$Int64) { 0 }));
            if ($tmp2575.value) {
            {
                ITable* $tmp2577 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2577->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2577 = $tmp2577->next;
                }
                $fn2579 $tmp2578 = $tmp2577->methods[0];
                panda$core$Object* $tmp2580 = $tmp2578(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2576 = ((org$pandalanguage$pandac$MethodRef*) $tmp2580)->value;
                panda$core$MutableString* $tmp2582 = (panda$core$MutableString*) malloc(48);
                $tmp2582->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2582->refCount.value = 1;
                panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2584, ((org$pandalanguage$pandac$Symbol*) first2576->owner)->name);
                panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
                panda$core$String* $tmp2588 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2576)->name);
                panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
                panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, $tmp2590);
                panda$core$MutableString$init$panda$core$String($tmp2582, $tmp2591);
                msg2581 = $tmp2582;
                separator2592 = &$s2593;
                {
                    ITable* $tmp2595 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2595->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2595 = $tmp2595->next;
                    }
                    $fn2597 $tmp2596 = $tmp2595->methods[0];
                    panda$collections$Iterator* $tmp2598 = $tmp2596(((panda$collections$Iterable*) p_args));
                    a$Iter2594 = $tmp2598;
                    $l2599:;
                    ITable* $tmp2601 = a$Iter2594->$class->itable;
                    while ($tmp2601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2601 = $tmp2601->next;
                    }
                    $fn2603 $tmp2602 = $tmp2601->methods[0];
                    panda$core$Bit $tmp2604 = $tmp2602(a$Iter2594);
                    panda$core$Bit $tmp2605 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2604);
                    if (!$tmp2605.value) goto $l2600;
                    {
                        ITable* $tmp2607 = a$Iter2594->$class->itable;
                        while ($tmp2607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2607 = $tmp2607->next;
                        }
                        $fn2609 $tmp2608 = $tmp2607->methods[1];
                        panda$core$Object* $tmp2610 = $tmp2608(a$Iter2594);
                        a2606 = ((org$pandalanguage$pandac$IRNode*) $tmp2610);
                        panda$core$MutableString$append$panda$core$String(msg2581, separator2592);
                        panda$core$MutableString$append$panda$core$Object(msg2581, ((panda$core$Object*) a2606->type));
                        separator2592 = &$s2611;
                    }
                    goto $l2599;
                    $l2600:;
                }
                panda$core$MutableString$append$panda$core$String(msg2581, &$s2612);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2613, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, &$s2615);
                    panda$core$MutableString$append$panda$core$String(msg2581, $tmp2616);
                }
                }
                panda$core$String* $tmp2617 = panda$core$MutableString$finish$R$panda$core$String(msg2581);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2617);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2618 = panda$collections$Array$get_count$R$panda$core$Int64(methods2571);
            panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2618, ((panda$core$Int64) { 1 }));
            if ($tmp2619.value) {
            {
                panda$core$Int64 $tmp2621 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2621, ((panda$core$Int64) { 1 }));
                if ($tmp2622.value) {
                {
                    panda$core$Object* $tmp2623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2620 = ((org$pandalanguage$pandac$IRNode*) $tmp2623);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2624 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2624, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2625.value);
                    target2620 = NULL;
                }
                }
                panda$core$Object* $tmp2626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2571, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2627 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2620, ((org$pandalanguage$pandac$MethodRef*) $tmp2626), p_args);
                return $tmp2627;
            }
            }
            panda$collections$Array* $tmp2629 = (panda$collections$Array*) malloc(40);
            $tmp2629->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2629->refCount.value = 1;
            panda$collections$Array$init($tmp2629);
            children2628 = $tmp2629;
            org$pandalanguage$pandac$IRNode* $tmp2631 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2631->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2633 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2631, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2633, ((panda$core$Object*) methods2571), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2628, ((panda$core$Object*) $tmp2631));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2628, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2635 = (panda$collections$Array*) malloc(40);
            $tmp2635->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2635->refCount.value = 1;
            panda$collections$Array$init($tmp2635);
            types2634 = $tmp2635;
            {
                ITable* $tmp2638 = ((panda$collections$Iterable*) methods2571)->$class->itable;
                while ($tmp2638->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2638 = $tmp2638->next;
                }
                $fn2640 $tmp2639 = $tmp2638->methods[0];
                panda$collections$Iterator* $tmp2641 = $tmp2639(((panda$collections$Iterable*) methods2571));
                m$Iter2637 = $tmp2641;
                $l2642:;
                ITable* $tmp2644 = m$Iter2637->$class->itable;
                while ($tmp2644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2644 = $tmp2644->next;
                }
                $fn2646 $tmp2645 = $tmp2644->methods[0];
                panda$core$Bit $tmp2647 = $tmp2645(m$Iter2637);
                panda$core$Bit $tmp2648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2647);
                if (!$tmp2648.value) goto $l2643;
                {
                    ITable* $tmp2650 = m$Iter2637->$class->itable;
                    while ($tmp2650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2650 = $tmp2650->next;
                    }
                    $fn2652 $tmp2651 = $tmp2650->methods[1];
                    panda$core$Object* $tmp2653 = $tmp2651(m$Iter2637);
                    m2649 = ((org$pandalanguage$pandac$MethodRef*) $tmp2653);
                    org$pandalanguage$pandac$Type* $tmp2654 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2649);
                    panda$collections$Array$add$panda$collections$Array$T(types2634, ((panda$core$Object*) $tmp2654));
                }
                goto $l2642;
                $l2643:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2655 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2655->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2655->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2657 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2657->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2657->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2657, ((panda$collections$ListView*) types2634));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2655, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2657, ((panda$collections$ListView*) children2628));
            return $tmp2655;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2660 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2660->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2660, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2659 = $tmp2660;
            org$pandalanguage$pandac$IRNode* $tmp2664 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2659, &$s2663, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2665 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2664);
            initCall2662 = $tmp2665;
            if (((panda$core$Bit) { initCall2662 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2667 = (panda$collections$Array*) malloc(40);
            $tmp2667->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2667->refCount.value = 1;
            panda$collections$Array$init($tmp2667);
            children2666 = $tmp2667;
            panda$collections$Array$add$panda$collections$Array$T(children2666, ((panda$core$Object*) initCall2662));
            org$pandalanguage$pandac$IRNode* $tmp2669 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2669->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2669->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2669, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2666));
            return $tmp2669;
        }
        break;
        case 1046:
        {
            c2671 = ((org$pandalanguage$pandac$ChoiceEntry*) p_m->payload);
            panda$core$Int64 $tmp2672 = panda$collections$Array$get_count$R$panda$core$Int64(c2671->fields);
            ITable* $tmp2673 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2673->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2673 = $tmp2673->next;
            }
            $fn2675 $tmp2674 = $tmp2673->methods[0];
            panda$core$Int64 $tmp2676 = $tmp2674(((panda$collections$CollectionView*) p_args));
            panda$core$Bit $tmp2677 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2672, $tmp2676);
            if ($tmp2677.value) {
            {
                panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2678, ((panda$core$Object*) p_m));
                panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
                panda$core$Int64 $tmp2682 = panda$collections$Array$get_count$R$panda$core$Int64(c2671->fields);
                panda$core$Int64$wrapper* $tmp2683;
                $tmp2683 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2683->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2683->refCount = 1;
                $tmp2683->value = $tmp2682;
                panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2681, ((panda$core$Object*) $tmp2683));
                panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, &$s2685);
                panda$core$Int64 $tmp2688 = panda$collections$Array$get_count$R$panda$core$Int64(c2671->fields);
                panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2688, ((panda$core$Int64) { 1 }));
                panda$core$Bit$wrapper* $tmp2690;
                $tmp2690 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp2690->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp2690->refCount = 1;
                $tmp2690->value = $tmp2689;
                ITable* $tmp2692 = ((panda$core$Formattable*) $tmp2690)->$class->itable;
                while ($tmp2692->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                    $tmp2692 = $tmp2692->next;
                }
                $fn2694 $tmp2693 = $tmp2692->methods[0];
                panda$core$String* $tmp2695 = $tmp2693(((panda$core$Formattable*) $tmp2690), &$s2691);
                panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2687, $tmp2695);
                panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2697);
                ITable* $tmp2699 = ((panda$collections$CollectionView*) p_args)->$class->itable;
                while ($tmp2699->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2699 = $tmp2699->next;
                }
                $fn2701 $tmp2700 = $tmp2699->methods[0];
                panda$core$Int64 $tmp2702 = $tmp2700(((panda$collections$CollectionView*) p_args));
                panda$core$Int64$wrapper* $tmp2703;
                $tmp2703 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2703->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2703->refCount = 1;
                $tmp2703->value = $tmp2702;
                panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2698, ((panda$core$Object*) $tmp2703));
                panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
                panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, $tmp2706);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2707);
                return NULL;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, c2671);
            panda$collections$Array* $tmp2709 = (panda$collections$Array*) malloc(40);
            $tmp2709->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2709->refCount.value = 1;
            panda$collections$Array$init($tmp2709);
            finalArgs2708 = $tmp2709;
            panda$core$UInt64 $tmp2712 = panda$core$Int64$convert$R$panda$core$UInt64(c2671->rawValue);
            value2711 = $tmp2712;
            org$pandalanguage$pandac$IRNode* $tmp2713 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2713->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2713->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2715 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2711);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2713, ((panda$core$Int64) { 1004 }), p_m->position, $tmp2715, value2711);
            panda$collections$Array$add$panda$collections$Array$T(finalArgs2708, ((panda$core$Object*) $tmp2713));
            ITable* $tmp2717 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2717->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2717 = $tmp2717->next;
            }
            $fn2719 $tmp2718 = $tmp2717->methods[0];
            panda$core$Int64 $tmp2720 = $tmp2718(((panda$collections$CollectionView*) p_args));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2716, ((panda$core$Int64) { 0 }), $tmp2720, ((panda$core$Bit) { false }));
            int64_t $tmp2722 = $tmp2716.min.value;
            panda$core$Int64 i2721 = { $tmp2722 };
            int64_t $tmp2724 = $tmp2716.max.value;
            bool $tmp2725 = $tmp2716.inclusive.value;
            if ($tmp2725) goto $l2732; else goto $l2733;
            $l2732:;
            if ($tmp2722 <= $tmp2724) goto $l2726; else goto $l2728;
            $l2733:;
            if ($tmp2722 < $tmp2724) goto $l2726; else goto $l2728;
            $l2726:;
            {
                ITable* $tmp2735 = p_args->$class->itable;
                while ($tmp2735->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2735 = $tmp2735->next;
                }
                $fn2737 $tmp2736 = $tmp2735->methods[0];
                panda$core$Object* $tmp2738 = $tmp2736(p_args, i2721);
                panda$core$Object* $tmp2739 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(c2671->fields, i2721);
                org$pandalanguage$pandac$IRNode* $tmp2740 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2738), ((org$pandalanguage$pandac$Type*) $tmp2739));
                arg2734 = $tmp2740;
                if (((panda$core$Bit) { arg2734 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2708, ((panda$core$Object*) arg2734));
            }
            $l2729:;
            int64_t $tmp2742 = $tmp2724 - i2721.value;
            if ($tmp2725) goto $l2743; else goto $l2744;
            $l2743:;
            if ((uint64_t) $tmp2742 >= 1) goto $l2741; else goto $l2728;
            $l2744:;
            if ((uint64_t) $tmp2742 > 1) goto $l2741; else goto $l2728;
            $l2741:;
            i2721.value += 1;
            goto $l2726;
            $l2728:;
            org$pandalanguage$pandac$IRNode* $tmp2748 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2748->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2748->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2750 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp2751 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2671->owner);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2748, ((panda$core$Int64) { 1001 }), p_m->position, $tmp2750, $tmp2751);
            owner2747 = $tmp2748;
            org$pandalanguage$pandac$IRNode* $tmp2752 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2747, ((panda$collections$ListView*) finalArgs2708));
            return $tmp2752;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2754 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2753 = $tmp2754;
            if (((panda$core$Bit) { resolved2753 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2755, ((panda$core$Object*) resolved2753->type));
            panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2756, &$s2757);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2753->position, $tmp2758);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2759;
    panda$core$MutableString* typeName2762;
    panda$core$String* separator2766;
    panda$collections$Iterator* p$Iter2768;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2780;
    panda$core$Int64 kind2786;
    panda$core$Char8 $tmp2792;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2760 = (panda$collections$Array*) malloc(40);
    $tmp2760->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2760->refCount.value = 1;
    panda$collections$Array$init($tmp2760);
    subtypes2759 = $tmp2760;
    panda$core$MutableString* $tmp2763 = (panda$core$MutableString*) malloc(48);
    $tmp2763->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2763->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2763, &$s2765);
    typeName2762 = $tmp2763;
    separator2766 = &$s2767;
    {
        ITable* $tmp2769 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2769 = $tmp2769->next;
        }
        $fn2771 $tmp2770 = $tmp2769->methods[0];
        panda$collections$Iterator* $tmp2772 = $tmp2770(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2768 = $tmp2772;
        $l2773:;
        ITable* $tmp2775 = p$Iter2768->$class->itable;
        while ($tmp2775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2775 = $tmp2775->next;
        }
        $fn2777 $tmp2776 = $tmp2775->methods[0];
        panda$core$Bit $tmp2778 = $tmp2776(p$Iter2768);
        panda$core$Bit $tmp2779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2778);
        if (!$tmp2779.value) goto $l2774;
        {
            ITable* $tmp2781 = p$Iter2768->$class->itable;
            while ($tmp2781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2781 = $tmp2781->next;
            }
            $fn2783 $tmp2782 = $tmp2781->methods[1];
            panda$core$Object* $tmp2784 = $tmp2782(p$Iter2768);
            p2780 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2784);
            panda$core$MutableString$append$panda$core$String(typeName2762, separator2766);
            panda$core$MutableString$append$panda$core$String(typeName2762, ((org$pandalanguage$pandac$Symbol*) p2780->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2759, ((panda$core$Object*) p2780->type));
            separator2766 = &$s2785;
        }
        goto $l2773;
        $l2774:;
    }
    panda$core$Bit $tmp2787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2787.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2762, &$s2788);
        kind2786 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2762, &$s2789);
        kind2786 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2759, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2790 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2791 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2790);
    if ($tmp2791.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2762, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2792, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2762, $tmp2792);
    org$pandalanguage$pandac$Type* $tmp2793 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2793->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2793->refCount.value = 1;
    panda$core$String* $tmp2795 = panda$core$MutableString$finish$R$panda$core$String(typeName2762);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2793, $tmp2795, kind2786, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2759), ((panda$core$Bit) { true }));
    return $tmp2793;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2796;
    panda$core$MutableString* typeName2799;
    panda$collections$Iterator* p$Iter2803;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2815;
    panda$core$Int64 kind2821;
    panda$core$Char8 $tmp2827;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2797 = (panda$collections$Array*) malloc(40);
    $tmp2797->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2797->refCount.value = 1;
    panda$collections$Array$init($tmp2797);
    subtypes2796 = $tmp2797;
    panda$core$MutableString* $tmp2800 = (panda$core$MutableString*) malloc(48);
    $tmp2800->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2800->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2800, &$s2802);
    typeName2799 = $tmp2800;
    panda$core$MutableString$append$panda$core$String(typeName2799, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2796, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2804 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2804->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2804 = $tmp2804->next;
        }
        $fn2806 $tmp2805 = $tmp2804->methods[0];
        panda$collections$Iterator* $tmp2807 = $tmp2805(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2803 = $tmp2807;
        $l2808:;
        ITable* $tmp2810 = p$Iter2803->$class->itable;
        while ($tmp2810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2810 = $tmp2810->next;
        }
        $fn2812 $tmp2811 = $tmp2810->methods[0];
        panda$core$Bit $tmp2813 = $tmp2811(p$Iter2803);
        panda$core$Bit $tmp2814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2813);
        if (!$tmp2814.value) goto $l2809;
        {
            ITable* $tmp2816 = p$Iter2803->$class->itable;
            while ($tmp2816->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2816 = $tmp2816->next;
            }
            $fn2818 $tmp2817 = $tmp2816->methods[1];
            panda$core$Object* $tmp2819 = $tmp2817(p$Iter2803);
            p2815 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2819);
            panda$core$MutableString$append$panda$core$String(typeName2799, &$s2820);
            panda$core$MutableString$append$panda$core$String(typeName2799, ((org$pandalanguage$pandac$Symbol*) p2815->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2796, ((panda$core$Object*) p2815->type));
        }
        goto $l2808;
        $l2809:;
    }
    panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2822.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2799, &$s2823);
        kind2821 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2799, &$s2824);
        kind2821 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2796, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2825 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2826 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2825);
    if ($tmp2826.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2799, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2827, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2799, $tmp2827);
    org$pandalanguage$pandac$Type* $tmp2828 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2828->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2828->refCount.value = 1;
    panda$core$String* $tmp2830 = panda$core$MutableString$finish$R$panda$core$String(typeName2799);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2828, $tmp2830, kind2821, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2796), ((panda$core$Bit) { true }));
    return $tmp2828;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2831;
    org$pandalanguage$pandac$MethodDecl* $tmp2832 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2831 = $tmp2832;
    if (((panda$core$Bit) { inherited2831 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2833 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2833;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2834 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2831);
    return $tmp2834;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2835 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2836 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2835);
    return $tmp2836;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2837;
    org$pandalanguage$pandac$MethodDecl* $tmp2838 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2837 = $tmp2838;
    if (((panda$core$Bit) { inherited2837 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2839 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2839;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2840 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2837, p_selfType);
    return $tmp2840;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(org$pandalanguage$pandac$parser$Token$Kind p_op) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2059_92841;
    {
        $match$2059_92841 = p_op;
        panda$core$Bit $tmp2842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp2842.value) {
        {
            return &$s2843;
        }
        }
        else {
        panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2844.value) {
        {
            return &$s2845;
        }
        }
        else {
        panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp2846.value) {
        {
            return &$s2847;
        }
        }
        else {
        panda$core$Bit $tmp2848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp2848.value) {
        {
            return &$s2849;
        }
        }
        else {
        panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp2850.value) {
        {
            return &$s2851;
        }
        }
        else {
        panda$core$Bit $tmp2852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp2852.value) {
        {
            return &$s2853;
        }
        }
        else {
        panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 57 }));
        if ($tmp2854.value) {
        {
            return &$s2855;
        }
        }
        else {
        panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2856.value) {
        {
            return &$s2857;
        }
        }
        else {
        panda$core$Bit $tmp2858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp2858.value) {
        {
            return &$s2859;
        }
        }
        else {
        panda$core$Bit $tmp2860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp2860.value) {
        {
            return &$s2861;
        }
        }
        else {
        panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp2862.value) {
        {
            return &$s2863;
        }
        }
        else {
        panda$core$Bit $tmp2864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp2864.value) {
        {
            return &$s2865;
        }
        }
        else {
        panda$core$Bit $tmp2866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp2866.value) {
        {
            return &$s2867;
        }
        }
        else {
        panda$core$Bit $tmp2868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp2868.value) {
        {
            return &$s2869;
        }
        }
        else {
        panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp2870.value) {
        {
            return &$s2871;
        }
        }
        else {
        panda$core$Bit $tmp2872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp2872.value) {
        {
            return &$s2873;
        }
        }
        else {
        panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp2874.value) {
        {
            return &$s2875;
        }
        }
        else {
        panda$core$Bit $tmp2876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 70 }));
        if ($tmp2876.value) {
        {
            return &$s2877;
        }
        }
        else {
        panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 71 }));
        if ($tmp2878.value) {
        {
            return &$s2879;
        }
        }
        else {
        panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2880.value) {
        {
            return &$s2881;
        }
        }
        else {
        panda$core$Bit $tmp2882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2882.value) {
        {
            return &$s2883;
        }
        }
        else {
        panda$core$Bit $tmp2884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp2884.value) {
        {
            return &$s2885;
        }
        }
        else {
        panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2886.value) {
        {
            return &$s2887;
        }
        }
        else {
        panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp2888.value) {
        {
            return &$s2889;
        }
        }
        else {
        panda$core$Bit $tmp2890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 73 }));
        if ($tmp2890.value) {
        {
            return &$s2891;
        }
        }
        else {
        panda$core$Bit $tmp2892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp2892.value) {
        {
            return &$s2893;
        }
        }
        else {
        panda$core$Bit $tmp2894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp2894.value) {
        {
            return &$s2895;
        }
        }
        else {
        panda$core$Bit $tmp2896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2059_92841.$rawValue, ((panda$core$Int64) { 89 }));
        if ($tmp2896.value) {
        {
            return &$s2897;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
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
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(org$pandalanguage$pandac$parser$Token$Kind p_op) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2095_92898;
    {
        $match$2095_92898 = p_op;
        panda$core$Bit $tmp2913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 74 }));
        bool $tmp2912 = $tmp2913.value;
        if ($tmp2912) goto $l2914;
        panda$core$Bit $tmp2915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp2912 = $tmp2915.value;
        $l2914:;
        panda$core$Bit $tmp2916 = { $tmp2912 };
        bool $tmp2911 = $tmp2916.value;
        if ($tmp2911) goto $l2917;
        panda$core$Bit $tmp2918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp2911 = $tmp2918.value;
        $l2917:;
        panda$core$Bit $tmp2919 = { $tmp2911 };
        bool $tmp2910 = $tmp2919.value;
        if ($tmp2910) goto $l2920;
        panda$core$Bit $tmp2921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp2910 = $tmp2921.value;
        $l2920:;
        panda$core$Bit $tmp2922 = { $tmp2910 };
        bool $tmp2909 = $tmp2922.value;
        if ($tmp2909) goto $l2923;
        panda$core$Bit $tmp2924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp2909 = $tmp2924.value;
        $l2923:;
        panda$core$Bit $tmp2925 = { $tmp2909 };
        bool $tmp2908 = $tmp2925.value;
        if ($tmp2908) goto $l2926;
        panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp2908 = $tmp2927.value;
        $l2926:;
        panda$core$Bit $tmp2928 = { $tmp2908 };
        bool $tmp2907 = $tmp2928.value;
        if ($tmp2907) goto $l2929;
        panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp2907 = $tmp2930.value;
        $l2929:;
        panda$core$Bit $tmp2931 = { $tmp2907 };
        bool $tmp2906 = $tmp2931.value;
        if ($tmp2906) goto $l2932;
        panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp2906 = $tmp2933.value;
        $l2932:;
        panda$core$Bit $tmp2934 = { $tmp2906 };
        bool $tmp2905 = $tmp2934.value;
        if ($tmp2905) goto $l2935;
        panda$core$Bit $tmp2936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp2905 = $tmp2936.value;
        $l2935:;
        panda$core$Bit $tmp2937 = { $tmp2905 };
        bool $tmp2904 = $tmp2937.value;
        if ($tmp2904) goto $l2938;
        panda$core$Bit $tmp2939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp2904 = $tmp2939.value;
        $l2938:;
        panda$core$Bit $tmp2940 = { $tmp2904 };
        bool $tmp2903 = $tmp2940.value;
        if ($tmp2903) goto $l2941;
        panda$core$Bit $tmp2942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp2903 = $tmp2942.value;
        $l2941:;
        panda$core$Bit $tmp2943 = { $tmp2903 };
        bool $tmp2902 = $tmp2943.value;
        if ($tmp2902) goto $l2944;
        panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp2902 = $tmp2945.value;
        $l2944:;
        panda$core$Bit $tmp2946 = { $tmp2902 };
        bool $tmp2901 = $tmp2946.value;
        if ($tmp2901) goto $l2947;
        panda$core$Bit $tmp2948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp2901 = $tmp2948.value;
        $l2947:;
        panda$core$Bit $tmp2949 = { $tmp2901 };
        bool $tmp2900 = $tmp2949.value;
        if ($tmp2900) goto $l2950;
        panda$core$Bit $tmp2951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp2900 = $tmp2951.value;
        $l2950:;
        panda$core$Bit $tmp2952 = { $tmp2900 };
        bool $tmp2899 = $tmp2952.value;
        if ($tmp2899) goto $l2953;
        panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92898.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp2899 = $tmp2954.value;
        $l2953:;
        panda$core$Bit $tmp2955 = { $tmp2899 };
        if ($tmp2955.value) {
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
org$pandalanguage$pandac$parser$Token$Kind org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(org$pandalanguage$pandac$parser$Token$Kind p_op) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2109_92956;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2958;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2960;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2962;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2964;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2966;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2968;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2970;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2972;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2974;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2976;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2978;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2980;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2982;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2984;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2986;
    {
        $match$2109_92956 = p_op;
        panda$core$Bit $tmp2957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 74 }));
        if ($tmp2957.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2958, ((panda$core$Int64) { 51 }));
            return $tmp2958;
        }
        }
        else {
        panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 75 }));
        if ($tmp2959.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2960, ((panda$core$Int64) { 52 }));
            return $tmp2960;
        }
        }
        else {
        panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 76 }));
        if ($tmp2961.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2962, ((panda$core$Int64) { 53 }));
            return $tmp2962;
        }
        }
        else {
        panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 77 }));
        if ($tmp2963.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2964, ((panda$core$Int64) { 54 }));
            return $tmp2964;
        }
        }
        else {
        panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 79 }));
        if ($tmp2965.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2966, ((panda$core$Int64) { 55 }));
            return $tmp2966;
        }
        }
        else {
        panda$core$Bit $tmp2967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 78 }));
        if ($tmp2967.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2968, ((panda$core$Int64) { 56 }));
            return $tmp2968;
        }
        }
        else {
        panda$core$Bit $tmp2969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 80 }));
        if ($tmp2969.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2970, ((panda$core$Int64) { 57 }));
            return $tmp2970;
        }
        }
        else {
        panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 81 }));
        if ($tmp2971.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2972, ((panda$core$Int64) { 68 }));
            return $tmp2972;
        }
        }
        else {
        panda$core$Bit $tmp2973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 82 }));
        if ($tmp2973.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2974, ((panda$core$Int64) { 69 }));
            return $tmp2974;
        }
        }
        else {
        panda$core$Bit $tmp2975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 83 }));
        if ($tmp2975.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2976, ((panda$core$Int64) { 66 }));
            return $tmp2976;
        }
        }
        else {
        panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 84 }));
        if ($tmp2977.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2978, ((panda$core$Int64) { 67 }));
            return $tmp2978;
        }
        }
        else {
        panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 85 }));
        if ($tmp2979.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2980, ((panda$core$Int64) { 70 }));
            return $tmp2980;
        }
        }
        else {
        panda$core$Bit $tmp2981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 86 }));
        if ($tmp2981.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2982, ((panda$core$Int64) { 71 }));
            return $tmp2982;
        }
        }
        else {
        panda$core$Bit $tmp2983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 87 }));
        if ($tmp2983.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2984, ((panda$core$Int64) { 72 }));
            return $tmp2984;
        }
        }
        else {
        panda$core$Bit $tmp2985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92956.$rawValue, ((panda$core$Int64) { 88 }));
        if ($tmp2985.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2986, ((panda$core$Int64) { 1 }));
            return $tmp2986;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
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
    switch (p_expr->kind.value) {
        case 1009:
        {
            panda$core$Int64 $tmp2987 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2987, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2988.value);
            panda$core$Bit $tmp2989 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2989.value) {
            {
                panda$core$Object* $tmp2990 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2991 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2990));
                return $tmp2991;
            }
            }
            return ((panda$core$Bit) { false });
        }
        break;
        case 1026:
        case 1016:
        case 1047:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2993 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2992));
            return $tmp2993;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l3019;
    panda$core$Int64 r3021;
    org$pandalanguage$pandac$parser$Token$Kind $match$2156_133023;
    panda$core$UInt64 v3025;
    panda$core$UInt64 v3032;
    panda$core$UInt64 v3039;
    panda$core$UInt64 v3046;
    panda$core$UInt64 v3053;
    panda$core$UInt64 v3090;
    panda$core$UInt64 v3097;
    panda$core$UInt64 v3104;
    panda$core$UInt64 v3111;
    panda$core$UInt64 v3118;
    panda$core$Bit $tmp2995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2994 = $tmp2995.value;
    if ($tmp2994) goto $l2996;
    panda$core$Bit $tmp2997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2994 = $tmp2997.value;
    $l2996:;
    panda$core$Bit $tmp2998 = { $tmp2994 };
    PANDA_ASSERT($tmp2998.value);
    panda$core$Bit $tmp3000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2999 = $tmp3000.value;
    if ($tmp2999) goto $l3001;
    panda$core$Bit $tmp3002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2999 = $tmp3002.value;
    $l3001:;
    panda$core$Bit $tmp3003 = { $tmp2999 };
    PANDA_ASSERT($tmp3003.value);
    panda$core$Bit $tmp3006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp3005 = $tmp3006.value;
    if ($tmp3005) goto $l3007;
    panda$core$UInt64 $tmp3009 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp3010 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp3009);
    bool $tmp3008 = $tmp3010.value;
    if (!$tmp3008) goto $l3011;
    panda$core$Bit $tmp3012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp3008 = $tmp3012.value;
    $l3011:;
    panda$core$Bit $tmp3013 = { $tmp3008 };
    $tmp3005 = $tmp3013.value;
    $l3007:;
    panda$core$Bit $tmp3014 = { $tmp3005 };
    bool $tmp3004 = $tmp3014.value;
    if ($tmp3004) goto $l3015;
    panda$core$UInt64 $tmp3016 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp3017 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp3016);
    $tmp3004 = $tmp3017.value;
    $l3015:;
    panda$core$Bit $tmp3018 = { $tmp3004 };
    if ($tmp3018.value) {
    {
        panda$core$Int64 $tmp3020 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l3019 = $tmp3020;
        panda$core$Int64 $tmp3022 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r3021 = $tmp3022;
        {
            $match$2156_133023 = p_op;
            panda$core$Bit $tmp3024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 51 }));
            if ($tmp3024.value) {
            {
                panda$core$Int64 $tmp3026 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3027 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3026);
                v3025 = $tmp3027;
                org$pandalanguage$pandac$IRNode* $tmp3028 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3028->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3028->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3030 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3025);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3028, ((panda$core$Int64) { 1004 }), p_position, $tmp3030, v3025);
                return $tmp3028;
            }
            }
            else {
            panda$core$Bit $tmp3031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 52 }));
            if ($tmp3031.value) {
            {
                panda$core$Int64 $tmp3033 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3034 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3033);
                v3032 = $tmp3034;
                org$pandalanguage$pandac$IRNode* $tmp3035 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3035->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3035->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3037 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3032);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3035, ((panda$core$Int64) { 1004 }), p_position, $tmp3037, v3032);
                return $tmp3035;
            }
            }
            else {
            panda$core$Bit $tmp3038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 53 }));
            if ($tmp3038.value) {
            {
                panda$core$Int64 $tmp3040 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3041 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3040);
                v3039 = $tmp3041;
                org$pandalanguage$pandac$IRNode* $tmp3042 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3042->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3042->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3044 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3039);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3042, ((panda$core$Int64) { 1004 }), p_position, $tmp3044, v3039);
                return $tmp3042;
            }
            }
            else {
            panda$core$Bit $tmp3045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 55 }));
            if ($tmp3045.value) {
            {
                panda$core$Int64 $tmp3047 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3048 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3047);
                v3046 = $tmp3048;
                org$pandalanguage$pandac$IRNode* $tmp3049 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3049->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3049->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3051 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3046);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3049, ((panda$core$Int64) { 1004 }), p_position, $tmp3051, v3046);
                return $tmp3049;
            }
            }
            else {
            panda$core$Bit $tmp3052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 56 }));
            if ($tmp3052.value) {
            {
                panda$core$Int64 $tmp3054 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3055 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3054);
                v3053 = $tmp3055;
                org$pandalanguage$pandac$IRNode* $tmp3056 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3056->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3056->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3058 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3053);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3056, ((panda$core$Int64) { 1004 }), p_position, $tmp3058, v3053);
                return $tmp3056;
            }
            }
            else {
            panda$core$Bit $tmp3059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp3059.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3060 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3060->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3060->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3062 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l3019, r3021);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3060, ((panda$core$Int64) { 1011 }), p_position, $tmp3062, $tmp3063);
                return $tmp3060;
            }
            }
            else {
            panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 59 }));
            if ($tmp3064.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3065 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3065->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3065->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3067 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3068 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l3019, r3021);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3065, ((panda$core$Int64) { 1011 }), p_position, $tmp3067, $tmp3068);
                return $tmp3065;
            }
            }
            else {
            panda$core$Bit $tmp3069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp3069.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3070 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3070->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3070->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3072 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3073 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l3019, r3021);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3070, ((panda$core$Int64) { 1011 }), p_position, $tmp3072, $tmp3073);
                return $tmp3070;
            }
            }
            else {
            panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp3074.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3075 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3075->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3075->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3077 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3078 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l3019, r3021);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3075, ((panda$core$Int64) { 1011 }), p_position, $tmp3077, $tmp3078);
                return $tmp3075;
            }
            }
            else {
            panda$core$Bit $tmp3079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 64 }));
            if ($tmp3079.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3080 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3080->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3082 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3083 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l3019, r3021);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3080, ((panda$core$Int64) { 1011 }), p_position, $tmp3082, $tmp3083);
                return $tmp3080;
            }
            }
            else {
            panda$core$Bit $tmp3084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 65 }));
            if ($tmp3084.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3085 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3085->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3085->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3087 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3088 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l3019, r3021);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3085, ((panda$core$Int64) { 1011 }), p_position, $tmp3087, $tmp3088);
                return $tmp3085;
            }
            }
            else {
            panda$core$Bit $tmp3089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 67 }));
            if ($tmp3089.value) {
            {
                panda$core$Int64 $tmp3091 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3092 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3091);
                v3090 = $tmp3092;
                org$pandalanguage$pandac$IRNode* $tmp3093 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3093->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3093->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3095 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3090);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3093, ((panda$core$Int64) { 1004 }), p_position, $tmp3095, v3090);
                return $tmp3093;
            }
            }
            else {
            panda$core$Bit $tmp3096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 69 }));
            if ($tmp3096.value) {
            {
                panda$core$Int64 $tmp3098 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3099 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3098);
                v3097 = $tmp3099;
                org$pandalanguage$pandac$IRNode* $tmp3100 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3100->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3100->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3102 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3097);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3100, ((panda$core$Int64) { 1004 }), p_position, $tmp3102, v3097);
                return $tmp3100;
            }
            }
            else {
            panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 71 }));
            if ($tmp3103.value) {
            {
                panda$core$Int64 $tmp3105 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3106 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3105);
                v3104 = $tmp3106;
                org$pandalanguage$pandac$IRNode* $tmp3107 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3107->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3107->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3109 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3104);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3107, ((panda$core$Int64) { 1004 }), p_position, $tmp3109, v3104);
                return $tmp3107;
            }
            }
            else {
            panda$core$Bit $tmp3110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 72 }));
            if ($tmp3110.value) {
            {
                panda$core$Int64 $tmp3112 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3113 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3112);
                v3111 = $tmp3113;
                org$pandalanguage$pandac$IRNode* $tmp3114 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3114->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3114->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3116 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3111);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3114, ((panda$core$Int64) { 1004 }), p_position, $tmp3116, v3111);
                return $tmp3114;
            }
            }
            else {
            panda$core$Bit $tmp3117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133023.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp3117.value) {
            {
                panda$core$Int64 $tmp3119 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l3019, r3021);
                panda$core$UInt64 $tmp3120 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3119);
                v3118 = $tmp3120;
                org$pandalanguage$pandac$IRNode* $tmp3121 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3121->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3121->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3123 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3118);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3121, ((panda$core$Int64) { 1004 }), p_position, $tmp3123, v3118);
                return $tmp3121;
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
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s3124);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp3125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp3125.value) {
    {
        panda$core$Object* $tmp3126 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp3126);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args3131;
    org$pandalanguage$pandac$IRNode* resolved3139;
    panda$collections$Array* children3144;
    panda$core$UInt64 baseId3150;
    org$pandalanguage$pandac$IRNode* base3151;
    panda$core$UInt64 indexId3159;
    org$pandalanguage$pandac$IRNode* index3160;
    org$pandalanguage$pandac$IRNode* baseRef3166;
    org$pandalanguage$pandac$IRNode* indexRef3169;
    org$pandalanguage$pandac$IRNode* rhsIndex3172;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3173;
    org$pandalanguage$pandac$IRNode* value3175;
    panda$core$Bit $tmp3127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp3127.value);
    panda$core$Int64 $tmp3128 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp3129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3128, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3129.value);
    panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 73 }));
    if ($tmp3130.value) {
    {
        panda$collections$Array* $tmp3132 = (panda$collections$Array*) malloc(40);
        $tmp3132->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3132->refCount.value = 1;
        panda$collections$Array$init($tmp3132);
        args3131 = $tmp3132;
        panda$core$Object* $tmp3134 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args3131, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3134)));
        panda$collections$Array$add$panda$collections$Array$T(args3131, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp3135 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3137 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp3135), &$s3136, ((panda$collections$ListView*) args3131));
        return $tmp3137;
    }
    }
    panda$core$Bit $tmp3138 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp3138.value);
    org$pandalanguage$pandac$IRNode* $tmp3140 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved3139 = $tmp3140;
    if (((panda$core$Bit) { resolved3139 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3141 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved3139);
    resolved3139 = $tmp3141;
    panda$core$Int64 $tmp3142 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved3139->children);
    panda$core$Bit $tmp3143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3142, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3143.value);
    panda$collections$Array* $tmp3145 = (panda$collections$Array*) malloc(40);
    $tmp3145->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3145->refCount.value = 1;
    panda$collections$Array$init($tmp3145);
    children3144 = $tmp3145;
    panda$core$Object* $tmp3147 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved3139->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3148 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp3147));
    panda$collections$Array$add$panda$collections$Array$T(children3144, ((panda$core$Object*) $tmp3148));
    panda$core$UInt64 $tmp3149 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp3149;
    baseId3150 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp3152 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3152->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3152->refCount.value = 1;
    panda$core$Object* $tmp3154 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3144, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3155 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3144, ((panda$core$Int64) { 0 }));
    panda$core$UInt64$wrapper* $tmp3156;
    $tmp3156 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3156->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3156->refCount = 1;
    $tmp3156->value = baseId3150;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3152, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp3154)->position, ((org$pandalanguage$pandac$IRNode*) $tmp3155)->type, ((panda$core$Object*) $tmp3156), ((panda$collections$ListView*) children3144));
    base3151 = $tmp3152;
    panda$collections$Array$clear(children3144);
    panda$core$Object* $tmp3157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved3139->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children3144, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3157)));
    panda$core$UInt64 $tmp3158 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp3158;
    indexId3159 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp3161 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3161->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3161->refCount.value = 1;
    panda$core$Object* $tmp3163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3144, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3164 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3144, ((panda$core$Int64) { 0 }));
    panda$core$UInt64$wrapper* $tmp3165;
    $tmp3165 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3165->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3165->refCount = 1;
    $tmp3165->value = indexId3159;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3161, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp3163)->position, ((org$pandalanguage$pandac$IRNode*) $tmp3164)->type, ((panda$core$Object*) $tmp3165), ((panda$collections$ListView*) children3144));
    index3160 = $tmp3161;
    org$pandalanguage$pandac$IRNode* $tmp3167 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3167->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3167->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3167, ((panda$core$Int64) { 1028 }), base3151->position, base3151->type, baseId3150);
    baseRef3166 = $tmp3167;
    org$pandalanguage$pandac$IRNode* $tmp3170 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3170->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3170->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3170, ((panda$core$Int64) { 1028 }), index3160->position, index3160->type, indexId3159);
    indexRef3169 = $tmp3170;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3173, ((panda$core$Int64) { 101 }));
    org$pandalanguage$pandac$IRNode* $tmp3174 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef3166, $tmp3173, indexRef3169);
    rhsIndex3172 = $tmp3174;
    if (((panda$core$Bit) { rhsIndex3172 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind $tmp3176 = org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3177 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex3172, $tmp3176, p_right);
    value3175 = $tmp3177;
    if (((panda$core$Bit) { value3175 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3180 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex3172->type);
    bool $tmp3179 = $tmp3180.value;
    if (!$tmp3179) goto $l3181;
    panda$core$Bit $tmp3182 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp3179 = $tmp3182.value;
    $l3181:;
    panda$core$Bit $tmp3183 = { $tmp3179 };
    bool $tmp3178 = $tmp3183.value;
    if (!$tmp3178) goto $l3184;
    panda$core$Bit $tmp3185 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex3172->type, value3175->type);
    $tmp3178 = $tmp3185.value;
    $l3184:;
    panda$core$Bit $tmp3186 = { $tmp3178 };
    if ($tmp3186.value) {
    {
        panda$collections$Array* $tmp3188 = (panda$collections$Array*) malloc(40);
        $tmp3188->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3188->refCount.value = 1;
        panda$collections$Array$init($tmp3188);
        org$pandalanguage$pandac$IRNode* $tmp3190 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3175, &$s3187, ((panda$collections$ListView*) $tmp3188), resolved3139->type);
        value3175 = $tmp3190;
        if (((panda$core$Bit) { value3175 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children3144);
    panda$collections$Array$add$panda$collections$Array$T(children3144, ((panda$core$Object*) index3160));
    panda$collections$Array$add$panda$collections$Array$T(children3144, ((panda$core$Object*) value3175));
    org$pandalanguage$pandac$IRNode* $tmp3192 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base3151, &$s3191, ((panda$collections$ListView*) children3144));
    return $tmp3192;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left3193;
    org$pandalanguage$pandac$IRNode* right3194;
    panda$core$Int64 kind3218;
    org$pandalanguage$pandac$IRNode* resolved3225;
    panda$collections$Array* children3227;
    org$pandalanguage$pandac$IRNode* resolved3234;
    panda$collections$Array* children3236;
    panda$collections$Array* children3253;
    org$pandalanguage$pandac$IRNode* reusedLeft3259;
    org$pandalanguage$pandac$IRNode* toNonNullable3262;
    org$pandalanguage$pandac$IRNode* comparison3265;
    org$pandalanguage$pandac$IRNode* nullCheck3267;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3268;
    org$pandalanguage$pandac$ClassDecl* cl3288;
    org$pandalanguage$pandac$ClassDecl* cl3305;
    org$pandalanguage$pandac$IRNode* finalLeft3321;
    org$pandalanguage$pandac$IRNode* finalRight3324;
    panda$collections$Array* children3327;
    panda$collections$Array* children3342;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3347;
    panda$collections$Array* children3356;
    org$pandalanguage$pandac$IRNode* reusedLeft3363;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3377;
    org$pandalanguage$pandac$ClassDecl* cl3382;
    panda$collections$ListView* parameters3384;
    org$pandalanguage$pandac$Symbol* methods3386;
    org$pandalanguage$pandac$Type* type3390;
    panda$collections$Array* types3391;
    org$pandalanguage$pandac$MethodDecl* m3395;
    panda$collections$Iterator* m$Iter3400;
    org$pandalanguage$pandac$MethodDecl* m3412;
    panda$collections$Array* children3423;
    panda$collections$Array* children3452;
    panda$collections$Array* children3469;
    org$pandalanguage$pandac$Type* resultType3492;
    org$pandalanguage$pandac$parser$Token$Kind $match$2495_133493;
    org$pandalanguage$pandac$IRNode* result3519;
    org$pandalanguage$pandac$IRNode* resolved3522;
    org$pandalanguage$pandac$IRNode* target3528;
    left3193 = p_rawLeft;
    right3194 = p_rawRight;
    panda$core$Bit $tmp3195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3193->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp3195.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3196 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3194);
        right3194 = $tmp3196;
        if (((panda$core$Bit) { right3194 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp3197 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left3193, right3194->type);
        if (((panda$core$Bit) { $tmp3197.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3198 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3193, right3194->type);
            left3193 = $tmp3198;
        }
        }
    }
    }
    panda$core$Bit $tmp3200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3194->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp3199 = $tmp3200.value;
    if (!$tmp3199) goto $l3201;
    panda$core$Int64$nullable $tmp3202 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3194, left3193->type);
    $tmp3199 = ((panda$core$Bit) { $tmp3202.nonnull }).value;
    $l3201:;
    panda$core$Bit $tmp3203 = { $tmp3199 };
    if ($tmp3203.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3204 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3194, left3193->type);
        right3194 = $tmp3204;
    }
    }
    panda$core$Bit $tmp3208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
    bool $tmp3207 = $tmp3208.value;
    if ($tmp3207) goto $l3209;
    panda$core$Bit $tmp3210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 59 }));
    $tmp3207 = $tmp3210.value;
    $l3209:;
    panda$core$Bit $tmp3211 = { $tmp3207 };
    bool $tmp3206 = $tmp3211.value;
    if ($tmp3206) goto $l3212;
    panda$core$Bit $tmp3213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 60 }));
    $tmp3206 = $tmp3213.value;
    $l3212:;
    panda$core$Bit $tmp3214 = { $tmp3206 };
    bool $tmp3205 = $tmp3214.value;
    if ($tmp3205) goto $l3215;
    panda$core$Bit $tmp3216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 61 }));
    $tmp3205 = $tmp3216.value;
    $l3215:;
    panda$core$Bit $tmp3217 = { $tmp3205 };
    if ($tmp3217.value) {
    {
        panda$core$Bit $tmp3220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
        bool $tmp3219 = $tmp3220.value;
        if ($tmp3219) goto $l3221;
        panda$core$Bit $tmp3222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 60 }));
        $tmp3219 = $tmp3222.value;
        $l3221:;
        panda$core$Bit $tmp3223 = { $tmp3219 };
        if ($tmp3223.value) {
        {
            kind3218 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind3218 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3193->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3224.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3226 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3194);
            resolved3225 = $tmp3226;
            if (((panda$core$Bit) { resolved3225 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3228 = (panda$collections$Array*) malloc(40);
            $tmp3228->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3228->refCount.value = 1;
            panda$collections$Array$init($tmp3228);
            children3227 = $tmp3228;
            panda$collections$Array$add$panda$collections$Array$T(children3227, ((panda$core$Object*) resolved3225));
            org$pandalanguage$pandac$IRNode* $tmp3230 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3230->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3230->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3232 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3230, kind3218, p_position, $tmp3232, ((panda$collections$ListView*) children3227));
            return $tmp3230;
        }
        }
        panda$core$Bit $tmp3233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3194->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3233.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3235 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3193);
            resolved3234 = $tmp3235;
            if (((panda$core$Bit) { resolved3234 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3237 = (panda$collections$Array*) malloc(40);
            $tmp3237->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3237->refCount.value = 1;
            panda$collections$Array$init($tmp3237);
            children3236 = $tmp3237;
            panda$collections$Array$add$panda$collections$Array$T(children3236, ((panda$core$Object*) resolved3234));
            org$pandalanguage$pandac$IRNode* $tmp3239 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3239->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3239->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3241 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3239, kind3218, p_position, $tmp3241, ((panda$collections$ListView*) children3236));
            return $tmp3239;
        }
        }
    }
    }
    panda$core$Bit $tmp3244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
    bool $tmp3243 = $tmp3244.value;
    if ($tmp3243) goto $l3245;
    panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 59 }));
    $tmp3243 = $tmp3246.value;
    $l3245:;
    panda$core$Bit $tmp3247 = { $tmp3243 };
    bool $tmp3242 = $tmp3247.value;
    if (!$tmp3242) goto $l3248;
    panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3193->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp3242 = $tmp3249.value;
    $l3248:;
    panda$core$Bit $tmp3250 = { $tmp3242 };
    if ($tmp3250.value) {
    {
        panda$core$Bit $tmp3251 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right3194->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp3251.value);
        panda$core$UInt64 $tmp3252 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3252;
        panda$collections$Array* $tmp3254 = (panda$collections$Array*) malloc(40);
        $tmp3254->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3254->refCount.value = 1;
        panda$collections$Array$init($tmp3254);
        children3253 = $tmp3254;
        panda$collections$Array$add$panda$collections$Array$T(children3253, ((panda$core$Object*) left3193));
        org$pandalanguage$pandac$IRNode* $tmp3256 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3256->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3256->refCount.value = 1;
        panda$core$UInt64$wrapper* $tmp3258;
        $tmp3258 = (panda$core$UInt64$wrapper*) malloc(24);
        $tmp3258->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
        $tmp3258->refCount = 1;
        $tmp3258->value = self->reusedValueCount;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3256, ((panda$core$Int64) { 1027 }), left3193->position, left3193->type, ((panda$core$Object*) $tmp3258), ((panda$collections$ListView*) children3253));
        left3193 = $tmp3256;
        org$pandalanguage$pandac$IRNode* $tmp3260 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3260->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3260->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3260, ((panda$core$Int64) { 1028 }), left3193->position, left3193->type, self->reusedValueCount);
        reusedLeft3259 = $tmp3260;
        panda$core$Object* $tmp3263 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left3193->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3264 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft3259, ((org$pandalanguage$pandac$Type*) $tmp3263));
        toNonNullable3262 = $tmp3264;
        org$pandalanguage$pandac$IRNode* $tmp3266 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable3262, p_op, right3194);
        comparison3265 = $tmp3266;
        if (((panda$core$Bit) { comparison3265 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3268, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode* $tmp3269 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3269->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3269->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3271 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3269, ((panda$core$Int64) { 1030 }), p_position, $tmp3271);
        org$pandalanguage$pandac$IRNode* $tmp3272 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3193, $tmp3268, $tmp3269);
        nullCheck3267 = $tmp3272;
        if (((panda$core$Bit) { nullCheck3267 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children3253);
        panda$collections$Array$add$panda$collections$Array$T(children3253, ((panda$core$Object*) nullCheck3267));
        panda$collections$Array$add$panda$collections$Array$T(children3253, ((panda$core$Object*) comparison3265));
        org$pandalanguage$pandac$IRNode* $tmp3273 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3273->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3273->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3275 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3273, ((panda$core$Int64) { 1011 }), p_position, $tmp3275, $tmp3276);
        org$pandalanguage$pandac$Type* $tmp3277 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3278 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3273, $tmp3277);
        panda$collections$Array$add$panda$collections$Array$T(children3253, ((panda$core$Object*) $tmp3278));
        org$pandalanguage$pandac$IRNode* $tmp3279 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3279->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3279->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3281 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3279, ((panda$core$Int64) { 1044 }), p_position, $tmp3281, ((panda$collections$ListView*) children3253));
        return $tmp3279;
    }
    }
    panda$core$Bit $tmp3283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 60 }));
    bool $tmp3282 = $tmp3283.value;
    if ($tmp3282) goto $l3284;
    panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 61 }));
    $tmp3282 = $tmp3285.value;
    $l3284:;
    panda$core$Bit $tmp3286 = { $tmp3282 };
    if ($tmp3286.value) {
    {
        panda$core$Bit $tmp3287 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3193->type);
        if ($tmp3287.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3289 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3193->type);
            cl3288 = $tmp3289;
            if (((panda$core$Bit) { cl3288 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3290 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3288);
            if ($tmp3290.value) {
            {
                panda$core$String* $tmp3292 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
                panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3291, $tmp3292);
                panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3293, &$s3294);
                panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3295, ((panda$core$Object*) left3193->type));
                panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
                panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3299, ((panda$core$Object*) right3194->type));
                panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, &$s3301);
                panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, $tmp3302);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3303);
            }
            }
        }
        }
        panda$core$Bit $tmp3304 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right3194->type);
        if ($tmp3304.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3306 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right3194->type);
            cl3305 = $tmp3306;
            if (((panda$core$Bit) { cl3305 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3307 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3305);
            if ($tmp3307.value) {
            {
                panda$core$String* $tmp3309 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
                panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3308, $tmp3309);
                panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, &$s3311);
                panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3312, ((panda$core$Object*) left3193->type));
                panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, &$s3314);
                panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3316, ((panda$core$Object*) right3194->type));
                panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, &$s3318);
                panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, $tmp3319);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3320);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp3322 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3323 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3193, $tmp3322);
        finalLeft3321 = $tmp3323;
        if (((panda$core$Bit) { finalLeft3321 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3325 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3326 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3194, $tmp3325);
        finalRight3324 = $tmp3326;
        if (((panda$core$Bit) { finalRight3324 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3328 = (panda$collections$Array*) malloc(40);
        $tmp3328->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3328->refCount.value = 1;
        panda$collections$Array$init($tmp3328);
        children3327 = $tmp3328;
        panda$collections$Array$add$panda$collections$Array$T(children3327, ((panda$core$Object*) finalLeft3321));
        panda$collections$Array$add$panda$collections$Array$T(children3327, ((panda$core$Object*) finalRight3324));
        org$pandalanguage$pandac$IRNode* $tmp3330 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3330->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3330->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3332 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3333;
        $tmp3333 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
        $tmp3333->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
        $tmp3333->refCount = 1;
        $tmp3333->value = p_op;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3330, ((panda$core$Int64) { 1023 }), p_position, $tmp3332, ((panda$core$Object*) $tmp3333), ((panda$collections$ListView*) children3327));
        return $tmp3330;
    }
    }
    panda$core$Bit $tmp3334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 73 }));
    if ($tmp3334.value) {
    {
        panda$core$Bit $tmp3335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3193->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3335.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3336 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3193, p_op, right3194);
            return $tmp3336;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3337 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3193);
        left3193 = $tmp3337;
        if (((panda$core$Bit) { left3193 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3338 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3194, left3193->type);
        right3194 = $tmp3338;
        if (((panda$core$Bit) { right3194 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3339 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3193);
        panda$core$Bit $tmp3340 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3339);
        if ($tmp3340.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3193->position, &$s3341);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3343 = (panda$collections$Array*) malloc(40);
        $tmp3343->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3343->refCount.value = 1;
        panda$collections$Array$init($tmp3343);
        children3342 = $tmp3343;
        panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) left3193));
        panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) right3194));
        org$pandalanguage$pandac$IRNode* $tmp3345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3345->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3347, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3348;
        $tmp3348 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
        $tmp3348->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
        $tmp3348->refCount = 1;
        $tmp3348->value = $tmp3347;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3345, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) $tmp3348), ((panda$collections$ListView*) children3342));
        return $tmp3345;
    }
    }
    panda$core$Bit $tmp3349 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(p_op);
    if ($tmp3349.value) {
    {
        panda$core$Bit $tmp3350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3193->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3350.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3351 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3193, p_op, right3194);
            return $tmp3351;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3352 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3193);
        left3193 = $tmp3352;
        if (((panda$core$Bit) { left3193 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3353 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3193);
        panda$core$Bit $tmp3354 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3353);
        if ($tmp3354.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3193->position, &$s3355);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3357 = (panda$collections$Array*) malloc(40);
        $tmp3357->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3357->refCount.value = 1;
        panda$collections$Array$init($tmp3357);
        children3356 = $tmp3357;
        panda$collections$Array$add$panda$collections$Array$T(children3356, ((panda$core$Object*) left3193));
        panda$core$UInt64 $tmp3359 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3359;
        org$pandalanguage$pandac$IRNode* $tmp3360 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3360->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3360->refCount.value = 1;
        panda$core$UInt64$wrapper* $tmp3362;
        $tmp3362 = (panda$core$UInt64$wrapper*) malloc(24);
        $tmp3362->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
        $tmp3362->refCount = 1;
        $tmp3362->value = self->reusedValueCount;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3360, ((panda$core$Int64) { 1027 }), left3193->position, left3193->type, ((panda$core$Object*) $tmp3362), ((panda$collections$ListView*) children3356));
        left3193 = $tmp3360;
        org$pandalanguage$pandac$IRNode* $tmp3364 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3364->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3364, ((panda$core$Int64) { 1028 }), left3193->position, left3193->type, self->reusedValueCount);
        reusedLeft3363 = $tmp3364;
        org$pandalanguage$pandac$parser$Token$Kind $tmp3366 = org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(p_op);
        org$pandalanguage$pandac$IRNode* $tmp3367 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft3363, $tmp3366, right3194);
        right3194 = $tmp3367;
        if (((panda$core$Bit) { right3194 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3369 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left3193->type);
        bool $tmp3368 = $tmp3369.value;
        if (!$tmp3368) goto $l3370;
        panda$core$Bit $tmp3371 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3193->type, right3194->type);
        $tmp3368 = $tmp3371.value;
        $l3370:;
        panda$core$Bit $tmp3372 = { $tmp3368 };
        if ($tmp3372.value) {
        {
            panda$collections$Array* $tmp3374 = (panda$collections$Array*) malloc(40);
            $tmp3374->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3374->refCount.value = 1;
            panda$collections$Array$init($tmp3374);
            org$pandalanguage$pandac$IRNode* $tmp3376 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3194, &$s3373, ((panda$collections$ListView*) $tmp3374), left3193->type);
            right3194 = $tmp3376;
            if (((panda$core$Bit) { right3194 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3377, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$IRNode* $tmp3378 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3193, $tmp3377, right3194);
        return $tmp3378;
    }
    }
    panda$core$Bit $tmp3379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 101 }));
    if ($tmp3379.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3380 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3193);
        left3193 = $tmp3380;
        if (((panda$core$Bit) { left3193 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3381 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3193->type);
        if ($tmp3381.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3383 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3193->type);
            cl3382 = $tmp3383;
            if (((panda$core$Bit) { cl3382 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$ListView* $tmp3385 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left3193->type);
            parameters3384 = $tmp3385;
            org$pandalanguage$pandac$SymbolTable* $tmp3387 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3382);
            org$pandalanguage$pandac$Symbol* $tmp3389 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3387, &$s3388);
            methods3386 = $tmp3389;
            if (((panda$core$Bit) { methods3386 != NULL }).value) {
            {
                panda$collections$Array* $tmp3392 = (panda$collections$Array*) malloc(40);
                $tmp3392->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3392->refCount.value = 1;
                panda$collections$Array$init($tmp3392);
                types3391 = $tmp3392;
                panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3386->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3394.value) {
                {
                    m3395 = ((org$pandalanguage$pandac$MethodDecl*) methods3386);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3395);
                    org$pandalanguage$pandac$MethodRef* $tmp3396 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3396->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3396->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3396, m3395, parameters3384);
                    org$pandalanguage$pandac$Type* $tmp3398 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3396);
                    panda$collections$Array$add$panda$collections$Array$T(types3391, ((panda$core$Object*) $tmp3398));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3386->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3399.value);
                    {
                        ITable* $tmp3401 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3386)->methods)->$class->itable;
                        while ($tmp3401->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3401 = $tmp3401->next;
                        }
                        $fn3403 $tmp3402 = $tmp3401->methods[0];
                        panda$collections$Iterator* $tmp3404 = $tmp3402(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3386)->methods));
                        m$Iter3400 = $tmp3404;
                        $l3405:;
                        ITable* $tmp3407 = m$Iter3400->$class->itable;
                        while ($tmp3407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3407 = $tmp3407->next;
                        }
                        $fn3409 $tmp3408 = $tmp3407->methods[0];
                        panda$core$Bit $tmp3410 = $tmp3408(m$Iter3400);
                        panda$core$Bit $tmp3411 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3410);
                        if (!$tmp3411.value) goto $l3406;
                        {
                            ITable* $tmp3413 = m$Iter3400->$class->itable;
                            while ($tmp3413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3413 = $tmp3413->next;
                            }
                            $fn3415 $tmp3414 = $tmp3413->methods[1];
                            panda$core$Object* $tmp3416 = $tmp3414(m$Iter3400);
                            m3412 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3416);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3412);
                            org$pandalanguage$pandac$MethodRef* $tmp3417 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3417->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3417->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3417, m3412, parameters3384);
                            org$pandalanguage$pandac$Type* $tmp3419 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3417);
                            panda$collections$Array$add$panda$collections$Array$T(types3391, ((panda$core$Object*) $tmp3419));
                        }
                        goto $l3405;
                        $l3406:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3420 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3420->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3420->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3420, ((panda$collections$ListView*) types3391));
                type3390 = $tmp3420;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3422 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3390 = $tmp3422;
            }
            }
            panda$collections$Array* $tmp3424 = (panda$collections$Array*) malloc(40);
            $tmp3424->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3424->refCount.value = 1;
            panda$collections$Array$init($tmp3424);
            children3423 = $tmp3424;
            panda$collections$Array$add$panda$collections$Array$T(children3423, ((panda$core$Object*) left3193));
            panda$collections$Array$add$panda$collections$Array$T(children3423, ((panda$core$Object*) right3194));
            org$pandalanguage$pandac$IRNode* $tmp3426 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3426->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3426->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3426, ((panda$core$Int64) { 1040 }), p_position, type3390, ((panda$collections$ListView*) children3423));
            return $tmp3426;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3428 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3429 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3193->type, $tmp3428);
    if ($tmp3429.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3431 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3432 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right3194->type, $tmp3431);
        bool $tmp3430 = $tmp3432.value;
        if (!$tmp3430) goto $l3433;
        panda$core$Bit $tmp3438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 66 }));
        bool $tmp3437 = $tmp3438.value;
        if ($tmp3437) goto $l3439;
        panda$core$Bit $tmp3440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp3437 = $tmp3440.value;
        $l3439:;
        panda$core$Bit $tmp3441 = { $tmp3437 };
        bool $tmp3436 = $tmp3441.value;
        if ($tmp3436) goto $l3442;
        panda$core$Bit $tmp3443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp3436 = $tmp3443.value;
        $l3442:;
        panda$core$Bit $tmp3444 = { $tmp3436 };
        bool $tmp3435 = $tmp3444.value;
        if ($tmp3435) goto $l3445;
        panda$core$Bit $tmp3446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp3435 = $tmp3446.value;
        $l3445:;
        panda$core$Bit $tmp3447 = { $tmp3435 };
        bool $tmp3434 = $tmp3447.value;
        if ($tmp3434) goto $l3448;
        panda$core$Bit $tmp3449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp3434 = $tmp3449.value;
        $l3448:;
        panda$core$Bit $tmp3450 = { $tmp3434 };
        $tmp3430 = $tmp3450.value;
        $l3433:;
        panda$core$Bit $tmp3451 = { $tmp3430 };
        if ($tmp3451.value) {
        {
            panda$collections$Array* $tmp3453 = (panda$collections$Array*) malloc(40);
            $tmp3453->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3453->refCount.value = 1;
            panda$collections$Array$init($tmp3453);
            children3452 = $tmp3453;
            panda$collections$Array$add$panda$collections$Array$T(children3452, ((panda$core$Object*) left3193));
            panda$collections$Array$add$panda$collections$Array$T(children3452, ((panda$core$Object*) right3194));
            org$pandalanguage$pandac$IRNode* $tmp3455 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3455->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3455->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3457;
            $tmp3457 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp3457->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp3457->refCount = 1;
            $tmp3457->value = p_op;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3455, ((panda$core$Int64) { 1023 }), p_position, left3193->type, ((panda$core$Object*) $tmp3457), ((panda$collections$ListView*) children3452));
            return $tmp3455;
        }
        }
        panda$core$String* $tmp3459 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
        panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3458, $tmp3459);
        panda$core$String* $tmp3462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3460, &$s3461);
        panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3462, ((panda$core$Object*) left3193->type));
        panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3464);
        panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3465, ((panda$core$Object*) right3194->type));
        panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3468);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3470 = (panda$collections$Array*) malloc(40);
    $tmp3470->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3470->refCount.value = 1;
    panda$collections$Array$init($tmp3470);
    children3469 = $tmp3470;
    panda$core$Bit $tmp3474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3193->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3473 = $tmp3474.value;
    if ($tmp3473) goto $l3475;
    panda$core$Bit $tmp3476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3193->kind, ((panda$core$Int64) { 1032 }));
    $tmp3473 = $tmp3476.value;
    $l3475:;
    panda$core$Bit $tmp3477 = { $tmp3473 };
    bool $tmp3472 = $tmp3477.value;
    if (!$tmp3472) goto $l3478;
    panda$core$Bit $tmp3480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3194->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3479 = $tmp3480.value;
    if ($tmp3479) goto $l3481;
    panda$core$Bit $tmp3482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3194->kind, ((panda$core$Int64) { 1032 }));
    $tmp3479 = $tmp3482.value;
    $l3481:;
    panda$core$Bit $tmp3483 = { $tmp3479 };
    $tmp3472 = $tmp3483.value;
    $l3478:;
    panda$core$Bit $tmp3484 = { $tmp3472 };
    if ($tmp3484.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3485 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3193, p_op, right3194);
        return $tmp3485;
    }
    }
    panda$core$Bit $tmp3487 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left3193->type);
    bool $tmp3486 = $tmp3487.value;
    if (!$tmp3486) goto $l3488;
    panda$core$Int64$nullable $tmp3489 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3194, left3193->type);
    $tmp3486 = ((panda$core$Bit) { $tmp3489.nonnull }).value;
    $l3488:;
    panda$core$Bit $tmp3490 = { $tmp3486 };
    if ($tmp3490.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3491 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3194, left3193->type);
        right3194 = $tmp3491;
        PANDA_ASSERT(((panda$core$Bit) { right3194 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3469, ((panda$core$Object*) left3193));
        panda$collections$Array$add$panda$collections$Array$T(children3469, ((panda$core$Object*) right3194));
        {
            $match$2495_133493 = p_op;
            panda$core$Bit $tmp3499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133493.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp3498 = $tmp3499.value;
            if ($tmp3498) goto $l3500;
            panda$core$Bit $tmp3501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133493.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp3498 = $tmp3501.value;
            $l3500:;
            panda$core$Bit $tmp3502 = { $tmp3498 };
            bool $tmp3497 = $tmp3502.value;
            if ($tmp3497) goto $l3503;
            panda$core$Bit $tmp3504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133493.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp3497 = $tmp3504.value;
            $l3503:;
            panda$core$Bit $tmp3505 = { $tmp3497 };
            bool $tmp3496 = $tmp3505.value;
            if ($tmp3496) goto $l3506;
            panda$core$Bit $tmp3507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133493.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp3496 = $tmp3507.value;
            $l3506:;
            panda$core$Bit $tmp3508 = { $tmp3496 };
            bool $tmp3495 = $tmp3508.value;
            if ($tmp3495) goto $l3509;
            panda$core$Bit $tmp3510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133493.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp3495 = $tmp3510.value;
            $l3509:;
            panda$core$Bit $tmp3511 = { $tmp3495 };
            bool $tmp3494 = $tmp3511.value;
            if ($tmp3494) goto $l3512;
            panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133493.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp3494 = $tmp3513.value;
            $l3512:;
            panda$core$Bit $tmp3514 = { $tmp3494 };
            if ($tmp3514.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3515 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3492 = $tmp3515;
            }
            }
            else {
            {
                resultType3492 = left3193->type;
            }
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3516 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3516->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3516->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3518;
        $tmp3518 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
        $tmp3518->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
        $tmp3518->refCount = 1;
        $tmp3518->value = p_op;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3516, ((panda$core$Int64) { 1023 }), p_position, resultType3492, ((panda$core$Object*) $tmp3518), ((panda$collections$ListView*) children3469));
        return $tmp3516;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3469, ((panda$core$Object*) right3194));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3520 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3521 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left3193, $tmp3520, ((panda$collections$ListView*) children3469));
    result3519 = $tmp3521;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3519 == NULL }).value) {
    {
        panda$collections$Array$clear(children3469);
        panda$collections$Array$add$panda$collections$Array$T(children3469, ((panda$core$Object*) left3193));
        org$pandalanguage$pandac$IRNode* $tmp3523 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3194);
        resolved3522 = $tmp3523;
        bool $tmp3524 = ((panda$core$Bit) { resolved3522 != NULL }).value;
        if (!$tmp3524) goto $l3525;
        panda$core$Bit $tmp3526 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3522->type);
        $tmp3524 = $tmp3526.value;
        $l3525:;
        panda$core$Bit $tmp3527 = { $tmp3524 };
        if ($tmp3527.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3469, ((panda$core$Object*) resolved3522));
            org$pandalanguage$pandac$IRNode* $tmp3529 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3529->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3529->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3531 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3529, ((panda$core$Int64) { 1001 }), resolved3522->position, $tmp3531, resolved3522->type);
            target3528 = $tmp3529;
            panda$core$String* $tmp3532 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3533 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3528, $tmp3532, ((panda$collections$ListView*) children3469));
            result3519 = $tmp3533;
        }
        }
    }
    }
    return result3519;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawLeft, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left3537;
    org$pandalanguage$pandac$IRNode* right3539;
    panda$core$Bit $tmp3534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op.$rawValue, ((panda$core$Int64) { 89 }));
    if ($tmp3534.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3535 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_rawRight);
        org$pandalanguage$pandac$IRNode* $tmp3536 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_rawLeft, $tmp3535);
        return $tmp3536;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3538 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawLeft);
    left3537 = $tmp3538;
    if (((panda$core$Bit) { left3537 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3540 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawRight);
    right3539 = $tmp3540;
    if (((panda$core$Bit) { right3539 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3541 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3537, p_op, right3539);
    return $tmp3541;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3545;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3542 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3542;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3543 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3544 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3543, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3544.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3545, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3546 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3545);
            return ((panda$collections$ListView*) $tmp3546);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3547 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3548 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3547));
            return $tmp3548;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3549 = (panda$collections$Array*) malloc(40);
            $tmp3549->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3549->refCount.value = 1;
            panda$collections$Array$init($tmp3549);
            return ((panda$collections$ListView*) $tmp3549);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3551.value) {
        {
            panda$collections$ListView* $tmp3552 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3552;
        }
        }
        panda$collections$ListView* $tmp3553 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3553;
    }
    }
    panda$collections$Array* $tmp3554 = (panda$collections$Array*) malloc(40);
    $tmp3554->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3554->refCount.value = 1;
    panda$collections$Array$init($tmp3554);
    return ((panda$collections$ListView*) $tmp3554);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$IRNode* p_base) {
    panda$core$String* name3557;
    org$pandalanguage$pandac$ClassDecl* cl3559;
    org$pandalanguage$pandac$Symbol* s3561;
    org$pandalanguage$pandac$MethodDecl* m3564;
    panda$collections$Iterator* test$Iter3569;
    org$pandalanguage$pandac$MethodDecl* test3581;
    org$pandalanguage$pandac$MethodRef* ref3593;
    panda$collections$Array* children3597;
    org$pandalanguage$pandac$IRNode* methodRef3600;
    org$pandalanguage$pandac$Position $tmp3606;
    panda$collections$Array* args3607;
    org$pandalanguage$pandac$parser$Token$Kind $match$2600_93611;
    panda$collections$Array* children3625;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3630;
    panda$collections$Array* children3638;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3643;
    org$pandalanguage$pandac$IRNode* coerced3650;
    panda$collections$Array* children3653;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3658;
    panda$core$Bit $tmp3556 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3556.value) {
    {
        panda$core$String* $tmp3558 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
        name3557 = $tmp3558;
        org$pandalanguage$pandac$ClassDecl* $tmp3560 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3559 = $tmp3560;
        if (((panda$core$Bit) { cl3559 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3562 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3559);
        org$pandalanguage$pandac$Symbol* $tmp3563 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3562, name3557);
        s3561 = $tmp3563;
        if (((panda$core$Bit) { s3561 != NULL }).value) {
        {
            m3564 = NULL;
            switch (s3561->kind.value) {
                case 204:
                {
                    m3564 = ((org$pandalanguage$pandac$MethodDecl*) s3561);
                    panda$core$Int64 $tmp3565 = panda$collections$Array$get_count$R$panda$core$Int64(m3564->parameters);
                    panda$core$Bit $tmp3566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3565, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3566.value);
                    panda$core$Bit $tmp3567 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3564->annotations);
                    panda$core$Bit $tmp3568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3567);
                    PANDA_ASSERT($tmp3568.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3570 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3561)->methods)->$class->itable;
                        while ($tmp3570->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3570 = $tmp3570->next;
                        }
                        $fn3572 $tmp3571 = $tmp3570->methods[0];
                        panda$collections$Iterator* $tmp3573 = $tmp3571(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3561)->methods));
                        test$Iter3569 = $tmp3573;
                        $l3574:;
                        ITable* $tmp3576 = test$Iter3569->$class->itable;
                        while ($tmp3576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3576 = $tmp3576->next;
                        }
                        $fn3578 $tmp3577 = $tmp3576->methods[0];
                        panda$core$Bit $tmp3579 = $tmp3577(test$Iter3569);
                        panda$core$Bit $tmp3580 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3579);
                        if (!$tmp3580.value) goto $l3575;
                        {
                            ITable* $tmp3582 = test$Iter3569->$class->itable;
                            while ($tmp3582->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3582 = $tmp3582->next;
                            }
                            $fn3584 $tmp3583 = $tmp3582->methods[1];
                            panda$core$Object* $tmp3585 = $tmp3583(test$Iter3569);
                            test3581 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3585);
                            panda$core$Bit $tmp3587 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3581->annotations);
                            panda$core$Bit $tmp3588 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3587);
                            bool $tmp3586 = $tmp3588.value;
                            if (!$tmp3586) goto $l3589;
                            panda$core$Int64 $tmp3590 = panda$collections$Array$get_count$R$panda$core$Int64(test3581->parameters);
                            panda$core$Bit $tmp3591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3590, ((panda$core$Int64) { 0 }));
                            $tmp3586 = $tmp3591.value;
                            $l3589:;
                            panda$core$Bit $tmp3592 = { $tmp3586 };
                            if ($tmp3592.value) {
                            {
                                m3564 = test3581;
                                goto $l3575;
                            }
                            }
                        }
                        goto $l3574;
                        $l3575:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3564 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3564);
                org$pandalanguage$pandac$MethodRef* $tmp3594 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3594->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3594->refCount.value = 1;
                panda$collections$ListView* $tmp3596 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3594, m3564, $tmp3596);
                ref3593 = $tmp3594;
                panda$collections$Array* $tmp3598 = (panda$collections$Array*) malloc(40);
                $tmp3598->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3598->refCount.value = 1;
                panda$collections$Array$init($tmp3598);
                children3597 = $tmp3598;
                panda$collections$Array$add$panda$collections$Array$T(children3597, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3601 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3601->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3603 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3603->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3603->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3606);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3603, &$s3605, ((panda$core$Int64) { 16 }), $tmp3606, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3601, ((panda$core$Int64) { 1002 }), p_position, $tmp3603, ((panda$core$Object*) ref3593), ((panda$collections$ListView*) children3597));
                methodRef3600 = $tmp3601;
                panda$collections$Array* $tmp3608 = (panda$collections$Array*) malloc(40);
                $tmp3608->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3608->refCount.value = 1;
                panda$collections$Array$init($tmp3608);
                args3607 = $tmp3608;
                org$pandalanguage$pandac$IRNode* $tmp3610 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3600, ((panda$collections$ListView*) args3607));
                return $tmp3610;
            }
            }
        }
        }
    }
    }
    {
        $match$2600_93611 = p_op;
        panda$core$Bit $tmp3612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2600_93611.$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp3612.value) {
        {
            switch (p_base->kind.value) {
                case 1004:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3613 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3613->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3613->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3615 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3613, ((panda$core$Int64) { 1032 }), p_position, $tmp3615, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3613;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3616 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3616->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3616->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3618 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3616, ((panda$core$Int64) { 1004 }), p_position, $tmp3618, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3616;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3619 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3619->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3619->refCount.value = 1;
                    panda$core$Real64 $tmp3621 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3622 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3621);
                    panda$core$Real64 $tmp3623 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3619, ((panda$core$Int64) { 1045 }), p_position, $tmp3622, $tmp3623);
                    return $tmp3619;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3624 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3624.value) {
                    {
                        panda$collections$Array* $tmp3626 = (panda$collections$Array*) malloc(40);
                        $tmp3626->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3626->refCount.value = 1;
                        panda$collections$Array$init($tmp3626);
                        children3625 = $tmp3626;
                        panda$collections$Array$add$panda$collections$Array$T(children3625, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3628 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3628->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3628->refCount.value = 1;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3630, ((panda$core$Int64) { 52 }));
                        org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3631;
                        $tmp3631 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
                        $tmp3631->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
                        $tmp3631->refCount = 1;
                        $tmp3631->value = $tmp3630;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3628, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3631), ((panda$collections$ListView*) children3625));
                        return $tmp3628;
                    }
                    }
                }
            }
            panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3632, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3634);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3635);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp3636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2600_93611.$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp3636.value) {
        {
            panda$core$Bit $tmp3637 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3637.value) {
            {
                panda$collections$Array* $tmp3639 = (panda$collections$Array*) malloc(40);
                $tmp3639->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3639->refCount.value = 1;
                panda$collections$Array$init($tmp3639);
                children3638 = $tmp3639;
                panda$collections$Array$add$panda$collections$Array$T(children3638, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3641 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3641->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3641->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3643, ((panda$core$Int64) { 50 }));
                org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3644;
                $tmp3644 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
                $tmp3644->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
                $tmp3644->refCount = 1;
                $tmp3644->value = $tmp3643;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3641, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3644), ((panda$collections$ListView*) children3638));
                return $tmp3641;
            }
            }
            else {
            {
                panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3645, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, &$s3647);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3648);
                return NULL;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2600_93611.$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp3649.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3651 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3652 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3651);
            coerced3650 = $tmp3652;
            if (((panda$core$Bit) { coerced3650 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3654 = (panda$collections$Array*) malloc(40);
            $tmp3654->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3654->refCount.value = 1;
            panda$collections$Array$init($tmp3654);
            children3653 = $tmp3654;
            panda$collections$Array$add$panda$collections$Array$T(children3653, ((panda$core$Object*) coerced3650));
            org$pandalanguage$pandac$IRNode* $tmp3656 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3656->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3658, ((panda$core$Int64) { 49 }));
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3659;
            $tmp3659 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp3659->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp3659->refCount = 1;
            $tmp3659->value = $tmp3658;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3656, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3659), ((panda$collections$ListView*) children3653));
            return $tmp3656;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_rawBase) {
    org$pandalanguage$pandac$IRNode* base3660;
    org$pandalanguage$pandac$IRNode* $tmp3661 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawBase);
    base3660 = $tmp3661;
    if (((panda$core$Bit) { base3660 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3662 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_op, base3660);
    return $tmp3662;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawTarget, panda$collections$ImmutableArray* p_rawArgs) {
    org$pandalanguage$pandac$IRNode* target3663;
    panda$collections$Array* args3665;
    panda$collections$Iterator* arg$Iter3668;
    org$pandalanguage$pandac$ASTNode* arg3680;
    org$pandalanguage$pandac$IRNode* compiled3685;
    org$pandalanguage$pandac$IRNode* $tmp3664 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTarget);
    target3663 = $tmp3664;
    if (((panda$core$Bit) { target3663 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3666 = (panda$collections$Array*) malloc(40);
    $tmp3666->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3666->refCount.value = 1;
    panda$collections$Array$init($tmp3666);
    args3665 = $tmp3666;
    {
        ITable* $tmp3669 = ((panda$collections$Iterable*) p_rawArgs)->$class->itable;
        while ($tmp3669->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3669 = $tmp3669->next;
        }
        $fn3671 $tmp3670 = $tmp3669->methods[0];
        panda$collections$Iterator* $tmp3672 = $tmp3670(((panda$collections$Iterable*) p_rawArgs));
        arg$Iter3668 = $tmp3672;
        $l3673:;
        ITable* $tmp3675 = arg$Iter3668->$class->itable;
        while ($tmp3675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3675 = $tmp3675->next;
        }
        $fn3677 $tmp3676 = $tmp3675->methods[0];
        panda$core$Bit $tmp3678 = $tmp3676(arg$Iter3668);
        panda$core$Bit $tmp3679 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3678);
        if (!$tmp3679.value) goto $l3674;
        {
            ITable* $tmp3681 = arg$Iter3668->$class->itable;
            while ($tmp3681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3681 = $tmp3681->next;
            }
            $fn3683 $tmp3682 = $tmp3681->methods[1];
            panda$core$Object* $tmp3684 = $tmp3682(arg$Iter3668);
            arg3680 = ((org$pandalanguage$pandac$ASTNode*) $tmp3684);
            org$pandalanguage$pandac$IRNode* $tmp3686 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, arg3680);
            compiled3685 = $tmp3686;
            if (((panda$core$Bit) { compiled3685 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3665, ((panda$core$Object*) compiled3685));
        }
        goto $l3673;
        $l3674:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3687 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3663, ((panda$collections$ListView*) args3665));
    return $tmp3687;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3688;
    panda$core$String* name3690;
    org$pandalanguage$pandac$ClassDecl* cl3698;
    org$pandalanguage$pandac$SymbolTable* st3717;
    org$pandalanguage$pandac$Symbol* s3719;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3689 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3688 = $tmp3689;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3692 = (($fn3691) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3692, &$s3693);
            panda$core$String* $tmp3695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3694, p_name);
            panda$core$String* $tmp3697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3695, &$s3696);
            name3690 = $tmp3697;
            org$pandalanguage$pandac$ClassDecl* $tmp3699 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3690);
            cl3698 = $tmp3699;
            if (((panda$core$Bit) { cl3698 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3700 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3700->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3700->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3702 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3703 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3698);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3700, ((panda$core$Int64) { 1001 }), p_position, $tmp3702, $tmp3703);
                return $tmp3700;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3704 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3704->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3704->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3706 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3704, ((panda$core$Int64) { 1037 }), p_position, $tmp3706, name3690);
            return $tmp3704;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3707 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3707));
            panda$core$Object* $tmp3708 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3709 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3708)->rawSuper);
            cl3688 = $tmp3709;
        }
        break;
        default:
        {
            panda$core$Bit $tmp3710 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
            panda$core$Bit $tmp3711 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3710);
            if ($tmp3711.value) {
            {
                panda$core$String* $tmp3713 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3712, ((panda$core$Object*) p_base->type));
                panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3713, &$s3714);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3715);
                return NULL;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp3716 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3688 = $tmp3716;
        }
    }
    if (((panda$core$Bit) { cl3688 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3718 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3688);
    st3717 = $tmp3718;
    org$pandalanguage$pandac$Symbol* $tmp3720 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3717, p_name);
    s3719 = $tmp3720;
    if (((panda$core$Bit) { s3719 == NULL }).value) {
    {
        panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3721, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, &$s3723);
        panda$core$String* $tmp3725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, p_name);
        panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3725, &$s3726);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3727);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3728 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3719, st3717);
    return $tmp3728;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawBase, panda$core$String* p_field) {
    org$pandalanguage$pandac$IRNode* base3729;
    org$pandalanguage$pandac$IRNode* $tmp3730 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawBase);
    base3729 = $tmp3730;
    if (((panda$core$Bit) { base3729 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3732 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3729->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3731 = $tmp3732.value;
    if (!$tmp3731) goto $l3733;
    panda$core$Bit $tmp3734 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3729->kind, ((panda$core$Int64) { 1024 }));
    $tmp3731 = $tmp3734.value;
    $l3733:;
    panda$core$Bit $tmp3735 = { $tmp3731 };
    if ($tmp3735.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3736 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3729);
        base3729 = $tmp3736;
    }
    }
    if (((panda$core$Bit) { base3729 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3737 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3729, p_field);
    return $tmp3737;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name) {
    org$pandalanguage$pandac$Symbol* s3738;
    org$pandalanguage$pandac$Symbol* $tmp3739 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, p_name);
    s3738 = $tmp3739;
    if (((panda$core$Bit) { s3738 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3740 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
        s3738 = ((org$pandalanguage$pandac$Symbol*) $tmp3740);
    }
    }
    if (((panda$core$Bit) { s3738 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3741 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, NULL, s3738, self->symbolTable);
        return $tmp3741;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3742 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3742->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3742->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3744 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3742, ((panda$core$Int64) { 1037 }), p_position, $tmp3744, p_name);
    return $tmp3742;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$Type* resolved3745;
    org$pandalanguage$pandac$Type* $tmp3746 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_type);
    org$pandalanguage$pandac$Type* $tmp3747 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3746);
    resolved3745 = $tmp3747;
    if (((panda$core$Bit) { resolved3745 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3748 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3748->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3748->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp3751 = (($fn3750) p_type->$class->vtable[2])(p_type);
    org$pandalanguage$pandac$Type* $tmp3752 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3748, ((panda$core$Int64) { 1001 }), $tmp3751, $tmp3752, resolved3745);
    return $tmp3748;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawStart, org$pandalanguage$pandac$ASTNode* p_rawEnd, panda$core$Bit p_inclusive, org$pandalanguage$pandac$ASTNode* p_rawStep) {
    org$pandalanguage$pandac$IRNode* start3753;
    org$pandalanguage$pandac$IRNode* end3758;
    org$pandalanguage$pandac$IRNode* step3763;
    panda$collections$Array* children3767;
    org$pandalanguage$pandac$Position $tmp3775;
    if (((panda$core$Bit) { p_rawStart != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3754 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawStart);
        start3753 = $tmp3754;
        if (((panda$core$Bit) { start3753 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3755 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3755->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3755->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3757 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3755, ((panda$core$Int64) { 1030 }), p_position, $tmp3757);
        start3753 = $tmp3755;
    }
    }
    if (((panda$core$Bit) { p_rawEnd != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3759 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawEnd);
        end3758 = $tmp3759;
        if (((panda$core$Bit) { end3758 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3760 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3760->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3760->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3762 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3760, ((panda$core$Int64) { 1030 }), p_position, $tmp3762);
        end3758 = $tmp3760;
    }
    }
    if (((panda$core$Bit) { p_rawStep != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3764 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawStep);
        step3763 = $tmp3764;
        if (((panda$core$Bit) { step3763 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step3763->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3765.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, step3763->position, &$s3766);
            return NULL;
        }
        }
    }
    }
    else {
    {
        step3763 = NULL;
    }
    }
    panda$collections$Array* $tmp3768 = (panda$collections$Array*) malloc(40);
    $tmp3768->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3768->refCount.value = 1;
    panda$collections$Array$init($tmp3768);
    children3767 = $tmp3768;
    panda$collections$Array$add$panda$collections$Array$T(children3767, ((panda$core$Object*) start3753));
    panda$collections$Array$add$panda$collections$Array$T(children3767, ((panda$core$Object*) end3758));
    if (((panda$core$Bit) { step3763 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3767, ((panda$core$Object*) step3763));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3770 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3770->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3770->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3772 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3772->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3772->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3775);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3772, &$s3774, ((panda$core$Int64) { 17 }), $tmp3775, ((panda$core$Bit) { true }));
    panda$core$Bit$wrapper* $tmp3776;
    $tmp3776 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp3776->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp3776->refCount = 1;
    $tmp3776->value = p_inclusive;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3770, ((panda$core$Int64) { 1031 }), p_position, $tmp3772, ((panda$core$Object*) $tmp3776), ((panda$collections$ListView*) children3767));
    return $tmp3770;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3777 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3777->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3777->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3779 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3777, ((panda$core$Int64) { 1033 }), p_position, $tmp3779, p_s);
    return $tmp3777;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$Type* type3783;
    org$pandalanguage$pandac$ClassDecl* cl3784;
    panda$collections$Array* subtypes3791;
    panda$core$MutableString* name3795;
    panda$core$Char8 $tmp3798;
    panda$core$String* separator3799;
    panda$collections$Iterator* p$Iter3801;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3813;
    panda$collections$Array* pType3818;
    panda$core$String* pName3821;
    panda$core$Char8 $tmp3831;
    panda$core$Object* $tmp3780 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3781 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3780)->annotations);
    if ($tmp3781.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s3782);
        return NULL;
    }
    }
    panda$core$Object* $tmp3785 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3784 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3785);
    ITable* $tmp3786 = ((panda$collections$CollectionView*) cl3784->parameters)->$class->itable;
    while ($tmp3786->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3786 = $tmp3786->next;
    }
    $fn3788 $tmp3787 = $tmp3786->methods[0];
    panda$core$Int64 $tmp3789 = $tmp3787(((panda$collections$CollectionView*) cl3784->parameters));
    panda$core$Bit $tmp3790 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3789, ((panda$core$Int64) { 0 }));
    if ($tmp3790.value) {
    {
        panda$collections$Array* $tmp3792 = (panda$collections$Array*) malloc(40);
        $tmp3792->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3792->refCount.value = 1;
        panda$collections$Array$init($tmp3792);
        subtypes3791 = $tmp3792;
        org$pandalanguage$pandac$Type* $tmp3794 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3784);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3791, ((panda$core$Object*) $tmp3794));
        panda$core$MutableString* $tmp3796 = (panda$core$MutableString*) malloc(48);
        $tmp3796->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3796->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3796, ((org$pandalanguage$pandac$Symbol*) cl3784)->name);
        name3795 = $tmp3796;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3798, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3795, $tmp3798);
        separator3799 = &$s3800;
        {
            ITable* $tmp3802 = ((panda$collections$Iterable*) cl3784->parameters)->$class->itable;
            while ($tmp3802->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3802 = $tmp3802->next;
            }
            $fn3804 $tmp3803 = $tmp3802->methods[0];
            panda$collections$Iterator* $tmp3805 = $tmp3803(((panda$collections$Iterable*) cl3784->parameters));
            p$Iter3801 = $tmp3805;
            $l3806:;
            ITable* $tmp3808 = p$Iter3801->$class->itable;
            while ($tmp3808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3808 = $tmp3808->next;
            }
            $fn3810 $tmp3809 = $tmp3808->methods[0];
            panda$core$Bit $tmp3811 = $tmp3809(p$Iter3801);
            panda$core$Bit $tmp3812 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3811);
            if (!$tmp3812.value) goto $l3807;
            {
                ITable* $tmp3814 = p$Iter3801->$class->itable;
                while ($tmp3814->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3814 = $tmp3814->next;
                }
                $fn3816 $tmp3815 = $tmp3814->methods[1];
                panda$core$Object* $tmp3817 = $tmp3815(p$Iter3801);
                p3813 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3817);
                panda$collections$Array* $tmp3819 = (panda$collections$Array*) malloc(40);
                $tmp3819->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3819->refCount.value = 1;
                panda$collections$Array$init($tmp3819);
                pType3818 = $tmp3819;
                panda$collections$Array$add$panda$collections$Array$T(pType3818, ((panda$core$Object*) p3813->bound));
                panda$core$String* $tmp3822 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3784)->name);
                panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, &$s3823);
                panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, ((org$pandalanguage$pandac$Symbol*) p3813)->name);
                panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, &$s3826);
                pName3821 = $tmp3827;
                panda$core$MutableString$append$panda$core$String(name3795, separator3799);
                panda$core$MutableString$append$panda$core$String(name3795, pName3821);
                org$pandalanguage$pandac$Type* $tmp3828 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3828->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3828->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3828, p3813);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3791, ((panda$core$Object*) $tmp3828));
                separator3799 = &$s3830;
            }
            goto $l3806;
            $l3807:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3831, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3795, $tmp3831);
        org$pandalanguage$pandac$Type* $tmp3832 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3832->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3832->refCount.value = 1;
        panda$core$String* $tmp3834 = panda$core$MutableString$finish$R$panda$core$String(name3795);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3832, $tmp3834, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3791), ((panda$core$Bit) { true }));
        type3783 = $tmp3832;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3835 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3784);
        type3783 = $tmp3835;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3836 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3836->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3836->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3836, ((panda$core$Int64) { 1025 }), p_position, type3783);
    return $tmp3836;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$ClassDecl* cl3841;
    panda$core$Object* $tmp3838 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3839 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3838)->annotations);
    if ($tmp3839.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s3840);
        return NULL;
    }
    }
    panda$core$Object* $tmp3842 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3841 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3842);
    PANDA_ASSERT(cl3841->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3843 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3843->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3843->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3843, ((panda$core$Int64) { 1024 }), p_position, cl3841->rawSuper);
    return $tmp3843;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3845;
    panda$core$String$Index$nullable index3847;
    org$pandalanguage$pandac$Type* type3854;
    org$pandalanguage$pandac$IRNode* base3856;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3859;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3862;
    org$pandalanguage$pandac$Type* type3866;
    org$pandalanguage$pandac$IRNode* $tmp3846 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3845 = $tmp3846;
    if (((panda$core$Bit) { value3845 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3849 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3848);
    index3847 = $tmp3849;
    panda$core$Bit $tmp3851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3850 = $tmp3851.value;
    if (!$tmp3850) goto $l3852;
    $tmp3850 = ((panda$core$Bit) { index3847.nonnull }).value;
    $l3852:;
    panda$core$Bit $tmp3853 = { $tmp3850 };
    if ($tmp3853.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3855 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3854 = $tmp3855;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3854 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3857 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3857->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3857->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3859, ((panda$core$String$Index$nullable) { .nonnull = false }), index3847, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3860 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3859);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3857, $tmp3860, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3861 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3857);
            base3856 = $tmp3861;
            if (((panda$core$Bit) { base3856 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3863 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3847.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3862, ((panda$core$String$Index$nullable) { $tmp3863, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3864 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3862);
            org$pandalanguage$pandac$IRNode* $tmp3865 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3856, $tmp3864);
            return $tmp3865;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3867 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3866 = $tmp3867;
    if (((panda$core$Bit) { type3866 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3868 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3845, type3866);
    if (((panda$core$Bit) { $tmp3868.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3869 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3845, type3866);
        return $tmp3869;
    }
    }
    panda$core$Bit $tmp3870 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3845, type3866);
    if ($tmp3870.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3871 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3845, p_position, ((panda$core$Bit) { true }), type3866);
        return $tmp3871;
    }
    }
    else {
    {
        panda$core$String* $tmp3873 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3872, ((panda$core$Object*) value3845->type));
        panda$core$String* $tmp3875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3873, &$s3874);
        panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3876, ((panda$core$Object*) type3866));
        panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3877, &$s3878);
        panda$core$String* $tmp3880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3875, $tmp3879);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3880);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$IRNode* $tmp3881 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3881->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3883 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3881, ((panda$core$Int64) { 1030 }), p_position, $tmp3883);
    return $tmp3881;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawBase, org$pandalanguage$pandac$ChoiceEntry* p_ce, panda$core$Int64 p_field) {
    panda$collections$Array* children3884;
    org$pandalanguage$pandac$IRNode* base3887;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, p_ce);
    panda$collections$Array* $tmp3885 = (panda$collections$Array*) malloc(40);
    $tmp3885->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3885->refCount.value = 1;
    panda$collections$Array$init($tmp3885);
    children3884 = $tmp3885;
    org$pandalanguage$pandac$IRNode* $tmp3888 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawBase);
    base3887 = $tmp3888;
    if (((panda$core$Bit) { base3887 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3884, ((panda$core$Object*) base3887));
    org$pandalanguage$pandac$IRNode* $tmp3889 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3889->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3889->refCount.value = 1;
    panda$core$Object* $tmp3891 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_ce->fields, p_field);
    org$pandalanguage$pandac$Pair* $tmp3892 = (org$pandalanguage$pandac$Pair*) malloc(32);
    $tmp3892->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
    $tmp3892->refCount.value = 1;
    panda$core$Int64$wrapper* $tmp3894;
    $tmp3894 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp3894->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp3894->refCount = 1;
    $tmp3894->value = p_field;
    org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp3892, ((panda$core$Object*) p_ce), ((panda$core$Object*) $tmp3894));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3889, ((panda$core$Int64) { 1047 }), p_position, ((org$pandalanguage$pandac$Type*) $tmp3891), ((panda$core$Object*) $tmp3892), ((panda$collections$ListView*) children3884));
    return $tmp3889;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$ASTNode* $match$2892_93895;
    org$pandalanguage$pandac$Position position3897;
    org$pandalanguage$pandac$ASTNode* left3899;
    org$pandalanguage$pandac$parser$Token$Kind op3901;
    org$pandalanguage$pandac$ASTNode* right3903;
    org$pandalanguage$pandac$Position position3907;
    panda$core$Bit value3909;
    org$pandalanguage$pandac$Position position3915;
    org$pandalanguage$pandac$ASTNode* target3917;
    panda$collections$ImmutableArray* args3919;
    org$pandalanguage$pandac$IRNode* result3921;
    org$pandalanguage$pandac$Position position3933;
    org$pandalanguage$pandac$ASTNode* base3935;
    panda$core$String* field3937;
    org$pandalanguage$pandac$Position position3941;
    panda$core$String* name3943;
    org$pandalanguage$pandac$Position position3947;
    panda$core$UInt64 value3949;
    org$pandalanguage$pandac$Position position3955;
    panda$core$Real64 value3957;
    org$pandalanguage$pandac$Position position3963;
    org$pandalanguage$pandac$parser$Token$Kind op3965;
    org$pandalanguage$pandac$ASTNode* base3967;
    org$pandalanguage$pandac$Position position3971;
    org$pandalanguage$pandac$ASTNode* start3973;
    org$pandalanguage$pandac$ASTNode* end3975;
    panda$core$Bit inclusive3977;
    org$pandalanguage$pandac$ASTNode* step3979;
    org$pandalanguage$pandac$Position position3983;
    panda$core$String* str3985;
    org$pandalanguage$pandac$Position position3999;
    org$pandalanguage$pandac$Position position4003;
    org$pandalanguage$pandac$Position position4007;
    org$pandalanguage$pandac$Position position4011;
    org$pandalanguage$pandac$ASTNode* base4013;
    org$pandalanguage$pandac$ChoiceEntry* ce4015;
    panda$core$Int64 field4017;
    {
        $match$2892_93895 = p_e;
        panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp3896.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3898 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3897 = *$tmp3898;
            org$pandalanguage$pandac$ASTNode** $tmp3900 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 16));
            left3899 = *$tmp3900;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3902 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$2892_93895->$data + 24));
            op3901 = *$tmp3902;
            org$pandalanguage$pandac$ASTNode** $tmp3904 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 32));
            right3903 = *$tmp3904;
            org$pandalanguage$pandac$IRNode* $tmp3905 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, position3897, left3899, op3901, right3903);
            return $tmp3905;
        }
        }
        else {
        panda$core$Bit $tmp3906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp3906.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3908 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3907 = *$tmp3908;
            panda$core$Bit* $tmp3910 = ((panda$core$Bit*) ((char*) $match$2892_93895->$data + 16));
            value3909 = *$tmp3910;
            org$pandalanguage$pandac$IRNode* $tmp3911 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3911->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3911->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3913 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3911, ((panda$core$Int64) { 1011 }), position3907, $tmp3913, value3909);
            return $tmp3911;
        }
        }
        else {
        panda$core$Bit $tmp3914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp3914.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3916 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3915 = *$tmp3916;
            org$pandalanguage$pandac$ASTNode** $tmp3918 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 16));
            target3917 = *$tmp3918;
            panda$collections$ImmutableArray** $tmp3920 = ((panda$collections$ImmutableArray**) ((char*) $match$2892_93895->$data + 24));
            args3919 = *$tmp3920;
            org$pandalanguage$pandac$IRNode* $tmp3922 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position3915, target3917, args3919);
            result3921 = $tmp3922;
            bool $tmp3923 = ((panda$core$Bit) { result3921 != NULL }).value;
            if (!$tmp3923) goto $l3924;
            org$pandalanguage$pandac$Type* $tmp3925 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3926 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3921->type, $tmp3925);
            $tmp3923 = $tmp3926.value;
            $l3924:;
            panda$core$Bit $tmp3927 = { $tmp3923 };
            if ($tmp3927.value) {
            {
                panda$core$Bit $tmp3928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3921->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3928.value);
                panda$core$String* $tmp3929 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3921->payload)->value);
                panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3929, &$s3930);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3921->position, $tmp3931);
                return NULL;
            }
            }
            return result3921;
        }
        }
        else {
        panda$core$Bit $tmp3932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp3932.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3934 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3933 = *$tmp3934;
            org$pandalanguage$pandac$ASTNode** $tmp3936 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 16));
            base3935 = *$tmp3936;
            panda$core$String** $tmp3938 = ((panda$core$String**) ((char*) $match$2892_93895->$data + 24));
            field3937 = *$tmp3938;
            org$pandalanguage$pandac$IRNode* $tmp3939 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, position3933, base3935, field3937);
            return $tmp3939;
        }
        }
        else {
        panda$core$Bit $tmp3940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp3940.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3942 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3941 = *$tmp3942;
            panda$core$String** $tmp3944 = ((panda$core$String**) ((char*) $match$2892_93895->$data + 16));
            name3943 = *$tmp3944;
            org$pandalanguage$pandac$IRNode* $tmp3945 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, position3941, name3943);
            return $tmp3945;
        }
        }
        else {
        panda$core$Bit $tmp3946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp3946.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3948 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3947 = *$tmp3948;
            panda$core$UInt64* $tmp3950 = ((panda$core$UInt64*) ((char*) $match$2892_93895->$data + 16));
            value3949 = *$tmp3950;
            org$pandalanguage$pandac$IRNode* $tmp3951 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3951->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3951->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3953 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value3949);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3951, ((panda$core$Int64) { 1004 }), position3947, $tmp3953, value3949);
            return $tmp3951;
        }
        }
        else {
        panda$core$Bit $tmp3954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3954.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3956 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3955 = *$tmp3956;
            panda$core$Real64* $tmp3958 = ((panda$core$Real64*) ((char*) $match$2892_93895->$data + 16));
            value3957 = *$tmp3958;
            org$pandalanguage$pandac$IRNode* $tmp3959 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3959->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3959->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3961 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(value3957);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3959, ((panda$core$Int64) { 1045 }), position3955, $tmp3961, value3957);
            return $tmp3959;
        }
        }
        else {
        panda$core$Bit $tmp3962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3962.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3964 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3963 = *$tmp3964;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3966 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$2892_93895->$data + 16));
            op3965 = *$tmp3966;
            org$pandalanguage$pandac$ASTNode** $tmp3968 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 24));
            base3967 = *$tmp3968;
            org$pandalanguage$pandac$IRNode* $tmp3969 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, position3963, op3965, base3967);
            return $tmp3969;
        }
        }
        else {
        panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp3970.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3972 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3971 = *$tmp3972;
            org$pandalanguage$pandac$ASTNode** $tmp3974 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 16));
            start3973 = *$tmp3974;
            org$pandalanguage$pandac$ASTNode** $tmp3976 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 24));
            end3975 = *$tmp3976;
            panda$core$Bit* $tmp3978 = ((panda$core$Bit*) ((char*) $match$2892_93895->$data + 32));
            inclusive3977 = *$tmp3978;
            org$pandalanguage$pandac$ASTNode** $tmp3980 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 33));
            step3979 = *$tmp3980;
            org$pandalanguage$pandac$IRNode* $tmp3981 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position3971, start3973, end3975, inclusive3977, step3979);
            return $tmp3981;
        }
        }
        else {
        panda$core$Bit $tmp3982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp3982.value) {
        {
            org$pandalanguage$pandac$Position* $tmp3984 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3983 = *$tmp3984;
            panda$core$String** $tmp3986 = ((panda$core$String**) ((char*) $match$2892_93895->$data + 16));
            str3985 = *$tmp3986;
            org$pandalanguage$pandac$IRNode* $tmp3987 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, position3983, str3985);
            return $tmp3987;
        }
        }
        else {
        panda$core$Bit $tmp3990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 35 }));
        bool $tmp3989 = $tmp3990.value;
        if ($tmp3989) goto $l3991;
        panda$core$Bit $tmp3992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 17 }));
        $tmp3989 = $tmp3992.value;
        $l3991:;
        panda$core$Bit $tmp3993 = { $tmp3989 };
        bool $tmp3988 = $tmp3993.value;
        if ($tmp3988) goto $l3994;
        panda$core$Bit $tmp3995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 25 }));
        $tmp3988 = $tmp3995.value;
        $l3994:;
        panda$core$Bit $tmp3996 = { $tmp3988 };
        if ($tmp3996.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3997 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3997;
        }
        }
        else {
        panda$core$Bit $tmp3998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp3998.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4000 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position3999 = *$tmp4000;
            org$pandalanguage$pandac$IRNode* $tmp4001 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, position3999);
            return $tmp4001;
        }
        }
        else {
        panda$core$Bit $tmp4002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp4002.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4004 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position4003 = *$tmp4004;
            org$pandalanguage$pandac$IRNode* $tmp4005 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, position4003);
            return $tmp4005;
        }
        }
        else {
        panda$core$Bit $tmp4006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp4006.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4008 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position4007 = *$tmp4008;
            org$pandalanguage$pandac$IRNode* $tmp4009 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode(self, position4007);
            return $tmp4009;
        }
        }
        else {
        panda$core$Bit $tmp4010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2892_93895->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp4010.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4012 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2892_93895->$data + 0));
            position4011 = *$tmp4012;
            org$pandalanguage$pandac$ASTNode** $tmp4014 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2892_93895->$data + 16));
            base4013 = *$tmp4014;
            org$pandalanguage$pandac$ChoiceEntry** $tmp4016 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$2892_93895->$data + 24));
            ce4015 = *$tmp4016;
            panda$core$Int64* $tmp4018 = ((panda$core$Int64*) ((char*) $match$2892_93895->$data + 32));
            field4017 = *$tmp4018;
            org$pandalanguage$pandac$IRNode* $tmp4019 = org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, position4011, base4013, ce4015, field4017);
            return $tmp4019;
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
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_statements) {
    org$pandalanguage$pandac$SymbolTable* symbols4020;
    panda$collections$Array* result4023;
    panda$collections$Iterator* stmt$Iter4026;
    org$pandalanguage$pandac$ASTNode* stmt4038;
    org$pandalanguage$pandac$IRNode* compiled4043;
    org$pandalanguage$pandac$SymbolTable* $tmp4021 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4021->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4021->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4021, self->symbolTable);
    symbols4020 = $tmp4021;
    self->symbolTable = symbols4020;
    panda$collections$Array* $tmp4024 = (panda$collections$Array*) malloc(40);
    $tmp4024->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4024->refCount.value = 1;
    panda$collections$Array$init($tmp4024);
    result4023 = $tmp4024;
    {
        ITable* $tmp4027 = ((panda$collections$Iterable*) p_statements)->$class->itable;
        while ($tmp4027->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4027 = $tmp4027->next;
        }
        $fn4029 $tmp4028 = $tmp4027->methods[0];
        panda$collections$Iterator* $tmp4030 = $tmp4028(((panda$collections$Iterable*) p_statements));
        stmt$Iter4026 = $tmp4030;
        $l4031:;
        ITable* $tmp4033 = stmt$Iter4026->$class->itable;
        while ($tmp4033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4033 = $tmp4033->next;
        }
        $fn4035 $tmp4034 = $tmp4033->methods[0];
        panda$core$Bit $tmp4036 = $tmp4034(stmt$Iter4026);
        panda$core$Bit $tmp4037 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4036);
        if (!$tmp4037.value) goto $l4032;
        {
            ITable* $tmp4039 = stmt$Iter4026->$class->itable;
            while ($tmp4039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4039 = $tmp4039->next;
            }
            $fn4041 $tmp4040 = $tmp4039->methods[1];
            panda$core$Object* $tmp4042 = $tmp4040(stmt$Iter4026);
            stmt4038 = ((org$pandalanguage$pandac$ASTNode*) $tmp4042);
            org$pandalanguage$pandac$IRNode* $tmp4044 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt4038);
            compiled4043 = $tmp4044;
            if (((panda$core$Bit) { compiled4043 == NULL }).value) {
            {
                panda$core$Object* $tmp4045 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4020->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4045);
                return NULL;
            }
            }
            panda$core$Bit $tmp4046 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled4043->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp4046.value);
            panda$collections$Array$add$panda$collections$Array$T(result4023, ((panda$core$Object*) compiled4043));
        }
        goto $l4031;
        $l4032:;
    }
    panda$core$Object* $tmp4047 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4020->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4047);
    org$pandalanguage$pandac$IRNode* $tmp4048 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4048->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4048->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4048, ((panda$core$Int64) { 1000 }), p_position, ((panda$collections$ListView*) result4023));
    return $tmp4048;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawTest, panda$collections$ListView* p_rawIfTrue, org$pandalanguage$pandac$ASTNode* p_rawIfFalse) {
    org$pandalanguage$pandac$IRNode* test4050;
    org$pandalanguage$pandac$IRNode* ifTrue4054;
    panda$collections$Array* children4056;
    org$pandalanguage$pandac$IRNode* ifFalse4059;
    org$pandalanguage$pandac$IRNode* $tmp4051 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTest);
    org$pandalanguage$pandac$Type* $tmp4052 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4053 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4051, $tmp4052);
    test4050 = $tmp4053;
    if (((panda$core$Bit) { test4050 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4055 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_rawIfTrue);
    ifTrue4054 = $tmp4055;
    if (((panda$core$Bit) { ifTrue4054 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4057 = (panda$collections$Array*) malloc(40);
    $tmp4057->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4057->refCount.value = 1;
    panda$collections$Array$init($tmp4057);
    children4056 = $tmp4057;
    panda$collections$Array$add$panda$collections$Array$T(children4056, ((panda$core$Object*) test4050));
    panda$collections$Array$add$panda$collections$Array$T(children4056, ((panda$core$Object*) ifTrue4054));
    if (((panda$core$Bit) { p_rawIfFalse != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4060 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawIfFalse);
        ifFalse4059 = $tmp4060;
        if (((panda$core$Bit) { ifFalse4059 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4056, ((panda$core$Object*) ifFalse4059));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4061 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4061->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4061->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4061, ((panda$core$Int64) { 1012 }), p_position, ((panda$collections$ListView*) children4056));
    return $tmp4061;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* type14067;
    org$pandalanguage$pandac$Type* type24070;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4081;
    panda$core$Bit $tmp4063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4063.value) {
    {
        panda$core$Object* $tmp4064 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4065 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$Type*) $tmp4064));
        return $tmp4065;
    }
    }
    panda$core$Bit $tmp4066 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_type);
    if ($tmp4066.value) {
    {
        panda$core$Object* $tmp4068 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp4069 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4068));
        type14067 = $tmp4069;
        panda$core$Object* $tmp4071 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 2 }));
        type24070 = ((org$pandalanguage$pandac$Type*) $tmp4071);
        panda$core$Bit $tmp4072 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(type14067, type24070);
        if ($tmp4072.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$Bit $tmp4075 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(type14067);
        bool $tmp4074 = $tmp4075.value;
        if (!$tmp4074) goto $l4076;
        panda$core$Bit $tmp4078 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type24070)->name, &$s4077);
        $tmp4074 = $tmp4078.value;
        $l4076:;
        panda$core$Bit $tmp4079 = { $tmp4074 };
        bool $tmp4073 = $tmp4079.value;
        if (!$tmp4073) goto $l4080;
        panda$core$Int64 $tmp4083 = panda$core$String$length$R$panda$core$Int64(&$s4082);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4081, ((panda$core$Int64$nullable) { $tmp4083, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp4084 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) type24070)->name, $tmp4081);
        panda$core$Bit $tmp4085 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type14067)->name, $tmp4084);
        $tmp4073 = $tmp4085.value;
        $l4080:;
        panda$core$Bit $tmp4086 = { $tmp4073 };
        if ($tmp4086.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$String* $tmp4088 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4087, ((panda$core$Object*) p_type));
        panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4088, &$s4089);
        panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4090, &$s4091);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4092);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, panda$collections$ListView* p_rawBody) {
    org$pandalanguage$pandac$Type* elementType4093;
    org$pandalanguage$pandac$IRNode* list4094;
    org$pandalanguage$pandac$ASTNode* $match$2999_94095;
    org$pandalanguage$pandac$Position position4097;
    org$pandalanguage$pandac$ASTNode* type4099;
    org$pandalanguage$pandac$Type* t4101;
    org$pandalanguage$pandac$Type* listType4133;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4165;
    org$pandalanguage$pandac$Variable$Kind $tmp4166;
    org$pandalanguage$pandac$IRNode* body4168;
    panda$collections$Array* children4170;
    {
        $match$2999_94095 = p_astTarget;
        panda$core$Bit $tmp4096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2999_94095->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp4096.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4098 = ((org$pandalanguage$pandac$Position*) ((char*) $match$2999_94095->$data + 0));
            position4097 = *$tmp4098;
            org$pandalanguage$pandac$ASTNode** $tmp4100 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$2999_94095->$data + 24));
            type4099 = *$tmp4100;
            org$pandalanguage$pandac$Type* $tmp4102 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, type4099);
            org$pandalanguage$pandac$Type* $tmp4103 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4102);
            t4101 = $tmp4103;
            panda$core$Bit $tmp4104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4101->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp4104.value) {
            {
                panda$core$String* $tmp4106 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4105, ((panda$core$Object*) t4101));
                panda$core$String* $tmp4108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4106, &$s4107);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, position4097, $tmp4108);
                return NULL;
            }
            }
            panda$core$Bit $tmp4109 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t4101);
            panda$core$Bit $tmp4110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4109);
            if ($tmp4110.value) {
            {
                panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4111, ((panda$core$Object*) t4101));
                panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, &$s4113);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, position4097, $tmp4114);
                return NULL;
            }
            }
            panda$core$Bit $tmp4115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
            if ($tmp4115.value) {
            {
                panda$core$Int64 $tmp4116 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp4117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4116, ((panda$core$Int64) { 2 }));
                if ($tmp4117.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp4118 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4101);
                    org$pandalanguage$pandac$IRNode* $tmp4119 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4118);
                    list4094 = $tmp4119;
                }
                }
                else {
                {
                    panda$core$Int64 $tmp4120 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                    panda$core$Bit $tmp4121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4120, ((panda$core$Int64) { 3 }));
                    PANDA_ASSERT($tmp4121.value);
                    org$pandalanguage$pandac$Type* $tmp4122 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4101);
                    org$pandalanguage$pandac$IRNode* $tmp4123 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4122);
                    list4094 = $tmp4123;
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp4124 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
            if ($tmp4124.value) {
            {
                org$pandalanguage$pandac$Type* $tmp4125 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4101);
                org$pandalanguage$pandac$IRNode* $tmp4126 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4125);
                list4094 = $tmp4126;
            }
            }
            else {
            org$pandalanguage$pandac$Type* $tmp4127 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4101);
            panda$core$Int64$nullable $tmp4128 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp4127);
            if (((panda$core$Bit) { $tmp4128.nonnull }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp4129 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4101);
                org$pandalanguage$pandac$IRNode* $tmp4130 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4129);
                list4094 = $tmp4130;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp4131 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4101);
                org$pandalanguage$pandac$IRNode* $tmp4132 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4131);
                list4094 = $tmp4132;
            }
            }
            }
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp4134 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
            listType4133 = $tmp4134;
            panda$core$Bit $tmp4136 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType4133);
            bool $tmp4135 = $tmp4136.value;
            if ($tmp4135) goto $l4137;
            panda$core$Bit $tmp4138 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType4133);
            $tmp4135 = $tmp4138.value;
            $l4137:;
            panda$core$Bit $tmp4139 = { $tmp4135 };
            PANDA_ASSERT($tmp4139.value);
            panda$core$Object* $tmp4140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4133->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp4141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4140)->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp4141.value) {
            {
                panda$core$Bit $tmp4142 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType4133);
                if ($tmp4142.value) {
                {
                    panda$core$Object* $tmp4143 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4133->subtypes, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp4144 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4143));
                    org$pandalanguage$pandac$Type* $tmp4145 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp4144);
                    listType4133 = $tmp4145;
                }
                }
                else {
                {
                    panda$core$Object* $tmp4146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4133->subtypes, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp4147 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4146));
                    org$pandalanguage$pandac$Type* $tmp4148 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp4147);
                    listType4133 = $tmp4148;
                }
                }
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4149 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType4133);
            list4094 = $tmp4149;
        }
        }
    }
    if (((panda$core$Bit) { list4094 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4150 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, list4094->position, list4094->type);
    panda$core$Bit $tmp4151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4150);
    if ($tmp4151.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4094->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4152.value) {
    {
        panda$core$Object* $tmp4153 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list4094->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4153)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp4154.value);
        panda$core$Object* $tmp4155 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list4094->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4156 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp4155)->subtypes, ((panda$core$Int64) { 1 }));
        elementType4093 = ((org$pandalanguage$pandac$Type*) $tmp4156);
    }
    }
    else {
    {
        panda$core$Bit $tmp4157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4094->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp4157.value);
        panda$core$Object* $tmp4158 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list4094->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType4093 = ((org$pandalanguage$pandac$Type*) $tmp4158);
    }
    }
    panda$core$Bit $tmp4159 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType4093);
    panda$core$Bit $tmp4160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4159);
    if ($tmp4160.value) {
    {
        panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4161, ((panda$core$Object*) list4094->type));
        panda$core$String* $tmp4164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, &$s4163);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list4094->position, $tmp4164);
    }
    }
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4166, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4167 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp4166, NULL, elementType4093);
    target4165 = $tmp4167;
    if (((panda$core$Bit) { target4165 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target4165->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp4169 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_rawBody);
    body4168 = $tmp4169;
    if (((panda$core$Bit) { body4168 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4171 = (panda$collections$Array*) malloc(40);
    $tmp4171->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4171->refCount.value = 1;
    panda$collections$Array$init($tmp4171);
    children4170 = $tmp4171;
    panda$collections$Array$add$panda$collections$Array$T(children4170, ((panda$core$Object*) target4165->target));
    panda$collections$Array$add$panda$collections$Array$T(children4170, ((panda$core$Object*) list4094));
    panda$collections$Array$add$panda$collections$Array$T(children4170, ((panda$core$Object*) body4168));
    org$pandalanguage$pandac$IRNode* $tmp4173 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4173->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4173->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4173, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children4170));
    return $tmp4173;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, panda$collections$ListView* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4182;
    org$pandalanguage$pandac$Variable$Kind $tmp4183;
    org$pandalanguage$pandac$Variable* targetVar4187;
    panda$collections$Array* subtypes4188;
    org$pandalanguage$pandac$Type* iterType4192;
    org$pandalanguage$pandac$Variable* iter4203;
    org$pandalanguage$pandac$Variable$Kind $tmp4206;
    panda$collections$Array* statements4209;
    panda$collections$Array* declChildren4212;
    panda$collections$Array* varChildren4217;
    panda$collections$Array* whileChildren4224;
    org$pandalanguage$pandac$IRNode* done4227;
    org$pandalanguage$pandac$IRNode* notCall4234;
    panda$collections$Array* valueDeclChildren4239;
    org$pandalanguage$pandac$IRNode* next4244;
    panda$collections$Array* valueVarChildren4251;
    org$pandalanguage$pandac$IRNode* block4256;
    panda$collections$Array* blockChildren4258;
    panda$core$Bit $tmp4176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp4175 = $tmp4176.value;
    if (!$tmp4175) goto $l4177;
    panda$core$Object* $tmp4178 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4179 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4180 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4178), $tmp4179);
    $tmp4175 = $tmp4180.value;
    $l4177:;
    panda$core$Bit $tmp4181 = { $tmp4175 };
    PANDA_ASSERT($tmp4181.value);
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4183, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4185 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp4183, NULL, ((org$pandalanguage$pandac$Type*) $tmp4184));
    target4182 = $tmp4185;
    if (((panda$core$Bit) { target4182 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4182->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4186.value);
    targetVar4187 = ((org$pandalanguage$pandac$Variable*) target4182->target->payload);
    panda$collections$Array* $tmp4189 = (panda$collections$Array*) malloc(40);
    $tmp4189->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4189->refCount.value = 1;
    panda$collections$Array$init($tmp4189);
    subtypes4188 = $tmp4189;
    org$pandalanguage$pandac$Type* $tmp4191 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes4188, ((panda$core$Object*) $tmp4191));
    panda$collections$Array$add$panda$collections$Array$T(subtypes4188, ((panda$core$Object*) target4182->target->type));
    org$pandalanguage$pandac$Type* $tmp4193 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp4193->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp4193->refCount.value = 1;
    panda$core$Object* $tmp4195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes4188, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4196 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp4195));
    panda$core$String* $tmp4198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4196, &$s4197);
    panda$core$Object* $tmp4199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes4188, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4200 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4198, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp4199)));
    panda$core$String* $tmp4202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4200, &$s4201);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp4193, $tmp4202, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes4188), ((panda$core$Bit) { true }));
    iterType4192 = $tmp4193;
    org$pandalanguage$pandac$Variable* $tmp4204 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4204->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4204->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4206, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar4187)->name, &$s4207);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4204, p_iterator->position, $tmp4206, $tmp4208, iterType4192);
    iter4203 = $tmp4204;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter4203));
    panda$collections$Array* $tmp4210 = (panda$collections$Array*) malloc(40);
    $tmp4210->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4210->refCount.value = 1;
    panda$collections$Array$init($tmp4210);
    statements4209 = $tmp4210;
    panda$collections$Array* $tmp4213 = (panda$collections$Array*) malloc(40);
    $tmp4213->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4213->refCount.value = 1;
    panda$collections$Array$init($tmp4213);
    declChildren4212 = $tmp4213;
    org$pandalanguage$pandac$IRNode* $tmp4215 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4215->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4215->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4215, ((panda$core$Int64) { 1016 }), p_iterator->position, iter4203->type, iter4203);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4212, ((panda$core$Object*) $tmp4215));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4212, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp4218 = (panda$collections$Array*) malloc(40);
    $tmp4218->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4218->refCount.value = 1;
    panda$collections$Array$init($tmp4218);
    varChildren4217 = $tmp4218;
    org$pandalanguage$pandac$IRNode* $tmp4220 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4220->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4220->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4220, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter4203)->position, ((panda$collections$ListView*) declChildren4212));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4217, ((panda$core$Object*) $tmp4220));
    org$pandalanguage$pandac$IRNode* $tmp4222 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4222->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4222, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter4203)->position, ((panda$collections$ListView*) varChildren4217));
    panda$collections$Array$add$panda$collections$Array$T(statements4209, ((panda$core$Object*) $tmp4222));
    panda$collections$Array* $tmp4225 = (panda$collections$Array*) malloc(40);
    $tmp4225->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4225->refCount.value = 1;
    panda$collections$Array$init($tmp4225);
    whileChildren4224 = $tmp4225;
    org$pandalanguage$pandac$IRNode* $tmp4228 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4228->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4228->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4228, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter4203)->position, iter4203->type, iter4203);
    panda$collections$Array* $tmp4231 = (panda$collections$Array*) malloc(40);
    $tmp4231->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4231->refCount.value = 1;
    panda$collections$Array$init($tmp4231);
    org$pandalanguage$pandac$IRNode* $tmp4233 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4228, &$s4230, ((panda$collections$ListView*) $tmp4231), NULL);
    done4227 = $tmp4233;
    if (((panda$core$Bit) { done4227 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4236 = (panda$collections$Array*) malloc(40);
    $tmp4236->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4236->refCount.value = 1;
    panda$collections$Array$init($tmp4236);
    org$pandalanguage$pandac$IRNode* $tmp4238 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done4227, &$s4235, ((panda$collections$ListView*) $tmp4236), NULL);
    notCall4234 = $tmp4238;
    if (((panda$core$Bit) { notCall4234 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren4224, ((panda$core$Object*) notCall4234));
    panda$collections$Array* $tmp4240 = (panda$collections$Array*) malloc(40);
    $tmp4240->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4240->refCount.value = 1;
    panda$collections$Array$init($tmp4240);
    valueDeclChildren4239 = $tmp4240;
    org$pandalanguage$pandac$IRNode* $tmp4242 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4242->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4242->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4242, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar4187->type, targetVar4187);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren4239, ((panda$core$Object*) $tmp4242));
    org$pandalanguage$pandac$IRNode* $tmp4245 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4245->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4245, ((panda$core$Int64) { 1016 }), p_iterator->position, iter4203->type, iter4203);
    panda$collections$Array* $tmp4248 = (panda$collections$Array*) malloc(40);
    $tmp4248->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4248->refCount.value = 1;
    panda$collections$Array$init($tmp4248);
    org$pandalanguage$pandac$IRNode* $tmp4250 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4245, &$s4247, ((panda$collections$ListView*) $tmp4248), NULL);
    next4244 = $tmp4250;
    PANDA_ASSERT(((panda$core$Bit) { next4244 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren4239, ((panda$core$Object*) next4244));
    panda$collections$Array* $tmp4252 = (panda$collections$Array*) malloc(40);
    $tmp4252->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4252->refCount.value = 1;
    panda$collections$Array$init($tmp4252);
    valueVarChildren4251 = $tmp4252;
    org$pandalanguage$pandac$IRNode* $tmp4254 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4254->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4254->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4254, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren4239));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren4251, ((panda$core$Object*) $tmp4254));
    org$pandalanguage$pandac$IRNode* $tmp4257 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_body);
    block4256 = $tmp4257;
    if (((panda$core$Bit) { block4256 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4259 = (panda$collections$Array*) malloc(40);
    $tmp4259->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4259->refCount.value = 1;
    panda$collections$Array$init($tmp4259);
    blockChildren4258 = $tmp4259;
    org$pandalanguage$pandac$IRNode* $tmp4261 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4261->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4261->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4261, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren4251));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren4258, ((panda$core$Object*) $tmp4261));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren4258, ((panda$collections$CollectionView*) block4256->children));
    org$pandalanguage$pandac$IRNode* $tmp4263 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4263->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4263->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4263, ((panda$core$Int64) { 1000 }), block4256->position, ((panda$collections$ListView*) blockChildren4258));
    block4256 = $tmp4263;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren4224, ((panda$core$Object*) block4256));
    org$pandalanguage$pandac$IRNode* $tmp4265 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4265->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4265->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4265, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren4224));
    panda$collections$Array$add$panda$collections$Array$T(statements4209, ((panda$core$Object*) $tmp4265));
    org$pandalanguage$pandac$IRNode* $tmp4267 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4267->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4267, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements4209));
    return $tmp4267;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_rawTarget, org$pandalanguage$pandac$ASTNode* p_rawList, panda$collections$ListView* p_statements) {
    org$pandalanguage$pandac$IRNode* list4269;
    org$pandalanguage$pandac$SymbolTable* symbols4271;
    org$pandalanguage$pandac$IRNode* result4274;
    panda$core$Bit found4286;
    panda$collections$Iterator* intf$Iter4287;
    org$pandalanguage$pandac$Type* intf4300;
    org$pandalanguage$pandac$IRNode* iterator4312;
    org$pandalanguage$pandac$IRNode* iterable4322;
    org$pandalanguage$pandac$IRNode* iterator4324;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) p_label));
    org$pandalanguage$pandac$IRNode* $tmp4270 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
    list4269 = $tmp4270;
    if (((panda$core$Bit) { list4269 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4272 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4272->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4272->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4272, self->symbolTable);
    symbols4271 = $tmp4272;
    self->symbolTable = symbols4271;
    panda$core$Bit $tmp4277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4269->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp4276 = $tmp4277.value;
    if ($tmp4276) goto $l4278;
    panda$core$Bit $tmp4279 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list4269->type);
    $tmp4276 = $tmp4279.value;
    $l4278:;
    panda$core$Bit $tmp4280 = { $tmp4276 };
    bool $tmp4275 = $tmp4280.value;
    if ($tmp4275) goto $l4281;
    panda$core$Bit $tmp4282 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list4269->type);
    $tmp4275 = $tmp4282.value;
    $l4281:;
    panda$core$Bit $tmp4283 = { $tmp4275 };
    if ($tmp4283.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4284 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_label, p_rawTarget, list4269, p_statements);
        result4274 = $tmp4284;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp4285 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list4269);
        list4269 = $tmp4285;
        if (((panda$core$Bit) { list4269 == NULL }).value) {
        {
            return NULL;
        }
        }
        found4286 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp4288 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list4269->type);
            ITable* $tmp4289 = ((panda$collections$Iterable*) $tmp4288)->$class->itable;
            while ($tmp4289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4289 = $tmp4289->next;
            }
            $fn4291 $tmp4290 = $tmp4289->methods[0];
            panda$collections$Iterator* $tmp4292 = $tmp4290(((panda$collections$Iterable*) $tmp4288));
            intf$Iter4287 = $tmp4292;
            $l4293:;
            ITable* $tmp4295 = intf$Iter4287->$class->itable;
            while ($tmp4295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4295 = $tmp4295->next;
            }
            $fn4297 $tmp4296 = $tmp4295->methods[0];
            panda$core$Bit $tmp4298 = $tmp4296(intf$Iter4287);
            panda$core$Bit $tmp4299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4298);
            if (!$tmp4299.value) goto $l4294;
            {
                ITable* $tmp4301 = intf$Iter4287->$class->itable;
                while ($tmp4301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4301 = $tmp4301->next;
                }
                $fn4303 $tmp4302 = $tmp4301->methods[1];
                panda$core$Object* $tmp4304 = $tmp4302(intf$Iter4287);
                intf4300 = ((org$pandalanguage$pandac$Type*) $tmp4304);
                panda$core$Bit $tmp4306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4300->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4305 = $tmp4306.value;
                if (!$tmp4305) goto $l4307;
                panda$core$Object* $tmp4308 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4300->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4309 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4310 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4308), $tmp4309);
                $tmp4305 = $tmp4310.value;
                $l4307:;
                panda$core$Bit $tmp4311 = { $tmp4305 };
                if ($tmp4311.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4313 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4269, intf4300);
                    iterator4312 = $tmp4313;
                    org$pandalanguage$pandac$IRNode* $tmp4314 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_label, p_rawTarget, iterator4312, p_statements);
                    result4274 = $tmp4314;
                    found4286 = ((panda$core$Bit) { true });
                    goto $l4294;
                }
                }
                panda$core$Bit $tmp4316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4300->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4315 = $tmp4316.value;
                if (!$tmp4315) goto $l4317;
                panda$core$Object* $tmp4318 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4300->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4319 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4320 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4318), $tmp4319);
                $tmp4315 = $tmp4320.value;
                $l4317:;
                panda$core$Bit $tmp4321 = { $tmp4315 };
                if ($tmp4321.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4323 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4269, intf4300);
                    iterable4322 = $tmp4323;
                    panda$collections$Array* $tmp4326 = (panda$collections$Array*) malloc(40);
                    $tmp4326->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4326->refCount.value = 1;
                    panda$collections$Array$init($tmp4326);
                    org$pandalanguage$pandac$IRNode* $tmp4328 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable4322, &$s4325, ((panda$collections$ListView*) $tmp4326));
                    iterator4324 = $tmp4328;
                    org$pandalanguage$pandac$IRNode* $tmp4329 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_label, p_rawTarget, iterator4324, p_statements);
                    result4274 = $tmp4329;
                    found4286 = ((panda$core$Bit) { true });
                    goto $l4294;
                }
                }
            }
            goto $l4293;
            $l4294:;
        }
        panda$core$Bit $tmp4330 = panda$core$Bit$$NOT$R$panda$core$Bit(found4286);
        if ($tmp4330.value) {
        {
            panda$core$String* $tmp4332 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4331, ((panda$core$Object*) list4269->type));
            panda$core$String* $tmp4334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4332, &$s4333);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list4269->position, $tmp4334);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp4335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4271->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4335);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result4274;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_rawTest, panda$collections$ListView* p_statements) {
    org$pandalanguage$pandac$IRNode* test4336;
    org$pandalanguage$pandac$IRNode* block4340;
    panda$collections$Array* children4342;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) p_label));
    org$pandalanguage$pandac$IRNode* $tmp4337 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTest);
    org$pandalanguage$pandac$Type* $tmp4338 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4339 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4337, $tmp4338);
    test4336 = $tmp4339;
    if (((panda$core$Bit) { test4336 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4341 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_statements);
    block4340 = $tmp4341;
    if (((panda$core$Bit) { block4340 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4343 = (panda$collections$Array*) malloc(40);
    $tmp4343->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4343->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4343, ((panda$core$Int64) { 2 }));
    children4342 = $tmp4343;
    panda$collections$Array$add$panda$collections$Array$T(children4342, ((panda$core$Object*) test4336));
    panda$collections$Array$add$panda$collections$Array$T(children4342, ((panda$core$Object*) block4340));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4345->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4345, ((panda$core$Int64) { 1013 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children4342));
    return $tmp4345;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, panda$collections$ListView* p_statements, org$pandalanguage$pandac$ASTNode* p_rawTest) {
    org$pandalanguage$pandac$IRNode* block4347;
    org$pandalanguage$pandac$IRNode* test4349;
    panda$collections$Array* children4353;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) p_label));
    org$pandalanguage$pandac$IRNode* $tmp4348 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_statements);
    block4347 = $tmp4348;
    if (((panda$core$Bit) { block4347 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4350 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTest);
    org$pandalanguage$pandac$Type* $tmp4351 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4352 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4350, $tmp4351);
    test4349 = $tmp4352;
    if (((panda$core$Bit) { test4349 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4354 = (panda$collections$Array*) malloc(40);
    $tmp4354->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4354->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4354, ((panda$core$Int64) { 2 }));
    children4353 = $tmp4354;
    panda$collections$Array$add$panda$collections$Array$T(children4353, ((panda$core$Object*) block4347));
    panda$collections$Array$add$panda$collections$Array$T(children4353, ((panda$core$Object*) test4349));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4356 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4356->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4356->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4356, ((panda$core$Int64) { 1014 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children4353));
    return $tmp4356;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, panda$collections$ListView* p_statements) {
    org$pandalanguage$pandac$IRNode* block4358;
    panda$collections$Array* children4360;
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) p_label));
    org$pandalanguage$pandac$IRNode* $tmp4359 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_statements);
    block4358 = $tmp4359;
    if (((panda$core$Bit) { block4358 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4361 = (panda$collections$Array*) malloc(40);
    $tmp4361->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4361->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4361, ((panda$core$Int64) { 1 }));
    children4360 = $tmp4361;
    panda$collections$Array$add$panda$collections$Array$T(children4360, ((panda$core$Object*) block4358));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4363 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4363->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4363, ((panda$core$Int64) { 1015 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children4360));
    return $tmp4363;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$Variable$Kind p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value4365;
    org$pandalanguage$pandac$ASTNode* $match$3252_94369;
    org$pandalanguage$pandac$Position position4371;
    panda$core$String* name4373;
    org$pandalanguage$pandac$Type* type4375;
    org$pandalanguage$pandac$Variable* v4381;
    org$pandalanguage$pandac$Position position4389;
    panda$core$String* name4391;
    org$pandalanguage$pandac$ASTNode* rawType4393;
    org$pandalanguage$pandac$Type* type4395;
    org$pandalanguage$pandac$Variable* v4400;
    value4365 = p_rawValue;
    bool $tmp4366 = ((panda$core$Bit) { value4365 == NULL }).value;
    if ($tmp4366) goto $l4367;
    $tmp4366 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l4367:;
    panda$core$Bit $tmp4368 = { $tmp4366 };
    PANDA_ASSERT($tmp4368.value);
    {
        $match$3252_94369 = p_t;
        panda$core$Bit $tmp4370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3252_94369->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp4370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3252_94369->$data + 0));
            position4371 = *$tmp4372;
            panda$core$String** $tmp4374 = ((panda$core$String**) ((char*) $match$3252_94369->$data + 16));
            name4373 = *$tmp4374;
            if (((panda$core$Bit) { value4365 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4376 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value4365);
                value4365 = $tmp4376;
                if (((panda$core$Bit) { value4365 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4377 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value4365);
                type4375 = $tmp4377;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type4375 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, position4371, &$s4378);
                return NULL;
            }
            }
            }
            if (((panda$core$Bit) { value4365 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4379 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4365, type4375);
                value4365 = $tmp4379;
                if (((panda$core$Bit) { value4365 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4380 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value4365->type, type4375);
                PANDA_ASSERT($tmp4380.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4382 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4382->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4382->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4382, position4371, p_kind, name4373, type4375);
            v4381 = $tmp4382;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4381));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4384 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4384->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4384->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4386 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4386->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4386->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4386, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4381)->position, v4381->type, v4381);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4384, $tmp4386, value4365);
            return $tmp4384;
        }
        }
        else {
        panda$core$Bit $tmp4388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3252_94369->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp4388.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4390 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3252_94369->$data + 0));
            position4389 = *$tmp4390;
            panda$core$String** $tmp4392 = ((panda$core$String**) ((char*) $match$3252_94369->$data + 16));
            name4391 = *$tmp4392;
            org$pandalanguage$pandac$ASTNode** $tmp4394 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3252_94369->$data + 24));
            rawType4393 = *$tmp4394;
            org$pandalanguage$pandac$Type* $tmp4396 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, rawType4393);
            org$pandalanguage$pandac$Type* $tmp4397 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4396);
            type4395 = $tmp4397;
            if (((panda$core$Bit) { value4365 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4398 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4365, type4395);
                value4365 = $tmp4398;
                if (((panda$core$Bit) { value4365 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4399 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value4365->type, type4395);
                PANDA_ASSERT($tmp4399.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4401 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4401->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4401->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4401, position4389, p_kind, name4391, type4395);
            v4400 = $tmp4401;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4400));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4403 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4403->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4403->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4405 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4405->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4405->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4405, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4400)->position, v4400->type, v4400);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4403, $tmp4405, value4365);
            return $tmp4403;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_target, org$pandalanguage$pandac$ASTNode* p_rawValue, org$pandalanguage$pandac$Variable$Kind p_varKind) {
    org$pandalanguage$pandac$IRNode* value4407;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4409;
    panda$collections$Array* children4411;
    org$pandalanguage$pandac$Variable* v4415;
    if (((panda$core$Bit) { p_rawValue != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4408 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawValue);
        value4407 = $tmp4408;
        if (((panda$core$Bit) { value4407 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4407 = NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4410 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_target, p_varKind, value4407, NULL);
    target4409 = $tmp4410;
    if (((panda$core$Bit) { target4409 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4412 = (panda$collections$Array*) malloc(40);
    $tmp4412->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4412->refCount.value = 1;
    panda$collections$Array$init($tmp4412);
    children4411 = $tmp4412;
    panda$collections$Array$add$panda$collections$Array$T(children4411, ((panda$core$Object*) target4409->target));
    if (((panda$core$Bit) { target4409->value != NULL }).value) {
    {
        panda$core$Bit $tmp4414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4409->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp4414.value);
        v4415 = ((org$pandalanguage$pandac$Variable*) target4409->target->payload);
        v4415->initialValue = target4409->value;
        panda$collections$Array$add$panda$collections$Array$T(children4411, ((panda$core$Object*) target4409->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4416 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4416->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4416->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4416, ((panda$core$Int64) { 1021 }), p_position, ((panda$collections$ListView*) children4411));
    return $tmp4416;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label) {
    panda$core$Bit found4418;
    panda$collections$Iterator* loopLabel$Iter4419;
    panda$core$String* loopLabel4431;
    if (((panda$core$Bit) { p_label != NULL }).value) {
    {
        found4418 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4420 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4420->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4420 = $tmp4420->next;
            }
            $fn4422 $tmp4421 = $tmp4420->methods[0];
            panda$collections$Iterator* $tmp4423 = $tmp4421(((panda$collections$Iterable*) self->loops));
            loopLabel$Iter4419 = $tmp4423;
            $l4424:;
            ITable* $tmp4426 = loopLabel$Iter4419->$class->itable;
            while ($tmp4426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4426 = $tmp4426->next;
            }
            $fn4428 $tmp4427 = $tmp4426->methods[0];
            panda$core$Bit $tmp4429 = $tmp4427(loopLabel$Iter4419);
            panda$core$Bit $tmp4430 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4429);
            if (!$tmp4430.value) goto $l4425;
            {
                ITable* $tmp4432 = loopLabel$Iter4419->$class->itable;
                while ($tmp4432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4432 = $tmp4432->next;
                }
                $fn4434 $tmp4433 = $tmp4432->methods[1];
                panda$core$Object* $tmp4435 = $tmp4433(loopLabel$Iter4419);
                loopLabel4431 = ((panda$core$String*) $tmp4435);
                bool $tmp4436 = ((panda$core$Bit) { loopLabel4431 != NULL }).value;
                if (!$tmp4436) goto $l4437;
                panda$core$Bit $tmp4441;
                if (((panda$core$Bit) { p_label != NULL }).value) goto $l4438; else goto $l4439;
                $l4438:;
                panda$core$Bit $tmp4442 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_label, loopLabel4431);
                $tmp4441 = $tmp4442;
                goto $l4440;
                $l4439:;
                $tmp4441 = ((panda$core$Bit) { false });
                goto $l4440;
                $l4440:;
                $tmp4436 = $tmp4441.value;
                $l4437:;
                panda$core$Bit $tmp4443 = { $tmp4436 };
                if ($tmp4443.value) {
                {
                    found4418 = ((panda$core$Bit) { true });
                    goto $l4425;
                }
                }
            }
            goto $l4424;
            $l4425:;
        }
        panda$core$Bit $tmp4444 = panda$core$Bit$$NOT$R$panda$core$Bit(found4418);
        if ($tmp4444.value) {
        {
            panda$core$String* $tmp4446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4445, p_label);
            panda$core$String* $tmp4448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4446, &$s4447);
            panda$core$String* $tmp4449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4448, p_label);
            panda$core$String* $tmp4451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4449, &$s4450);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4451);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4452 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4452, ((panda$core$Int64) { 0 }));
    if ($tmp4453.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4454);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4455 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4455->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4455->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4455, ((panda$core$Int64) { 1006 }), p_position, p_label);
    return $tmp4455;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label) {
    panda$core$Bit found4457;
    panda$collections$Iterator* loopLabel$Iter4458;
    panda$core$String* loopLabel4470;
    if (((panda$core$Bit) { p_label != NULL }).value) {
    {
        found4457 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4459 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4459->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4459 = $tmp4459->next;
            }
            $fn4461 $tmp4460 = $tmp4459->methods[0];
            panda$collections$Iterator* $tmp4462 = $tmp4460(((panda$collections$Iterable*) self->loops));
            loopLabel$Iter4458 = $tmp4462;
            $l4463:;
            ITable* $tmp4465 = loopLabel$Iter4458->$class->itable;
            while ($tmp4465->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4465 = $tmp4465->next;
            }
            $fn4467 $tmp4466 = $tmp4465->methods[0];
            panda$core$Bit $tmp4468 = $tmp4466(loopLabel$Iter4458);
            panda$core$Bit $tmp4469 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4468);
            if (!$tmp4469.value) goto $l4464;
            {
                ITable* $tmp4471 = loopLabel$Iter4458->$class->itable;
                while ($tmp4471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4471 = $tmp4471->next;
                }
                $fn4473 $tmp4472 = $tmp4471->methods[1];
                panda$core$Object* $tmp4474 = $tmp4472(loopLabel$Iter4458);
                loopLabel4470 = ((panda$core$String*) $tmp4474);
                bool $tmp4475 = ((panda$core$Bit) { loopLabel4470 != NULL }).value;
                if (!$tmp4475) goto $l4476;
                panda$core$Bit $tmp4480;
                if (((panda$core$Bit) { p_label != NULL }).value) goto $l4477; else goto $l4478;
                $l4477:;
                panda$core$Bit $tmp4481 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_label, loopLabel4470);
                $tmp4480 = $tmp4481;
                goto $l4479;
                $l4478:;
                $tmp4480 = ((panda$core$Bit) { false });
                goto $l4479;
                $l4479:;
                $tmp4475 = $tmp4480.value;
                $l4476:;
                panda$core$Bit $tmp4482 = { $tmp4475 };
                if ($tmp4482.value) {
                {
                    found4457 = ((panda$core$Bit) { true });
                    goto $l4464;
                }
                }
            }
            goto $l4463;
            $l4464:;
        }
        panda$core$Bit $tmp4483 = panda$core$Bit$$NOT$R$panda$core$Bit(found4457);
        if ($tmp4483.value) {
        {
            panda$core$String* $tmp4485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4484, p_label);
            panda$core$String* $tmp4487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4485, &$s4486);
            panda$core$String* $tmp4488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4487, p_label);
            panda$core$String* $tmp4490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4488, &$s4489);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4490);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4491 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4491, ((panda$core$Int64) { 0 }));
    if ($tmp4492.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4493);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4494 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4494->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4494->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4494, ((panda$core$Int64) { 1007 }), p_position, p_label);
    return $tmp4494;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawValue) {
    org$pandalanguage$pandac$IRNode* value4500;
    panda$collections$Array* children4504;
    if (((panda$core$Bit) { p_rawValue != NULL }).value) {
    {
        panda$core$Object* $tmp4496 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4497 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4498 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4496)->returnType, $tmp4497);
        if ($tmp4498.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4499);
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp4501 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawValue);
        panda$core$Object* $tmp4502 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4503 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4501, ((org$pandalanguage$pandac$MethodDecl*) $tmp4502)->returnType);
        value4500 = $tmp4503;
        if (((panda$core$Bit) { value4500 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4505 = (panda$collections$Array*) malloc(40);
        $tmp4505->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4505->refCount.value = 1;
        panda$collections$Array$init($tmp4505);
        children4504 = $tmp4505;
        panda$collections$Array$add$panda$collections$Array$T(children4504, ((panda$core$Object*) value4500));
        org$pandalanguage$pandac$IRNode* $tmp4507 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4507->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4507->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4507, ((panda$core$Int64) { 1008 }), p_position, ((panda$collections$ListView*) children4504));
        return $tmp4507;
    }
    }
    panda$core$Object* $tmp4509 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4510 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4511 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4509)->returnType, $tmp4510);
    if ($tmp4511.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s4512);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4513 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4513->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4513->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4513, ((panda$core$Int64) { 1008 }), p_position);
    return $tmp4513;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawTest, org$pandalanguage$pandac$ASTNode* p_rawMessage) {
    org$pandalanguage$pandac$IRNode* test4515;
    org$pandalanguage$pandac$ClassDecl* bit4519;
    org$pandalanguage$pandac$Symbol* value4522;
    panda$collections$Array* fieldChildren4525;
    panda$collections$Array* children4531;
    org$pandalanguage$pandac$IRNode* message4534;
    org$pandalanguage$pandac$IRNode* $tmp4516 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawTest);
    test4515 = $tmp4516;
    if (((panda$core$Bit) { test4515 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4517 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4518 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4515, $tmp4517);
    test4515 = $tmp4518;
    if (((panda$core$Bit) { test4515 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4520 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4521 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4520);
    bit4519 = $tmp4521;
    PANDA_ASSERT(((panda$core$Bit) { bit4519 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4524 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4519->symbolTable, &$s4523);
    value4522 = $tmp4524;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4522));
    panda$collections$Array* $tmp4526 = (panda$collections$Array*) malloc(40);
    $tmp4526->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4526->refCount.value = 1;
    panda$collections$Array$init($tmp4526);
    fieldChildren4525 = $tmp4526;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4525, ((panda$core$Object*) test4515));
    org$pandalanguage$pandac$IRNode* $tmp4528 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4528->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4528->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4530 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4528, ((panda$core$Int64) { 1026 }), p_position, $tmp4530, ((panda$core$Object*) value4522), ((panda$collections$ListView*) fieldChildren4525));
    test4515 = $tmp4528;
    panda$collections$Array* $tmp4532 = (panda$collections$Array*) malloc(40);
    $tmp4532->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4532->refCount.value = 1;
    panda$collections$Array$init($tmp4532);
    children4531 = $tmp4532;
    panda$collections$Array$add$panda$collections$Array$T(children4531, ((panda$core$Object*) test4515));
    if (((panda$core$Bit) { p_rawMessage != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4535 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawMessage);
        message4534 = $tmp4535;
        if (((panda$core$Bit) { message4534 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4536 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4537 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, message4534, $tmp4536);
        message4534 = $tmp4537;
        if (((panda$core$Bit) { message4534 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4531, ((panda$core$Object*) message4534));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4538 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4538->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4538->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4538, ((panda$core$Int64) { 1034 }), p_position, ((panda$collections$ListView*) children4531));
    return $tmp4538;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$collections$ImmutableArray* p_declarations) {
    panda$core$Int64 nodeKind4540;
    org$pandalanguage$pandac$Variable$Kind $match$3420_94541;
    panda$collections$Array* decls4546;
    panda$collections$Iterator* astDecl$Iter4549;
    org$pandalanguage$pandac$ASTNode* astDecl4561;
    org$pandalanguage$pandac$ASTNode* $match$3433_134566;
    org$pandalanguage$pandac$Position position4568;
    org$pandalanguage$pandac$ASTNode* target4570;
    org$pandalanguage$pandac$ASTNode* rawValue4572;
    org$pandalanguage$pandac$IRNode* decl4574;
    {
        $match$3420_94541 = p_kind;
        panda$core$Bit $tmp4542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3420_94541.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp4542.value) {
        {
            nodeKind4540 = ((panda$core$Int64) { 1017 });
        }
        }
        else {
        panda$core$Bit $tmp4543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3420_94541.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp4543.value) {
        {
            nodeKind4540 = ((panda$core$Int64) { 1018 });
        }
        }
        else {
        panda$core$Bit $tmp4544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3420_94541.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp4544.value) {
        {
            nodeKind4540 = ((panda$core$Int64) { 1019 });
        }
        }
        else {
        panda$core$Bit $tmp4545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3420_94541.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp4545.value) {
        {
            nodeKind4540 = ((panda$core$Int64) { 1020 });
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp4547 = (panda$collections$Array*) malloc(40);
    $tmp4547->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4547->refCount.value = 1;
    panda$collections$Array$init($tmp4547);
    decls4546 = $tmp4547;
    {
        ITable* $tmp4550 = ((panda$collections$Iterable*) p_declarations)->$class->itable;
        while ($tmp4550->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4550 = $tmp4550->next;
        }
        $fn4552 $tmp4551 = $tmp4550->methods[0];
        panda$collections$Iterator* $tmp4553 = $tmp4551(((panda$collections$Iterable*) p_declarations));
        astDecl$Iter4549 = $tmp4553;
        $l4554:;
        ITable* $tmp4556 = astDecl$Iter4549->$class->itable;
        while ($tmp4556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4556 = $tmp4556->next;
        }
        $fn4558 $tmp4557 = $tmp4556->methods[0];
        panda$core$Bit $tmp4559 = $tmp4557(astDecl$Iter4549);
        panda$core$Bit $tmp4560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4559);
        if (!$tmp4560.value) goto $l4555;
        {
            ITable* $tmp4562 = astDecl$Iter4549->$class->itable;
            while ($tmp4562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4562 = $tmp4562->next;
            }
            $fn4564 $tmp4563 = $tmp4562->methods[1];
            panda$core$Object* $tmp4565 = $tmp4563(astDecl$Iter4549);
            astDecl4561 = ((org$pandalanguage$pandac$ASTNode*) $tmp4565);
            {
                $match$3433_134566 = astDecl4561;
                panda$core$Bit $tmp4567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3433_134566->$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp4567.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp4569 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3433_134566->$data + 0));
                    position4568 = *$tmp4569;
                    org$pandalanguage$pandac$ASTNode** $tmp4571 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3433_134566->$data + 16));
                    target4570 = *$tmp4571;
                    org$pandalanguage$pandac$ASTNode** $tmp4573 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3433_134566->$data + 24));
                    rawValue4572 = *$tmp4573;
                    org$pandalanguage$pandac$IRNode* $tmp4575 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(self, position4568, target4570, rawValue4572, p_kind);
                    decl4574 = $tmp4575;
                    if (((panda$core$Bit) { decl4574 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(decls4546, ((panda$core$Object*) decl4574));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l4554;
        $l4555:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4576->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4576, nodeKind4540, p_position, ((panda$collections$ListView*) decls4546));
    return $tmp4576;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4578;
    org$pandalanguage$pandac$IRNode* testValue4583;
    panda$collections$Array* callChildren4585;
    org$pandalanguage$pandac$IRNode* $tmp4579 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4579->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4579->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp4582 = (($fn4581) p_test->$class->vtable[2])(p_test);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4579, ((panda$core$Int64) { 1016 }), $tmp4582, p_value->type, p_value);
    target4578 = $tmp4579;
    org$pandalanguage$pandac$IRNode* $tmp4584 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4583 = $tmp4584;
    if (((panda$core$Bit) { testValue4583 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4586 = (panda$collections$Array*) malloc(40);
    $tmp4586->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4586->refCount.value = 1;
    panda$collections$Array$init($tmp4586);
    callChildren4585 = $tmp4586;
    panda$collections$Array$add$panda$collections$Array$T(callChildren4585, ((panda$core$Object*) testValue4583));
    org$pandalanguage$pandac$IRNode* $tmp4589 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4578, &$s4588, ((panda$collections$ListView*) callChildren4585));
    return $tmp4589;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$Position p_position, panda$collections$ImmutableArray* p_tests, panda$collections$ImmutableArray* p_rawStatements) {
    org$pandalanguage$pandac$ASTNode* test4592;
    org$pandalanguage$pandac$ASTNode* $match$3463_174595;
    org$pandalanguage$pandac$Position testPosition4597;
    org$pandalanguage$pandac$ASTNode* rawBase4599;
    panda$collections$ImmutableArray* args4601;
    org$pandalanguage$pandac$ClassDecl* cl4603;
    org$pandalanguage$pandac$IRNode* base4606;
    panda$collections$Array* callChildren4609;
    org$pandalanguage$pandac$IRNode* target4612;
    org$pandalanguage$pandac$IRNode* check4615;
    org$pandalanguage$pandac$ChoiceEntry* entry4618;
    panda$core$Int64 requiredCount4619;
    panda$core$Int64 actualCount4621;
    panda$collections$Array* statements4650;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4653;
    org$pandalanguage$pandac$ASTNode* $match$3493_374667;
    org$pandalanguage$pandac$Position position4670;
    panda$core$String* name4672;
    org$pandalanguage$pandac$Variable* variable4676;
    org$pandalanguage$pandac$Variable$Kind $tmp4679;
    panda$collections$Array* declChildren4681;
    panda$collections$Array* fieldRefChildren4686;
    panda$collections$Array* varChildren4696;
    panda$collections$Iterator* rawStatement$Iter4713;
    org$pandalanguage$pandac$ASTNode* rawStatement4725;
    org$pandalanguage$pandac$IRNode* statement4730;
    panda$collections$Array* children4733;
    org$pandalanguage$pandac$IRNode* test4740;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4743;
    org$pandalanguage$pandac$IRNode* nextTest4758;
    panda$collections$Array* callChildren4761;
    panda$collections$Array* statements4774;
    panda$collections$Iterator* rawStatement$Iter4777;
    org$pandalanguage$pandac$ASTNode* rawStatement4789;
    org$pandalanguage$pandac$IRNode* statement4794;
    panda$collections$Array* children4797;
    panda$core$Int64 $tmp4590 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_tests);
    panda$core$Bit $tmp4591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4590, ((panda$core$Int64) { 1 }));
    if ($tmp4591.value) {
    {
        panda$core$Object* $tmp4593 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_tests, ((panda$core$Int64) { 0 }));
        test4592 = ((org$pandalanguage$pandac$ASTNode*) $tmp4593);
        panda$core$Bit $tmp4594 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_value->type);
        if ($tmp4594.value) {
        {
            {
                $match$3463_174595 = test4592;
                panda$core$Bit $tmp4596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3463_174595->$rawValue, ((panda$core$Int64) { 6 }));
                if ($tmp4596.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp4598 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3463_174595->$data + 0));
                    testPosition4597 = *$tmp4598;
                    org$pandalanguage$pandac$ASTNode** $tmp4600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3463_174595->$data + 16));
                    rawBase4599 = *$tmp4600;
                    panda$collections$ImmutableArray** $tmp4602 = ((panda$collections$ImmutableArray**) ((char*) $match$3463_174595->$data + 24));
                    args4601 = *$tmp4602;
                    org$pandalanguage$pandac$ClassDecl* $tmp4604 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_value->type);
                    cl4603 = $tmp4604;
                    panda$core$Bit $tmp4605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl4603->classKind.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp4605.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp4607 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawBase4599);
                        base4606 = $tmp4607;
                        if (((panda$core$Bit) { base4606 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$core$Bit $tmp4608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base4606->kind, ((panda$core$Int64) { 1046 }));
                        if ($tmp4608.value) {
                        {
                            panda$collections$Array* $tmp4610 = (panda$collections$Array*) malloc(40);
                            $tmp4610->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp4610->refCount.value = 1;
                            panda$collections$Array$init($tmp4610);
                            callChildren4609 = $tmp4610;
                            panda$collections$Array$add$panda$collections$Array$T(callChildren4609, ((panda$core$Object*) base4606));
                            org$pandalanguage$pandac$IRNode* $tmp4613 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp4613->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp4613->refCount.value = 1;
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4613, ((panda$core$Int64) { 1016 }), testPosition4597, p_value->type, p_value);
                            target4612 = $tmp4613;
                            org$pandalanguage$pandac$IRNode* $tmp4617 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4612, &$s4616, ((panda$collections$ListView*) callChildren4609));
                            check4615 = $tmp4617;
                            if (((panda$core$Bit) { check4615 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            entry4618 = ((org$pandalanguage$pandac$ChoiceEntry*) base4606->payload);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, entry4618);
                            panda$core$Int64 $tmp4620 = panda$collections$Array$get_count$R$panda$core$Int64(entry4618->fields);
                            requiredCount4619 = $tmp4620;
                            panda$core$Int64 $tmp4622 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(args4601);
                            actualCount4621 = $tmp4622;
                            panda$core$Bit $tmp4623 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(actualCount4621, requiredCount4619);
                            if ($tmp4623.value) {
                            {
                                panda$core$String* $tmp4625 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4624, base4606->payload);
                                panda$core$String* $tmp4627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4625, &$s4626);
                                panda$core$String* $tmp4628 = panda$core$Int64$convert$R$panda$core$String(requiredCount4619);
                                panda$core$String* $tmp4630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4628, &$s4629);
                                panda$core$Bit $tmp4631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(requiredCount4619, ((panda$core$Int64) { 1 }));
                                panda$core$Bit$wrapper* $tmp4632;
                                $tmp4632 = (panda$core$Bit$wrapper*) malloc(13);
                                $tmp4632->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                                $tmp4632->refCount = 1;
                                $tmp4632->value = $tmp4631;
                                ITable* $tmp4634 = ((panda$core$Formattable*) $tmp4632)->$class->itable;
                                while ($tmp4634->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                                    $tmp4634 = $tmp4634->next;
                                }
                                $fn4636 $tmp4635 = $tmp4634->methods[0];
                                panda$core$String* $tmp4637 = $tmp4635(((panda$core$Formattable*) $tmp4632), &$s4633);
                                panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4630, $tmp4637);
                                panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, &$s4639);
                                panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4627, $tmp4640);
                                panda$core$Int64$wrapper* $tmp4643;
                                $tmp4643 = (panda$core$Int64$wrapper*) malloc(24);
                                $tmp4643->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                                $tmp4643->refCount = 1;
                                $tmp4643->value = actualCount4621;
                                panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4642, ((panda$core$Object*) $tmp4643));
                                panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, &$s4645);
                                panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4641, $tmp4646);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, testPosition4597, $tmp4647);
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$SymbolTable* $tmp4648 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
                            $tmp4648->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
                            $tmp4648->refCount.value = 1;
                            org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4648, self->symbolTable);
                            self->symbolTable = $tmp4648;
                            panda$collections$Array* $tmp4651 = (panda$collections$Array*) malloc(40);
                            $tmp4651->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp4651->refCount.value = 1;
                            panda$collections$Array$init($tmp4651);
                            statements4650 = $tmp4651;
                            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4653, ((panda$core$Int64) { 0 }), actualCount4621, ((panda$core$Bit) { false }));
                            int64_t $tmp4655 = $tmp4653.min.value;
                            panda$core$Int64 i4654 = { $tmp4655 };
                            int64_t $tmp4657 = $tmp4653.max.value;
                            bool $tmp4658 = $tmp4653.inclusive.value;
                            if ($tmp4658) goto $l4665; else goto $l4666;
                            $l4665:;
                            if ($tmp4655 <= $tmp4657) goto $l4659; else goto $l4661;
                            $l4666:;
                            if ($tmp4655 < $tmp4657) goto $l4659; else goto $l4661;
                            $l4659:;
                            {
                                {
                                    panda$core$Object* $tmp4668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args4601, i4654);
                                    $match$3493_374667 = ((org$pandalanguage$pandac$ASTNode*) $tmp4668);
                                    panda$core$Bit $tmp4669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3493_374667->$rawValue, ((panda$core$Int64) { 18 }));
                                    if ($tmp4669.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp4671 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3493_374667->$data + 0));
                                        position4670 = *$tmp4671;
                                        panda$core$String** $tmp4673 = ((panda$core$String**) ((char*) $match$3493_374667->$data + 16));
                                        name4672 = *$tmp4673;
                                        panda$core$Bit $tmp4675 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name4672, &$s4674);
                                        if ($tmp4675.value) {
                                        {
                                            goto $l4662;
                                        }
                                        }
                                        org$pandalanguage$pandac$Variable* $tmp4677 = (org$pandalanguage$pandac$Variable*) malloc(88);
                                        $tmp4677->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
                                        $tmp4677->refCount.value = 1;
                                        org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4679, ((panda$core$Int64) { 1 }));
                                        panda$core$Object* $tmp4680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(entry4618->fields, i4654);
                                        org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4677, position4670, $tmp4679, name4672, ((org$pandalanguage$pandac$Type*) $tmp4680));
                                        variable4676 = $tmp4677;
                                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) variable4676));
                                        panda$collections$Array* $tmp4682 = (panda$collections$Array*) malloc(40);
                                        $tmp4682->$class = (panda$core$Class*) &panda$collections$Array$class;
                                        $tmp4682->refCount.value = 1;
                                        panda$collections$Array$init($tmp4682);
                                        declChildren4681 = $tmp4682;
                                        org$pandalanguage$pandac$IRNode* $tmp4684 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                        $tmp4684->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                        $tmp4684->refCount.value = 1;
                                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4684, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) variable4676)->position, variable4676->type, variable4676);
                                        panda$collections$Array$add$panda$collections$Array$T(declChildren4681, ((panda$core$Object*) $tmp4684));
                                        panda$collections$Array* $tmp4687 = (panda$collections$Array*) malloc(40);
                                        $tmp4687->$class = (panda$core$Class*) &panda$collections$Array$class;
                                        $tmp4687->refCount.value = 1;
                                        panda$collections$Array$init($tmp4687);
                                        fieldRefChildren4686 = $tmp4687;
                                        org$pandalanguage$pandac$IRNode* $tmp4689 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                        $tmp4689->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                        $tmp4689->refCount.value = 1;
                                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4689, ((panda$core$Int64) { 1016 }), position4670, p_value->type, p_value);
                                        panda$collections$Array$add$panda$collections$Array$T(fieldRefChildren4686, ((panda$core$Object*) $tmp4689));
                                        org$pandalanguage$pandac$IRNode* $tmp4691 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                        $tmp4691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                        $tmp4691->refCount.value = 1;
                                        org$pandalanguage$pandac$Pair* $tmp4693 = (org$pandalanguage$pandac$Pair*) malloc(32);
                                        $tmp4693->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
                                        $tmp4693->refCount.value = 1;
                                        panda$core$Int64$wrapper* $tmp4695;
                                        $tmp4695 = (panda$core$Int64$wrapper*) malloc(24);
                                        $tmp4695->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                                        $tmp4695->refCount = 1;
                                        $tmp4695->value = i4654;
                                        org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp4693, ((panda$core$Object*) entry4618), ((panda$core$Object*) $tmp4695));
                                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4691, ((panda$core$Int64) { 1047 }), ((org$pandalanguage$pandac$Symbol*) variable4676)->position, variable4676->type, ((panda$core$Object*) $tmp4693), ((panda$collections$ListView*) fieldRefChildren4686));
                                        panda$collections$Array$add$panda$collections$Array$T(declChildren4681, ((panda$core$Object*) $tmp4691));
                                        panda$collections$Array* $tmp4697 = (panda$collections$Array*) malloc(40);
                                        $tmp4697->$class = (panda$core$Class*) &panda$collections$Array$class;
                                        $tmp4697->refCount.value = 1;
                                        panda$collections$Array$init($tmp4697);
                                        varChildren4696 = $tmp4697;
                                        org$pandalanguage$pandac$IRNode* $tmp4699 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                        $tmp4699->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                        $tmp4699->refCount.value = 1;
                                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4699, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) variable4676)->position, ((panda$collections$ListView*) declChildren4681));
                                        panda$collections$Array$add$panda$collections$Array$T(varChildren4696, ((panda$core$Object*) $tmp4699));
                                        org$pandalanguage$pandac$IRNode* $tmp4701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                                        $tmp4701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                                        $tmp4701->refCount.value = 1;
                                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4701, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) variable4676)->position, ((panda$collections$ListView*) varChildren4696));
                                        panda$collections$Array$add$panda$collections$Array$T(statements4650, ((panda$core$Object*) $tmp4701));
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Object* $tmp4703 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(args4601, i4654);
                                        org$pandalanguage$pandac$Position $tmp4705 = (($fn4704) ((org$pandalanguage$pandac$ASTNode*) $tmp4703)->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp4703));
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4705, &$s4706);
                                        return NULL;
                                    }
                                    }
                                }
                            }
                            $l4662:;
                            int64_t $tmp4708 = $tmp4657 - i4654.value;
                            if ($tmp4658) goto $l4709; else goto $l4710;
                            $l4709:;
                            if ((uint64_t) $tmp4708 >= 1) goto $l4707; else goto $l4661;
                            $l4710:;
                            if ((uint64_t) $tmp4708 > 1) goto $l4707; else goto $l4661;
                            $l4707:;
                            i4654.value += 1;
                            goto $l4659;
                            $l4661:;
                            {
                                ITable* $tmp4714 = ((panda$collections$Iterable*) p_rawStatements)->$class->itable;
                                while ($tmp4714->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp4714 = $tmp4714->next;
                                }
                                $fn4716 $tmp4715 = $tmp4714->methods[0];
                                panda$collections$Iterator* $tmp4717 = $tmp4715(((panda$collections$Iterable*) p_rawStatements));
                                rawStatement$Iter4713 = $tmp4717;
                                $l4718:;
                                ITable* $tmp4720 = rawStatement$Iter4713->$class->itable;
                                while ($tmp4720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp4720 = $tmp4720->next;
                                }
                                $fn4722 $tmp4721 = $tmp4720->methods[0];
                                panda$core$Bit $tmp4723 = $tmp4721(rawStatement$Iter4713);
                                panda$core$Bit $tmp4724 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4723);
                                if (!$tmp4724.value) goto $l4719;
                                {
                                    ITable* $tmp4726 = rawStatement$Iter4713->$class->itable;
                                    while ($tmp4726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp4726 = $tmp4726->next;
                                    }
                                    $fn4728 $tmp4727 = $tmp4726->methods[1];
                                    panda$core$Object* $tmp4729 = $tmp4727(rawStatement$Iter4713);
                                    rawStatement4725 = ((org$pandalanguage$pandac$ASTNode*) $tmp4729);
                                    org$pandalanguage$pandac$IRNode* $tmp4731 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawStatement4725);
                                    statement4730 = $tmp4731;
                                    if (((panda$core$Bit) { statement4730 == NULL }).value) {
                                    {
                                        return NULL;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(statements4650, ((panda$core$Object*) statement4730));
                                }
                                goto $l4718;
                                $l4719:;
                            }
                            panda$core$Object* $tmp4732 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
                            self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4732);
                            panda$collections$Array* $tmp4734 = (panda$collections$Array*) malloc(40);
                            $tmp4734->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp4734->refCount.value = 1;
                            panda$collections$Array$init($tmp4734);
                            children4733 = $tmp4734;
                            panda$collections$Array$add$panda$collections$Array$T(children4733, ((panda$core$Object*) check4615));
                            org$pandalanguage$pandac$IRNode* $tmp4736 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp4736->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp4736->refCount.value = 1;
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4736, ((panda$core$Int64) { 1000 }), p_position, ((panda$collections$ListView*) statements4650));
                            panda$collections$Array$add$panda$collections$Array$T(children4733, ((panda$core$Object*) $tmp4736));
                            org$pandalanguage$pandac$IRNode* $tmp4738 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp4738->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp4738->refCount.value = 1;
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4738, ((panda$core$Int64) { 1012 }), p_position, ((panda$collections$ListView*) children4733));
                            return $tmp4738;
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
    panda$core$Object* $tmp4741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_tests, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4742 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4741));
    test4740 = $tmp4742;
    if (((panda$core$Bit) { test4740 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp4744 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_tests);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4743, ((panda$core$Int64) { 1 }), $tmp4744, ((panda$core$Bit) { false }));
    int64_t $tmp4746 = $tmp4743.min.value;
    panda$core$Int64 i4745 = { $tmp4746 };
    int64_t $tmp4748 = $tmp4743.max.value;
    bool $tmp4749 = $tmp4743.inclusive.value;
    if ($tmp4749) goto $l4756; else goto $l4757;
    $l4756:;
    if ($tmp4746 <= $tmp4748) goto $l4750; else goto $l4752;
    $l4757:;
    if ($tmp4746 < $tmp4748) goto $l4750; else goto $l4752;
    $l4750:;
    {
        panda$core$Object* $tmp4759 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_tests, i4745);
        org$pandalanguage$pandac$IRNode* $tmp4760 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4759));
        nextTest4758 = $tmp4760;
        if (((panda$core$Bit) { nextTest4758 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4762 = (panda$collections$Array*) malloc(40);
        $tmp4762->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4762->refCount.value = 1;
        panda$collections$Array$init($tmp4762);
        callChildren4761 = $tmp4762;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4761, ((panda$core$Object*) nextTest4758));
        org$pandalanguage$pandac$IRNode* $tmp4765 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4740, &$s4764, ((panda$collections$ListView*) callChildren4761));
        test4740 = $tmp4765;
        if (((panda$core$Bit) { test4740 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4753:;
    int64_t $tmp4767 = $tmp4748 - i4745.value;
    if ($tmp4749) goto $l4768; else goto $l4769;
    $l4768:;
    if ((uint64_t) $tmp4767 >= 1) goto $l4766; else goto $l4752;
    $l4769:;
    if ((uint64_t) $tmp4767 > 1) goto $l4766; else goto $l4752;
    $l4766:;
    i4745.value += 1;
    goto $l4750;
    $l4752:;
    org$pandalanguage$pandac$SymbolTable* $tmp4772 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4772->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4772->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4772, self->symbolTable);
    self->symbolTable = $tmp4772;
    panda$collections$Array* $tmp4775 = (panda$collections$Array*) malloc(40);
    $tmp4775->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4775->refCount.value = 1;
    panda$collections$Array$init($tmp4775);
    statements4774 = $tmp4775;
    {
        ITable* $tmp4778 = ((panda$collections$Iterable*) p_rawStatements)->$class->itable;
        while ($tmp4778->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4778 = $tmp4778->next;
        }
        $fn4780 $tmp4779 = $tmp4778->methods[0];
        panda$collections$Iterator* $tmp4781 = $tmp4779(((panda$collections$Iterable*) p_rawStatements));
        rawStatement$Iter4777 = $tmp4781;
        $l4782:;
        ITable* $tmp4784 = rawStatement$Iter4777->$class->itable;
        while ($tmp4784->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4784 = $tmp4784->next;
        }
        $fn4786 $tmp4785 = $tmp4784->methods[0];
        panda$core$Bit $tmp4787 = $tmp4785(rawStatement$Iter4777);
        panda$core$Bit $tmp4788 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4787);
        if (!$tmp4788.value) goto $l4783;
        {
            ITable* $tmp4790 = rawStatement$Iter4777->$class->itable;
            while ($tmp4790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4790 = $tmp4790->next;
            }
            $fn4792 $tmp4791 = $tmp4790->methods[1];
            panda$core$Object* $tmp4793 = $tmp4791(rawStatement$Iter4777);
            rawStatement4789 = ((org$pandalanguage$pandac$ASTNode*) $tmp4793);
            org$pandalanguage$pandac$IRNode* $tmp4795 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawStatement4789);
            statement4794 = $tmp4795;
            if (((panda$core$Bit) { statement4794 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4774, ((panda$core$Object*) statement4794));
        }
        goto $l4782;
        $l4783:;
    }
    panda$core$Object* $tmp4796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4796);
    panda$collections$Array* $tmp4798 = (panda$collections$Array*) malloc(40);
    $tmp4798->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4798->refCount.value = 1;
    panda$collections$Array$init($tmp4798);
    children4797 = $tmp4798;
    panda$collections$Array$add$panda$collections$Array$T(children4797, ((panda$core$Object*) test4740));
    org$pandalanguage$pandac$IRNode* $tmp4800 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4800->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4800->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4800, ((panda$core$Int64) { 1000 }), p_position, ((panda$collections$ListView*) statements4774));
    panda$collections$Array$add$panda$collections$Array$T(children4797, ((panda$core$Object*) $tmp4800));
    org$pandalanguage$pandac$IRNode* $tmp4802 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4802->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4802->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4802, ((panda$core$Int64) { 1012 }), p_position, ((panda$collections$ListView*) children4797));
    return $tmp4802;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_value, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other) {
    panda$collections$Array* children4804;
    org$pandalanguage$pandac$Variable* valueVar4807;
    org$pandalanguage$pandac$Variable$Kind $tmp4810;
    panda$collections$Array* declChildren4820;
    panda$collections$Array* varChildren4825;
    panda$collections$Iterator* rawWhen$Iter4832;
    org$pandalanguage$pandac$ASTNode* rawWhen4844;
    org$pandalanguage$pandac$ASTNode* $match$3586_134849;
    org$pandalanguage$pandac$Position whenPosition4851;
    panda$collections$ImmutableArray* tests4853;
    panda$collections$ImmutableArray* statements4855;
    org$pandalanguage$pandac$IRNode* w4857;
    panda$collections$Array* statements4859;
    panda$collections$Iterator* raw$Iter4862;
    org$pandalanguage$pandac$ASTNode* raw4874;
    org$pandalanguage$pandac$IRNode* stmt4879;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4883;
    panda$collections$Array* newChildren4911;
    panda$collections$Array* $tmp4805 = (panda$collections$Array*) malloc(40);
    $tmp4805->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4805->refCount.value = 1;
    panda$collections$Array$init($tmp4805);
    children4804 = $tmp4805;
    org$pandalanguage$pandac$Variable* $tmp4808 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4808->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4808->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4810, ((panda$core$Int64) { 1 }));
    panda$core$Int64$wrapper* $tmp4812;
    $tmp4812 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp4812->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp4812->refCount = 1;
    $tmp4812->value = p_position.line;
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4811, ((panda$core$Object*) $tmp4812));
    panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, &$s4814);
    panda$core$Int64$wrapper* $tmp4816;
    $tmp4816 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp4816->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp4816->refCount = 1;
    $tmp4816->value = p_position.column;
    panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4815, ((panda$core$Object*) $tmp4816));
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, &$s4818);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4808, p_position, $tmp4810, $tmp4819, p_value->type);
    valueVar4807 = $tmp4808;
    panda$collections$Array* $tmp4821 = (panda$collections$Array*) malloc(40);
    $tmp4821->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4821->refCount.value = 1;
    panda$collections$Array$init($tmp4821);
    declChildren4820 = $tmp4821;
    org$pandalanguage$pandac$IRNode* $tmp4823 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4823->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4823->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4823, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4807->type, valueVar4807);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4820, ((panda$core$Object*) $tmp4823));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4820, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4826 = (panda$collections$Array*) malloc(40);
    $tmp4826->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4826->refCount.value = 1;
    panda$collections$Array$init($tmp4826);
    varChildren4825 = $tmp4826;
    org$pandalanguage$pandac$IRNode* $tmp4828 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4828->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4828->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4828, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4807)->position, ((panda$collections$ListView*) declChildren4820));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4825, ((panda$core$Object*) $tmp4828));
    org$pandalanguage$pandac$IRNode* $tmp4830 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4830->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4830->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4830, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4807)->position, ((panda$collections$ListView*) varChildren4825));
    panda$collections$Array$add$panda$collections$Array$T(children4804, ((panda$core$Object*) $tmp4830));
    {
        ITable* $tmp4833 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp4833->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4833 = $tmp4833->next;
        }
        $fn4835 $tmp4834 = $tmp4833->methods[0];
        panda$collections$Iterator* $tmp4836 = $tmp4834(((panda$collections$Iterable*) p_whens));
        rawWhen$Iter4832 = $tmp4836;
        $l4837:;
        ITable* $tmp4839 = rawWhen$Iter4832->$class->itable;
        while ($tmp4839->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4839 = $tmp4839->next;
        }
        $fn4841 $tmp4840 = $tmp4839->methods[0];
        panda$core$Bit $tmp4842 = $tmp4840(rawWhen$Iter4832);
        panda$core$Bit $tmp4843 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4842);
        if (!$tmp4843.value) goto $l4838;
        {
            ITable* $tmp4845 = rawWhen$Iter4832->$class->itable;
            while ($tmp4845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4845 = $tmp4845->next;
            }
            $fn4847 $tmp4846 = $tmp4845->methods[1];
            panda$core$Object* $tmp4848 = $tmp4846(rawWhen$Iter4832);
            rawWhen4844 = ((org$pandalanguage$pandac$ASTNode*) $tmp4848);
            {
                $match$3586_134849 = rawWhen4844;
                panda$core$Bit $tmp4850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3586_134849->$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp4850.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp4852 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3586_134849->$data + 0));
                    whenPosition4851 = *$tmp4852;
                    panda$collections$ImmutableArray** $tmp4854 = ((panda$collections$ImmutableArray**) ((char*) $match$3586_134849->$data + 16));
                    tests4853 = *$tmp4854;
                    panda$collections$ImmutableArray** $tmp4856 = ((panda$collections$ImmutableArray**) ((char*) $match$3586_134849->$data + 24));
                    statements4855 = *$tmp4856;
                    org$pandalanguage$pandac$IRNode* $tmp4858 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4807, whenPosition4851, tests4853, statements4855);
                    w4857 = $tmp4858;
                    if (((panda$core$Bit) { w4857 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children4804, ((panda$core$Object*) w4857));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l4837;
        $l4838:;
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        panda$collections$Array* $tmp4860 = (panda$collections$Array*) malloc(40);
        $tmp4860->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4860->refCount.value = 1;
        panda$collections$Array$init($tmp4860);
        statements4859 = $tmp4860;
        {
            ITable* $tmp4863 = ((panda$collections$Iterable*) p_other)->$class->itable;
            while ($tmp4863->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4863 = $tmp4863->next;
            }
            $fn4865 $tmp4864 = $tmp4863->methods[0];
            panda$collections$Iterator* $tmp4866 = $tmp4864(((panda$collections$Iterable*) p_other));
            raw$Iter4862 = $tmp4866;
            $l4867:;
            ITable* $tmp4869 = raw$Iter4862->$class->itable;
            while ($tmp4869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4869 = $tmp4869->next;
            }
            $fn4871 $tmp4870 = $tmp4869->methods[0];
            panda$core$Bit $tmp4872 = $tmp4870(raw$Iter4862);
            panda$core$Bit $tmp4873 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4872);
            if (!$tmp4873.value) goto $l4868;
            {
                ITable* $tmp4875 = raw$Iter4862->$class->itable;
                while ($tmp4875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4875 = $tmp4875->next;
                }
                $fn4877 $tmp4876 = $tmp4875->methods[1];
                panda$core$Object* $tmp4878 = $tmp4876(raw$Iter4862);
                raw4874 = ((org$pandalanguage$pandac$ASTNode*) $tmp4878);
                org$pandalanguage$pandac$IRNode* $tmp4880 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, raw4874);
                stmt4879 = $tmp4880;
                if (((panda$core$Bit) { stmt4879 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements4859, ((panda$core$Object*) stmt4879));
            }
            goto $l4867;
            $l4868:;
        }
        org$pandalanguage$pandac$IRNode* $tmp4881 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4881->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4881, ((panda$core$Int64) { 1000 }), p_position, ((panda$collections$ListView*) statements4859));
        panda$collections$Array$add$panda$collections$Array$T(children4804, ((panda$core$Object*) $tmp4881));
    }
    }
    panda$core$Int64 $tmp4884 = panda$collections$Array$get_count$R$panda$core$Int64(children4804);
    panda$core$Int64 $tmp4885 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4884, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4883, $tmp4885, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4887 = $tmp4883.start.value;
    panda$core$Int64 i4886 = { $tmp4887 };
    int64_t $tmp4889 = $tmp4883.end.value;
    int64_t $tmp4890 = $tmp4883.step.value;
    bool $tmp4891 = $tmp4883.inclusive.value;
    bool $tmp4898 = $tmp4890 > 0;
    if ($tmp4898) goto $l4896; else goto $l4897;
    $l4896:;
    if ($tmp4891) goto $l4899; else goto $l4900;
    $l4899:;
    if ($tmp4887 <= $tmp4889) goto $l4892; else goto $l4894;
    $l4900:;
    if ($tmp4887 < $tmp4889) goto $l4892; else goto $l4894;
    $l4897:;
    if ($tmp4891) goto $l4901; else goto $l4902;
    $l4901:;
    if ($tmp4887 >= $tmp4889) goto $l4892; else goto $l4894;
    $l4902:;
    if ($tmp4887 > $tmp4889) goto $l4892; else goto $l4894;
    $l4892:;
    {
        panda$core$Int64 $tmp4904 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4886, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4804, $tmp4904);
        panda$core$Bit $tmp4906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4905)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4906.value);
        panda$core$Int64 $tmp4907 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4886, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4908 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4804, $tmp4907);
        panda$core$Int64 $tmp4909 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4908)->children);
        panda$core$Bit $tmp4910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4909, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4910.value);
        panda$collections$Array* $tmp4912 = (panda$collections$Array*) malloc(40);
        $tmp4912->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4912->refCount.value = 1;
        panda$core$Int64 $tmp4914 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4886, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4915 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4804, $tmp4914);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4912, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4915)->children));
        newChildren4911 = $tmp4912;
        panda$core$Object* $tmp4916 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4804, i4886);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4911, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4916)));
        panda$core$Int64 $tmp4917 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4886, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4918 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4918->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4918->refCount.value = 1;
        panda$core$Int64 $tmp4920 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4886, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4921 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4804, $tmp4920);
        panda$core$Int64 $tmp4922 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4886, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4923 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4804, $tmp4922);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4918, ((org$pandalanguage$pandac$IRNode*) $tmp4921)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4923)->position, ((panda$collections$ListView*) newChildren4911));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4804, $tmp4917, ((panda$core$Object*) $tmp4918));
        panda$core$Int64 $tmp4924 = panda$collections$Array$get_count$R$panda$core$Int64(children4804);
        panda$core$Int64 $tmp4925 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4924, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4804, $tmp4925);
    }
    $l4895:;
    if ($tmp4898) goto $l4927; else goto $l4928;
    $l4927:;
    int64_t $tmp4929 = $tmp4889 - i4886.value;
    if ($tmp4891) goto $l4930; else goto $l4931;
    $l4930:;
    if ((uint64_t) $tmp4929 >= $tmp4890) goto $l4926; else goto $l4894;
    $l4931:;
    if ((uint64_t) $tmp4929 > $tmp4890) goto $l4926; else goto $l4894;
    $l4928:;
    int64_t $tmp4933 = i4886.value - $tmp4889;
    if ($tmp4891) goto $l4934; else goto $l4935;
    $l4934:;
    if ((uint64_t) $tmp4933 >= -$tmp4890) goto $l4926; else goto $l4894;
    $l4935:;
    if ((uint64_t) $tmp4933 > -$tmp4890) goto $l4926; else goto $l4894;
    $l4926:;
    i4886.value += $tmp4890;
    goto $l4892;
    $l4894:;
    org$pandalanguage$pandac$IRNode* $tmp4937 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4937->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4937->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4937, ((panda$core$Int64) { 1000 }), p_position, ((panda$collections$ListView*) children4804));
    return $tmp4937;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Position p_position, panda$collections$ImmutableArray* p_tests, panda$collections$ImmutableArray* p_rawStatements) {
    panda$collections$Array* children4939;
    panda$collections$Iterator* expr$Iter4942;
    org$pandalanguage$pandac$ASTNode* expr4954;
    org$pandalanguage$pandac$IRNode* compiled4959;
    panda$collections$Array* statements4964;
    panda$collections$Iterator* rawStatement$Iter4967;
    org$pandalanguage$pandac$ASTNode* rawStatement4979;
    org$pandalanguage$pandac$IRNode* statement4984;
    panda$collections$Array* $tmp4940 = (panda$collections$Array*) malloc(40);
    $tmp4940->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4940->refCount.value = 1;
    panda$collections$Array$init($tmp4940);
    children4939 = $tmp4940;
    {
        ITable* $tmp4943 = ((panda$collections$Iterable*) p_tests)->$class->itable;
        while ($tmp4943->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4943 = $tmp4943->next;
        }
        $fn4945 $tmp4944 = $tmp4943->methods[0];
        panda$collections$Iterator* $tmp4946 = $tmp4944(((panda$collections$Iterable*) p_tests));
        expr$Iter4942 = $tmp4946;
        $l4947:;
        ITable* $tmp4949 = expr$Iter4942->$class->itable;
        while ($tmp4949->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4949 = $tmp4949->next;
        }
        $fn4951 $tmp4950 = $tmp4949->methods[0];
        panda$core$Bit $tmp4952 = $tmp4950(expr$Iter4942);
        panda$core$Bit $tmp4953 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4952);
        if (!$tmp4953.value) goto $l4948;
        {
            ITable* $tmp4955 = expr$Iter4942->$class->itable;
            while ($tmp4955->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4955 = $tmp4955->next;
            }
            $fn4957 $tmp4956 = $tmp4955->methods[1];
            panda$core$Object* $tmp4958 = $tmp4956(expr$Iter4942);
            expr4954 = ((org$pandalanguage$pandac$ASTNode*) $tmp4958);
            org$pandalanguage$pandac$IRNode* $tmp4960 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4954);
            org$pandalanguage$pandac$IRNode* $tmp4961 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4960, p_type);
            compiled4959 = $tmp4961;
            if (((panda$core$Bit) { compiled4959 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4939, ((panda$core$Object*) compiled4959));
        }
        goto $l4947;
        $l4948:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4962 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4962->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4962->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4962, self->symbolTable);
    self->symbolTable = $tmp4962;
    panda$collections$Array* $tmp4965 = (panda$collections$Array*) malloc(40);
    $tmp4965->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4965->refCount.value = 1;
    panda$collections$Array$init($tmp4965);
    statements4964 = $tmp4965;
    {
        ITable* $tmp4968 = ((panda$collections$Iterable*) p_rawStatements)->$class->itable;
        while ($tmp4968->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4968 = $tmp4968->next;
        }
        $fn4970 $tmp4969 = $tmp4968->methods[0];
        panda$collections$Iterator* $tmp4971 = $tmp4969(((panda$collections$Iterable*) p_rawStatements));
        rawStatement$Iter4967 = $tmp4971;
        $l4972:;
        ITable* $tmp4974 = rawStatement$Iter4967->$class->itable;
        while ($tmp4974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4974 = $tmp4974->next;
        }
        $fn4976 $tmp4975 = $tmp4974->methods[0];
        panda$core$Bit $tmp4977 = $tmp4975(rawStatement$Iter4967);
        panda$core$Bit $tmp4978 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4977);
        if (!$tmp4978.value) goto $l4973;
        {
            ITable* $tmp4980 = rawStatement$Iter4967->$class->itable;
            while ($tmp4980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4980 = $tmp4980->next;
            }
            $fn4982 $tmp4981 = $tmp4980->methods[1];
            panda$core$Object* $tmp4983 = $tmp4981(rawStatement$Iter4967);
            rawStatement4979 = ((org$pandalanguage$pandac$ASTNode*) $tmp4983);
            org$pandalanguage$pandac$IRNode* $tmp4985 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawStatement4979);
            statement4984 = $tmp4985;
            if (((panda$core$Bit) { statement4984 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4964, ((panda$core$Object*) statement4984));
        }
        goto $l4972;
        $l4973:;
    }
    panda$core$Object* $tmp4986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4986);
    org$pandalanguage$pandac$IRNode* $tmp4987 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4987->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4987->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4987, ((panda$core$Int64) { 1000 }), p_position, ((panda$collections$ListView*) statements4964));
    panda$collections$Array$add$panda$collections$Array$T(children4939, ((panda$core$Object*) $tmp4987));
    org$pandalanguage$pandac$IRNode* $tmp4989 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4989->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4989->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4989, ((panda$core$Int64) { 1042 }), p_position, ((panda$collections$ListView*) children4939));
    return $tmp4989;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$ImmutableArray* p_rawStatements) {
    panda$collections$Array* children4991;
    panda$collections$Array* statements4996;
    panda$collections$Iterator* rawStatement$Iter4999;
    org$pandalanguage$pandac$ASTNode* rawStatement5011;
    org$pandalanguage$pandac$IRNode* statement5016;
    org$pandalanguage$pandac$Position $tmp5021;
    org$pandalanguage$pandac$Position $tmp5024;
    panda$collections$Array* $tmp4992 = (panda$collections$Array*) malloc(40);
    $tmp4992->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4992->refCount.value = 1;
    panda$collections$Array$init($tmp4992);
    children4991 = $tmp4992;
    org$pandalanguage$pandac$SymbolTable* $tmp4994 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4994->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4994->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4994, self->symbolTable);
    self->symbolTable = $tmp4994;
    panda$collections$Array* $tmp4997 = (panda$collections$Array*) malloc(40);
    $tmp4997->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4997->refCount.value = 1;
    panda$collections$Array$init($tmp4997);
    statements4996 = $tmp4997;
    {
        ITable* $tmp5000 = ((panda$collections$Iterable*) p_rawStatements)->$class->itable;
        while ($tmp5000->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5000 = $tmp5000->next;
        }
        $fn5002 $tmp5001 = $tmp5000->methods[0];
        panda$collections$Iterator* $tmp5003 = $tmp5001(((panda$collections$Iterable*) p_rawStatements));
        rawStatement$Iter4999 = $tmp5003;
        $l5004:;
        ITable* $tmp5006 = rawStatement$Iter4999->$class->itable;
        while ($tmp5006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5006 = $tmp5006->next;
        }
        $fn5008 $tmp5007 = $tmp5006->methods[0];
        panda$core$Bit $tmp5009 = $tmp5007(rawStatement$Iter4999);
        panda$core$Bit $tmp5010 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5009);
        if (!$tmp5010.value) goto $l5005;
        {
            ITable* $tmp5012 = rawStatement$Iter4999->$class->itable;
            while ($tmp5012->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5012 = $tmp5012->next;
            }
            $fn5014 $tmp5013 = $tmp5012->methods[1];
            panda$core$Object* $tmp5015 = $tmp5013(rawStatement$Iter4999);
            rawStatement5011 = ((org$pandalanguage$pandac$ASTNode*) $tmp5015);
            org$pandalanguage$pandac$IRNode* $tmp5017 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawStatement5011);
            statement5016 = $tmp5017;
            if (((panda$core$Bit) { statement5016 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4996, ((panda$core$Object*) statement5016));
        }
        goto $l5004;
        $l5005:;
    }
    panda$core$Object* $tmp5018 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp5018);
    org$pandalanguage$pandac$IRNode* $tmp5019 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5019->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5019->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp5021);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5019, ((panda$core$Int64) { 1000 }), $tmp5021, ((panda$collections$ListView*) statements4996));
    panda$collections$Array$add$panda$collections$Array$T(children4991, ((panda$core$Object*) $tmp5019));
    org$pandalanguage$pandac$IRNode* $tmp5022 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5022->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5022->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp5024);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5022, ((panda$core$Int64) { 1043 }), $tmp5024, ((panda$collections$ListView*) children4991));
    return $tmp5022;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f5032;
    org$pandalanguage$pandac$Variable* v5041;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp5026 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp5025 = $tmp5026.value;
            if (!$tmp5025) goto $l5027;
            panda$core$Object* $tmp5028 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp5029 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp5028)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp5030 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5029));
            $tmp5025 = $tmp5030.value;
            $l5027:;
            panda$core$Bit $tmp5031 = { $tmp5025 };
            return $tmp5031;
        }
        break;
        case 1026:
        {
            f5032 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f5032->resolved.value);
            panda$core$Bit $tmp5035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f5032->fieldKind.$rawValue, ((panda$core$Int64) { 2 }));
            bool $tmp5034 = $tmp5035.value;
            if (!$tmp5034) goto $l5036;
            $tmp5034 = ((panda$core$Bit) { f5032->value != NULL }).value;
            $l5036:;
            panda$core$Bit $tmp5037 = { $tmp5034 };
            bool $tmp5033 = $tmp5037.value;
            if (!$tmp5033) goto $l5038;
            panda$core$Bit $tmp5039 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f5032->value);
            $tmp5033 = $tmp5039.value;
            $l5038:;
            panda$core$Bit $tmp5040 = { $tmp5033 };
            return $tmp5040;
        }
        break;
        case 1016:
        {
            v5041 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp5043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v5041->varKind.$rawValue, ((panda$core$Int64) { 1 }));
            bool $tmp5042 = $tmp5043.value;
            if ($tmp5042) goto $l5044;
            panda$core$Bit $tmp5047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v5041->varKind.$rawValue, ((panda$core$Int64) { 2 }));
            bool $tmp5046 = $tmp5047.value;
            if (!$tmp5046) goto $l5048;
            $tmp5046 = ((panda$core$Bit) { v5041->initialValue != NULL }).value;
            $l5048:;
            panda$core$Bit $tmp5049 = { $tmp5046 };
            bool $tmp5045 = $tmp5049.value;
            if (!$tmp5045) goto $l5050;
            panda$core$Bit $tmp5051 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v5041->initialValue);
            $tmp5045 = $tmp5051.value;
            $l5050:;
            panda$core$Bit $tmp5052 = { $tmp5045 };
            $tmp5042 = $tmp5052.value;
            $l5044:;
            panda$core$Bit $tmp5053 = { $tmp5042 };
            return $tmp5053;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f5058;
    org$pandalanguage$pandac$Variable* v5060;
    panda$core$Bit $tmp5054 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp5054.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp5055 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp5056 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp5055)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp5057 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp5056));
            return $tmp5057;
        }
        break;
        case 1026:
        {
            f5058 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp5059 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f5058->value);
            return $tmp5059;
        }
        break;
        case 1016:
        {
            v5060 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp5061 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v5060->initialValue);
            return $tmp5061;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawValue, panda$collections$ImmutableArray* p_whens, panda$collections$ImmutableArray* p_other) {
    org$pandalanguage$pandac$IRNode* value5062;
    panda$collections$Array* children5068;
    panda$collections$Iterator* rawWhen$Iter5071;
    org$pandalanguage$pandac$ASTNode* rawWhen5083;
    org$pandalanguage$pandac$ASTNode* $match$3709_135088;
    org$pandalanguage$pandac$Position position5090;
    panda$collections$ImmutableArray* tests5092;
    panda$collections$ImmutableArray* statements5094;
    org$pandalanguage$pandac$IRNode* w5096;
    org$pandalanguage$pandac$IRNode* o5102;
    org$pandalanguage$pandac$IRNode* $tmp5063 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawValue);
    org$pandalanguage$pandac$IRNode* $tmp5064 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5063);
    value5062 = $tmp5064;
    if (((panda$core$Bit) { value5062 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp5065 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value5062->type);
    panda$core$Bit $tmp5066 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5065);
    if ($tmp5066.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5067 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, value5062, p_whens, p_other);
        return $tmp5067;
    }
    }
    panda$collections$Array* $tmp5069 = (panda$collections$Array*) malloc(40);
    $tmp5069->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5069->refCount.value = 1;
    panda$collections$Array$init($tmp5069);
    children5068 = $tmp5069;
    panda$collections$Array$add$panda$collections$Array$T(children5068, ((panda$core$Object*) value5062));
    {
        ITable* $tmp5072 = ((panda$collections$Iterable*) p_whens)->$class->itable;
        while ($tmp5072->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5072 = $tmp5072->next;
        }
        $fn5074 $tmp5073 = $tmp5072->methods[0];
        panda$collections$Iterator* $tmp5075 = $tmp5073(((panda$collections$Iterable*) p_whens));
        rawWhen$Iter5071 = $tmp5075;
        $l5076:;
        ITable* $tmp5078 = rawWhen$Iter5071->$class->itable;
        while ($tmp5078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5078 = $tmp5078->next;
        }
        $fn5080 $tmp5079 = $tmp5078->methods[0];
        panda$core$Bit $tmp5081 = $tmp5079(rawWhen$Iter5071);
        panda$core$Bit $tmp5082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5081);
        if (!$tmp5082.value) goto $l5077;
        {
            ITable* $tmp5084 = rawWhen$Iter5071->$class->itable;
            while ($tmp5084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5084 = $tmp5084->next;
            }
            $fn5086 $tmp5085 = $tmp5084->methods[1];
            panda$core$Object* $tmp5087 = $tmp5085(rawWhen$Iter5071);
            rawWhen5083 = ((org$pandalanguage$pandac$ASTNode*) $tmp5087);
            {
                $match$3709_135088 = rawWhen5083;
                panda$core$Bit $tmp5089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3709_135088->$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp5089.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp5091 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3709_135088->$data + 0));
                    position5090 = *$tmp5091;
                    panda$collections$ImmutableArray** $tmp5093 = ((panda$collections$ImmutableArray**) ((char*) $match$3709_135088->$data + 16));
                    tests5092 = *$tmp5093;
                    panda$collections$ImmutableArray** $tmp5095 = ((panda$collections$ImmutableArray**) ((char*) $match$3709_135088->$data + 24));
                    statements5094 = *$tmp5095;
                    org$pandalanguage$pandac$IRNode* $tmp5097 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, value5062->type, position5090, tests5092, statements5094);
                    w5096 = $tmp5097;
                    if (((panda$core$Bit) { w5096 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$core$Object* $tmp5098 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w5096->children, ((panda$core$Int64) { 0 }));
                    panda$core$Bit $tmp5099 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5098));
                    panda$core$Bit $tmp5100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5099);
                    if ($tmp5100.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp5101 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5090, value5062, p_whens, p_other);
                        return $tmp5101;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children5068, ((panda$core$Object*) w5096));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l5076;
        $l5077:;
    }
    if (((panda$core$Bit) { p_other != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5103 = org$pandalanguage$pandac$Compiler$compileOtherwise$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_other);
        o5102 = $tmp5103;
        if (((panda$core$Bit) { o5102 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children5068, ((panda$core$Object*) o5102));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp5104 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5104->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5104->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5104, ((panda$core$Int64) { 1042 }), p_position, ((panda$collections$ListView*) children5068));
    return $tmp5104;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ASTNode* $match$3734_95106;
    org$pandalanguage$pandac$Position position5108;
    org$pandalanguage$pandac$ASTNode* test5110;
    org$pandalanguage$pandac$ASTNode* msg5112;
    org$pandalanguage$pandac$Position position5116;
    org$pandalanguage$pandac$ASTNode* left5118;
    org$pandalanguage$pandac$parser$Token$Kind op5120;
    org$pandalanguage$pandac$ASTNode* right5122;
    org$pandalanguage$pandac$Position position5127;
    panda$collections$ImmutableArray* statements5129;
    org$pandalanguage$pandac$Position position5133;
    org$pandalanguage$pandac$ASTNode* test5135;
    panda$collections$ImmutableArray* ifTrue5137;
    org$pandalanguage$pandac$ASTNode* ifFalse5139;
    org$pandalanguage$pandac$Position position5143;
    panda$core$String* label5145;
    org$pandalanguage$pandac$ASTNode* target5147;
    org$pandalanguage$pandac$ASTNode* list5149;
    panda$collections$ImmutableArray* statements5151;
    org$pandalanguage$pandac$Position position5155;
    panda$core$String* label5157;
    org$pandalanguage$pandac$ASTNode* test5159;
    panda$collections$ImmutableArray* statements5161;
    org$pandalanguage$pandac$Position position5165;
    panda$core$String* label5167;
    panda$collections$ImmutableArray* statements5169;
    org$pandalanguage$pandac$ASTNode* test5171;
    org$pandalanguage$pandac$Position position5175;
    panda$core$String* label5177;
    panda$collections$ImmutableArray* statements5179;
    org$pandalanguage$pandac$Position position5183;
    org$pandalanguage$pandac$ASTNode* value5185;
    panda$collections$ImmutableArray* whens5187;
    panda$collections$ImmutableArray* other5189;
    org$pandalanguage$pandac$Position position5193;
    panda$core$String* label5195;
    org$pandalanguage$pandac$Position position5199;
    panda$core$String* label5201;
    org$pandalanguage$pandac$Position position5205;
    org$pandalanguage$pandac$ASTNode* value5207;
    org$pandalanguage$pandac$Position position5211;
    org$pandalanguage$pandac$ASTNode* target5213;
    panda$collections$ImmutableArray* args5215;
    org$pandalanguage$pandac$IRNode* result5217;
    org$pandalanguage$pandac$Position position5222;
    org$pandalanguage$pandac$Variable$Kind kind5224;
    panda$collections$ImmutableArray* declarations5226;
    {
        $match$3734_95106 = p_s;
        panda$core$Bit $tmp5107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp5107.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5108 = *$tmp5109;
            org$pandalanguage$pandac$ASTNode** $tmp5111 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 16));
            test5110 = *$tmp5111;
            org$pandalanguage$pandac$ASTNode** $tmp5113 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 24));
            msg5112 = *$tmp5113;
            org$pandalanguage$pandac$IRNode* $tmp5114 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5108, test5110, msg5112);
            return $tmp5114;
        }
        }
        else {
        panda$core$Bit $tmp5115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp5115.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5117 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5116 = *$tmp5117;
            org$pandalanguage$pandac$ASTNode** $tmp5119 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 16));
            left5118 = *$tmp5119;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp5121 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$3734_95106->$data + 24));
            op5120 = *$tmp5121;
            org$pandalanguage$pandac$ASTNode** $tmp5123 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 32));
            right5122 = *$tmp5123;
            org$pandalanguage$pandac$IRNode* $tmp5124 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, position5116, left5118, op5120, right5122);
            org$pandalanguage$pandac$IRNode* $tmp5125 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5124);
            return $tmp5125;
        }
        }
        else {
        panda$core$Bit $tmp5126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp5126.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5128 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5127 = *$tmp5128;
            panda$collections$ImmutableArray** $tmp5130 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 16));
            statements5129 = *$tmp5130;
            org$pandalanguage$pandac$IRNode* $tmp5131 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5127, ((panda$collections$ListView*) statements5129));
            return $tmp5131;
        }
        }
        else {
        panda$core$Bit $tmp5132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp5132.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5134 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5133 = *$tmp5134;
            org$pandalanguage$pandac$ASTNode** $tmp5136 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 16));
            test5135 = *$tmp5136;
            panda$collections$ImmutableArray** $tmp5138 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 24));
            ifTrue5137 = *$tmp5138;
            org$pandalanguage$pandac$ASTNode** $tmp5140 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 32));
            ifFalse5139 = *$tmp5140;
            org$pandalanguage$pandac$IRNode* $tmp5141 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5133, test5135, ((panda$collections$ListView*) ifTrue5137), ifFalse5139);
            return $tmp5141;
        }
        }
        else {
        panda$core$Bit $tmp5142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp5142.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5144 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5143 = *$tmp5144;
            panda$core$String** $tmp5146 = ((panda$core$String**) ((char*) $match$3734_95106->$data + 16));
            label5145 = *$tmp5146;
            org$pandalanguage$pandac$ASTNode** $tmp5148 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 24));
            target5147 = *$tmp5148;
            org$pandalanguage$pandac$ASTNode** $tmp5150 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 32));
            list5149 = *$tmp5150;
            panda$collections$ImmutableArray** $tmp5152 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 40));
            statements5151 = *$tmp5152;
            org$pandalanguage$pandac$IRNode* $tmp5153 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5143, label5145, target5147, list5149, ((panda$collections$ListView*) statements5151));
            return $tmp5153;
        }
        }
        else {
        panda$core$Bit $tmp5154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp5154.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5155 = *$tmp5156;
            panda$core$String** $tmp5158 = ((panda$core$String**) ((char*) $match$3734_95106->$data + 16));
            label5157 = *$tmp5158;
            org$pandalanguage$pandac$ASTNode** $tmp5160 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 24));
            test5159 = *$tmp5160;
            panda$collections$ImmutableArray** $tmp5162 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 32));
            statements5161 = *$tmp5162;
            org$pandalanguage$pandac$IRNode* $tmp5163 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5155, label5157, test5159, ((panda$collections$ListView*) statements5161));
            return $tmp5163;
        }
        }
        else {
        panda$core$Bit $tmp5164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp5164.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5165 = *$tmp5166;
            panda$core$String** $tmp5168 = ((panda$core$String**) ((char*) $match$3734_95106->$data + 16));
            label5167 = *$tmp5168;
            panda$collections$ImmutableArray** $tmp5170 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 24));
            statements5169 = *$tmp5170;
            org$pandalanguage$pandac$ASTNode** $tmp5172 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 32));
            test5171 = *$tmp5172;
            org$pandalanguage$pandac$IRNode* $tmp5173 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, position5165, label5167, ((panda$collections$ListView*) statements5169), test5171);
            return $tmp5173;
        }
        }
        else {
        panda$core$Bit $tmp5174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp5174.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5176 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5175 = *$tmp5176;
            panda$core$String** $tmp5178 = ((panda$core$String**) ((char*) $match$3734_95106->$data + 16));
            label5177 = *$tmp5178;
            panda$collections$ImmutableArray** $tmp5180 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 24));
            statements5179 = *$tmp5180;
            org$pandalanguage$pandac$IRNode* $tmp5181 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5175, label5177, ((panda$collections$ListView*) statements5179));
            return $tmp5181;
        }
        }
        else {
        panda$core$Bit $tmp5182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp5182.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5184 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5183 = *$tmp5184;
            org$pandalanguage$pandac$ASTNode** $tmp5186 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 16));
            value5185 = *$tmp5186;
            panda$collections$ImmutableArray** $tmp5188 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 24));
            whens5187 = *$tmp5188;
            panda$collections$ImmutableArray** $tmp5190 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 32));
            other5189 = *$tmp5190;
            org$pandalanguage$pandac$IRNode* $tmp5191 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5183, value5185, whens5187, other5189);
            return $tmp5191;
        }
        }
        else {
        panda$core$Bit $tmp5192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp5192.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5194 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5193 = *$tmp5194;
            panda$core$String** $tmp5196 = ((panda$core$String**) ((char*) $match$3734_95106->$data + 16));
            label5195 = *$tmp5196;
            org$pandalanguage$pandac$IRNode* $tmp5197 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5193, label5195);
            return $tmp5197;
        }
        }
        else {
        panda$core$Bit $tmp5198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp5198.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5200 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5199 = *$tmp5200;
            panda$core$String** $tmp5202 = ((panda$core$String**) ((char*) $match$3734_95106->$data + 16));
            label5201 = *$tmp5202;
            org$pandalanguage$pandac$IRNode* $tmp5203 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5199, label5201);
            return $tmp5203;
        }
        }
        else {
        panda$core$Bit $tmp5204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp5204.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5205 = *$tmp5206;
            org$pandalanguage$pandac$ASTNode** $tmp5208 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 16));
            value5207 = *$tmp5208;
            org$pandalanguage$pandac$IRNode* $tmp5209 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, position5205, value5207);
            return $tmp5209;
        }
        }
        else {
        panda$core$Bit $tmp5210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp5210.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5212 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5211 = *$tmp5212;
            org$pandalanguage$pandac$ASTNode** $tmp5214 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$3734_95106->$data + 16));
            target5213 = *$tmp5214;
            panda$collections$ImmutableArray** $tmp5216 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 24));
            args5215 = *$tmp5216;
            org$pandalanguage$pandac$IRNode* $tmp5218 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5211, target5213, args5215);
            org$pandalanguage$pandac$IRNode* $tmp5219 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5218);
            result5217 = $tmp5219;
            if (((panda$core$Bit) { result5217 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp5220 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result5217);
                result5217 = $tmp5220;
            }
            }
            return result5217;
        }
        }
        else {
        panda$core$Bit $tmp5221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3734_95106->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp5221.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5223 = ((org$pandalanguage$pandac$Position*) ((char*) $match$3734_95106->$data + 0));
            position5222 = *$tmp5223;
            org$pandalanguage$pandac$Variable$Kind* $tmp5225 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$3734_95106->$data + 16));
            kind5224 = *$tmp5225;
            panda$collections$ImmutableArray** $tmp5227 = ((panda$collections$ImmutableArray**) ((char*) $match$3734_95106->$data + 24));
            declarations5226 = *$tmp5227;
            org$pandalanguage$pandac$IRNode* $tmp5228 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, position5222, kind5224, declarations5226);
            return $tmp5228;
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
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old5229;
    org$pandalanguage$pandac$SymbolTable* symbols5231;
    panda$collections$Iterator* p$Iter5234;
    org$pandalanguage$pandac$MethodDecl$Parameter* p5246;
    org$pandalanguage$pandac$Variable$Kind $tmp5253;
    org$pandalanguage$pandac$Variable$Storage $tmp5254;
    panda$collections$Array* fieldInitializers5255;
    panda$collections$Iterator* f$Iter5259;
    org$pandalanguage$pandac$FieldDecl* f5272;
    panda$collections$Array* children5282;
    org$pandalanguage$pandac$IRNode* fieldRef5289;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5294;
    org$pandalanguage$pandac$IRNode* compiled5296;
    panda$collections$Array* children5298;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old5229 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5230 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp5230;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp5232 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5232->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5232->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5232, self->symbolTable);
    symbols5231 = $tmp5232;
    {
        ITable* $tmp5235 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp5235->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5235 = $tmp5235->next;
        }
        $fn5237 $tmp5236 = $tmp5235->methods[0];
        panda$collections$Iterator* $tmp5238 = $tmp5236(((panda$collections$Iterable*) p_m->parameters));
        p$Iter5234 = $tmp5238;
        $l5239:;
        ITable* $tmp5241 = p$Iter5234->$class->itable;
        while ($tmp5241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5241 = $tmp5241->next;
        }
        $fn5243 $tmp5242 = $tmp5241->methods[0];
        panda$core$Bit $tmp5244 = $tmp5242(p$Iter5234);
        panda$core$Bit $tmp5245 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5244);
        if (!$tmp5245.value) goto $l5240;
        {
            ITable* $tmp5247 = p$Iter5234->$class->itable;
            while ($tmp5247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5247 = $tmp5247->next;
            }
            $fn5249 $tmp5248 = $tmp5247->methods[1];
            panda$core$Object* $tmp5250 = $tmp5248(p$Iter5234);
            p5246 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5250);
            org$pandalanguage$pandac$Variable* $tmp5251 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp5251->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp5251->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp5253, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(&$tmp5254, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp5251, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5253, p5246->name, p5246->type, $tmp5254);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols5231, ((org$pandalanguage$pandac$Symbol*) $tmp5251));
        }
        goto $l5239;
        $l5240:;
    }
    self->symbolTable = symbols5231;
    fieldInitializers5255 = NULL;
    panda$core$Bit $tmp5256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp5256.value) {
    {
        panda$collections$Array* $tmp5257 = (panda$collections$Array*) malloc(40);
        $tmp5257->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp5257->refCount.value = 1;
        panda$collections$Array$init($tmp5257);
        fieldInitializers5255 = $tmp5257;
        {
            panda$core$Object* $tmp5260 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp5261 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5260)->fields)->$class->itable;
            while ($tmp5261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp5261 = $tmp5261->next;
            }
            $fn5263 $tmp5262 = $tmp5261->methods[0];
            panda$collections$Iterator* $tmp5264 = $tmp5262(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5260)->fields));
            f$Iter5259 = $tmp5264;
            $l5265:;
            ITable* $tmp5267 = f$Iter5259->$class->itable;
            while ($tmp5267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5267 = $tmp5267->next;
            }
            $fn5269 $tmp5268 = $tmp5267->methods[0];
            panda$core$Bit $tmp5270 = $tmp5268(f$Iter5259);
            panda$core$Bit $tmp5271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5270);
            if (!$tmp5271.value) goto $l5266;
            {
                ITable* $tmp5273 = f$Iter5259->$class->itable;
                while ($tmp5273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5273 = $tmp5273->next;
                }
                $fn5275 $tmp5274 = $tmp5273->methods[1];
                panda$core$Object* $tmp5276 = $tmp5274(f$Iter5259);
                f5272 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5276);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f5272);
                panda$core$Bit $tmp5278 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f5272->annotations);
                panda$core$Bit $tmp5279 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5278);
                bool $tmp5277 = $tmp5279.value;
                if (!$tmp5277) goto $l5280;
                $tmp5277 = ((panda$core$Bit) { f5272->value != NULL }).value;
                $l5280:;
                panda$core$Bit $tmp5281 = { $tmp5277 };
                if ($tmp5281.value) {
                {
                    panda$collections$Array* $tmp5283 = (panda$collections$Array*) malloc(40);
                    $tmp5283->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp5283->refCount.value = 1;
                    panda$collections$Array$init($tmp5283);
                    children5282 = $tmp5283;
                    org$pandalanguage$pandac$IRNode* $tmp5285 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5285->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5285->refCount.value = 1;
                    panda$core$Object* $tmp5287 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp5288 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp5287));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp5285, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5288);
                    panda$collections$Array$add$panda$collections$Array$T(children5282, ((panda$core$Object*) $tmp5285));
                    org$pandalanguage$pandac$IRNode* $tmp5290 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5290->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5290->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp5290, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f5272->type, ((panda$core$Object*) f5272), ((panda$collections$ListView*) children5282));
                    fieldRef5289 = $tmp5290;
                    panda$collections$Array$clear(children5282);
                    panda$collections$Array$add$panda$collections$Array$T(children5282, ((panda$core$Object*) fieldRef5289));
                    panda$collections$Array$add$panda$collections$Array$T(children5282, ((panda$core$Object*) f5272->value));
                    org$pandalanguage$pandac$IRNode* $tmp5292 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5292->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5292->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5294, ((panda$core$Int64) { 73 }));
                    org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5295;
                    $tmp5295 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
                    $tmp5295->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
                    $tmp5295->refCount = 1;
                    $tmp5295->value = $tmp5294;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5292, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f5272)->position, ((panda$core$Object*) $tmp5295), ((panda$collections$ListView*) children5282));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers5255, ((panda$core$Object*) $tmp5292));
                }
                }
            }
            goto $l5265;
            $l5266:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp5297 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) p_m->body));
    compiled5296 = $tmp5297;
    if (((panda$core$Bit) { compiled5296 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers5255 != NULL }).value) {
        {
            panda$collections$Array* $tmp5299 = (panda$collections$Array*) malloc(40);
            $tmp5299->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5299->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp5299, ((panda$collections$ListView*) fieldInitializers5255));
            children5298 = $tmp5299;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children5298, ((panda$collections$CollectionView*) compiled5296->children));
            org$pandalanguage$pandac$IRNode* $tmp5301 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp5301->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp5301->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5301, ((panda$core$Int64) { 1000 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) children5298));
            compiled5296 = $tmp5301;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols5231) }).value);
    self->symbolTable = old5229;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp5303 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp5303.value) {
    {
        p_m->compiledBody = compiled5296;
    }
    }
    return compiled5296;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled5304;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5305 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled5304 = $tmp5305;
        panda$core$Bit $tmp5307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp5306 = $tmp5307.value;
        if (!$tmp5306) goto $l5308;
        $tmp5306 = ((panda$core$Bit) { compiled5304 != NULL }).value;
        $l5308:;
        panda$core$Bit $tmp5309 = { $tmp5306 };
        if ($tmp5309.value) {
        {
            ITable* $tmp5310 = self->codeGenerator->$class->itable;
            while ($tmp5310->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp5310 = $tmp5310->next;
            }
            $fn5312 $tmp5311 = $tmp5310->methods[3];
            $tmp5311(self->codeGenerator, p_m, compiled5304);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp5313 = self->codeGenerator->$class->itable;
        while ($tmp5313->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5313 = $tmp5313->next;
        }
        $fn5315 $tmp5314 = $tmp5313->methods[2];
        $tmp5314(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter5316;
    org$pandalanguage$pandac$ClassDecl* inner5328;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp5317 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp5317->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5317 = $tmp5317->next;
        }
        $fn5319 $tmp5318 = $tmp5317->methods[0];
        panda$collections$Iterator* $tmp5320 = $tmp5318(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter5316 = $tmp5320;
        $l5321:;
        ITable* $tmp5323 = inner$Iter5316->$class->itable;
        while ($tmp5323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5323 = $tmp5323->next;
        }
        $fn5325 $tmp5324 = $tmp5323->methods[0];
        panda$core$Bit $tmp5326 = $tmp5324(inner$Iter5316);
        panda$core$Bit $tmp5327 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5326);
        if (!$tmp5327.value) goto $l5322;
        {
            ITable* $tmp5329 = inner$Iter5316->$class->itable;
            while ($tmp5329->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5329 = $tmp5329->next;
            }
            $fn5331 $tmp5330 = $tmp5329->methods[1];
            panda$core$Object* $tmp5332 = $tmp5330(inner$Iter5316);
            inner5328 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5332);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner5328);
        }
        goto $l5321;
        $l5322:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old5340;
    panda$collections$Iterator* m$Iter5345;
    org$pandalanguage$pandac$MethodDecl* m5357;
    org$pandalanguage$pandac$ClassDecl* next5367;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp5333 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp5333.value) {
    {
        ITable* $tmp5334 = self->codeGenerator->$class->itable;
        while ($tmp5334->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5334 = $tmp5334->next;
        }
        $fn5336 $tmp5335 = $tmp5334->methods[1];
        $tmp5335(self->codeGenerator, p_cl);
        ITable* $tmp5337 = self->codeGenerator->$class->itable;
        while ($tmp5337->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5337 = $tmp5337->next;
        }
        $fn5339 $tmp5338 = $tmp5337->methods[4];
        $tmp5338(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old5340 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5341 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp5341;
    ITable* $tmp5342 = self->codeGenerator->$class->itable;
    while ($tmp5342->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5342 = $tmp5342->next;
    }
    $fn5344 $tmp5343 = $tmp5342->methods[1];
    $tmp5343(self->codeGenerator, p_cl);
    {
        ITable* $tmp5346 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp5346->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5346 = $tmp5346->next;
        }
        $fn5348 $tmp5347 = $tmp5346->methods[0];
        panda$collections$Iterator* $tmp5349 = $tmp5347(((panda$collections$Iterable*) p_cl->methods));
        m$Iter5345 = $tmp5349;
        $l5350:;
        ITable* $tmp5352 = m$Iter5345->$class->itable;
        while ($tmp5352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5352 = $tmp5352->next;
        }
        $fn5354 $tmp5353 = $tmp5352->methods[0];
        panda$core$Bit $tmp5355 = $tmp5353(m$Iter5345);
        panda$core$Bit $tmp5356 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5355);
        if (!$tmp5356.value) goto $l5351;
        {
            ITable* $tmp5358 = m$Iter5345->$class->itable;
            while ($tmp5358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5358 = $tmp5358->next;
            }
            $fn5360 $tmp5359 = $tmp5358->methods[1];
            panda$core$Object* $tmp5361 = $tmp5359(m$Iter5345);
            m5357 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5361);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m5357);
        }
        goto $l5350;
        $l5351:;
    }
    ITable* $tmp5362 = self->codeGenerator->$class->itable;
    while ($tmp5362->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5362 = $tmp5362->next;
    }
    $fn5364 $tmp5363 = $tmp5362->methods[4];
    $tmp5363(self->codeGenerator, p_cl);
    self->symbolTable = old5340;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp5365 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5366 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5365, ((panda$core$Int64) { 0 }));
    if ($tmp5366.value) {
    {
        panda$core$Object* $tmp5368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next5367 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5368);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next5367);
    }
    }
    panda$core$Int64 $tmp5369 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5369, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5370.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result5371;
    org$pandalanguage$pandac$ASTNode* parsed5374;
    panda$collections$Iterator* cl$Iter5377;
    org$pandalanguage$pandac$ClassDecl* cl5389;
    panda$core$Object* $tmp5372 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result5371 = ((panda$collections$ListView*) $tmp5372);
    if (((panda$core$Bit) { result5371 == NULL }).value) {
    {
        panda$core$String* $tmp5373 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp5373);
        org$pandalanguage$pandac$ASTNode* $tmp5375 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed5374 = $tmp5375;
        if (((panda$core$Bit) { parsed5374 != NULL }).value) {
        {
            panda$collections$ListView* $tmp5376 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed5374);
            result5371 = $tmp5376;
            {
                ITable* $tmp5378 = ((panda$collections$Iterable*) result5371)->$class->itable;
                while ($tmp5378->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp5378 = $tmp5378->next;
                }
                $fn5380 $tmp5379 = $tmp5378->methods[0];
                panda$collections$Iterator* $tmp5381 = $tmp5379(((panda$collections$Iterable*) result5371));
                cl$Iter5377 = $tmp5381;
                $l5382:;
                ITable* $tmp5384 = cl$Iter5377->$class->itable;
                while ($tmp5384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5384 = $tmp5384->next;
                }
                $fn5386 $tmp5385 = $tmp5384->methods[0];
                panda$core$Bit $tmp5387 = $tmp5385(cl$Iter5377);
                panda$core$Bit $tmp5388 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5387);
                if (!$tmp5388.value) goto $l5383;
                {
                    ITable* $tmp5390 = cl$Iter5377->$class->itable;
                    while ($tmp5390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp5390 = $tmp5390->next;
                    }
                    $fn5392 $tmp5391 = $tmp5390->methods[1];
                    panda$core$Object* $tmp5393 = $tmp5391(cl$Iter5377);
                    cl5389 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5393);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl5389)->name), ((panda$core$Object*) cl5389));
                }
                goto $l5382;
                $l5383:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp5394 = (panda$collections$Array*) malloc(40);
            $tmp5394->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5394->refCount.value = 1;
            panda$collections$Array$init($tmp5394);
            result5371 = ((panda$collections$ListView*) $tmp5394);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result5371));
    }
    }
    return result5371;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes5396;
    panda$collections$Iterator* cl$Iter5398;
    org$pandalanguage$pandac$ClassDecl* cl5410;
    panda$collections$ListView* $tmp5397 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes5396 = $tmp5397;
    {
        ITable* $tmp5399 = ((panda$collections$Iterable*) classes5396)->$class->itable;
        while ($tmp5399->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5399 = $tmp5399->next;
        }
        $fn5401 $tmp5400 = $tmp5399->methods[0];
        panda$collections$Iterator* $tmp5402 = $tmp5400(((panda$collections$Iterable*) classes5396));
        cl$Iter5398 = $tmp5402;
        $l5403:;
        ITable* $tmp5405 = cl$Iter5398->$class->itable;
        while ($tmp5405->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5405 = $tmp5405->next;
        }
        $fn5407 $tmp5406 = $tmp5405->methods[0];
        panda$core$Bit $tmp5408 = $tmp5406(cl$Iter5398);
        panda$core$Bit $tmp5409 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5408);
        if (!$tmp5409.value) goto $l5404;
        {
            ITable* $tmp5411 = cl$Iter5398->$class->itable;
            while ($tmp5411->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5411 = $tmp5411->next;
            }
            $fn5413 $tmp5412 = $tmp5411->methods[1];
            panda$core$Object* $tmp5414 = $tmp5412(cl$Iter5398);
            cl5410 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5414);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl5410);
        }
        goto $l5403;
        $l5404:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp5415 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp5415)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp5416 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp5416;
        panda$core$String* $tmp5417 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp5418 = panda$core$String$convert$R$panda$core$String($tmp5417);
        panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5418, &$s5419);
        org$pandalanguage$pandac$Position$wrapper* $tmp5421;
        $tmp5421 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
        $tmp5421->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
        $tmp5421->refCount = 1;
        $tmp5421->value = p_pos;
        panda$core$String* $tmp5422 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5420, ((panda$core$Object*) $tmp5421));
        panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5422, &$s5423);
        panda$core$String* $tmp5425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5424, p_msg);
        panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, &$s5426);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp5427));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp5428 = self->codeGenerator->$class->itable;
    while ($tmp5428->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5428 = $tmp5428->next;
    }
    $fn5430 $tmp5429 = $tmp5428->methods[5];
    $tmp5429(self->codeGenerator);
}

